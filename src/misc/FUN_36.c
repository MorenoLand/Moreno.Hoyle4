#include "protos.h"

void f_005b79d2(void) /* FUN_005b79d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b79d2);
    /* 005b79d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b79d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005b79d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b79d9: push 0x7fbc */ { u32 v = 0x7fbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b79de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b79e1: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5b79e6u); f_005b79b9();
    /* 005b79e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b79e9: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5b79eeu); f_005e03cc();
    /* 005b79ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005b79f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b79f1: ret  */ FN_RET(0x005b79d2); r_esp += 4; return;
}

void f_005b79f2(void) /* FUN_005b79f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b79f2);
    /* 005b79f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b79f3: mov ebp, esp */ r_ebp = r_esp;
    /* 005b79f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b79f9: push 0x7fbd */ { u32 v = 0x7fbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b79fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a01: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5b7a06u); f_005b79b9();
    /* 005b7a06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a09: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5b7a0eu); f_005e03cc();
    /* 005b7a0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7a10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7a11: ret  */ FN_RET(0x005b79f2); r_esp += 4; return;
}

void f_005b7a12(void) /* FUN_005b7a12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7a12);
    /* 005b7a12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a13: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7a15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7a19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a1c: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7a23: je 0x5b7a37 */ if (fZ) goto L_005b7a37;
L_005b7a25:; BB(0x005b7a25);
    /* 005b7a25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a28: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005b7a2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a2f: call 0x61d7da */ r_esp -= 4; W32(r_esp, 0x5b7a34u); f_0061d7da();
    /* 005b7a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b7a37:; BB(0x005b7a37);
    /* 005b7a37: push 0x7fbe */ { u32 v = 0x7fbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a3f: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5b7a44u); f_005b79b9();
    /* 005b7a44: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7a46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7a47: ret  */ FN_RET(0x005b7a12); r_esp += 4; return;
}

void f_005b7a48(void) /* FUN_005b7a48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7a48);
    /* 005b7a48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a49: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7a4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7a4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a52: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5b7a57u); f_005d5d20();
    /* 005b7a57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a5a: mov dword ptr [eax], 0x639aec */ W32((u32)(r_eax), 0x639aecu);
    /* 005b7a60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7a66: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 005b7a6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7a71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7a72: ret 4 */ FN_RET(0x005b7a48); r_esp += 8; return;
}

void f_005b7a75(void) /* FUN_005b7a75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7a75);
    /* 005b7a75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a76: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7a78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7a7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a7e: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 005b7a84: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x5b7a89u); f_0060e7bd();
    /* 005b7a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a8c: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005b7a92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7a95: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b7a9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7a9d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5b7aa0u); call_ind(t); }
    /* 005b7aa0: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7aa3: ret  */ FN_RET(0x005b7a75); r_esp += 4; return;
}

void f_005b7aa4(void) /* FUN_005b7aa4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7aa4);
    /* 005b7aa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7aa5: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7aa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7aa8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7aab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7aae: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5b7ab3u); f_005d5d20();
    /* 005b7ab3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7ab6: mov dword ptr [eax], 0x639b5c */ W32((u32)(r_eax), 0x639b5cu);
    /* 005b7abc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7abf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7ac2: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 005b7ac8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7acb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7acd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7ace: ret 4 */ FN_RET(0x005b7aa4); r_esp += 8; return;
}

void f_005b7ad1(void) /* FUN_005b7ad1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7ad1);
    /* 005b7ad1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ad2: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7ad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ad5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ada: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 005b7ae0: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x5b7ae5u); f_0060e7bd();
    /* 005b7ae5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7ae8: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005b7aee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7af1: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b7af7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7af9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5b7afcu); call_ind(t); }
    /* 005b7afc: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7aff: ret  */ FN_RET(0x005b7ad1); r_esp += 4; return;
}

void f_005b7b3a(void) /* FUN_005b7b3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7b3a);
    /* 005b7b3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b3b: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7b3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b3e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7b41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b44: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005b7b4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b4d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005b7b53: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 005b7b59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b5c: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 005b7b62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7b65: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005b7b6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7b6d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5b7b70u); call_ind(t); }
    /* 005b7b70: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7b72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7b73: ret  */ FN_RET(0x005b7b3a); r_esp += 4; return;
}

void f_005b7b80(void) /* FUN_005b7b80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7b80);
    /* 005b7b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b81: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7b83: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b89: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005b7b8c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7b91u); f_005dfbf0();
    /* 005b7b91: mov dword ptr [ebp - 0x78], 0x639c3c */ W32((u32)(r_ebp+0xffffff88u), 0x639c3cu);
    /* 005b7b98: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7b9b: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7ba0u); f_005dfbf0();
    /* 005b7ba0: mov dword ptr [ebp - 0x14], 0x639c3c */ W32((u32)(r_ebp+0xffffffecu), 0x639c3cu);
    /* 005b7ba7: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7baa: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7bafu); f_005dfbf0();
    /* 005b7baf: mov dword ptr [ebp - 0x24], 0x639c3c */ W32((u32)(r_ebp+0xffffffdcu), 0x639c3cu);
    /* 005b7bb6: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7bb9: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7bbeu); f_005dfbf0();
    /* 005b7bbe: mov dword ptr [ebp - 0x34], 0x639c3c */ W32((u32)(r_ebp+0xffffffccu), 0x639c3cu);
    /* 005b7bc5: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7bc8: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7bcdu); f_005dfbf0();
    /* 005b7bcd: mov dword ptr [ebp - 0x44], 0x639c3c */ W32((u32)(r_ebp+0xffffffbcu), 0x639c3cu);
    /* 005b7bd4: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005b7bd7: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7bdcu); f_005dfbf0();
    /* 005b7bdc: mov dword ptr [ebp - 0x54], 0x639c3c */ W32((u32)(r_ebp+0xffffffacu), 0x639c3cu);
    /* 005b7be3: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b7be6: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5b7bebu); f_005dfbf0();
    /* 005b7beb: mov dword ptr [ebp - 0x64], 0x639c3c */ W32((u32)(r_ebp+0xffffff9cu), 0x639c3cu);
    /* 005b7bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b7bf9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bfd: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7c00: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7c05u); f_005b8010();
    /* 005b7c05: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b7c08: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b7c0b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b7c0e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7c11: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7c14: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b7c17: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7c1a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c1d: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005b7c23: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005b7c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c2a: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7c2d: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7c32u); f_005b8010();
    /* 005b7c32: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b7c38: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b7c3b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b7c3e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005b7c44: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7c47: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b7c4a: mov dword ptr [ebp - 0x68], 3 */ W32((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 005b7c51: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7c54: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c57: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 005b7c5d: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005b7c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c64: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005b7c67: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7c6cu); f_005b8010();
    /* 005b7c6c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b7c72: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b7c75: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005b7c78: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005b7c7e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7c81: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005b7c84: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 005b7c87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c88: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7c8b: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7c90u); f_005b8010();
    /* 005b7c90: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005b7c93: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b7c96: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b7c99: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b7c9c: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7ca0: jle 0x5b7cd7 */ if ((fZ||fS!=fO)) goto L_005b7cd7;
L_005b7ca2:; BB(0x005b7ca2);
    /* 005b7ca2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7ca5: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ca8: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005b7cae: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cb5: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7cb8: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7cbdu); f_005b8010();
    /* 005b7cbd: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7cc3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b7cc6: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005b7cc9: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7ccf: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7cd2: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b7cd5: jmp 0x5b7cf5 */ goto L_005b7cf5;
L_005b7cd7:; BB(0x005b7cd7);
    /* 005b7cd7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7cda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cdb: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7cde: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7ce3u); f_005b8010();
    /* 005b7ce3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7ce6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b7ce9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005b7cec: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7cef: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b7cf2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005b7cf5:; BB(0x005b7cf5);
    /* 005b7cf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7cf8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7cfb: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7cfe: jg 0x5b7d0b */ if ((!fZ&&fS==fO)) goto L_005b7d0b;
L_005b7d00:; BB(0x005b7d00);
    /* 005b7d00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7d03: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7d06: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d09: jle 0x5b7d29 */ if ((fZ||fS!=fO)) goto L_005b7d29;
L_005b7d0b:; BB(0x005b7d0b);
    /* 005b7d0b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7d0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7d11: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d14: jg 0x5b7de8 */ if ((!fZ&&fS==fO)) goto L_005b7de8;
L_005b7d1a:; BB(0x005b7d1a);
    /* 005b7d1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7d1d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b7d20: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d23: jg 0x5b7de8 */ if ((!fZ&&fS==fO)) goto L_005b7de8;
L_005b7d29:; BB(0x005b7d29);
    /* 005b7d29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7d2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7d2f: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d32: jg 0x5b7d3f */ if ((!fZ&&fS==fO)) goto L_005b7d3f;
L_005b7d34:; BB(0x005b7d34);
    /* 005b7d34: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7d37: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b7d3a: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d3d: jle 0x5b7d5d */ if ((fZ||fS!=fO)) goto L_005b7d5d;
L_005b7d3f:; BB(0x005b7d3f);
    /* 005b7d3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7d42: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7d45: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d48: jg 0x5b7de8 */ if ((!fZ&&fS==fO)) goto L_005b7de8;
L_005b7d4e:; BB(0x005b7d4e);
    /* 005b7d4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7d51: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b7d54: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d57: jg 0x5b7de8 */ if ((!fZ&&fS==fO)) goto L_005b7de8;
L_005b7d5d:; BB(0x005b7d5d);
    /* 005b7d5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7d60: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b7d63: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7d66: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005b7d69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7d6c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b7d6f: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b7d72: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005b7d75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7d78: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b7d7b: sub ecx, dword ptr [ebp - 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7d7e: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005b7d81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7d84: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b7d87: sub eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7d8a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005b7d8d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b7d90: imul ecx, dword ptr [ebp - 0x58] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7d94: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b7d97: imul edx, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7d9b: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7d9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d9f: jne 0x5b7de8 */ if (!fZ) goto L_005b7de8;
L_005b7da1:; BB(0x005b7da1);
    /* 005b7da1: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 005b7da8: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b7dab: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7db0u); f_005dfc0f();
    /* 005b7db0: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005b7db3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7db8u); f_005dfc0f();
    /* 005b7db8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7dbb: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7dc0u); f_005dfc0f();
    /* 005b7dc0: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7dc3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7dc8u); f_005dfc0f();
    /* 005b7dc8: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7dcb: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7dd0u); f_005dfc0f();
    /* 005b7dd0: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7dd3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7dd8u); f_005dfc0f();
    /* 005b7dd8: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005b7ddb: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7de0u); f_005dfc0f();
    /* 005b7de0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005b7de3: jmp 0x5b8005 */ goto L_005b8005;
L_005b7de8:; BB(0x005b7de8);
    /* 005b7de8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7deb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7dee: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7df1: jge 0x5b7dfe */ if ((fS==fO)) goto L_005b7dfe;
L_005b7df3:; BB(0x005b7df3);
    /* 005b7df3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7df6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b7df9: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7dfc: jl 0x5b7e14 */ if ((fS!=fO)) goto L_005b7e14;
L_005b7dfe:; BB(0x005b7dfe);
    /* 005b7dfe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7e01: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7e04: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7e07: jge 0x5b7e73 */ if ((fS==fO)) goto L_005b7e73;
L_005b7e09:; BB(0x005b7e09);
    /* 005b7e09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7e0c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b7e0f: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7e12: jge 0x5b7e73 */ if ((fS==fO)) goto L_005b7e73;
L_005b7e14:; BB(0x005b7e14);
    /* 005b7e14: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7e17: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b7e1a: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005b7e1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7e20: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e23: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b7e26: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7e2a: jge 0x5b7e3c */ if ((fS==fO)) goto L_005b7e3c;
L_005b7e2c:; BB(0x005b7e2c);
    /* 005b7e2c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b7e2f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e31: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005b7e34: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b7e37: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b7e39: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_005b7e3c:; BB(0x005b7e3c);
    /* 005b7e3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7e3f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b7e42: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e45: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005b7e48: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7e4b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b7e4e: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e51: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005b7e54: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b7e57: imul ecx, dword ptr [ebp - 0x58] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7e5b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b7e5e: imul edx, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7e62: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7e66: jle 0x5b7e71 */ if ((fZ||fS!=fO)) goto L_005b7e71;
L_005b7e68:; BB(0x005b7e68);
    /* 005b7e68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7e6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b7e71:; BB(0x005b7e71);
    /* 005b7e71: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7e73:; BB(0x005b7e73);
    /* 005b7e73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7e76: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7e79: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e7c: jne 0x5b7ecb */ if (!fZ) goto L_005b7ecb;
L_005b7e7e:; BB(0x005b7e7e);
    /* 005b7e7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b7e81: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b7e84: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7e87: jge 0x5b7ecb */ if ((fS==fO)) goto L_005b7ecb;
L_005b7e89:; BB(0x005b7e89);
    /* 005b7e89: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7e8c: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e8f: je 0x5b7eaf */ if (fZ) goto L_005b7eaf;
L_005b7e91:; BB(0x005b7e91);
    /* 005b7e91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7e94: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e97: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7e9a: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e9d: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7ea2: jle 0x5b7ead */ if ((fZ||fS!=fO)) goto L_005b7ead;
L_005b7ea4:; BB(0x005b7ea4);
    /* 005b7ea4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7ea7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7eaa: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005b7ead:; BB(0x005b7ead);
    /* 005b7ead: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7eaf:; BB(0x005b7eaf);
    /* 005b7eaf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7eb2: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7eb5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b7eb8: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7ebb: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7ec0: jle 0x5b7ecb */ if ((fZ||fS!=fO)) goto L_005b7ecb;
L_005b7ec2:; BB(0x005b7ec2);
    /* 005b7ec2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7ec5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ec8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005b7ecb:; BB(0x005b7ecb);
    /* 005b7ecb: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005b7ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ecf: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7ed2: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7ed7u); f_005b8010();
    /* 005b7ed7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7eda: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b7edd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7ee0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b7ee3: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005b7ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ee7: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7eea: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7eefu); f_005b8010();
    /* 005b7eef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7ef2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b7ef5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7ef8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b7efb: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005b7efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7eff: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7f02: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7f07u); f_005b8010();
    /* 005b7f07: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b7f0a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005b7f0d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b7f10: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005b7f13: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7f16: cmp eax, dword ptr [ebp - 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f19: jne 0x5b7f25 */ if (!fZ) goto L_005b7f25;
L_005b7f1b:; BB(0x005b7f1b);
    /* 005b7f1b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7f1e: cmp ecx, dword ptr [ebp - 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f21: jne 0x5b7f25 */ if (!fZ) goto L_005b7f25;
L_005b7f23:; BB(0x005b7f23);
    /* 005b7f23: jmp 0x5b7f6f */ goto L_005b7f6f;
L_005b7f25:; BB(0x005b7f25);
    /* 005b7f25: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005b7f28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7f2b: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005b7f2e: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005b7f31: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005b7f32: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005b7f32, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005b7f32, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b7f35: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b7f38: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7f3b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7f3d: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005b7f43: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b7f49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f4a: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7f4d: call 0x5b8010 */ r_esp -= 4; W32(r_esp, 0x5b7f52u); f_005b8010();
    /* 005b7f52: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b7f58: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b7f5b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b7f5e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b7f64: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b7f67: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005b7f6a: jmp 0x5b7cf5 */ goto L_005b7cf5;
L_005b7f6f:; BB(0x005b7f6f);
    /* 005b7f6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b7f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f77: je 0x5b7fbd */ if (fZ) goto L_005b7fbd;
L_005b7f79:; BB(0x005b7f79);
    /* 005b7f79: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 005b7f80: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b7f83: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7f88u); f_005dfc0f();
    /* 005b7f88: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005b7f8b: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7f90u); f_005dfc0f();
    /* 005b7f90: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7f93: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7f98u); f_005dfc0f();
    /* 005b7f98: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7f9b: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fa0u); f_005dfc0f();
    /* 005b7fa0: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7fa3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fa8u); f_005dfc0f();
    /* 005b7fa8: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7fab: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fb0u); f_005dfc0f();
    /* 005b7fb0: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005b7fb3: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fb8u); f_005dfc0f();
    /* 005b7fb8: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005b7fbb: jmp 0x5b8005 */ goto L_005b8005;
L_005b7fbd:; BB(0x005b7fbd);
    /* 005b7fbd: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 005b7fc7: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b7fca: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fcfu); f_005dfc0f();
    /* 005b7fcf: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005b7fd2: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fd7u); f_005dfc0f();
    /* 005b7fd7: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b7fda: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fdfu); f_005dfc0f();
    /* 005b7fdf: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005b7fe2: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fe7u); f_005dfc0f();
    /* 005b7fe7: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005b7fea: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fefu); f_005dfc0f();
    /* 005b7fef: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b7ff2: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7ff7u); f_005dfc0f();
    /* 005b7ff7: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005b7ffa: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5b7fffu); f_005dfc0f();
    /* 005b7fff: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
L_005b8005:; BB(0x005b8005);
    /* 005b8005: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8008: ret  */ FN_RET(0x005b7b80); r_esp += 4; return;
}

void f_005b8010(void) /* FUN_005b8010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8010);
    /* 005b8010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8011: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b801a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b801d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b8020: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005b8023: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8026: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8028: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8029: ret 4 */ FN_RET(0x005b8010); r_esp += 8; return;
}

void f_005b8030(void) /* FUN_005b8030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8030);
    /* 005b8030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8031: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8033: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8036: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b8039: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b803c: mov dword ptr [ebp - 4], 0x4000 */ W32((u32)(r_ebp+0xfffffffcu), 0x4000u);
    /* 005b8043: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8046: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8047: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b804cu); f_0048ab58();
    /* 005b804c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b804f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b8052:; BB(0x005b8052);
    /* 005b8052: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8056: je 0x5b80cc */ if (fZ) goto L_005b80cc;
L_005b8058:; BB(0x005b8058);
    /* 005b8058: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b805b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b805e: jae 0x5b8068 */ if (!fC) goto L_005b8068;
L_005b8060:; BB(0x005b8060);
    /* 005b8060: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8063: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b8066: jmp 0x5b806e */ goto L_005b806e;
L_005b8068:; BB(0x005b8068);
    /* 005b8068: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b806b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005b806e:; BB(0x005b806e);
    /* 005b806e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8071: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8072: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8074: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8078: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b807b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b807c: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5b8081u); f_00624250();
    /* 005b8081: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8084: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8087: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b808a: jae 0x5b8094 */ if (!fC) goto L_005b8094;
L_005b808c:; BB(0x005b808c);
    /* 005b808c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b808f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b8092: jmp 0x5b809a */ goto L_005b809a;
L_005b8094:; BB(0x005b8094);
    /* 005b8094: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8097: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005b809a:; BB(0x005b809a);
    /* 005b809a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b809d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b809e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b80a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b80a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a8: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b80adu); f_00624f00();
    /* 005b80ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b80b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b80b3: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b80b6: jbe 0x5b80c3 */ if ((fC||fZ)) goto L_005b80c3;
L_005b80b8:; BB(0x005b80b8);
    /* 005b80b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b80bb: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b80be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b80c1: jmp 0x5b80ca */ goto L_005b80ca;
L_005b80c3:; BB(0x005b80c3);
    /* 005b80c3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005b80ca:; BB(0x005b80ca);
    /* 005b80ca: jmp 0x5b8052 */ goto L_005b8052;
L_005b80cc:; BB(0x005b80cc);
    /* 005b80cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b80cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b80d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b80d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b80dbu); f_0048ac1b();
    /* 005b80db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b80de: mov esp, ebp */ r_esp = r_ebp;
    /* 005b80e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b80e1: ret  */ FN_RET(0x005b8030); r_esp += 4; return;
}

void f_005b80e2(void) /* FUN_005b80e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b80e2);
    /* 005b80e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b80e3: mov ebp, esp */ r_ebp = r_esp;
    /* 005b80e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b80e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b80ec: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5b80f1u); f_0048e320();
    /* 005b80f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b80f4: mov dword ptr [eax], 0x639c44 */ W32((u32)(r_eax), 0x639c44u);
    /* 005b80fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b80fd: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005b8104: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8107: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005b810e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8111: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005b8118: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b811b: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005b8122: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8125: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8128: ret  */ FN_RET(0x005b80e2); r_esp += 4; return;
}

void f_005b8129(void) /* FUN_005b8129 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8129);
    /* 005b8129: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b812a: mov ebp, esp */ r_ebp = r_esp;
    /* 005b812c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b812f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b8132: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8135: mov dword ptr [eax], 0x639c44 */ W32((u32)(r_eax), 0x639c44u);
    /* 005b813b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b813e: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8142: je 0x5b8153 */ if (fZ) goto L_005b8153;
L_005b8144:; BB(0x005b8144);
    /* 005b8144: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8147: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b814a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b814b: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5b8150u); f_006241d0();
    /* 005b8150: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8153:; BB(0x005b8153);
    /* 005b8153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8156: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b815a: je 0x5b8171 */ if (fZ) goto L_005b8171;
L_005b815c:; BB(0x005b815c);
    /* 005b815c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b815f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8162: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b8165: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8169: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b816eu); f_0048ac1b();
    /* 005b816e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8171:; BB(0x005b8171);
    /* 005b8171: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8174: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8178: je 0x5b818f */ if (fZ) goto L_005b818f;
L_005b817a:; BB(0x005b817a);
    /* 005b817a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b817d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8180: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8183: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8187: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b818cu); f_0048ac1b();
    /* 005b818c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b818f:; BB(0x005b818f);
    /* 005b818f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8192: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5b8197u); f_0048e361();
    /* 005b8197: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b819a: ret  */ FN_RET(0x005b8129); r_esp += 4; return;
}

void f_005b819b(void) /* FUN_005b819b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b819b);
    /* 005b819b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b819c: mov ebp, esp */ r_ebp = r_esp;
    /* 005b819e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b819f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b81a2: push 0x697a50 */ { u32 v = 0x697a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005b81a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b81aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81ab: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5b81b0u); f_006243c0();
    /* 005b81b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b81b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81b6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005b81b9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b81bb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b81c0u); f_0048ab58();
    /* 005b81c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b81c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81c6: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005b81c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81cc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b81cf: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 005b81d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81d8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b81db: mov dword ptr [eax + 4], 0x465250 */ W32((u32)(r_eax+0x4u), 0x465250u);
    /* 005b81e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81e5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b81e8: mov dword ptr [edx + 8], 2 */ W32((u32)(r_edx+0x8u), 0x2u);
    /* 005b81ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81f2: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b81f5: mov dword ptr [ecx + 0x10], 0x28 */ W32((u32)(r_ecx+0x10u), 0x28u);
    /* 005b81fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81ff: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8202: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8205: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8208: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b820b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b820e: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005b8211: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8214: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8217: mov dword ptr [edx + 0x14], 0x18 */ W32((u32)(r_edx+0x14u), 0x18u);
    /* 005b821e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8221: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8224: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8228: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b822du); f_0048ab58();
    /* 005b822d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8230: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8233: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005b8236: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8239: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b823c: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005b8242: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8245: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8248: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 005b824f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8252: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8255: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005b825c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b825f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8262: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005b8269: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b826c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b826f: mov dword ptr [edx + 0x10], 0x18 */ W32((u32)(r_edx+0x10u), 0x18u);
    /* 005b8276: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8279: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b827c: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 005b8283: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8286: call 0x5b8291 */ r_esp -= 4; W32(r_esp, 0x5b828bu); f_005b8291();
    /* 005b828b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b828d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b828e: ret 4 */ FN_RET(0x005b819b); r_esp += 8; return;
}

void f_005b8291(void) /* FUN_005b8291 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8291);
    /* 005b8291: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8292: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8294: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8295: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8298: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b829b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b829e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b829f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b82a6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b82a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b82aa: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b82afu); f_00624f00();
    /* 005b82af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b82b5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b82b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b82be: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b82c1: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b82c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b82c8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b82cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82cc: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b82d1u); f_00624f00();
    /* 005b82d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b82d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b82d7: ret  */ FN_RET(0x005b8291); r_esp += 4; return;
}

void f_005b82d8(void) /* FUN_005b82d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b82d8);
    /* 005b82d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b82d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005b82db: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b82de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b82df: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b82e2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b82e9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82eb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b82f0u); f_0048ab58();
    /* 005b82f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b82f6: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005b82f9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b82fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b82ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8300: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8302: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8304: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8307: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b830a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b830b: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5b8310u); f_00624250();
    /* 005b8310: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8313: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8316: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8319: cmp dword ptr [ecx + 8], 1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b831d: jne 0x5b8338 */ if (!fZ) goto L_005b8338;
L_005b831f:; BB(0x005b831f);
    /* 005b831f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8322: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8325: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b8328: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b832b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b832d: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005b8330: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8333: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8336: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_005b8338:; BB(0x005b8338);
    /* 005b8338: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b833b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b833e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8340: cmp dword ptr [eax], 1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8343: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005b8346: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8349: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b834d: je 0x5b8357 */ if (fZ) goto L_005b8357;
L_005b834f:; BB(0x005b834f);
    /* 005b834f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8352: call 0x5b923b */ r_esp -= 4; W32(r_esp, 0x5b8357u); f_005b923b();
L_005b8357:; BB(0x005b8357);
    /* 005b8357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8359: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b835c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b835f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005b8362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8363: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8366: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b836a: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b836fu); f_00626620();
    /* 005b836f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8372: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8375: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8378: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b837b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b837c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b8381u); f_0048ab58();
    /* 005b8381: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8384: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8387: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005b838a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b838d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8391: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8393: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8396: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8399: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b839c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b839d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83a0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b83a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b83a4: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5b83a9u); f_00624250();
    /* 005b83a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b83ac: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83af: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b83b2: cmp dword ptr [ecx + 8], 1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b83b6: jne 0x5b8482 */ if (!fZ) goto L_005b8482;
L_005b83bc:; BB(0x005b83bc);
    /* 005b83bc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83bf: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b83c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b83c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b83c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b83ca: mov dx, word ptr [ecx + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2u))) & 0xffffu);
    /* 005b83ce: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83d1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b83d4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005b83d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b83da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b83dc: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005b83df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83e2: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b83e5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b83e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b83ea: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b83ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b83ef: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b83f2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b83f5: jmp 0x5b8400 */ goto L_005b8400;
L_005b83f7:; BB(0x005b83f7);
    /* 005b83f7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b83fa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b83fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005b8400:; BB(0x005b8400);
    /* 005b8400: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8404: je 0x5b8482 */ if (fZ) goto L_005b8482;
L_005b8406:; BB(0x005b8406);
    /* 005b8406: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8409: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b840c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b840f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8412: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8415: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8418: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b841b: mov ecx, dword ptr [esi + ecx + 0x10] */ r_ecx = R32((u32)(r_esi+r_ecx+0x10u));
    /* 005b841f: mov dword ptr [eax + edx + 0x14], ecx */ W32((u32)(r_eax+r_edx+0x14u), r_ecx);
    /* 005b8423: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8426: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8429: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b842c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b842f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8432: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8435: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8438: mov edx, dword ptr [esi + edx + 0xc] */ r_edx = R32((u32)(r_esi+r_edx+0xcu));
    /* 005b843c: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 005b8440: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8443: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8446: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8449: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b844b: mov dx, word ptr [ecx + eax + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax+0x8u))) & 0xffffu);
    /* 005b8450: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8453: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8456: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8459: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b845c: mov dword ptr [ecx + eax + 0xc], edx */ W32((u32)(r_ecx+r_eax+0xcu), r_edx);
    /* 005b8460: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8463: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8466: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8469: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b846c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b846f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8472: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8475: mov ecx, dword ptr [esi + ecx + 4] */ r_ecx = R32((u32)(r_esi+r_ecx+0x4u));
    /* 005b8479: mov dword ptr [eax + edx + 8], ecx */ W32((u32)(r_eax+r_edx+0x8u), r_ecx);
    /* 005b847d: jmp 0x5b83f7 */ goto L_005b83f7;
L_005b8482:; BB(0x005b8482);
    /* 005b8482: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8486: je 0x5b857c */ if (fZ) goto L_005b857c;
L_005b848c:; BB(0x005b848c);
    /* 005b848c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b848f: call 0x5b929d */ r_esp -= 4; W32(r_esp, 0x5b8494u); f_005b929d();
    /* 005b8494: push 0x2eec */ { u32 v = 0x2eecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8499: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b849eu); f_0048ab58();
    /* 005b849e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b84a1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b84a4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84a8: je 0x5b84b9 */ if (fZ) goto L_005b84b9;
L_005b84aa:; BB(0x005b84aa);
    /* 005b84aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b84ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b84af: call 0x604e70 */ r_esp -= 4; W32(r_esp, 0x5b84b4u); f_00604e70();
    /* 005b84b4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b84b7: jmp 0x5b84c0 */ goto L_005b84c0;
L_005b84b9:; BB(0x005b84b9);
    /* 005b84b9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005b84c0:; BB(0x005b84c0);
    /* 005b84c0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b84c3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b84c6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005b84c9: mov dword ptr [ebp - 0x14], 0x424d5953 */ W32((u32)(r_ebp+0xffffffecu), 0x424d5953u);
    /* 005b84d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b84d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b84d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b84d6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b84d9: call 0x5b85c8 */ r_esp -= 4; W32(r_esp, 0x5b84deu); f_005b85c8();
    /* 005b84de: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b84e1: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84e5: jne 0x5b84f4 */ if (!fZ) goto L_005b84f4;
L_005b84e7:; BB(0x005b84e7);
    /* 005b84e7: push 0x697a54 */ { u32 v = 0x697a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005b84ec: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5b84f1u); f_0060fc40();
    /* 005b84f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b84f4:; BB(0x005b84f4);
    /* 005b84f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b84f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b84f9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b84fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b84ff: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8502: mov edx, dword ptr [eax + ecx + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx+0x10u));
    /* 005b8506: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8507: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b850a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b850d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b850e: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b8513u); f_00626620();
    /* 005b8513: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8516: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8519: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b851c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b851f: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8522: mov edx, dword ptr [eax + ecx + 0x14] */ r_edx = R32((u32)(r_eax+r_ecx+0x14u));
    /* 005b8526: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b8529: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b852c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b852f: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8533: je 0x5b856a */ if (fZ) goto L_005b856a;
L_005b8535:; BB(0x005b8535);
    /* 005b8535: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8538: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b853b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b853c: call 0x6265f0 */ r_esp -= 4; W32(r_esp, 0x5b8541u); f_006265f0();
    /* 005b8541: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8544: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005b8547:; BB(0x005b8547);
    /* 005b8547: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b854b: je 0x5b856a */ if (fZ) goto L_005b856a;
L_005b854d:; BB(0x005b854d);
    /* 005b854d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b8550: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8553: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b8556: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8559: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b855c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b855d: call 0x6265f0 */ r_esp -= 4; W32(r_esp, 0x5b8562u); f_006265f0();
    /* 005b8562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8565: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b8568: jmp 0x5b8547 */ goto L_005b8547;
L_005b856a:; BB(0x005b856a);
    /* 005b856a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b856d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8571: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8574: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005b8577: call 0x605596 */ r_esp -= 4; W32(r_esp, 0x5b857cu); f_00605596();
L_005b857c:; BB(0x005b857c);
    /* 005b857c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b857d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b857f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8580: ret  */ FN_RET(0x005b82d8); r_esp += 4; return;
}

void f_005b8581(void) /* FUN_005b8581 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8581);
    /* 005b8581: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8582: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8584: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8585: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8588: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b858b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b858c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b858f: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8593: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5b8598u); f_00624510();
    /* 005b8598: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b859b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b859e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b859f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b85a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b85a3: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5b85a8u); f_006243c0();
    /* 005b85a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b85ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85ae: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005b85b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85b4: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b85b8: je 0x5b85c2 */ if (fZ) goto L_005b85c2;
L_005b85ba:; BB(0x005b85ba);
    /* 005b85ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85bd: call 0x5b82d8 */ r_esp -= 4; W32(r_esp, 0x5b85c2u); f_005b82d8();
L_005b85c2:; BB(0x005b85c2);
    /* 005b85c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b85c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b85c5: ret 8 */ FN_RET(0x005b8581); r_esp += 12; return;
}

void f_005b85c8(void) /* FUN_005b85c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b85c8);
    /* 005b85c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005b85cb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b85ce: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b85d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005b85d8:; BB(0x005b85d8);
    /* 005b85d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b85db: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b85de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85e1: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b85e3: jae 0x5b861a */ if (!fC) goto L_005b861a;
L_005b85e5:; BB(0x005b85e5);
    /* 005b85e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b85e8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b85eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85ee: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b85f1: mov eax, dword ptr [ecx + edx + 8] */ r_eax = R32((u32)(r_ecx+r_edx+0x8u));
    /* 005b85f5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b85f8: jne 0x5b860f */ if (!fZ) goto L_005b860f;
L_005b85fa:; BB(0x005b85fa);
    /* 005b85fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b85fd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8600: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8603: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8606: mov ecx, dword ptr [edx + eax + 0xc] */ r_ecx = R32((u32)(r_edx+r_eax+0xcu));
    /* 005b860a: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b860d: je 0x5b861a */ if (fZ) goto L_005b861a;
L_005b860f:; BB(0x005b860f);
    /* 005b860f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8612: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8615: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b8618: jmp 0x5b85d8 */ goto L_005b85d8;
L_005b861a:; BB(0x005b861a);
    /* 005b861a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b861d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b861f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8620: ret 8 */ FN_RET(0x005b85c8); r_esp += 12; return;
}

void f_005b8623(void) /* FUN_005b8623 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8623);
    /* 005b8623: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8624: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8626: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b862c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b862d: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005b8633: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8639: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b863c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b863d: call 0x6266c0 */ r_esp -= 4; W32(r_esp, 0x5b8642u); f_006266c0();
    /* 005b8642: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8645: push 0x697a78 */ { u32 v = 0x697a78u; r_esp -= 4; W32(r_esp, v); }
    /* 005b864a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b864d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b864e: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5b8653u); f_006243c0();
    /* 005b8653: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8656: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005b865c: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8663: jne 0x5b868b */ if (!fZ) goto L_005b868b;
L_005b8665:; BB(0x005b8665);
    /* 005b8665: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8669: push 0x697a7c */ { u32 v = 0x697a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b866e: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 005b8671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8672: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5b8677u); f_00624050();
    /* 005b8677: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b867a: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 005b867d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b867e: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5b8683u); f_0060fc40();
    /* 005b8683: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8686: jmp 0x5b89f7 */ goto L_005b89f7;
L_005b868b:; BB(0x005b868b);
    /* 005b868b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b868e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b868f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8693: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8699: call 0x5b8e86 */ r_esp -= 4; W32(r_esp, 0x5b869eu); f_005b8e86();
    /* 005b869e: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b86a4: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b86a7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b86a9: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005b86af: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b86b5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b86b8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b86bb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b86be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b86bf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b86c4u); f_0048ab58();
    /* 005b86c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b86c7: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005b86cd: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b86d3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b86d6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b86d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b86da: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b86e0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b86e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b86e4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005b86ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b86eb: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5b86f0u); f_00625050();
    /* 005b86f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b86f3: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b86f9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b86fc: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005b8702: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b8708: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8709: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b870eu); f_0048ac1b();
    /* 005b870e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8711: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8717: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005b871d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005b8720: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8726: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8729: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b872c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b872f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8735: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8738: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005b873b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8741: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8744: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8746: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8749: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b874f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8752: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005b8754: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b875a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b875d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b8763: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8766: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8769: mov dword ptr [eax + ecx + 8], edx */ W32((u32)(r_eax+r_ecx+0x8u), r_edx);
    /* 005b876d: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8773: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8776: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b877c: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b877f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b8782: mov dword ptr [ecx + edx + 0xc], eax */ W32((u32)(r_ecx+r_edx+0xcu), r_eax);
    /* 005b8786: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b878c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b878f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005b8795: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8798: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b879b: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b87a1: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005b87a4: mov esi, dword ptr [ebp - 0x8c] */ r_esi = R32((u32)(r_ebp+0xffffff74u));
    /* 005b87aa: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005b87ad: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005b87b0: mov edx, dword ptr [edx + eax + 0x10] */ r_edx = R32((u32)(r_edx+r_eax+0x10u));
    /* 005b87b4: add edx, dword ptr [ecx + esi + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b87b8: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b87be: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b87c1: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005b87c7: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b87ca: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 005b87ce: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b87d4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b87d7: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b87db: je 0x5b8812 */ if (fZ) goto L_005b8812;
L_005b87dd:; BB(0x005b87dd);
    /* 005b87dd: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b87e1: je 0x5b87fa */ if (fZ) goto L_005b87fa;
L_005b87e3:; BB(0x005b87e3);
    /* 005b87e3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b87e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b87e7: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5b87ecu); f_00624990();
    /* 005b87ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b87ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b87f2: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005b87f8: jmp 0x5b8804 */ goto L_005b8804;
L_005b87fa:; BB(0x005b87fa);
    /* 005b87fa: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
L_005b8804:; BB(0x005b8804);
    /* 005b8804: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b880a: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005b8810: jmp 0x5b881c */ goto L_005b881c;
L_005b8812:; BB(0x005b8812);
    /* 005b8812: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005b881c:; BB(0x005b881c);
    /* 005b881c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b8822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8823: call 0x48e3b1 */ r_esp -= 4; W32(r_esp, 0x5b8828u); f_0048e3b1();
    /* 005b8828: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b882b: add eax, dword ptr [ebp - 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8831: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8837: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b883a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b8840: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8843: mov dword ptr [edx + ecx + 0x14], eax */ W32((u32)(r_edx+r_ecx+0x14u), r_eax);
    /* 005b8847: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b884d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8850: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8856: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8859: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b885f: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8862: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 005b8865: add eax, dword ptr [edx + ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8869: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b886f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8872: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005b8875: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8877: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b887d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8880: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b8886: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8889: mov eax, dword ptr [ecx + edx + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx+0x10u));
    /* 005b888d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b888e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8894: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8897: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8898: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b889du); f_00626620();
    /* 005b889d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b88a0: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b88a6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b88a9: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b88ad: je 0x5b895e */ if (fZ) goto L_005b895e;
L_005b88b3:; BB(0x005b88b3);
    /* 005b88b3: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b88b7: je 0x5b88e3 */ if (fZ) goto L_005b88e3;
L_005b88b9:; BB(0x005b88b9);
    /* 005b88b9: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b88bf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b88c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b88c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b88c5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b88c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88c9: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5b88ceu); f_00624990();
    /* 005b88ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b88d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b88d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b88d5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005b88d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88d9: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b88deu); f_00624f00();
    /* 005b88de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b88e1: jmp 0x5b895e */ goto L_005b895e;
L_005b88e3:; BB(0x005b88e3);
    /* 005b88e3: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b88e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b88ec: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b88ef: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b88f2: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b88f8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b88fb: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005b88fe: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8904: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8907: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b890b: jl 0x5b8944 */ if ((fS!=fO)) goto L_005b8944;
L_005b890d:; BB(0x005b890d);
    /* 005b890d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8913: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8916: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b8918: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 005b891b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b891d: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8923: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005b8929: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b892f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8932: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8934: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8937: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b893d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8940: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b8942: jmp 0x5b895e */ goto L_005b895e;
L_005b8944:; BB(0x005b8944);
    /* 005b8944: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b894a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b894d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b894e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8950: call 0x626330 */ r_esp -= 4; W32(r_esp, 0x5b8955u); f_00626330();
    /* 005b8955: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8958: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
L_005b895e:; BB(0x005b895e);
    /* 005b895e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005b8964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8965: call 0x48e3b1 */ r_esp -= 4; W32(r_esp, 0x5b896au); f_0048e3b1();
    /* 005b896a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b896d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b896e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b8974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8975: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b897b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b897e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b897f: call 0x5b8030 */ r_esp -= 4; W32(r_esp, 0x5b8984u); f_005b8030();
    /* 005b8984: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8987: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b898d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8990: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8991: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8993: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b8999: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b899c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b899f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89a0: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b89a6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b89a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89aa: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b89afu); f_00624f00();
    /* 005b89af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b89b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b89b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b89b6: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b89bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b89bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b89c0: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b89c5u); f_00626620();
    /* 005b89c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b89c8: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b89ce: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b89d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b89d4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b89d6: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b89dc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b89df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89e0: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b89e5u); f_00624f00();
    /* 005b89e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b89e8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b89ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89ef: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5b89f4u); f_006241d0();
    /* 005b89f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b89f7:; BB(0x005b89f7);
    /* 005b89f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b89f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b89fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b89fb: ret 0x10 */ FN_RET(0x005b8623); r_esp += 20; return;
}

void f_005b89fe(void) /* FUN_005b89fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b89fe);
    /* 005b89fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b89ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8a01: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a05: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b8a08: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a0b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a0f: jne 0x5b8a16 */ if (!fZ) goto L_005b8a16;
L_005b8a11:; BB(0x005b8a11);
    /* 005b8a11: jmp 0x5b8cb1 */ goto L_005b8cb1;
L_005b8a16:; BB(0x005b8a16);
    /* 005b8a16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a19: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8a1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a1d: call 0x6266c0 */ r_esp -= 4; W32(r_esp, 0x5b8a22u); f_006266c0();
    /* 005b8a22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a25: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b8a28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a29: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b8a2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a30: call 0x5b8e86 */ r_esp -= 4; W32(r_esp, 0x5b8a35u); f_005b8e86();
    /* 005b8a35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a38: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8a3b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8a3d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8a40: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a43: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8a46: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8a49: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8a4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a4d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b8a52u); f_0048ab58();
    /* 005b8a52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a55: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b8a58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a5b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8a5e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8a61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a62: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a65: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a6d: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5b8a72u); f_00625050();
    /* 005b8a72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a75: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a78: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8a7b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b8a7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8a81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a82: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b8a87u); f_0048ac1b();
    /* 005b8a87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a8a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8a90: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005b8a93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8a96: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8a99: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8a9c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8aa2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8aa5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005b8aa8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8aab: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8aae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8ab0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8ab3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8ab6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8ab9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005b8abb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8abe: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8ac1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8ac4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8ac7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b8aca: mov dword ptr [eax + ecx + 8], edx */ W32((u32)(r_eax+r_ecx+0x8u), r_edx);
    /* 005b8ace: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8ad1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8ad4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8ad7: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8ada: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b8add: mov dword ptr [ecx + edx + 0xc], eax */ W32((u32)(r_ecx+r_edx+0xcu), r_eax);
    /* 005b8ae1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8ae4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8ae7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8aea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8aed: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8af0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8af3: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005b8af6: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8af9: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005b8afc: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005b8aff: mov edx, dword ptr [edx + eax + 0x10] */ r_edx = R32((u32)(r_edx+r_eax+0x10u));
    /* 005b8b03: add edx, dword ptr [ecx + esi + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8b07: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b0a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8b0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8b10: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8b13: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 005b8b17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b1a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8b1d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b21: je 0x5b8b4c */ if (fZ) goto L_005b8b4c;
L_005b8b23:; BB(0x005b8b23);
    /* 005b8b23: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b27: je 0x5b8b3d */ if (fZ) goto L_005b8b3d;
L_005b8b29:; BB(0x005b8b29);
    /* 005b8b29: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005b8b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b2d: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5b8b32u); f_00624990();
    /* 005b8b32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8b35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8b38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b8b3b: jmp 0x5b8b44 */ goto L_005b8b44;
L_005b8b3d:; BB(0x005b8b3d);
    /* 005b8b3d: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005b8b44:; BB(0x005b8b44);
    /* 005b8b44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8b47: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b8b4a: jmp 0x5b8b53 */ goto L_005b8b53;
L_005b8b4c:; BB(0x005b8b4c);
    /* 005b8b4c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005b8b53:; BB(0x005b8b53);
    /* 005b8b53: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8b56: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8b59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b5c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8b5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8b62: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8b65: mov dword ptr [ecx + eax + 0x14], edx */ W32((u32)(r_ecx+r_eax+0x14u), r_edx);
    /* 005b8b69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b6c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b8b6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b72: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8b75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8b78: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8b7b: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005b8b7e: add edx, dword ptr [ecx + eax + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8b82: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b85: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8b88: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005b8b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8b90: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8b93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8b96: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8b99: mov edx, dword ptr [eax + ecx + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx+0x10u));
    /* 005b8b9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8ba1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8ba4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ba5: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b8baau); f_00626620();
    /* 005b8baa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8bad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8bb0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8bb3: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8bb7: je 0x5b8c49 */ if (fZ) goto L_005b8c49;
L_005b8bbd:; BB(0x005b8bbd);
    /* 005b8bbd: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8bc1: je 0x5b8bea */ if (fZ) goto L_005b8bea;
L_005b8bc3:; BB(0x005b8bc3);
    /* 005b8bc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8bc6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8bc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bcc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005b8bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bd0: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5b8bd5u); f_00624990();
    /* 005b8bd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8bd8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bdc: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005b8bdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8be0: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b8be5u); f_00624f00();
    /* 005b8be5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8be8: jmp 0x5b8c49 */ goto L_005b8c49;
L_005b8bea:; BB(0x005b8bea);
    /* 005b8bea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8bed: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8bf0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b8bf3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8bf6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8bf9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8bfc: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005b8bff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c02: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8c05: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8c09: jl 0x5b8c35 */ if ((fS!=fO)) goto L_005b8c35;
L_005b8c0b:; BB(0x005b8c0b);
    /* 005b8c0b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8c11: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8c13: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 005b8c16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8c18: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b8c1d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b8c20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c23: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8c26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b8c28: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8c2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c2e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8c31: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b8c33: jmp 0x5b8c49 */ goto L_005b8c49;
L_005b8c35:; BB(0x005b8c35);
    /* 005b8c35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c38: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c3e: call 0x626330 */ r_esp -= 4; W32(r_esp, 0x5b8c43u); f_00626330();
    /* 005b8c43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c46: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005b8c49:; BB(0x005b8c49);
    /* 005b8c49: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c4c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b8c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c52: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8c55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8c59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c5a: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b8c5fu); f_00624f00();
    /* 005b8c5f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c62: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c65: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8c68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c6b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c6e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8c71: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c75: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c78: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c7c: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b8c81u); f_00624f00();
    /* 005b8c81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c8b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8c8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c8f: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b8c94u); f_00626620();
    /* 005b8c94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8c9a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8c9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ca0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ca2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8ca5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ca9: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b8caeu); f_00624f00();
    /* 005b8cae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8cb1:; BB(0x005b8cb1);
    /* 005b8cb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b8cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8cb5: ret 0x14 */ FN_RET(0x005b89fe); r_esp += 24; return;
}

void f_005b8cb8(void) /* FUN_005b8cb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8cb8);
    /* 005b8cb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8cb9: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8cbb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8cbe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8cc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8cc4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8cc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8cc9: jmp 0x5b8cd4 */ goto L_005b8cd4;
L_005b8ccb:; BB(0x005b8ccb);
    /* 005b8ccb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8cce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8cd1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005b8cd4:; BB(0x005b8cd4);
    /* 005b8cd4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8cd7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8cda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8cdd: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b8cdf: jae 0x5b8d41 */ if (!fC) goto L_005b8d41;
L_005b8ce1:; BB(0x005b8ce1);
    /* 005b8ce1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8ce4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8ce7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8cea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8ced: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8cf0: lea eax, [ecx + edx + 8] */ r_eax = (u32)(r_ecx+r_edx+0x8u);
    /* 005b8cf4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8cf7: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8cfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8cfd: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8d00: lea edx, [edx + ecx + 8] */ r_edx = (u32)(r_edx+r_ecx+0x8u);
    /* 005b8d04: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8d06: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b8d08: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b8d0b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005b8d0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8d11: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005b8d14: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005b8d17: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005b8d1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8d1d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8d20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8d23: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8d26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8d29: mov edx, dword ptr [edx + eax + 0x10] */ r_edx = R32((u32)(r_edx+r_eax+0x10u));
    /* 005b8d2d: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8d2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8d32: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8d35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8d38: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005b8d3b: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 005b8d3f: jmp 0x5b8ccb */ goto L_005b8ccb;
L_005b8d41:; BB(0x005b8d41);
    /* 005b8d41: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8d43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8d44: ret 8 */ FN_RET(0x005b8cb8); r_esp += 12; return;
}

void f_005b8d47(void) /* FUN_005b8d47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8d47);
    /* 005b8d47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d48: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8d4a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8d4d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8d50: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b8d57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8d5a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8d5c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8d5f: jmp 0x5b8d6a */ goto L_005b8d6a;
L_005b8d61:; BB(0x005b8d61);
    /* 005b8d61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8d64: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8d67: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005b8d6a:; BB(0x005b8d6a);
    /* 005b8d6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8d6d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8d70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8d72: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8d75: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b8d78: jae 0x5b8d95 */ if (!fC) goto L_005b8d95;
L_005b8d7a:; BB(0x005b8d7a);
    /* 005b8d7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8d7d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8d80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8d83: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8d86: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8d89: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8d8c: add eax, dword ptr [ecx + edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8d90: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b8d93: jmp 0x5b8d61 */ goto L_005b8d61;
L_005b8d95:; BB(0x005b8d95);
    /* 005b8d95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8d9a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8d9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8da0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8da2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8da5: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8da8: mov edx, dword ptr [edx + ecx + 0x10] */ r_edx = R32((u32)(r_edx+r_ecx+0x10u));
    /* 005b8dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8dad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8db0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8db4: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b8db9u); f_00626620();
    /* 005b8db9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8dbc: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8dbe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b8dc3u); f_0048ab58();
    /* 005b8dc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8dc6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b8dc9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8dcd: je 0x5b8de0 */ if (fZ) goto L_005b8de0;
L_005b8dcf:; BB(0x005b8dcf);
    /* 005b8dcf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8dd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8dd3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8dd6: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x5b8ddbu); f_0060eb40();
    /* 005b8ddb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b8dde: jmp 0x5b8de7 */ goto L_005b8de7;
L_005b8de0:; BB(0x005b8de0);
    /* 005b8de0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005b8de7:; BB(0x005b8de7);
    /* 005b8de7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b8dea: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b8ded: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8df0: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5b8df5u); f_0060ebea();
    /* 005b8df5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b8df8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8dfb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8dfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8dff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e09: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5b8e0eu); f_00624250();
    /* 005b8e0e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e13: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8e16: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8e19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8e1c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8e1e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8e21: mov eax, dword ptr [eax + edx + 0x10] */ r_eax = R32((u32)(r_eax+r_edx+0x10u));
    /* 005b8e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8e29: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b8e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e2d: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b8e32u); f_00626620();
    /* 005b8e32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e35: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8e38: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8e3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e3e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8e41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e46: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b8e4bu); f_00624f00();
    /* 005b8e4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8e51: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5b8e56u); f_0060ec47();
    /* 005b8e56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8e59: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b8e5c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8e5f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b8e62: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8e66: je 0x5b8e79 */ if (fZ) goto L_005b8e79;
L_005b8e68:; BB(0x005b8e68);
    /* 005b8e68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e6a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b8e6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8e6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b8e72: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5b8e74u); call_ind(t); }
    /* 005b8e74: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b8e77: jmp 0x5b8e80 */ goto L_005b8e80;
L_005b8e79:; BB(0x005b8e79);
    /* 005b8e79: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005b8e80:; BB(0x005b8e80);
    /* 005b8e80: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8e83: ret 4 */ FN_RET(0x005b8d47); r_esp += 8; return;
}

void f_005b8e86(void) /* FUN_005b8e86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8e86);
    /* 005b8e86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e87: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8e89: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e8f: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005b8e95: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8e9b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b8e9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e9f: call 0x6266c0 */ r_esp -= 4; W32(r_esp, 0x5b8ea4u); f_006266c0();
    /* 005b8ea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ea7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8eab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8eaf: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8eb5: call 0x5b85c8 */ r_esp -= 4; W32(r_esp, 0x5b8ebau); f_005b85c8();
    /* 005b8eba: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005b8ec0: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8ec6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8ec9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b8ecb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8ece: cmp dword ptr [ebp - 0x8c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b8ed4: ja 0x5b908e */ if ((!fC&&!fZ)) goto L_005b908e;
L_005b8eda:; BB(0x005b8eda);
    /* 005b8eda: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 005b8edd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8ee0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8ee3: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 005b8ee7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8eeb: movsx edx, byte ptr [ecx + 2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x2u));
    /* 005b8eef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ef0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8ef3: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005b8ef7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ef8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8efb: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005b8efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8eff: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8f02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f03: push 0x697a98 */ { u32 v = 0x697a98u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f08: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 005b8f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f0f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5b8f14u); f_00624050();
    /* 005b8f14: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f17: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005b8f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f1e: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5b8f23u); f_0060fc40();
    /* 005b8f23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f26: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 005b8f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f2d: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f33: call 0x5b8d47 */ r_esp -= 4; W32(r_esp, 0x5b8f38u); f_005b8d47();
    /* 005b8f38: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f3e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8f41: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b8f47: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8f4a: mov edx, dword ptr [eax + ecx + 0x14] */ r_edx = R32((u32)(r_eax+r_ecx+0x14u));
    /* 005b8f4e: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005b8f54: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 005b8f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f5b: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 005b8f61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f62: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f68: call 0x5b8cb8 */ r_esp -= 4; W32(r_esp, 0x5b8f6du); f_005b8cb8();
    /* 005b8f6d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f73: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8f76: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8f79: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8f7c: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f82: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8f85: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005b8f88: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f8e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8f91: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b8f93: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8f96: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8f9c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b8f9f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b8fa1: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8fa7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8faa: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005b8fad: sub edx, dword ptr [ebp - 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff70u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8fb3: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8fb9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b8fbc: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005b8fbf: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8fc5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8fc8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8fcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fcc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b8fd1u); f_0048ab58();
    /* 005b8fd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8fd4: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005b8fda: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8fe0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b8fe3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b8fe6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fe7: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b8fed: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b8ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ff1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b8ff7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ff8: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5b8ffdu); f_00625050();
    /* 005b8ffd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9000: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9006: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b9009: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005b900f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b9015: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9016: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b901bu); f_0048ac1b();
    /* 005b901b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b901e: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9024: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005b902a: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005b902d: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9033: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b9036: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9037: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9039: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b903f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b9042: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b9045: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9046: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b904c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b904f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9050: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b9055u); f_00624f00();
    /* 005b9055: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9058: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b905a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b905c: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9062: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b9065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9066: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b906bu); f_00626620();
    /* 005b906b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b906e: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9074: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b9077: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9078: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b907a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b907c: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005b9082: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b9085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9086: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b908bu); f_00624f00();
    /* 005b908b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b908e:; BB(0x005b908e);
    /* 005b908e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9091: ret 8 */ FN_RET(0x005b8e86); r_esp += 12; return;
}

void f_005b9094(void) /* FUN_005b9094 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9094);
    /* 005b9094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9095: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9097: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b909a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b909d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b90a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b90a1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005b90a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b90a5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b90a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b90a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b90ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b90ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b90b0: call 0x5b914c */ r_esp -= 4; W32(r_esp, 0x5b90b5u); f_005b914c();
    /* 005b90b5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b90b8: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b90bc: je 0x5b913d */ if (fZ) goto L_005b913d;
L_005b90be:; BB(0x005b90be);
    /* 005b90be: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b90c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b90c4: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005b90c6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b90c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b90cdu); f_0048ab58();
    /* 005b90cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b90d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b90d3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b90d7: je 0x5b90ea */ if (fZ) goto L_005b90ea;
L_005b90d9:; BB(0x005b90d9);
    /* 005b90d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b90dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b90dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b90e0: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x5b90e5u); f_0060eb40();
    /* 005b90e5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b90e8: jmp 0x5b90f1 */ goto L_005b90f1;
L_005b90ea:; BB(0x005b90ea);
    /* 005b90ea: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005b90f1:; BB(0x005b90f1);
    /* 005b90f1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b90f4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b90f7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005b90f9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b90fc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b90fe: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5b9103u); f_0060ebea();
    /* 005b9103: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9106: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9108: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b910b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b910c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b910f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9110: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b9115u); f_00626620();
    /* 005b9115: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9118: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b911b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b911e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b911f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9121: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9129: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5b912eu); f_00624250();
    /* 005b912e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9131: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b9134: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 005b9136: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5b913bu); f_0060ec47();
    /* 005b913b: jmp 0x5b9146 */ goto L_005b9146;
L_005b913d:; BB(0x005b913d);
    /* 005b913d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9140: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_005b9146:; BB(0x005b9146);
    /* 005b9146: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9148: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9149: ret 0x10 */ FN_RET(0x005b9094); r_esp += 20; return;
}

void f_005b914c(void) /* FUN_005b914c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b914c);
    /* 005b914c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b914d: mov ebp, esp */ r_ebp = r_esp;
    /* 005b914f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9152: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b9155: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9158: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b915c: jne 0x5b9165 */ if (!fZ) goto L_005b9165;
L_005b915e:; BB(0x005b915e);
    /* 005b915e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9160: jmp 0x5b9235 */ goto L_005b9235;
L_005b9165:; BB(0x005b9165);
    /* 005b9165: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b9168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9169: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b916c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b916d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9170: call 0x5b85c8 */ r_esp -= 4; W32(r_esp, 0x5b9175u); f_005b85c8();
    /* 005b9175: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b9178: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b917b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b917e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9181: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9183: jae 0x5b9233 */ if (!fC) goto L_005b9233;
L_005b9189:; BB(0x005b9189);
    /* 005b9189: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b918c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b918f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9192: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b9195: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b9198: mov ecx, dword ptr [ecx + edx + 0x10] */ r_ecx = R32((u32)(r_ecx+r_edx+0x10u));
    /* 005b919c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b919e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b91a1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b91a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b91a7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b91aa: mov edx, dword ptr [eax + ecx + 0x14] */ r_edx = R32((u32)(r_eax+r_ecx+0x14u));
    /* 005b91ae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b91b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b91b3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b91b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b91b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b91b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b91bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b91bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b91c0: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5b91c5u); f_00626620();
    /* 005b91c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b91c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b91cb: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b91ce: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b91d2: je 0x5b9223 */ if (fZ) goto L_005b9223;
L_005b91d4:; BB(0x005b91d4);
    /* 005b91d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b91d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b91da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b91db: call 0x6265f0 */ r_esp -= 4; W32(r_esp, 0x5b91e0u); f_006265f0();
    /* 005b91e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b91e3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b91e6:; BB(0x005b91e6);
    /* 005b91e6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b91ea: je 0x5b9216 */ if (fZ) goto L_005b9216;
L_005b91ec:; BB(0x005b91ec);
    /* 005b91ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b91ef: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b91f2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b91f5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b91f8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b91fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b91fd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9200: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b9202: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9205: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b9208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9209: call 0x6265f0 */ r_esp -= 4; W32(r_esp, 0x5b920eu); f_006265f0();
    /* 005b920e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9211: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b9214: jmp 0x5b91e6 */ goto L_005b91e6;
L_005b9216:; BB(0x005b9216);
    /* 005b9216: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9219: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b921b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b921e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b9221: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_005b9223:; BB(0x005b9223);
    /* 005b9223: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005b9226: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9229: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b922b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b922e: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005b9231: jmp 0x5b9235 */ goto L_005b9235;
L_005b9233:; BB(0x005b9233);
    /* 005b9233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b9235:; BB(0x005b9235);
    /* 005b9235: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9237: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9238: ret 0x10 */ FN_RET(0x005b914c); r_esp += 20; return;
}

void f_005b923b(void) /* FUN_005b923b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b923b);
    /* 005b923b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b923c: mov ebp, esp */ r_ebp = r_esp;
    /* 005b923e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b923f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9242: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9245: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b9248: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9249: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b924eu); f_0060b1e5();
    /* 005b924e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9251: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9254: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b9257: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b925a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b925b: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b9260u); f_0060b1e5();
    /* 005b9260: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9263: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9266: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b9269: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b926c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b926d: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b9272u); f_0060b1e5();
    /* 005b9272: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9275: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9278: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005b927b: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b927e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b927f: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b9284u); f_0060b1e5();
    /* 005b9284: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9287: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b928a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005b928d: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9291: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b9296u); f_0060b1e5();
    /* 005b9296: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9299: mov esp, ebp */ r_esp = r_ebp;
    /* 005b929b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b929c: ret  */ FN_RET(0x005b923b); r_esp += 4; return;
}

void f_005b929d(void) /* FUN_005b929d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b929d);
    /* 005b929d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b929e: mov ebp, esp */ r_ebp = r_esp;
    /* 005b92a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b92a3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b92a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b92a9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b92ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b92ad: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b92b2u); f_0060b1e5();
    /* 005b92b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b92b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b92b8: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b92bb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b92be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b92bf: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b92c4u); f_0060b1e5();
    /* 005b92c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b92c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b92ce: jmp 0x5b92d9 */ goto L_005b92d9;
L_005b92d0:; BB(0x005b92d0);
    /* 005b92d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b92d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b92d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005b92d9:; BB(0x005b92d9);
    /* 005b92d9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b92dc: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b92df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b92e2: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b92e4: jae 0x5b9333 */ if (!fC) goto L_005b9333;
L_005b92e6:; BB(0x005b92e6);
    /* 005b92e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b92e9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b92ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b92ef: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b92f2: lea edx, [eax + ecx + 0xc] */ r_edx = (u32)(r_eax+r_ecx+0xcu);
    /* 005b92f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b92f7: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b92fcu); f_0060b1e5();
    /* 005b92fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b92ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9302: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b9305: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9308: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b930b: lea eax, [ecx + edx + 0x10] */ r_eax = (u32)(r_ecx+r_edx+0x10u);
    /* 005b930f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9310: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b9315u); f_0060b1e5();
    /* 005b9315: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9318: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b931b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b931e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9321: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b9324: lea ecx, [edx + eax + 0x14] */ r_ecx = (u32)(r_edx+r_eax+0x14u);
    /* 005b9328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9329: call 0x60b1e5 */ r_esp -= 4; W32(r_esp, 0x5b932eu); f_0060b1e5();
    /* 005b932e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9331: jmp 0x5b92d0 */ goto L_005b92d0;
L_005b9333:; BB(0x005b9333);
    /* 005b9333: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9336: ret  */ FN_RET(0x005b929d); r_esp += 4; return;
}

void f_005b9337(void) /* FUN_005b9337 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9337);
    /* 005b9337: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9338: mov ebp, esp */ r_ebp = r_esp;
    /* 005b933a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b933d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9340: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9344: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9348: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b934b: call 0x5b85c8 */ r_esp -= 4; W32(r_esp, 0x5b9350u); f_005b85c8();
    /* 005b9350: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9353: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9356: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b9359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b935c: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b935e: jae 0x5b9367 */ if (!fC) goto L_005b9367;
L_005b9360:; BB(0x005b9360);
    /* 005b9360: mov eax, 1 */ r_eax = 0x1u;
    /* 005b9365: jmp 0x5b9369 */ goto L_005b9369;
L_005b9367:; BB(0x005b9367);
    /* 005b9367: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b9369:; BB(0x005b9369);
    /* 005b9369: mov esp, ebp */ r_esp = r_ebp;
    /* 005b936b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b936c: ret 8 */ FN_RET(0x005b9337); r_esp += 12; return;
}

void f_005b936f(void) /* FUN_005b936f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b936f);
    /* 005b936f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9370: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9372: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9378: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005b937e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b9385: jmp 0x5b9390 */ goto L_005b9390;
L_005b9387:; BB(0x005b9387);
    /* 005b9387: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b938a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b938d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005b9390:; BB(0x005b9390);
    /* 005b9390: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005b9396: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b9399: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b939c: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b939e: jae 0x5b953b */ if (!fC) goto L_005b953b;
L_005b93a4:; BB(0x005b93a4);
    /* 005b93a4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005b93aa: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005b93ad: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b93b0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b93b3: lea ecx, [edx + eax + 8] */ r_ecx = (u32)(r_edx+r_eax+0x8u);
    /* 005b93b7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b93ba: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005b93c1:; BB(0x005b93c1);
    /* 005b93c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b93c4: cmp dword ptr [edx*4 + 0x697a28], 0 */ {  u32 a = R32((u32)(r_edx*4+0x697a28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b93cc: je 0x5b93ea */ if (fZ) goto L_005b93ea;
L_005b93ce:; BB(0x005b93ce);
    /* 005b93ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b93d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b93d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b93d6: cmp edx, dword ptr [ecx*4 + 0x697a00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*4+0x697a00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b93dd: je 0x5b93ea */ if (fZ) goto L_005b93ea;
L_005b93df:; BB(0x005b93df);
    /* 005b93df: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b93e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b93e5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b93e8: jmp 0x5b93c1 */ goto L_005b93c1;
L_005b93ea:; BB(0x005b93ea);
    /* 005b93ea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b93ed: cmp dword ptr [ecx*4 + 0x697a28], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x697a28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b93f5: je 0x5b9536 */ if (fZ) goto L_005b9536;
L_005b93fb:; BB(0x005b93fb);
    /* 005b93fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b93fe: mov eax, dword ptr [edx*4 + 0x697a28] */ r_eax = R32((u32)(r_edx*4+0x697a28u));
    /* 005b9405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9406: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9409: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b940c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b940d: push 0x697ae4 */ { u32 v = 0x697ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9412: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 005b9418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9419: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5b941eu); f_00624050();
    /* 005b941e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9421: push 0x697aec */ { u32 v = 0x697aecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9426: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 005b942c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b942d: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5b9432u); f_006243c0();
    /* 005b9432: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9435: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9438: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b943c: je 0x5b9536 */ if (fZ) goto L_005b9536;
L_005b9442:; BB(0x005b9442);
    /* 005b9442: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 005b9448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9449: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5b944eu); f_0060fc40();
    /* 005b944e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9451: push 0x697af0 */ { u32 v = 0x697af0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9456: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5b945bu); f_0060fc40();
    /* 005b945b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b945e: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b9461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9462: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b9465: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9466: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9469: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b946c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b946d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9470: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9473: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005b9479: call 0x5b9094 */ r_esp -= 4; W32(r_esp, 0x5b947eu); f_005b9094();
    /* 005b947e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9481: cmp dword ptr [eax], 0x434e5953 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x434e5953u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9487: jne 0x5b94cd */ if (!fZ) goto L_005b94cd;
L_005b9489:; BB(0x005b9489);
    /* 005b9489: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b948c: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5b9491u); f_0060ebea();
    /* 005b9491: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b9494: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005b949b: jmp 0x5b94a6 */ goto L_005b94a6;
L_005b949d:; BB(0x005b949d);
    /* 005b949d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b94a0: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94a3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005b94a6:; BB(0x005b94a6);
    /* 005b94a6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b94a9: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b94ac: jge 0x5b94c5 */ if ((fS==fO)) goto L_005b94c5;
L_005b94ae:; BB(0x005b94ae);
    /* 005b94ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b94b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b94b2: call 0x60b1c2 */ r_esp -= 4; W32(r_esp, 0x5b94b7u); f_0060b1c2();
    /* 005b94b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b94ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b94bd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94c0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b94c3: jmp 0x5b949d */ goto L_005b949d;
L_005b94c5:; BB(0x005b94c5);
    /* 005b94c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b94c8: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5b94cdu); f_0060ec47();
L_005b94cd:; BB(0x005b94cd);
    /* 005b94cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b94d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b94d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b94d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b94d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b94d7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b94da: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5b94dfu); f_0060ebea();
    /* 005b94df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b94e0: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x5b94e5u); f_00624f00();
    /* 005b94e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b94e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b94eb: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005b94f1: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005b94f7: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005b94fd: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9504: je 0x5b9520 */ if (fZ) goto L_005b9520;
L_005b9506:; BB(0x005b9506);
    /* 005b9506: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9508: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005b950e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b9510: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005b9516: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5b9518u); call_ind(t); }
    /* 005b9518: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005b951e: jmp 0x5b952a */ goto L_005b952a;
L_005b9520:; BB(0x005b9520);
    /* 005b9520: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_005b952a:; BB(0x005b952a);
    /* 005b952a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b952d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b952e: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5b9533u); f_006241d0();
    /* 005b9533: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9536:; BB(0x005b9536);
    /* 005b9536: jmp 0x5b9387 */ goto L_005b9387;
L_005b953b:; BB(0x005b953b);
    /* 005b953b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b953d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b953e: ret  */ FN_RET(0x005b936f); r_esp += 4; return;
}

void f_005b9540(void) /* FUN_005b9540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9540);
    /* 005b9540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9541: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b954a: call 0x5b8129 */ r_esp -= 4; W32(r_esp, 0x5b954fu); f_005b8129();
    /* 005b954f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9552: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9557: je 0x5b9565 */ if (fZ) goto L_005b9565;
L_005b9559:; BB(0x005b9559);
    /* 005b9559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b955c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b955d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b9562u); f_0048ac1b();
    /* 005b9562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9565:; BB(0x005b9565);
    /* 005b9565: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9568: mov esp, ebp */ r_esp = r_ebp;
    /* 005b956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b956b: ret 4 */ FN_RET(0x005b9540); r_esp += 8; return;
}

void f_005b9570(void) /* FUN_005b9570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9570);
    /* 005b9570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9571: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9573: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9579: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b957c: mov dword ptr [eax], 0x639c4c */ W32((u32)(r_eax), 0x639c4cu);
    /* 005b9582: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9585: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005b958c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b958f: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005b9596: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b959d: jmp 0x5b95a8 */ goto L_005b95a8;
L_005b959f:; BB(0x005b959f);
    /* 005b959f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b95a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b95a8:; BB(0x005b95a8);
    /* 005b95a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95ab: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b95ae: jg 0x5b95c0 */ if ((!fZ&&fS==fO)) goto L_005b95c0;
L_005b95b0:; BB(0x005b95b0);
    /* 005b95b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b95b6: mov dword ptr [eax + edx*4 + 0xc], 0 */ W32((u32)(r_eax+r_edx*4+0xcu), 0x0u);
    /* 005b95be: jmp 0x5b959f */ goto L_005b959f;
L_005b95c0:; BB(0x005b95c0);
    /* 005b95c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b95c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b95c6: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005b95c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b95cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b95cf: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005b95d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b95d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005b95d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b95d8: ret 8 */ FN_RET(0x005b9570); r_esp += 12; return;
}

void f_005b95db(void) /* FUN_005b95db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b95db);
    /* 005b95db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b95dc: mov ebp, esp */ r_ebp = r_esp;
    /* 005b95de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b95df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b95e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95e5: mov dword ptr [eax], 0x639c4c */ W32((u32)(r_eax), 0x639c4cu);
    /* 005b95eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95ee: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b95f2: je 0x5b9603 */ if (fZ) goto L_005b9603;
L_005b95f4:; BB(0x005b95f4);
    /* 005b95f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95f7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b95fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b95fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b95fe: call 0x5b9ae6 */ r_esp -= 4; W32(r_esp, 0x5b9603u); f_005b9ae6();
L_005b9603:; BB(0x005b9603);
    /* 005b9603: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9605: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9606: ret  */ FN_RET(0x005b95db); r_esp += 4; return;
}

void f_005b9607(void) /* FUN_005b9607 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9607);
    /* 005b9607: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9608: mov ebp, esp */ r_ebp = r_esp;
    /* 005b960a: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b960d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005b9610: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9613: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b9616: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b9619: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b961c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b961f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b9622: mov dword ptr [ebp - 0x1c], 0x18 */ W32((u32)(r_ebp+0xffffffe4u), 0x18u);
    /* 005b9629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b962c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b962f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b9636: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9639: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b963c: cmp dword ptr [ebp - 0x38], 0x18 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9640: je 0x5b9647 */ if (fZ) goto L_005b9647;
L_005b9642:; BB(0x005b9642);
    /* 005b9642: jmp 0x5b9730 */ goto L_005b9730;
L_005b9647:; BB(0x005b9647);
    /* 005b9647: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b964a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005b964d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005b9654: jmp 0x5b965f */ goto L_005b965f;
L_005b9656:; BB(0x005b9656);
    /* 005b9656: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9659: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b965c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005b965f:; BB(0x005b965f);
    /* 005b965f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9662: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9665: jge 0x5b972e */ if ((fS==fO)) goto L_005b972e;
L_005b966b:; BB(0x005b966b);
    /* 005b966b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005b9672: jmp 0x5b967d */ goto L_005b967d;
L_005b9674:; BB(0x005b9674);
    /* 005b9674: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9677: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b967a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005b967d:; BB(0x005b967d);
    /* 005b967d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9680: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9683: jge 0x5b9720 */ if ((fS==fO)) goto L_005b9720;
L_005b9689:; BB(0x005b9689);
    /* 005b9689: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b968c: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005b968e: mov byte ptr [ebp - 8], dl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_edx);
    /* 005b9691: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9694: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9697: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b969a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b969d: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005b969f: mov byte ptr [ebp - 0x18], dl */ W8((u32)(r_ebp+0xffffffe8u), (u8)r_edx);
    /* 005b96a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b96a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b96a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b96ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b96ae: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005b96b0: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005b96b3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b96b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b96b9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b96bc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96bf: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b96c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96c3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96c6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b96c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b96cc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96cf: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005b96d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96d3: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005b96d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96d7: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 005b96da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b96db: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005b96de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96df: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96e2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b96e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96e6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96e9: call 0x5b97d5 */ r_esp -= 4; W32(r_esp, 0x5b96eeu); f_005b97d5();
L_005b96ee:; BB(0x005b96ee);
    /* 005b96ee: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96f4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005b96f7: cmp edx, dword ptr [ecx + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b96fa: jbe 0x5b971b */ if ((fC||fZ)) goto L_005b971b;
L_005b96fc:; BB(0x005b96fc);
    /* 005b96fc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b96ff: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9703: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9706: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b970a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b970d: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005b9710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9711: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9714: call 0x5b9990 */ r_esp -= 4; W32(r_esp, 0x5b9719u); f_005b9990();
    /* 005b9719: jmp 0x5b96ee */ goto L_005b96ee;
L_005b971b:; BB(0x005b971b);
    /* 005b971b: jmp 0x5b9674 */ goto L_005b9674;
L_005b9720:; BB(0x005b9720);
    /* 005b9720: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9723: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9726: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b9729: jmp 0x5b9656 */ goto L_005b9656;
L_005b972e:; BB(0x005b972e);
    /* 005b972e: jmp 0x5b9734 */ goto L_005b9734;
L_005b9730:; BB(0x005b9730);
    /* 005b9730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9732: jmp 0x5b9739 */ goto L_005b9739;
L_005b9734:; BB(0x005b9734);
    /* 005b9734: mov eax, 1 */ r_eax = 0x1u;
L_005b9739:; BB(0x005b9739);
    /* 005b9739: mov esp, ebp */ r_esp = r_ebp;
    /* 005b973b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b973c: ret 0xc */ FN_RET(0x005b9607); r_esp += 16; return;
}

void f_005b973f(void) /* FUN_005b973f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b973f);
    /* 005b973f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9740: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9742: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9745: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b9748: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b974f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9756: jmp 0x5b9761 */ goto L_005b9761;
L_005b9758:; BB(0x005b9758);
    /* 005b9758: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b975b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b975e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b9761:; BB(0x005b9761);
    /* 005b9761: cmp dword ptr [ebp - 4], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9765: jae 0x5b9784 */ if (!fC) goto L_005b9784;
L_005b9767:; BB(0x005b9767);
    /* 005b9767: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b976a: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005b976d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b976f: je 0x5b977a */ if (fZ) goto L_005b977a;
L_005b9771:; BB(0x005b9771);
    /* 005b9771: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9774: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9777: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005b977a:; BB(0x005b977a);
    /* 005b977a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b977d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b977f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005b9782: jmp 0x5b9758 */ goto L_005b9758;
L_005b9784:; BB(0x005b9784);
    /* 005b9784: mov eax, 8 */ r_eax = 0x8u;
    /* 005b9789: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b978c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b978e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b978f: ret 4 */ FN_RET(0x005b973f); r_esp += 8; return;
}

void f_005b9792(void) /* FUN_005b9792 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9792);
    /* 005b9792: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9793: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9795: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9798: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b979b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b97a2: jmp 0x5b97ad */ goto L_005b97ad;
L_005b97a4:; BB(0x005b97a4);
    /* 005b97a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b97a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b97aa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b97ad:; BB(0x005b97ad);
    /* 005b97ad: cmp dword ptr [ebp - 4], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b97b1: jae 0x5b97cc */ if (!fC) goto L_005b97cc;
L_005b97b3:; BB(0x005b97b3);
    /* 005b97b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b97b6: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005b97b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b97bb: je 0x5b97c2 */ if (fZ) goto L_005b97c2;
L_005b97bd:; BB(0x005b97bd);
    /* 005b97bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b97c0: jmp 0x5b97cf */ goto L_005b97cf;
L_005b97c2:; BB(0x005b97c2);
    /* 005b97c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b97c5: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b97c7: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 005b97ca: jmp 0x5b97a4 */ goto L_005b97a4;
L_005b97cc:; BB(0x005b97cc);
    /* 005b97cc: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b97cf:; BB(0x005b97cf);
    /* 005b97cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005b97d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b97d2: ret 4 */ FN_RET(0x005b9792); r_esp += 8; return;
}

void f_005b97d5(void) /* FUN_005b97d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b97d5);
    /* 005b97d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b97d6: mov ebp, esp */ r_ebp = r_esp;
    /* 005b97d8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b97db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b97dc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b97df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b97e2: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b97e5: jne 0x5b9804 */ if (!fZ) goto L_005b9804;
L_005b97e7:; BB(0x005b97e7);
    /* 005b97e7: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005b97ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b97eb: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005b97ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b97ef: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005b97f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b97f3: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005b97f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b97f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b97fa: call 0x5b9915 */ r_esp -= 4; W32(r_esp, 0x5b97ffu); f_005b9915();
    /* 005b97ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9802: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005b9804:; BB(0x005b9804);
    /* 005b9804: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9807: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b9809: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b980c: je 0x5b9874 */ if (fZ) goto L_005b9874;
L_005b980e:; BB(0x005b980e);
    /* 005b980e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9811: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9813: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b9816: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9819: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b981c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b981e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005b9821: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9824: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9826: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9829: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b982e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005b9831: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9833: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9836: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9838: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005b983b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b983e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9840: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b9843: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9848: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005b984b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b984d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9850: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9852: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005b9855: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9858: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b985a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b985d: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9862: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005b9865: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9867: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b986a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b986c: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005b986f: jmp 0x5b990e */ goto L_005b990e;
L_005b9874:; BB(0x005b9874);
    /* 005b9874: mov ecx, 7 */ r_ecx = 0x7u;
    /* 005b9879: sub ecx, dword ptr [ebp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b987c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b987f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9882: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b9888: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005b988b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b988d: mov cl, byte ptr [eax + 0x697b10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x697b10u))) & 0xffu);
    /* 005b9893: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005b9895: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9898: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b989a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b989d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b98a0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b98a5: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005b98a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b98aa: mov bl, byte ptr [ecx + 0x697b10] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+0x697b10u))) & 0xffu);
    /* 005b98b0: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005b98b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b98b5: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b98b7: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b98b9: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b98bb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b98be: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b98c3: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005b98c6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b98c8: mov bl, byte ptr [ecx + 0x697b10] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+0x697b10u))) & 0xffu);
    /* 005b98ce: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005b98d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b98d3: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b98d5: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b98d7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b98da: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005b98dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b98de: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005b98e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b98e2: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005b98e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b98e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b98e9: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005b98ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b98ed: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005b98f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b98f1: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005b98f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b98f5: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b98f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b98f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b98fc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b98fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9901: lea eax, [ecx + edx*4 + 0x14] */ r_eax = (u32)(r_ecx+r_edx*4+0x14u);
    /* 005b9905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9906: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9909: call 0x5b97d5 */ r_esp -= 4; W32(r_esp, 0x5b990eu); f_005b97d5();
L_005b990e:; BB(0x005b990e);
    /* 005b990e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b990f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9912: ret 0x20 */ FN_RET(0x005b97d5); r_esp += 36; return;
}

void f_005b9915(void) /* FUN_005b9915 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9915);
    /* 005b9915: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9916: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9918: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b991b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b991e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9920: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5b9925u); f_0048ab58();
    /* 005b9925: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9928: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b992b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b992f: jne 0x5b9935 */ if (!fZ) goto L_005b9935;
L_005b9931:; BB(0x005b9931);
    /* 005b9931: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9933: jmp 0x5b998a */ goto L_005b998a;
L_005b9935:; BB(0x005b9935);
    /* 005b9935: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9937: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9939: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b993c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b993d: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x5b9942u); f_00624170();
    /* 005b9942: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9945: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9948: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b994a: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b994d: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b9950: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9953: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b9955: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9958: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b995b: je 0x5b996c */ if (fZ) goto L_005b996c;
L_005b995d:; BB(0x005b995d);
    /* 005b995d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9960: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9962: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9965: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b9968: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005b996a: jmp 0x5b9987 */ goto L_005b9987;
L_005b996c:; BB(0x005b996c);
    /* 005b996c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b996f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9972: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b9975: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 005b9978: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005b997b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b997e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005b9981: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9984: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_005b9987:; BB(0x005b9987);
    /* 005b9987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005b998a:; BB(0x005b998a);
    /* 005b998a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b998c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b998d: ret 0x10 */ FN_RET(0x005b9915); r_esp += 20; return;
}

void f_005b9990(void) /* FUN_005b9990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9990);
    /* 005b9990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9991: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9993: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9996: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b9999: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b999c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b999f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b99a2:; BB(0x005b99a2);
    /* 005b99a2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b99a6: jle 0x5b99bf */ if ((fZ||fS!=fO)) goto L_005b99bf;
L_005b99a8:; BB(0x005b99a8);
    /* 005b99a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99ab: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b99ae: cmp dword ptr [edx + ecx*4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99b2: jne 0x5b99bf */ if (!fZ) goto L_005b99bf;
L_005b99b4:; BB(0x005b99b4);
    /* 005b99b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99b7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b99ba: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b99bd: jmp 0x5b99a2 */ goto L_005b99a2;
L_005b99bf:; BB(0x005b99bf);
    /* 005b99bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99c2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b99c5: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005b99c8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b99cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99ce: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b99d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b99d4: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 005b99d7: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 005b99da: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b99e1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b99e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b99ef: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005b99f6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b99fd: jmp 0x5b9a08 */ goto L_005b9a08;
L_005b99ff:; BB(0x005b99ff);
    /* 005b99ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a02: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9a05: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005b9a08:; BB(0x005b9a08);
    /* 005b9a08: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9a0c: jge 0x5b9aaa */ if ((fS==fO)) goto L_005b9aaa;
L_005b9a12:; BB(0x005b9a12);
    /* 005b9a12: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a18: cmp dword ptr [eax + edx*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a1d: je 0x5b9aa5 */ if (fZ) goto L_005b9aa5;
L_005b9a23:; BB(0x005b9a23);
    /* 005b9a23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a26: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a29: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 005b9a2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9a30: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9a33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b9a36: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a3c: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 005b9a40: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9a43: add edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9a46: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b9a49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a4f: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 005b9a53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9a56: add eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9a59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9a5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a62: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 005b9a66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a69: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b9a6c: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9a6f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a72: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005b9a75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a7b: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 005b9a7f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b9a82: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9a85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a86: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b9a8bu); f_0048ac1b();
    /* 005b9a8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9a8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9a91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a94: mov dword ptr [eax + edx*4 + 0x14], 0 */ W32((u32)(r_eax+r_edx*4+0x14u), 0x0u);
    /* 005b9a9c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9a9f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9aa2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005b9aa5:; BB(0x005b9aa5);
    /* 005b9aa5: jmp 0x5b99ff */ goto L_005b99ff;
L_005b9aaa:; BB(0x005b9aaa);
    /* 005b9aaa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9aad: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 005b9ab3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9ab6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9ab9: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005b9abc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9abf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9ac2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005b9ac5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9ac8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9acb: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005b9ace: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9ad1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b9ad4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b9ad7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9ad9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b9adb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9ade: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b9ae0: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9ae3: ret 0xc */ FN_RET(0x005b9990); r_esp += 16; return;
}

void f_005b9ae6(void) /* FUN_005b9ae6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9ae6);
    /* 005b9ae6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ae7: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9ae9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9aec: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b9aef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9af6: jmp 0x5b9b01 */ goto L_005b9b01;
L_005b9af8:; BB(0x005b9af8);
    /* 005b9af8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9afb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9afe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b9b01:; BB(0x005b9b01);
    /* 005b9b01: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9b05: jge 0x5b9b2d */ if ((fS==fO)) goto L_005b9b2d;
L_005b9b07:; BB(0x005b9b07);
    /* 005b9b07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9b0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9b0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9b0f: cmp dword ptr [edx + eax*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9b14: je 0x5b9b2b */ if (fZ) goto L_005b9b2b;
L_005b9b16:; BB(0x005b9b16);
    /* 005b9b16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9b19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9b1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9b1e: lea ecx, [edx + eax*4 + 0x14] */ r_ecx = (u32)(r_edx+r_eax*4+0x14u);
    /* 005b9b22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9b26: call 0x5b9ae6 */ r_esp -= 4; W32(r_esp, 0x5b9b2bu); f_005b9ae6();
L_005b9b2b:; BB(0x005b9b2b);
    /* 005b9b2b: jmp 0x5b9af8 */ goto L_005b9af8;
L_005b9b2d:; BB(0x005b9b2d);
    /* 005b9b2d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9b30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9b32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b9b35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9b38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b39: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b9b3eu); f_0048ac1b();
    /* 005b9b3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9b41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9b44: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005b9b4a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9b4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9b4d: ret 4 */ FN_RET(0x005b9ae6); r_esp += 8; return;
}

void f_005b9b50(void) /* FUN_005b9b50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9b50);
    /* 005b9b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b51: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9b56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9b5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9b5d: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9b60: je 0x5b9bcb */ if (fZ) goto L_005b9bcb;
L_005b9b62:; BB(0x005b9b62);
    /* 005b9b62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9b65: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005b9b68: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005b9b6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9b6d: div dword ptr [esi + 4] */ { u32 d = R32((u32)(r_esi+0x4u)); if (!d) UNSUP(0x005b9b6d, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005b9b6d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b9b70: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9b73: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b9b75: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9b78: mov byte ptr [edx + ecx*4 + 2], al */ W8((u32)(r_edx+r_ecx*4+0x2u), (u8)r_eax);
    /* 005b9b7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9b7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9b82: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005b9b85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9b87: div dword ptr [ecx + 4] */ { u32 d = R32((u32)(r_ecx+0x4u)); if (!d) UNSUP(0x005b9b87, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005b9b87, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b9b8a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9b8d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b9b8f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9b92: mov byte ptr [edx + ecx*4 + 1], al */ W8((u32)(r_edx+r_ecx*4+0x1u), (u8)r_eax);
    /* 005b9b96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9b99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9b9c: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005b9b9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9ba1: div dword ptr [ecx + 4] */ { u32 d = R32((u32)(r_ecx+0x4u)); if (!d) UNSUP(0x005b9ba1, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005b9ba1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b9ba4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9ba7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b9ba9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9bac: mov byte ptr [edx + ecx*4], al */ W8((u32)(r_edx+r_ecx*4), (u8)r_eax);
    /* 005b9baf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b9bb2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b9bb4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9bb7: mov byte ptr [edx + ecx*4 + 3], 0 */ W8((u32)(r_edx+r_ecx*4+0x3u), 0x0u);
    /* 005b9bbc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b9bbf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b9bc1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9bc4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b9bc7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b9bc9: jmp 0x5b9c0d */ goto L_005b9c0d;
L_005b9bcb:; BB(0x005b9bcb);
    /* 005b9bcb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9bd2: jmp 0x5b9bdd */ goto L_005b9bdd;
L_005b9bd4:; BB(0x005b9bd4);
    /* 005b9bd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9bd7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9bda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b9bdd:; BB(0x005b9bdd);
    /* 005b9bdd: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9be1: jge 0x5b9c0d */ if ((fS==fO)) goto L_005b9c0d;
L_005b9be3:; BB(0x005b9be3);
    /* 005b9be3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9be6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9be9: cmp dword ptr [edx + ecx*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9bee: je 0x5b9c0b */ if (fZ) goto L_005b9c0b;
L_005b9bf0:; BB(0x005b9bf0);
    /* 005b9bf0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b9bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bf4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b9bf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bf8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9bfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9bfe: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 005b9c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c03: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9c06: call 0x5b9b50 */ r_esp -= 4; W32(r_esp, 0x5b9c0bu); f_005b9b50();
L_005b9c0b:; BB(0x005b9c0b);
    /* 005b9c0b: jmp 0x5b9bd4 */ goto L_005b9bd4;
L_005b9c0d:; BB(0x005b9c0d);
    /* 005b9c0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9c0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9c10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9c11: ret 0xc */ FN_RET(0x005b9b50); r_esp += 16; return;
}

void f_005b9c14(void) /* FUN_005b9c14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9c14);
    /* 005b9c14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c15: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c18: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9c1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9c1e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005b9c21: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9c23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9c24: ret  */ FN_RET(0x005b9c14); r_esp += 4; return;
}

void f_005b9c25(void) /* FUN_005b9c25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9c25);
    /* 005b9c25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c26: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9c28: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9c2b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9c2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9c35: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005b9c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9c3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c3d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9c40: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b9c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9c47: call 0x5b9b50 */ r_esp -= 4; W32(r_esp, 0x5b9c4cu); f_005b9b50();
    /* 005b9c4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9c4f: ret 4 */ FN_RET(0x005b9c25); r_esp += 8; return;
}

void f_005b9c60(void) /* FUN_005b9c60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9c60);
    /* 005b9c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9c67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9c6a: call 0x5b95db */ r_esp -= 4; W32(r_esp, 0x5b9c6fu); f_005b95db();
    /* 005b9c6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9c72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9c75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9c77: je 0x5b9c85 */ if (fZ) goto L_005b9c85;
L_005b9c79:; BB(0x005b9c79);
    /* 005b9c79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9c7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b9c82u); f_0048ac1b();
    /* 005b9c82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9c85:; BB(0x005b9c85);
    /* 005b9c85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9c88: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9c8b: ret 4 */ FN_RET(0x005b9c60); r_esp += 8; return;
}

void f_005b9c90(void) /* FUN_005b9c90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9c90);
    /* 005b9c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9c9a: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5b9c9fu); f_0048e320();
    /* 005b9c9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9ca2: mov dword ptr [eax], 0x639c54 */ W32((u32)(r_eax), 0x639c54u);
    /* 005b9ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9caa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9cad: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x5b9cb2u); f_005b9cd5();
    /* 005b9cb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9cb5: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9cb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9cb8: ret  */ FN_RET(0x005b9c90); r_esp += 4; return;
}

void f_005b9cb9(void) /* FUN_005b9cb9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9cb9);
    /* 005b9cb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cba: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cbd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9cc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9cc3: mov dword ptr [eax], 0x639c54 */ W32((u32)(r_eax), 0x639c54u);
    /* 005b9cc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9ccc: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5b9cd1u); f_0048e361();
    /* 005b9cd1: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9cd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9cd4: ret  */ FN_RET(0x005b9cb9); r_esp += 4; return;
}

void f_005b9cd5(void) /* FUN_005b9cd5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9cd5);
    /* 005b9cd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cd6: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9cd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9cdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cdc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b9cdf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9ce2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9ce5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005b9ce8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9ceb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b9cee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9cf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cf2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9cf5: call 0x5b9ed0 */ r_esp -= 4; W32(r_esp, 0x5b9cfau); f_005b9ed0();
    /* 005b9cfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9cfd: mov dword ptr [ecx + 0x3f4], 0 */ W32((u32)(r_ecx+0x3f4u), 0x0u);
    /* 005b9d07: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b9d0e: jmp 0x5b9d19 */ goto L_005b9d19;
L_005b9d10:; BB(0x005b9d10);
    /* 005b9d10: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9d13: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9d16: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005b9d19:; BB(0x005b9d19);
    /* 005b9d19: cmp dword ptr [ebp - 0xc], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9d20: jge 0x5b9d45 */ if ((fS==fO)) goto L_005b9d45;
L_005b9d22:; BB(0x005b9d22);
    /* 005b9d22: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d25: call 0x5b9ee9 */ r_esp -= 4; W32(r_esp, 0x5b9d2au); f_005b9ee9();
    /* 005b9d2a: mov esi, eax */ r_esi = r_eax;
    /* 005b9d2c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d2f: call 0x5b9ee9 */ r_esp -= 4; W32(r_esp, 0x5b9d34u); f_005b9ee9();
    /* 005b9d34: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b9d37: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b9d39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9d3c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d3f: mov dword ptr [ecx + eax*4 + 0xc], esi */ W32((u32)(r_ecx+r_eax*4+0xcu), r_esi);
    /* 005b9d43: jmp 0x5b9d10 */ goto L_005b9d10;
L_005b9d45:; BB(0x005b9d45);
    /* 005b9d45: mov dword ptr [ebp - 4], 0x80000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x80000000u);
    /* 005b9d4c: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005b9d53: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b9d5a: jmp 0x5b9d65 */ goto L_005b9d65;
L_005b9d5c:; BB(0x005b9d5c);
    /* 005b9d5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9d5f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9d62: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005b9d65:; BB(0x005b9d65);
    /* 005b9d65: cmp dword ptr [ebp - 0xc], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9d69: jge 0x5b9db7 */ if ((fS==fO)) goto L_005b9db7;
L_005b9d6b:; BB(0x005b9d6b);
    /* 005b9d6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9d6e: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b9d71: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9d74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b9d77: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d7a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d7d: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005b9d81: and eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9d84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d87: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d8a: mov dword ptr [edx + ecx*4 + 0xc], eax */ W32((u32)(r_edx+r_ecx*4+0xcu), r_eax);
    /* 005b9d8e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d94: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005b9d98: or edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b9d9b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d9e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9da1: mov dword ptr [ecx + eax*4 + 0xc], edx */ W32((u32)(r_ecx+r_eax*4+0xcu), r_edx);
    /* 005b9da5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9da8: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b9daa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b9dad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9db0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b9db2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9db5: jmp 0x5b9d5c */ goto L_005b9d5c;
L_005b9db7:; BB(0x005b9db7);
    /* 005b9db7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9db8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9dbb: ret 4 */ FN_RET(0x005b9cd5); r_esp += 8; return;
}

void f_005b9dbe(void) /* FUN_005b9dbe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9dbe);
    /* 005b9dbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9dbf: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9dc1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9dc4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b9dc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9dca: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b9dcd:; BB(0x005b9dcd);
    /* 005b9dcd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9dd0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9dd3: jb 0x5b9e06 */ if (fC) goto L_005b9e06;
L_005b9dd5:; BB(0x005b9dd5);
    /* 005b9dd5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9dd8: call 0x5b9e0f */ r_esp -= 4; W32(r_esp, 0x5b9dddu); f_005b9e0f();
    /* 005b9ddd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9de0: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_005b9de7:; BB(0x005b9de7);
    /* 005b9de7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9dea: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9ded: jbe 0x5b9dfb */ if ((fC||fZ)) goto L_005b9dfb;
L_005b9def:; BB(0x005b9def);
    /* 005b9def: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9df2: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b9df4: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b9df6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b9df9: jmp 0x5b9de7 */ goto L_005b9de7;
L_005b9dfb:; BB(0x005b9dfb);
    /* 005b9dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9dfe: and ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9e01: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9e04: jmp 0x5b9dcd */ goto L_005b9dcd;
L_005b9e06:; BB(0x005b9e06);
    /* 005b9e06: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9e09: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9e0c: ret 4 */ FN_RET(0x005b9dbe); r_esp += 8; return;
}

void f_005b9e0f(void) /* FUN_005b9e0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9e0f);
    /* 005b9e0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9e10: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9e12: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9e15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9e16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b9e19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e1c: cmp dword ptr [eax + 0x3f4], 0x93 */ {  u32 a = R32((u32)(r_eax+0x3f4u)); u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9e26: jl 0x5b9e3c */ if ((fS!=fO)) goto L_005b9e3c;
L_005b9e28:; BB(0x005b9e28);
    /* 005b9e28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e2b: mov edx, dword ptr [ecx + 0x3f4] */ r_edx = R32((u32)(r_ecx+0x3f4u));
    /* 005b9e31: sub edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b9e37: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b9e3a: jmp 0x5b9e4b */ goto L_005b9e4b;
L_005b9e3c:; BB(0x005b9e3c);
    /* 005b9e3c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e3f: mov ecx, dword ptr [eax + 0x3f4] */ r_ecx = R32((u32)(r_eax+0x3f4u));
    /* 005b9e45: add ecx, 0x67 */ {  u32 a = r_ecx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9e48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005b9e4b:; BB(0x005b9e4b);
    /* 005b9e4b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e4e: mov eax, dword ptr [edx + 0x3f4] */ r_eax = R32((u32)(r_edx+0x3f4u));
    /* 005b9e54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e57: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9e5a: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e5d: mov eax, dword ptr [ecx + eax*4 + 0xc] */ r_eax = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005b9e61: xor eax, dword ptr [esi + edx*4 + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9e65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b9e68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e6b: mov edx, dword ptr [ecx + 0x3f4] */ r_edx = R32((u32)(r_ecx+0x3f4u));
    /* 005b9e71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9e77: mov dword ptr [eax + edx*4 + 0xc], ecx */ W32((u32)(r_eax+r_edx*4+0xcu), r_ecx);
    /* 005b9e7b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e7e: cmp dword ptr [edx + 0x3f4], 0xf9 */ {  u32 a = R32((u32)(r_edx+0x3f4u)); u32 b = 0xf9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9e88: jl 0x5b9e99 */ if ((fS!=fO)) goto L_005b9e99;
L_005b9e8a:; BB(0x005b9e8a);
    /* 005b9e8a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e8d: mov dword ptr [eax + 0x3f4], 0 */ W32((u32)(r_eax+0x3f4u), 0x0u);
    /* 005b9e97: jmp 0x5b9eae */ goto L_005b9eae;
L_005b9e99:; BB(0x005b9e99);
    /* 005b9e99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e9c: mov edx, dword ptr [ecx + 0x3f4] */ r_edx = R32((u32)(r_ecx+0x3f4u));
    /* 005b9ea2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9ea5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9ea8: mov dword ptr [eax + 0x3f4], edx */ W32((u32)(r_eax+0x3f4u), r_edx);
L_005b9eae:; BB(0x005b9eae);
    /* 005b9eae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9eb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9eb5: ret  */ FN_RET(0x005b9e0f); r_esp += 4; return;
}

void f_005b9eb6(void) /* FUN_005b9eb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9eb6);
    /* 005b9eb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9eb7: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9eb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9eba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9ebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9ec0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005b9ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ec4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9ec7: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x5b9eccu); f_005b9cd5();
    /* 005b9ecc: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9ecf: ret  */ FN_RET(0x005b9eb6); r_esp += 4; return;
}

void f_005b9ed0(void) /* FUN_005b9ed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9ed0);
    /* 005b9ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9eda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b9edd: mov dword ptr [eax + 0x3f8], ecx */ W32((u32)(r_eax+0x3f8u), r_ecx);
    /* 005b9ee3: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9ee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9ee6: ret 4 */ FN_RET(0x005b9ed0); r_esp += 8; return;
}

void f_005b9ee9(void) /* FUN_005b9ee9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9ee9);
    /* 005b9ee9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9eea: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9eec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9eef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ef0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9ef3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9ef6: mov eax, dword ptr [eax + 0x3f8] */ r_eax = R32((u32)(r_eax+0x3f8u));
    /* 005b9efc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9efe: mov ecx, 0x1f31d */ r_ecx = 0x1f31du;
    /* 005b9f03: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x005b9f03, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005b9f03, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b9f05: mov ecx, edx */ r_ecx = r_edx;
    /* 005b9f07: imul ecx, ecx, 0x41a7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x41a7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b9f0d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9f10: mov eax, dword ptr [edx + 0x3f8] */ r_eax = R32((u32)(r_edx+0x3f8u));
    /* 005b9f16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9f18: mov esi, 0x1f31d */ r_esi = 0x1f31du;
    /* 005b9f1d: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x005b9f1d, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005b9f1d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005b9f1f: imul eax, eax, 0xb14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b9f25: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9f27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9f2a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9f2e: jl 0x5b9f3e */ if ((fS!=fO)) goto L_005b9f3e;
L_005b9f30:; BB(0x005b9f30);
    /* 005b9f30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9f33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9f36: mov dword ptr [eax + 0x3f8], ecx */ W32((u32)(r_eax+0x3f8u), r_ecx);
    /* 005b9f3c: jmp 0x5b9f50 */ goto L_005b9f50;
L_005b9f3e:; BB(0x005b9f3e);
    /* 005b9f3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9f41: add edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9f47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9f4a: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
L_005b9f50:; BB(0x005b9f50);
    /* 005b9f50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9f53: mov eax, dword ptr [ecx + 0x3f8] */ r_eax = R32((u32)(r_ecx+0x3f8u));
    /* 005b9f59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9f5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9f5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9f5d: ret  */ FN_RET(0x005b9ee9); r_esp += 4; return;
}

void f_005b9f60(void) /* FUN_005b9f60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9f60);
    /* 005b9f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9f6a: call 0x5b9cb9 */ r_esp -= 4; W32(r_esp, 0x5b9f6fu); f_005b9cb9();
    /* 005b9f6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9f72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b9f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9f77: je 0x5b9f85 */ if (fZ) goto L_005b9f85;
L_005b9f79:; BB(0x005b9f79);
    /* 005b9f79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9f7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5b9f82u); f_0048ac1b();
    /* 005b9f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9f85:; BB(0x005b9f85);
    /* 005b9f85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9f88: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9f8b: ret 4 */ FN_RET(0x005b9f60); r_esp += 8; return;
}

void f_005b9f90(void) /* FUN_005b9f90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9f90);
    /* 005b9f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9f94: ret  */ FN_RET(0x005b9f90); r_esp += 4; return;
}

void f_005b9f95(void) /* FUN_005b9f95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9f95);
    /* 005b9f95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f96: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9f98: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f9b: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005b9f9e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b9fa1: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5b9fa6u); f_0048e320();
    /* 005b9fa6: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b9fa9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9fac: call 0x482580 */ r_esp -= 4; W32(r_esp, 0x5b9fb1u); f_00482580();
    /* 005b9fb1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b9fb4: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9fb7: call 0x482580 */ r_esp -= 4; W32(r_esp, 0x5b9fbcu); f_00482580();
    /* 005b9fbc: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b9fbf: mov dword ptr [eax], 0x639c5c */ W32((u32)(r_eax), 0x639c5cu);
    /* 005b9fc5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9fc9: jne 0x5ba1f7 */ if (!fZ) goto L_005ba1f7;
L_005b9fcf:; BB(0x005b9fcf);
    /* 005b9fcf: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b9fd2: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 005b9fd9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005b9fe0:; BB(0x005b9fe0);
    /* 005b9fe0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b9fe3: mov eax, dword ptr [edx*4 + 0x6870b0] */ r_eax = R32((u32)(r_edx*4+0x6870b0u));
    /* 005b9fea: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005b9fed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9fef: je 0x5ba111 */ if (fZ) goto L_005ba111;
L_005b9ff5:; BB(0x005b9ff5);
    /* 005b9ff5: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005b9ffc:; BB(0x005b9ffc);
    /* 005b9ffc: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9fff: mov eax, dword ptr [edx*4 + 0x6870c0] */ r_eax = R32((u32)(r_edx*4+0x6870c0u));
    /* 005ba006: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ba009: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba00b: je 0x5ba103 */ if (fZ) goto L_005ba103;
L_005ba011:; BB(0x005ba011);
    /* 005ba011: push 0x697b50 */ { u32 v = 0x697b50u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba016: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba019: mov eax, dword ptr [edx*4 + 0x6870b0] */ r_eax = R32((u32)(r_edx*4+0x6870b0u));
    /* 005ba020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba021: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5ba026u); f_006240c0();
    /* 005ba026: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba02b: je 0x5ba057 */ if (fZ) goto L_005ba057;
L_005ba02d:; BB(0x005ba02d);
    /* 005ba02d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba030: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 005ba037: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba038: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ba03b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba03c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ba041u); f_00624510();
    /* 005ba041: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba044: push 0x697b54 */ { u32 v = 0x697b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba049: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ba04c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba04d: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ba052u); f_00624520();
    /* 005ba052: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba055: jmp 0x5ba068 */ goto L_005ba068;
L_005ba057:; BB(0x005ba057);
    /* 005ba057: push 0x6fc028 */ { u32 v = 0x6fc028u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba05c: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ba05f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba060: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ba065u); f_00624510();
    /* 005ba065: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba068:; BB(0x005ba068);
    /* 005ba068: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba06b: mov ecx, dword ptr [eax*4 + 0x6870c0] */ r_ecx = R32((u32)(r_eax*4+0x6870c0u));
    /* 005ba072: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba073: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ba076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba077: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ba07cu); f_00624520();
    /* 005ba07c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba07f: push 0x697b58 */ { u32 v = 0x697b58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba084: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ba087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba088: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5ba08du); f_006243c0();
    /* 005ba08d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba090: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ba093: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba097: je 0x5ba0f5 */ if (fZ) goto L_005ba0f5;
L_005ba099:; BB(0x005ba099);
    /* 005ba099: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ba09c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba09d: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5ba0a2u); f_006241d0();
    /* 005ba0a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba0a5: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba0aa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba0afu); f_0048ab58();
    /* 005ba0af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba0b2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ba0b5: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba0b9: je 0x5ba0c8 */ if (fZ) goto L_005ba0c8;
L_005ba0bb:; BB(0x005ba0bb);
    /* 005ba0bb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba0be: call 0x5b80e2 */ r_esp -= 4; W32(r_esp, 0x5ba0c3u); f_005b80e2();
    /* 005ba0c3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005ba0c6: jmp 0x5ba0cf */ goto L_005ba0cf;
L_005ba0c8:; BB(0x005ba0c8);
    /* 005ba0c8: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005ba0cf:; BB(0x005ba0cf);
    /* 005ba0cf: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ba0d2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005ba0d5: push 0x697b5c */ { u32 v = 0x697b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba0da: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ba0dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba0de: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ba0e1: call 0x5b8581 */ r_esp -= 4; W32(r_esp, 0x5ba0e6u); f_005b8581();
    /* 005ba0e6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ba0e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba0ea: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba0ed: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba0f0: call 0x4826eb */ r_esp -= 4; W32(r_esp, 0x5ba0f5u); f_004826eb();
L_005ba0f5:; BB(0x005ba0f5);
    /* 005ba0f5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba0f8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba0fb: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005ba0fe: jmp 0x5b9ffc */ goto L_005b9ffc;
L_005ba103:; BB(0x005ba103);
    /* 005ba103: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba106: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba109: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ba10c: jmp 0x5b9fe0 */ goto L_005b9fe0;
L_005ba111:; BB(0x005ba111);
    /* 005ba111: movsx ecx, byte ptr [0x6f6f00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 005ba118: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba11a: je 0x5ba1f5 */ if (fZ) goto L_005ba1f5;
L_005ba120:; BB(0x005ba120);
    /* 005ba120: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005ba127:; BB(0x005ba127);
    /* 005ba127: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba12a: mov eax, dword ptr [edx*4 + 0x6870c0] */ r_eax = R32((u32)(r_edx*4+0x6870c0u));
    /* 005ba131: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ba134: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba136: je 0x5ba1f5 */ if (fZ) goto L_005ba1f5;
L_005ba13c:; BB(0x005ba13c);
    /* 005ba13c: mov dl, byte ptr [0x6f6f00] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x6f6f00u))) & 0xffu);
    /* 005ba142: mov byte ptr [ebp - 0x40], dl */ W8((u32)(r_ebp+0xffffffc0u), (u8)r_edx);
    /* 005ba145: mov byte ptr [ebp - 0x3f], 0 */ W8((u32)(r_ebp+0xffffffc1u), 0x0u);
    /* 005ba149: push 0x697b60 */ { u32 v = 0x697b60u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba14e: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ba151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba152: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ba157u); f_00624520();
    /* 005ba157: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba15a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba15d: mov edx, dword ptr [ecx*4 + 0x6870c0] */ r_edx = R32((u32)(r_ecx*4+0x6870c0u));
    /* 005ba164: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba165: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ba168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba169: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5ba16eu); f_00624520();
    /* 005ba16e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba171: push 0x697b64 */ { u32 v = 0x697b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba176: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ba179: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba17a: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5ba17fu); f_006243c0();
    /* 005ba17f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba182: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ba185: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba189: je 0x5ba1e7 */ if (fZ) goto L_005ba1e7;
L_005ba18b:; BB(0x005ba18b);
    /* 005ba18b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ba18e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba18f: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5ba194u); f_006241d0();
    /* 005ba194: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba197: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba19c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba1a1u); f_0048ab58();
    /* 005ba1a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba1a4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005ba1a7: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba1ab: je 0x5ba1ba */ if (fZ) goto L_005ba1ba;
L_005ba1ad:; BB(0x005ba1ad);
    /* 005ba1ad: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ba1b0: call 0x5b80e2 */ r_esp -= 4; W32(r_esp, 0x5ba1b5u); f_005b80e2();
    /* 005ba1b5: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005ba1b8: jmp 0x5ba1c1 */ goto L_005ba1c1;
L_005ba1ba:; BB(0x005ba1ba);
    /* 005ba1ba: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005ba1c1:; BB(0x005ba1c1);
    /* 005ba1c1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ba1c4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ba1c7: push 0x697b68 */ { u32 v = 0x697b68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1cc: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005ba1cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1d0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ba1d3: call 0x5b8581 */ r_esp -= 4; W32(r_esp, 0x5ba1d8u); f_005b8581();
    /* 005ba1d8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ba1db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1dc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba1df: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba1e2: call 0x4826eb */ r_esp -= 4; W32(r_esp, 0x5ba1e7u); f_004826eb();
L_005ba1e7:; BB(0x005ba1e7);
    /* 005ba1e7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba1ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba1ed: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ba1f0: jmp 0x5ba127 */ goto L_005ba127;
L_005ba1f5:; BB(0x005ba1f5);
    /* 005ba1f5: jmp 0x5ba234 */ goto L_005ba234;
L_005ba1f7:; BB(0x005ba1f7);
    /* 005ba1f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba1fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1fb: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5ba200u); f_00624990();
    /* 005ba200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba203: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba207: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba20cu); f_0048ab58();
    /* 005ba20c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba20f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba212: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005ba215: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba219: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba21c: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005ba21f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba220: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5ba225u); f_00624510();
    /* 005ba225: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba228: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba22c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba22f: call 0x5baa18 */ r_esp -= 4; W32(r_esp, 0x5ba234u); f_005baa18();
L_005ba234:; BB(0x005ba234);
    /* 005ba234: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba238: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005ba23e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ba241: call 0x48269f */ r_esp -= 4; W32(r_esp, 0x5ba246u); f_0048269f();
    /* 005ba246: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba249: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba24b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba24c: ret 4 */ FN_RET(0x005b9f95); r_esp += 8; return;
}

void f_005ba24f(void) /* FUN_005ba24f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba24f);
    /* 005ba24f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba250: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba252: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba255: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ba258: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba25b: mov dword ptr [eax], 0x639c5c */ W32((u32)(r_eax), 0x639c5cu);
    /* 005ba261: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba264: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba268: je 0x5ba27f */ if (fZ) goto L_005ba27f;
L_005ba26a:; BB(0x005ba26a);
    /* 005ba26a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba26d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005ba270: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ba273: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba276: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba277: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5ba27cu); f_0048ac1b();
    /* 005ba27c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba27f:; BB(0x005ba27f);
    /* 005ba27f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba283: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ba288: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ba28b: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x5ba290u); f_004827d5();
    /* 005ba290: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba293: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba296: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba29bu); f_00482898();
    /* 005ba29b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ba29e:; BB(0x005ba29e);
    /* 005ba29e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba2a2: je 0x5ba31a */ if (fZ) goto L_005ba31a;
L_005ba2a4:; BB(0x005ba2a4);
    /* 005ba2a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba2a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba2ab: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2ae: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x5ba2b3u); f_004827d5();
    /* 005ba2b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba2b6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba2b9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ba2bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba2bf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ba2c2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba2c6: je 0x5ba2d9 */ if (fZ) goto L_005ba2d9;
L_005ba2c8:; BB(0x005ba2c8);
    /* 005ba2c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba2cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba2cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba2d2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ba2d4u); call_ind(t); }
    /* 005ba2d4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ba2d7: jmp 0x5ba2e0 */ goto L_005ba2e0;
L_005ba2d9:; BB(0x005ba2d9);
    /* 005ba2d9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ba2e0:; BB(0x005ba2e0);
    /* 005ba2e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba2e3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ba2e6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ba2e9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ba2ec: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba2f0: je 0x5ba303 */ if (fZ) goto L_005ba303;
L_005ba2f2:; BB(0x005ba2f2);
    /* 005ba2f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2f4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba2f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba2f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba2fc: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba2feu); call_ind(t); }
    /* 005ba2fe: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ba301: jmp 0x5ba30a */ goto L_005ba30a;
L_005ba303:; BB(0x005ba303);
    /* 005ba303: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005ba30a:; BB(0x005ba30a);
    /* 005ba30a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba30d: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba310: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba315u); f_00482898();
    /* 005ba315: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba318: jmp 0x5ba29e */ goto L_005ba29e;
L_005ba31a:; BB(0x005ba31a);
    /* 005ba31a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba31d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba320: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba325u); f_00482898();
    /* 005ba325: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ba328:; BB(0x005ba328);
    /* 005ba328: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba32c: je 0x5ba377 */ if (fZ) goto L_005ba377;
L_005ba32e:; BB(0x005ba32e);
    /* 005ba32e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba332: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba335: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba338: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x5ba33du); f_004827d5();
    /* 005ba33d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba340: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ba343: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba346: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005ba349: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba34d: je 0x5ba360 */ if (fZ) goto L_005ba360;
L_005ba34f:; BB(0x005ba34f);
    /* 005ba34f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba351: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba354: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba356: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba359: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba35bu); call_ind(t); }
    /* 005ba35b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ba35e: jmp 0x5ba367 */ goto L_005ba367;
L_005ba360:; BB(0x005ba360);
    /* 005ba360: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005ba367:; BB(0x005ba367);
    /* 005ba367: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba36a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba36d: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba372u); f_00482898();
    /* 005ba372: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ba375: jmp 0x5ba328 */ goto L_005ba328;
L_005ba377:; BB(0x005ba377);
    /* 005ba377: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba37a: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba37d: call 0x4825cd */ r_esp -= 4; W32(r_esp, 0x5ba382u); f_004825cd();
    /* 005ba382: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba385: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba388: call 0x4825cd */ r_esp -= 4; W32(r_esp, 0x5ba38du); f_004825cd();
    /* 005ba38d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba390: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5ba395u); f_0048e361();
    /* 005ba395: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba398: ret  */ FN_RET(0x005ba24f); r_esp += 4; return;
}

void f_005ba399(void) /* FUN_005ba399 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba399);
    /* 005ba399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba39a: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba39c: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba39f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    if (R32((u32)(r_ebp+0x8u)) == 1u) fprintf(stderr, "wasmRES wav id=%x\n", R32((u32)(r_ebp+0xcu)));
    /* 005ba3a2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ba3a9: cmp dword ptr [0x6f6ee8], 0 */ {  u32 a = R32((u32)(0x6f6ee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3b0: je 0x5ba3cb */ if (fZ) goto L_005ba3cb;
L_005ba3b2:; BB(0x005ba3b2);
    /* 005ba3b2: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005ba3b7: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3bb: je 0x5ba3cb */ if (fZ) goto L_005ba3cb;
L_005ba3bd:; BB(0x005ba3bd);
    /* 005ba3bd: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005ba3c3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ba3c6: call 0x5ff893 */ r_esp -= 4; W32(r_esp, 0x5ba3cbu); f_005ff893();
L_005ba3cb:; BB(0x005ba3cb);
    /* 005ba3cb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ba3ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba3d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3d3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba3d6: call 0x5ba94e */ r_esp -= 4; W32(r_esp, 0x5ba3dbu); f_005ba94e();
    /* 005ba3db: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ba3de: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3e2: jne 0x5ba764 */ if (!fZ) goto L_005ba764;
L_005ba3e8:; BB(0x005ba3e8);
    /* 005ba3e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3ea: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba3efu); f_0048ab58();
    /* 005ba3ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba3f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ba3f5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3f9: je 0x5ba414 */ if (fZ) goto L_005ba414;
L_005ba3fb:; BB(0x005ba3fb);
    /* 005ba3fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba3fe: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5ba403u); f_0048e320();
    /* 005ba403: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba406: mov dword ptr [ecx], 0x639c64 */ W32((u32)(r_ecx), 0x639c64u);
    /* 005ba40c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba40f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005ba412: jmp 0x5ba41b */ goto L_005ba41b;
L_005ba414:; BB(0x005ba414);
    /* 005ba414: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005ba41b:; BB(0x005ba41b);
    /* 005ba41b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba41e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ba421: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba424: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ba427: cmp dword ptr [ebp - 0x4c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba42b: je 0x5ba59c */ if (fZ) goto L_005ba59c;
L_005ba431:; BB(0x005ba431);
    /* 005ba431: cmp dword ptr [ebp - 0x4c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba435: je 0x5ba65f */ if (fZ) goto L_005ba65f;
L_005ba43b:; BB(0x005ba43b);
    /* 005ba43b: cmp dword ptr [ebp - 0x4c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba43f: je 0x5ba699 */ if (fZ) goto L_005ba699;
L_005ba445:; BB(0x005ba445);
    /* 005ba445: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba447: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba44cu); f_0048ab58();
    /* 005ba44c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba44f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ba452: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba456: je 0x5ba473 */ if (fZ) goto L_005ba473;
L_005ba458:; BB(0x005ba458);
    /* 005ba458: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba45a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba45d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba45e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ba461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba462: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba465: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba466: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba469: call 0x5bac50 */ r_esp -= 4; W32(r_esp, 0x5ba46eu); f_005bac50();
    /* 005ba46e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ba471: jmp 0x5ba47a */ goto L_005ba47a;
L_005ba473:; BB(0x005ba473);
    /* 005ba473: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005ba47a:; BB(0x005ba47a);
    /* 005ba47a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba47d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ba480: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ba483: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba486: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005ba489: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba48c: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ba48f: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005ba492: cmp dword ptr [ebp - 0x54], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba496: ja 0x5ba597 */ if ((!fC&&!fZ)) goto L_005ba597;
L_005ba49c:; BB(0x005ba49c);
    /* 005ba49c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba49f: jmp dword ptr [eax*4 + 0x5ba77f] */ { u32 t = R32((u32)(r_eax*4+0x5ba77fu)); switch (t) { case 0x5ba53fu: goto L_005ba53f; case 0x5ba4a6u: goto L_005ba4a6; case 0x5ba597u: goto L_005ba597; case 0x5ba4f4u: goto L_005ba4f4; default: UNSUP(0x005ba49f, "jump table entry is not a known target"); } }
L_005ba4a6:; BB(0x005ba4a6);
    /* 005ba4a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba4a9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ba4ac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba4af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba4b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba4b4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ba4b7u); call_ind(t); }
    /* 005ba4b7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ba4ba: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba4be: je 0x5ba4ef */ if (fZ) goto L_005ba4ef;
L_005ba4c0:; BB(0x005ba4c0);
    /* 005ba4c0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ba4c7: jmp 0x5ba4d2 */ goto L_005ba4d2;
L_005ba4c9:; BB(0x005ba4c9);
    /* 005ba4c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba4cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba4cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ba4d2:; BB(0x005ba4d2);
    /* 005ba4d2: cmp dword ptr [ebp - 0x10], 0x55 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x55u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba4d6: jae 0x5ba4ef */ if (!fC) goto L_005ba4ef;
L_005ba4d8:; BB(0x005ba4d8);
    /* 005ba4d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba4db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4dc: call 0x60b1bd */ r_esp -= 4; W32(r_esp, 0x5ba4e1u); f_0060b1bd();
    /* 005ba4e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba4e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba4e7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba4ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ba4ed: jmp 0x5ba4c9 */ goto L_005ba4c9;
L_005ba4ef:; BB(0x005ba4ef);
    /* 005ba4ef: jmp 0x5ba597 */ goto L_005ba597;
L_005ba4f4:; BB(0x005ba4f4);
    /* 005ba4f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba4f7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba4fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba4fd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba500: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba502: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ba505u); call_ind(t); }
    /* 005ba505: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ba508: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba50c: je 0x5ba53d */ if (fZ) goto L_005ba53d;
L_005ba50e:; BB(0x005ba50e);
    /* 005ba50e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ba515: jmp 0x5ba520 */ goto L_005ba520;
L_005ba517:; BB(0x005ba517);
    /* 005ba517: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba51a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba51d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ba520:; BB(0x005ba520);
    /* 005ba520: cmp dword ptr [ebp - 0x10], 0x60 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba524: jae 0x5ba53d */ if (!fC) goto L_005ba53d;
L_005ba526:; BB(0x005ba526);
    /* 005ba526: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba529: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba52a: call 0x60b1bd */ r_esp -= 4; W32(r_esp, 0x5ba52fu); f_0060b1bd();
    /* 005ba52f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba532: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba535: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba538: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ba53b: jmp 0x5ba517 */ goto L_005ba517;
L_005ba53d:; BB(0x005ba53d);
    /* 005ba53d: jmp 0x5ba597 */ goto L_005ba597;
L_005ba53f:; BB(0x005ba53f);
    /* 005ba53f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba542: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba545: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba548: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba54b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba54d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ba550u); call_ind(t); }
    /* 005ba550: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba553: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba557: je 0x5ba597 */ if (fZ) goto L_005ba597;
L_005ba559:; BB(0x005ba559);
    /* 005ba559: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ba560: jmp 0x5ba56b */ goto L_005ba56b;
L_005ba562:; BB(0x005ba562);
    /* 005ba562: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba565: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba568: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ba56b:; BB(0x005ba56b);
    /* 005ba56b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba56e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ba571: call 0x5bb348 */ r_esp -= 4; W32(r_esp, 0x5ba576u); f_005bb348();
    /* 005ba576: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ba577: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba579: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba57b: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ba57e: jge 0x5ba597 */ if ((fS==fO)) goto L_005ba597;
L_005ba580:; BB(0x005ba580);
    /* 005ba580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba584: call 0x60b1b8 */ r_esp -= 4; W32(r_esp, 0x5ba589u); f_0060b1b8();
    /* 005ba589: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba58c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba58f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba592: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba595: jmp 0x5ba562 */ goto L_005ba562;
L_005ba597:; BB(0x005ba597);
    /* 005ba597: jmp 0x5ba6d6 */ goto L_005ba6d6;
L_005ba59c:; BB(0x005ba59c);
    /* 005ba59c: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba59e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba5a3u); f_0048ab58();
    /* 005ba5a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba5a6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ba5a9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba5ad: je 0x5ba5c4 */ if (fZ) goto L_005ba5c4;
L_005ba5af:; BB(0x005ba5af);
    /* 005ba5af: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba5b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5b3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ba5b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5b7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ba5ba: call 0x5feba4 */ r_esp -= 4; W32(r_esp, 0x5ba5bfu); f_005feba4();
    /* 005ba5bf: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005ba5c2: jmp 0x5ba5cb */ goto L_005ba5cb;
L_005ba5c4:; BB(0x005ba5c4);
    /* 005ba5c4: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005ba5cb:; BB(0x005ba5cb);
    /* 005ba5cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba5ce: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ba5d1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ba5d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba5d7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ba5da: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba5dd: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ba5e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba5e2: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5ba5e5u); call_ind(t); }
    /* 005ba5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba5e7: je 0x5ba5f8 */ if (fZ) goto L_005ba5f8;
L_005ba5e9:; BB(0x005ba5e9);
    /* 005ba5e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba5ec: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ba5ef: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005ba5f6: jmp 0x5ba65d */ goto L_005ba65d;
L_005ba5f8:; BB(0x005ba5f8);
    /* 005ba5f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba5fb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba5fe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ba601: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba604: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005ba607: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba60b: je 0x5ba61e */ if (fZ) goto L_005ba61e;
L_005ba60d:; BB(0x005ba60d);
    /* 005ba60d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba60f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba612: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba614: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba617: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba619u); call_ind(t); }
    /* 005ba619: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005ba61c: jmp 0x5ba625 */ goto L_005ba625;
L_005ba61e:; BB(0x005ba61e);
    /* 005ba61e: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005ba625:; BB(0x005ba625);
    /* 005ba625: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba627: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba62cu); f_0048ab58();
    /* 005ba62c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba62f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ba632: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba636: je 0x5ba64d */ if (fZ) goto L_005ba64d;
L_005ba638:; BB(0x005ba638);
    /* 005ba638: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba63c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ba63f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba640: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba643: call 0x5fe770 */ r_esp -= 4; W32(r_esp, 0x5ba648u); f_005fe770();
    /* 005ba648: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005ba64b: jmp 0x5ba654 */ goto L_005ba654;
L_005ba64d:; BB(0x005ba64d);
    /* 005ba64d: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005ba654:; BB(0x005ba654);
    /* 005ba654: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba657: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ba65a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005ba65d:; BB(0x005ba65d);
    /* 005ba65d: jmp 0x5ba6d6 */ goto L_005ba6d6;
L_005ba65f:; BB(0x005ba65f);
    /* 005ba65f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba661: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba666u); f_0048ab58();
    /* 005ba666: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba669: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ba66c: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba670: je 0x5ba687 */ if (fZ) goto L_005ba687;
L_005ba672:; BB(0x005ba672);
    /* 005ba672: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba675: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba676: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ba679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba67a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ba67d: call 0x5e8220 */ r_esp -= 4; W32(r_esp, 0x5ba682u); f_005e8220();
    /* 005ba682: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005ba685: jmp 0x5ba68e */ goto L_005ba68e;
L_005ba687:; BB(0x005ba687);
    /* 005ba687: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005ba68e:; BB(0x005ba68e);
    /* 005ba68e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba691: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ba694: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ba697: jmp 0x5ba6d6 */ goto L_005ba6d6;
L_005ba699:; BB(0x005ba699);
    /* 005ba699: push 0x83c */ { u32 v = 0x83cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba69e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ba6a3u); f_0048ab58();
    /* 005ba6a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba6a6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ba6a9: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6ad: je 0x5ba6c6 */ if (fZ) goto L_005ba6c6;
L_005ba6af:; BB(0x005ba6af);
    /* 005ba6af: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba6b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ba6b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6b7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ba6bc: call 0x60be70 */ r_esp -= 4; W32(r_esp, 0x5ba6c1u); f_0060be70();
    /* 005ba6c1: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005ba6c4: jmp 0x5ba6cd */ goto L_005ba6cd;
L_005ba6c6:; BB(0x005ba6c6);
    /* 005ba6c6: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005ba6cd:; BB(0x005ba6cd);
    /* 005ba6cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba6d0: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005ba6d3: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_005ba6d6:; BB(0x005ba6d6);
    /* 005ba6d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba6d9: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6dd: je 0x5ba700 */ if (fZ) goto L_005ba700;
L_005ba6df:; BB(0x005ba6df);
    /* 005ba6df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba6e2: mov dword ptr [ecx + 0xc], 1 */ W32((u32)(r_ecx+0xcu), 0x1u);
    /* 005ba6e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba6ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6ed: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba6f0: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba6f3: call 0x48269f */ r_esp -= 4; W32(r_esp, 0x5ba6f8u); f_0048269f();
    /* 005ba6f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba6fb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005ba6fe: jmp 0x5ba779 */ goto L_005ba779;
L_005ba700:; BB(0x005ba700);
    /* 005ba700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba703: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba707: je 0x5ba736 */ if (fZ) goto L_005ba736;
L_005ba709:; BB(0x005ba709);
    /* 005ba709: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba70c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba70f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ba712: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ba715: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005ba718: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba71c: je 0x5ba72f */ if (fZ) goto L_005ba72f;
L_005ba71e:; BB(0x005ba71e);
    /* 005ba71e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba720: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ba723: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba725: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ba728: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ba72au); call_ind(t); }
    /* 005ba72a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005ba72d: jmp 0x5ba736 */ goto L_005ba736;
L_005ba72f:; BB(0x005ba72f);
    /* 005ba72f: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005ba736:; BB(0x005ba736);
    /* 005ba736: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba739: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005ba73c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ba73f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005ba742: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba746: je 0x5ba759 */ if (fZ) goto L_005ba759;
L_005ba748:; BB(0x005ba748);
    /* 005ba748: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba74a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ba74d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba74f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ba752: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba754u); call_ind(t); }
    /* 005ba754: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005ba757: jmp 0x5ba760 */ goto L_005ba760;
L_005ba759:; BB(0x005ba759);
    /* 005ba759: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005ba760:; BB(0x005ba760);
    /* 005ba760: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba762: jmp 0x5ba779 */ goto L_005ba779;
L_005ba764:; BB(0x005ba764);
    /* 005ba764: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba767: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ba76a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba76d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba770: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005ba773: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba776: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_005ba779:; BB(0x005ba779);
    /* 005ba779: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba77b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba77c: ret 8 */ FN_RET(0x005ba399); r_esp += 12; return;
}

void f_005ba79b(void) /* FUN_005ba79b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba79b);
    /* 005ba79b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba79c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba79e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba7a1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ba7a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba7a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba7a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba7ab: call 0x5ba9a0 */ r_esp -= 4; W32(r_esp, 0x5ba7b0u); f_005ba9a0();
    /* 005ba7b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba7b3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba7b7: je 0x5ba7d3 */ if (fZ) goto L_005ba7d3;
L_005ba7b9:; BB(0x005ba7b9);
    /* 005ba7b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba7bc: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ba7c0: jle 0x5ba7d1 */ if ((fZ||fS!=fO)) goto L_005ba7d1;
L_005ba7c2:; BB(0x005ba7c2);
    /* 005ba7c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba7c5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005ba7c8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba7cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba7ce: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_005ba7d1:; BB(0x005ba7d1);
    /* 005ba7d1: jmp 0x5ba7e0 */ goto L_005ba7e0;
L_005ba7d3:; BB(0x005ba7d3);
    /* 005ba7d3: push 0x697b6c */ { u32 v = 0x697b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba7d8: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ba7ddu); f_0060fc40();
    /* 005ba7dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba7e0:; BB(0x005ba7e0);
    /* 005ba7e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba7e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba7e3: ret 4 */ FN_RET(0x005ba79b); r_esp += 8; return;
}

void f_005ba7e6(void) /* FUN_005ba7e6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba7e6);
    /* 005ba7e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba7e7: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba7e9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba7ec: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ba7ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba7f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba7f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba7f6: call 0x5ba9a0 */ r_esp -= 4; W32(r_esp, 0x5ba7fbu); f_005ba9a0();
    /* 005ba7fb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba7fe: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba802: je 0x5ba86a */ if (fZ) goto L_005ba86a;
L_005ba804:; BB(0x005ba804);
    /* 005ba804: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba808: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba80b: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba80e: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x5ba813u); f_004827d5();
    /* 005ba813: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba816: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba819: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ba81c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba81f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ba822: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba826: je 0x5ba839 */ if (fZ) goto L_005ba839;
L_005ba828:; BB(0x005ba828);
    /* 005ba828: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba82a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba82d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba82f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba832: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ba834u); call_ind(t); }
    /* 005ba834: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ba837: jmp 0x5ba840 */ goto L_005ba840;
L_005ba839:; BB(0x005ba839);
    /* 005ba839: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ba840:; BB(0x005ba840);
    /* 005ba840: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba843: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ba846: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba849: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ba84c: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba850: je 0x5ba863 */ if (fZ) goto L_005ba863;
L_005ba852:; BB(0x005ba852);
    /* 005ba852: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba854: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba857: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba859: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba85c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba85eu); call_ind(t); }
    /* 005ba85e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ba861: jmp 0x5ba86a */ goto L_005ba86a;
L_005ba863:; BB(0x005ba863);
    /* 005ba863: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005ba86a:; BB(0x005ba86a);
    /* 005ba86a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba86c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba86d: ret 4 */ FN_RET(0x005ba7e6); r_esp += 8; return;
}

void f_005ba870(void) /* FUN_005ba870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba870);
    /* 005ba870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba871: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba873: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba876: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ba879: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba87c: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba87f: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba884u); f_00482898();
    /* 005ba884: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ba887:; BB(0x005ba887);
    /* 005ba887: mov eax, dword ptr [0x6f6ef0] */ r_eax = R32((u32)(0x6f6ef0u));
    /* 005ba88c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ba88f: jle 0x5ba948 */ if ((fZ||fS!=fO)) goto L_005ba948;
L_005ba895:; BB(0x005ba895);
    /* 005ba895: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba899: je 0x5ba948 */ if (fZ) goto L_005ba948;
L_005ba89f:; BB(0x005ba89f);
    /* 005ba89f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba8a2: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba8a6: jne 0x5ba935 */ if (!fZ) goto L_005ba935;
L_005ba8ac:; BB(0x005ba8ac);
    /* 005ba8ac: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba8b0: je 0x5ba8bf */ if (fZ) goto L_005ba8bf;
L_005ba8b2:; BB(0x005ba8b2);
    /* 005ba8b2: push 0x697b8c */ { u32 v = 0x697b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8b7: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5ba8bcu); f_0060fc40();
    /* 005ba8bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba8bf:; BB(0x005ba8bf);
    /* 005ba8bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba8c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8c3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba8c6: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba8c9: call 0x4827d5 */ r_esp -= 4; W32(r_esp, 0x5ba8ceu); f_004827d5();
    /* 005ba8ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba8d1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba8d4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ba8d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba8da: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ba8dd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba8e1: je 0x5ba8f4 */ if (fZ) goto L_005ba8f4;
L_005ba8e3:; BB(0x005ba8e3);
    /* 005ba8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba8e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba8ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba8ed: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ba8efu); call_ind(t); }
    /* 005ba8ef: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ba8f2: jmp 0x5ba8fb */ goto L_005ba8fb;
L_005ba8f4:; BB(0x005ba8f4);
    /* 005ba8f4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ba8fb:; BB(0x005ba8fb);
    /* 005ba8fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba8fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ba901: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba904: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ba907: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba90b: je 0x5ba91e */ if (fZ) goto L_005ba91e;
L_005ba90d:; BB(0x005ba90d);
    /* 005ba90d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba90f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba912: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba914: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba917: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ba919u); call_ind(t); }
    /* 005ba919: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ba91c: jmp 0x5ba925 */ goto L_005ba925;
L_005ba91e:; BB(0x005ba91e);
    /* 005ba91e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005ba925:; BB(0x005ba925);
    /* 005ba925: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba928: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba92b: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba930u); f_00482898();
    /* 005ba930: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba933: jmp 0x5ba943 */ goto L_005ba943;
L_005ba935:; BB(0x005ba935);
    /* 005ba935: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba938: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba93b: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x5ba940u); f_00482935();
    /* 005ba940: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ba943:; BB(0x005ba943);
    /* 005ba943: jmp 0x5ba887 */ goto L_005ba887;
L_005ba948:; BB(0x005ba948);
    /* 005ba948: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba94a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba94b: ret 4 */ FN_RET(0x005ba870); r_esp += 8; return;
}

void f_005ba94e(void) /* FUN_005ba94e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba94e);
    /* 005ba94e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba94f: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba951: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba954: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ba957: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba95a: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba95d: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba962u); f_00482898();
    /* 005ba962: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ba965:; BB(0x005ba965);
    /* 005ba965: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba969: je 0x5ba997 */ if (fZ) goto L_005ba997;
L_005ba96b:; BB(0x005ba96b);
    /* 005ba96b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba96e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba971: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ba974: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba977: jne 0x5ba987 */ if (!fZ) goto L_005ba987;
L_005ba979:; BB(0x005ba979);
    /* 005ba979: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba97c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba97f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005ba982: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba985: je 0x5ba997 */ if (fZ) goto L_005ba997;
L_005ba987:; BB(0x005ba987);
    /* 005ba987: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba98a: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba98d: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x5ba992u); f_00482935();
    /* 005ba992: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba995: jmp 0x5ba965 */ goto L_005ba965;
L_005ba997:; BB(0x005ba997);
    /* 005ba997: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba99a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba99c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba99d: ret 8 */ FN_RET(0x005ba94e); r_esp += 12; return;
}

void f_005ba9a0(void) /* FUN_005ba9a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba9a0);
    /* 005ba9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba9a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba9a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ba9a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba9ac: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba9af: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5ba9b4u); f_00482898();
    /* 005ba9b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ba9b7:; BB(0x005ba9b7);
    /* 005ba9b7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba9bb: je 0x5ba9d8 */ if (fZ) goto L_005ba9d8;
L_005ba9bd:; BB(0x005ba9bd);
    /* 005ba9bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba9c0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba9c3: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba9c6: je 0x5ba9d8 */ if (fZ) goto L_005ba9d8;
L_005ba9c8:; BB(0x005ba9c8);
    /* 005ba9c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba9cb: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba9ce: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x5ba9d3u); f_00482935();
    /* 005ba9d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba9d6: jmp 0x5ba9b7 */ goto L_005ba9b7;
L_005ba9d8:; BB(0x005ba9d8);
    /* 005ba9d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba9db: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba9dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba9de: ret 4 */ FN_RET(0x005ba9a0); r_esp += 8; return;
}

void f_005ba9e1(void) /* FUN_005ba9e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba9e1);
    /* 005ba9e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9e2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba9e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ba9e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ba9eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba9ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba9f3: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5ba9f8u); f_005ba399();
    /* 005ba9f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba9fc: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5baa01u); f_005ba79b();
    /* 005baa01: mov esp, ebp */ r_esp = r_ebp;
    /* 005baa03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005baa04: ret 8 */ FN_RET(0x005ba9e1); r_esp += 12; return;
}

void f_005baa07(void) /* FUN_005baa07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005baa07);
    /* 005baa07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005baa08: mov ebp, esp */ r_ebp = r_esp;
    /* 005baa0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa0b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005baa0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005baa11: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 005baa14: mov esp, ebp */ r_esp = r_ebp;
    /* 005baa16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005baa17: ret  */ FN_RET(0x005baa07); r_esp += 4; return;
}

void f_005baa18(void) /* FUN_005baa18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005baa18);
    /* 005baa18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005baa19: mov ebp, esp */ r_ebp = r_esp;
    /* 005baa1b: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005baa1e: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005baa21: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005baa28:; BB(0x005baa28);
    /* 005baa28: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005baa2b: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005baa32: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005baa35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baa37: je 0x5bab28 */ if (fZ) goto L_005bab28;
L_005baa3d:; BB(0x005baa3d);
    /* 005baa3d: push 0x697ba4 */ { u32 v = 0x697ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 005baa42: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005baa45: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005baa4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa4d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5baa52u); f_006240c0();
    /* 005baa52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baa55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baa57: je 0x5baa83 */ if (fZ) goto L_005baa83;
L_005baa59:; BB(0x005baa59);
    /* 005baa59: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005baa5c: mov eax, dword ptr [edx*4 + 0x6870b0] */ r_eax = R32((u32)(r_edx*4+0x6870b0u));
    /* 005baa63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baa64: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005baa67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa68: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5baa6du); f_00624510();
    /* 005baa6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baa70: push 0x697ba8 */ { u32 v = 0x697ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 005baa75: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005baa78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa79: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5baa7eu); f_00624520();
    /* 005baa7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baa81: jmp 0x5baa94 */ goto L_005baa94;
L_005baa83:; BB(0x005baa83);
    /* 005baa83: push 0x6fc02c */ { u32 v = 0x6fc02cu; r_esp -= 4; W32(r_esp, v); }
    /* 005baa88: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005baa8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baa8c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5baa91u); f_00624510();
    /* 005baa91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005baa94:; BB(0x005baa94);
    /* 005baa94: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005baa97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa98: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005baa9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa9c: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5baaa1u); f_00624520();
    /* 005baaa1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baaa4: push 0x697bac */ { u32 v = 0x697bacu; r_esp -= 4; W32(r_esp, v); }
    /* 005baaa9: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005baaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baaad: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5baab2u); f_006243c0();
    /* 005baab2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baab5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005baab8: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baabc: je 0x5bab1a */ if (fZ) goto L_005bab1a;
L_005baabe:; BB(0x005baabe);
    /* 005baabe: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005baac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baac2: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5baac7u); f_006241d0();
    /* 005baac7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baaca: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005baacf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5baad4u); f_0048ab58();
    /* 005baad4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baad7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005baada: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baade: je 0x5baaed */ if (fZ) goto L_005baaed;
L_005baae0:; BB(0x005baae0);
    /* 005baae0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005baae3: call 0x5b80e2 */ r_esp -= 4; W32(r_esp, 0x5baae8u); f_005b80e2();
    /* 005baae8: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005baaeb: jmp 0x5baaf4 */ goto L_005baaf4;
L_005baaed:; BB(0x005baaed);
    /* 005baaed: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005baaf4:; BB(0x005baaf4);
    /* 005baaf4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005baaf7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005baafa: push 0x697bb0 */ { u32 v = 0x697bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005baaff: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005bab02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bab03: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bab06: call 0x5b8581 */ r_esp -= 4; W32(r_esp, 0x5bab0bu); f_005b8581();
    /* 005bab0b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bab0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bab0f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bab12: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bab15: call 0x4826eb */ r_esp -= 4; W32(r_esp, 0x5bab1au); f_004826eb();
L_005bab1a:; BB(0x005bab1a);
    /* 005bab1a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bab1d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bab20: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005bab23: jmp 0x5baa28 */ goto L_005baa28;
L_005bab28:; BB(0x005bab28);
    /* 005bab28: movsx eax, byte ptr [0x6f6f00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 005bab2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab31: je 0x5babdb */ if (fZ) goto L_005babdb;
L_005bab37:; BB(0x005bab37);
    /* 005bab37: mov cl, byte ptr [0x6f6f00] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6f6f00u))) & 0xffu);
    /* 005bab3d: mov byte ptr [ebp - 0x40], cl */ W8((u32)(r_ebp+0xffffffc0u), (u8)r_ecx);
    /* 005bab40: mov byte ptr [ebp - 0x3f], 0 */ W8((u32)(r_ebp+0xffffffc1u), 0x0u);
    /* 005bab44: push 0x697bb4 */ { u32 v = 0x697bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bab49: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005bab4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bab4d: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5bab52u); f_00624520();
    /* 005bab52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bab55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bab58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bab59: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005bab5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bab5d: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5bab62u); f_00624520();
    /* 005bab62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bab65: push 0x697bb8 */ { u32 v = 0x697bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bab6a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005bab6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bab6e: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5bab73u); f_006243c0();
    /* 005bab73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bab76: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005bab79: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab7d: je 0x5babdb */ if (fZ) goto L_005babdb;
L_005bab7f:; BB(0x005bab7f);
    /* 005bab7f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005bab82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bab83: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5bab88u); f_006241d0();
    /* 005bab88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bab8b: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bab90: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bab95u); f_0048ab58();
    /* 005bab95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bab98: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005bab9b: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab9f: je 0x5babae */ if (fZ) goto L_005babae;
L_005baba1:; BB(0x005baba1);
    /* 005baba1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005baba4: call 0x5b80e2 */ r_esp -= 4; W32(r_esp, 0x5baba9u); f_005b80e2();
    /* 005baba9: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005babac: jmp 0x5babb5 */ goto L_005babb5;
L_005babae:; BB(0x005babae);
    /* 005babae: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005babb5:; BB(0x005babb5);
    /* 005babb5: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005babb8: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005babbb: push 0x697bbc */ { u32 v = 0x697bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005babc0: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005babc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005babc4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005babc7: call 0x5b8581 */ r_esp -= 4; W32(r_esp, 0x5babccu); f_005b8581();
    /* 005babcc: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005babcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005babd0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005babd3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005babd6: call 0x4826eb */ r_esp -= 4; W32(r_esp, 0x5babdbu); f_004826eb();
L_005babdb:; BB(0x005babdb);
    /* 005babdb: mov esp, ebp */ r_esp = r_ebp;
    /* 005babdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005babde: ret 4 */ FN_RET(0x005baa18); r_esp += 8; return;
}

void f_005babf0(void) /* FUN_005babf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005babf0);
    /* 005babf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005babf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005babf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005babf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005babf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005babfa: call 0x5ba24f */ r_esp -= 4; W32(r_esp, 0x5babffu); f_005ba24f();
    /* 005babff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bac02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bac05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bac07: je 0x5bac15 */ if (fZ) goto L_005bac15;
L_005bac09:; BB(0x005bac09);
    /* 005bac09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac0d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5bac12u); f_0048ac1b();
    /* 005bac12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bac15:; BB(0x005bac15);
    /* 005bac15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac18: mov esp, ebp */ r_esp = r_ebp;
    /* 005bac1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bac1b: ret 4 */ FN_RET(0x005babf0); r_esp += 8; return;
}

void f_005bac20(void) /* FUN_005bac20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bac20);
    /* 005bac20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bac21: mov ebp, esp */ r_ebp = r_esp;
    /* 005bac23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bac27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac2a: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5bac2fu); f_0048e361();
    /* 005bac2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bac32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bac35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bac37: je 0x5bac45 */ if (fZ) goto L_005bac45;
L_005bac39:; BB(0x005bac39);
    /* 005bac39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac3d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5bac42u); f_0048ac1b();
    /* 005bac42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bac45:; BB(0x005bac45);
    /* 005bac45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac48: mov esp, ebp */ r_esp = r_ebp;
    /* 005bac4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bac4b: ret 4 */ FN_RET(0x005bac20); r_esp += 8; return;
}

void f_005bac50(void) /* FUN_005bac50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bac50);
    /* 005bac50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bac51: mov ebp, esp */ r_ebp = r_esp;
    /* 005bac53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bac57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac5a: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5bac5fu); f_0048e320();
    /* 005bac5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac62: mov dword ptr [eax], 0x639c6c */ W32((u32)(r_eax), 0x639c6cu);
    /* 005bac68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bac6e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005bac71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac74: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bac77: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005bac7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac7d: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005bac84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac87: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005bac8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac91: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 005bac98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bac9b: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 005baca2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005baca5: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005bacac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacaf: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005bacb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacb9: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 005bacc0: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bacc4: je 0x5bacd1 */ if (fZ) goto L_005bacd1;
L_005bacc6:; BB(0x005bacc6);
    /* 005bacc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacc9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005baccc: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005baccf: jmp 0x5bacdf */ goto L_005bacdf;
L_005bacd1:; BB(0x005bacd1);
    /* 005bacd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacd4: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005bacd9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bacdc: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_005bacdf:; BB(0x005bacdf);
    /* 005bacdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bace2: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bace6: jne 0x5bacea */ if (!fZ) goto L_005bacea;
L_005bace8:; BB(0x005bace8);
    /* 005bace8: jmp 0x5bad3e */ goto L_005bad3e;
L_005bacea:; BB(0x005bacea);
    /* 005bacea: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bacee: je 0x5bad0b */ if (fZ) goto L_005bad0b;
L_005bacf0:; BB(0x005bacf0);
    /* 005bacf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacf3: call 0x5baf4e */ r_esp -= 4; W32(r_esp, 0x5bacf8u); f_005baf4e();
    /* 005bacf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bacfb: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bacff: jne 0x5bad09 */ if (!fZ) goto L_005bad09;
L_005bad01:; BB(0x005bad01);
    /* 005bad01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad04: call 0x5badb3 */ r_esp -= 4; W32(r_esp, 0x5bad09u); f_005badb3();
L_005bad09:; BB(0x005bad09);
    /* 005bad09: jmp 0x5bad24 */ goto L_005bad24;
L_005bad0b:; BB(0x005bad0b);
    /* 005bad0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad0e: call 0x5bb40c */ r_esp -= 4; W32(r_esp, 0x5bad13u); f_005bb40c();
    /* 005bad13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad16: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad1a: jne 0x5bad24 */ if (!fZ) goto L_005bad24;
L_005bad1c:; BB(0x005bad1c);
    /* 005bad1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad1f: call 0x5bb374 */ r_esp -= 4; W32(r_esp, 0x5bad24u); f_005bb374();
L_005bad24:; BB(0x005bad24);
    /* 005bad24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad27: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad2b: je 0x5bad3e */ if (fZ) goto L_005bad3e;
L_005bad2d:; BB(0x005bad2d);
    /* 005bad2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad30: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bad33: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5bad38u); f_0060ebea();
    /* 005bad38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad3b: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
L_005bad3e:; BB(0x005bad3e);
    /* 005bad3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad41: mov esp, ebp */ r_esp = r_ebp;
    /* 005bad43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bad44: ret 0x10 */ FN_RET(0x005bac50); r_esp += 20; return;
}

void f_005bad47(void) /* FUN_005bad47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bad47);
    /* 005bad47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bad48: mov ebp, esp */ r_ebp = r_esp;
    /* 005bad4a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bad4d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bad50: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bad53: mov dword ptr [eax], 0x639c6c */ W32((u32)(r_eax), 0x639c6cu);
    /* 005bad59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bad5c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005bad5f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bad62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bad65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bad68: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad6c: je 0x5bad7f */ if (fZ) goto L_005bad7f;
L_005bad6e:; BB(0x005bad6e);
    /* 005bad6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bad70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bad75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bad78: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bad7au); call_ind(t); }
    /* 005bad7a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bad7d: jmp 0x5bad86 */ goto L_005bad86;
L_005bad7f:; BB(0x005bad7f);
    /* 005bad7f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005bad86:; BB(0x005bad86);
    /* 005bad86: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bad89: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad8d: je 0x5bada7 */ if (fZ) goto L_005bada7;
L_005bad8f:; BB(0x005bad8f);
    /* 005bad8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bad92: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad96: je 0x5bada7 */ if (fZ) goto L_005bada7;
L_005bad98:; BB(0x005bad98);
    /* 005bad98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bad9b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005bad9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bad9f: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5bada4u); f_006241d0();
    /* 005bada4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bada7:; BB(0x005bada7);
    /* 005bada7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005badaa: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5badafu); f_0048e361();
    /* 005badaf: mov esp, ebp */ r_esp = r_ebp;
    /* 005badb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005badb2: ret  */ FN_RET(0x005bad47); r_esp += 4; return;
}

void f_005badb3(void) /* FUN_005badb3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005badb3);
    /* 005badb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005badb4: mov ebp, esp */ r_ebp = r_esp;
    /* 005badb6: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005badbc: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 005badc2: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005badc8: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005badcf: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005badd5: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005badd8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005baddb: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5bade0u); f_00482898();
    /* 005bade0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bade3:; BB(0x005bade3);
    /* 005bade3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bade7: je 0x5baefd */ if (fZ) goto L_005baefd;
L_005baded:; BB(0x005baded);
    /* 005baded: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005badf3: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005badf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005badf7: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005badfd: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bae00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bae01: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae07: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bae0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae0b: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae11: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bae14: mov edx, dword ptr [ecx*4 + 0x697c08] */ r_edx = R32((u32)(r_ecx*4+0x697c08u));
    /* 005bae1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bae1f: call 0x5b9094 */ r_esp -= 4; W32(r_esp, 0x5bae24u); f_005b9094();
    /* 005bae24: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae2a: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae2e: je 0x5baee4 */ if (fZ) goto L_005baee4;
L_005bae34:; BB(0x005bae34);
    /* 005bae34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bae3b: cmp dword ptr [0x71113c], 0 */ {  u32 a = R32((u32)(0x71113cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae42: je 0x5baee2 */ if (fZ) goto L_005baee2;
L_005bae48:; BB(0x005bae48);
    /* 005bae48: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae4e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bae51: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005bae57: cmp dword ptr [ebp - 0x110], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae5e: je 0x5bae95 */ if (fZ) goto L_005bae95;
L_005bae60:; BB(0x005bae60);
    /* 005bae60: cmp dword ptr [ebp - 0x110], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae67: je 0x5bae6b */ if (fZ) goto L_005bae6b;
L_005bae69:; BB(0x005bae69);
    /* 005bae69: jmp 0x5baebf */ goto L_005baebf;
L_005bae6b:; BB(0x005bae6b);
    /* 005bae6b: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae71: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bae74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae75: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae7b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bae7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bae7f: push 0x697c7c */ { u32 v = 0x697c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bae84: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005bae8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae8b: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bae90u); f_00624050();
    /* 005bae90: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bae93: jmp 0x5baed3 */ goto L_005baed3;
L_005bae95:; BB(0x005bae95);
    /* 005bae95: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bae9b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bae9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bae9f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005baea5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005baea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baea9: push 0x697ca4 */ { u32 v = 0x697ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 005baeae: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005baeb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baeb5: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5baebau); f_00624050();
    /* 005baeba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baebd: jmp 0x5baed3 */ goto L_005baed3;
L_005baebf:; BB(0x005baebf);
    /* 005baebf: push 0x697ccc */ { u32 v = 0x697cccu; r_esp -= 4; W32(r_esp, v); }
    /* 005baec4: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005baeca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baecb: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5baed0u); f_00624050();
    /* 005baed0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005baed3:; BB(0x005baed3);
    /* 005baed3: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005baed9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baeda: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5baedfu); f_0060fc40();
    /* 005baedf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005baee2:; BB(0x005baee2);
    /* 005baee2: jmp 0x5baef8 */ goto L_005baef8;
L_005baee4:; BB(0x005baee4);
    /* 005baee4: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005baeea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005baeed: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005baef0: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x5baef5u); f_00482935();
    /* 005baef5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005baef8:; BB(0x005baef8);
    /* 005baef8: jmp 0x5bade3 */ goto L_005bade3;
L_005baefd:; BB(0x005baefd);
    /* 005baefd: mov esp, ebp */ r_esp = r_ebp;
    /* 005baeff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005baf00: ret  */ FN_RET(0x005badb3); r_esp += 4; return;
}

void f_005baf01(void) /* FUN_005baf01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005baf01);
    /* 005baf01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005baf02: mov ebp, esp */ r_ebp = r_esp;
    /* 005baf04: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005baf07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005baf0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf0b: call 0x626810 */ r_esp -= 4; W32(r_esp, 0x5baf10u); f_00626810();
    /* 005baf10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf13: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005baf16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005baf18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005baf1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005baf1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf1e: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5baf23u); f_00626620();
    /* 005baf23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005baf29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf2a: call 0x626810 */ r_esp -= 4; W32(r_esp, 0x5baf2fu); f_00626810();
    /* 005baf2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005baf35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005baf37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005baf3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005baf3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf3f: call 0x626620 */ r_esp -= 4; W32(r_esp, 0x5baf44u); f_00626620();
    /* 005baf44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005baf4a: mov esp, ebp */ r_esp = r_ebp;
    /* 005baf4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005baf4d: ret  */ FN_RET(0x005baf01); r_esp += 4; return;
}

void f_005baf4e(void) /* FUN_005baf4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005baf4e);
    /* 005baf4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005baf4f: mov ebp, esp */ r_ebp = r_esp;
    /* 005baf51: sub esp, 0x324 */ {  u32 a = r_esp; u32 b = 0x324u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005baf57: mov dword ptr [ebp - 0x31c], ecx */ W32((u32)(r_ebp+0xfffffce4u), r_ecx);
    /* 005baf5d: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005baf67: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_005baf71:; BB(0x005baf71);
    /* 005baf71: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005baf77: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005baf7e: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005baf81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf83: je 0x5bb18a */ if (fZ) goto L_005bb18a;
L_005baf89:; BB(0x005baf89);
    /* 005baf89: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf90: jne 0x5bb18a */ if (!fZ) goto L_005bb18a;
L_005baf96:; BB(0x005baf96);
    /* 005baf96: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005baf9c: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bafa0: je 0x5bb012 */ if (fZ) goto L_005bb012;
L_005bafa2:; BB(0x005bafa2);
    /* 005bafa2: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bafa8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bafab: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bafb0u); f_005baa07();
    /* 005bafb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bafb2: je 0x5bb012 */ if (fZ) goto L_005bb012;
L_005bafb4:; BB(0x005bafb4);
    /* 005bafb4: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bafba: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bafbd: mov ecx, dword ptr [eax*4 + 0x697c30] */ r_ecx = R32((u32)(r_eax*4+0x697c30u));
    /* 005bafc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bafc5: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bafcb: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bafce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bafcf: movsx ecx, byte ptr [0x697c00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bafd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bafd7: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bafdd: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005bafe0: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bafe5u); f_005baa07();
    /* 005bafe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bafe6: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bafed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bafee: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005baff4: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 005baffb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baffc: push 0x697ce4 */ { u32 v = 0x697ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb001: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005bb007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb008: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb00du); f_00624050();
    /* 005bb00d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb010: jmp 0x5bb057 */ goto L_005bb057;
L_005bb012:; BB(0x005bb012);
    /* 005bb012: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb018: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb01b: mov eax, dword ptr [edx*4 + 0x697c30] */ r_eax = R32((u32)(r_edx*4+0x697c30u));
    /* 005bb022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb023: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb029: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bb02c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb02d: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb035: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb03b: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 005bb042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb043: push 0x697cf4 */ { u32 v = 0x697cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb048: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005bb04e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb04f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb054u); f_00624050();
    /* 005bb054: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb057:; BB(0x005bb057);
    /* 005bb057: push 0x697d00 */ { u32 v = 0x697d00u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb05c: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb062: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb063: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5bb068u); f_006243c0();
    /* 005bb068: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb06b: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005bb071: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb078: jne 0x5bb176 */ if (!fZ) goto L_005bb176;
L_005bb07e:; BB(0x005bb07e);
    /* 005bb07e: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb085: jne 0x5bb176 */ if (!fZ) goto L_005bb176;
L_005bb08b:; BB(0x005bb08b);
    /* 005bb08b: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb091: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb095: je 0x5bb10f */ if (fZ) goto L_005bb10f;
L_005bb097:; BB(0x005bb097);
    /* 005bb097: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb09d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bb0a0: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb0a5u); f_005baa07();
    /* 005bb0a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb0a7: je 0x5bb10f */ if (fZ) goto L_005bb10f;
L_005bb0a9:; BB(0x005bb0a9);
    /* 005bb0a9: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb0af: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb0b2: mov eax, dword ptr [edx*4 + 0x697c30] */ r_eax = R32((u32)(r_edx*4+0x697c30u));
    /* 005bb0b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0ba: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb0c0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bb0c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0c4: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb0cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0cc: movsx ecx, byte ptr [0x697c00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb0d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0d4: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb0da: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005bb0dd: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb0e2u); f_005baa07();
    /* 005bb0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0e3: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0eb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb0f1: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 005bb0f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0f9: push 0x697d04 */ { u32 v = 0x697d04u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0fe: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005bb104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb105: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb10au); f_00624050();
    /* 005bb10a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb10d: jmp 0x5bb15c */ goto L_005bb15c;
L_005bb10f:; BB(0x005bb10f);
    /* 005bb10f: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb115: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb118: mov eax, dword ptr [edx*4 + 0x697c30] */ r_eax = R32((u32)(r_edx*4+0x697c30u));
    /* 005bb11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb120: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb126: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bb129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb12a: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb132: movsx ecx, byte ptr [0x697c00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb139: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb13a: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb140: mov eax, dword ptr [edx*4 + 0x6870b0] */ r_eax = R32((u32)(r_edx*4+0x6870b0u));
    /* 005bb147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb148: push 0x697d1c */ { u32 v = 0x697d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb14d: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb154: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb159u); f_00624050();
    /* 005bb159: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb15c:; BB(0x005bb15c);
    /* 005bb15c: push 0x697d30 */ { u32 v = 0x697d30u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb161: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb168: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5bb16du); f_006243c0();
    /* 005bb16d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb170: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
L_005bb176:; BB(0x005bb176);
    /* 005bb176: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb17c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb17f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005bb185: jmp 0x5baf71 */ goto L_005baf71;
L_005bb18a:; BB(0x005bb18a);
    /* 005bb18a: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb191: je 0x5bb344 */ if (fZ) goto L_005bb344;
L_005bb197:; BB(0x005bb197);
    /* 005bb197: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb19d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb19e: call 0x5baf01 */ r_esp -= 4; W32(r_esp, 0x5bb1a3u); f_005baf01();
    /* 005bb1a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb1a6: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb1ac: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005bb1af: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1b1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bb1b6u); f_0048ab58();
    /* 005bb1b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb1b9: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 005bb1bf: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb1c6: je 0x5bb1e5 */ if (fZ) goto L_005bb1e5;
L_005bb1c8:; BB(0x005bb1c8);
    /* 005bb1c8: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb1ce: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005bb1d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1d2: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 005bb1d8: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x5bb1ddu); f_0060eb40();
    /* 005bb1dd: mov dword ptr [ebp - 0x320], eax */ W32((u32)(r_ebp+0xfffffce0u), r_eax);
    /* 005bb1e3: jmp 0x5bb1ef */ goto L_005bb1ef;
L_005bb1e5:; BB(0x005bb1e5);
    /* 005bb1e5: mov dword ptr [ebp - 0x320], 0 */ W32((u32)(r_ebp+0xfffffce0u), 0x0u);
L_005bb1ef:; BB(0x005bb1ef);
    /* 005bb1ef: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb1f5: mov eax, dword ptr [ebp - 0x320] */ r_eax = R32((u32)(r_ebp+0xfffffce0u));
    /* 005bb1fb: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005bb1fe: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb204: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005bb207: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5bb20cu); f_0060ebea();
    /* 005bb20c: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb212: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005bb215: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb21c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb21e: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb224: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005bb227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb228: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb22e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bb231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb232: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5bb237u); f_00624250();
    /* 005bb237: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb23a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb241: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5bb246u); f_006241d0();
    /* 005bb246: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb249: cmp dword ptr [0x711134], 0 */ {  u32 a = R32((u32)(0x711134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb250: je 0x5bb29d */ if (fZ) goto L_005bb29d;
L_005bb252:; BB(0x005bb252);
    /* 005bb252: push 0x697d34 */ { u32 v = 0x697d34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb257: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 005bb25d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb25e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5bb263u); f_00624510();
    /* 005bb263: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb266: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb268: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb26e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb26f: call 0x6269c0 */ r_esp -= 4; W32(r_esp, 0x5bb274u); f_006269c0();
    /* 005bb274: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb278: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 005bb27e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb27f: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5bb284u); f_00624520();
    /* 005bb284: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb287: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb289: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 005bb28f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb290: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb296: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb297: call dword ptr [0x633094] */ { u32 t = R32((u32)(0x633094u)); r_esp -= 4; W32(r_esp, 0x5bb29du); call_ind(t); }
L_005bb29d:; BB(0x005bb29d);
    /* 005bb29d: cmp dword ptr [0x71113c], 0 */ {  u32 a = R32((u32)(0x71113cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2a4: je 0x5bb344 */ if (fZ) goto L_005bb344;
L_005bb2aa:; BB(0x005bb2aa);
    /* 005bb2aa: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb2b0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb2b3: mov dword ptr [ebp - 0x324], eax */ W32((u32)(r_ebp+0xfffffcdcu), r_eax);
    /* 005bb2b9: cmp dword ptr [ebp - 0x324], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2c0: je 0x5bb2f7 */ if (fZ) goto L_005bb2f7;
L_005bb2c2:; BB(0x005bb2c2);
    /* 005bb2c2: cmp dword ptr [ebp - 0x324], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffcdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2c9: je 0x5bb2cd */ if (fZ) goto L_005bb2cd;
L_005bb2cb:; BB(0x005bb2cb);
    /* 005bb2cb: jmp 0x5bb321 */ goto L_005bb321;
L_005bb2cd:; BB(0x005bb2cd);
    /* 005bb2cd: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb2d3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bb2d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2d7: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb2dd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bb2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2e1: push 0x697d3c */ { u32 v = 0x697d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2e6: lea edx, [ebp - 0x314] */ r_edx = (u32)(r_ebp+0xfffffcecu);
    /* 005bb2ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2ed: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb2f2u); f_00624050();
    /* 005bb2f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb2f5: jmp 0x5bb335 */ goto L_005bb335;
L_005bb2f7:; BB(0x005bb2f7);
    /* 005bb2f7: mov eax, dword ptr [ebp - 0x31c] */ r_eax = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb2fd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bb300: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb301: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005bb307: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bb30a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb30b: push 0x697d64 */ { u32 v = 0x697d64u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb310: lea ecx, [ebp - 0x314] */ r_ecx = (u32)(r_ebp+0xfffffcecu);
    /* 005bb316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb317: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb31cu); f_00624050();
    /* 005bb31c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb31f: jmp 0x5bb335 */ goto L_005bb335;
L_005bb321:; BB(0x005bb321);
    /* 005bb321: push 0x697d8c */ { u32 v = 0x697d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb326: lea edx, [ebp - 0x314] */ r_edx = (u32)(r_ebp+0xfffffcecu);
    /* 005bb32c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb32d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb332u); f_00624050();
    /* 005bb332: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb335:; BB(0x005bb335);
    /* 005bb335: lea eax, [ebp - 0x314] */ r_eax = (u32)(r_ebp+0xfffffcecu);
    /* 005bb33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb33c: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5bb341u); f_0060fc40();
    /* 005bb341: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb344:; BB(0x005bb344);
    /* 005bb344: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb346: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb347: ret  */ FN_RET(0x005baf4e); r_esp += 4; return;
}

void f_005bb348(void) /* FUN_005bb348 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb348);
    /* 005bb348: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb349: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb34b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb34c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb34f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb352: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005bb355: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb358: ret  */ FN_RET(0x005bb348); r_esp += 4; return;
}

void f_005bb359(void) /* FUN_005bb359 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb359);
    /* 005bb359: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb35a: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb35c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb35d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb360: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb364: jne 0x5bb36a */ if (!fZ) goto L_005bb36a;
L_005bb366:; BB(0x005bb366);
    /* 005bb366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb368: jmp 0x5bb370 */ goto L_005bb370;
L_005bb36a:; BB(0x005bb36a);
    /* 005bb36a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb36d: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_005bb370:; BB(0x005bb370);
    /* 005bb370: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb373: ret  */ FN_RET(0x005bb359); r_esp += 4; return;
}

void f_005bb374(void) /* FUN_005bb374 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb374);
    /* 005bb374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb375: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb377: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb37a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bb37d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb380: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005bb387: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb38a: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bb38d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb390: call 0x482898 */ r_esp -= 4; W32(r_esp, 0x5bb395u); f_00482898();
    /* 005bb395: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bb398: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb39b: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
L_005bb3a2:; BB(0x005bb3a2);
    /* 005bb3a2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3a6: je 0x5bb408 */ if (fZ) goto L_005bb408;
L_005bb3a8:; BB(0x005bb3a8);
    /* 005bb3a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3ab: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3b2: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb3b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3b9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bb3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3c0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb3c3: mov eax, dword ptr [edx*4 + 0x697c08] */ r_eax = R32((u32)(r_edx*4+0x697c08u));
    /* 005bb3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb3ce: call 0x5b914c */ r_esp -= 4; W32(r_esp, 0x5bb3d3u); f_005b914c();
    /* 005bb3d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3d6: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005bb3d9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3dc: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3e0: je 0x5bb3eb */ if (fZ) goto L_005bb3eb;
L_005bb3e2:; BB(0x005bb3e2);
    /* 005bb3e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb3e9: jmp 0x5bb406 */ goto L_005bb406;
L_005bb3eb:; BB(0x005bb3eb);
    /* 005bb3eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3ee: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005bb3f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb3f8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bb3fb: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb3fe: call 0x482935 */ r_esp -= 4; W32(r_esp, 0x5bb403u); f_00482935();
    /* 005bb403: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bb406:; BB(0x005bb406);
    /* 005bb406: jmp 0x5bb3a2 */ goto L_005bb3a2;
L_005bb408:; BB(0x005bb408);
    /* 005bb408: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb40a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb40b: ret  */ FN_RET(0x005bb374); r_esp += 4; return;
}

void f_005bb40c(void) /* FUN_005bb40c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb40c);
    /* 005bb40c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb40d: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb40f: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb415: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 005bb41b: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005bb425: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb42b: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_005bb432:; BB(0x005bb432);
    /* 005bb432: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb438: mov edx, dword ptr [ecx*4 + 0x6870b0] */ r_edx = R32((u32)(r_ecx*4+0x6870b0u));
    /* 005bb43f: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005bb442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb444: je 0x5bb657 */ if (fZ) goto L_005bb657;
L_005bb44a:; BB(0x005bb44a);
    /* 005bb44a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb450: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb454: jne 0x5bb657 */ if (!fZ) goto L_005bb657;
L_005bb45a:; BB(0x005bb45a);
    /* 005bb45a: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb460: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb464: je 0x5bb4d6 */ if (fZ) goto L_005bb4d6;
L_005bb466:; BB(0x005bb466);
    /* 005bb466: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb46c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bb46f: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb474u); f_005baa07();
    /* 005bb474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb476: je 0x5bb4d6 */ if (fZ) goto L_005bb4d6;
L_005bb478:; BB(0x005bb478);
    /* 005bb478: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb47e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb481: mov eax, dword ptr [edx*4 + 0x697c30] */ r_eax = R32((u32)(r_edx*4+0x697c30u));
    /* 005bb488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb489: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb48f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bb492: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb493: movsx eax, byte ptr [0x697c00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb49a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb49b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb4a1: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bb4a4: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb4a9u); f_005baa07();
    /* 005bb4a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4aa: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb4b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4b2: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb4b8: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005bb4bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4c0: push 0x697da4 */ { u32 v = 0x697da4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4c5: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb4cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4cc: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb4d1u); f_00624050();
    /* 005bb4d1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb4d4: jmp 0x5bb51b */ goto L_005bb51b;
L_005bb4d6:; BB(0x005bb4d6);
    /* 005bb4d6: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb4dc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bb4df: mov edx, dword ptr [ecx*4 + 0x697c30] */ r_edx = R32((u32)(r_ecx*4+0x697c30u));
    /* 005bb4e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4e7: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb4ed: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bb4f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4f1: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb4f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4f9: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb4ff: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005bb506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb507: push 0x697db4 */ { u32 v = 0x697db4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb50c: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb513: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb518u); f_00624050();
    /* 005bb518: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb51b:; BB(0x005bb51b);
    /* 005bb51b: push 0x697dc0 */ { u32 v = 0x697dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb520: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005bb526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb527: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5bb52cu); f_006243c0();
    /* 005bb52c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb52f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb535: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005bb538: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb53f: jne 0x5bb643 */ if (!fZ) goto L_005bb643;
L_005bb545:; BB(0x005bb545);
    /* 005bb545: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb54b: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb54f: jne 0x5bb643 */ if (!fZ) goto L_005bb643;
L_005bb555:; BB(0x005bb555);
    /* 005bb555: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb55b: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb55f: je 0x5bb5d9 */ if (fZ) goto L_005bb5d9;
L_005bb561:; BB(0x005bb561);
    /* 005bb561: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb567: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bb56a: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb56fu); f_005baa07();
    /* 005bb56f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb571: je 0x5bb5d9 */ if (fZ) goto L_005bb5d9;
L_005bb573:; BB(0x005bb573);
    /* 005bb573: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb579: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb57c: mov ecx, dword ptr [eax*4 + 0x697c30] */ r_ecx = R32((u32)(r_eax*4+0x697c30u));
    /* 005bb583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb584: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb58b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb58c: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb592: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bb595: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb596: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb59d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb59e: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb5a4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bb5a7: call 0x5baa07 */ r_esp -= 4; W32(r_esp, 0x5bb5acu); f_005baa07();
    /* 005bb5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5ad: movsx ecx, byte ptr [0x697c00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb5b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5b5: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb5bb: mov eax, dword ptr [edx*4 + 0x6870b0] */ r_eax = R32((u32)(r_edx*4+0x6870b0u));
    /* 005bb5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5c3: push 0x697dc4 */ { u32 v = 0x697dc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5c8: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb5ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5cf: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb5d4u); f_00624050();
    /* 005bb5d4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb5d7: jmp 0x5bb626 */ goto L_005bb626;
L_005bb5d9:; BB(0x005bb5d9);
    /* 005bb5d9: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb5df: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb5e2: mov ecx, dword ptr [eax*4 + 0x697c30] */ r_ecx = R32((u32)(r_eax*4+0x697c30u));
    /* 005bb5e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5ea: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb5f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5f2: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb5f8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bb5fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5fc: movsx edx, byte ptr [0x697c00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x697c00u));
    /* 005bb603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb604: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb60a: mov ecx, dword ptr [eax*4 + 0x6870b0] */ r_ecx = R32((u32)(r_eax*4+0x6870b0u));
    /* 005bb611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb612: push 0x697ddc */ { u32 v = 0x697ddcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb617: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 005bb61d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb61e: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5bb623u); f_00624050();
    /* 005bb623: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb626:; BB(0x005bb626);
    /* 005bb626: push 0x697df0 */ { u32 v = 0x697df0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb62b: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005bb631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb632: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5bb637u); f_006243c0();
    /* 005bb637: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb63a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb640: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
L_005bb643:; BB(0x005bb643);
    /* 005bb643: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bb649: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb64c: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005bb652: jmp 0x5bb432 */ goto L_005bb432;
L_005bb657:; BB(0x005bb657);
    /* 005bb657: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb65d: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb661: je 0x5bb6aa */ if (fZ) goto L_005bb6aa;
L_005bb663:; BB(0x005bb663);
    /* 005bb663: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb669: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005bb66c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb66d: call 0x5baf01 */ r_esp -= 4; W32(r_esp, 0x5bb672u); f_005baf01();
    /* 005bb672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb675: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb67b: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005bb67e: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb684: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005bb68b: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb691: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb697: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005bb69a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005bb69d: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005bb6a3: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
L_005bb6aa:; BB(0x005bb6aa);
    /* 005bb6aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb6ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb6ad: ret  */ FN_RET(0x005bb40c); r_esp += 4; return;
}

void f_005bb6ae(void) /* FUN_005bb6ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb6ae);
    /* 005bb6ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6af: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb6b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb6b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb6b8: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bb6bb: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x5bb6c0u); f_0060ebea();
    /* 005bb6c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb6c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb6c3: ret  */ FN_RET(0x005bb6ae); r_esp += 4; return;
}

void f_005bb6c4(void) /* FUN_005bb6c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb6c4);
    /* 005bb6c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb6c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb6cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb6ce: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bb6d1: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x5bb6d6u); f_0060ec47();
    /* 005bb6d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb6d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb6d9: ret  */ FN_RET(0x005bb6c4); r_esp += 4; return;
}

void f_005bb6e0(void) /* FUN_005bb6e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb6e0);
    /* 005bb6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb6e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb6ea: call 0x5bad47 */ r_esp -= 4; W32(r_esp, 0x5bb6efu); f_005bad47();
    /* 005bb6ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bb6f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bb6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb6f7: je 0x5bb705 */ if (fZ) goto L_005bb705;
L_005bb6f9:; BB(0x005bb6f9);
    /* 005bb6f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb6fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5bb702u); f_0048ac1b();
    /* 005bb702: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb705:; BB(0x005bb705);
    /* 005bb705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb708: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb70a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb70b: ret 4 */ FN_RET(0x005bb6e0); r_esp += 8; return;
}

void f_005bb710(void) /* FUN_005bb710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb710);
    /* 005bb710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb711: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb713: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb716: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bb719: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb71c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5bb721u); f_005dfbf0();
    /* 005bb721: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb724: mov dword ptr [eax], 0x639c7c */ W32((u32)(r_eax), 0x639c7cu);
    /* 005bb72a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb72d: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005bb734: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb73a: jmp 0x5bb748 */ goto L_005bb748;
L_005bb73c:; BB(0x005bb73c);
    /* 005bb73c: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb740: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb744: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bb748:; BB(0x005bb748);
    /* 005bb748: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb74c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb74f: jge 0x5bb762 */ if ((fS==fO)) goto L_005bb762;
L_005bb751:; BB(0x005bb751);
    /* 005bb751: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb755: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb758: mov dword ptr [edx + ecx*4 + 0x10], 0 */ W32((u32)(r_edx+r_ecx*4+0x10u), 0x0u);
    /* 005bb760: jmp 0x5bb73c */ goto L_005bb73c;
L_005bb762:; BB(0x005bb762);
    /* 005bb762: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb768: jmp 0x5bb776 */ goto L_005bb776;
L_005bb76a:; BB(0x005bb76a);
    /* 005bb76a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb76e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb772: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bb776:; BB(0x005bb776);
    /* 005bb776: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb77a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb77d: jge 0x5bb79f */ if ((fS==fO)) goto L_005bb79f;
L_005bb77f:; BB(0x005bb77f);
    /* 005bb77f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb783: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb786: mov dword ptr [eax + edx*4 + 0x38], 0 */ W32((u32)(r_eax+r_edx*4+0x38u), 0x0u);
    /* 005bb78e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb792: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb795: mov dword ptr [edx + ecx*4 + 0x48], 0 */ W32((u32)(r_edx+r_ecx*4+0x48u), 0x0u);
    /* 005bb79d: jmp 0x5bb76a */ goto L_005bb76a;
L_005bb79f:; BB(0x005bb79f);
    /* 005bb79f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb7a5: jmp 0x5bb7b3 */ goto L_005bb7b3;
L_005bb7a7:; BB(0x005bb7a7);
    /* 005bb7a7: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb7ab: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb7af: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bb7b3:; BB(0x005bb7b3);
    /* 005bb7b3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb7b7: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb7ba: jge 0x5bb7dc */ if ((fS==fO)) goto L_005bb7dc;
L_005bb7bc:; BB(0x005bb7bc);
    /* 005bb7bc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb7c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7c3: mov dword ptr [eax + edx*4 + 0x58], 0 */ W32((u32)(r_eax+r_edx*4+0x58u), 0x0u);
    /* 005bb7cb: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb7cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7d2: mov dword ptr [edx + ecx*4 + 0x60], 0 */ W32((u32)(r_edx+r_ecx*4+0x60u), 0x0u);
    /* 005bb7da: jmp 0x5bb7a7 */ goto L_005bb7a7;
L_005bb7dc:; BB(0x005bb7dc);
    /* 005bb7dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7df: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005bb7e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7e9: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005bb7f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7f3: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005bb7fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb7fd: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005bb804: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb807: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 005bb80e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb811: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 005bb818: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb81b: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 005bb822: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb825: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 005bb82c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb82f: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 005bb836: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb839: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 005bb840: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb843: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 005bb84a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb850: jmp 0x5bb85e */ goto L_005bb85e;
L_005bb852:; BB(0x005bb852);
    /* 005bb852: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb856: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb85a: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bb85e:; BB(0x005bb85e);
    /* 005bb85e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb862: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb865: jge 0x5bb87b */ if ((fS==fO)) goto L_005bb87b;
L_005bb867:; BB(0x005bb867);
    /* 005bb867: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb86b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb86e: mov dword ptr [edx + ecx*4 + 0x80], 0 */ W32((u32)(r_edx+r_ecx*4+0x80u), 0x0u);
    /* 005bb879: jmp 0x5bb852 */ goto L_005bb852;
L_005bb87b:; BB(0x005bb87b);
    /* 005bb87b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb87e: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005bb885: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb888: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb88a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb88b: ret  */ FN_RET(0x005bb710); r_esp += 4; return;
}

void f_005bb88c(void) /* FUN_005bb88c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb88c);
    /* 005bb88c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb88d: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb88f: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb895: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005bb89b: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb8a1: mov dword ptr [eax], 0x639c7c */ W32((u32)(r_eax), 0x639c7cu);
    /* 005bb8a7: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb8ad: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb8b1: je 0x5bb8f6 */ if (fZ) goto L_005bb8f6;
L_005bb8b3:; BB(0x005bb8b3);
    /* 005bb8b3: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb8b9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bb8bc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bb8bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb8c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bb8c5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb8c9: je 0x5bb8df */ if (fZ) goto L_005bb8df;
L_005bb8cb:; BB(0x005bb8cb);
    /* 005bb8cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb8d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bb8d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bb8d5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bb8d7u); call_ind(t); }
    /* 005bb8d7: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005bb8dd: jmp 0x5bb8e9 */ goto L_005bb8e9;
L_005bb8df:; BB(0x005bb8df);
    /* 005bb8df: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005bb8e9:; BB(0x005bb8e9);
    /* 005bb8e9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb8ef: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
L_005bb8f6:; BB(0x005bb8f6);
    /* 005bb8f6: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb8fc: jmp 0x5bb90a */ goto L_005bb90a;
L_005bb8fe:; BB(0x005bb8fe);
    /* 005bb8fe: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb902: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb906: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bb90a:; BB(0x005bb90a);
    /* 005bb90a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb90e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb911: jge 0x5bb973 */ if ((fS==fO)) goto L_005bb973;
L_005bb913:; BB(0x005bb913);
    /* 005bb913: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb917: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb91d: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb922: je 0x5bb971 */ if (fZ) goto L_005bb971;
L_005bb924:; BB(0x005bb924);
    /* 005bb924: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb928: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb92e: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005bb932: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bb935: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bb938: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bb93b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb93f: je 0x5bb955 */ if (fZ) goto L_005bb955;
L_005bb941:; BB(0x005bb941);
    /* 005bb941: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb943: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb946: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bb948: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb94b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bb94du); call_ind(t); }
    /* 005bb94d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005bb953: jmp 0x5bb95f */ goto L_005bb95f;
L_005bb955:; BB(0x005bb955);
    /* 005bb955: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005bb95f:; BB(0x005bb95f);
    /* 005bb95f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb963: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb969: mov dword ptr [ecx + eax*4 + 0x10], 0 */ W32((u32)(r_ecx+r_eax*4+0x10u), 0x0u);
L_005bb971:; BB(0x005bb971);
    /* 005bb971: jmp 0x5bb8fe */ goto L_005bb8fe;
L_005bb973:; BB(0x005bb973);
    /* 005bb973: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb979: jmp 0x5bb987 */ goto L_005bb987;
L_005bb97b:; BB(0x005bb97b);
    /* 005bb97b: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bb97f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bb983: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bb987:; BB(0x005bb987);
    /* 005bb987: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb98b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb98e: jge 0x5bba55 */ if ((fS==fO)) goto L_005bba55;
L_005bb994:; BB(0x005bb994);
    /* 005bb994: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb998: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb99e: cmp dword ptr [edx + ecx*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb9a3: je 0x5bb9f2 */ if (fZ) goto L_005bb9f2;
L_005bb9a5:; BB(0x005bb9a5);
    /* 005bb9a5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb9a9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb9af: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bb9b3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005bb9b6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb9b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bb9bc: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb9c0: je 0x5bb9d6 */ if (fZ) goto L_005bb9d6;
L_005bb9c2:; BB(0x005bb9c2);
    /* 005bb9c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb9c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bb9c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb9cc: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bb9ceu); call_ind(t); }
    /* 005bb9ce: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005bb9d4: jmp 0x5bb9e0 */ goto L_005bb9e0;
L_005bb9d6:; BB(0x005bb9d6);
    /* 005bb9d6: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_005bb9e0:; BB(0x005bb9e0);
    /* 005bb9e0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb9e4: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb9ea: mov dword ptr [ecx + eax*4 + 0x38], 0 */ W32((u32)(r_ecx+r_eax*4+0x38u), 0x0u);
L_005bb9f2:; BB(0x005bb9f2);
    /* 005bb9f2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bb9f6: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb9fc: cmp dword ptr [eax + edx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba01: je 0x5bba50 */ if (fZ) goto L_005bba50;
L_005bba03:; BB(0x005bba03);
    /* 005bba03: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bba07: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bba0d: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005bba11: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bba14: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bba17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005bba1a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba1e: je 0x5bba34 */ if (fZ) goto L_005bba34;
L_005bba20:; BB(0x005bba20);
    /* 005bba20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bba22: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bba25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bba27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bba2a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bba2cu); call_ind(t); }
    /* 005bba2c: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005bba32: jmp 0x5bba3e */ goto L_005bba3e;
L_005bba34:; BB(0x005bba34);
    /* 005bba34: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_005bba3e:; BB(0x005bba3e);
    /* 005bba3e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bba42: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bba48: mov dword ptr [edx + ecx*4 + 0x48], 0 */ W32((u32)(r_edx+r_ecx*4+0x48u), 0x0u);
L_005bba50:; BB(0x005bba50);
    /* 005bba50: jmp 0x5bb97b */ goto L_005bb97b;
L_005bba55:; BB(0x005bba55);
    /* 005bba55: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bba5b: jmp 0x5bba69 */ goto L_005bba69;
L_005bba5d:; BB(0x005bba5d);
    /* 005bba5d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bba61: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bba65: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bba69:; BB(0x005bba69);
    /* 005bba69: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bba6d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bba70: jge 0x5bbb37 */ if ((fS==fO)) goto L_005bbb37;
L_005bba76:; BB(0x005bba76);
    /* 005bba76: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bba7a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bba80: cmp dword ptr [eax + edx*4 + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba85: je 0x5bbad4 */ if (fZ) goto L_005bbad4;
L_005bba87:; BB(0x005bba87);
    /* 005bba87: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bba8b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bba91: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005bba95: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bba98: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bba9b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005bba9e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbaa2: je 0x5bbab8 */ if (fZ) goto L_005bbab8;
L_005bbaa4:; BB(0x005bbaa4);
    /* 005bbaa4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbaa6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bbaa9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbaab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bbaae: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbab0u); call_ind(t); }
    /* 005bbab0: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005bbab6: jmp 0x5bbac2 */ goto L_005bbac2;
L_005bbab8:; BB(0x005bbab8);
    /* 005bbab8: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005bbac2:; BB(0x005bbac2);
    /* 005bbac2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbac6: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbacc: mov dword ptr [edx + ecx*4 + 0x58], 0 */ W32((u32)(r_edx+r_ecx*4+0x58u), 0x0u);
L_005bbad4:; BB(0x005bbad4);
    /* 005bbad4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbad8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbade: cmp dword ptr [ecx + eax*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbae3: je 0x5bbb32 */ if (fZ) goto L_005bbb32;
L_005bbae5:; BB(0x005bbae5);
    /* 005bbae5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbae9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbaef: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005bbaf3: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005bbaf6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bbaf9: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005bbafc: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbb00: je 0x5bbb16 */ if (fZ) goto L_005bbb16;
L_005bbb02:; BB(0x005bbb02);
    /* 005bbb02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb04: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bbb07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbb09: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bbb0c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbb0eu); call_ind(t); }
    /* 005bbb0e: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005bbb14: jmp 0x5bbb20 */ goto L_005bbb20;
L_005bbb16:; BB(0x005bbb16);
    /* 005bbb16: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005bbb20:; BB(0x005bbb20);
    /* 005bbb20: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbb24: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb2a: mov dword ptr [ecx + eax*4 + 0x60], 0 */ W32((u32)(r_ecx+r_eax*4+0x60u), 0x0u);
L_005bbb32:; BB(0x005bbb32);
    /* 005bbb32: jmp 0x5bba5d */ goto L_005bba5d;
L_005bbb37:; BB(0x005bbb37);
    /* 005bbb37: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb3d: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbb41: je 0x5bbb86 */ if (fZ) goto L_005bbb86;
L_005bbb43:; BB(0x005bbb43);
    /* 005bbb43: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb49: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bbb4c: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005bbb4f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bbb52: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005bbb55: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbb59: je 0x5bbb6f */ if (fZ) goto L_005bbb6f;
L_005bbb5b:; BB(0x005bbb5b);
    /* 005bbb5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb5d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bbb60: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbb62: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bbb65: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbb67u); call_ind(t); }
    /* 005bbb67: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005bbb6d: jmp 0x5bbb79 */ goto L_005bbb79;
L_005bbb6f:; BB(0x005bbb6f);
    /* 005bbb6f: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005bbb79:; BB(0x005bbb79);
    /* 005bbb79: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb7f: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_005bbb86:; BB(0x005bbb86);
    /* 005bbb86: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb8c: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbb90: je 0x5bbbd5 */ if (fZ) goto L_005bbbd5;
L_005bbb92:; BB(0x005bbb92);
    /* 005bbb92: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbb98: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bbb9b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005bbb9e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bbba1: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005bbba4: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbba8: je 0x5bbbbe */ if (fZ) goto L_005bbbbe;
L_005bbbaa:; BB(0x005bbbaa);
    /* 005bbbaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbac: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bbbaf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbbb1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bbbb4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbbb6u); call_ind(t); }
    /* 005bbbb6: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005bbbbc: jmp 0x5bbbc8 */ goto L_005bbbc8;
L_005bbbbe:; BB(0x005bbbbe);
    /* 005bbbbe: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005bbbc8:; BB(0x005bbbc8);
    /* 005bbbc8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbbce: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_005bbbd5:; BB(0x005bbbd5);
    /* 005bbbd5: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbbdb: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbbdf: je 0x5bbc24 */ if (fZ) goto L_005bbc24;
L_005bbbe1:; BB(0x005bbbe1);
    /* 005bbbe1: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbbe7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bbbea: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005bbbed: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005bbbf0: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005bbbf3: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbbf7: je 0x5bbc0d */ if (fZ) goto L_005bbc0d;
L_005bbbf9:; BB(0x005bbbf9);
    /* 005bbbf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbfb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bbbfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbc00: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bbc03: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbc05u); call_ind(t); }
    /* 005bbc05: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005bbc0b: jmp 0x5bbc17 */ goto L_005bbc17;
L_005bbc0d:; BB(0x005bbc0d);
    /* 005bbc0d: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005bbc17:; BB(0x005bbc17);
    /* 005bbc17: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc1d: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_005bbc24:; BB(0x005bbc24);
    /* 005bbc24: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc2a: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc2e: je 0x5bbc73 */ if (fZ) goto L_005bbc73;
L_005bbc30:; BB(0x005bbc30);
    /* 005bbc30: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc36: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005bbc39: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005bbc3c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbc3f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005bbc42: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc46: je 0x5bbc5c */ if (fZ) goto L_005bbc5c;
L_005bbc48:; BB(0x005bbc48);
    /* 005bbc48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc4a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005bbc4d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbc4f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005bbc52: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbc54u); call_ind(t); }
    /* 005bbc54: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005bbc5a: jmp 0x5bbc66 */ goto L_005bbc66;
L_005bbc5c:; BB(0x005bbc5c);
    /* 005bbc5c: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005bbc66:; BB(0x005bbc66);
    /* 005bbc66: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc6c: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_005bbc73:; BB(0x005bbc73);
    /* 005bbc73: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc79: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc7d: je 0x5bbcc2 */ if (fZ) goto L_005bbcc2;
L_005bbc7f:; BB(0x005bbc7f);
    /* 005bbc7f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbc85: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bbc88: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005bbc8b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbc8e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005bbc91: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc95: je 0x5bbcab */ if (fZ) goto L_005bbcab;
L_005bbc97:; BB(0x005bbc97);
    /* 005bbc97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc99: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bbc9c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbc9e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bbca1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbca3u); call_ind(t); }
    /* 005bbca3: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005bbca9: jmp 0x5bbcb5 */ goto L_005bbcb5;
L_005bbcab:; BB(0x005bbcab);
    /* 005bbcab: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005bbcb5:; BB(0x005bbcb5);
    /* 005bbcb5: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbcbb: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_005bbcc2:; BB(0x005bbcc2);
    /* 005bbcc2: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbcc8: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbccc: je 0x5bbd11 */ if (fZ) goto L_005bbd11;
L_005bbcce:; BB(0x005bbcce);
    /* 005bbcce: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbcd4: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005bbcd7: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005bbcda: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005bbcdd: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005bbce0: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbce4: je 0x5bbcfa */ if (fZ) goto L_005bbcfa;
L_005bbce6:; BB(0x005bbce6);
    /* 005bbce6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbce8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bbceb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbced: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bbcf0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbcf2u); call_ind(t); }
    /* 005bbcf2: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005bbcf8: jmp 0x5bbd04 */ goto L_005bbd04;
L_005bbcfa:; BB(0x005bbcfa);
    /* 005bbcfa: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005bbd04:; BB(0x005bbd04);
    /* 005bbd04: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd0a: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_005bbd11:; BB(0x005bbd11);
    /* 005bbd11: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd17: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd1b: je 0x5bbd60 */ if (fZ) goto L_005bbd60;
L_005bbd1d:; BB(0x005bbd1d);
    /* 005bbd1d: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd23: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bbd26: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005bbd29: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005bbd2c: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005bbd2f: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd33: je 0x5bbd49 */ if (fZ) goto L_005bbd49;
L_005bbd35:; BB(0x005bbd35);
    /* 005bbd35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd37: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005bbd3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbd3c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bbd3f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbd41u); call_ind(t); }
    /* 005bbd41: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005bbd47: jmp 0x5bbd53 */ goto L_005bbd53;
L_005bbd49:; BB(0x005bbd49);
    /* 005bbd49: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005bbd53:; BB(0x005bbd53);
    /* 005bbd53: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd59: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_005bbd60:; BB(0x005bbd60);
    /* 005bbd60: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd66: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd6a: je 0x5bbdaf */ if (fZ) goto L_005bbdaf;
L_005bbd6c:; BB(0x005bbd6c);
    /* 005bbd6c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbd72: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005bbd75: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005bbd78: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bbd7b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005bbd7e: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd82: je 0x5bbd98 */ if (fZ) goto L_005bbd98;
L_005bbd84:; BB(0x005bbd84);
    /* 005bbd84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd86: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bbd89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbd8b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bbd8e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbd90u); call_ind(t); }
    /* 005bbd90: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 005bbd96: jmp 0x5bbda2 */ goto L_005bbda2;
L_005bbd98:; BB(0x005bbd98);
    /* 005bbd98: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_005bbda2:; BB(0x005bbda2);
    /* 005bbda2: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbda8: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_005bbdaf:; BB(0x005bbdaf);
    /* 005bbdaf: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbdb5: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbdb9: je 0x5bbdfe */ if (fZ) goto L_005bbdfe;
L_005bbdbb:; BB(0x005bbdbb);
    /* 005bbdbb: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbdc1: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005bbdc4: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005bbdc7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005bbdca: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005bbdcd: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbdd1: je 0x5bbde7 */ if (fZ) goto L_005bbde7;
L_005bbdd3:; BB(0x005bbdd3);
    /* 005bbdd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdd5: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bbdd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbdda: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bbddd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbddfu); call_ind(t); }
    /* 005bbddf: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005bbde5: jmp 0x5bbdf1 */ goto L_005bbdf1;
L_005bbde7:; BB(0x005bbde7);
    /* 005bbde7: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005bbdf1:; BB(0x005bbdf1);
    /* 005bbdf1: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbdf7: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_005bbdfe:; BB(0x005bbdfe);
    /* 005bbdfe: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbe04: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe08: je 0x5bbe53 */ if (fZ) goto L_005bbe53;
L_005bbe0a:; BB(0x005bbe0a);
    /* 005bbe0a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbe10: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bbe13: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005bbe19: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005bbe1f: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005bbe22: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe26: je 0x5bbe3c */ if (fZ) goto L_005bbe3c;
L_005bbe28:; BB(0x005bbe28);
    /* 005bbe28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe2a: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005bbe2d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bbe2f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005bbe32: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bbe34u); call_ind(t); }
    /* 005bbe34: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 005bbe3a: jmp 0x5bbe46 */ goto L_005bbe46;
L_005bbe3c:; BB(0x005bbe3c);
    /* 005bbe3c: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_005bbe46:; BB(0x005bbe46);
    /* 005bbe46: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbe4c: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005bbe53:; BB(0x005bbe53);
    /* 005bbe53: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbe59: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe5d: je 0x5bbeb4 */ if (fZ) goto L_005bbeb4;
L_005bbe5f:; BB(0x005bbe5f);
    /* 005bbe5f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbe65: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bbe68: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005bbe6e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005bbe74: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005bbe7a: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe81: je 0x5bbe9d */ if (fZ) goto L_005bbe9d;
L_005bbe83:; BB(0x005bbe83);
    /* 005bbe83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe85: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005bbe8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbe8d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005bbe93: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbe95u); call_ind(t); }
    /* 005bbe95: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005bbe9b: jmp 0x5bbea7 */ goto L_005bbea7;
L_005bbe9d:; BB(0x005bbe9d);
    /* 005bbe9d: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005bbea7:; BB(0x005bbea7);
    /* 005bbea7: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbead: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_005bbeb4:; BB(0x005bbeb4);
    /* 005bbeb4: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bbeba: jmp 0x5bbec8 */ goto L_005bbec8;
L_005bbebc:; BB(0x005bbebc);
    /* 005bbebc: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bbec0: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bbec4: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bbec8:; BB(0x005bbec8);
    /* 005bbec8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbecc: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bbecf: jge 0x5bbf4f */ if ((fS==fO)) goto L_005bbf4f;
L_005bbed1:; BB(0x005bbed1);
    /* 005bbed1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbed5: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbedb: cmp dword ptr [ecx + eax*4 + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbee3: je 0x5bbf4a */ if (fZ) goto L_005bbf4a;
L_005bbee5:; BB(0x005bbee5);
    /* 005bbee5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbee9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbeef: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005bbef6: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005bbefc: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bbf02: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005bbf08: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbf0f: je 0x5bbf2b */ if (fZ) goto L_005bbf2b;
L_005bbf11:; BB(0x005bbf11);
    /* 005bbf11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf13: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005bbf19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbf1b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005bbf21: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbf23u); call_ind(t); }
    /* 005bbf23: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005bbf29: jmp 0x5bbf35 */ goto L_005bbf35;
L_005bbf2b:; BB(0x005bbf2b);
    /* 005bbf2b: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_005bbf35:; BB(0x005bbf35);
    /* 005bbf35: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bbf39: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbf3f: mov dword ptr [ecx + eax*4 + 0x80], 0 */ W32((u32)(r_ecx+r_eax*4+0x80u), 0x0u);
L_005bbf4a:; BB(0x005bbf4a);
    /* 005bbf4a: jmp 0x5bbebc */ goto L_005bbebc;
L_005bbf4f:; BB(0x005bbf4f);
    /* 005bbf4f: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbf55: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbf59: je 0x5bbfb0 */ if (fZ) goto L_005bbfb0;
L_005bbf5b:; BB(0x005bbf5b);
    /* 005bbf5b: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbf61: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bbf64: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005bbf6a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005bbf70: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 005bbf76: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbf7d: je 0x5bbf99 */ if (fZ) goto L_005bbf99;
L_005bbf7f:; BB(0x005bbf7f);
    /* 005bbf7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf81: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005bbf87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbf89: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005bbf8f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bbf91u); call_ind(t); }
    /* 005bbf91: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005bbf97: jmp 0x5bbfa3 */ goto L_005bbfa3;
L_005bbf99:; BB(0x005bbf99);
    /* 005bbf99: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_005bbfa3:; BB(0x005bbfa3);
    /* 005bbfa3: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbfa9: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_005bbfb0:; BB(0x005bbfb0);
    /* 005bbfb0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bbfb6: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5bbfbbu); f_005dfc0f();
    /* 005bbfbb: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbfbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbfbe: ret  */ FN_RET(0x005bb88c); r_esp += 4; return;
}

void f_005bbfbf(void) /* FUN_005bbfbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbfbf);
    /* 005bbfbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfc0: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbfc2: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbfc8: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005bbfcb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbfce: call 0x5bced6 */ r_esp -= 4; W32(r_esp, 0x5bbfd3u); f_005bced6();
    /* 005bbfd3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbfd6: call 0x5bcf2a */ r_esp -= 4; W32(r_esp, 0x5bbfdbu); f_005bcf2a();
    /* 005bbfdb: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbfde: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 005bbfe8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbfeb: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 005bbff5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bbff8: mov dword ptr [edx + 0x9c], 1 */ W32((u32)(r_edx+0x9cu), 0x1u);
    /* 005bc002: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc005: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 005bc00f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc015: jmp 0x5bc023 */ goto L_005bc023;
L_005bc017:; BB(0x005bc017);
    /* 005bc017: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bc01b: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bc01f: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bc023:; BB(0x005bc023);
    /* 005bc023: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc027: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc02a: jge 0x5bc040 */ if ((fS==fO)) goto L_005bc040;
L_005bc02c:; BB(0x005bc02c);
    /* 005bc02c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc030: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc033: mov dword ptr [ecx + eax*4 + 0xc4], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0xc4u), 0xffffffffu);
    /* 005bc03e: jmp 0x5bc017 */ goto L_005bc017;
L_005bc040:; BB(0x005bc040);
    /* 005bc040: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc046: jmp 0x5bc054 */ goto L_005bc054;
L_005bc048:; BB(0x005bc048);
    /* 005bc048: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bc04c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bc050: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bc054:; BB(0x005bc054);
    /* 005bc054: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc058: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc05b: jge 0x5bc1d6 */ if ((fS==fO)) goto L_005bc1d6;
L_005bc061:; BB(0x005bc061);
    /* 005bc061: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc065: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc068: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc06d: jne 0x5bc0ac */ if (!fZ) goto L_005bc0ac;
L_005bc06f:; BB(0x005bc06f);
    /* 005bc06f: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc074: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc079u); f_0048ab58();
    /* 005bc079: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc07c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bc07f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc083: je 0x5bc097 */ if (fZ) goto L_005bc097;
L_005bc085:; BB(0x005bc085);
    /* 005bc085: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc08a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc08d: call 0x5be875 */ r_esp -= 4; W32(r_esp, 0x5bc092u); f_005be875();
    /* 005bc092: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005bc095: jmp 0x5bc09e */ goto L_005bc09e;
L_005bc097:; BB(0x005bc097);
    /* 005bc097: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005bc09e:; BB(0x005bc09e);
    /* 005bc09e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0a2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc0a5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc0a8: mov dword ptr [edx + ecx*4 + 0x10], eax */ W32((u32)(r_edx+r_ecx*4+0x10u), r_eax);
L_005bc0ac:; BB(0x005bc0ac);
    /* 005bc0ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0b0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0b4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc0b7: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005bc0bb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0bf: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc0c2: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005bc0c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc0c8: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5bc0cbu); call_ind(t); }
    /* 005bc0cb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc0d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc0d4: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005bc0d7: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc0d8: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc0db: add ecx, 0x16041 */ {  u32 a = r_ecx; u32 b = 0x16041u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc0e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0e2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0e6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc0e9: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bc0ed: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc0f1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc0f4: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bc0f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc0fa: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5bc0fdu); call_ind(t); }
    /* 005bc0fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc101: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc105: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc108: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005bc10c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc110: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc113: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005bc117: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc119: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc11cu); call_ind(t); }
    /* 005bc11c: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc121: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc125: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc128: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005bc12c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc130: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc133: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bc137: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc139: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc13cu); call_ind(t); }
    /* 005bc13c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc140: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc143: jge 0x5bc183 */ if ((fS==fO)) goto L_005bc183;
L_005bc145:; BB(0x005bc145);
    /* 005bc145: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc149: lea eax, [edx*4 + 3] */ r_eax = (u32)(r_edx*4+0x3u);
    /* 005bc150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc151: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc155: lea edx, [ecx*4 + 2] */ r_edx = (u32)(r_ecx*4+0x2u);
    /* 005bc15c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc15d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc161: lea ecx, [eax*4 + 1] */ r_ecx = (u32)(r_eax*4+0x1u);
    /* 005bc168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc169: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc16d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bc170: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc171: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc175: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc178: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005bc17c: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5bc181u); f_005d5ff2();
    /* 005bc181: jmp 0x5bc19b */ goto L_005bc19b;
L_005bc183:; BB(0x005bc183);
    /* 005bc183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc187: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc189: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc18b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc18f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc192: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bc196: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5bc19bu); f_005d5ff2();
L_005bc19b:; BB(0x005bc19b);
    /* 005bc19b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc19f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc1a2: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005bc1a6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc1aa: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc1ad: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005bc1b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc1b3: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5bc1b6u); call_ind(t); }
    /* 005bc1b6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc1ba: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc1bd: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005bc1c1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc1c5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc1c8: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bc1cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc1ce: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc1d1u); call_ind(t); }
    /* 005bc1d1: jmp 0x5bc048 */ goto L_005bc048;
L_005bc1d6:; BB(0x005bc1d6);
    /* 005bc1d6: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc1dc: jmp 0x5bc1ea */ goto L_005bc1ea;
L_005bc1de:; BB(0x005bc1de);
    /* 005bc1de: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bc1e2: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bc1e6: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bc1ea:; BB(0x005bc1ea);
    /* 005bc1ea: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc1ee: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc1f1: jge 0x5bc40f */ if ((fS==fO)) goto L_005bc40f;
L_005bc1f7:; BB(0x005bc1f7);
    /* 005bc1f7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc1fb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc1fe: cmp dword ptr [ecx + eax*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc203: jne 0x5bc23a */ if (!fZ) goto L_005bc23a;
L_005bc205:; BB(0x005bc205);
    /* 005bc205: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc207: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc20cu); f_0048ab58();
    /* 005bc20c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc20f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bc212: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc216: je 0x5bc225 */ if (fZ) goto L_005bc225;
L_005bc218:; BB(0x005bc218);
    /* 005bc218: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc21b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bc220u); f_005e9d30();
    /* 005bc220: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005bc223: jmp 0x5bc22c */ goto L_005bc22c;
L_005bc225:; BB(0x005bc225);
    /* 005bc225: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005bc22c:; BB(0x005bc22c);
    /* 005bc22c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc230: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc233: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bc236: mov dword ptr [eax + edx*4 + 0x38], ecx */ W32((u32)(r_eax+r_edx*4+0x38u), r_ecx);
L_005bc23a:; BB(0x005bc23a);
    /* 005bc23a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc23e: mov eax, dword ptr [edx*8 + 0x697e14] */ r_eax = R32((u32)(r_edx*8+0x697e14u));
    /* 005bc245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc246: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc24a: mov edx, dword ptr [ecx*8 + 0x697e10] */ r_edx = R32((u32)(r_ecx*8+0x697e10u));
    /* 005bc251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc252: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc256: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc259: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bc25d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc261: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc264: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bc268: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc26a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc26du); call_ind(t); }
    /* 005bc26d: push 0x1602f */ { u32 v = 0x1602fu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc272: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc276: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc279: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005bc27d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc282u); f_005ea0c3();
    /* 005bc282: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc284: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc288: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc28b: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bc28f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bc294u); f_005ea1cf();
    /* 005bc294: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc298: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc29b: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bc29f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2a3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2a6: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bc2aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc2ac: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc2afu); call_ind(t); }
    /* 005bc2af: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2b1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2b5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2b8: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005bc2bc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2c0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2c3: mov eax, dword ptr [edx + eax*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_eax*4+0x38u));
    /* 005bc2c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc2c9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc2ccu); call_ind(t); }
    /* 005bc2cc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2d0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2d3: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bc2d7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2db: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2de: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bc2e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc2e4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bc2e7u); call_ind(t); }
    /* 005bc2e7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc2eb: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc2ee: cmp dword ptr [edx + ecx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc2f3: jne 0x5bc32a */ if (!fZ) goto L_005bc32a;
L_005bc2f5:; BB(0x005bc2f5);
    /* 005bc2f5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2f7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc2fcu); f_0048ab58();
    /* 005bc2fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc2ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bc302: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc306: je 0x5bc315 */ if (fZ) goto L_005bc315;
L_005bc308:; BB(0x005bc308);
    /* 005bc308: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc30b: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bc310u); f_005e3fb0();
    /* 005bc310: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005bc313: jmp 0x5bc31c */ goto L_005bc31c;
L_005bc315:; BB(0x005bc315);
    /* 005bc315: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005bc31c:; BB(0x005bc31c);
    /* 005bc31c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc320: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc323: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bc326: mov dword ptr [ecx + eax*4 + 0x48], edx */ W32((u32)(r_ecx+r_eax*4+0x48u), r_edx);
L_005bc32a:; BB(0x005bc32a);
    /* 005bc32a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc32e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc331: jge 0x5bc35e */ if ((fS==fO)) goto L_005bc35e;
L_005bc333:; BB(0x005bc333);
    /* 005bc333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc335: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc339: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005bc33b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005bc33d: and ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc341: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc345: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc348: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc34c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc350: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc353: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc357: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc359: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc35cu); call_ind(t); }
    /* 005bc35c: jmp 0x5bc390 */ goto L_005bc390;
L_005bc35e:; BB(0x005bc35e);
    /* 005bc35e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc360: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc364: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc367: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005bc369: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005bc36b: and ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc36e: add ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc375: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc379: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc37c: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc380: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc384: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc387: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc38b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc38d: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc390u); call_ind(t); }
L_005bc390:; BB(0x005bc390);
    /* 005bc390: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc392: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc396: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc399: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005bc39d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3a1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3a4: mov eax, dword ptr [edx + eax*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_eax*4+0x48u));
    /* 005bc3a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc3aa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc3adu); call_ind(t); }
    /* 005bc3ad: push 0x16040 */ { u32 v = 0x16040u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3b2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3b6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3b9: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005bc3bd: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc3c2u); f_005ea0c3();
    /* 005bc3c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3c4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3c8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3cb: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc3cf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bc3d4u); f_005ea1cf();
    /* 005bc3d4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3d8: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3db: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005bc3df: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3e3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3e6: mov eax, dword ptr [edx + eax*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_eax*4+0x48u));
    /* 005bc3ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc3ec: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc3efu); call_ind(t); }
    /* 005bc3ef: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3f3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc3f6: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005bc3fa: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc3fe: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc401: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bc405: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc407: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bc40au); call_ind(t); }
    /* 005bc40a: jmp 0x5bc1de */ goto L_005bc1de;
L_005bc40f:; BB(0x005bc40f);
    /* 005bc40f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc412: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc416: jne 0x5bc44b */ if (!fZ) goto L_005bc44b;
L_005bc418:; BB(0x005bc418);
    /* 005bc418: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc41d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc422u); f_0048ab58();
    /* 005bc422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc425: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bc428: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc42c: je 0x5bc43b */ if (fZ) goto L_005bc43b;
L_005bc42e:; BB(0x005bc42e);
    /* 005bc42e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc431: call 0x5bead9 */ r_esp -= 4; W32(r_esp, 0x5bc436u); f_005bead9();
    /* 005bc436: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005bc439: jmp 0x5bc442 */ goto L_005bc442;
L_005bc43b:; BB(0x005bc43b);
    /* 005bc43b: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005bc442:; BB(0x005bc442);
    /* 005bc442: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc445: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005bc448: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_005bc44b:; BB(0x005bc44b);
    /* 005bc44b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc44d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc44f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc452: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005bc455: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc458: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc45b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc45d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5bc460u); call_ind(t); }
    /* 005bc460: push 0x16042 */ { u32 v = 0x16042u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc465: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc468: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bc46b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc46e: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc471: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc473: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5bc476u); call_ind(t); }
    /* 005bc476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc478: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc47a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc47d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bc480: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc483: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc486: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc488: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc48bu); call_ind(t); }
    /* 005bc48b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc48d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc490: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bc493: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc496: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc499: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc49b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc49eu); call_ind(t); }
    /* 005bc49e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc4a1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bc4a4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc4a7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc4aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc4ac: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bc4afu); call_ind(t); }
    /* 005bc4af: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc4b2: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005bc4b5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc4b8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bc4bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc4bd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc4c0u); call_ind(t); }
    /* 005bc4c0: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc4c6: jmp 0x5bc4d4 */ goto L_005bc4d4;
L_005bc4c8:; BB(0x005bc4c8);
    /* 005bc4c8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bc4cc: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bc4d0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bc4d4:; BB(0x005bc4d4);
    /* 005bc4d4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc4d8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc4db: jge 0x5bc69c */ if ((fS==fO)) goto L_005bc69c;
L_005bc4e1:; BB(0x005bc4e1);
    /* 005bc4e1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc4e5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc4e8: cmp dword ptr [eax + edx*4 + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc4ed: jne 0x5bc524 */ if (!fZ) goto L_005bc524;
L_005bc4ef:; BB(0x005bc4ef);
    /* 005bc4ef: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4f1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc4f6u); f_0048ab58();
    /* 005bc4f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc4f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bc4fc: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc500: je 0x5bc50f */ if (fZ) goto L_005bc50f;
L_005bc502:; BB(0x005bc502);
    /* 005bc502: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc505: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bc50au); f_005e9d30();
    /* 005bc50a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005bc50d: jmp 0x5bc516 */ goto L_005bc516;
L_005bc50f:; BB(0x005bc50f);
    /* 005bc50f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005bc516:; BB(0x005bc516);
    /* 005bc516: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc51a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc51d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005bc520: mov dword ptr [edx + ecx*4 + 0x58], eax */ W32((u32)(r_edx+r_ecx*4+0x58u), r_eax);
L_005bc524:; BB(0x005bc524);
    /* 005bc524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc526: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc52a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005bc52c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005bc52e: and ecx, 0x189 */ {  u32 a = r_ecx; u32 b = 0x189u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc535: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc539: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc53c: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bc540: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc544: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc547: mov edx, dword ptr [eax + edx*4 + 0x58] */ r_edx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bc54b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc54d: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc550u); call_ind(t); }
    /* 005bc550: push 0x16030 */ { u32 v = 0x16030u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc555: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc559: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc55c: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005bc560: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc565u); f_005ea0c3();
    /* 005bc565: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc569: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc56c: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 005bc570: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc574: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc577: mov edx, dword ptr [eax + edx*4 + 0x58] */ r_edx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bc57b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc57d: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc580u); call_ind(t); }
    /* 005bc580: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc582: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc586: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc589: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005bc58d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc591: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc594: mov eax, dword ptr [edx + eax*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_eax*4+0x58u));
    /* 005bc598: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc59a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc59du); call_ind(t); }
    /* 005bc59d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc5a1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc5a4: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 005bc5a8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc5ac: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc5af: mov edx, dword ptr [eax + edx*4 + 0x58] */ r_edx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bc5b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc5b5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bc5b8u); call_ind(t); }
    /* 005bc5b8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc5bc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc5bf: cmp dword ptr [edx + ecx*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc5c4: jne 0x5bc5fb */ if (!fZ) goto L_005bc5fb;
L_005bc5c6:; BB(0x005bc5c6);
    /* 005bc5c6: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc5cdu); f_0048ab58();
    /* 005bc5cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc5d0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bc5d3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc5d7: je 0x5bc5e6 */ if (fZ) goto L_005bc5e6;
L_005bc5d9:; BB(0x005bc5d9);
    /* 005bc5d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bc5dc: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bc5e1u); f_005e3fb0();
    /* 005bc5e1: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005bc5e4: jmp 0x5bc5ed */ goto L_005bc5ed;
L_005bc5e6:; BB(0x005bc5e6);
    /* 005bc5e6: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005bc5ed:; BB(0x005bc5ed);
    /* 005bc5ed: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc5f1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc5f4: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005bc5f7: mov dword ptr [ecx + eax*4 + 0x60], edx */ W32((u32)(r_ecx+r_eax*4+0x60u), r_edx);
L_005bc5fb:; BB(0x005bc5fb);
    /* 005bc5fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5ff: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc603: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc606: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 005bc60a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc60e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc611: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005bc615: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc617: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc61au); call_ind(t); }
    /* 005bc61a: push 0x16049 */ { u32 v = 0x16049u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc61f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc623: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc626: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 005bc62a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc62fu); f_005ea0c3();
    /* 005bc62f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc634: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc638: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc63b: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 005bc63f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bc644u); f_005ea1cf();
    /* 005bc644: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc648: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc64b: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 005bc64f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc653: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc656: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005bc65a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc65c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc65fu); call_ind(t); }
    /* 005bc65f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc661: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc665: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc668: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 005bc66c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc670: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc673: mov eax, dword ptr [edx + eax*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 005bc677: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc679: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc67cu); call_ind(t); }
    /* 005bc67c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc680: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc683: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 005bc687: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bc68b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc68e: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005bc692: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc694: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc697u); call_ind(t); }
    /* 005bc697: jmp 0x5bc4c8 */ goto L_005bc4c8;
L_005bc69c:; BB(0x005bc69c);
    /* 005bc69c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc69f: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc6a3: jne 0x5bc6da */ if (!fZ) goto L_005bc6da;
L_005bc6a5:; BB(0x005bc6a5);
    /* 005bc6a5: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc6aa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc6afu); f_0048ab58();
    /* 005bc6af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc6b2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bc6b5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc6b9: je 0x5bc6ca */ if (fZ) goto L_005bc6ca;
L_005bc6bb:; BB(0x005bc6bb);
    /* 005bc6bb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc6bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc6c0: call 0x5befef */ r_esp -= 4; W32(r_esp, 0x5bc6c5u); f_005befef();
    /* 005bc6c5: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005bc6c8: jmp 0x5bc6d1 */ goto L_005bc6d1;
L_005bc6ca:; BB(0x005bc6ca);
    /* 005bc6ca: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005bc6d1:; BB(0x005bc6d1);
    /* 005bc6d1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc6d4: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bc6d7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_005bc6da:; BB(0x005bc6da);
    /* 005bc6da: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc6dd: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005bc6e0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc6e3: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bc6e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc6e8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc6ebu); call_ind(t); }
    /* 005bc6eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc6ed: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc6f0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bc6f3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc6f8u); f_005ea0c3();
    /* 005bc6f8: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc6fd: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc702: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc705: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005bc708: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc70b: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bc70e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc710: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc713u); call_ind(t); }
    /* 005bc713: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc715: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc718: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bc71b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc71e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bc721: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc723: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc726u); call_ind(t); }
    /* 005bc726: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc729: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bc72c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc72f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bc732: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc734: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc737u); call_ind(t); }
    /* 005bc737: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc73a: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc73e: jne 0x5bc775 */ if (!fZ) goto L_005bc775;
L_005bc740:; BB(0x005bc740);
    /* 005bc740: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc745: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc74au); f_0048ab58();
    /* 005bc74a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc74d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bc750: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc754: je 0x5bc765 */ if (fZ) goto L_005bc765;
L_005bc756:; BB(0x005bc756);
    /* 005bc756: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc758: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bc75b: call 0x5befef */ r_esp -= 4; W32(r_esp, 0x5bc760u); f_005befef();
    /* 005bc760: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005bc763: jmp 0x5bc76c */ goto L_005bc76c;
L_005bc765:; BB(0x005bc765);
    /* 005bc765: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005bc76c:; BB(0x005bc76c);
    /* 005bc76c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc76f: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bc772: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
L_005bc775:; BB(0x005bc775);
    /* 005bc775: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc778: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bc77b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc77e: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005bc781: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc783: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc786u); call_ind(t); }
    /* 005bc786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc788: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc78b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bc78e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc793u); f_005ea0c3();
    /* 005bc793: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc798: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc79a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc79d: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005bc7a0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7a3: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005bc7a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc7a8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc7abu); call_ind(t); }
    /* 005bc7ab: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7ad: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7b0: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bc7b3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7b6: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005bc7b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc7bb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc7beu); call_ind(t); }
    /* 005bc7be: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7c1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bc7c4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7c7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005bc7ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc7cc: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc7cfu); call_ind(t); }
    /* 005bc7cf: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc7d2: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc7d6: jne 0x5bc80d */ if (!fZ) goto L_005bc80d;
L_005bc7d8:; BB(0x005bc7d8);
    /* 005bc7d8: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7dd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc7e2u); f_0048ab58();
    /* 005bc7e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc7e5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005bc7e8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc7ec: je 0x5bc7fd */ if (fZ) goto L_005bc7fd;
L_005bc7ee:; BB(0x005bc7ee);
    /* 005bc7ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7f0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bc7f3: call 0x5befef */ r_esp -= 4; W32(r_esp, 0x5bc7f8u); f_005befef();
    /* 005bc7f8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005bc7fb: jmp 0x5bc804 */ goto L_005bc804;
L_005bc7fd:; BB(0x005bc7fd);
    /* 005bc7fd: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005bc804:; BB(0x005bc804);
    /* 005bc804: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc807: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc80a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005bc80d:; BB(0x005bc80d);
    /* 005bc80d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc810: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005bc813: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc816: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bc819: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc81b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc81eu); call_ind(t); }
    /* 005bc81e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc820: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc823: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005bc826: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc82bu); f_005ea0c3();
    /* 005bc82b: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc830: push 0x25f */ { u32 v = 0x25fu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc835: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc838: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005bc83b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc83e: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bc841: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc843: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc846u); call_ind(t); }
    /* 005bc846: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc848: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc84b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005bc84e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc851: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bc854: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc856: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc859u); call_ind(t); }
    /* 005bc859: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc85c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005bc85f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc862: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bc865: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc867: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc86au); call_ind(t); }
    /* 005bc86a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc86d: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc871: jne 0x5bc8a6 */ if (!fZ) goto L_005bc8a6;
L_005bc873:; BB(0x005bc873);
    /* 005bc873: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc878: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc87du); f_0048ab58();
    /* 005bc87d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc880: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bc883: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc887: je 0x5bc896 */ if (fZ) goto L_005bc896;
L_005bc889:; BB(0x005bc889);
    /* 005bc889: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bc88c: call 0x5bf840 */ r_esp -= 4; W32(r_esp, 0x5bc891u); f_005bf840();
    /* 005bc891: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005bc894: jmp 0x5bc89d */ goto L_005bc89d;
L_005bc896:; BB(0x005bc896);
    /* 005bc896: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005bc89d:; BB(0x005bc89d);
    /* 005bc89d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8a0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005bc8a3: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
L_005bc8a6:; BB(0x005bc8a6);
    /* 005bc8a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8a8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8ab: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005bc8ae: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc8b3u); f_005ea0c3();
    /* 005bc8b3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8b6: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005bc8b9: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8bc: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005bc8bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc8c1: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc8c4u); call_ind(t); }
    /* 005bc8c4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8c7: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005bc8ca: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8cd: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005bc8d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc8d2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bc8d5u); call_ind(t); }
    /* 005bc8d5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc8d8: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc8dc: jne 0x5bc90e */ if (!fZ) goto L_005bc90e;
L_005bc8de:; BB(0x005bc8de);
    /* 005bc8de: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8e0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc8e5u); f_0048ab58();
    /* 005bc8e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc8e8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005bc8eb: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc8ef: je 0x5bc8fe */ if (fZ) goto L_005bc8fe;
L_005bc8f1:; BB(0x005bc8f1);
    /* 005bc8f1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bc8f4: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bc8f9u); f_005e3fb0();
    /* 005bc8f9: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005bc8fc: jmp 0x5bc905 */ goto L_005bc905;
L_005bc8fe:; BB(0x005bc8fe);
    /* 005bc8fe: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005bc905:; BB(0x005bc905);
    /* 005bc905: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc908: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005bc90b: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
L_005bc90e:; BB(0x005bc90e);
    /* 005bc90e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc910: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc912: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc915: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005bc918: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc91b: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005bc91e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc920: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc923u); call_ind(t); }
    /* 005bc923: push 0x1602e */ { u32 v = 0x1602eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc928: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc92b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005bc92e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc933u); f_005ea0c3();
    /* 005bc933: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc935: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc938: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005bc93b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bc940u); f_005ea1cf();
    /* 005bc940: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bc942: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc945: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 005bc948: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc94b: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 005bc94e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc950: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5bc953u); call_ind(t); }
    /* 005bc953: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc956: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005bc959: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc95c: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005bc95f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc961: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bc964u); call_ind(t); }
    /* 005bc964: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc967: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005bc96a: mov dword ptr [ecx + 0x6c], 8 */ W32((u32)(r_ecx+0x6cu), 0x8u);
    /* 005bc971: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc974: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 005bc977: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc97a: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 005bc97d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc97f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bc982u); call_ind(t); }
    /* 005bc982: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc985: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc989: jne 0x5bc9c4 */ if (!fZ) goto L_005bc9c4;
L_005bc98b:; BB(0x005bc98b);
    /* 005bc98b: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc98d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bc992u); f_0048ab58();
    /* 005bc992: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc995: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005bc998: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc99c: je 0x5bc9ae */ if (fZ) goto L_005bc9ae;
L_005bc99e:; BB(0x005bc99e);
    /* 005bc99e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bc9a1: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bc9a6u); f_005e3fb0();
    /* 005bc9a6: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005bc9ac: jmp 0x5bc9b8 */ goto L_005bc9b8;
L_005bc9ae:; BB(0x005bc9ae);
    /* 005bc9ae: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005bc9b8:; BB(0x005bc9b8);
    /* 005bc9b8: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9bb: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005bc9c1: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
L_005bc9c4:; BB(0x005bc9c4);
    /* 005bc9c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9c8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9cb: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bc9ce: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9d1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005bc9d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc9d6: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bc9d9u); call_ind(t); }
    /* 005bc9d9: push 0x1603c */ { u32 v = 0x1603cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9e1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bc9e4: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bc9e9u); f_005ea0c3();
    /* 005bc9e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9eb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9ee: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bc9f1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bc9f6u); f_005ea1cf();
    /* 005bc9f6: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9f9: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005bc9fc: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bc9ff: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005bca02: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bca04: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bca07u); call_ind(t); }
    /* 005bca07: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bca09: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca0c: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bca0f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca12: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005bca15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bca17: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bca1au); call_ind(t); }
    /* 005bca1a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca1d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bca20: mov dword ptr [ecx + 0x6c], 0xb */ W32((u32)(r_ecx+0x6cu), 0xbu);
    /* 005bca27: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bca29: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bca2eu); f_0048ab58();
    /* 005bca2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bca31: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bca34: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bca38: je 0x5bca4c */ if (fZ) goto L_005bca4c;
L_005bca3a:; BB(0x005bca3a);
    /* 005bca3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bca3c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bca3f: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5bca44u); f_005d7698();
    /* 005bca44: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005bca4a: jmp 0x5bca56 */ goto L_005bca56;
L_005bca4c:; BB(0x005bca4c);
    /* 005bca4c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005bca56:; BB(0x005bca56);
    /* 005bca56: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005bca5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bca5d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca60: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bca63: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bca68u); f_005e4060();
    /* 005bca68: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca6b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bca6e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca71: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005bca74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bca76: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bca79u); call_ind(t); }
    /* 005bca79: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bca7c: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bca80: jne 0x5bcabb */ if (!fZ) goto L_005bcabb;
L_005bca82:; BB(0x005bca82);
    /* 005bca82: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bca84: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bca89u); f_0048ab58();
    /* 005bca89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bca8c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005bca8f: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bca93: je 0x5bcaa5 */ if (fZ) goto L_005bcaa5;
L_005bca95:; BB(0x005bca95);
    /* 005bca95: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bca98: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bca9du); f_005e3fb0();
    /* 005bca9d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005bcaa3: jmp 0x5bcaaf */ goto L_005bcaaf;
L_005bcaa5:; BB(0x005bcaa5);
    /* 005bcaa5: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005bcaaf:; BB(0x005bcaaf);
    /* 005bcaaf: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcab2: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005bcab8: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
L_005bcabb:; BB(0x005bcabb);
    /* 005bcabb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcabd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcabf: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcac2: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005bcac5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcac8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005bcacb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcacd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bcad0u); call_ind(t); }
    /* 005bcad0: push 0x1603d */ { u32 v = 0x1603du; r_esp -= 4; W32(r_esp, v); }
    /* 005bcad5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcad8: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005bcadb: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bcae0u); f_005ea0c3();
    /* 005bcae0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcae2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcae5: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005bcae8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bcaedu); f_005ea1cf();
    /* 005bcaed: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcaf0: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005bcaf3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcaf6: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005bcaf9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bcafb: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bcafeu); call_ind(t); }
    /* 005bcafe: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb00: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb03: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005bcb06: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb09: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005bcb0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcb0e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bcb11u); call_ind(t); }
    /* 005bcb11: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb14: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005bcb17: mov dword ptr [ecx + 0x6c], 0xd */ W32((u32)(r_ecx+0x6cu), 0xdu);
    /* 005bcb1e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb20: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bcb25u); f_0048ab58();
    /* 005bcb25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcb28: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005bcb2b: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcb2f: je 0x5bcb43 */ if (fZ) goto L_005bcb43;
L_005bcb31:; BB(0x005bcb31);
    /* 005bcb31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb33: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bcb36: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5bcb3bu); f_005d7698();
    /* 005bcb3b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005bcb41: jmp 0x5bcb4d */ goto L_005bcb4d;
L_005bcb43:; BB(0x005bcb43);
    /* 005bcb43: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005bcb4d:; BB(0x005bcb4d);
    /* 005bcb4d: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005bcb53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb54: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb57: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005bcb5a: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bcb5fu); f_005e4060();
    /* 005bcb5f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb62: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005bcb65: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb68: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005bcb6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcb6d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bcb70u); call_ind(t); }
    /* 005bcb70: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcb73: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcb77: jne 0x5bcbb2 */ if (!fZ) goto L_005bcbb2;
L_005bcb79:; BB(0x005bcb79);
    /* 005bcb79: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb7b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bcb80u); f_0048ab58();
    /* 005bcb80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcb83: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005bcb86: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcb8a: je 0x5bcb9c */ if (fZ) goto L_005bcb9c;
L_005bcb8c:; BB(0x005bcb8c);
    /* 005bcb8c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bcb8f: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bcb94u); f_005e3fb0();
    /* 005bcb94: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005bcb9a: jmp 0x5bcba6 */ goto L_005bcba6;
L_005bcb9c:; BB(0x005bcb9c);
    /* 005bcb9c: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005bcba6:; BB(0x005bcba6);
    /* 005bcba6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcba9: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bcbaf: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
L_005bcbb2:; BB(0x005bcbb2);
    /* 005bcbb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbb6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbb9: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005bcbbc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbbf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcbc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcbc4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bcbc7u); call_ind(t); }
    /* 005bcbc7: push 0x1603f */ { u32 v = 0x1603fu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbcc: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbcf: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005bcbd2: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bcbd7u); f_005ea0c3();
    /* 005bcbd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbd9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbdc: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005bcbdf: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bcbe4u); f_005ea1cf();
    /* 005bcbe4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbe7: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005bcbea: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbed: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005bcbf0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bcbf2: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bcbf5u); call_ind(t); }
    /* 005bcbf5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbf7: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcbfa: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005bcbfd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc00: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcc03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcc05: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bcc08u); call_ind(t); }
    /* 005bcc08: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc0b: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005bcc0e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc11: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcc14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcc16: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bcc19u); call_ind(t); }
    /* 005bcc19: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc1c: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcc20: jne 0x5bcc5b */ if (!fZ) goto L_005bcc5b;
L_005bcc22:; BB(0x005bcc22);
    /* 005bcc22: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc24: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bcc29u); f_0048ab58();
    /* 005bcc29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcc2c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005bcc2f: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcc33: je 0x5bcc45 */ if (fZ) goto L_005bcc45;
L_005bcc35:; BB(0x005bcc35);
    /* 005bcc35: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bcc38: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bcc3du); f_005e9d30();
    /* 005bcc3d: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005bcc43: jmp 0x5bcc4f */ goto L_005bcc4f;
L_005bcc45:; BB(0x005bcc45);
    /* 005bcc45: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005bcc4f:; BB(0x005bcc4f);
    /* 005bcc4f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc52: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005bcc58: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
L_005bcc5b:; BB(0x005bcc5b);
    /* 005bcc5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc5f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc62: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bcc65: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc68: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bcc6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcc6d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bcc70u); call_ind(t); }
    /* 005bcc70: push 0x1603b */ { u32 v = 0x1603bu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc75: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc78: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bcc7b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bcc80u); f_005ea0c3();
    /* 005bcc80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc82: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc85: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005bcc88: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bcc8du); f_005ea1cf();
    /* 005bcc8d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc90: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005bcc93: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcc96: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005bcc99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bcc9b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bcc9eu); call_ind(t); }
    /* 005bcc9e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcca0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcca3: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005bcca6: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcca9: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bccac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bccae: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bccb1u); call_ind(t); }
    /* 005bccb1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bccb4: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bccb7: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bccba: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bccbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bccbf: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bccc2u); call_ind(t); }
    /* 005bccc2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bccc5: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bccc9: jne 0x5bcd04 */ if (!fZ) goto L_005bcd04;
L_005bcccb:; BB(0x005bcccb);
    /* 005bcccb: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcccd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bccd2u); f_0048ab58();
    /* 005bccd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bccd5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005bccd8: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bccdc: je 0x5bccee */ if (fZ) goto L_005bccee;
L_005bccde:; BB(0x005bccde);
    /* 005bccde: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005bcce1: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bcce6u); f_005e9d30();
    /* 005bcce6: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005bccec: jmp 0x5bccf8 */ goto L_005bccf8;
L_005bccee:; BB(0x005bccee);
    /* 005bccee: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005bccf8:; BB(0x005bccf8);
    /* 005bccf8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bccfb: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005bcd01: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
L_005bcd04:; BB(0x005bcd04);
    /* 005bcd04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd08: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd0b: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bcd0e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd11: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bcd14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcd16: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bcd19u); call_ind(t); }
    /* 005bcd19: push 0x16047 */ { u32 v = 0x16047u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd1e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd21: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bcd24: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bcd29u); f_005ea0c3();
    /* 005bcd29: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd2c: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005bcd32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd33: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd36: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bcd39: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bcd3eu); f_005ea1cf();
    /* 005bcd3e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd41: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005bcd44: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd47: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bcd4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcd4c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bcd4fu); call_ind(t); }
    /* 005bcd4f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd51: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd54: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bcd57: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd5a: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bcd5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcd5f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bcd62u); call_ind(t); }
    /* 005bcd62: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd65: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bcd68: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd6b: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bcd6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcd70: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bcd73u); call_ind(t); }
    /* 005bcd73: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bcd79: jmp 0x5bcd87 */ goto L_005bcd87;
L_005bcd7b:; BB(0x005bcd7b);
    /* 005bcd7b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bcd7f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bcd83: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bcd87:; BB(0x005bcd87);
    /* 005bcd87: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bcd8b: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcd8e: jge 0x5bcea2 */ if ((fS==fO)) goto L_005bcea2;
L_005bcd94:; BB(0x005bcd94);
    /* 005bcd94: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bcd98: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcd9b: cmp dword ptr [eax + edx*4 + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcda3: jne 0x5bcde6 */ if (!fZ) goto L_005bcde6;
L_005bcda5:; BB(0x005bcda5);
    /* 005bcda5: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcda7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bcdacu); f_0048ab58();
    /* 005bcdac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcdaf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005bcdb2: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcdb6: je 0x5bcdc8 */ if (fZ) goto L_005bcdc8;
L_005bcdb8:; BB(0x005bcdb8);
    /* 005bcdb8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005bcdbb: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bcdc0u); f_005e9d30();
    /* 005bcdc0: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005bcdc6: jmp 0x5bcdd2 */ goto L_005bcdd2;
L_005bcdc8:; BB(0x005bcdc8);
    /* 005bcdc8: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005bcdd2:; BB(0x005bcdd2);
    /* 005bcdd2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bcdd6: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcdd9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bcddf: mov dword ptr [edx + ecx*4 + 0x80], eax */ W32((u32)(r_edx+r_ecx*4+0x80u), r_eax);
L_005bcde6:; BB(0x005bcde6);
    /* 005bcde6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcde8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcdea: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bcdee: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcdf1: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005bcdf8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bcdfc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bcdff: mov eax, dword ptr [edx + eax*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_eax*4+0x80u));
    /* 005bce06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bce08: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bce0bu); call_ind(t); }
    /* 005bce0b: push 0x1603e */ { u32 v = 0x1603eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bce10: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce14: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce17: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005bce1e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bce23u); f_005ea0c3();
    /* 005bce23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bce25: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce29: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce2c: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005bce33: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bce38u); f_005ea1cf();
    /* 005bce38: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce3c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce3f: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005bce46: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce4a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce4d: mov eax, dword ptr [edx + eax*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_eax*4+0x80u));
    /* 005bce54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bce56: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bce59u); call_ind(t); }
    /* 005bce59: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bce5b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce5f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce62: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005bce69: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce6d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce70: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005bce77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bce79: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5bce7cu); call_ind(t); }
    /* 005bce7c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce80: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce83: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005bce8a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bce8e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005bce91: mov eax, dword ptr [edx + eax*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_eax*4+0x80u));
    /* 005bce98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bce9a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5bce9du); call_ind(t); }
    /* 005bce9d: jmp 0x5bcd7b */ goto L_005bcd7b;
L_005bcea2:; BB(0x005bcea2);
    /* 005bcea2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcea4: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bcea9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bceac: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bceb2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bceb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bceb7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bcebau); call_ind(t); }
    /* 005bceba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcebc: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bcec1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bcec4: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bceca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bcecd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcecf: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bced2u); call_ind(t); }
    /* 005bced2: mov esp, ebp */ r_esp = r_ebp;
    /* 005bced4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bced5: ret  */ FN_RET(0x005bbfbf); r_esp += 4; return;
}

void f_005bced6(void) /* FUN_005bced6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bced6);
    /* 005bced6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bced7: mov ebp, esp */ r_ebp = r_esp;
    /* 005bced9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcedc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bcedf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bcee2: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcee6: jne 0x5bcf26 */ if (!fZ) goto L_005bcf26;
L_005bcee8:; BB(0x005bcee8);
    /* 005bcee8: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 005bceed: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bcef2u); f_0048ab58();
    /* 005bcef2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcef5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bcef8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcefc: je 0x5bcf0b */ if (fZ) goto L_005bcf0b;
L_005bcefe:; BB(0x005bcefe);
    /* 005bcefe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcf01: call 0x5be7d8 */ r_esp -= 4; W32(r_esp, 0x5bcf06u); f_005be7d8();
    /* 005bcf06: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bcf09: jmp 0x5bcf12 */ goto L_005bcf12;
L_005bcf0b:; BB(0x005bcf0b);
    /* 005bcf0b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005bcf12:; BB(0x005bcf12);
    /* 005bcf12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bcf15: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bcf18: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005bcf1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bcf1e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bcf21: call 0x5be850 */ r_esp -= 4; W32(r_esp, 0x5bcf26u); f_005be850();
L_005bcf26:; BB(0x005bcf26);
    /* 005bcf26: mov esp, ebp */ r_esp = r_ebp;
    /* 005bcf28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcf29: ret  */ FN_RET(0x005bced6); r_esp += 4; return;
}

void f_005bcf2a(void) /* FUN_005bcf2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bcf2a);
    /* 005bcf2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf2b: mov ebp, esp */ r_ebp = r_esp;
    /* 005bcf2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bcf31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcf34: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bcf3a: mov edx, dword ptr [ecx + 0x12ec0] */ r_edx = R32((u32)(r_ecx+0x12ec0u));
    /* 005bcf40: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 005bcf46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcf49: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcf50: jl 0x5bcf5e */ if ((fS!=fO)) goto L_005bcf5e;
L_005bcf52:; BB(0x005bcf52);
    /* 005bcf52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcf55: cmp dword ptr [ecx + 0xa4], 0xa */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcf5c: jle 0x5bcf6b */ if ((fZ||fS!=fO)) goto L_005bcf6b;
L_005bcf5e:; BB(0x005bcf5e);
    /* 005bcf5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcf61: mov dword ptr [edx + 0xa4], 3 */ W32((u32)(r_edx+0xa4u), 0x3u);
L_005bcf6b:; BB(0x005bcf6b);
    /* 005bcf6b: mov esp, ebp */ r_esp = r_ebp;
    /* 005bcf6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcf6e: ret  */ FN_RET(0x005bcf2a); r_esp += 4; return;
}

void f_005bcf6f(void) /* FUN_005bcf6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bcf6f);
    /* 005bcf6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf70: mov ebp, esp */ r_ebp = r_esp;
    /* 005bcf72: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcf75: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bcf78: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bcf7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bcf86: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bcf89: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 005bcf8f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bcf92: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bcf96: ja 0x5bd0f7 */ if ((!fC&&!fZ)) goto L_005bd0f7;
L_005bcf9c:; BB(0x005bcf9c);
    /* 005bcf9c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bcf9f: jmp dword ptr [edx*4 + 0x5bd10e] */ { u32 t = R32((u32)(r_edx*4+0x5bd10eu)); switch (t) { case 0x5bcfa6u: goto L_005bcfa6; case 0x5bcfcau: goto L_005bcfca; case 0x5bcfeeu: goto L_005bcfee; case 0x5bd017u: goto L_005bd017; case 0x5bd022u: goto L_005bd022; case 0x5bd042u: goto L_005bd042; case 0x5bd062u: goto L_005bd062; case 0x5bd07fu: goto L_005bd07f; case 0x5bd09cu: goto L_005bd09c; case 0x5bd0b9u: goto L_005bd0b9; case 0x5bd0d9u: goto L_005bd0d9; default: UNSUP(0x005bcf9f, "jump table entry is not a known target"); } }
L_005bcfa6:; BB(0x005bcfa6);
    /* 005bcfa6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bcfa9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bcfaa: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 005bcfaf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bcfaf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bcfaf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bcfb1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bcfb4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bcfb7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bcfb8: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 005bcfbd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bcfbd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bcfbd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bcfbf: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcfc2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bcfc5: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bcfca:; BB(0x005bcfca);
    /* 005bcfca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bcfcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bcfce: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bcfd3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bcfd3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bcfd3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bcfd5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bcfd8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bcfdb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bcfdc: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bcfe1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bcfe1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bcfe1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bcfe3: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcfe6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bcfe9: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bcfee:; BB(0x005bcfee);
    /* 005bcfee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bcff1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bcff2: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005bcff5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcff7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bcffa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bcffd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd000: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd001: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd003: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd005: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bd008: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd00a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd00c: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd00f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd012: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd017:; BB(0x005bd017);
    /* 005bd017: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bd01a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bd01d: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd022:; BB(0x005bd022);
    /* 005bd022: cmp dword ptr [ebp + 0xc], 0xbebc200 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbebc200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd029: jl 0x5bd034 */ if ((fS!=fO)) goto L_005bd034;
L_005bd02b:; BB(0x005bd02b);
    /* 005bd02b: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd032: jmp 0x5bd03d */ goto L_005bd03d;
L_005bd034:; BB(0x005bd034);
    /* 005bd034: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd037: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd03a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005bd03d:; BB(0x005bd03d);
    /* 005bd03d: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd042:; BB(0x005bd042);
    /* 005bd042: cmp dword ptr [ebp + 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd049: jl 0x5bd054 */ if ((fS!=fO)) goto L_005bd054;
L_005bd04b:; BB(0x005bd04b);
    /* 005bd04b: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd052: jmp 0x5bd05d */ goto L_005bd05d;
L_005bd054:; BB(0x005bd054);
    /* 005bd054: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bd057: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd05a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005bd05d:; BB(0x005bd05d);
    /* 005bd05d: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd062:; BB(0x005bd062);
    /* 005bd062: cmp dword ptr [ebp + 0xc], 0x2625a00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2625a00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd069: jl 0x5bd074 */ if ((fS!=fO)) goto L_005bd074;
L_005bd06b:; BB(0x005bd06b);
    /* 005bd06b: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd072: jmp 0x5bd07d */ goto L_005bd07d;
L_005bd074:; BB(0x005bd074);
    /* 005bd074: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bd077: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd07a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005bd07d:; BB(0x005bd07d);
    /* 005bd07d: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd07f:; BB(0x005bd07f);
    /* 005bd07f: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd086: jl 0x5bd091 */ if ((fS!=fO)) goto L_005bd091;
L_005bd088:; BB(0x005bd088);
    /* 005bd088: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd08f: jmp 0x5bd09a */ goto L_005bd09a;
L_005bd091:; BB(0x005bd091);
    /* 005bd091: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd094: imul eax, eax, 0x32 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x32u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd097: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005bd09a:; BB(0x005bd09a);
    /* 005bd09a: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd09c:; BB(0x005bd09c);
    /* 005bd09c: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd0a3: jl 0x5bd0ae */ if ((fS!=fO)) goto L_005bd0ae;
L_005bd0a5:; BB(0x005bd0a5);
    /* 005bd0a5: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd0ac: jmp 0x5bd0b7 */ goto L_005bd0b7;
L_005bd0ae:; BB(0x005bd0ae);
    /* 005bd0ae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bd0b1: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd0b4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005bd0b7:; BB(0x005bd0b7);
    /* 005bd0b7: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd0b9:; BB(0x005bd0b9);
    /* 005bd0b9: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd0c0: jl 0x5bd0cb */ if ((fS!=fO)) goto L_005bd0cb;
L_005bd0c2:; BB(0x005bd0c2);
    /* 005bd0c2: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd0c9: jmp 0x5bd0d7 */ goto L_005bd0d7;
L_005bd0cb:; BB(0x005bd0cb);
    /* 005bd0cb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bd0ce: imul edx, edx, 0x1f4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1f4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd0d4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005bd0d7:; BB(0x005bd0d7);
    /* 005bd0d7: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd0d9:; BB(0x005bd0d9);
    /* 005bd0d9: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd0e0: jl 0x5bd0eb */ if ((fS!=fO)) goto L_005bd0eb;
L_005bd0e2:; BB(0x005bd0e2);
    /* 005bd0e2: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005bd0e9: jmp 0x5bd0f7 */ goto L_005bd0f7;
L_005bd0eb:; BB(0x005bd0eb);
    /* 005bd0eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd0ee: imul eax, eax, 0x3e8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3e8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd0f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005bd0f7:; BB(0x005bd0f7);
    /* 005bd0f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bd0fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd0fd: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bd0ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd102: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bd105: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd108: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd10a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd10b: ret 8 */ FN_RET(0x005bcf6f); r_esp += 12; return;
}

void f_005bd13a(void) /* FUN_005bd13a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd13a);
    /* 005bd13a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd13b: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd13d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd140: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bd143: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bd14a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd14d: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 005bd153: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bd156: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bd15a: ja 0x5bd28b */ if ((!fC&&!fZ)) goto L_005bd28b;
L_005bd160:; BB(0x005bd160);
    /* 005bd160: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bd163: jmp dword ptr [edx*4 + 0x5bd294] */ { u32 t = R32((u32)(r_edx*4+0x5bd294u)); switch (t) { case 0x5bd16au: goto L_005bd16a; case 0x5bd19du: goto L_005bd19d; case 0x5bd1d0u: goto L_005bd1d0; case 0x5bd203u: goto L_005bd203; case 0x5bd21du: goto L_005bd21d; case 0x5bd22du: goto L_005bd22d; case 0x5bd23du: goto L_005bd23d; case 0x5bd24du: goto L_005bd24d; case 0x5bd25du: goto L_005bd25d; case 0x5bd26du: goto L_005bd26d; case 0x5bd27du: goto L_005bd27d; default: UNSUP(0x005bd163, "jump table entry is not a known target"); } }
L_005bd16a:; BB(0x005bd16a);
    /* 005bd16a: cmp dword ptr [ebp + 8], 0x2faf07f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2faf07fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd171: jle 0x5bd17c */ if ((fZ||fS!=fO)) goto L_005bd17c;
L_005bd173:; BB(0x005bd173);
    /* 005bd173: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 005bd17a: jmp 0x5bd198 */ goto L_005bd198;
L_005bd17c:; BB(0x005bd17c);
    /* 005bd17c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd17f: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd182: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd185: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd188: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd189: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005bd18e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd18e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd18e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd190: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd193: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd195: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005bd198:; BB(0x005bd198);
    /* 005bd198: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd19d:; BB(0x005bd19d);
    /* 005bd19d: cmp dword ptr [ebp + 8], 0x5f5e0ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5f5e0ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd1a4: jle 0x5bd1af */ if ((fZ||fS!=fO)) goto L_005bd1af;
L_005bd1a6:; BB(0x005bd1a6);
    /* 005bd1a6: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 005bd1ad: jmp 0x5bd1cb */ goto L_005bd1cb;
L_005bd1af:; BB(0x005bd1af);
    /* 005bd1af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd1b2: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd1b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd1b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd1bb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd1bc: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bd1c1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd1c1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd1c1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd1c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd1c6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd1c8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005bd1cb:; BB(0x005bd1cb);
    /* 005bd1cb: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd1d0:; BB(0x005bd1d0);
    /* 005bd1d0: cmp dword ptr [ebp + 8], 0xee6b27f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xee6b27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd1d7: jle 0x5bd1e2 */ if ((fZ||fS!=fO)) goto L_005bd1e2;
L_005bd1d9:; BB(0x005bd1d9);
    /* 005bd1d9: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 005bd1e0: jmp 0x5bd1fe */ goto L_005bd1fe;
L_005bd1e2:; BB(0x005bd1e2);
    /* 005bd1e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd1e5: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bd1e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd1eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd1ee: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd1ef: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 005bd1f4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd1f4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd1f4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd1f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd1f9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd1fb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005bd1fe:; BB(0x005bd1fe);
    /* 005bd1fe: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd203:; BB(0x005bd203);
    /* 005bd203: cmp dword ptr [ebp + 8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd20a: jle 0x5bd215 */ if ((fZ||fS!=fO)) goto L_005bd215;
L_005bd20c:; BB(0x005bd20c);
    /* 005bd20c: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 005bd213: jmp 0x5bd21b */ goto L_005bd21b;
L_005bd215:; BB(0x005bd215);
    /* 005bd215: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd218: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bd21b:; BB(0x005bd21b);
    /* 005bd21b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd21d:; BB(0x005bd21d);
    /* 005bd21d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd220: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd221: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005bd226: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd226, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd226, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd228: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd22b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd22d:; BB(0x005bd22d);
    /* 005bd22d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd230: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd231: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bd236: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd236, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd236, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd238: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd23b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd23d:; BB(0x005bd23d);
    /* 005bd23d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd240: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd241: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 005bd246: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd246, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd246, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd248: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd24b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd24d:; BB(0x005bd24d);
    /* 005bd24d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd250: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd251: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 005bd256: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd256, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd256, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd258: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd25b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd25d:; BB(0x005bd25d);
    /* 005bd25d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd260: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd261: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005bd266: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd266, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd266, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd268: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd26b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd26d:; BB(0x005bd26d);
    /* 005bd26d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd270: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd271: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 005bd276: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd276, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd276, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd278: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd27b: jmp 0x5bd28b */ goto L_005bd28b;
L_005bd27d:; BB(0x005bd27d);
    /* 005bd27d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd280: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd281: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005bd286: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bd286, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bd286, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bd288: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bd28b:; BB(0x005bd28b);
    /* 005bd28b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd28e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd290: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd291: ret 8 */ FN_RET(0x005bd13a); r_esp += 12; return;
}

void f_005bd2c0(void) /* FUN_005bd2c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd2c0);
    /* 005bd2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd2c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd2c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bd2c9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bd2cf: jmp 0x5bd2dd */ goto L_005bd2dd;
L_005bd2d1:; BB(0x005bd2d1);
    /* 005bd2d1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bd2d5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bd2d9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bd2dd:; BB(0x005bd2dd);
    /* 005bd2dd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd2e1: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd2e4: jge 0x5bd303 */ if ((fS==fO)) goto L_005bd303;
L_005bd2e6:; BB(0x005bd2e6);
    /* 005bd2e6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd2ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd2ed: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bd2f1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd2f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd2f8: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bd2fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd2fe: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bd301u); call_ind(t); }
    /* 005bd301: jmp 0x5bd2d1 */ goto L_005bd2d1;
L_005bd303:; BB(0x005bd303);
    /* 005bd303: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd306: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd30d: jne 0x5bd320 */ if (!fZ) goto L_005bd320;
L_005bd30f:; BB(0x005bd30f);
    /* 005bd30f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd312: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005bd315: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd318: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005bd31b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd31d: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5bd320u); call_ind(t); }
L_005bd320:; BB(0x005bd320);
    /* 005bd320: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd322: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd323: ret  */ FN_RET(0x005bd2c0); r_esp += 4; return;
}

void f_005bd324(void) /* FUN_005bd324 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd324);
    /* 005bd324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd325: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd327: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd32a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bd32d: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bd333: jmp 0x5bd341 */ goto L_005bd341;
L_005bd335:; BB(0x005bd335);
    /* 005bd335: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bd339: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bd33d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bd341:; BB(0x005bd341);
    /* 005bd341: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd345: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd348: jge 0x5bd367 */ if ((fS==fO)) goto L_005bd367;
L_005bd34a:; BB(0x005bd34a);
    /* 005bd34a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd34e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd351: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bd355: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bd359: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd35c: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005bd360: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd362: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5bd365u); call_ind(t); }
    /* 005bd365: jmp 0x5bd335 */ goto L_005bd335;
L_005bd367:; BB(0x005bd367);
    /* 005bd367: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd36a: ret  */ FN_RET(0x005bd324); r_esp += 4; return;
}

void f_005bd36b(void) /* FUN_005bd36b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd36b);
    /* 005bd36b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd36c: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd36e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd36f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd372: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd375: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005bd37b: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd37e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd381: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 005bd387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd38a: cmp dword ptr [eax + 0xa8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bd394: jbe 0x5bd3b7 */ if ((fC||fZ)) goto L_005bd3b7;
L_005bd396:; BB(0x005bd396);
    /* 005bd396: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd39b: push 0x697ef0 */ { u32 v = 0x697ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3a0: push 0x697efc */ { u32 v = 0x697efcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3a7: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5bd3acu); f_0060f9f3();
    /* 005bd3ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd3af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3b2: call 0x5bd8d9 */ r_esp -= 4; W32(r_esp, 0x5bd3b7u); f_005bd8d9();
L_005bd3b7:; BB(0x005bd3b7);
    /* 005bd3b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3ba: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 005bd3c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3c4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005bd3c7: call 0x5bf561 */ r_esp -= 4; W32(r_esp, 0x5bd3ccu); f_005bf561();
    /* 005bd3cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd3ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd3cf: ret 4 */ FN_RET(0x005bd36b); r_esp += 8; return;
}

void f_005bd3d2(void) /* FUN_005bd3d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd3d2);
    /* 005bd3d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd3d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd3d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd3d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3dc: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005bd3e2: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd3e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3e8: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
    /* 005bd3ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3f1: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd3f8: jae 0x5bd407 */ if (!fC) goto L_005bd407;
L_005bd3fa:; BB(0x005bd3fa);
    /* 005bd3fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd3fd: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
L_005bd407:; BB(0x005bd407);
    /* 005bd407: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd40a: cmp dword ptr [edx + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd411: jne 0x5bd443 */ if (!fZ) goto L_005bd443;
L_005bd413:; BB(0x005bd413);
    /* 005bd413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd416: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd41d: jne 0x5bd443 */ if (!fZ) goto L_005bd443;
L_005bd41f:; BB(0x005bd41f);
    /* 005bd41f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd422: call 0x5bd639 */ r_esp -= 4; W32(r_esp, 0x5bd427u); f_005bd639();
    /* 005bd427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd42a: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd431: jne 0x5bd443 */ if (!fZ) goto L_005bd443;
L_005bd433:; BB(0x005bd433);
    /* 005bd433: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd436: call 0x5be6df */ r_esp -= 4; W32(r_esp, 0x5bd43bu); f_005be6df();
    /* 005bd43b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd43e: call 0x5bd68f */ r_esp -= 4; W32(r_esp, 0x5bd443u); f_005bd68f();
L_005bd443:; BB(0x005bd443);
    /* 005bd443: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd446: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 005bd44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd44d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd450: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005bd453: call 0x5bf561 */ r_esp -= 4; W32(r_esp, 0x5bd458u); f_005bf561();
    /* 005bd458: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd45a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd45b: ret 4 */ FN_RET(0x005bd3d2); r_esp += 8; return;
}

void f_005bd45e(void) /* FUN_005bd45e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd45e);
    /* 005bd45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd45f: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd462: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd465: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd469: jle 0x5bd472 */ if ((fZ||fS!=fO)) goto L_005bd472;
L_005bd46b:; BB(0x005bd46b);
    /* 005bd46b: mov dword ptr [ebp + 8], 2 */ W32((u32)(r_ebp+0x8u), 0x2u);
L_005bd472:; BB(0x005bd472);
    /* 005bd472: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd476: je 0x5bd480 */ if (fZ) goto L_005bd480;
L_005bd478:; BB(0x005bd478);
    /* 005bd478: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd47b: call 0x5bd6e5 */ r_esp -= 4; W32(r_esp, 0x5bd480u); f_005bd6e5();
L_005bd480:; BB(0x005bd480);
    /* 005bd480: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd483: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bd486: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 005bd48c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd48f: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005bd495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd496: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd499: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005bd49c: call 0x5bf561 */ r_esp -= 4; W32(r_esp, 0x5bd4a1u); f_005bf561();
    /* 005bd4a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd4a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd4a4: ret 4 */ FN_RET(0x005bd45e); r_esp += 8; return;
}

void f_005bd4a7(void) /* FUN_005bd4a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd4a7);
    /* 005bd4a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4a8: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd4aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd4ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bd4b4: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 005bd4ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4bd: cmp dword ptr [edx + 0xb0], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd4c7: jle 0x5bd4d6 */ if ((fZ||fS!=fO)) goto L_005bd4d6;
L_005bd4c9:; BB(0x005bd4c9);
    /* 005bd4c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4cc: mov dword ptr [eax + 0xb0], 0x3b9ac9ff */ W32((u32)(r_eax+0xb0u), 0x3b9ac9ffu);
L_005bd4d6:; BB(0x005bd4d6);
    /* 005bd4d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4d9: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005bd4df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4e3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005bd4e6: call 0x5bf561 */ r_esp -= 4; W32(r_esp, 0x5bd4ebu); f_005bf561();
    /* 005bd4eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4ee: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd4f5: jle 0x5bd509 */ if ((fZ||fS!=fO)) goto L_005bd509;
L_005bd4f7:; BB(0x005bd4f7);
    /* 005bd4f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd4fa: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bd500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd501: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd504: call 0x5bd36b */ r_esp -= 4; W32(r_esp, 0x5bd509u); f_005bd36b();
L_005bd509:; BB(0x005bd509);
    /* 005bd509: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd50b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd50c: ret 4 */ FN_RET(0x005bd4a7); r_esp += 8; return;
}

void f_005bd50f(void) /* FUN_005bd50f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd50f);
    /* 005bd50f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd510: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd513: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd519: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005bd51f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd522: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd525: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
    /* 005bd52b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd52e: cmp dword ptr [eax + 0xb0], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd538: jle 0x5bd547 */ if ((fZ||fS!=fO)) goto L_005bd547;
L_005bd53a:; BB(0x005bd53a);
    /* 005bd53a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd53d: mov dword ptr [ecx + 0xb0], 0x3b9ac9ff */ W32((u32)(r_ecx+0xb0u), 0x3b9ac9ffu);
L_005bd547:; BB(0x005bd547);
    /* 005bd547: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd54a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bd550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd551: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd554: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005bd557: call 0x5bf561 */ r_esp -= 4; W32(r_esp, 0x5bd55cu); f_005bf561();
    /* 005bd55c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd560: jle 0x5bd56e */ if ((fZ||fS!=fO)) goto L_005bd56e;
L_005bd562:; BB(0x005bd562);
    /* 005bd562: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bd565: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd566: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd569: call 0x5bd36b */ r_esp -= 4; W32(r_esp, 0x5bd56eu); f_005bd36b();
L_005bd56e:; BB(0x005bd56e);
    /* 005bd56e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd570: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd571: ret 4 */ FN_RET(0x005bd50f); r_esp += 8; return;
}

void f_005bd574(void) /* FUN_005bd574 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd574);
    /* 005bd574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd575: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd577: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd578: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd57b: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd57d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd57e: ret 4 */ FN_RET(0x005bd574); r_esp += 8; return;
}

void f_005bd581(void) /* FUN_005bd581 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd581);
    /* 005bd581: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd582: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd584: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd587: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005bd58a: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 005bd591: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 005bd598: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005bd59f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005bd5a6: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005bd5ad: mov dword ptr [ebp - 0x14], 5 */ W32((u32)(r_ebp+0xffffffecu), 0x5u);
    /* 005bd5b4: mov dword ptr [ebp - 0x10], 6 */ W32((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 005bd5bb: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 005bd5c2: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005bd5c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd5d0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bd5d3: call 0x5be125 */ r_esp -= 4; W32(r_esp, 0x5bd5d8u); f_005be125();
    /* 005bd5d8: mov eax, dword ptr [ebp + eax*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffd8u));
    /* 005bd5dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd5dd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bd5e0: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bd5e3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bd5e8u); f_005ea1cf();
    /* 005bd5e8: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd5ea: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bd5efu); f_0048ab58();
    /* 005bd5ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd5f2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bd5f5: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd5f9: je 0x5bd60e */ if (fZ) goto L_005bd60e;
L_005bd5fb:; BB(0x005bd5fb);
    /* 005bd5fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd5fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd5ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd601: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd604: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x5bd609u); f_005d7c5c();
    /* 005bd609: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005bd60c: jmp 0x5bd615 */ goto L_005bd615;
L_005bd60e:; BB(0x005bd60e);
    /* 005bd60e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005bd615:; BB(0x005bd615);
    /* 005bd615: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bd618: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd619: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bd61c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bd61f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bd624u); f_005e4060();
    /* 005bd624: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bd627: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bd62a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bd62d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005bd630: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd632: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bd635u); call_ind(t); }
    /* 005bd635: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd637: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd638: ret  */ FN_RET(0x005bd581); r_esp += 4; return;
}

void f_005bd639(void) /* FUN_005bd639 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd639);
    /* 005bd639: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd63a: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd63c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd63f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bd642: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd644: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bd649u); f_0048ab58();
    /* 005bd649: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd64c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd64f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd653: je 0x5bd664 */ if (fZ) goto L_005bd664;
L_005bd655:; BB(0x005bd655);
    /* 005bd655: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd65a: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5bd65fu); f_005d7698();
    /* 005bd65f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bd662: jmp 0x5bd66b */ goto L_005bd66b;
L_005bd664:; BB(0x005bd664);
    /* 005bd664: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005bd66b:; BB(0x005bd66b);
    /* 005bd66b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bd66e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd66f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd672: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bd675: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bd67au); f_005e4060();
    /* 005bd67a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd67d: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005bd680: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd683: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005bd686: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd688: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bd68bu); call_ind(t); }
    /* 005bd68b: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd68d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd68e: ret  */ FN_RET(0x005bd639); r_esp += 4; return;
}

void f_005bd68f(void) /* FUN_005bd68f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd68f);
    /* 005bd68f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd690: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd692: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd695: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bd698: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd69a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bd69fu); f_0048ab58();
    /* 005bd69f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd6a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd6a5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd6a9: je 0x5bd6ba */ if (fZ) goto L_005bd6ba;
L_005bd6ab:; BB(0x005bd6ab);
    /* 005bd6ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd6b0: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5bd6b5u); f_005d7698();
    /* 005bd6b5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bd6b8: jmp 0x5bd6c1 */ goto L_005bd6c1;
L_005bd6ba:; BB(0x005bd6ba);
    /* 005bd6ba: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005bd6c1:; BB(0x005bd6c1);
    /* 005bd6c1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bd6c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd6c8: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005bd6cb: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bd6d0u); f_005e4060();
    /* 005bd6d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd6d3: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005bd6d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bd6d9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005bd6dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd6de: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bd6e1u); call_ind(t); }
    /* 005bd6e1: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd6e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd6e4: ret  */ FN_RET(0x005bd68f); r_esp += 4; return;
}

void f_005bd6e5(void) /* FUN_005bd6e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd6e5);
    /* 005bd6e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6e6: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd6e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd6ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd6ef: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd6f6: jne 0x5bd716 */ if (!fZ) goto L_005bd716;
L_005bd6f8:; BB(0x005bd6f8);
    /* 005bd6f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd6fd: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005bd700: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bd705u); f_005e4060();
    /* 005bd705: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd708: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005bd70b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd70e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005bd711: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd713: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bd716u); call_ind(t); }
L_005bd716:; BB(0x005bd716);
    /* 005bd716: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd718: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd71b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005bd71e: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bd723u); f_005e4060();
    /* 005bd723: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd726: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005bd729: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd72c: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005bd72f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd731: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bd734u); call_ind(t); }
    /* 005bd734: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd737: ret  */ FN_RET(0x005bd6e5); r_esp += 4; return;
}

void f_005bd738(void) /* FUN_005bd738 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd738);
    /* 005bd738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd739: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd73b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd73c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd73f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd742: cmp dword ptr [eax + 0xac], 2 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd749: jne 0x5bd74d */ if (!fZ) goto L_005bd74d;
L_005bd74b:; BB(0x005bd74b);
    /* 005bd74b: jmp 0x5bd7a1 */ goto L_005bd7a1;
L_005bd74d:; BB(0x005bd74d);
    /* 005bd74d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd750: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd757: je 0x5bd797 */ if (fZ) goto L_005bd797;
L_005bd759:; BB(0x005bd759);
    /* 005bd759: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd75c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005bd75f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd762: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005bd765: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd767: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bd76au); call_ind(t); }
    /* 005bd76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd76d: cmp dword ptr [ecx + 0xac], 2 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd774: jge 0x5bd795 */ if ((fS==fO)) goto L_005bd795;
L_005bd776:; BB(0x005bd776);
    /* 005bd776: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd779: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005bd77f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bd782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd786: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bd78bu); f_005bd45e();
    /* 005bd78b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd78d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd790: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5bd795u); f_005bd3d2();
L_005bd795:; BB(0x005bd795);
    /* 005bd795: jmp 0x5bd7a1 */ goto L_005bd7a1;
L_005bd797:; BB(0x005bd797);
    /* 005bd797: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd799: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd79c: call 0x5bd9bb */ r_esp -= 4; W32(r_esp, 0x5bd7a1u); f_005bd9bb();
L_005bd7a1:; BB(0x005bd7a1);
    /* 005bd7a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd7a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd7a4: ret  */ FN_RET(0x005bd738); r_esp += 4; return;
}

void f_005bd7a5(void) /* FUN_005bd7a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd7a5);
    /* 005bd7a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7a6: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd7a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd7ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7af: cmp dword ptr [eax + 0xac], 2 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd7b6: jne 0x5bd7bd */ if (!fZ) goto L_005bd7bd;
L_005bd7b8:; BB(0x005bd7b8);
    /* 005bd7b8: jmp 0x5bd853 */ goto L_005bd853;
L_005bd7bd:; BB(0x005bd7bd);
    /* 005bd7bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7c0: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd7c7: je 0x5bd83c */ if (fZ) goto L_005bd83c;
L_005bd7c9:; BB(0x005bd7c9);
    /* 005bd7c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7cc: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005bd7cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7d2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005bd7d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd7d7: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bd7dau); call_ind(t); }
    /* 005bd7da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7dd: mov edx, 2 */ r_edx = 0x2u;
    /* 005bd7e2: sub edx, dword ptr [ecx + 0xac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd7e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7eb: cmp dword ptr [eax + 0xa8], edx */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bd7f1: jbe 0x5bd816 */ if ((fC||fZ)) goto L_005bd816;
L_005bd7f3:; BB(0x005bd7f3);
    /* 005bd7f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd7f6: mov edx, 2 */ r_edx = 0x2u;
    /* 005bd7fb: sub edx, dword ptr [ecx + 0xac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd801: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd802: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd805: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5bd80au); f_005bd3d2();
    /* 005bd80a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd80c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd80f: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bd814u); f_005bd45e();
    /* 005bd814: jmp 0x5bd83a */ goto L_005bd83a;
L_005bd816:; BB(0x005bd816);
    /* 005bd816: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd819: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005bd81f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd820: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd823: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bd828u); f_005bd45e();
    /* 005bd828: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd82b: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 005bd831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd832: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd835: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5bd83au); f_005bd3d2();
L_005bd83a:; BB(0x005bd83a);
    /* 005bd83a: jmp 0x5bd853 */ goto L_005bd853;
L_005bd83c:; BB(0x005bd83c);
    /* 005bd83c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd83f: mov edx, 2 */ r_edx = 0x2u;
    /* 005bd844: sub edx, dword ptr [ecx + 0xac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd84a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd84b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd84e: call 0x5bd9bb */ r_esp -= 4; W32(r_esp, 0x5bd853u); f_005bd9bb();
L_005bd853:; BB(0x005bd853);
    /* 005bd853: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd856: ret  */ FN_RET(0x005bd7a5); r_esp += 4; return;
}

void f_005bd857(void) /* FUN_005bd857 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd857);
    /* 005bd857: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd858: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd85a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd85b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd85e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd861: call 0x5bd7a5 */ r_esp -= 4; W32(r_esp, 0x5bd866u); f_005bd7a5();
    /* 005bd866: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd869: call 0x5bd872 */ r_esp -= 4; W32(r_esp, 0x5bd86eu); f_005bd872();
    /* 005bd86e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd871: ret  */ FN_RET(0x005bd857); r_esp += 4; return;
}

void f_005bd872(void) /* FUN_005bd872 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd872);
    /* 005bd872: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd873: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bd879: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd87c: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd883: je 0x5bd8d5 */ if (fZ) goto L_005bd8d5;
L_005bd885:; BB(0x005bd885);
    /* 005bd885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd888: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 005bd892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd895: call 0x5bd324 */ r_esp -= 4; W32(r_esp, 0x5bd89au); f_005bd324();
    /* 005bd89a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd89c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bd89f: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5bd8a4u); f_005bd4a7();
    /* 005bd8a4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8a6: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bd8ac: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bd8af: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bd8b4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd8b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd8b9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5bd8bcu); call_ind(t); }
    /* 005bd8bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8be: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005bd8c4: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005bd8c7: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bd8cd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bd8d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd8d2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bd8d5u); call_ind(t); }
L_005bd8d5:; BB(0x005bd8d5);
    /* 005bd8d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd8d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd8d8: ret  */ FN_RET(0x005bd872); r_esp += 4; return;
}

void f_005bd8d9(void) /* FUN_005bd8d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd8d9);
    /* 005bd8d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8da: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd8dc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd8df: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005bd8e2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bd8e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bd8f0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd8f3: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005bd8f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8fa: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005bd8fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8fe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd901: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5bd906u); f_005bcf6f();
    /* 005bd906: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bd908: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005bd90b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bd90e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bd911: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd914: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005bd91a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd91b: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005bd91e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd91f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd922: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5bd927u); f_005bcf6f();
    /* 005bd927: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bd929: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005bd92c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bd92f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005bd932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd934: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd937: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bd93cu); f_005bd45e();
    /* 005bd93c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd93e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd941: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5bd946u); f_005bd4a7();
    /* 005bd946: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd949: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005bd94f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd950: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd953: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5bd958u); f_005bd3d2();
    /* 005bd958: cmp dword ptr [ebp - 0x18], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd95f: jl 0x5bd96f */ if ((fS!=fO)) goto L_005bd96f;
L_005bd961:; BB(0x005bd961);
    /* 005bd961: mov dword ptr [ebp - 0x18], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe8u), 0x3b9aca00u);
    /* 005bd968: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005bd96f:; BB(0x005bd96f);
    /* 005bd96f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd972: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005bd975: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd978: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005bd97b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd97d: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5bd980u); call_ind(t); }
    /* 005bd980: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd983: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005bd986: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd989: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bd98c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd98e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5bd991u); call_ind(t); }
    /* 005bd991: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005bd994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd995: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005bd998: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd999: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005bd99c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd99d: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x5bd9a2u); f_00429a59();
    /* 005bd9a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd9a5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005bd9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9a9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bd9ac: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bd9af: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bd9b2: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5bd9b7u); f_004267ae();
    /* 005bd9b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd9b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd9ba: ret  */ FN_RET(0x005bd8d9); r_esp += 4; return;
}

void f_005bd9bb(void) /* FUN_005bd9bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd9bb);
    /* 005bd9bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd9be: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd9c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005bd9c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd9c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9c8: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005bd9cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd9cf: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5bd9d4u); f_005bcf6f();
    /* 005bd9d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd9d6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005bd9d9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bd9dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bd9df: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005bd9e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd9e6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bd9e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bd9ec: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x5bd9f1u); f_004267fb();
    /* 005bd9f1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005bd9f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9f5: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005bd9f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9f9: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x5bd9feu); f_00600940();
    /* 005bd9fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bda01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bda03: je 0x5bda33 */ if (fZ) goto L_005bda33;
L_005bda05:; BB(0x005bda05);
    /* 005bda05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bda08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bda09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bda0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bda0d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda10: call 0x5bd13a */ r_esp -= 4; W32(r_esp, 0x5bda15u); f_005bd13a();
    /* 005bda15: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005bda18: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bda1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bda1c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005bda1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bda20: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda23: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5bda28u); f_005bcf6f();
    /* 005bda28: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bda2a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005bda2d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bda30: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005bda33:; BB(0x005bda33);
    /* 005bda33: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda36: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005bda3c: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bda3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bda40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda43: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bda48u); f_005bd45e();
    /* 005bda48: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda4b: cmp dword ptr [edx + 0xac], 0 */ {  u32 a = R32((u32)(r_edx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bda52: je 0x5bda76 */ if (fZ) goto L_005bda76;
L_005bda54:; BB(0x005bda54);
    /* 005bda54: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda57: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005bda5a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda5d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005bda60: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bda62: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bda65u); call_ind(t); }
    /* 005bda65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda68: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bda6b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda6e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bda71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bda73: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5bda76u); call_ind(t); }
L_005bda76:; BB(0x005bda76);
    /* 005bda76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bda79: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bda7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bda7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bda82: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bda85: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bda88: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005bda8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bda8c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bda8f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bda92: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005bda95: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5bda9au); f_004267ae();
    /* 005bda9a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bda9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bda9d: ret 4 */ FN_RET(0x005bd9bb); r_esp += 8; return;
}

void f_005bdaa0(void) /* FUN_005bdaa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdaa0);
    /* 005bdaa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdaa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdaa3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdaa6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bdaa9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bdab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bdab7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005bdaba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdabb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdabe: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bdac1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bdac4: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x5bdac9u); f_004267fb();
    /* 005bdac9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdacc: cmp dword ptr [eax + 0xa4], 2 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdad3: jle 0x5bdaec */ if ((fZ||fS!=fO)) goto L_005bdaec;
L_005bdad5:; BB(0x005bdad5);
    /* 005bdad5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdad8: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005bdade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdadf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdae2: call 0x5bdb52 */ r_esp -= 4; W32(r_esp, 0x5bdae7u); f_005bdb52();
    /* 005bdae7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdaea: jl 0x5bdb15 */ if ((fS!=fO)) goto L_005bdb15;
L_005bdaec:; BB(0x005bdaec);
    /* 005bdaec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdaef: cmp dword ptr [eax + 0xa4], 2 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdaf6: jg 0x5bdb4e */ if ((!fZ&&fS==fO)) goto L_005bdb4e;
L_005bdaf8:; BB(0x005bdaf8);
    /* 005bdaf8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdafc: jne 0x5bdb4e */ if (!fZ) goto L_005bdb4e;
L_005bdafe:; BB(0x005bdafe);
    /* 005bdafe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb01: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005bdb07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb0b: call 0x5bdbdf */ r_esp -= 4; W32(r_esp, 0x5bdb10u); f_005bdbdf();
    /* 005bdb10: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdb13: jge 0x5bdb4e */ if ((fS==fO)) goto L_005bdb4e;
L_005bdb15:; BB(0x005bdb15);
    /* 005bdb15: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb18: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb1f: jne 0x5bdb4e */ if (!fZ) goto L_005bdb4e;
L_005bdb21:; BB(0x005bdb21);
    /* 005bdb21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb24: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb2b: jne 0x5bdb4e */ if (!fZ) goto L_005bdb4e;
L_005bdb2d:; BB(0x005bdb2d);
    /* 005bdb2d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb30: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bdb33: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb3a: jne 0x5bdb4e */ if (!fZ) goto L_005bdb4e;
L_005bdb3c:; BB(0x005bdb3c);
    /* 005bdb3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdb3f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005bdb42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb43: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005bdb49: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x5bdb4eu); f_00449908();
L_005bdb4e:; BB(0x005bdb4e);
    /* 005bdb4e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdb50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdb51: ret  */ FN_RET(0x005bdaa0); r_esp += 4; return;
}

void f_005bdb52(void) /* FUN_005bdb52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdb52);
    /* 005bdb52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb53: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdb55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdb58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bdb5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bdb5e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bdb61: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bdb65: ja 0x5bdbab */ if ((!fC&&!fZ)) goto L_005bdbab;
L_005bdb67:; BB(0x005bdb67);
    /* 005bdb67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdb6a: jmp dword ptr [ecx*4 + 0x5bdbb3] */ { u32 t = R32((u32)(r_ecx*4+0x5bdbb3u)); switch (t) { case 0x5bdb71u: goto L_005bdb71; case 0x5bdbabu: goto L_005bdbab; case 0x5bdb73u: goto L_005bdb73; case 0x5bdb7au: goto L_005bdb7a; case 0x5bdb81u: goto L_005bdb81; case 0x5bdb88u: goto L_005bdb88; case 0x5bdb8fu: goto L_005bdb8f; case 0x5bdb96u: goto L_005bdb96; case 0x5bdb9du: goto L_005bdb9d; case 0x5bdba4u: goto L_005bdba4; default: UNSUP(0x005bdb6a, "jump table entry is not a known target"); } }
L_005bdb71:; BB(0x005bdb71);
    /* 005bdb71: jmp 0x5bdbab */ goto L_005bdbab;
L_005bdb73:; BB(0x005bdb73);
    /* 005bdb73: mov eax, 1 */ r_eax = 0x1u;
    /* 005bdb78: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb7a:; BB(0x005bdb7a);
    /* 005bdb7a: mov eax, 5 */ r_eax = 0x5u;
    /* 005bdb7f: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb81:; BB(0x005bdb81);
    /* 005bdb81: mov eax, 0xa */ r_eax = 0xau;
    /* 005bdb86: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb88:; BB(0x005bdb88);
    /* 005bdb88: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005bdb8d: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb8f:; BB(0x005bdb8f);
    /* 005bdb8f: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005bdb94: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb96:; BB(0x005bdb96);
    /* 005bdb96: mov eax, 0x64 */ r_eax = 0x64u;
    /* 005bdb9b: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdb9d:; BB(0x005bdb9d);
    /* 005bdb9d: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005bdba2: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdba4:; BB(0x005bdba4);
    /* 005bdba4: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005bdba9: jmp 0x5bdbad */ goto L_005bdbad;
L_005bdbab:; BB(0x005bdbab);
    /* 005bdbab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bdbad:; BB(0x005bdbad);
    /* 005bdbad: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdbaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdbb0: ret 4 */ FN_RET(0x005bdb52); r_esp += 8; return;
}

void f_005bdbdf(void) /* FUN_005bdbdf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdbdf);
    /* 005bdbdf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdbe0: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdbe2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdbe5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bdbe8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bdbeb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bdbee: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdbf2: je 0x5bdc02 */ if (fZ) goto L_005bdc02;
L_005bdbf4:; BB(0x005bdbf4);
    /* 005bdbf4: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdbf8: je 0x5bdc09 */ if (fZ) goto L_005bdc09;
L_005bdbfa:; BB(0x005bdbfa);
    /* 005bdbfa: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdbfe: je 0x5bdc10 */ if (fZ) goto L_005bdc10;
L_005bdc00:; BB(0x005bdc00);
    /* 005bdc00: jmp 0x5bdc17 */ goto L_005bdc17;
L_005bdc02:; BB(0x005bdc02);
    /* 005bdc02: mov eax, 5 */ r_eax = 0x5u;
    /* 005bdc07: jmp 0x5bdc19 */ goto L_005bdc19;
L_005bdc09:; BB(0x005bdc09);
    /* 005bdc09: mov eax, 0xa */ r_eax = 0xau;
    /* 005bdc0e: jmp 0x5bdc19 */ goto L_005bdc19;
L_005bdc10:; BB(0x005bdc10);
    /* 005bdc10: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005bdc15: jmp 0x5bdc19 */ goto L_005bdc19;
L_005bdc17:; BB(0x005bdc17);
    /* 005bdc17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bdc19:; BB(0x005bdc19);
    /* 005bdc19: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdc1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdc1c: ret 4 */ FN_RET(0x005bdbdf); r_esp += 8; return;
}

void f_005bdc1f(void) /* FUN_005bdc1f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdc1f);
    /* 005bdc1f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc20: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdc22: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdc25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bdc28: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 005bdc2e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005bdc35: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bdc3c: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc41: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdc46u); f_0060ee31();
    /* 005bdc46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdc49: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bdc4c: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005bdc52: jmp 0x5bdc60 */ goto L_005bdc60;
L_005bdc54:; BB(0x005bdc54);
    /* 005bdc54: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005bdc58: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bdc5c: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005bdc60:; BB(0x005bdc60);
    /* 005bdc60: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005bdc64: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdc67: jge 0x5bdc99 */ if ((fS==fO)) goto L_005bdc99;
L_005bdc69:; BB(0x005bdc69);
    /* 005bdc69: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005bdc6d: fld qword ptr [0x639c80] */ FPUSH(R_F64((u32)(0x639c80u)));
    /* 005bdc73: fmul qword ptr [edx*8 + 0x697ea0] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x697ea0u));
    /* 005bdc7a: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 005bdc7d: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005bdc80: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 005bdc83: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 005bdc86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bdc88: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bdc8b: je 0x5bdc97 */ if (fZ) goto L_005bdc97;
L_005bdc8d:; BB(0x005bdc8d);
    /* 005bdc8d: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005bdc91: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005bdc95: jmp 0x5bdc99 */ goto L_005bdc99;
L_005bdc97:; BB(0x005bdc97);
    /* 005bdc97: jmp 0x5bdc54 */ goto L_005bdc54;
L_005bdc99:; BB(0x005bdc99);
    /* 005bdc99: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bdc9d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdca0: jne 0x5bdcac */ if (!fZ) goto L_005bdcac;
L_005bdca2:; BB(0x005bdca2);
    /* 005bdca2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdca5: call 0x5bdef9 */ r_esp -= 4; W32(r_esp, 0x5bdcaau); f_005bdef9();
    /* 005bdcaa: jmp 0x5bdcb9 */ goto L_005bdcb9;
L_005bdcac:; BB(0x005bdcac);
    /* 005bdcac: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bdcb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcb1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdcb4: call 0x5be099 */ r_esp -= 4; W32(r_esp, 0x5bdcb9u); f_005be099();
L_005bdcb9:; BB(0x005bdcb9);
    /* 005bdcb9: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdcbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdcbc: ret  */ FN_RET(0x005bdc1f); r_esp += 4; return;
}

void f_005bdcbd(void) /* FUN_005bdcbd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdcbd);
    /* 005bdcbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcbe: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdcc0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdcc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bdcc6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005bdccd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdcd0: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005bdcd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bdcd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcdb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdcde: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5bdce3u); f_005bd45e();
    /* 005bdce3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdce6: call 0x5be1a2 */ r_esp -= 4; W32(r_esp, 0x5bdcebu); f_005be1a2();
    /* 005bdceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdced: jne 0x5bdd03 */ if (!fZ) goto L_005bdd03;
L_005bdcef:; BB(0x005bdcef);
    /* 005bdcef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdcf2: call 0x5bd6e5 */ r_esp -= 4; W32(r_esp, 0x5bdcf7u); f_005bd6e5();
    /* 005bdcf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdcfc: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5bdd01u); f_005bd4a7();
    /* 005bdd01: jmp 0x5bdd7f */ goto L_005bdd7f;
L_005bdd03:; BB(0x005bdd03);
    /* 005bdd03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd06: call 0x5be125 */ r_esp -= 4; W32(r_esp, 0x5bdd0bu); f_005be125();
    /* 005bdd0b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bdd0e: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdd12: jge 0x5bdd4b */ if ((fS==fO)) goto L_005bdd4b;
L_005bdd14:; BB(0x005bdd14);
    /* 005bdd14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdd17: mov eax, dword ptr [edx*4 + 0x697e68] */ r_eax = R32((u32)(r_edx*4+0x697e68u));
    /* 005bdd1e: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bdd22: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bdd25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd28: call 0x5bd581 */ r_esp -= 4; W32(r_esp, 0x5bdd2du); f_005bd581();
    /* 005bdd2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd30: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd37: je 0x5bdd4b */ if (fZ) goto L_005bdd4b;
L_005bdd39:; BB(0x005bdd39);
    /* 005bdd39: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd3d: je 0x5bdd4b */ if (fZ) goto L_005bdd4b;
L_005bdd3f:; BB(0x005bdd3f);
    /* 005bdd3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdd42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd46: call 0x5be45c */ r_esp -= 4; W32(r_esp, 0x5bdd4bu); f_005be45c();
L_005bdd4b:; BB(0x005bdd4b);
    /* 005bdd4b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdd4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd52: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5bdd57u); f_005bd4a7();
    /* 005bdd57: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd5b: jne 0x5bdd71 */ if (!fZ) goto L_005bdd71;
L_005bdd5d:; BB(0x005bdd5d);
    /* 005bdd5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd60: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd67: jne 0x5bdd71 */ if (!fZ) goto L_005bdd71;
L_005bdd69:; BB(0x005bdd69);
    /* 005bdd69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd6c: call 0x5be36a */ r_esp -= 4; W32(r_esp, 0x5bdd71u); f_005be36a();
L_005bdd71:; BB(0x005bdd71);
    /* 005bdd71: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd75: jne 0x5bdd7f */ if (!fZ) goto L_005bdd7f;
L_005bdd77:; BB(0x005bdd77);
    /* 005bdd77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd7a: call 0x5be6df */ r_esp -= 4; W32(r_esp, 0x5bdd7fu); f_005be6df();
L_005bdd7f:; BB(0x005bdd7f);
    /* 005bdd7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd82: cmp dword ptr [edx + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd89: jne 0x5bddaf */ if (!fZ) goto L_005bddaf;
L_005bdd8b:; BB(0x005bdd8b);
    /* 005bdd8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd8e: call 0x5bd639 */ r_esp -= 4; W32(r_esp, 0x5bdd93u); f_005bd639();
    /* 005bdd93: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdd96: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdd9d: jne 0x5bddaf */ if (!fZ) goto L_005bddaf;
L_005bdd9f:; BB(0x005bdd9f);
    /* 005bdd9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdda2: call 0x5be6df */ r_esp -= 4; W32(r_esp, 0x5bdda7u); f_005be6df();
    /* 005bdda7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bddaa: call 0x5bd68f */ r_esp -= 4; W32(r_esp, 0x5bddafu); f_005bd68f();
L_005bddaf:; BB(0x005bddaf);
    /* 005bddaf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bddb2: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005bddb5: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bddbc: je 0x5bddcb */ if (fZ) goto L_005bddcb;
L_005bddbe:; BB(0x005bddbe);
    /* 005bddbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bddc1: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
L_005bddcb:; BB(0x005bddcb);
    /* 005bddcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bddcd: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005bddd3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005bddd6: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bdddc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bdddf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bdde1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bdde4u); call_ind(t); }
    /* 005bdde4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdde6: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bddeb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bddee: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bddf4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bddf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bddf9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bddfcu); call_ind(t); }
    /* 005bddfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005bddfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bddff: ret  */ FN_RET(0x005bdcbd); r_esp += 4; return;
}

void f_005bde00(void) /* FUN_005bde00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bde00);
    /* 005bde00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bde01: mov ebp, esp */ r_ebp = r_esp;
    /* 005bde03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bde06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bde09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bde10: jmp 0x5bde1b */ goto L_005bde1b;
L_005bde12:; BB(0x005bde12);
    /* 005bde12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bde15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bde18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bde1b:; BB(0x005bde1b);
    /* 005bde1b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bde1f: jge 0x5bde35 */ if ((fS==fO)) goto L_005bde35;
L_005bde21:; BB(0x005bde21);
    /* 005bde21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bde24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde27: cmp dword ptr [edx + ecx*4 + 0xc4], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bde2f: jne 0x5bde33 */ if (!fZ) goto L_005bde33;
L_005bde31:; BB(0x005bde31);
    /* 005bde31: jmp 0x5bde35 */ goto L_005bde35;
L_005bde33:; BB(0x005bde33);
    /* 005bde33: jmp 0x5bde12 */ goto L_005bde12;
L_005bde35:; BB(0x005bde35);
    /* 005bde35: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bde39: jne 0x5bde40 */ if (!fZ) goto L_005bde40;
L_005bde3b:; BB(0x005bde3b);
    /* 005bde3b: jmp 0x5bdef5 */ goto L_005bdef5;
L_005bde40:; BB(0x005bde40);
    /* 005bde40: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bde44: jne 0x5bde56 */ if (!fZ) goto L_005bde56;
L_005bde46:; BB(0x005bde46);
    /* 005bde46: mov eax, dword ptr [0x697e90] */ r_eax = R32((u32)(0x697e90u));
    /* 005bde4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bde4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde4f: call 0x5bd50f */ r_esp -= 4; W32(r_esp, 0x5bde54u); f_005bd50f();
    /* 005bde54: jmp 0x5bde92 */ goto L_005bde92;
L_005bde56:; BB(0x005bde56);
    /* 005bde56: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bde5a: jge 0x5bde6d */ if ((fS==fO)) goto L_005bde6d;
L_005bde5c:; BB(0x005bde5c);
    /* 005bde5c: mov ecx, dword ptr [0x697e94] */ r_ecx = R32((u32)(0x697e94u));
    /* 005bde62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bde63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde66: call 0x5bd50f */ r_esp -= 4; W32(r_esp, 0x5bde6bu); f_005bd50f();
    /* 005bde6b: jmp 0x5bde92 */ goto L_005bde92;
L_005bde6d:; BB(0x005bde6d);
    /* 005bde6d: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bde71: jge 0x5bde84 */ if ((fS==fO)) goto L_005bde84;
L_005bde73:; BB(0x005bde73);
    /* 005bde73: mov edx, dword ptr [0x697e98] */ r_edx = R32((u32)(0x697e98u));
    /* 005bde79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bde7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde7d: call 0x5bd50f */ r_esp -= 4; W32(r_esp, 0x5bde82u); f_005bd50f();
    /* 005bde82: jmp 0x5bde92 */ goto L_005bde92;
L_005bde84:; BB(0x005bde84);
    /* 005bde84: mov eax, dword ptr [0x697e9c] */ r_eax = R32((u32)(0x697e9cu));
    /* 005bde89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bde8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde8d: call 0x5bd50f */ r_esp -= 4; W32(r_esp, 0x5bde92u); f_005bd50f();
L_005bde92:; BB(0x005bde92);
    /* 005bde92: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bde94: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bde99u); f_0048ab58();
    /* 005bde99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bde9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bde9f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdea3: je 0x5bdeb8 */ if (fZ) goto L_005bdeb8;
L_005bdea5:; BB(0x005bdea5);
    /* 005bdea5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdea7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdeab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdeae: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x5bdeb3u); f_005d7c5c();
    /* 005bdeb3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bdeb6: jmp 0x5bdebf */ goto L_005bdebf;
L_005bdeb8:; BB(0x005bdeb8);
    /* 005bdeb8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005bdebf:; BB(0x005bdebf);
    /* 005bdebf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdec3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdec6: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005bdec9: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bdeceu); f_005e4060();
    /* 005bdece: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bded4: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5bded9u); f_0045cb85();
    /* 005bded9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdedb: je 0x5bdef5 */ if (fZ) goto L_005bdef5;
L_005bdedd:; BB(0x005bdedd);
    /* 005bdedd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdedf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdee1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdee3: push 0x1926a */ { u32 v = 0x1926au; r_esp -= 4; W32(r_esp, v); }
    /* 005bdee8: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bdeed: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005bdef0: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bdef5u); f_005e8389();
L_005bdef5:; BB(0x005bdef5);
    /* 005bdef5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdef8: ret  */ FN_RET(0x005bde00); r_esp += 4; return;
}

void f_005bdef9(void) /* FUN_005bdef9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdef9);
    /* 005bdef9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdefa: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdefc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdefd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bdf00: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf02: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdf07u); f_0060ee31();
    /* 005bdf07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdf0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf0d: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 005bdf13: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf15: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdf1au); f_0060ee31();
    /* 005bdf1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdf1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf20: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 005bdf26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf29: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005bdf2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf33: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005bdf39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf3d: call 0x5be178 */ r_esp -= 4; W32(r_esp, 0x5bdf42u); f_005be178();
    /* 005bdf42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdf44: je 0x5bdf7c */ if (fZ) goto L_005bdf7c;
L_005bdf46:; BB(0x005bdf46);
    /* 005bdf46: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf48: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdf4du); f_0060ee31();
    /* 005bdf4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdf50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf53: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 005bdf59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf5c: cmp dword ptr [edx + 0xbc], 1 */ {  u32 a = R32((u32)(r_edx+0xbcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdf63: jl 0x5bdf7a */ if ((fS!=fO)) goto L_005bdf7a;
L_005bdf65:; BB(0x005bdf65);
    /* 005bdf65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf68: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005bdf6e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdf71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf74: mov dword ptr [edx + 0xbc], ecx */ W32((u32)(r_edx+0xbcu), r_ecx);
L_005bdf7a:; BB(0x005bdf7a);
    /* 005bdf7a: jmp 0x5bdf8f */ goto L_005bdf8f;
L_005bdf7c:; BB(0x005bdf7c);
    /* 005bdf7c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf7e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdf83u); f_0060ee31();
    /* 005bdf83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdf86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf89: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
L_005bdf8f:; BB(0x005bdf8f);
    /* 005bdf8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf92: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005bdf98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdf9c: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 005bdfa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdfa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfa6: call 0x5be178 */ r_esp -= 4; W32(r_esp, 0x5bdfabu); f_005be178();
    /* 005bdfab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdfad: je 0x5be082 */ if (fZ) goto L_005be082;
L_005bdfb3:; BB(0x005bdfb3);
    /* 005bdfb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfb6: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005bdfbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdfbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfc0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005bdfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdfc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfca: call 0x5be178 */ r_esp -= 4; W32(r_esp, 0x5bdfcfu); f_005be178();
    /* 005bdfcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdfd1: je 0x5be082 */ if (fZ) goto L_005be082;
L_005bdfd7:; BB(0x005bdfd7);
    /* 005bdfd7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdfd9: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bdfdeu); f_0060ee31();
    /* 005bdfde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdfe1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfe4: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 005bdfea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdfed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bdff0: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005bdff6: cmp ecx, dword ptr [eax + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdffc: jl 0x5be036 */ if ((fS!=fO)) goto L_005be036;
L_005bdffe:; BB(0x005bdffe);
    /* 005bdffe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be001: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005be007: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be00a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be00d: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 005be013: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be016: cmp dword ptr [edx + 0xc0], 1 */ {  u32 a = R32((u32)(r_edx+0xc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be01d: jl 0x5be034 */ if ((fS!=fO)) goto L_005be034;
L_005be01f:; BB(0x005be01f);
    /* 005be01f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be022: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005be028: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be02b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be02e: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
L_005be034:; BB(0x005be034);
    /* 005be034: jmp 0x5be080 */ goto L_005be080;
L_005be036:; BB(0x005be036);
    /* 005be036: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be039: cmp dword ptr [eax + 0xc0], 1 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be040: jl 0x5be080 */ if ((fS!=fO)) goto L_005be080;
L_005be042:; BB(0x005be042);
    /* 005be042: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be045: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 005be04b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be04e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be051: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 005be057: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be05a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be05d: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 005be063: cmp eax, dword ptr [edx + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be069: jl 0x5be080 */ if ((fS!=fO)) goto L_005be080;
L_005be06b:; BB(0x005be06b);
    /* 005be06b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be06e: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 005be074: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be077: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be07a: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
L_005be080:; BB(0x005be080);
    /* 005be080: jmp 0x5be095 */ goto L_005be095;
L_005be082:; BB(0x005be082);
    /* 005be082: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005be084: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be089u); f_0060ee31();
    /* 005be089: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be08c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be08f: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
L_005be095:; BB(0x005be095);
    /* 005be095: mov esp, ebp */ r_esp = r_ebp;
    /* 005be097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be098: ret  */ FN_RET(0x005bdef9); r_esp += 4; return;
}

void f_005be099(void) /* FUN_005be099 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be099);
    /* 005be099: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be09a: mov ebp, esp */ r_ebp = r_esp;
    /* 005be09c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be09f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005be0a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005be0a4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be0a9u); f_0060ee31();
    /* 005be0a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be0ac: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 005be0b0: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005be0b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be0b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005be0ba: mov dword ptr [ecx + eax*4 + 0xb4], edx */ W32((u32)(r_ecx+r_eax*4+0xb4u), r_edx);
    /* 005be0c1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005be0c7: jmp 0x5be0d5 */ goto L_005be0d5;
L_005be0c9:; BB(0x005be0c9);
    /* 005be0c9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005be0cd: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005be0d1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005be0d5:; BB(0x005be0d5);
    /* 005be0d5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be0d9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be0dc: jge 0x5be11f */ if ((fS==fO)) goto L_005be11f;
L_005be0de:; BB(0x005be0de);
    /* 005be0de: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be0e2: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005be0e6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0e8: je 0x5be11d */ if (fZ) goto L_005be11d;
L_005be0ea:; BB(0x005be0ea);
    /* 005be0ea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005be0ec: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be0f1u); f_0060ee31();
    /* 005be0f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0f6: jne 0x5be10c */ if (!fZ) goto L_005be10c;
L_005be0f8:; BB(0x005be0f8);
    /* 005be0f8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be0fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be0ff: mov dword ptr [edx + ecx*4 + 0xb4], 1 */ W32((u32)(r_edx+r_ecx*4+0xb4u), 0x1u);
    /* 005be10a: jmp 0x5be11d */ goto L_005be11d;
L_005be10c:; BB(0x005be10c);
    /* 005be10c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be113: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005be116: mov dword ptr [ecx + eax*4 + 0xb4], edx */ W32((u32)(r_ecx+r_eax*4+0xb4u), r_edx);
L_005be11d:; BB(0x005be11d);
    /* 005be11d: jmp 0x5be0c9 */ goto L_005be0c9;
L_005be11f:; BB(0x005be11f);
    /* 005be11f: mov esp, ebp */ r_esp = r_ebp;
    /* 005be121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be122: ret 4 */ FN_RET(0x005be099); r_esp += 8; return;
}

void f_005be125(void) /* FUN_005be125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be125);
    /* 005be125: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be126: mov ebp, esp */ r_ebp = r_esp;
    /* 005be128: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be12b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005be12e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005be135: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005be13c: jmp 0x5be147 */ goto L_005be147;
L_005be13e:; BB(0x005be13e);
    /* 005be13e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be141: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be144: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005be147:; BB(0x005be147);
    /* 005be147: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be14b: jge 0x5be171 */ if ((fS==fO)) goto L_005be171;
L_005be14d:; BB(0x005be14d);
    /* 005be14d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be150: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be153: cmp dword ptr [edx + ecx*4 + 0xb4], 1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be15b: je 0x5be16f */ if (fZ) goto L_005be16f;
L_005be15d:; BB(0x005be15d);
    /* 005be15d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be160: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be163: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 005be16a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005be16d: jmp 0x5be171 */ goto L_005be171;
L_005be16f:; BB(0x005be16f);
    /* 005be16f: jmp 0x5be13e */ goto L_005be13e;
L_005be171:; BB(0x005be171);
    /* 005be171: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be174: mov esp, ebp */ r_esp = r_ebp;
    /* 005be176: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be177: ret  */ FN_RET(0x005be125); r_esp += 4; return;
}

void f_005be178(void) /* FUN_005be178 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be178);
    /* 005be178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be179: mov ebp, esp */ r_ebp = r_esp;
    /* 005be17b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be17c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be17f: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be183: je 0x5be193 */ if (fZ) goto L_005be193;
L_005be185:; BB(0x005be185);
    /* 005be185: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be189: je 0x5be193 */ if (fZ) goto L_005be193;
L_005be18b:; BB(0x005be18b);
    /* 005be18b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be18e: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be191: jne 0x5be19a */ if (!fZ) goto L_005be19a;
L_005be193:; BB(0x005be193);
    /* 005be193: mov eax, 1 */ r_eax = 0x1u;
    /* 005be198: jmp 0x5be19c */ goto L_005be19c;
L_005be19a:; BB(0x005be19a);
    /* 005be19a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005be19c:; BB(0x005be19c);
    /* 005be19c: mov esp, ebp */ r_esp = r_ebp;
    /* 005be19e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be19f: ret 8 */ FN_RET(0x005be178); r_esp += 12; return;
}

void f_005be1a2(void) /* FUN_005be1a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be1a2);
    /* 005be1a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be1a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005be1a5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be1a8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005be1ab: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005be1b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005be1b9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005be1c0: jmp 0x5be1cb */ goto L_005be1cb;
L_005be1c2:; BB(0x005be1c2);
    /* 005be1c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be1c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be1c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005be1cb:; BB(0x005be1cb);
    /* 005be1cb: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be1cf: jge 0x5be21b */ if ((fS==fO)) goto L_005be21b;
L_005be1d1:; BB(0x005be1d1);
    /* 005be1d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be1d4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005be1d7: jmp 0x5be1e2 */ goto L_005be1e2;
L_005be1d9:; BB(0x005be1d9);
    /* 005be1d9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be1dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be1df: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005be1e2:; BB(0x005be1e2);
    /* 005be1e2: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be1e6: jge 0x5be219 */ if ((fS==fO)) goto L_005be219;
L_005be1e8:; BB(0x005be1e8);
    /* 005be1e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be1eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be1ee: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 005be1f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be1f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be1f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be1fc: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 005be203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be204: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be207: call 0x5be178 */ r_esp -= 4; W32(r_esp, 0x5be20cu); f_005be178();
    /* 005be20c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be20e: jne 0x5be217 */ if (!fZ) goto L_005be217;
L_005be210:; BB(0x005be210);
    /* 005be210: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005be217:; BB(0x005be217);
    /* 005be217: jmp 0x5be1d9 */ goto L_005be1d9;
L_005be219:; BB(0x005be219);
    /* 005be219: jmp 0x5be1c2 */ goto L_005be1c2;
L_005be21b:; BB(0x005be21b);
    /* 005be21b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be21e: mov esp, ebp */ r_esp = r_ebp;
    /* 005be220: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be221: ret  */ FN_RET(0x005be1a2); r_esp += 4; return;
}

void f_005be222(void) /* FUN_005be222 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be222);
    /* 005be222: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be223: mov ebp, esp */ r_ebp = r_esp;
    /* 005be225: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be228: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be22b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be22e: call 0x5be1a2 */ r_esp -= 4; W32(r_esp, 0x5be233u); f_005be1a2();
    /* 005be233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be235: je 0x5be33e */ if (fZ) goto L_005be33e;
L_005be23b:; BB(0x005be23b);
    /* 005be23b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be23e: call 0x5be125 */ r_esp -= 4; W32(r_esp, 0x5be243u); f_005be125();
    /* 005be243: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005be246: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be24a: ja 0x5be33e */ if ((!fC&&!fZ)) goto L_005be33e;
L_005be250:; BB(0x005be250);
    /* 005be250: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be253: jmp dword ptr [eax*4 + 0x5be342] */ { u32 t = R32((u32)(r_eax*4+0x5be342u)); switch (t) { case 0x5be2dau: goto L_005be2da; case 0x5be2bcu: goto L_005be2bc; case 0x5be25au: goto L_005be25a; case 0x5be33eu: goto L_005be33e; case 0x5be27bu: goto L_005be27b; case 0x5be29cu: goto L_005be29c; case 0x5be2f8u: goto L_005be2f8; case 0x5be322u: goto L_005be322; default: UNSUP(0x005be253, "jump table entry is not a known target"); } }
L_005be25a:; BB(0x005be25a);
    /* 005be25a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be25c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be25e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be260: push 0x19267 */ { u32 v = 0x19267u; r_esp -= 4; W32(r_esp, v); }
    /* 005be265: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be26b: mov ecx, dword ptr [ecx + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+0x1cb0u));
    /* 005be271: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be276u); f_005e8389();
    /* 005be276: jmp 0x5be33e */ goto L_005be33e;
L_005be27b:; BB(0x005be27b);
    /* 005be27b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be27d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be27f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be281: push 0x1925e */ { u32 v = 0x1925eu; r_esp -= 4; W32(r_esp, v); }
    /* 005be286: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be28c: mov ecx, dword ptr [edx + 0x1cb0] */ r_ecx = R32((u32)(r_edx+0x1cb0u));
    /* 005be292: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be297u); f_005e8389();
    /* 005be297: jmp 0x5be33e */ goto L_005be33e;
L_005be29c:; BB(0x005be29c);
    /* 005be29c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be29e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be2a2: push 0x19260 */ { u32 v = 0x19260u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2a7: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be2ac: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 005be2b2: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be2b7u); f_005e8389();
    /* 005be2b7: jmp 0x5be33e */ goto L_005be33e;
L_005be2bc:; BB(0x005be2bc);
    /* 005be2bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be2be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be2c2: push 0x19261 */ { u32 v = 0x19261u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2c7: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be2cd: mov ecx, dword ptr [ecx + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+0x1cb0u));
    /* 005be2d3: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be2d8u); f_005e8389();
    /* 005be2d8: jmp 0x5be33e */ goto L_005be33e;
L_005be2da:; BB(0x005be2da);
    /* 005be2da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be2dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be2e0: push 0x19269 */ { u32 v = 0x19269u; r_esp -= 4; W32(r_esp, v); }
    /* 005be2e5: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be2eb: mov ecx, dword ptr [edx + 0x1cb0] */ r_ecx = R32((u32)(r_edx+0x1cb0u));
    /* 005be2f1: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be2f6u); f_005e8389();
    /* 005be2f6: jmp 0x5be33e */ goto L_005be33e;
L_005be2f8:; BB(0x005be2f8);
    /* 005be2f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be2fb: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be302: jne 0x5be320 */ if (!fZ) goto L_005be320;
L_005be304:; BB(0x005be304);
    /* 005be304: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be306: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be308: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be30a: push 0x19268 */ { u32 v = 0x19268u; r_esp -= 4; W32(r_esp, v); }
    /* 005be30f: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be315: mov ecx, dword ptr [ecx + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+0x1cb0u));
    /* 005be31b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be320u); f_005e8389();
L_005be320:; BB(0x005be320);
    /* 005be320: jmp 0x5be33e */ goto L_005be33e;
L_005be322:; BB(0x005be322);
    /* 005be322: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be326: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be328: push 0x1926c */ { u32 v = 0x1926cu; r_esp -= 4; W32(r_esp, v); }
    /* 005be32d: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be333: mov ecx, dword ptr [edx + 0x1cb0] */ r_ecx = R32((u32)(r_edx+0x1cb0u));
    /* 005be339: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be33eu); f_005e8389();
L_005be33e:; BB(0x005be33e);
    /* 005be33e: mov esp, ebp */ r_esp = r_ebp;
    /* 005be340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be341: ret  */ FN_RET(0x005be222); r_esp += 4; return;
}

void f_005be36a(void) /* FUN_005be36a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be36a);
    /* 005be36a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be36b: mov ebp, esp */ r_ebp = r_esp;
    /* 005be36d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be370: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005be373: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005be375: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5be37au); f_0048ab58();
    /* 005be37a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be37d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005be380: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be384: je 0x5be39a */ if (fZ) goto L_005be39a;
L_005be386:; BB(0x005be386);
    /* 005be386: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be389: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005be38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be38d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be390: call 0x5bfb96 */ r_esp -= 4; W32(r_esp, 0x5be395u); f_005bfb96();
    /* 005be395: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be398: jmp 0x5be3a1 */ goto L_005be3a1;
L_005be39a:; BB(0x005be39a);
    /* 005be39a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005be3a1:; BB(0x005be3a1);
    /* 005be3a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be3a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be3a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be3a8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005be3ab: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5be3b0u); f_005e40dc();
    /* 005be3b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be3b3: mov dword ptr [ecx + 0xa0], 1 */ W32((u32)(r_ecx+0xa0u), 0x1u);
    /* 005be3bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005be3bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be3c0: ret  */ FN_RET(0x005be36a); r_esp += 4; return;
}

void f_005be3c1(void) /* FUN_005be3c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be3c1);
    /* 005be3c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be3c2: mov ebp, esp */ r_ebp = r_esp;
    /* 005be3c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be3c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be3c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be3ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3cd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005be3d0: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005be3d3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be3d8u); f_005ea1cf();
    /* 005be3d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be3da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3dd: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005be3e0: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005be3e3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be3e8u); f_005ea1cf();
    /* 005be3e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be3ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3ed: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005be3f0: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 005be3f6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be3fbu); f_005ea1cf();
    /* 005be3fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be3fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be400: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005be403: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5be408u); f_005e40dc();
    /* 005be408: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be40e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005be411: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5be416u); f_005e63b4();
    /* 005be416: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be419: jne 0x5be458 */ if (!fZ) goto L_005be458;
L_005be41b:; BB(0x005be41b);
    /* 005be41b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be41e: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 005be428: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005be42a: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be42f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005be432: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be438: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005be43b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be43d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5be440u); call_ind(t); }
    /* 005be440: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be442: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be447: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005be44a: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be450: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005be453: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be455: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5be458u); call_ind(t); }
L_005be458:; BB(0x005be458);
    /* 005be458: mov esp, ebp */ r_esp = r_ebp;
    /* 005be45a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be45b: ret  */ FN_RET(0x005be3c1); r_esp += 4; return;
}

void f_005be45c(void) /* FUN_005be45c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be45c);
    /* 005be45c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be45d: mov ebp, esp */ r_ebp = r_esp;
    /* 005be45f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be462: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be463: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005be466: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005be46c: jmp 0x5be47a */ goto L_005be47a;
L_005be46e:; BB(0x005be46e);
    /* 005be46e: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005be472: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005be476: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005be47a:; BB(0x005be47a);
    /* 005be47a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be47e: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be481: jge 0x5be4b0 */ if ((fS==fO)) goto L_005be4b0;
L_005be483:; BB(0x005be483);
    /* 005be483: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be487: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be48a: mov ecx, dword ptr [eax + edx*4 + 0xc4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 005be491: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be494: jne 0x5be49b */ if (!fZ) goto L_005be49b;
L_005be496:; BB(0x005be496);
    /* 005be496: jmp 0x5be6b8 */ goto L_005be6b8;
L_005be49b:; BB(0x005be49b);
    /* 005be49b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be49f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be4a2: cmp dword ptr [eax + edx*4 + 0xc4], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be4aa: jne 0x5be4ae */ if (!fZ) goto L_005be4ae;
L_005be4ac:; BB(0x005be4ac);
    /* 005be4ac: jmp 0x5be4b0 */ goto L_005be4b0;
L_005be4ae:; BB(0x005be4ae);
    /* 005be4ae: jmp 0x5be46e */ goto L_005be46e;
L_005be4b0:; BB(0x005be4b0);
    /* 005be4b0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be4b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be4b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be4ba: mov dword ptr [edx + ecx*4 + 0xc4], eax */ W32((u32)(r_edx+r_ecx*4+0xc4u), r_eax);
    /* 005be4c1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be4c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be4c7: jne 0x5be4d8 */ if (!fZ) goto L_005be4d8;
L_005be4c9:; BB(0x005be4c9);
    /* 005be4c9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005be4cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be4ce: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005be4d1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be4d6u); f_005ea1cf();
    /* 005be4d6: jmp 0x5be51e */ goto L_005be51e;
L_005be4d8:; BB(0x005be4d8);
    /* 005be4d8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be4dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be4df: jne 0x5be4f0 */ if (!fZ) goto L_005be4f0;
L_005be4e1:; BB(0x005be4e1);
    /* 005be4e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be4e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be4e6: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005be4e9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be4eeu); f_005ea1cf();
    /* 005be4ee: jmp 0x5be51e */ goto L_005be51e;
L_005be4f0:; BB(0x005be4f0);
    /* 005be4f0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be4f4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be4f7: jne 0x5be508 */ if (!fZ) goto L_005be508;
L_005be4f9:; BB(0x005be4f9);
    /* 005be4f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005be4fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be4fe: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005be501: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be506u); f_005ea1cf();
    /* 005be506: jmp 0x5be51e */ goto L_005be51e;
L_005be508:; BB(0x005be508);
    /* 005be508: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be50c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be50f: jne 0x5be51e */ if (!fZ) goto L_005be51e;
L_005be511:; BB(0x005be511);
    /* 005be511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be513: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be516: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005be519: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be51eu); f_005ea1cf();
L_005be51e:; BB(0x005be51e);
    /* 005be51e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be521: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005be524: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be527: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005be52a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be52c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5be52fu); call_ind(t); }
    /* 005be52f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be532: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be535: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be539: ja 0x5be642 */ if ((!fC&&!fZ)) goto L_005be642;
L_005be53f:; BB(0x005be53f);
    /* 005be53f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be542: jmp dword ptr [ecx*4 + 0x5be6bf] */ { u32 t = R32((u32)(r_ecx*4+0x5be6bfu)); switch (t) { case 0x5be624u: goto L_005be624; case 0x5be642u: goto L_005be642; case 0x5be601u: goto L_005be601; case 0x5be5deu: goto L_005be5de; case 0x5be5bbu: goto L_005be5bb; case 0x5be595u: goto L_005be595; case 0x5be56fu: goto L_005be56f; case 0x5be549u: goto L_005be549; default: UNSUP(0x005be542, "jump table entry is not a known target"); } }
L_005be549:; BB(0x005be549);
    /* 005be549: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be54b: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be550u); f_0060ee31();
    /* 005be550: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be553: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be557: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be55b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be55e: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be565: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be56au); f_005ea1cf();
    /* 005be56a: jmp 0x5be642 */ goto L_005be642;
L_005be56f:; BB(0x005be56f);
    /* 005be56f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be571: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be576u); f_0060ee31();
    /* 005be576: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be579: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be57c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be57d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be581: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be584: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005be58b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be590u); f_005ea1cf();
    /* 005be590: jmp 0x5be642 */ goto L_005be642;
L_005be595:; BB(0x005be595);
    /* 005be595: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be597: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be59cu); f_0060ee31();
    /* 005be59c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be59f: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be5a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be5a3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be5a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be5aa: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005be5b1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be5b6u); f_005ea1cf();
    /* 005be5b6: jmp 0x5be642 */ goto L_005be642;
L_005be5bb:; BB(0x005be5bb);
    /* 005be5bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be5bd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be5c2u); f_0060ee31();
    /* 005be5c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be5c5: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be5c9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be5cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be5d0: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be5d7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be5dcu); f_005ea1cf();
    /* 005be5dc: jmp 0x5be642 */ goto L_005be642;
L_005be5de:; BB(0x005be5de);
    /* 005be5de: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be5e0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be5e5u); f_0060ee31();
    /* 005be5e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be5e8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be5eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be5ec: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be5f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be5f3: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005be5fa: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be5ffu); f_005ea1cf();
    /* 005be5ff: jmp 0x5be642 */ goto L_005be642;
L_005be601:; BB(0x005be601);
    /* 005be601: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be603: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be608u); f_0060ee31();
    /* 005be608: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be60b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be60e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be60f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be613: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be616: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005be61d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be622u); f_005ea1cf();
    /* 005be622: jmp 0x5be642 */ goto L_005be642;
L_005be624:; BB(0x005be624);
    /* 005be624: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005be626: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be62bu); f_0060ee31();
    /* 005be62b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be62e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be62f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be633: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be636: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be63d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5be642u); f_005ea1cf();
L_005be642:; BB(0x005be642);
    /* 005be642: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be646: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005be648: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be64du); f_0060ee31();
    /* 005be64d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be650: mov ecx, dword ptr [esi*8 + 0x697e34] */ r_ecx = R32((u32)(r_esi*8+0x697e34u));
    /* 005be657: lea edx, [ecx + eax - 2] */ r_edx = (u32)(r_ecx+r_eax+0xfffffffeu);
    /* 005be65b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be65c: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be660: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005be662: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5be667u); f_0060ee31();
    /* 005be667: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be66a: mov ecx, dword ptr [esi*8 + 0x697e30] */ r_ecx = R32((u32)(r_esi*8+0x697e30u));
    /* 005be671: lea edx, [ecx + eax - 2] */ r_edx = (u32)(r_ecx+r_eax+0xfffffffeu);
    /* 005be675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be676: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be67a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be67d: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005be684: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be688: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be68b: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be692: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005be694: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5be697u); call_ind(t); }
    /* 005be697: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be69b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be69e: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005be6a5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be6a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be6ac: mov eax, dword ptr [edx + eax*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_eax*4+0x80u));
    /* 005be6b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be6b5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5be6b8u); call_ind(t); }
L_005be6b8:; BB(0x005be6b8);
    /* 005be6b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be6b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005be6bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be6bc: ret 4 */ FN_RET(0x005be45c); r_esp += 8; return;
}

void f_005be6df(void) /* FUN_005be6df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be6df);
    /* 005be6df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be6e0: mov ebp, esp */ r_ebp = r_esp;
    /* 005be6e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be6e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005be6e8: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005be6ee: jmp 0x5be6fc */ goto L_005be6fc;
L_005be6f0:; BB(0x005be6f0);
    /* 005be6f0: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005be6f4: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005be6f8: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005be6fc:; BB(0x005be6fc);
    /* 005be6fc: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be700: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be703: jge 0x5be73a */ if ((fS==fO)) goto L_005be73a;
L_005be705:; BB(0x005be705);
    /* 005be705: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be709: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be70c: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be713: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be717: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be71a: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 005be721: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005be723: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5be726u); call_ind(t); }
    /* 005be726: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005be72a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be72d: mov dword ptr [edx + ecx*4 + 0xc4], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0xc4u), 0xffffffffu);
    /* 005be738: jmp 0x5be6f0 */ goto L_005be6f0;
L_005be73a:; BB(0x005be73a);
    /* 005be73a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be73d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005be740: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be743: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005be746: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be748: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5be74bu); call_ind(t); }
    /* 005be74b: mov esp, ebp */ r_esp = r_ebp;
    /* 005be74d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be74e: ret  */ FN_RET(0x005be6df); r_esp += 4; return;
}

void f_005be74f(void) /* FUN_005be74f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be74f);
    /* 005be74f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be750: mov ebp, esp */ r_ebp = r_esp;
    /* 005be752: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be755: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005be758: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be75b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be75f: je 0x5be798 */ if (fZ) goto L_005be798;
L_005be761:; BB(0x005be761);
    /* 005be761: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be764: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005be767: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005be76a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be76d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005be770: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be774: je 0x5be787 */ if (fZ) goto L_005be787;
L_005be776:; BB(0x005be776);
    /* 005be776: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005be778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be77b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005be77d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be780: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5be782u); call_ind(t); }
    /* 005be782: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005be785: jmp 0x5be78e */ goto L_005be78e;
L_005be787:; BB(0x005be787);
    /* 005be787: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005be78e:; BB(0x005be78e);
    /* 005be78e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be791: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_005be798:; BB(0x005be798);
    /* 005be798: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be79b: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be79f: jne 0x5be7d4 */ if (!fZ) goto L_005be7d4;
L_005be7a1:; BB(0x005be7a1);
    /* 005be7a1: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005be7a6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5be7abu); f_0048ab58();
    /* 005be7ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be7ae: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be7b1: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be7b5: je 0x5be7c4 */ if (fZ) goto L_005be7c4;
L_005be7b7:; BB(0x005be7b7);
    /* 005be7b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be7ba: call 0x5bfed1 */ r_esp -= 4; W32(r_esp, 0x5be7bfu); f_005bfed1();
    /* 005be7bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005be7c2: jmp 0x5be7cb */ goto L_005be7cb;
L_005be7c4:; BB(0x005be7c4);
    /* 005be7c4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005be7cb:; BB(0x005be7cb);
    /* 005be7cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be7ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be7d1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005be7d4:; BB(0x005be7d4);
    /* 005be7d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005be7d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be7d7: ret  */ FN_RET(0x005be74f); r_esp += 4; return;
}

void f_005be7d8(void) /* FUN_005be7d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be7d8);
    /* 005be7d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be7d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005be7db: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be7de: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005be7e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be7e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be7e6: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x5be7ebu); f_00425366();
    /* 005be7eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be7ee: mov dword ptr [eax], 0x639c8c */ W32((u32)(r_eax), 0x639c8cu);
    /* 005be7f4: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 005be7f9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5be7feu); f_0048ab58();
    /* 005be7fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be801: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005be804: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be808: je 0x5be81d */ if (fZ) goto L_005be81d;
L_005be80a:; BB(0x005be80a);
    /* 005be80a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be80c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005be80e: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005be810: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be813: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x5be818u); f_0041e7f0();
    /* 005be818: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be81b: jmp 0x5be824 */ goto L_005be824;
L_005be81d:; BB(0x005be81d);
    /* 005be81d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005be824:; BB(0x005be824);
    /* 005be824: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be827: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be82a: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005be82d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be830: mov esp, ebp */ r_esp = r_ebp;
    /* 005be832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be833: ret  */ FN_RET(0x005be7d8); r_esp += 4; return;
}

void f_005be834(void) /* FUN_005be834 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be834);
    /* 005be834: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be835: mov ebp, esp */ r_ebp = r_esp;
    /* 005be837: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be838: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be83b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be83e: mov dword ptr [eax], 0x639c8c */ W32((u32)(r_eax), 0x639c8cu);
    /* 005be844: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be847: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x5be84cu); f_00425495();
    /* 005be84c: mov esp, ebp */ r_esp = r_ebp;
    /* 005be84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be84f: ret  */ FN_RET(0x005be834); r_esp += 4; return;
}

void f_005be850(void) /* FUN_005be850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be850);
    /* 005be850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be851: mov ebp, esp */ r_ebp = r_esp;
    /* 005be853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be857: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be85a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005be85d: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x5be862u); f_00426404();
    /* 005be862: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be865: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be866: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be86c: call 0x447faa */ r_esp -= 4; W32(r_esp, 0x5be871u); f_00447faa();
    /* 005be871: mov esp, ebp */ r_esp = r_ebp;
    /* 005be873: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be874: ret  */ FN_RET(0x005be850); r_esp += 4; return;
}

void f_005be875(void) /* FUN_005be875 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be875);
    /* 005be875: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be876: mov ebp, esp */ r_ebp = r_esp;
    /* 005be878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be879: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be87c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be87f: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5be884u); f_005d5d20();
    /* 005be884: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be887: mov dword ptr [eax], 0x639cbc */ W32((u32)(r_eax), 0x639cbcu);
    /* 005be88d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be890: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005be893: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005be899: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be89c: mov esp, ebp */ r_esp = r_ebp;
    /* 005be89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be89f: ret 4 */ FN_RET(0x005be875); r_esp += 8; return;
}

void f_005be8a2(void) /* FUN_005be8a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be8a2);
    /* 005be8a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be8a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005be8a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be8a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be8a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be8ac: mov dword ptr [eax], 0x639cbc */ W32((u32)(r_eax), 0x639cbcu);
    /* 005be8b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be8b5: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5be8bau); f_005d5dfb();
    /* 005be8ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005be8bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be8bd: ret  */ FN_RET(0x005be8a2); r_esp += 4; return;
}

void f_005be8be(void) /* FUN_005be8be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be8be);
    /* 005be8be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be8bf: mov ebp, esp */ r_ebp = r_esp;
    /* 005be8c1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be8c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be8c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be8cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be8cd: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005be8d2: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be8d7: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 005be8dd: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5be8e2u); f_005e8389();
    /* 005be8e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be8e5: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 005be8eb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005be8ee: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be8f2: ja 0x5be93d */ if ((!fC&&!fZ)) goto L_005be93d;
L_005be8f4:; BB(0x005be8f4);
    /* 005be8f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be8f7: jmp dword ptr [eax*4 + 0x5be941] */ { u32 t = R32((u32)(r_eax*4+0x5be941u)); switch (t) { case 0x5be8feu: goto L_005be8fe; case 0x5be90bu: goto L_005be90b; case 0x5be918u: goto L_005be918; case 0x5be925u: goto L_005be925; case 0x5be932u: goto L_005be932; default: UNSUP(0x005be8f7, "jump table entry is not a known target"); } }
L_005be8fe:; BB(0x005be8fe);
    /* 005be8fe: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005be904: call 0x5bd857 */ r_esp -= 4; W32(r_esp, 0x5be909u); f_005bd857();
    /* 005be909: jmp 0x5be93d */ goto L_005be93d;
L_005be90b:; BB(0x005be90b);
    /* 005be90b: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005be911: call 0x5bd7a5 */ r_esp -= 4; W32(r_esp, 0x5be916u); f_005bd7a5();
    /* 005be916: jmp 0x5be93d */ goto L_005be93d;
L_005be918:; BB(0x005be918);
    /* 005be918: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005be91e: call 0x5bd738 */ r_esp -= 4; W32(r_esp, 0x5be923u); f_005bd738();
    /* 005be923: jmp 0x5be93d */ goto L_005be93d;
L_005be925:; BB(0x005be925);
    /* 005be925: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005be92b: call 0x5bd872 */ r_esp -= 4; W32(r_esp, 0x5be930u); f_005bd872();
    /* 005be930: jmp 0x5be93d */ goto L_005be93d;
L_005be932:; BB(0x005be932);
    /* 005be932: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005be938: call 0x5bd8d9 */ r_esp -= 4; W32(r_esp, 0x5be93du); f_005bd8d9();
L_005be93d:; BB(0x005be93d);
    /* 005be93d: mov esp, ebp */ r_esp = r_ebp;
    /* 005be93f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be940: ret  */ FN_RET(0x005be8be); r_esp += 4; return;
}

void f_005be955(void) /* FUN_005be955 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be955);
    /* 005be955: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be956: mov ebp, esp */ r_ebp = r_esp;
    /* 005be958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be959: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be95c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be95f: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 005be965: mov esp, ebp */ r_esp = r_ebp;
    /* 005be967: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be968: ret  */ FN_RET(0x005be955); r_esp += 4; return;
}

void f_005be969(void) /* FUN_005be969 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be969);
    /* 005be969: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be96a: mov ebp, esp */ r_ebp = r_esp;
    /* 005be96c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be96f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be972: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be975: call 0x5d6575 */ r_esp -= 4; W32(r_esp, 0x5be97au); f_005d6575();
    /* 005be97a: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be97f: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be983: je 0x5bea09 */ if (fZ) goto L_005bea09;
L_005be989:; BB(0x005be989);
    /* 005be989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be98c: call 0x5be955 */ r_esp -= 4; W32(r_esp, 0x5be991u); f_005be955();
    /* 005be991: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005be994: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be998: ja 0x5bea09 */ if ((!fC&&!fZ)) goto L_005bea09;
L_005be99a:; BB(0x005be99a);
    /* 005be99a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be99d: jmp dword ptr [ecx*4 + 0x5bea0d] */ { u32 t = R32((u32)(r_ecx*4+0x5bea0du)); switch (t) { case 0x5be9a4u: goto L_005be9a4; case 0x5be9b9u: goto L_005be9b9; case 0x5be9cdu: goto L_005be9cd; case 0x5be9e2u: goto L_005be9e2; case 0x5be9f7u: goto L_005be9f7; default: UNSUP(0x005be99d, "jump table entry is not a known target"); } }
L_005be9a4:; BB(0x005be9a4);
    /* 005be9a4: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 005be9a9: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be9af: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005be9b2: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x5be9b7u); f_00444067();
    /* 005be9b7: jmp 0x5bea09 */ goto L_005bea09;
L_005be9b9:; BB(0x005be9b9);
    /* 005be9b9: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 005be9be: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005be9c3: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005be9c6: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x5be9cbu); f_00444067();
    /* 005be9cb: jmp 0x5bea09 */ goto L_005bea09;
L_005be9cd:; BB(0x005be9cd);
    /* 005be9cd: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 005be9d2: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005be9d8: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005be9db: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x5be9e0u); f_00444067();
    /* 005be9e0: jmp 0x5bea09 */ goto L_005bea09;
L_005be9e2:; BB(0x005be9e2);
    /* 005be9e2: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 005be9e7: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005be9ed: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005be9f0: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x5be9f5u); f_00444067();
    /* 005be9f5: jmp 0x5bea09 */ goto L_005bea09;
L_005be9f7:; BB(0x005be9f7);
    /* 005be9f7: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 005be9fc: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bea01: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005bea04: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x5bea09u); f_00444067();
L_005bea09:; BB(0x005bea09);
    /* 005bea09: mov esp, ebp */ r_esp = r_ebp;
    /* 005bea0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bea0c: ret  */ FN_RET(0x005be969); r_esp += 4; return;
}

void f_005bea21(void) /* FUN_005bea21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bea21);
    /* 005bea21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bea22: mov ebp, esp */ r_ebp = r_esp;
    /* 005bea24: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bea27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bea2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bea2d: call 0x5d650a */ r_esp -= 4; W32(r_esp, 0x5bea32u); f_005d650a();
    /* 005bea32: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bea37: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bea3b: je 0x5beac1 */ if (fZ) goto L_005beac1;
L_005bea41:; BB(0x005bea41);
    /* 005bea41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bea44: call 0x5be955 */ r_esp -= 4; W32(r_esp, 0x5bea49u); f_005be955();
    /* 005bea49: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bea4c: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bea50: ja 0x5beac1 */ if ((!fC&&!fZ)) goto L_005beac1;
L_005bea52:; BB(0x005bea52);
    /* 005bea52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bea55: jmp dword ptr [ecx*4 + 0x5beac5] */ { u32 t = R32((u32)(r_ecx*4+0x5beac5u)); switch (t) { case 0x5bea5cu: goto L_005bea5c; case 0x5bea71u: goto L_005bea71; case 0x5bea85u: goto L_005bea85; case 0x5bea9au: goto L_005bea9a; case 0x5beaafu: goto L_005beaaf; default: UNSUP(0x005bea55, "jump table entry is not a known target"); } }
L_005bea5c:; BB(0x005bea5c);
    /* 005bea5c: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 005bea61: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bea67: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005bea6a: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x5bea6fu); f_00443fda();
    /* 005bea6f: jmp 0x5beac1 */ goto L_005beac1;
L_005bea71:; BB(0x005bea71);
    /* 005bea71: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 005bea76: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bea7b: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005bea7e: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x5bea83u); f_00443fda();
    /* 005bea83: jmp 0x5beac1 */ goto L_005beac1;
L_005bea85:; BB(0x005bea85);
    /* 005bea85: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 005bea8a: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005bea90: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005bea93: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x5bea98u); f_00443fda();
    /* 005bea98: jmp 0x5beac1 */ goto L_005beac1;
L_005bea9a:; BB(0x005bea9a);
    /* 005bea9a: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bea9f: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005beaa5: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005beaa8: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x5beaadu); f_00443fda();
    /* 005beaad: jmp 0x5beac1 */ goto L_005beac1;
L_005beaaf:; BB(0x005beaaf);
    /* 005beaaf: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 005beab4: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005beab9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005beabc: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x5beac1u); f_00443fda();
L_005beac1:; BB(0x005beac1);
    /* 005beac1: mov esp, ebp */ r_esp = r_ebp;
    /* 005beac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beac4: ret  */ FN_RET(0x005bea21); r_esp += 4; return;
}

void f_005bead9(void) /* FUN_005bead9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bead9);
    /* 005bead9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beada: mov ebp, esp */ r_ebp = r_esp;
    /* 005beadc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beadd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beae0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beae3: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5beae8u); f_005d5d20();
    /* 005beae8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beaeb: mov dword ptr [eax], 0x639d2c */ W32((u32)(r_eax), 0x639d2cu);
    /* 005beaf1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beaf4: mov esp, ebp */ r_esp = r_ebp;
    /* 005beaf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beaf7: ret  */ FN_RET(0x005bead9); r_esp += 4; return;
}

void f_005beaf8(void) /* FUN_005beaf8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beaf8);
    /* 005beaf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beaf9: mov ebp, esp */ r_ebp = r_esp;
    /* 005beafb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beafc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beaff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb02: mov dword ptr [eax], 0x639d2c */ W32((u32)(r_eax), 0x639d2cu);
    /* 005beb08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb0b: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5beb10u); f_005d5dfb();
    /* 005beb10: mov esp, ebp */ r_esp = r_ebp;
    /* 005beb12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beb13: ret  */ FN_RET(0x005beaf8); r_esp += 4; return;
}

void f_005beb14(void) /* FUN_005beb14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beb14);
    /* 005beb14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beb15: mov ebp, esp */ r_ebp = r_esp;
    /* 005beb17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beb18: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beb1b: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005beb21: call 0x448c07 */ r_esp -= 4; W32(r_esp, 0x5beb26u); f_00448c07();
    /* 005beb26: mov esp, ebp */ r_esp = r_ebp;
    /* 005beb28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beb29: ret  */ FN_RET(0x005beb14); r_esp += 4; return;
}

void f_005beb2a(void) /* FUN_005beb2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beb2a);
    /* 005beb2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beb2b: mov ebp, esp */ r_ebp = r_esp;
    /* 005beb2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beb2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beb31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005beb33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb36: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5beb3bu); f_005e6160();
    /* 005beb3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb3e: mov dword ptr [eax], 0x639d9c */ W32((u32)(r_eax), 0x639d9cu);
    /* 005beb44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb47: mov esp, ebp */ r_esp = r_ebp;
    /* 005beb49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beb4a: ret  */ FN_RET(0x005beb2a); r_esp += 4; return;
}

void f_005beb4b(void) /* FUN_005beb4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beb4b);
    /* 005beb4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beb4c: mov ebp, esp */ r_ebp = r_esp;
    /* 005beb4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beb4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beb52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb55: mov dword ptr [eax], 0x639d9c */ W32((u32)(r_eax), 0x639d9cu);
    /* 005beb5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beb5e: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x5beb63u); f_005e61d1();
    /* 005beb63: mov esp, ebp */ r_esp = r_ebp;
    /* 005beb65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beb66: ret  */ FN_RET(0x005beb4b); r_esp += 4; return;
}

void f_005beb67(void) /* FUN_005beb67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beb67);
    /* 005beb67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beb68: mov ebp, esp */ r_ebp = r_esp;
    /* 005beb6a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005beb6d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005beb70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005beb73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beb74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005beb77: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5beb7cu); f_005e626d();
    /* 005beb7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005beb7f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005beb82: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005beb86: ja 0x5befd1 */ if ((!fC&&!fZ)) goto L_005befd1;
L_005beb8c:; BB(0x005beb8c);
    /* 005beb8c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005beb8f: jmp dword ptr [edx*4 + 0x5befd7] */ { u32 t = R32((u32)(r_edx*4+0x5befd7u)); switch (t) { case 0x5beb96u: goto L_005beb96; case 0x5bed06u: goto L_005bed06; case 0x5bed51u: goto L_005bed51; case 0x5bee2fu: goto L_005bee2f; case 0x5beebcu: goto L_005beebc; case 0x5bef92u: goto L_005bef92; default: UNSUP(0x005beb8f, "jump table entry is not a known target"); } }
L_005beb96:; BB(0x005beb96);
    /* 005beb96: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005beb9c: call 0x5bdc1f */ r_esp -= 4; W32(r_esp, 0x5beba1u); f_005bdc1f();
    /* 005beba1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005beba8: jmp 0x5bebb3 */ goto L_005bebb3;
L_005bebaa:; BB(0x005bebaa);
    /* 005bebaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bebad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bebb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bebb3:; BB(0x005bebb3);
    /* 005bebb3: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bebb7: jge 0x5bebda */ if ((fS==fO)) goto L_005bebda;
L_005bebb9:; BB(0x005bebb9);
    /* 005bebb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bebbc: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bebc2: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005bebc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bebc9: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bebcf: mov eax, dword ptr [edx + eax*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_eax*4+0x58u));
    /* 005bebd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bebd5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5bebd8u); call_ind(t); }
    /* 005bebd8: jmp 0x5bebaa */ goto L_005bebaa;
L_005bebda:; BB(0x005bebda);
    /* 005bebda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bebe1: jmp 0x5bebec */ goto L_005bebec;
L_005bebe3:; BB(0x005bebe3);
    /* 005bebe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bebe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bebe9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bebec:; BB(0x005bebec);
    /* 005bebec: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bebf0: jge 0x5bec7b */ if ((fS==fO)) goto L_005bec7b;
L_005bebf6:; BB(0x005bebf6);
    /* 005bebf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bebf9: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bebff: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005bec03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bec06: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bec0c: mov eax, dword ptr [edx + eax*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_eax*4+0x48u));
    /* 005bec10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bec12: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bec15u); call_ind(t); }
    /* 005bec15: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005bec17: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bec1cu); f_0048ab58();
    /* 005bec1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bec1f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bec22: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec26: je 0x5bec3b */ if (fZ) goto L_005bec3b;
L_005bec28:; BB(0x005bec28);
    /* 005bec28: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bec2a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bec2c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bec2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bec31: call 0x5bfd77 */ r_esp -= 4; W32(r_esp, 0x5bec36u); f_005bfd77();
    /* 005bec36: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bec39: jmp 0x5bec42 */ goto L_005bec42;
L_005bec3b:; BB(0x005bec3b);
    /* 005bec3b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005bec42:; BB(0x005bec42);
    /* 005bec42: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bec45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bec46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bec49: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bec4f: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005bec53: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bec58u); f_005e4060();
    /* 005bec58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bec5b: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bec61: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bec65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bec68: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005bec6d: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bec71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bec73: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bec76u); call_ind(t); }
    /* 005bec76: jmp 0x5bebe3 */ goto L_005bebe3;
L_005bec7b:; BB(0x005bec7b);
    /* 005bec7b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005bec7d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bec82u); f_0048ab58();
    /* 005bec82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bec85: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bec88: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec8c: je 0x5beca1 */ if (fZ) goto L_005beca1;
L_005bec8e:; BB(0x005bec8e);
    /* 005bec8e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005bec90: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005bec92: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005bec94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bec97: call 0x5bfd77 */ r_esp -= 4; W32(r_esp, 0x5bec9cu); f_005bfd77();
    /* 005bec9c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bec9f: jmp 0x5beca8 */ goto L_005beca8;
L_005beca1:; BB(0x005beca1);
    /* 005beca1: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005beca8:; BB(0x005beca8);
    /* 005beca8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005becab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005becac: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005becb2: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005becb5: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5becbau); f_005e4060();
    /* 005becba: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005becc0: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5becc5u); f_0045cb85();
    /* 005becc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005becc7: je 0x5bece4 */ if (fZ) goto L_005bece4;
L_005becc9:; BB(0x005becc9);
    /* 005becc9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005beccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005beccd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005beccf: push 0x19266 */ { u32 v = 0x19266u; r_esp -= 4; W32(r_esp, v); }
    /* 005becd4: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005becd9: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 005becdf: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bece4u); f_005e8389();
L_005bece4:; BB(0x005bece4);
    /* 005bece4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bece6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bece9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005beceb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005becee: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5becf1u); call_ind(t); }
    /* 005becf1: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005becf6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005becf9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005becfb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005becfe: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bed01u); call_ind(t); }
    /* 005bed01: jmp 0x5befd1 */ goto L_005befd1;
L_005bed06:; BB(0x005bed06);
    /* 005bed06: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bed08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bed0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bed0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bed10: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bed13u); call_ind(t); }
    /* 005bed13: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bed19: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5bed1eu); f_0045cb85();
    /* 005bed1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bed20: je 0x5bed3f */ if (fZ) goto L_005bed3f;
L_005bed22:; BB(0x005bed22);
    /* 005bed22: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bed24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bed27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bed28: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bed2a: push 0x19265 */ { u32 v = 0x19265u; r_esp -= 4; W32(r_esp, v); }
    /* 005bed2f: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005bed35: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 005bed38: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bed3du); f_005e8389();
    /* 005bed3d: jmp 0x5bed4c */ goto L_005bed4c;
L_005bed3f:; BB(0x005bed3f);
    /* 005bed3f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bed41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bed44: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bed46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bed49: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5bed4cu); call_ind(t); }
L_005bed4c:; BB(0x005bed4c);
    /* 005bed4c: jmp 0x5befd1 */ goto L_005befd1;
L_005bed51:; BB(0x005bed51);
    /* 005bed51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bed58: jmp 0x5bed63 */ goto L_005bed63;
L_005bed5a:; BB(0x005bed5a);
    /* 005bed5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bed5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bed60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005bed63:; BB(0x005bed63);
    /* 005bed63: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bed67: jge 0x5bed88 */ if ((fS==fO)) goto L_005bed88;
L_005bed69:; BB(0x005bed69);
    /* 005bed69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bed6c: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005bed71: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bed75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bed78: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005bed7d: mov edx, dword ptr [eax + edx*4 + 0x58] */ r_edx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005bed81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bed83: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bed86u); call_ind(t); }
    /* 005bed86: jmp 0x5bed5a */ goto L_005bed5a;
L_005bed88:; BB(0x005bed88);
    /* 005bed88: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bed8e: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005bed91: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bed97: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005bed9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bed9c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bed9fu); call_ind(t); }
    /* 005bed9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005beda1: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005beda6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005beda9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bedaeu); f_005ea1cf();
    /* 005bedae: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005bedb0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bedb5u); f_0048ab58();
    /* 005bedb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bedb8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bedbb: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bedbf: je 0x5bedd0 */ if (fZ) goto L_005bedd0;
L_005bedc1:; BB(0x005bedc1);
    /* 005bedc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bedc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bedc6: call 0x5bfd12 */ r_esp -= 4; W32(r_esp, 0x5bedcbu); f_005bfd12();
    /* 005bedcb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bedce: jmp 0x5bedd7 */ goto L_005bedd7;
L_005bedd0:; BB(0x005bedd0);
    /* 005bedd0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005bedd7:; BB(0x005bedd7);
    /* 005bedd7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bedda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beddb: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bede1: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 005bede4: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bede9u); f_005e4060();
    /* 005bede9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bedef: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5bedf4u); f_0045cb85();
    /* 005bedf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bedf6: je 0x5bee10 */ if (fZ) goto L_005bee10;
L_005bedf8:; BB(0x005bedf8);
    /* 005bedf8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bedfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bedfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bedfe: push 0x19264 */ { u32 v = 0x19264u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee03: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bee08: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005bee0b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bee10u); f_005e8389();
L_005bee10:; BB(0x005bee10);
    /* 005bee10: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bee15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bee17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bee1a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bee1du); call_ind(t); }
    /* 005bee1d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bee22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bee24: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bee27: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bee2au); call_ind(t); }
    /* 005bee2a: jmp 0x5befd1 */ goto L_005befd1;
L_005bee2f:; BB(0x005bee2f);
    /* 005bee2f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bee35: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5bee3au); f_0045cb85();
    /* 005bee3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bee3c: je 0x5bee9d */ if (fZ) goto L_005bee9d;
L_005bee3e:; BB(0x005bee3e);
    /* 005bee3e: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bee44: call 0x5be1a2 */ r_esp -= 4; W32(r_esp, 0x5bee49u); f_005be1a2();
    /* 005bee49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bee4b: je 0x5bee77 */ if (fZ) goto L_005bee77;
L_005bee4d:; BB(0x005bee4d);
    /* 005bee4d: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bee53: call 0x5be125 */ r_esp -= 4; W32(r_esp, 0x5bee58u); f_005be125();
    /* 005bee58: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bee5b: jne 0x5bee77 */ if (!fZ) goto L_005bee77;
L_005bee5d:; BB(0x005bee5d);
    /* 005bee5d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee63: push 0x1926d */ { u32 v = 0x1926du; r_esp -= 4; W32(r_esp, v); }
    /* 005bee68: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bee6d: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005bee70: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bee75u); f_005e8389();
    /* 005bee75: jmp 0x5bee9d */ goto L_005bee9d;
L_005bee77:; BB(0x005bee77);
    /* 005bee77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee7d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee7f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5bee84u); f_0060ee31();
    /* 005bee84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bee87: lea ecx, [eax + eax + 0x1925d] */ r_ecx = (u32)(r_eax+r_eax+0x1925du);
    /* 005bee8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bee8f: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005bee95: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 005bee98: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5bee9du); f_005e8389();
L_005bee9d:; BB(0x005bee9d);
    /* 005bee9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005beea2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005beea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005beea7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5beeaau); call_ind(t); }
    /* 005beeaa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005beeac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005beeaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005beeb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005beeb4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5beeb7u); call_ind(t); }
    /* 005beeb7: jmp 0x5befd1 */ goto L_005befd1;
L_005beebc:; BB(0x005beebc);
    /* 005beebc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005beec3: jmp 0x5beece */ goto L_005beece;
L_005beec5:; BB(0x005beec5);
    /* 005beec5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beec8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005beecb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005beece:; BB(0x005beece);
    /* 005beece: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005beed2: jge 0x5bef4c */ if ((fS==fO)) goto L_005bef4c;
L_005beed4:; BB(0x005beed4);
    /* 005beed4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005beed6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beed9: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005beedf: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005beee3: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5beee8u); f_005e4060();
    /* 005beee8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beeeb: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005beef1: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005beef5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beef8: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005beefd: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005bef01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bef03: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bef06u); call_ind(t); }
    /* 005bef06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef09: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bef0f: mov eax, dword ptr [edx + ecx*4 + 0xb4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 005bef16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bef17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef1a: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005bef20: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005bef24: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bef29u); f_005ea1cf();
    /* 005bef29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef2c: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bef32: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005bef36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef39: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005bef3e: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 005bef42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bef44: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bef47u); call_ind(t); }
    /* 005bef47: jmp 0x5beec5 */ goto L_005beec5;
L_005bef4c:; BB(0x005bef4c);
    /* 005bef4c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bef52: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5bef57u); f_0045cb85();
    /* 005bef57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bef59: je 0x5bef66 */ if (fZ) goto L_005bef66;
L_005bef5b:; BB(0x005bef5b);
    /* 005bef5b: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bef61: call 0x5be222 */ r_esp -= 4; W32(r_esp, 0x5bef66u); f_005be222();
L_005bef66:; BB(0x005bef66);
    /* 005bef66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bef68: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bef6e: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005bef71: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5bef76u); f_005e4060();
    /* 005bef76: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005bef78: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bef7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bef7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bef80: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5bef83u); call_ind(t); }
    /* 005bef83: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005bef85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bef88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bef8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bef8d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bef90u); call_ind(t); }
    /* 005bef90: jmp 0x5befd1 */ goto L_005befd1;
L_005bef92:; BB(0x005bef92);
    /* 005bef92: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bef94: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005bef99: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bef9c: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005befa2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005befa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005befa7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5befaau); call_ind(t); }
    /* 005befaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005befac: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005befb1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005befb4: mov edx, dword ptr [0x6fc030] */ r_edx = R32((u32)(0x6fc030u));
    /* 005befba: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005befbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005befbf: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5befc2u); call_ind(t); }
    /* 005befc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005befc4: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005befc9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005befcc: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5befd1u); f_005e62ca();
L_005befd1:; BB(0x005befd1);
    /* 005befd1: mov esp, ebp */ r_esp = r_ebp;
    /* 005befd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005befd4: ret 4 */ FN_RET(0x005beb67); r_esp += 8; return;
}

void f_005befef(void) /* FUN_005befef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005befef);
    /* 005befef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beff0: mov ebp, esp */ r_ebp = r_esp;
    /* 005beff2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005beff5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005beff8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005beffb: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bf000u); f_005e3fb0();
    /* 005bf000: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf003: mov dword ptr [eax], 0x639db4 */ W32((u32)(r_eax), 0x639db4u);
    /* 005bf009: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005bf00d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bf00f: jle 0x5bf01e */ if ((fZ||fS!=fO)) goto L_005bf01e;
L_005bf011:; BB(0x005bf011);
    /* 005bf011: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf014: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005bf018: mov word ptr [edx + 0x78], ax */ W16((u32)(r_edx+0x78u), (u16)r_eax);
    /* 005bf01c: jmp 0x5bf027 */ goto L_005bf027;
L_005bf01e:; BB(0x005bf01e);
    /* 005bf01e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf021: mov word ptr [ecx + 0x78], 1 */ W16((u32)(r_ecx+0x78u), 0x1u);
L_005bf027:; BB(0x005bf027);
    /* 005bf027: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf02a: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 005bf034: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf037: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 005bf03b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bf03e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf03f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bf044u); f_0048ab58();
    /* 005bf044: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf047: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf04a: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005bf050: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf056: jmp 0x5bf064 */ goto L_005bf064;
L_005bf058:; BB(0x005bf058);
    /* 005bf058: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf05c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf060: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bf064:; BB(0x005bf064);
    /* 005bf064: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf068: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf06b: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 005bf06f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf071: jge 0x5bf089 */ if ((fS==fO)) goto L_005bf089;
L_005bf073:; BB(0x005bf073);
    /* 005bf073: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf077: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf07a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf080: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 005bf087: jmp 0x5bf058 */ goto L_005bf058;
L_005bf089:; BB(0x005bf089);
    /* 005bf089: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf08c: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf08e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf08f: ret 4 */ FN_RET(0x005befef); r_esp += 8; return;
}

void f_005bf092(void) /* FUN_005bf092 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf092);
    /* 005bf092: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf093: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf095: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf098: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bf09b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf09e: mov dword ptr [eax], 0x639db4 */ W32((u32)(r_eax), 0x639db4u);
    /* 005bf0a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf0a7: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf0ae: je 0x5bf15c */ if (fZ) goto L_005bf15c;
L_005bf0b4:; BB(0x005bf0b4);
    /* 005bf0b4: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf0ba: jmp 0x5bf0c8 */ goto L_005bf0c8;
L_005bf0bc:; BB(0x005bf0bc);
    /* 005bf0bc: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf0c0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf0c4: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bf0c8:; BB(0x005bf0c8);
    /* 005bf0c8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf0cc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf0cf: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 005bf0d3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf0d5: jge 0x5bf137 */ if ((fS==fO)) goto L_005bf137;
L_005bf0d7:; BB(0x005bf0d7);
    /* 005bf0d7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf0db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf0de: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf0e4: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf0e8: je 0x5bf135 */ if (fZ) goto L_005bf135;
L_005bf0ea:; BB(0x005bf0ea);
    /* 005bf0ea: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf0ee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf0f1: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf0f7: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf0fa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bf0fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf100: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf103: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf107: je 0x5bf11a */ if (fZ) goto L_005bf11a;
L_005bf109:; BB(0x005bf109);
    /* 005bf109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf10b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf10e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf110: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf113: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bf115u); call_ind(t); }
    /* 005bf115: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bf118: jmp 0x5bf121 */ goto L_005bf121;
L_005bf11a:; BB(0x005bf11a);
    /* 005bf11a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005bf121:; BB(0x005bf121);
    /* 005bf121: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf125: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf128: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf12e: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_005bf135:; BB(0x005bf135);
    /* 005bf135: jmp 0x5bf0bc */ goto L_005bf0bc;
L_005bf137:; BB(0x005bf137);
    /* 005bf137: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf13a: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf140: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005bf143: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf147: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5bf14cu); f_0048ac1b();
    /* 005bf14c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf14f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf152: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_005bf15c:; BB(0x005bf15c);
    /* 005bf15c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf15f: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf166: je 0x5bf1a5 */ if (fZ) goto L_005bf1a5;
L_005bf168:; BB(0x005bf168);
    /* 005bf168: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf16b: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005bf171: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bf174: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf177: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bf17a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf17e: je 0x5bf191 */ if (fZ) goto L_005bf191;
L_005bf180:; BB(0x005bf180);
    /* 005bf180: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf182: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf185: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf187: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf18a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bf18cu); call_ind(t); }
    /* 005bf18c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bf18f: jmp 0x5bf198 */ goto L_005bf198;
L_005bf191:; BB(0x005bf191);
    /* 005bf191: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005bf198:; BB(0x005bf198);
    /* 005bf198: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf19b: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_005bf1a5:; BB(0x005bf1a5);
    /* 005bf1a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf1a8: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5bf1adu); f_005e3fed();
    /* 005bf1ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf1af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf1b0: ret  */ FN_RET(0x005bf092); r_esp += 4; return;
}

void f_005bf1b1(void) /* FUN_005bf1b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf1b1);
    /* 005bf1b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf1b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf1b4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf1b7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bf1ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1bd: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x5bf1c2u); f_005e4035();
    /* 005bf1c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1c5: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005bf1cc: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf1ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1d1: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 005bf1d5: imul edx, edx, 9 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x9u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf1d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf1d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf1de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1e1: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5bf1e4u); call_ind(t); }
    /* 005bf1e4: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf1ea: jmp 0x5bf1f8 */ goto L_005bf1f8;
L_005bf1ec:; BB(0x005bf1ec);
    /* 005bf1ec: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf1f0: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf1f4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bf1f8:; BB(0x005bf1f8);
    /* 005bf1f8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf1fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1ff: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 005bf203: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf205: jge 0x5bf36a */ if ((fS==fO)) goto L_005bf36a;
L_005bf20b:; BB(0x005bf20b);
    /* 005bf20b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf20d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bf212u); f_0048ab58();
    /* 005bf212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf215: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bf218: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf21c: je 0x5bf22b */ if (fZ) goto L_005bf22b;
L_005bf21e:; BB(0x005bf21e);
    /* 005bf21e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf221: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bf226u); f_005e9d30();
    /* 005bf226: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bf229: jmp 0x5bf232 */ goto L_005bf232;
L_005bf22b:; BB(0x005bf22b);
    /* 005bf22b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005bf232:; BB(0x005bf232);
    /* 005bf232: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf236: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf239: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf23f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf242: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 005bf245: push 0x16044 */ { u32 v = 0x16044u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf24a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf24e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf251: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf257: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf25a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bf25fu); f_005ea0c3();
    /* 005bf25f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf261: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf265: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf268: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf26e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf271: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bf276u); f_005ea1cf();
    /* 005bf276: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf27a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf27d: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf283: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf286: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf28a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf28d: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf293: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf296: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf298: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5bf29bu); call_ind(t); }
    /* 005bf29b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf29e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf2a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2a3: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5bf2a6u); call_ind(t); }
    /* 005bf2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2a7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf2ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf2ae: imul eax, eax, 9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf2b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2b4: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005bf2b7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bf2b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2ba: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf2be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2c1: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf2c7: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf2ca: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf2ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2d1: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf2d7: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf2da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf2dc: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bf2dfu); call_ind(t); }
    /* 005bf2df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2e2: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5bf2e7u); f_005d9883();
    /* 005bf2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2e8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf2ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2ef: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf2f5: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf2f8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf2fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2ff: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf305: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf308: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf30a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bf30du); call_ind(t); }
    /* 005bf30d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf310: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5bf315u); f_005d96a9();
    /* 005bf315: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf317: je 0x5bf340 */ if (fZ) goto L_005bf340;
L_005bf319:; BB(0x005bf319);
    /* 005bf319: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf31d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf320: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf326: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf329: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf32d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf330: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf336: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf339: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf33b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5bf33eu); call_ind(t); }
    /* 005bf33e: jmp 0x5bf365 */ goto L_005bf365;
L_005bf340:; BB(0x005bf340);
    /* 005bf340: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf344: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf347: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf34d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf350: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf354: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf357: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf35d: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf360: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf362: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bf365u); call_ind(t); }
L_005bf365:; BB(0x005bf365);
    /* 005bf365: jmp 0x5bf1ec */ goto L_005bf1ec;
L_005bf36a:; BB(0x005bf36a);
    /* 005bf36a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf36c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf36d: ret  */ FN_RET(0x005bf1b1); r_esp += 4; return;
}

void f_005bf36e(void) /* FUN_005bf36e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf36e);
    /* 005bf36e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf36f: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf371: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf374: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf377: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bf37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf37b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf37e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf37f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf382: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x5bf387u); f_005e9f7d();
    /* 005bf387: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf38d: jmp 0x5bf39b */ goto L_005bf39b;
L_005bf38f:; BB(0x005bf38f);
    /* 005bf38f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf393: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf397: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bf39b:; BB(0x005bf39b);
    /* 005bf39b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf39f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf3a2: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 005bf3a6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf3a8: jge 0x5bf3fb */ if ((fS==fO)) goto L_005bf3fb;
L_005bf3aa:; BB(0x005bf3aa);
    /* 005bf3aa: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf3ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf3b1: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf3b7: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf3bb: je 0x5bf3f9 */ if (fZ) goto L_005bf3f9;
L_005bf3bd:; BB(0x005bf3bd);
    /* 005bf3bd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bf3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3c1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf3c5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf3c8: imul ecx, ecx, 9 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x9u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf3cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf3ce: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005bf3d1: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bf3d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf3d4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf3d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf3db: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf3e1: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005bf3e4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf3e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf3eb: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 005bf3f1: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005bf3f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf3f6: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5bf3f9u); call_ind(t); }
L_005bf3f9:; BB(0x005bf3f9);
    /* 005bf3f9: jmp 0x5bf38f */ goto L_005bf38f;
L_005bf3fb:; BB(0x005bf3fb);
    /* 005bf3fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf3fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf3fe: ret 8 */ FN_RET(0x005bf36e); r_esp += 12; return;
}

void f_005bf401(void) /* FUN_005bf401 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf401);
    /* 005bf401: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf402: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf404: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf407: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf40a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bf40d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf40e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf411: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5bf416u); f_005d975e();
    /* 005bf416: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf41c: jmp 0x5bf42a */ goto L_005bf42a;
L_005bf41e:; BB(0x005bf41e);
    /* 005bf41e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf422: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf426: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bf42a:; BB(0x005bf42a);
    /* 005bf42a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf42e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf431: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 005bf435: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf437: jge 0x5bf477 */ if ((fS==fO)) goto L_005bf477;
L_005bf439:; BB(0x005bf439);
    /* 005bf439: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf43d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf440: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005bf446: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf44a: je 0x5bf475 */ if (fZ) goto L_005bf475;
L_005bf44c:; BB(0x005bf44c);
    /* 005bf44c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf44f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf450: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf454: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf457: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005bf45d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bf460: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf464: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf467: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 005bf46d: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005bf470: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf472: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bf475u); call_ind(t); }
L_005bf475:; BB(0x005bf475);
    /* 005bf475: jmp 0x5bf41e */ goto L_005bf41e;
L_005bf477:; BB(0x005bf477);
    /* 005bf477: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf47a: ret 4 */ FN_RET(0x005bf401); r_esp += 8; return;
}

void f_005bf47d(void) /* FUN_005bf47d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf47d);
    /* 005bf47d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf47e: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf480: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf483: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf486: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf489: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x5bf48eu); f_005ea28a();
    /* 005bf48e: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf494: jmp 0x5bf4a2 */ goto L_005bf4a2;
L_005bf496:; BB(0x005bf496);
    /* 005bf496: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf49a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf49e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bf4a2:; BB(0x005bf4a2);
    /* 005bf4a2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf4a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf4a9: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 005bf4ad: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf4af: jge 0x5bf4eb */ if ((fS==fO)) goto L_005bf4eb;
L_005bf4b1:; BB(0x005bf4b1);
    /* 005bf4b1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf4b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf4b8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf4be: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf4c2: je 0x5bf4e9 */ if (fZ) goto L_005bf4e9;
L_005bf4c4:; BB(0x005bf4c4);
    /* 005bf4c4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf4c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf4cb: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf4d1: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005bf4d4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf4d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf4db: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 005bf4e1: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005bf4e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf4e6: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5bf4e9u); call_ind(t); }
L_005bf4e9:; BB(0x005bf4e9);
    /* 005bf4e9: jmp 0x5bf496 */ goto L_005bf496;
L_005bf4eb:; BB(0x005bf4eb);
    /* 005bf4eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf4ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf4ee: ret  */ FN_RET(0x005bf47d); r_esp += 4; return;
}

void f_005bf4ef(void) /* FUN_005bf4ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf4ef);
    /* 005bf4ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf4f0: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf4f2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf4f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf4f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf4fb: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5bf500u); f_005ea2c1();
    /* 005bf500: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf506: jmp 0x5bf514 */ goto L_005bf514;
L_005bf508:; BB(0x005bf508);
    /* 005bf508: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bf50c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bf510: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bf514:; BB(0x005bf514);
    /* 005bf514: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf518: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf51b: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 005bf51f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf521: jge 0x5bf55d */ if ((fS==fO)) goto L_005bf55d;
L_005bf523:; BB(0x005bf523);
    /* 005bf523: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf527: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf52a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf530: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf534: je 0x5bf55b */ if (fZ) goto L_005bf55b;
L_005bf536:; BB(0x005bf536);
    /* 005bf536: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf53a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf53d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf543: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005bf546: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bf54a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf54d: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 005bf553: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005bf556: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf558: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5bf55bu); call_ind(t); }
L_005bf55b:; BB(0x005bf55b);
    /* 005bf55b: jmp 0x5bf508 */ goto L_005bf508;
L_005bf55d:; BB(0x005bf55d);
    /* 005bf55d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf55f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf560: ret  */ FN_RET(0x005bf4ef); r_esp += 4; return;
}

void f_005bf561(void) /* FUN_005bf561 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf561);
    /* 005bf561: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf562: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf564: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf567: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bf56a: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005bf571: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf578: jmp 0x5bf583 */ goto L_005bf583;
L_005bf57a:; BB(0x005bf57a);
    /* 005bf57a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf57d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf580: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005bf583:; BB(0x005bf583);
    /* 005bf583: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf586: movsx edx, word ptr [ecx + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x78u));
    /* 005bf58a: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf58d: jge 0x5bf59a */ if ((fS==fO)) goto L_005bf59a;
L_005bf58f:; BB(0x005bf58f);
    /* 005bf58f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf592: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf595: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bf598: jmp 0x5bf57a */ goto L_005bf57a;
L_005bf59a:; BB(0x005bf59a);
    /* 005bf59a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf59d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf5a0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf5a3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf5a7: jge 0x5bf5b0 */ if ((fS==fO)) goto L_005bf5b0;
L_005bf5a9:; BB(0x005bf5a9);
    /* 005bf5a9: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005bf5b0:; BB(0x005bf5b0);
    /* 005bf5b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf5b3: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf5b6: jle 0x5bf5be */ if ((fZ||fS!=fO)) goto L_005bf5be;
L_005bf5b8:; BB(0x005bf5b8);
    /* 005bf5b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf5bb: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005bf5be:; BB(0x005bf5be);
    /* 005bf5be: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5c0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bf5c5u); f_0048ab58();
    /* 005bf5c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf5c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bf5cb: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf5cf: je 0x5bf5e6 */ if (fZ) goto L_005bf5e6;
L_005bf5d1:; BB(0x005bf5d1);
    /* 005bf5d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf5d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5d5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf5d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf5dc: call 0x5bf5ff */ r_esp -= 4; W32(r_esp, 0x5bf5e1u); f_005bf5ff();
    /* 005bf5e1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bf5e4: jmp 0x5bf5ed */ goto L_005bf5ed;
L_005bf5e6:; BB(0x005bf5e6);
    /* 005bf5e6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005bf5ed:; BB(0x005bf5ed);
    /* 005bf5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf5f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf5f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf5f4: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5bf5f9u); f_005e40dc();
    /* 005bf5f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf5fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf5fc: ret 4 */ FN_RET(0x005bf561); r_esp += 8; return;
}

void f_005bf5ff(void) /* FUN_005bf5ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf5ff);
    /* 005bf5ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf600: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf602: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf603: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf606: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf608: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf60b: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5bf610u); f_005e6160();
    /* 005bf610: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf613: mov dword ptr [eax], 0x639e04 */ W32((u32)(r_eax), 0x639e04u);
    /* 005bf619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf61c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf61f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005bf622: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf625: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bf628: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005bf62b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf62e: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 005bf635: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5bf63bu); call_ind(t); }
    /* 005bf63b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf63e: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005bf641: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf644: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bf647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf64a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bf64d: cmp edx, dword ptr [eax + 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf650: jge 0x5bf65e */ if ((fS==fO)) goto L_005bf65e;
L_005bf652:; BB(0x005bf652);
    /* 005bf652: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf655: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005bf65c: jmp 0x5bf668 */ goto L_005bf668;
L_005bf65e:; BB(0x005bf65e);
    /* 005bf65e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf661: mov dword ptr [ecx + 0x2c], 1 */ W32((u32)(r_ecx+0x2cu), 0x1u);
L_005bf668:; BB(0x005bf668);
    /* 005bf668: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf66b: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf66d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf66e: ret 8 */ FN_RET(0x005bf5ff); r_esp += 12; return;
}

void f_005bf671(void) /* FUN_005bf671 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf671);
    /* 005bf671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf672: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf675: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf678: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf67b: mov dword ptr [eax], 0x639e04 */ W32((u32)(r_eax), 0x639e04u);
    /* 005bf681: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf684: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005bf68b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf68e: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x5bf693u); f_005e61d1();
    /* 005bf693: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf696: ret  */ FN_RET(0x005bf671); r_esp += 4; return;
}

void f_005bf697(void) /* FUN_005bf697 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf697);
    /* 005bf697: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf698: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf69a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf69d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bf6a0: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5bf6a6u); call_ind(t); }
    /* 005bf6a6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bf6a9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005bf6b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bf6b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf6b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf6b7: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5bf6bcu); f_005e626d();
    /* 005bf6bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf6bf: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bf6c2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf6c6: je 0x5bf6cd */ if (fZ) goto L_005bf6cd;
L_005bf6c8:; BB(0x005bf6c8);
    /* 005bf6c8: jmp 0x5bf83a */ goto L_005bf83a;
L_005bf6cd:; BB(0x005bf6cd);
    /* 005bf6cd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf6d0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bf6d3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bf6d6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bf6dd: jmp 0x5bf6e8 */ goto L_005bf6e8;
L_005bf6df:; BB(0x005bf6df);
    /* 005bf6df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf6e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf6e5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005bf6e8:; BB(0x005bf6e8);
    /* 005bf6e8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf6eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf6ee: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf6f1: jge 0x5bf7cf */ if ((fS==fO)) goto L_005bf7cf;
L_005bf6f7:; BB(0x005bf6f7);
    /* 005bf6f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf6fa: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005bf6fd: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf703: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf706: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005bf709: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5bf70eu); f_005ea257();
    /* 005bf70e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bf711: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf714: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bf715: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bf71a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bf71a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bf71a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bf71c: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bf71e: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf721: je 0x5bf784 */ if (fZ) goto L_005bf784;
L_005bf723:; BB(0x005bf723);
    /* 005bf723: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf726: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf72a: je 0x5bf737 */ if (fZ) goto L_005bf737;
L_005bf72c:; BB(0x005bf72c);
    /* 005bf72c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf72f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf732: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bf735: jmp 0x5bf740 */ goto L_005bf740;
L_005bf737:; BB(0x005bf737);
    /* 005bf737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf73a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf73d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005bf740:; BB(0x005bf740);
    /* 005bf740: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf743: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bf746: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf74a: jne 0x5bf753 */ if (!fZ) goto L_005bf753;
L_005bf74c:; BB(0x005bf74c);
    /* 005bf74c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005bf753:; BB(0x005bf753);
    /* 005bf753: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf757: jne 0x5bf760 */ if (!fZ) goto L_005bf760;
L_005bf759:; BB(0x005bf759);
    /* 005bf759: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
L_005bf760:; BB(0x005bf760);
    /* 005bf760: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf764: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf767: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005bf76a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf770: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf773: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005bf776: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bf77bu); f_005ea1cf();
    /* 005bf77b: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005bf782: jmp 0x5bf7bc */ goto L_005bf7bc;
L_005bf784:; BB(0x005bf784);
    /* 005bf784: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf787: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005bf78a: movsx ecx, word ptr [eax + 0x78] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 005bf78e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf791: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf794: jge 0x5bf7bc */ if ((fS==fO)) goto L_005bf7bc;
L_005bf796:; BB(0x005bf796);
    /* 005bf796: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf799: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf79c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf79f: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf7a2: jne 0x5bf7bc */ if (!fZ) goto L_005bf7bc;
L_005bf7a4:; BB(0x005bf7a4);
    /* 005bf7a4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7a7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bf7aa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf7ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7b0: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005bf7b3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf7b9: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_005bf7bc:; BB(0x005bf7bc);
    /* 005bf7bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf7bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bf7c0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bf7c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bf7c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bf7c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bf7c7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bf7ca: jmp 0x5bf6df */ goto L_005bf6df;
L_005bf7cf:; BB(0x005bf7cf);
    /* 005bf7cf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf7d3: je 0x5bf82b */ if (fZ) goto L_005bf82b;
L_005bf7d5:; BB(0x005bf7d5);
    /* 005bf7d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7d8: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bf7db: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf7e0: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf7e3: jbe 0x5bf80f */ if ((fC||fZ)) goto L_005bf80f;
L_005bf7e5:; BB(0x005bf7e5);
    /* 005bf7e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7e8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005bf7eb: movsx eax, word ptr [edx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x78u));
    /* 005bf7ef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7f2: cmp dword ptr [ecx + 0x24], eax */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf7f5: jge 0x5bf806 */ if ((fS==fO)) goto L_005bf806;
L_005bf7f7:; BB(0x005bf7f7);
    /* 005bf7f7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf7fa: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bf7fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf800: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf803: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_005bf806:; BB(0x005bf806);
    /* 005bf806: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf809: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf80c: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_005bf80f:; BB(0x005bf80f);
    /* 005bf80f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf811: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf814: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bf816: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf819: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bf81cu); call_ind(t); }
    /* 005bf81c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf81e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf821: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf823: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf826: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bf829u); call_ind(t); }
    /* 005bf829: jmp 0x5bf83a */ goto L_005bf83a;
L_005bf82b:; BB(0x005bf82b);
    /* 005bf82b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf82e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005bf831: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf834: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bf837: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
L_005bf83a:; BB(0x005bf83a);
    /* 005bf83a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf83c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf83d: ret 4 */ FN_RET(0x005bf697); r_esp += 8; return;
}

void f_005bf840(void) /* FUN_005bf840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf840);
    /* 005bf840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf841: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf84a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5bf84fu); f_005e3fb0();
    /* 005bf84f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf852: mov dword ptr [eax], 0x639e1c */ W32((u32)(r_eax), 0x639e1cu);
    /* 005bf858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf85b: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 005bf862: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf865: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005bf86c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf86f: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 005bf879: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf87c: mov dword ptr [ecx + 0x84], 1 */ W32((u32)(r_ecx+0x84u), 0x1u);
    /* 005bf886: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf889: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf88b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf88c: ret  */ FN_RET(0x005bf840); r_esp += 4; return;
}

void f_005bf88d(void) /* FUN_005bf88d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf88d);
    /* 005bf88d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf88e: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf890: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf893: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bf896: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf899: mov dword ptr [eax], 0x639e1c */ W32((u32)(r_eax), 0x639e1cu);
    /* 005bf89f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf8a2: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8a6: je 0x5bf8df */ if (fZ) goto L_005bf8df;
L_005bf8a8:; BB(0x005bf8a8);
    /* 005bf8a8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf8ab: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bf8ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bf8b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf8b7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8bb: je 0x5bf8ce */ if (fZ) goto L_005bf8ce;
L_005bf8bd:; BB(0x005bf8bd);
    /* 005bf8bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf8c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf8c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf8c7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bf8c9u); call_ind(t); }
    /* 005bf8c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bf8cc: jmp 0x5bf8d5 */ goto L_005bf8d5;
L_005bf8ce:; BB(0x005bf8ce);
    /* 005bf8ce: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005bf8d5:; BB(0x005bf8d5);
    /* 005bf8d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf8d8: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005bf8df:; BB(0x005bf8df);
    /* 005bf8df: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf8e2: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8e6: je 0x5bf91f */ if (fZ) goto L_005bf91f;
L_005bf8e8:; BB(0x005bf8e8);
    /* 005bf8e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf8eb: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bf8ee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bf8f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf8f4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005bf8f7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8fb: je 0x5bf90e */ if (fZ) goto L_005bf90e;
L_005bf8fd:; BB(0x005bf8fd);
    /* 005bf8fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf902: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf904: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf907: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5bf909u); call_ind(t); }
    /* 005bf909: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bf90c: jmp 0x5bf915 */ goto L_005bf915;
L_005bf90e:; BB(0x005bf90e);
    /* 005bf90e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005bf915:; BB(0x005bf915);
    /* 005bf915: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf918: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_005bf91f:; BB(0x005bf91f);
    /* 005bf91f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf922: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf929: je 0x5bf968 */ if (fZ) goto L_005bf968;
L_005bf92b:; BB(0x005bf92b);
    /* 005bf92b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf92e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bf934: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bf937: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf93a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bf93d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf941: je 0x5bf954 */ if (fZ) goto L_005bf954;
L_005bf943:; BB(0x005bf943);
    /* 005bf943: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf945: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf948: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf94a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf94d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5bf94fu); call_ind(t); }
    /* 005bf94f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005bf952: jmp 0x5bf95b */ goto L_005bf95b;
L_005bf954:; BB(0x005bf954);
    /* 005bf954: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005bf95b:; BB(0x005bf95b);
    /* 005bf95b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf95e: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_005bf968:; BB(0x005bf968);
    /* 005bf968: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf96b: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5bf970u); f_005e3fed();
    /* 005bf970: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf973: ret  */ FN_RET(0x005bf88d); r_esp += 4; return;
}

void f_005bf974(void) /* FUN_005bf974 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf974);
    /* 005bf974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf975: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf977: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf97a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bf97d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf980: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x5bf985u); f_005e4035();
    /* 005bf985: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf988: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf98c: jne 0x5bf9be */ if (!fZ) goto L_005bf9be;
L_005bf98e:; BB(0x005bf98e);
    /* 005bf98e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf990: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bf995u); f_0048ab58();
    /* 005bf995: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf998: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bf99b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf99f: je 0x5bf9ae */ if (fZ) goto L_005bf9ae;
L_005bf9a1:; BB(0x005bf9a1);
    /* 005bf9a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf9a4: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bf9a9u); f_005e9d30();
    /* 005bf9a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bf9ac: jmp 0x5bf9b5 */ goto L_005bf9b5;
L_005bf9ae:; BB(0x005bf9ae);
    /* 005bf9ae: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005bf9b5:; BB(0x005bf9b5);
    /* 005bf9b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf9bb: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
L_005bf9be:; BB(0x005bf9be);
    /* 005bf9be: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9c3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9c6: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bf9c9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bf9ceu); f_005ea0c3();
    /* 005bf9ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9d3: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005bf9d6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bf9dbu); f_005ea1cf();
    /* 005bf9db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9de: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005bf9e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9e4: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005bf9e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf9e9: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bf9ecu); call_ind(t); }
    /* 005bf9ec: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9ee: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9f6: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005bf9f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf9fc: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bf9ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfa01: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bfa04u); call_ind(t); }
    /* 005bfa04: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa06: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa09: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bfa0c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa0f: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bfa12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfa14: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bfa17u); call_ind(t); }
    /* 005bfa17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa1a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005bfa1d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa20: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005bfa23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfa25: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bfa28u); call_ind(t); }
    /* 005bfa28: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa2b: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfa2f: jne 0x5bfa61 */ if (!fZ) goto L_005bfa61;
L_005bfa31:; BB(0x005bfa31);
    /* 005bfa31: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa33: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bfa38u); f_0048ab58();
    /* 005bfa38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfa3b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bfa3e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfa42: je 0x5bfa51 */ if (fZ) goto L_005bfa51;
L_005bfa44:; BB(0x005bfa44);
    /* 005bfa44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfa47: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bfa4cu); f_005e9d30();
    /* 005bfa4c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bfa4f: jmp 0x5bfa58 */ goto L_005bfa58;
L_005bfa51:; BB(0x005bfa51);
    /* 005bfa51: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005bfa58:; BB(0x005bfa58);
    /* 005bfa58: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa5b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bfa5e: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
L_005bfa61:; BB(0x005bfa61);
    /* 005bfa61: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa69: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bfa6c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bfa71u); f_005ea0c3();
    /* 005bfa71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa76: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005bfa79: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bfa7eu); f_005ea1cf();
    /* 005bfa7e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa81: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 005bfa84: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa87: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 005bfa8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bfa8c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bfa8fu); call_ind(t); }
    /* 005bfa8f: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa91: push 0x1b2 */ { u32 v = 0x1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfa96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa99: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005bfa9c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfa9f: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bfaa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfaa4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bfaa7u); call_ind(t); }
    /* 005bfaa7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bfaa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfaac: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bfaaf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfab2: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bfab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfab7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bfabau); call_ind(t); }
    /* 005bfaba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfabd: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bfac0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfac3: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005bfac6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfac8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bfacbu); call_ind(t); }
    /* 005bfacb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bface: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfad5: jne 0x5bfb0a */ if (!fZ) goto L_005bfb0a;
L_005bfad7:; BB(0x005bfad7);
    /* 005bfad7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bfad9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5bfadeu); f_0048ab58();
    /* 005bfade: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfae1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bfae4: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfae8: je 0x5bfaf7 */ if (fZ) goto L_005bfaf7;
L_005bfaea:; BB(0x005bfaea);
    /* 005bfaea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfaed: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5bfaf2u); f_005e9d30();
    /* 005bfaf2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bfaf5: jmp 0x5bfafe */ goto L_005bfafe;
L_005bfaf7:; BB(0x005bfaf7);
    /* 005bfaf7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005bfafe:; BB(0x005bfafe);
    /* 005bfafe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb01: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bfb04: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
L_005bfb0a:; BB(0x005bfb0a);
    /* 005bfb0a: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb0f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb12: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005bfb18: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5bfb1du); f_005ea0c3();
    /* 005bfb1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb1f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb22: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 005bfb28: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bfb2du); f_005ea1cf();
    /* 005bfb2d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb30: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 005bfb36: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb39: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005bfb3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bfb41: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5bfb44u); call_ind(t); }
    /* 005bfb44: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb46: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb4b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb4e: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 005bfb54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb57: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bfb5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfb5f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5bfb62u); call_ind(t); }
    /* 005bfb62: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb64: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb67: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005bfb6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb70: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bfb76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfb78: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bfb7bu); call_ind(t); }
    /* 005bfb7b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb7e: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005bfb84: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bfb87: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005bfb8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfb8f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5bfb92u); call_ind(t); }
    /* 005bfb92: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfb94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfb95: ret  */ FN_RET(0x005bf974); r_esp += 4; return;
}

void f_005bfb96(void) /* FUN_005bfb96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfb96);
    /* 005bfb96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb97: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfb99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfb9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfb9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfba2: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5bfba7u); f_005e6160();
    /* 005bfba7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbaa: mov dword ptr [eax], 0x639e6c */ W32((u32)(r_eax), 0x639e6cu);
    /* 005bfbb0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfbb6: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfbbbu); f_005d9e23();
    /* 005bfbbb: add eax, 0x1c5c */ {  u32 a = r_eax; u32 b = 0x1c5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfbc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbc3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005bfbc6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfbcc: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005bfbcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbd2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bfbd5: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 005bfbdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbe2: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfbe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfbe5: ret 4 */ FN_RET(0x005bfb96); r_esp += 8; return;
}

