#include "protos.h"

void f_0044f560(void) /* FUN_0044f560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f560);
    /* 0044f560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f561: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f56a: call 0x44cb5c */ r_esp -= 4; W32(r_esp, 0x44f56fu); f_0044cb5c();
    /* 0044f56f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f572: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f577: je 0x44f585 */ if (fZ) goto L_0044f585;
L_0044f579:; BB(0x0044f579);
    /* 0044f579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f57c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f57d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f582u); f_0048ac1b();
    /* 0044f582: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f585:; BB(0x0044f585);
    /* 0044f585: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f588: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f58a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f58b: ret 4 */ FN_RET(0x0044f560); r_esp += 8; return;
}

void f_0044f590(void) /* FUN_0044f590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f590);
    /* 0044f590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f591: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f59a: call 0x44d5d1 */ r_esp -= 4; W32(r_esp, 0x44f59fu); f_0044d5d1();
    /* 0044f59f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f5a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f5a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5a7: je 0x44f5b5 */ if (fZ) goto L_0044f5b5;
L_0044f5a9:; BB(0x0044f5a9);
    /* 0044f5a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f5b2u); f_0048ac1b();
    /* 0044f5b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f5b5:; BB(0x0044f5b5);
    /* 0044f5b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f5ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f5bb: ret 4 */ FN_RET(0x0044f590); r_esp += 8; return;
}

void f_0044f5c0(void) /* FUN_0044f5c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f5c0);
    /* 0044f5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f5c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f5c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5ca: call 0x44d6d5 */ r_esp -= 4; W32(r_esp, 0x44f5cfu); f_0044d6d5();
    /* 0044f5cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f5d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f5d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f5d7: je 0x44f5e5 */ if (fZ) goto L_0044f5e5;
L_0044f5d9:; BB(0x0044f5d9);
    /* 0044f5d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f5e2u); f_0048ac1b();
    /* 0044f5e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f5e5:; BB(0x0044f5e5);
    /* 0044f5e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f5ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f5eb: ret 4 */ FN_RET(0x0044f5c0); r_esp += 8; return;
}

void f_0044f5f0(void) /* FUN_0044f5f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f5f0);
    /* 0044f5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f5f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f5fa: call 0x44dc22 */ r_esp -= 4; W32(r_esp, 0x44f5ffu); f_0044dc22();
    /* 0044f5ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f602: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f607: je 0x44f615 */ if (fZ) goto L_0044f615;
L_0044f609:; BB(0x0044f609);
    /* 0044f609: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f60c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f60d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f612u); f_0048ac1b();
    /* 0044f612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f615:; BB(0x0044f615);
    /* 0044f615: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f618: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f61a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f61b: ret 4 */ FN_RET(0x0044f5f0); r_esp += 8; return;
}

void f_0044f620(void) /* FUN_0044f620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f620);
    /* 0044f620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f621: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f62a: call 0x44ddb9 */ r_esp -= 4; W32(r_esp, 0x44f62fu); f_0044ddb9();
    /* 0044f62f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f632: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f635: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f637: je 0x44f645 */ if (fZ) goto L_0044f645;
L_0044f639:; BB(0x0044f639);
    /* 0044f639: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f63c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f63d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f642u); f_0048ac1b();
    /* 0044f642: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f645:; BB(0x0044f645);
    /* 0044f645: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f648: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f64a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f64b: ret 4 */ FN_RET(0x0044f620); r_esp += 8; return;
}

void f_0044f650(void) /* FUN_0044f650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f650);
    /* 0044f650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f651: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f65a: call 0x44ed65 */ r_esp -= 4; W32(r_esp, 0x44f65fu); f_0044ed65();
    /* 0044f65f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f662: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f667: je 0x44f675 */ if (fZ) goto L_0044f675;
L_0044f669:; BB(0x0044f669);
    /* 0044f669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f66c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f66d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f672u); f_0048ac1b();
    /* 0044f672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f675:; BB(0x0044f675);
    /* 0044f675: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f678: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f67b: ret 4 */ FN_RET(0x0044f650); r_esp += 8; return;
}

void f_0044f680(void) /* FUN_0044f680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f680);
    /* 0044f680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f681: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f68a: call 0x44ef61 */ r_esp -= 4; W32(r_esp, 0x44f68fu); f_0044ef61();
    /* 0044f68f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f692: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044f695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f697: je 0x44f6a5 */ if (fZ) goto L_0044f6a5;
L_0044f699:; BB(0x0044f699);
    /* 0044f699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f69c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f69d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x44f6a2u); f_0048ac1b();
    /* 0044f6a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f6a5:; BB(0x0044f6a5);
    /* 0044f6a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f6a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f6aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f6ab: ret 4 */ FN_RET(0x0044f680); r_esp += 8; return;
}

void f_0044f6b0(void) /* FUN_0044f6b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f6b0);
    /* 0044f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f6b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f6b6: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6bd: jne 0x44f6c4 */ if (!fZ) goto L_0044f6c4;
L_0044f6bf:; BB(0x0044f6bf);
    /* 0044f6bf: jmp 0x44f797 */ goto L_0044f797;
L_0044f6c4:; BB(0x0044f6c4);
    /* 0044f6c4: cmp dword ptr [0x6f6a14], 0 */ {  u32 a = R32((u32)(0x6f6a14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6cb: je 0x44f6e1 */ if (fZ) goto L_0044f6e1;
L_0044f6cd:; BB(0x0044f6cd);
    /* 0044f6cd: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 0044f6d3: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x44f6d8u); f_005e07a3();
    /* 0044f6d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6da: je 0x44f6e1 */ if (fZ) goto L_0044f6e1;
L_0044f6dc:; BB(0x0044f6dc);
    /* 0044f6dc: jmp 0x44f797 */ goto L_0044f797;
L_0044f6e1:; BB(0x0044f6e1);
    /* 0044f6e1: cmp dword ptr [0x6f6a14], 0 */ {  u32 a = R32((u32)(0x6f6a14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6e8: je 0x44f720 */ if (fZ) goto L_0044f720;
L_0044f6ea:; BB(0x0044f6ea);
    /* 0044f6ea: mov eax, dword ptr [0x6f6a14] */ r_eax = R32((u32)(0x6f6a14u));
    /* 0044f6ef: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044f6f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f6f5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f6f8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f6fc: je 0x44f70f */ if (fZ) goto L_0044f70f;
L_0044f6fe:; BB(0x0044f6fe);
    /* 0044f6fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f700: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f703: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044f705: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f708: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44f70au); call_ind(t); }
    /* 0044f70a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044f70d: jmp 0x44f716 */ goto L_0044f716;
L_0044f70f:; BB(0x0044f70f);
    /* 0044f70f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0044f716:; BB(0x0044f716);
    /* 0044f716: mov dword ptr [0x6f6a14], 0 */ W32((u32)(0x6f6a14u), 0x0u);
L_0044f720:; BB(0x0044f720);
    /* 0044f720: cmp dword ptr [0x6f6a14], 0 */ {  u32 a = R32((u32)(0x6f6a14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f727: jne 0x44f760 */ if (!fZ) goto L_0044f760;
L_0044f729:; BB(0x0044f729);
    /* 0044f729: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f72e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x44f733u); f_0048ab58();
    /* 0044f733: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f736: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044f739: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f73d: je 0x44f750 */ if (fZ) goto L_0044f750;
L_0044f73f:; BB(0x0044f73f);
    /* 0044f73f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f741: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f743: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f746: call 0x44fb80 */ r_esp -= 4; W32(r_esp, 0x44f74bu); f_0044fb80();
    /* 0044f74b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044f74e: jmp 0x44f757 */ goto L_0044f757;
L_0044f750:; BB(0x0044f750);
    /* 0044f750: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0044f757:; BB(0x0044f757);
    /* 0044f757: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f75a: mov dword ptr [0x6f6a14], ecx */ W32((u32)(0x6f6a14u), r_ecx);
L_0044f760:; BB(0x0044f760);
    /* 0044f760: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f762: push 0x426 */ { u32 v = 0x426u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f767: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 0044f76d: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x44f772u); f_005e0461();
    /* 0044f772: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 0044f778: call 0x45005c */ r_esp -= 4; W32(r_esp, 0x44f77du); f_0045005c();
    /* 0044f77d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f77f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f781: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 0044f787: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x44f78cu); f_005d81dc();
    /* 0044f78c: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 0044f792: call 0x45109a */ r_esp -= 4; W32(r_esp, 0x44f797u); f_0045109a();
L_0044f797:; BB(0x0044f797);
    /* 0044f797: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f79a: ret  */ FN_RET(0x0044f6b0); r_esp += 4; return;
}

void f_0044f79b(void) /* FUN_0044f79b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f79b);
    /* 0044f79b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f79c: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f79e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f79f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f7a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7a7: call 0x5e6882 */ r_esp -= 4; W32(r_esp, 0x44f7acu); f_005e6882();
    /* 0044f7ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7af: mov dword ptr [eax], 0x6350cc */ W32((u32)(r_eax), 0x6350ccu);
    /* 0044f7b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7b8: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 0044f7bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7c2: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 0044f7c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7cc: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0044f7d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f7d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f7d9: ret  */ FN_RET(0x0044f79b); r_esp += 4; return;
}

void f_0044f7da(void) /* FUN_0044f7da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f7da);
    /* 0044f7da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7db: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f7dd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f7e0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044f7e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f7e6: mov dword ptr [eax], 0x6350cc */ W32((u32)(r_eax), 0x6350ccu);
    /* 0044f7ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f7ef: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f7f3: je 0x44f82c */ if (fZ) goto L_0044f82c;
L_0044f7f5:; BB(0x0044f7f5);
    /* 0044f7f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f7f8: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0044f7fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044f7fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f801: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f804: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f808: je 0x44f81b */ if (fZ) goto L_0044f81b;
L_0044f80a:; BB(0x0044f80a);
    /* 0044f80a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f80c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f80f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044f811: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f814: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44f816u); call_ind(t); }
    /* 0044f816: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044f819: jmp 0x44f822 */ goto L_0044f822;
L_0044f81b:; BB(0x0044f81b);
    /* 0044f81b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0044f822:; BB(0x0044f822);
    /* 0044f822: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f825: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_0044f82c:; BB(0x0044f82c);
    /* 0044f82c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f82f: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f833: je 0x44f86c */ if (fZ) goto L_0044f86c;
L_0044f835:; BB(0x0044f835);
    /* 0044f835: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f838: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044f83b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044f83e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f841: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0044f844: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f848: je 0x44f85b */ if (fZ) goto L_0044f85b;
L_0044f84a:; BB(0x0044f84a);
    /* 0044f84a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f84c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f84f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f851: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f854: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44f856u); call_ind(t); }
    /* 0044f856: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044f859: jmp 0x44f862 */ goto L_0044f862;
L_0044f85b:; BB(0x0044f85b);
    /* 0044f85b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0044f862:; BB(0x0044f862);
    /* 0044f862: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f865: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_0044f86c:; BB(0x0044f86c);
    /* 0044f86c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f86f: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x44f874u); f_005e69b1();
    /* 0044f874: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f876: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f877: ret  */ FN_RET(0x0044f7da); r_esp += 4; return;
}

void f_0044f878(void) /* FUN_0044f878 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f878);
    /* 0044f878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f879: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f87b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f87e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044f881: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f884: call 0x5e6a8f */ r_esp -= 4; W32(r_esp, 0x44f889u); f_005e6a8f();
    /* 0044f889: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f88c: call 0x5e71b8 */ r_esp -= 4; W32(r_esp, 0x44f891u); f_005e71b8();
    /* 0044f891: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f894: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f898: jne 0x44f8ca */ if (!fZ) goto L_0044f8ca;
L_0044f89a:; BB(0x0044f89a);
    /* 0044f89a: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f89c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x44f8a1u); f_0048ab58();
    /* 0044f8a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f8a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044f8a7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f8ab: je 0x44f8ba */ if (fZ) goto L_0044f8ba;
L_0044f8ad:; BB(0x0044f8ad);
    /* 0044f8ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8b0: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x44f8b5u); f_005e9d30();
    /* 0044f8b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044f8b8: jmp 0x44f8c1 */ goto L_0044f8c1;
L_0044f8ba:; BB(0x0044f8ba);
    /* 0044f8ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0044f8c1:; BB(0x0044f8c1);
    /* 0044f8c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044f8c7: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
L_0044f8ca:; BB(0x0044f8ca);
    /* 0044f8ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8cd: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044f8d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8d3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044f8d6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0044f8d9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8de: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0044f8e1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8e4: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0044f8e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f8e9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44f8ecu); call_ind(t); }
    /* 0044f8ec: push 0x6d60 */ { u32 v = 0x6d60u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f8f4: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044f8f7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x44f8fcu); f_005ea0c3();
    /* 0044f8fc: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f901: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f906: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0044f909: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f90c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0044f90f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f911: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x44f914u); call_ind(t); }
    /* 0044f914: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f917: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044f91a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f91d: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0044f920: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f922: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x44f925u); call_ind(t); }
    /* 0044f925: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f928: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f92c: jne 0x44f95e */ if (!fZ) goto L_0044f95e;
L_0044f92e:; BB(0x0044f92e);
    /* 0044f92e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f930: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x44f935u); f_0048ab58();
    /* 0044f935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f938: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044f93b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f93f: je 0x44f94e */ if (fZ) goto L_0044f94e;
L_0044f941:; BB(0x0044f941);
    /* 0044f941: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f944: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x44f949u); f_005e9d30();
    /* 0044f949: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044f94c: jmp 0x44f955 */ goto L_0044f955;
L_0044f94e:; BB(0x0044f94e);
    /* 0044f94e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0044f955:; BB(0x0044f955);
    /* 0044f955: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f958: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f95b: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
L_0044f95e:; BB(0x0044f95e);
    /* 0044f95e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f961: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044f964: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f967: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044f96a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0044f96d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f96f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f972: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0044f975: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f978: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0044f97b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f97d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x44f980u); call_ind(t); }
    /* 0044f980: push 0x62a8 */ { u32 v = 0x62a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f985: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f988: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044f98b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x44f990u); f_005ea0c3();
    /* 0044f990: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f995: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f99a: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0044f99d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f9a0: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0044f9a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f9a5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x44f9a8u); call_ind(t); }
    /* 0044f9a8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f9ab: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044f9ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f9b1: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0044f9b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f9b6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x44f9b9u); call_ind(t); }
    /* 0044f9b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f9bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f9bc: ret  */ FN_RET(0x0044f878); r_esp += 4; return;
}

void f_0044f9bd(void) /* FUN_0044f9bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f9bd);
    /* 0044f9bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f9be: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f9c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f9c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f9c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9c7: call 0x5e7110 */ r_esp -= 4; W32(r_esp, 0x44f9ccu); f_005e7110();
    /* 0044f9cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9cf: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044f9d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9d5: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0044f9d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f9da: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x44f9ddu); call_ind(t); }
    /* 0044f9dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9e0: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044f9e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9e6: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0044f9e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044f9eb: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x44f9eeu); call_ind(t); }
    /* 0044f9ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f9f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f9f1: ret  */ FN_RET(0x0044f9bd); r_esp += 4; return;
}

void f_0044f9f2(void) /* FUN_0044f9f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f9f2);
    /* 0044f9f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f9f3: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f9f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f9f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f9f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f9fc: call 0x5e7172 */ r_esp -= 4; W32(r_esp, 0x44fa01u); f_005e7172();
    /* 0044fa01: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa04: ret  */ FN_RET(0x0044f9f2); r_esp += 4; return;
}

void f_0044fa05(void) /* FUN_0044fa05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa05);
    /* 0044fa05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa06: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa09: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044fa12: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0044fa15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa18: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044fa1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044fa21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa24: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x44fa27u); call_ind(t); }
    /* 0044fa27: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa2a: ret 4 */ FN_RET(0x0044fa05); r_esp += 8; return;
}

void f_0044fa2d(void) /* FUN_0044fa2d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa2d);
    /* 0044fa2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa2e: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa31: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa37: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 0044fa3a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa3d: ret  */ FN_RET(0x0044fa2d); r_esp += 4; return;
}

void f_0044fa3e(void) /* FUN_0044fa3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa3e);
    /* 0044fa3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa3f: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa45: mov eax, 0x2e */ r_eax = 0x2eu;
    /* 0044fa4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa4d: ret  */ FN_RET(0x0044fa3e); r_esp += 4; return;
}

void f_0044fa4e(void) /* FUN_0044fa4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa4e);
    /* 0044fa4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa4f: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa55: mov eax, 1 */ r_eax = 0x1u;
    /* 0044fa5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fa5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa5d: ret  */ FN_RET(0x0044fa4e); r_esp += 4; return;
}

void f_0044fa5e(void) /* FUN_0044fa5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fa5e);
    /* 0044fa5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa5f: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa63: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044fa66: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fa6a: jne 0x44fa96 */ if (!fZ) goto L_0044fa96;
L_0044fa6c:; BB(0x0044fa6c);
    /* 0044fa6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa6f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0044fa72: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fa75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044fa77: jge 0x44fa85 */ if ((fS==fO)) goto L_0044fa85;
L_0044fa79:; BB(0x0044fa79);
    /* 0044fa79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa7c: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 0044fa83: jmp 0x44fa94 */ goto L_0044fa94;
L_0044fa85:; BB(0x0044fa85);
    /* 0044fa85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa88: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0044fa8b: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fa8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa91: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
L_0044fa94:; BB(0x0044fa94);
    /* 0044fa94: jmp 0x44fad6 */ goto L_0044fad6;
L_0044fa96:; BB(0x0044fa96);
    /* 0044fa96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fa99: mov esi, dword ptr [eax + 0x6c] */ r_esi = R32((u32)(r_eax+0x6cu));
    /* 0044fa9c: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044fa9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faa2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044faa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faa7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x44faaau); call_ind(t); }
    /* 0044faaa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044faad: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044faaf: jle 0x44fac7 */ if ((fZ||fS!=fO)) goto L_0044fac7;
L_0044fab1:; BB(0x0044fab1);
    /* 0044fab1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fab4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044fab6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fab9: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x44fabcu); call_ind(t); }
    /* 0044fabc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044fabf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fac2: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0044fac5: jmp 0x44fad6 */ goto L_0044fad6;
L_0044fac7:; BB(0x0044fac7);
    /* 0044fac7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faca: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044facd: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fad0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fad3: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
L_0044fad6:; BB(0x0044fad6);
    /* 0044fad6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fad9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044fadc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fadd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fae0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044fae2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fae5: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x44fae8u); call_ind(t); }
    /* 0044fae8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044fae9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044faeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044faec: ret 8 */ FN_RET(0x0044fa5e); r_esp += 12; return;
}

void f_0044faef(void) /* FUN_0044faef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044faef);
    /* 0044faef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044faf0: mov ebp, esp */ r_ebp = r_esp;
    /* 0044faf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044faf3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044faf6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044faf9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044fafc: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0044faff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb06: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044fb09: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fb0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb0d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044fb13: call 0x46014e */ r_esp -= 4; W32(r_esp, 0x44fb18u); f_0046014e();
    /* 0044fb18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb1c: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0044fb1f: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x44fb24u); f_005ea0c3();
    /* 0044fb24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb28: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb2b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0044fb2e: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb32: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0044fb38: call 0x46032e */ r_esp -= 4; W32(r_esp, 0x44fb3du); f_0046032e();
    /* 0044fb3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb41: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0044fb44: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x44fb49u); f_005ea1cf();
    /* 0044fb49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb4c: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 0044fb4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb52: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0044fb55: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044fb57: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x44fb5au); call_ind(t); }
    /* 0044fb5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb5d: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0044fb60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb63: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0044fb66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044fb68: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x44fb6bu); call_ind(t); }
    /* 0044fb6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb6e: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0044fb71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044fb75: call 0x5e729b */ r_esp -= 4; W32(r_esp, 0x44fb7au); f_005e729b();
    /* 0044fb7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fb7d: ret 4 */ FN_RET(0x0044faef); r_esp += 8; return;
}

void f_0044fb80(void) /* FUN_0044fb80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fb80);
    /* 0044fb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fb83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fb86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044fb89: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044fb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044fb90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fb94: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x44fb99u); f_005d80f0();
    /* 0044fb99: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fb9c: mov dword ptr [edx], 0x635124 */ W32((u32)(r_edx), 0x635124u);
    /* 0044fba2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fba5: mov dword ptr [0x6f6a14], eax */ W32((u32)(0x6f6a14u), r_eax);
    /* 0044fbaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fbad: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 0044fbb7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fbba: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0044fbc4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fbc7: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0044fbd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fbd4: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0044fbde: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fbe1: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 0044fbeb: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044fbf1: jmp 0x44fbff */ goto L_0044fbff;
L_0044fbf3:; BB(0x0044fbf3);
    /* 0044fbf3: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0044fbf7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0044fbfb: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0044fbff:; BB(0x0044fbff);
    /* 0044fbff: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fc03: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fc06: jge 0x44fc1c */ if ((fS==fO)) goto L_0044fc1c;
L_0044fc08:; BB(0x0044fc08);
    /* 0044fc08: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fc0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc0f: mov dword ptr [eax + edx*4 + 0xa0], 0 */ W32((u32)(r_eax+r_edx*4+0xa0u), 0x0u);
    /* 0044fc1a: jmp 0x44fbf3 */ goto L_0044fbf3;
L_0044fc1c:; BB(0x0044fc1c);
    /* 0044fc1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc1f: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 0044fc29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc2c: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0044fc36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc39: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 0044fc43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc46: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0044fc50: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc53: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 0044fc5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc60: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0044fc6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fc6d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fc6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fc70: ret 8 */ FN_RET(0x0044fb80); r_esp += 12; return;
}

void f_0044fc73(void) /* FUN_0044fc73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044fc73);
    /* 0044fc73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc74: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fc76: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fc7c: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0044fc7f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fc82: mov dword ptr [eax], 0x635124 */ W32((u32)(r_eax), 0x635124u);
    /* 0044fc88: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fc8b: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fc92: je 0x44fcd1 */ if (fZ) goto L_0044fcd1;
L_0044fc94:; BB(0x0044fc94);
    /* 0044fc94: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fc97: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0044fc9d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044fca0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044fca3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044fca6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fcaa: je 0x44fcbd */ if (fZ) goto L_0044fcbd;
L_0044fcac:; BB(0x0044fcac);
    /* 0044fcac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fcae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fcb1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044fcb3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044fcb6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44fcb8u); call_ind(t); }
    /* 0044fcb8: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0044fcbb: jmp 0x44fcc4 */ goto L_0044fcc4;
L_0044fcbd:; BB(0x0044fcbd);
    /* 0044fcbd: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0044fcc4:; BB(0x0044fcc4);
    /* 0044fcc4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fcc7: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_0044fcd1:; BB(0x0044fcd1);
    /* 0044fcd1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fcd4: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fcdb: je 0x44fd1a */ if (fZ) goto L_0044fd1a;
L_0044fcdd:; BB(0x0044fcdd);
    /* 0044fcdd: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fce0: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0044fce6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044fce9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fcec: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044fcef: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fcf3: je 0x44fd06 */ if (fZ) goto L_0044fd06;
L_0044fcf5:; BB(0x0044fcf5);
    /* 0044fcf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fcf7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044fcfa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044fcfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044fcff: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44fd01u); call_ind(t); }
    /* 0044fd01: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0044fd04: jmp 0x44fd0d */ goto L_0044fd0d;
L_0044fd06:; BB(0x0044fd06);
    /* 0044fd06: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0044fd0d:; BB(0x0044fd0d);
    /* 0044fd0d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd10: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_0044fd1a:; BB(0x0044fd1a);
    /* 0044fd1a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd1d: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd24: je 0x44fd63 */ if (fZ) goto L_0044fd63;
L_0044fd26:; BB(0x0044fd26);
    /* 0044fd26: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd29: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0044fd2f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044fd32: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044fd35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044fd38: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd3c: je 0x44fd4f */ if (fZ) goto L_0044fd4f;
L_0044fd3e:; BB(0x0044fd3e);
    /* 0044fd3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd40: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044fd43: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044fd45: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044fd48: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44fd4au); call_ind(t); }
    /* 0044fd4a: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0044fd4d: jmp 0x44fd56 */ goto L_0044fd56;
L_0044fd4f:; BB(0x0044fd4f);
    /* 0044fd4f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0044fd56:; BB(0x0044fd56);
    /* 0044fd56: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd59: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
L_0044fd63:; BB(0x0044fd63);
    /* 0044fd63: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd66: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd6d: je 0x44fdac */ if (fZ) goto L_0044fdac;
L_0044fd6f:; BB(0x0044fd6f);
    /* 0044fd6f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fd72: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0044fd78: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044fd7b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044fd7e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044fd81: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd85: je 0x44fd98 */ if (fZ) goto L_0044fd98;
L_0044fd87:; BB(0x0044fd87);
    /* 0044fd87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044fd8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044fd8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044fd91: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44fd93u); call_ind(t); }
    /* 0044fd93: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044fd96: jmp 0x44fd9f */ goto L_0044fd9f;
L_0044fd98:; BB(0x0044fd98);
    /* 0044fd98: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0044fd9f:; BB(0x0044fd9f);
    /* 0044fd9f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fda2: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
L_0044fdac:; BB(0x0044fdac);
    /* 0044fdac: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fdaf: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fdb6: je 0x44fdf5 */ if (fZ) goto L_0044fdf5;
L_0044fdb8:; BB(0x0044fdb8);
    /* 0044fdb8: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fdbb: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0044fdc1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044fdc4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044fdc7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044fdca: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fdce: je 0x44fde1 */ if (fZ) goto L_0044fde1;
L_0044fdd0:; BB(0x0044fdd0);
    /* 0044fdd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdd2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044fdd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044fdd7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044fdda: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44fddcu); call_ind(t); }
    /* 0044fddc: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0044fddf: jmp 0x44fde8 */ goto L_0044fde8;
L_0044fde1:; BB(0x0044fde1);
    /* 0044fde1: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0044fde8:; BB(0x0044fde8);
    /* 0044fde8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fdeb: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
L_0044fdf5:; BB(0x0044fdf5);
    /* 0044fdf5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044fdfb: jmp 0x44fe09 */ goto L_0044fe09;
L_0044fdfd:; BB(0x0044fdfd);
    /* 0044fdfd: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0044fe01: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0044fe05: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0044fe09:; BB(0x0044fe09);
    /* 0044fe09: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fe0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fe10: jge 0x44fe6c */ if ((fS==fO)) goto L_0044fe6c;
L_0044fe12:; BB(0x0044fe12);
    /* 0044fe12: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fe16: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fe19: cmp dword ptr [edx + ecx*4 + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe21: je 0x44fe6a */ if (fZ) goto L_0044fe6a;
L_0044fe23:; BB(0x0044fe23);
    /* 0044fe23: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fe27: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fe2a: mov edx, dword ptr [ecx + eax*4 + 0xa0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 0044fe31: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0044fe34: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044fe37: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044fe3a: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe3e: je 0x44fe51 */ if (fZ) goto L_0044fe51;
L_0044fe40:; BB(0x0044fe40);
    /* 0044fe40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe42: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044fe45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044fe47: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044fe4a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44fe4cu); call_ind(t); }
    /* 0044fe4c: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0044fe4f: jmp 0x44fe58 */ goto L_0044fe58;
L_0044fe51:; BB(0x0044fe51);
    /* 0044fe51: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0044fe58:; BB(0x0044fe58);
    /* 0044fe58: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044fe5c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fe5f: mov dword ptr [ecx + eax*4 + 0xa0], 0 */ W32((u32)(r_ecx+r_eax*4+0xa0u), 0x0u);
L_0044fe6a:; BB(0x0044fe6a);
    /* 0044fe6a: jmp 0x44fdfd */ goto L_0044fdfd;
L_0044fe6c:; BB(0x0044fe6c);
    /* 0044fe6c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fe6f: cmp dword ptr [edx + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe76: je 0x44febb */ if (fZ) goto L_0044febb;
L_0044fe78:; BB(0x0044fe78);
    /* 0044fe78: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fe7b: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0044fe81: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0044fe84: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044fe87: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0044fe8a: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe8e: je 0x44fea4 */ if (fZ) goto L_0044fea4;
L_0044fe90:; BB(0x0044fe90);
    /* 0044fe90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe92: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044fe95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044fe97: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044fe9a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44fe9cu); call_ind(t); }
    /* 0044fe9c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0044fea2: jmp 0x44feae */ goto L_0044feae;
L_0044fea4:; BB(0x0044fea4);
    /* 0044fea4: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0044feae:; BB(0x0044feae);
    /* 0044feae: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044feb1: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
L_0044febb:; BB(0x0044febb);
    /* 0044febb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044febe: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fec5: je 0x44ff0a */ if (fZ) goto L_0044ff0a;
L_0044fec7:; BB(0x0044fec7);
    /* 0044fec7: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044feca: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0044fed0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044fed3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044fed6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0044fed9: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fedd: je 0x44fef3 */ if (fZ) goto L_0044fef3;
L_0044fedf:; BB(0x0044fedf);
    /* 0044fedf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fee1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044fee4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044fee6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044fee9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44feebu); call_ind(t); }
    /* 0044feeb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0044fef1: jmp 0x44fefd */ goto L_0044fefd;
L_0044fef3:; BB(0x0044fef3);
    /* 0044fef3: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0044fefd:; BB(0x0044fefd);
    /* 0044fefd: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff00: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
L_0044ff0a:; BB(0x0044ff0a);
    /* 0044ff0a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff0d: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ff14: je 0x44ff59 */ if (fZ) goto L_0044ff59;
L_0044ff16:; BB(0x0044ff16);
    /* 0044ff16: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff19: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0044ff1f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0044ff22: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044ff25: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0044ff28: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ff2c: je 0x44ff42 */ if (fZ) goto L_0044ff42;
L_0044ff2e:; BB(0x0044ff2e);
    /* 0044ff2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ff30: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044ff33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ff35: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044ff38: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44ff3au); call_ind(t); }
    /* 0044ff3a: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0044ff40: jmp 0x44ff4c */ goto L_0044ff4c;
L_0044ff42:; BB(0x0044ff42);
    /* 0044ff42: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0044ff4c:; BB(0x0044ff4c);
    /* 0044ff4c: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff4f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
L_0044ff59:; BB(0x0044ff59);
    /* 0044ff59: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff5c: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ff63: je 0x44ffa8 */ if (fZ) goto L_0044ffa8;
L_0044ff65:; BB(0x0044ff65);
    /* 0044ff65: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff68: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044ff6e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0044ff71: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044ff74: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0044ff77: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ff7b: je 0x44ff91 */ if (fZ) goto L_0044ff91;
L_0044ff7d:; BB(0x0044ff7d);
    /* 0044ff7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ff7f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0044ff82: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044ff84: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0044ff87: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44ff89u); call_ind(t); }
    /* 0044ff89: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0044ff8f: jmp 0x44ff9b */ goto L_0044ff9b;
L_0044ff91:; BB(0x0044ff91);
    /* 0044ff91: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0044ff9b:; BB(0x0044ff9b);
    /* 0044ff9b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ff9e: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_0044ffa8:; BB(0x0044ffa8);
    /* 0044ffa8: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ffab: cmp dword ptr [edx + 0xb8], 0 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ffb2: je 0x44fff7 */ if (fZ) goto L_0044fff7;
L_0044ffb4:; BB(0x0044ffb4);
    /* 0044ffb4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ffb7: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0044ffbd: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0044ffc0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044ffc3: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0044ffc6: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ffca: je 0x44ffe0 */ if (fZ) goto L_0044ffe0;
L_0044ffcc:; BB(0x0044ffcc);
    /* 0044ffcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ffce: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044ffd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ffd3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044ffd6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x44ffd8u); call_ind(t); }
    /* 0044ffd8: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0044ffde: jmp 0x44ffea */ goto L_0044ffea;
L_0044ffe0:; BB(0x0044ffe0);
    /* 0044ffe0: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0044ffea:; BB(0x0044ffea);
    /* 0044ffea: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0044ffed: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_0044fff7:; BB(0x0044fff7);
    /* 0044fff7: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044fffa: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450001: je 0x450046 */ if (fZ) goto L_00450046;
L_00450003:; BB(0x00450003);
    /* 00450003: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00450006: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0045000c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0045000f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00450012: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00450015: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450019: je 0x45002f */ if (fZ) goto L_0045002f;
L_0045001b:; BB(0x0045001b);
    /* 0045001b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045001d: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00450020: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450022: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00450025: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x450027u); call_ind(t); }
    /* 00450027: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0045002d: jmp 0x450039 */ goto L_00450039;
L_0045002f:; BB(0x0045002f);
    /* 0045002f: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00450039:; BB(0x00450039);
    /* 00450039: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0045003c: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_00450046:; BB(0x00450046);
    /* 00450046: mov dword ptr [0x6f6a14], 0 */ W32((u32)(0x6f6a14u), 0x0u);
    /* 00450050: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00450053: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x450058u); f_005d8154();
    /* 00450058: mov esp, ebp */ r_esp = r_ebp;
    /* 0045005a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045005b: ret  */ FN_RET(0x0044fc73); r_esp += 4; return;
}

void f_0045005c(void) /* FUN_0045005c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045005c);
    /* 0045005c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045005d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045005f: sub esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450065: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 0045006b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045006d: push 0x67a7d0 */ { u32 v = 0x67a7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450072: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450078: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x45007du); f_005d825e();
    /* 0045007d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0045007f: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450085: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x45008au); f_005e0731();
    /* 0045008a: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450090: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450097: jne 0x4500e4 */ if (!fZ) goto L_004500e4;
L_00450099:; BB(0x00450099);
    /* 00450099: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0045009e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4500a3u); f_0048ab58();
    /* 004500a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004500a6: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 004500ac: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004500b3: je 0x4500c8 */ if (fZ) goto L_004500c8;
L_004500b5:; BB(0x004500b5);
    /* 004500b5: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004500bb: call 0x4514b1 */ r_esp -= 4; W32(r_esp, 0x4500c0u); f_004514b1();
    /* 004500c0: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 004500c6: jmp 0x4500d2 */ goto L_004500d2;
L_004500c8:; BB(0x004500c8);
    /* 004500c8: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_004500d2:; BB(0x004500d2);
    /* 004500d2: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004500d8: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 004500de: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_004500e4:; BB(0x004500e4);
    /* 004500e4: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004500ea: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004500f0: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004500f6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004500f9: push 0x67a7dc */ { u32 v = 0x67a7dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450104: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0045010a: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450110: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00450116: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450118: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x45011bu); call_ind(t); }
    /* 0045011b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045011d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0045011f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00450121: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450127: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0045012d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450133: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00450139: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045013b: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x45013eu); call_ind(t); }
    /* 0045013e: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00450143: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450149: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0045014f: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450155: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0045015b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045015d: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x450160u); call_ind(t); }
    /* 00450160: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00450162: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00450164: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00450166: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00450168: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045016e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00450174: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x450179u); f_005d5ff2();
    /* 00450179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045017b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045017d: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450183: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00450189: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045018f: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00450195: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450197: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x45019au); call_ind(t); }
    /* 0045019a: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 0045019f: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 004501a4: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501aa: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004501b0: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501b6: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004501bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004501be: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4501c1u); call_ind(t); }
    /* 004501c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004501c3: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501c9: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004501cf: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501d5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004501db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004501dd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4501e0u); call_ind(t); }
    /* 004501e0: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501e6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004501ec: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004501f2: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004501f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004501fa: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4501fdu); call_ind(t); }
    /* 004501fd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004501ff: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450205: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0045020b: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x450210u); f_005d65d6();
    /* 00450210: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450216: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045021d: jne 0x45026a */ if (!fZ) goto L_0045026a;
L_0045021f:; BB(0x0045021f);
    /* 0045021f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00450224: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450229u); f_0048ab58();
    /* 00450229: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045022c: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00450232: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450239: je 0x45024e */ if (fZ) goto L_0045024e;
L_0045023b:; BB(0x0045023b);
    /* 0045023b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00450241: call 0x45152c */ r_esp -= 4; W32(r_esp, 0x450246u); f_0045152c();
    /* 00450246: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0045024c: jmp 0x450258 */ goto L_00450258;
L_0045024e:; BB(0x0045024e);
    /* 0045024e: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_00450258:; BB(0x00450258);
    /* 00450258: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045025e: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00450264: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
L_0045026a:; BB(0x0045026a);
    /* 0045026a: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450270: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00450276: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045027c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045027f: push 0x67a7e0 */ { u32 v = 0x67a7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450284: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045028a: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00450290: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450296: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0045029c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045029e: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4502a1u); call_ind(t); }
    /* 004502a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004502a3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004502a5: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004502a7: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502ad: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004502b3: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502b9: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004502bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004502c1: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4502c4u); call_ind(t); }
    /* 004502c4: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004502c9: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502cf: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004502d5: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502db: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004502e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004502e3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4502e6u); call_ind(t); }
    /* 004502e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004502e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004502ea: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502f0: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004502f6: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004502fc: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00450302: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450304: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x450307u); call_ind(t); }
    /* 00450307: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 0045030c: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 00450311: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450317: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0045031d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450323: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00450329: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045032b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x45032eu); call_ind(t); }
    /* 0045032e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450330: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450336: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0045033c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450342: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00450348: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045034a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x45034du); call_ind(t); }
    /* 0045034d: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450353: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00450359: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045035f: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00450365: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450367: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x45036au); call_ind(t); }
    /* 0045036a: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045036c: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450372: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00450378: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x45037du); f_005d65d6();
    /* 0045037d: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450383: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045038a: jne 0x4503d7 */ if (!fZ) goto L_004503d7;
L_0045038c:; BB(0x0045038c);
    /* 0045038c: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00450391: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450396u); f_0048ab58();
    /* 00450396: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450399: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0045039f: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503a6: je 0x4503bb */ if (fZ) goto L_004503bb;
L_004503a8:; BB(0x004503a8);
    /* 004503a8: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004503ae: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4503b3u); f_005e8590();
    /* 004503b3: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 004503b9: jmp 0x4503c5 */ goto L_004503c5;
L_004503bb:; BB(0x004503bb);
    /* 004503bb: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_004503c5:; BB(0x004503c5);
    /* 004503c5: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004503cb: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 004503d1: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
L_004503d7:; BB(0x004503d7);
    /* 004503d7: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004503dd: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 004503e3: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004503e9: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004503ec: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004503ee: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004503f4: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004503fa: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4503ffu); f_005e87aa();
    /* 004503ff: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450405: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 0045040b: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450411: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00450417: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450419: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x45041cu); call_ind(t); }
    /* 0045041c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045041e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00450420: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450426: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0045042c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450432: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00450438: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045043a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x45043du); call_ind(t); }
    /* 0045043d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045043f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450445: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0045044b: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450451: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00450457: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450459: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x45045cu); call_ind(t); }
    /* 0045045c: push 0x67a7e8 */ { u32 v = 0x67a7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00450461: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450467: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0045046d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450473: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00450479: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045047b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x45047eu); call_ind(t); }
    /* 0045047e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450484: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045048b: jne 0x4504d8 */ if (!fZ) goto L_004504d8;
L_0045048d:; BB(0x0045048d);
    /* 0045048d: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00450492: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450497u); f_0048ab58();
    /* 00450497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045049a: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 004504a0: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004504a7: je 0x4504bc */ if (fZ) goto L_004504bc;
L_004504a9:; BB(0x004504a9);
    /* 004504a9: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 004504af: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4504b4u); f_005e8590();
    /* 004504b4: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 004504ba: jmp 0x4504c6 */ goto L_004504c6;
L_004504bc:; BB(0x004504bc);
    /* 004504bc: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_004504c6:; BB(0x004504c6);
    /* 004504c6: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004504cc: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 004504d2: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
L_004504d8:; BB(0x004504d8);
    /* 004504d8: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004504de: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004504e4: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004504ea: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004504ed: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004504ef: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004504f5: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004504fb: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x450500u); f_005e87aa();
    /* 00450500: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450506: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0045050c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450512: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00450518: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045051a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45051du); call_ind(t); }
    /* 0045051d: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00450522: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00450524: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045052a: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00450530: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450536: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0045053c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045053e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450541u); call_ind(t); }
    /* 00450541: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450543: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450549: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0045054f: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450555: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0045055b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045055d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x450560u); call_ind(t); }
    /* 00450560: push 0x67a7f8 */ { u32 v = 0x67a7f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00450565: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045056b: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00450571: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450577: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0045057d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045057f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x450582u); call_ind(t); }
    /* 00450582: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450588: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045058f: jne 0x4505d9 */ if (!fZ) goto L_004505d9;
L_00450591:; BB(0x00450591);
    /* 00450591: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00450593: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450598u); f_0048ab58();
    /* 00450598: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045059b: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 004505a1: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004505a8: je 0x4505bd */ if (fZ) goto L_004505bd;
L_004505aa:; BB(0x004505aa);
    /* 004505aa: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 004505b0: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x4505b5u); f_005d505b();
    /* 004505b5: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 004505bb: jmp 0x4505c7 */ goto L_004505c7;
L_004505bd:; BB(0x004505bd);
    /* 004505bd: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_004505c7:; BB(0x004505c7);
    /* 004505c7: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004505cd: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 004505d3: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
L_004505d9:; BB(0x004505d9);
    /* 004505d9: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004505df: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004505e5: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004505eb: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004505ee: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004505f4: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004505fa: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450600: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00450606: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450608: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45060bu); call_ind(t); }
    /* 0045060b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045060d: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450613: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00450619: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045061f: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00450625: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450627: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x45062au); call_ind(t); }
    /* 0045062a: mov word ptr [ebp - 0x104], 0 */ W16((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 00450633: jmp 0x450647 */ goto L_00450647;
L_00450635:; BB(0x00450635);
    /* 00450635: mov ax, word ptr [ebp - 0x104] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffefcu))) & 0xffffu);
    /* 0045063c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00450640: mov word ptr [ebp - 0x104], ax */ W16((u32)(r_ebp+0xfffffefcu), (u16)r_eax);
L_00450647:; BB(0x00450647);
    /* 00450647: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045064e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450651: jge 0x4508b4 */ if ((fS==fO)) goto L_004508b4;
L_00450657:; BB(0x00450657);
    /* 00450657: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045065e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450664: cmp dword ptr [eax + edx*4 + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045066c: jne 0x4506cb */ if (!fZ) goto L_004506cb;
L_0045066e:; BB(0x0045066e);
    /* 0045066e: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00450673: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450678u); f_0048ab58();
    /* 00450678: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045067b: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00450681: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450688: je 0x4506a7 */ if (fZ) goto L_004506a7;
L_0045068a:; BB(0x0045068a);
    /* 0045068a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045068c: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450694: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0045069a: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x45069fu); f_005d4ec0();
    /* 0045069f: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 004506a5: jmp 0x4506b1 */ goto L_004506b1;
L_004506a7:; BB(0x004506a7);
    /* 004506a7: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_004506b1:; BB(0x004506b1);
    /* 004506b1: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004506b8: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004506be: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 004506c4: mov dword ptr [eax + edx*4 + 0xa0], ecx */ W32((u32)(r_eax+r_edx*4+0xa0u), r_ecx);
L_004506cb:; BB(0x004506cb);
    /* 004506cb: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004506d2: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004506d8: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 004506df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004506e0: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004506e6: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004506ec: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x4506f1u); f_005d50ed();
    /* 004506f1: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004506f8: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004506fe: mov edx, dword ptr [ecx + eax*4 + 0xa0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 00450705: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045070b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0045070e: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450715: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450717: jne 0x450725 */ if (!fZ) goto L_00450725;
L_00450719:; BB(0x00450719);
    /* 00450719: mov dword ptr [ebp - 0x154], 0x67a808 */ W32((u32)(r_ebp+0xfffffeacu), 0x67a808u);
    /* 00450723: jmp 0x45072f */ goto L_0045072f;
L_00450725:; BB(0x00450725);
    /* 00450725: mov dword ptr [ebp - 0x154], 0x67a80c */ W32((u32)(r_ebp+0xfffffeacu), 0x67a80cu);
L_0045072f:; BB(0x0045072f);
    /* 0045072f: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00450735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450736: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045073d: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450743: mov ecx, dword ptr [ecx + eax*4 + 0xa0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 0045074a: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450751: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450757: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0045075e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450760: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x450763u); call_ind(t); }
    /* 00450763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00450765: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00450767: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00450769: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450770: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450776: mov ecx, dword ptr [edx + ecx*4 + 0xa0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa0u));
    /* 0045077d: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450784: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045078a: mov eax, dword ptr [edx + eax*4 + 0xa0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa0u));
    /* 00450791: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450793: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x450796u); call_ind(t); }
    /* 00450796: push 0x427 */ { u32 v = 0x427u; r_esp -= 4; W32(r_esp, v); }
    /* 0045079b: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004507a2: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004507a8: mov ecx, dword ptr [ecx + eax*4 + 0xa0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 004507af: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004507b6: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004507bc: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 004507c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004507c5: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x4507c8u); call_ind(t); }
    /* 004507c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004507ca: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004507cc: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004507d3: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004507d9: mov ecx, dword ptr [edx + ecx*4 + 0xa0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa0u));
    /* 004507e0: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x4507e5u); f_005d7422();
    /* 004507e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004507e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004507e9: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 004507f0: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004507f6: mov ecx, dword ptr [ecx + eax*4 + 0xa0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 004507fd: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450804: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045080a: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 00450811: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450813: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x450816u); call_ind(t); }
    /* 00450816: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00450818: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045081f: imul ecx, ecx, 0x41 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x41u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450822: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450826: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045082d: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450833: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0045083a: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450841: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450847: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0045084e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450850: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x450853u); call_ind(t); }
    /* 00450853: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450855: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045085c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450862: mov ecx, dword ptr [edx + ecx*4 + 0xa0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa0u));
    /* 00450869: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450870: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450876: mov eax, dword ptr [edx + eax*4 + 0xa0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa0u));
    /* 0045087d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045087f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x450882u); call_ind(t); }
    /* 00450882: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 00450889: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045088f: mov ecx, dword ptr [ecx + eax*4 + 0xa0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 00450896: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 0045089d: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004508a3: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 004508aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004508ac: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x4508afu); call_ind(t); }
    /* 004508af: jmp 0x450635 */ goto L_00450635;
L_004508b4:; BB(0x004508b4);
    /* 004508b4: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004508ba: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004508c1: jne 0x45090b */ if (!fZ) goto L_0045090b;
L_004508c3:; BB(0x004508c3);
    /* 004508c3: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 004508c5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4508cau); f_0048ab58();
    /* 004508ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004508cd: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 004508d3: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004508da: je 0x4508ef */ if (fZ) goto L_004508ef;
L_004508dc:; BB(0x004508dc);
    /* 004508dc: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 004508e2: call 0x44f79b */ r_esp -= 4; W32(r_esp, 0x4508e7u); f_0044f79b();
    /* 004508e7: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 004508ed: jmp 0x4508f9 */ goto L_004508f9;
L_004508ef:; BB(0x004508ef);
    /* 004508ef: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_004508f9:; BB(0x004508f9);
    /* 004508f9: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004508ff: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 00450905: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
L_0045090b:; BB(0x0045090b);
    /* 0045090b: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450911: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00450917: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045091d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00450920: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450926: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 0045092c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450932: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00450938: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045093a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45093du); call_ind(t); }
    /* 0045093d: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00450942: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00450944: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045094a: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00450950: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450956: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0045095c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045095e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450961u); call_ind(t); }
    /* 00450961: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00450963: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00450965: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045096b: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00450971: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450977: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0045097d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045097f: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x450982u); call_ind(t); }
    /* 00450982: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00450984: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045098a: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00450990: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450996: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0045099c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045099e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4509a1u); call_ind(t); }
    /* 004509a1: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004509a7: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004509ae: jne 0x4509fb */ if (!fZ) goto L_004509fb;
L_004509b0:; BB(0x004509b0);
    /* 004509b0: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004509b5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4509bau); f_0048ab58();
    /* 004509ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004509bd: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 004509c3: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004509ca: je 0x4509df */ if (fZ) goto L_004509df;
L_004509cc:; BB(0x004509cc);
    /* 004509cc: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 004509d2: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4509d7u); f_005e8590();
    /* 004509d7: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004509dd: jmp 0x4509e9 */ goto L_004509e9;
L_004509df:; BB(0x004509df);
    /* 004509df: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_004509e9:; BB(0x004509e9);
    /* 004509e9: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004509ef: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004509f5: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
L_004509fb:; BB(0x004509fb);
    /* 004509fb: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a01: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450a07: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a0d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00450a10: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00450a12: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a18: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450a1e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x450a23u); f_005e87aa();
    /* 00450a23: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a29: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 00450a2f: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a35: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00450a3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450a3d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x450a40u); call_ind(t); }
    /* 00450a40: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00450a42: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00450a47: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a4d: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450a53: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a59: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00450a5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450a61: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450a64u); call_ind(t); }
    /* 00450a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450a66: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a6c: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450a72: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a78: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00450a7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450a80: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x450a83u); call_ind(t); }
    /* 00450a83: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00450a89: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x450a8eu); f_005ee043();
    /* 00450a8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a90: je 0x450ab6 */ if (fZ) goto L_00450ab6;
L_00450a92:; BB(0x00450a92);
    /* 00450a92: push 0x67a810 */ { u32 v = 0x67a810u; r_esp -= 4; W32(r_esp, v); }
    /* 00450a97: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450a9d: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450aa3: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450aa9: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00450aaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450ab1: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x450ab4u); call_ind(t); }
    /* 00450ab4: jmp 0x450ad8 */ goto L_00450ad8;
L_00450ab6:; BB(0x00450ab6);
    /* 00450ab6: push 0x67a820 */ { u32 v = 0x67a820u; r_esp -= 4; W32(r_esp, v); }
    /* 00450abb: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ac1: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00450ac7: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450acd: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00450ad3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450ad5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x450ad8u); call_ind(t); }
L_00450ad8:; BB(0x00450ad8);
    /* 00450ad8: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ade: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ae5: jne 0x450b32 */ if (!fZ) goto L_00450b32;
L_00450ae7:; BB(0x00450ae7);
    /* 00450ae7: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00450aec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450af1u); f_0048ab58();
    /* 00450af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450af4: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00450afa: cmp dword ptr [ebp - 0x128], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b01: je 0x450b16 */ if (fZ) goto L_00450b16;
L_00450b03:; BB(0x00450b03);
    /* 00450b03: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00450b09: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x450b0eu); f_005e8590();
    /* 00450b0e: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00450b14: jmp 0x450b20 */ goto L_00450b20;
L_00450b16:; BB(0x00450b16);
    /* 00450b16: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_00450b20:; BB(0x00450b20);
    /* 00450b20: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b26: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00450b2c: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
L_00450b32:; BB(0x00450b32);
    /* 00450b32: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b38: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00450b3e: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b44: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00450b47: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00450b49: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b4f: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00450b55: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x450b5au); f_005e87aa();
    /* 00450b5a: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b60: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00450b66: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b6c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00450b72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450b74: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x450b77u); call_ind(t); }
    /* 00450b77: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00450b79: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00450b7e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b84: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00450b8a: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450b90: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00450b96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450b98: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450b9bu); call_ind(t); }
    /* 00450b9b: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00450ba0: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ba6: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00450bac: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x450bb1u); f_005e8740();
    /* 00450bb1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450bb3: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450bb9: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00450bbf: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x450bc4u); f_005e8775();
    /* 00450bc4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00450bc6: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450bcc: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00450bd2: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450bd8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00450bde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00450be0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x450be3u); call_ind(t); }
    /* 00450be3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00450be5: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450beb: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00450bf1: call 0x5e8ee7 */ r_esp -= 4; W32(r_esp, 0x450bf6u); f_005e8ee7();
    /* 00450bf6: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00450bfc: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x450c01u); f_005ee043();
    /* 00450c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450c03: je 0x450c46 */ if (fZ) goto L_00450c46;
L_00450c05:; BB(0x00450c05);
    /* 00450c05: push 0x67a82c */ { u32 v = 0x67a82cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450c0a: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 00450c10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450c11: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x450c16u); f_00624050();
    /* 00450c16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c19: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 00450c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c20: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x450c25u); f_00624990();
    /* 00450c25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c28: lea ecx, [ebp + eax - 0x100] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff00u);
    /* 00450c2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450c30: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00450c36: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x450c3bu); f_005ee043();
    /* 00450c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c3c: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x450c41u); f_0060fb42();
    /* 00450c41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c44: jmp 0x450c5a */ goto L_00450c5a;
L_00450c46:; BB(0x00450c46);
    /* 00450c46: push 0x67a84c */ { u32 v = 0x67a84cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450c4b: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 00450c51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450c52: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x450c57u); f_00624510();
    /* 00450c57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00450c5a:; BB(0x00450c5a);
    /* 00450c5a: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 00450c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c61: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450c67: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00450c6d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450c73: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00450c79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450c7b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x450c7eu); call_ind(t); }
    /* 00450c7e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450c84: cmp dword ptr [eax + 0xb4], 0 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450c8b: jne 0x450cd5 */ if (!fZ) goto L_00450cd5;
L_00450c8d:; BB(0x00450c8d);
    /* 00450c8d: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450c8f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450c94u); f_0048ab58();
    /* 00450c94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c97: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00450c9d: cmp dword ptr [ebp - 0x12c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ca4: je 0x450cb9 */ if (fZ) goto L_00450cb9;
L_00450ca6:; BB(0x00450ca6);
    /* 00450ca6: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00450cac: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x450cb1u); f_005e4bb0();
    /* 00450cb1: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00450cb7: jmp 0x450cc3 */ goto L_00450cc3;
L_00450cb9:; BB(0x00450cb9);
    /* 00450cb9: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_00450cc3:; BB(0x00450cc3);
    /* 00450cc3: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450cc9: mov edx, dword ptr [ebp - 0x164] */ r_edx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00450ccf: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
L_00450cd5:; BB(0x00450cd5);
    /* 00450cd5: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450cdb: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450ce1: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ce7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00450cea: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00450cec: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00450cee: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450cf4: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450cfa: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d00: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450d06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450d08: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x450d0bu); call_ind(t); }
    /* 00450d0b: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d0d: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00450d12: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d18: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450d1e: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d24: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450d2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450d2c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450d2fu); call_ind(t); }
    /* 00450d2f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d35: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450d3b: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d41: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450d47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450d49: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x450d4cu); call_ind(t); }
    /* 00450d4c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00450d4e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d54: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450d5a: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d60: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450d66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450d68: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x450d6bu); call_ind(t); }
    /* 00450d6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d71: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d77: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450d7d: call 0x5e4e7f */ r_esp -= 4; W32(r_esp, 0x450d82u); f_005e4e7f();
    /* 00450d82: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00450d88: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x450d8du); f_005ee043();
    /* 00450d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450d8f: je 0x450db0 */ if (fZ) goto L_00450db0;
L_00450d91:; BB(0x00450d91);
    /* 00450d91: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450d97: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00450d9d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450da3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450da9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450dab: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x450daeu); call_ind(t); }
    /* 00450dae: jmp 0x450dcd */ goto L_00450dcd;
L_00450db0:; BB(0x00450db0);
    /* 00450db0: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450db6: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00450dbc: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450dc2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00450dc8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450dca: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x450dcdu); call_ind(t); }
L_00450dcd:; BB(0x00450dcd);
    /* 00450dcd: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450dd3: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450dda: jne 0x450e27 */ if (!fZ) goto L_00450e27;
L_00450ddc:; BB(0x00450ddc);
    /* 00450ddc: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450de1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450de6u); f_0048ab58();
    /* 00450de6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450de9: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00450def: cmp dword ptr [ebp - 0x130], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450df6: je 0x450e0b */ if (fZ) goto L_00450e0b;
L_00450df8:; BB(0x00450df8);
    /* 00450df8: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00450dfe: call 0x452d80 */ r_esp -= 4; W32(r_esp, 0x450e03u); f_00452d80();
    /* 00450e03: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 00450e09: jmp 0x450e15 */ goto L_00450e15;
L_00450e0b:; BB(0x00450e0b);
    /* 00450e0b: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_00450e15:; BB(0x00450e15);
    /* 00450e15: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e1b: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 00450e21: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
L_00450e27:; BB(0x00450e27);
    /* 00450e27: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e2d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450e33: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e39: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00450e3c: push 0x6f6854 */ { u32 v = 0x6f6854u; r_esp -= 4; W32(r_esp, v); }
    /* 00450e41: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e47: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450e4d: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e53: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450e59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450e5b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x450e5eu); call_ind(t); }
    /* 00450e5e: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e64: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450e6a: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e70: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450e76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450e78: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x450e7bu); call_ind(t); }
    /* 00450e7b: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00450e7d: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e83: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450e89: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x450e8eu); f_005e87aa();
    /* 00450e8e: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 00450e90: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450e95: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450e9b: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00450ea1: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ea7: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450ead: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450eaf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x450eb2u); call_ind(t); }
    /* 00450eb2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00450eb4: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450eba: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450ec0: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x450ec5u); f_005e8740();
    /* 00450ec5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00450ec7: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ecd: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00450ed3: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x450ed8u); f_005e8775();
    /* 00450ed8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00450eda: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ee0: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00450ee6: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x450eebu); f_0045378f();
    /* 00450eeb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00450eed: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ef3: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450ef9: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450eff: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450f05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450f07: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x450f0au); call_ind(t); }
    /* 00450f0a: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f10: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450f16: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x450f1bu); f_00453443();
    /* 00450f1b: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00450f21: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x450f26u); f_005ee043();
    /* 00450f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f28: je 0x450f49 */ if (fZ) goto L_00450f49;
L_00450f2a:; BB(0x00450f2a);
    /* 00450f2a: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f30: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00450f36: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f3c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450f42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450f44: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x450f47u); call_ind(t); }
    /* 00450f47: jmp 0x450f66 */ goto L_00450f66;
L_00450f49:; BB(0x00450f49);
    /* 00450f49: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f4f: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00450f55: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f5b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00450f61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00450f63: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x450f66u); call_ind(t); }
L_00450f66:; BB(0x00450f66);
    /* 00450f66: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450f6c: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f73: jne 0x450fc0 */ if (!fZ) goto L_00450fc0;
L_00450f75:; BB(0x00450f75);
    /* 00450f75: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00450f7a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x450f7fu); f_0048ab58();
    /* 00450f7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450f82: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00450f88: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f8f: je 0x450fa4 */ if (fZ) goto L_00450fa4;
L_00450f91:; BB(0x00450f91);
    /* 00450f91: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00450f97: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x450f9cu); f_005e8590();
    /* 00450f9c: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 00450fa2: jmp 0x450fae */ goto L_00450fae;
L_00450fa4:; BB(0x00450fa4);
    /* 00450fa4: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_00450fae:; BB(0x00450fae);
    /* 00450fae: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450fb4: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00450fba: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
L_00450fc0:; BB(0x00450fc0);
    /* 00450fc0: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450fc6: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00450fcc: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450fd2: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00450fd5: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00450fd7: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450fdd: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00450fe3: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x450fe8u); f_005e87aa();
    /* 00450fe8: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450fee: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00450ff4: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00450ffa: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00451000: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451002: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451005u); call_ind(t); }
    /* 00451005: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0045100a: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045100f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00451015: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0045101b: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00451021: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00451027: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451029: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x45102cu); call_ind(t); }
    /* 0045102c: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00451031: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00451037: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0045103d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451042u); f_005e8740();
    /* 00451042: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00451044: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045104a: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00451050: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451055u); f_005e8775();
    /* 00451055: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451057: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045105d: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00451063: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00451069: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0045106f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00451071: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x451074u); call_ind(t); }
    /* 00451074: push 0x6f6858 */ { u32 v = 0x6f6858u; r_esp -= 4; W32(r_esp, v); }
    /* 00451079: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045107f: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00451085: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0045108b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00451091: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451093: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451096u); call_ind(t); }
    /* 00451096: mov esp, ebp */ r_esp = r_ebp;
    /* 00451098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451099: ret  */ FN_RET(0x0045005c); r_esp += 4; return;
}

void f_0045109a(void) /* FUN_0045109a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045109a);
    /* 0045109a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045109b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045109d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004510a0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004510a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510a6: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x4510abu); f_005e030e();
    /* 004510ab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004510b1: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x4510b6u); f_0045cb85();
    /* 004510b6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004510b8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004510ba: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004510bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510be: mov edx, dword ptr [ecx + eax*4 + 0xa0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 004510c5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004510c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004510cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004510cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004510d0: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x4510d3u); call_ind(t); }
    /* 004510d3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004510d9: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x4510deu); f_0045cd8e();
    /* 004510de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004510df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510e2: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004510e8: call 0x44fa05 */ r_esp -= 4; W32(r_esp, 0x4510edu); f_0044fa05();
    /* 004510ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510f0: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004510f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510f9: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004510ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451101: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451104u); call_ind(t); }
    /* 00451104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451107: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0045110d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451110: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451116: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451118: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45111bu); call_ind(t); }
    /* 0045111b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045111e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451124: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451127: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0045112d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045112f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451132u); call_ind(t); }
    /* 00451132: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451135: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0045113b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045113e: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00451144: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451146: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451149u); call_ind(t); }
    /* 00451149: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045114c: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00451152: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451155: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0045115b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045115d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451160u); call_ind(t); }
    /* 00451160: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451163: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00451169: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045116c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00451172: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451174: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451177u); call_ind(t); }
    /* 00451177: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045117a: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00451180: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451183: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00451189: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045118b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45118eu); call_ind(t); }
    /* 0045118e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451191: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451197: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045119a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004511a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004511a2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4511a5u); call_ind(t); }
    /* 004511a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511a8: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004511ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511b1: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004511b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004511b9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4511bcu); call_ind(t); }
    /* 004511bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004511be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004511bf: ret  */ FN_RET(0x0045109a); r_esp += 4; return;
}

void f_004511c0(void) /* FUN_004511c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004511c0);
    /* 004511c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004511c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004511c3: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004511c9: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 004511cf: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 004511d5: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004511db: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4511e0u); f_005d71b9();
    /* 004511e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511e1: push 0x67a894 */ { u32 v = 0x67a894u; r_esp -= 4; W32(r_esp, v); }
    /* 004511e6: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 004511ec: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004511ef: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x4511f4u); f_0061baba();
    /* 004511f4: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 004511fa: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 00451200: call 0x44fa2d */ r_esp -= 4; W32(r_esp, 0x451205u); f_0044fa2d();
    /* 00451205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451206: push 0x67a8a0 */ { u32 v = 0x67a8a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045120b: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00451210: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00451213: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x451218u); f_0061baba();
    /* 00451218: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0045121e: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x451223u); f_005ee043();
    /* 00451223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451225: jne 0x45138a */ if (!fZ) goto L_0045138a;
L_0045122b:; BB(0x0045122b);
    /* 0045122b: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00451231: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00451237: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 0045123d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00451243: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451245: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x451248u); call_ind(t); }
    /* 00451248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451249: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0045124c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045124d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x451252u); f_00624510();
    /* 00451252: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451255: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0045125b: mov word ptr [ebp - 0x70], 0 */ W16((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00451261: jmp 0x45126f */ goto L_0045126f;
L_00451263:; BB(0x00451263);
    /* 00451263: mov cx, word ptr [ebp - 0x6c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff94u))) & 0xffffu);
    /* 00451267: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045126b: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
L_0045126f:; BB(0x0045126f);
    /* 0045126f: movsx edx, word ptr [ebp - 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00451273: movsx eax, byte ptr [ebp + edx - 0x64] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xffffff9cu));
    /* 00451278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045127a: je 0x4512b9 */ if (fZ) goto L_004512b9;
L_0045127c:; BB(0x0045127c);
    /* 0045127c: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00451280: movsx edx, byte ptr [ebp + ecx - 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xffffff9cu));
    /* 00451285: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451288: jl 0x4512b7 */ if ((fS!=fO)) goto L_004512b7;
L_0045128a:; BB(0x0045128a);
    /* 0045128a: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 0045128e: movsx ecx, byte ptr [ebp + eax - 0x64] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffff9cu));
    /* 00451293: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451296: jg 0x4512b7 */ if ((!fZ&&fS==fO)) goto L_004512b7;
L_00451298:; BB(0x00451298);
    /* 00451298: movsx edx, word ptr [ebp - 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 0045129c: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004512a0: mov cl, byte ptr [ebp + edx - 0x64] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xffffff9cu))) & 0xffu);
    /* 004512a4: mov byte ptr [ebp + eax - 0xd4], cl */ W8((u32)(r_ebp+r_eax+0xffffff2cu), (u8)r_ecx);
    /* 004512ab: mov dx, word ptr [ebp - 0x70] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff90u))) & 0xffffu);
    /* 004512af: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004512b3: mov word ptr [ebp - 0x70], dx */ W16((u32)(r_ebp+0xffffff90u), (u16)r_edx);
L_004512b7:; BB(0x004512b7);
    /* 004512b7: jmp 0x451263 */ goto L_00451263;
L_004512b9:; BB(0x004512b9);
    /* 004512b9: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004512bd: mov byte ptr [ebp + eax - 0xd4], 0 */ W8((u32)(r_ebp+r_eax+0xffffff2cu), 0x0u);
    /* 004512c5: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 004512c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004512c9: push 0x67a8b0 */ { u32 v = 0x67a8b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004512ce: lea edx, [ebp - 0xd4] */ r_edx = (u32)(r_ebp+0xffffff2cu);
    /* 004512d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004512d5: call 0x625440 */ r_esp -= 4; W32(r_esp, 0x4512dau); f_00625440();
    /* 004512da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004512dd: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004512e1: jle 0x45138a */ if ((fZ||fS!=fO)) goto L_0045138a;
L_004512e7:; BB(0x004512e7);
    /* 004512e7: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 004512ed: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x4512f2u); f_005edf73();
    /* 004512f2: cmp dword ptr [ebp - 0x68], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004512f5: jge 0x45138a */ if ((fS==fO)) goto L_0045138a;
L_004512fb:; BB(0x004512fb);
    /* 004512fb: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00451301: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x451306u); f_005edf73();
    /* 00451306: sub eax, dword ptr [ebp - 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00451309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045130a: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00451310: call 0x5ee060 */ r_esp -= 4; W32(r_esp, 0x451315u); f_005ee060();
    /* 00451315: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451317: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0045131a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045131b: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00451321: call 0x5edf90 */ r_esp -= 4; W32(r_esp, 0x451326u); f_005edf90();
    /* 00451326: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045132d: je 0x45133a */ if (fZ) goto L_0045133a;
L_0045132f:; BB(0x0045132f);
    /* 0045132f: mov ecx, dword ptr [0x6f97e4] */ r_ecx = R32((u32)(0x6f97e4u));
    /* 00451335: call 0x507096 */ r_esp -= 4; W32(r_esp, 0x45133au); f_00507096();
L_0045133a:; BB(0x0045133a);
    /* 0045133a: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451341: je 0x45134e */ if (fZ) goto L_0045134e;
L_00451343:; BB(0x00451343);
    /* 00451343: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 00451349: call 0x41b23e */ r_esp -= 4; W32(r_esp, 0x45134eu); f_0041b23e();
L_0045134e:; BB(0x0045134e);
    /* 0045134e: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451355: je 0x451362 */ if (fZ) goto L_00451362;
L_00451357:; BB(0x00451357);
    /* 00451357: mov ecx, dword ptr [0x6f8e2c] */ r_ecx = R32((u32)(0x6f8e2cu));
    /* 0045135d: call 0x4a066a */ r_esp -= 4; W32(r_esp, 0x451362u); f_004a066a();
L_00451362:; BB(0x00451362);
    /* 00451362: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451369: je 0x451376 */ if (fZ) goto L_00451376;
L_0045136b:; BB(0x0045136b);
    /* 0045136b: mov ecx, dword ptr [0x6f666c] */ r_ecx = R32((u32)(0x6f666cu));
    /* 00451371: call 0x43fe1c */ r_esp -= 4; W32(r_esp, 0x451376u); f_0043fe1c();
L_00451376:; BB(0x00451376);
    /* 00451376: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045137d: je 0x45138a */ if (fZ) goto L_0045138a;
L_0045137f:; BB(0x0045137f);
    /* 0045137f: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 00451385: call 0x5d227e */ r_esp -= 4; W32(r_esp, 0x45138au); f_005d227e();
L_0045138a:; BB(0x0045138a);
    /* 0045138a: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451391: je 0x45139e */ if (fZ) goto L_0045139e;
L_00451393:; BB(0x00451393);
    /* 00451393: mov ecx, dword ptr [0x6f97e4] */ r_ecx = R32((u32)(0x6f97e4u));
    /* 00451399: call 0x507061 */ r_esp -= 4; W32(r_esp, 0x45139eu); f_00507061();
L_0045139e:; BB(0x0045139e);
    /* 0045139e: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513a5: je 0x4513b2 */ if (fZ) goto L_004513b2;
L_004513a7:; BB(0x004513a7);
    /* 004513a7: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 004513ad: call 0x41b209 */ r_esp -= 4; W32(r_esp, 0x4513b2u); f_0041b209();
L_004513b2:; BB(0x004513b2);
    /* 004513b2: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513b9: je 0x4513c6 */ if (fZ) goto L_004513c6;
L_004513bb:; BB(0x004513bb);
    /* 004513bb: mov ecx, dword ptr [0x6f8e2c] */ r_ecx = R32((u32)(0x6f8e2cu));
    /* 004513c1: call 0x4a0635 */ r_esp -= 4; W32(r_esp, 0x4513c6u); f_004a0635();
L_004513c6:; BB(0x004513c6);
    /* 004513c6: cmp dword ptr [0x6f666c], 0 */ {  u32 a = R32((u32)(0x6f666cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513cd: je 0x4513da */ if (fZ) goto L_004513da;
L_004513cf:; BB(0x004513cf);
    /* 004513cf: mov ecx, dword ptr [0x6f666c] */ r_ecx = R32((u32)(0x6f666cu));
    /* 004513d5: call 0x43fde7 */ r_esp -= 4; W32(r_esp, 0x4513dau); f_0043fde7();
L_004513da:; BB(0x004513da);
    /* 004513da: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513e1: je 0x4513ee */ if (fZ) goto L_004513ee;
L_004513e3:; BB(0x004513e3);
    /* 004513e3: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 004513e9: call 0x5d2249 */ r_esp -= 4; W32(r_esp, 0x4513eeu); f_005d2249();
L_004513ee:; BB(0x004513ee);
    /* 004513ee: mov eax, 1 */ r_eax = 0x1u;
    /* 004513f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004513f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004513f6: ret  */ FN_RET(0x004511c0); r_esp += 4; return;
}

void f_004513f7(void) /* FUN_004513f7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004513f7);
    /* 004513f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004513f8: mov ebp, esp */ r_ebp = r_esp;
    /* 004513fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004513fb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004513fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451401: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451405: jne 0x45149f */ if (!fZ) goto L_0045149f;
L_0045140b:; BB(0x0045140b);
    /* 0045140b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045140e: cmp dword ptr [ecx + 0xc], 0xc8 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451415: jle 0x451483 */ if ((fZ||fS!=fO)) goto L_00451483;
L_00451417:; BB(0x00451417);
    /* 00451417: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045141a: cmp dword ptr [edx + 0xc], 0x19f */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x19fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451421: jge 0x451483 */ if ((fS==fO)) goto L_00451483;
L_00451423:; BB(0x00451423);
    /* 00451423: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451426: cmp dword ptr [eax + 0x10], 0x24 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045142a: jle 0x451483 */ if ((fZ||fS!=fO)) goto L_00451483;
L_0045142c:; BB(0x0045142c);
    /* 0045142c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045142f: cmp dword ptr [ecx + 0x10], 0xac */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451436: jge 0x451483 */ if ((fS==fO)) goto L_00451483;
L_00451438:; BB(0x00451438);
    /* 00451438: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0045143e: call 0x5ee043 */ r_esp -= 4; W32(r_esp, 0x451443u); f_005ee043();
    /* 00451443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451445: je 0x451465 */ if (fZ) goto L_00451465;
L_00451447:; BB(0x00451447);
    /* 00451447: push 0x67a8b4 */ { u32 v = 0x67a8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045144c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045144f: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00451455: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451458: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0045145e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00451460: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x451463u); call_ind(t); }
    /* 00451463: jmp 0x451481 */ goto L_00451481;
L_00451465:; BB(0x00451465);
    /* 00451465: push 0x67a920 */ { u32 v = 0x67a920u; r_esp -= 4; W32(r_esp, v); }
    /* 0045146a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045146d: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00451473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451476: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0045147c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045147e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451481u); call_ind(t); }
L_00451481:; BB(0x00451481);
    /* 00451481: jmp 0x45149f */ goto L_0045149f;
L_00451483:; BB(0x00451483);
    /* 00451483: push 0x6f685c */ { u32 v = 0x6f685cu; r_esp -= 4; W32(r_esp, v); }
    /* 00451488: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045148b: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00451491: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451494: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0045149a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045149c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x45149fu); call_ind(t); }
L_0045149f:; BB(0x0045149f);
    /* 0045149f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004514a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004514a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514a6: call 0x5dff5e */ r_esp -= 4; W32(r_esp, 0x4514abu); f_005dff5e();
    /* 004514ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004514ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004514ae: ret 4 */ FN_RET(0x004513f7); r_esp += 8; return;
}

void f_004514b1(void) /* FUN_004514b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004514b1);
    /* 004514b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004514b2: mov ebp, esp */ r_ebp = r_esp;
    /* 004514b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004514b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004514b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514bb: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4514c0u); f_005d5d20();
    /* 004514c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514c3: mov dword ptr [eax], 0x63513c */ W32((u32)(r_eax), 0x63513cu);
    /* 004514c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004514ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004514cf: ret  */ FN_RET(0x004514b1); r_esp += 4; return;
}

void f_004514d0(void) /* FUN_004514d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004514d0);
    /* 004514d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004514d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004514d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004514d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004514d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514da: mov dword ptr [eax], 0x63513c */ W32((u32)(r_eax), 0x63513cu);
    /* 004514e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004514e3: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x4514e8u); f_005d5dfb();
    /* 004514e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004514ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004514eb: ret  */ FN_RET(0x004514d0); r_esp += 4; return;
}

void f_004514ec(void) /* FUN_004514ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004514ec);
    /* 004514ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004514ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004514ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004514f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004514f3: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 004514f9: call 0x4511c0 */ r_esp -= 4; W32(r_esp, 0x4514feu); f_004511c0();
    /* 004514fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451500: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451503: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x451508u); f_005d6635();
    /* 00451508: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045150b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045150e: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x451513u); f_005e03cc();
    /* 00451513: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 00451519: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x45151eu); f_005e0a55();
    /* 0045151e: mov dword ptr [0x6f6a14], 0 */ W32((u32)(0x6f6a14u), 0x0u);
    /* 00451528: mov esp, ebp */ r_esp = r_ebp;
    /* 0045152a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045152b: ret  */ FN_RET(0x004514ec); r_esp += 4; return;
}

void f_0045152c(void) /* FUN_0045152c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045152c);
    /* 0045152c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045152d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045152f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451530: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00451533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451536: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x45153bu); f_005d5d20();
    /* 0045153b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045153e: mov dword ptr [eax], 0x6351ac */ W32((u32)(r_eax), 0x6351acu);
    /* 00451544: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451547: mov esp, ebp */ r_esp = r_ebp;
    /* 00451549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045154a: ret  */ FN_RET(0x0045152c); r_esp += 4; return;
}

void f_0045154b(void) /* FUN_0045154b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045154b);
    /* 0045154b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045154c: mov ebp, esp */ r_ebp = r_esp;
    /* 0045154e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045154f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00451552: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451555: mov dword ptr [eax], 0x6351ac */ W32((u32)(r_eax), 0x6351acu);
    /* 0045155b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045155e: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x451563u); f_005d5dfb();
    /* 00451563: mov esp, ebp */ r_esp = r_ebp;
    /* 00451565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451566: ret  */ FN_RET(0x0045154b); r_esp += 4; return;
}

void f_00451567(void) /* FUN_00451567 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451567);
    /* 00451567: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451568: mov ebp, esp */ r_ebp = r_esp;
    /* 0045156a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045156b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045156e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451573: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x451578u); f_005d6635();
    /* 00451578: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045157b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045157e: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x451583u); f_005e03cc();
    /* 00451583: mov ecx, dword ptr [0x6f6a14] */ r_ecx = R32((u32)(0x6f6a14u));
    /* 00451589: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x45158eu); f_005e0a55();
    /* 0045158e: mov dword ptr [0x6f6a14], 0 */ W32((u32)(0x6f6a14u), 0x0u);
    /* 00451598: mov esp, ebp */ r_esp = r_ebp;
    /* 0045159a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045159b: ret  */ FN_RET(0x00451567); r_esp += 4; return;
}

void f_004515a0(void) /* FUN_004515a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004515a0);
    /* 004515a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004515a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004515a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004515a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004515a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515aa: call 0x44f7da */ r_esp -= 4; W32(r_esp, 0x4515afu); f_0044f7da();
    /* 004515af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004515b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004515b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004515b7: je 0x4515c5 */ if (fZ) goto L_004515c5;
L_004515b9:; BB(0x004515b9);
    /* 004515b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004515bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4515c2u); f_0048ac1b();
    /* 004515c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004515c5:; BB(0x004515c5);
    /* 004515c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004515ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004515cb: ret 4 */ FN_RET(0x004515a0); r_esp += 8; return;
}

void f_004515d0(void) /* FUN_004515d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004515d0);
    /* 004515d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004515d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004515d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004515d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004515d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515da: call 0x44fc73 */ r_esp -= 4; W32(r_esp, 0x4515dfu); f_0044fc73();
    /* 004515df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004515e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004515e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004515e7: je 0x4515f5 */ if (fZ) goto L_004515f5;
L_004515e9:; BB(0x004515e9);
    /* 004515e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004515ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4515f2u); f_0048ac1b();
    /* 004515f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004515f5:; BB(0x004515f5);
    /* 004515f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004515fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004515fb: ret 4 */ FN_RET(0x004515d0); r_esp += 8; return;
}

void f_00451600(void) /* FUN_00451600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451600);
    /* 00451600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451601: mov ebp, esp */ r_ebp = r_esp;
    /* 00451603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00451607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045160a: call 0x4514d0 */ r_esp -= 4; W32(r_esp, 0x45160fu); f_004514d0();
    /* 0045160f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451612: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00451615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451617: je 0x451625 */ if (fZ) goto L_00451625;
L_00451619:; BB(0x00451619);
    /* 00451619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045161c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045161d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x451622u); f_0048ac1b();
    /* 00451622: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00451625:; BB(0x00451625);
    /* 00451625: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451628: mov esp, ebp */ r_esp = r_ebp;
    /* 0045162a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045162b: ret 4 */ FN_RET(0x00451600); r_esp += 8; return;
}

void f_00451630(void) /* FUN_00451630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451630);
    /* 00451630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451631: mov ebp, esp */ r_ebp = r_esp;
    /* 00451633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00451637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045163a: call 0x45154b */ r_esp -= 4; W32(r_esp, 0x45163fu); f_0045154b();
    /* 0045163f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451642: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00451645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451647: je 0x451655 */ if (fZ) goto L_00451655;
L_00451649:; BB(0x00451649);
    /* 00451649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045164c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045164d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x451652u); f_0048ac1b();
    /* 00451652: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00451655:; BB(0x00451655);
    /* 00451655: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451658: mov esp, ebp */ r_esp = r_ebp;
    /* 0045165a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045165b: ret 4 */ FN_RET(0x00451630); r_esp += 8; return;
}

void f_00451660(void) /* FUN_00451660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451660);
    /* 00451660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451661: mov ebp, esp */ r_ebp = r_esp;
    /* 00451663: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451666: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00451669: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045166c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045166d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451670: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451671: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451674: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x451679u); f_005d80f0();
    /* 00451679: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045167c: mov dword ptr [edx], 0x63521c */ W32((u32)(r_edx), 0x63521cu);
    /* 00451682: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00451684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451687: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x45168cu); f_005e0731();
    /* 0045168c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045168e: push 0x624e */ { u32 v = 0x624eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451693: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451696: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x45169bu); f_005e0461();
    /* 0045169b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045169d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045169f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004516a2: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x4516a7u); f_005d81dc();
    /* 004516a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004516a9: push 0x67aa2c */ { u32 v = 0x67aa2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004516ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004516b1: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x4516b6u); f_005d825e();
    /* 004516b6: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 004516bb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4516c0u); f_0048ab58();
    /* 004516c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004516c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004516c6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004516ca: je 0x4516d9 */ if (fZ) goto L_004516d9;
L_004516cc:; BB(0x004516cc);
    /* 004516cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004516cf: call 0x452159 */ r_esp -= 4; W32(r_esp, 0x4516d4u); f_00452159();
    /* 004516d4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004516d7: jmp 0x4516e0 */ goto L_004516e0;
L_004516d9:; BB(0x004516d9);
    /* 004516d9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004516e0:; BB(0x004516e0);
    /* 004516e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004516e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004516e6: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 004516ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004516ef: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004516f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004516f8: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004516fb: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00451700: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451703: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 00451709: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045170c: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 00451712: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00451714: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x451717u); call_ind(t); }
    /* 00451717: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00451719: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045171b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045171d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045171f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451722: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00451728: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x45172du); f_005d5ff2();
    /* 0045172d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045172f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451731: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451734: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 0045173a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045173d: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 00451743: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00451745: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x451748u); call_ind(t); }
    /* 00451748: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045174a: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045174f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451752: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00451758: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045175b: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00451761: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451763: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451766u); call_ind(t); }
    /* 00451766: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00451768: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045176b: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00451771: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451774: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0045177a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045177c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x45177fu); call_ind(t); }
    /* 0045177f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451782: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00451788: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045178b: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00451791: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451793: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x451796u); call_ind(t); }
    /* 00451796: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451799: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0045179f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004517a2: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004517a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004517aa: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4517adu); call_ind(t); }
    /* 004517ad: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004517af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004517b2: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004517b8: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x4517bdu); f_005d65d6();
    /* 004517bd: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 004517c2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4517c7u); f_0048ab58();
    /* 004517c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004517ca: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004517cd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004517d1: je 0x4517e0 */ if (fZ) goto L_004517e0;
L_004517d3:; BB(0x004517d3);
    /* 004517d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517d6: call 0x4521aa */ r_esp -= 4; W32(r_esp, 0x4517dbu); f_004521aa();
    /* 004517db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004517de: jmp 0x4517e7 */ goto L_004517e7;
L_004517e0:; BB(0x004517e0);
    /* 004517e0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004517e7:; BB(0x004517e7);
    /* 004517e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004517ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004517ed: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 004517f3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004517f6: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004517fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004517ff: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451802: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451805: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0045180b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045180e: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00451814: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451816: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451819u); call_ind(t); }
    /* 00451819: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045181c: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 00451826: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451829: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00451833: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451836: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00451840: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451843: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 0045184d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451850: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 0045185a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045185d: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 00451867: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045186a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045186c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045186d: ret 8 */ FN_RET(0x00451660); r_esp += 12; return;
}

void f_00451870(void) /* FUN_00451870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451870);
    /* 00451870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451871: mov ebp, esp */ r_ebp = r_esp;
    /* 00451873: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451876: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00451879: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045187c: mov dword ptr [eax], 0x63521c */ W32((u32)(r_eax), 0x63521cu);
    /* 00451882: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451885: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045188c: je 0x4518cb */ if (fZ) goto L_004518cb;
L_0045188e:; BB(0x0045188e);
    /* 0045188e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451891: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00451897: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045189a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045189d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004518a0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518a4: je 0x4518b7 */ if (fZ) goto L_004518b7;
L_004518a6:; BB(0x004518a6);
    /* 004518a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004518a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004518ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004518ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004518b0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4518b2u); call_ind(t); }
    /* 004518b2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004518b5: jmp 0x4518be */ goto L_004518be;
L_004518b7:; BB(0x004518b7);
    /* 004518b7: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004518be:; BB(0x004518be);
    /* 004518be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004518c1: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
L_004518cb:; BB(0x004518cb);
    /* 004518cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004518ce: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518d5: je 0x451914 */ if (fZ) goto L_00451914;
L_004518d7:; BB(0x004518d7);
    /* 004518d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004518da: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004518e0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004518e3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004518e6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004518e9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518ed: je 0x451900 */ if (fZ) goto L_00451900;
L_004518ef:; BB(0x004518ef);
    /* 004518ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004518f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004518f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004518f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004518f9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4518fbu); call_ind(t); }
    /* 004518fb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004518fe: jmp 0x451907 */ goto L_00451907;
L_00451900:; BB(0x00451900);
    /* 00451900: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00451907:; BB(0x00451907);
    /* 00451907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045190a: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
L_00451914:; BB(0x00451914);
    /* 00451914: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451917: call 0x451f96 */ r_esp -= 4; W32(r_esp, 0x45191cu); f_00451f96();
    /* 0045191c: mov dword ptr [0x6f6860], 0 */ W32((u32)(0x6f6860u), 0x0u);
    /* 00451926: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451929: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x45192eu); f_005d8154();
    /* 0045192e: mov esp, ebp */ r_esp = r_ebp;
    /* 00451930: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451931: ret  */ FN_RET(0x00451870); r_esp += 4; return;
}

void f_00451932(void) /* FUN_00451932 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451932);
    /* 00451932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451933: mov ebp, esp */ r_ebp = r_esp;
    /* 00451935: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451938: cmp dword ptr [0x6f6860], 0 */ {  u32 a = R32((u32)(0x6f6860u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045193f: jne 0x451977 */ if (!fZ) goto L_00451977;
L_00451941:; BB(0x00451941);
    /* 00451941: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00451946: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45194bu); f_0048ab58();
    /* 0045194b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045194e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00451951: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451955: je 0x451968 */ if (fZ) goto L_00451968;
L_00451957:; BB(0x00451957);
    /* 00451957: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045195b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045195e: call 0x451660 */ r_esp -= 4; W32(r_esp, 0x451963u); f_00451660();
    /* 00451963: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00451966: jmp 0x45196f */ goto L_0045196f;
L_00451968:; BB(0x00451968);
    /* 00451968: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0045196f:; BB(0x0045196f);
    /* 0045196f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451972: mov dword ptr [0x6f6860], eax */ W32((u32)(0x6f6860u), r_eax);
L_00451977:; BB(0x00451977);
    /* 00451977: mov ecx, dword ptr [0x6f6860] */ r_ecx = R32((u32)(0x6f6860u));
    /* 0045197d: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x451982u); f_005e030e();
    /* 00451982: mov esp, ebp */ r_esp = r_ebp;
    /* 00451984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451985: ret  */ FN_RET(0x00451932); r_esp += 4; return;
}

void f_00451986(void) /* FUN_00451986 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451986);
    /* 00451986: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451987: mov ebp, esp */ r_ebp = r_esp;
    /* 00451989: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045198c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045198f: mov dword ptr [ebp - 4], 0x10e */ W32((u32)(r_ebp+0xfffffffcu), 0x10eu);
    /* 00451996: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451999: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045199c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045199f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004519a2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004519a5: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004519a9: ja 0x451f78 */ if ((!fC&&!fZ)) goto L_00451f78;
L_004519af:; BB(0x004519af);
    /* 004519af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004519b2: jmp dword ptr [edx*4 + 0x451f7e] */ { u32 t = R32((u32)(r_edx*4+0x451f7eu)); switch (t) { case 0x4519b9u: goto L_004519b9; case 0x451aaeu: goto L_00451aae; case 0x451ba3u: goto L_00451ba3; case 0x451c98u: goto L_00451c98; case 0x451d8du: goto L_00451d8d; case 0x451e85u: goto L_00451e85; default: UNSUP(0x004519b2, "jump table entry is not a known target"); } }
L_004519b9:; BB(0x004519b9);
    /* 004519b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004519bc: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519c3: jne 0x4519fb */ if (!fZ) goto L_004519fb;
L_004519c5:; BB(0x004519c5);
    /* 004519c5: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004519ca: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4519cfu); f_0048ab58();
    /* 004519cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004519d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004519d5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519d9: je 0x4519e8 */ if (fZ) goto L_004519e8;
L_004519db:; BB(0x004519db);
    /* 004519db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004519de: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4519e3u); f_005e8590();
    /* 004519e3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004519e6: jmp 0x4519ef */ goto L_004519ef;
L_004519e8:; BB(0x004519e8);
    /* 004519e8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004519ef:; BB(0x004519ef);
    /* 004519ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004519f2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004519f5: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_004519fb:; BB(0x004519fb);
    /* 004519fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004519fe: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451a04: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a07: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451a0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451a0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a11: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00451a17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a1a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00451a20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451a22: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451a25u); call_ind(t); }
    /* 00451a25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a28: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451a2e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a31: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00451a37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451a39: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451a3cu); call_ind(t); }
    /* 00451a3c: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00451a3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451a40: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a43: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451a49: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a4c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00451a52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451a54: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451a57u); call_ind(t); }
    /* 00451a57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451a5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a5e: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00451a64: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451a69u); f_005e8740();
    /* 00451a69: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451a6b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a6e: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00451a74: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451a79u); f_005e8775();
    /* 00451a79: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451a7b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a7e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451a84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a87: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00451a8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451a8f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451a92u); call_ind(t); }
    /* 00451a92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a95: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00451a9b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451a9e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00451aa4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451aa6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451aa9u); call_ind(t); }
    /* 00451aa9: jmp 0x451f78 */ goto L_00451f78;
L_00451aae:; BB(0x00451aae);
    /* 00451aae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ab1: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ab8: jne 0x451af0 */ if (!fZ) goto L_00451af0;
L_00451aba:; BB(0x00451aba);
    /* 00451aba: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00451abf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x451ac4u); f_0048ab58();
    /* 00451ac4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451ac7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00451aca: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ace: je 0x451add */ if (fZ) goto L_00451add;
L_00451ad0:; BB(0x00451ad0);
    /* 00451ad0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451ad3: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x451ad8u); f_005e8590();
    /* 00451ad8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00451adb: jmp 0x451ae4 */ goto L_00451ae4;
L_00451add:; BB(0x00451add);
    /* 00451add: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00451ae4:; BB(0x00451ae4);
    /* 00451ae4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ae7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00451aea: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
L_00451af0:; BB(0x00451af0);
    /* 00451af0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451af3: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00451af9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451afc: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451aff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451b03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b06: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00451b0c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b0f: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451b15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451b17: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451b1au); call_ind(t); }
    /* 00451b1a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b1d: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00451b23: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b26: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451b2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451b2e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451b31u); call_ind(t); }
    /* 00451b31: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00451b33: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451b35: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b38: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00451b3e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b41: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451b47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451b49: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451b4cu); call_ind(t); }
    /* 00451b4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451b50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b53: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00451b59: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451b5eu); f_005e8740();
    /* 00451b5e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451b60: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b63: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 00451b69: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451b6eu); f_005e8775();
    /* 00451b6e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451b70: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b73: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00451b79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b7c: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451b82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451b84: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451b87u); call_ind(t); }
    /* 00451b87: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b8a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00451b90: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b93: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451b99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451b9b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451b9eu); call_ind(t); }
    /* 00451b9e: jmp 0x451f78 */ goto L_00451f78;
L_00451ba3:; BB(0x00451ba3);
    /* 00451ba3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ba6: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bad: jne 0x451be5 */ if (!fZ) goto L_00451be5;
L_00451baf:; BB(0x00451baf);
    /* 00451baf: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00451bb4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x451bb9u); f_0048ab58();
    /* 00451bb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451bbc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00451bbf: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bc3: je 0x451bd2 */ if (fZ) goto L_00451bd2;
L_00451bc5:; BB(0x00451bc5);
    /* 00451bc5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00451bc8: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x451bcdu); f_005e8590();
    /* 00451bcd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00451bd0: jmp 0x451bd9 */ goto L_00451bd9;
L_00451bd2:; BB(0x00451bd2);
    /* 00451bd2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00451bd9:; BB(0x00451bd9);
    /* 00451bd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451bdc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00451bdf: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
L_00451be5:; BB(0x00451be5);
    /* 00451be5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451be8: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00451bee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451bf1: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451bf4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451bf8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451bfb: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00451c01: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c04: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00451c0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451c0c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451c0fu); call_ind(t); }
    /* 00451c0f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c12: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00451c18: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c1b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00451c21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451c23: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451c26u); call_ind(t); }
    /* 00451c26: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00451c28: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451c2a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c2d: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00451c33: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c36: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00451c3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451c3e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451c41u); call_ind(t); }
    /* 00451c41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451c45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c48: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00451c4e: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451c53u); f_005e8740();
    /* 00451c53: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451c55: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c58: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00451c5e: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451c63u); f_005e8775();
    /* 00451c63: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451c65: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c68: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00451c6e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c71: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00451c77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451c79: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451c7cu); call_ind(t); }
    /* 00451c7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c7f: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00451c85: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c88: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00451c8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451c90: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451c93u); call_ind(t); }
    /* 00451c93: jmp 0x451f78 */ goto L_00451f78;
L_00451c98:; BB(0x00451c98);
    /* 00451c98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c9b: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ca2: jne 0x451cda */ if (!fZ) goto L_00451cda;
L_00451ca4:; BB(0x00451ca4);
    /* 00451ca4: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00451ca9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x451caeu); f_0048ab58();
    /* 00451cae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451cb1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00451cb4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451cb8: je 0x451cc7 */ if (fZ) goto L_00451cc7;
L_00451cba:; BB(0x00451cba);
    /* 00451cba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451cbd: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x451cc2u); f_005e8590();
    /* 00451cc2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00451cc5: jmp 0x451cce */ goto L_00451cce;
L_00451cc7:; BB(0x00451cc7);
    /* 00451cc7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00451cce:; BB(0x00451cce);
    /* 00451cce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451cd1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00451cd4: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
L_00451cda:; BB(0x00451cda);
    /* 00451cda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451cdd: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00451ce3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ce6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451ce9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451ced: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451cf0: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00451cf6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451cf9: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451cff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451d01: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451d04u); call_ind(t); }
    /* 00451d04: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d07: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00451d0d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d10: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451d16: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451d18: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451d1bu); call_ind(t); }
    /* 00451d1b: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 00451d1d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451d1f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d22: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00451d28: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d2b: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451d31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451d33: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451d36u); call_ind(t); }
    /* 00451d36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451d3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d3d: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00451d43: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451d48u); f_005e8740();
    /* 00451d48: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451d4a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d4d: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00451d53: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451d58u); f_005e8775();
    /* 00451d58: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451d5a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d5d: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00451d63: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d66: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451d6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451d6e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451d71u); call_ind(t); }
    /* 00451d71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d74: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00451d7a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d7d: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00451d83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451d85: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451d88u); call_ind(t); }
    /* 00451d88: jmp 0x451f78 */ goto L_00451f78;
L_00451d8d:; BB(0x00451d8d);
    /* 00451d8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451d90: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d97: jne 0x451dcf */ if (!fZ) goto L_00451dcf;
L_00451d99:; BB(0x00451d99);
    /* 00451d99: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00451d9e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x451da3u); f_0048ab58();
    /* 00451da3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451da6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00451da9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451dad: je 0x451dbc */ if (fZ) goto L_00451dbc;
L_00451daf:; BB(0x00451daf);
    /* 00451daf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451db2: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x451db7u); f_005e8590();
    /* 00451db7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00451dba: jmp 0x451dc3 */ goto L_00451dc3;
L_00451dbc:; BB(0x00451dbc);
    /* 00451dbc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00451dc3:; BB(0x00451dc3);
    /* 00451dc3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451dc6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00451dc9: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
L_00451dcf:; BB(0x00451dcf);
    /* 00451dcf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451dd2: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451dd8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ddb: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451dde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451de2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451de5: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00451deb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451dee: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00451df4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451df6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451df9u); call_ind(t); }
    /* 00451df9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451dfc: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451e02: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e05: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00451e0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451e0d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451e10u); call_ind(t); }
    /* 00451e10: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00451e15: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451e17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e1a: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451e20: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e23: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00451e29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451e2b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451e2eu); call_ind(t); }
    /* 00451e2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451e31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451e32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e35: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00451e3b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451e40u); f_005e8740();
    /* 00451e40: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451e42: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e45: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00451e4b: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451e50u); f_005e8775();
    /* 00451e50: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451e52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e55: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451e5b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e5e: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00451e64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451e66: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451e69u); call_ind(t); }
    /* 00451e69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e6c: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00451e72: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e75: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00451e7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451e7d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451e80u); call_ind(t); }
    /* 00451e80: jmp 0x451f78 */ goto L_00451f78;
L_00451e85:; BB(0x00451e85);
    /* 00451e85: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451e88: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e8f: jne 0x451ec7 */ if (!fZ) goto L_00451ec7;
L_00451e91:; BB(0x00451e91);
    /* 00451e91: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00451e96: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x451e9bu); f_0048ab58();
    /* 00451e9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451e9e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00451ea1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ea5: je 0x451eb4 */ if (fZ) goto L_00451eb4;
L_00451ea7:; BB(0x00451ea7);
    /* 00451ea7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00451eaa: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x451eafu); f_005e8590();
    /* 00451eaf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00451eb2: jmp 0x451ebb */ goto L_00451ebb;
L_00451eb4:; BB(0x00451eb4);
    /* 00451eb4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00451ebb:; BB(0x00451ebb);
    /* 00451ebb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ebe: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00451ec1: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
L_00451ec7:; BB(0x00451ec7);
    /* 00451ec7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451eca: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00451ed0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ed3: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00451ed6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451ed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451eda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451edd: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00451ee3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ee6: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00451eec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451eee: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x451ef1u); call_ind(t); }
    /* 00451ef1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451ef4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00451efa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451efd: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00451f03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451f05: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x451f08u); call_ind(t); }
    /* 00451f08: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00451f0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00451f0f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f12: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00451f18: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f1b: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00451f21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451f23: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x451f26u); call_ind(t); }
    /* 00451f26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451f2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f2d: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00451f33: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x451f38u); f_005e8740();
    /* 00451f38: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451f3a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f3d: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 00451f43: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x451f48u); f_005e8775();
    /* 00451f48: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00451f4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f4d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00451f53: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f56: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00451f5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451f5e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x451f61u); call_ind(t); }
    /* 00451f61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f64: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00451f6a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451f6d: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00451f73: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00451f75: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x451f78u); call_ind(t); }
L_00451f78:; BB(0x00451f78);
    /* 00451f78: mov esp, ebp */ r_esp = r_ebp;
    /* 00451f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451f7b: ret 8 */ FN_RET(0x00451986); r_esp += 12; return;
}

void f_00451f96(void) /* FUN_00451f96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451f96);
    /* 00451f96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451f97: mov ebp, esp */ r_ebp = r_esp;
    /* 00451f99: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451f9c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00451f9f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00451fa2: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451fa9: je 0x451fe8 */ if (fZ) goto L_00451fe8;
L_00451fab:; BB(0x00451fab);
    /* 00451fab: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00451fae: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 00451fb4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00451fb7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451fba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00451fbd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451fc1: je 0x451fd4 */ if (fZ) goto L_00451fd4;
L_00451fc3:; BB(0x00451fc3);
    /* 00451fc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00451fc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451fc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00451fca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451fcd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x451fcfu); call_ind(t); }
    /* 00451fcf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00451fd2: jmp 0x451fdb */ goto L_00451fdb;
L_00451fd4:; BB(0x00451fd4);
    /* 00451fd4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00451fdb:; BB(0x00451fdb);
    /* 00451fdb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00451fde: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_00451fe8:; BB(0x00451fe8);
    /* 00451fe8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00451feb: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ff2: je 0x452031 */ if (fZ) goto L_00452031;
L_00451ff4:; BB(0x00451ff4);
    /* 00451ff4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00451ff7: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00451ffd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00452000: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00452003: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00452006: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045200a: je 0x45201d */ if (fZ) goto L_0045201d;
L_0045200c:; BB(0x0045200c);
    /* 0045200c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045200e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452011: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452013: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452016: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x452018u); call_ind(t); }
    /* 00452018: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045201b: jmp 0x452024 */ goto L_00452024;
L_0045201d:; BB(0x0045201d);
    /* 0045201d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00452024:; BB(0x00452024);
    /* 00452024: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00452027: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_00452031:; BB(0x00452031);
    /* 00452031: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00452034: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045203b: je 0x45207a */ if (fZ) goto L_0045207a;
L_0045203d:; BB(0x0045203d);
    /* 0045203d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00452040: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00452046: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00452049: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045204c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045204f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452053: je 0x452066 */ if (fZ) goto L_00452066;
L_00452055:; BB(0x00452055);
    /* 00452055: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452057: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045205a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045205c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045205f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452061u); call_ind(t); }
    /* 00452061: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00452064: jmp 0x45206d */ goto L_0045206d;
L_00452066:; BB(0x00452066);
    /* 00452066: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0045206d:; BB(0x0045206d);
    /* 0045206d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00452070: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_0045207a:; BB(0x0045207a);
    /* 0045207a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045207d: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452084: je 0x4520c3 */ if (fZ) goto L_004520c3;
L_00452086:; BB(0x00452086);
    /* 00452086: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00452089: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0045208f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00452092: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452095: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00452098: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045209c: je 0x4520af */ if (fZ) goto L_004520af;
L_0045209e:; BB(0x0045209e);
    /* 0045209e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004520a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004520a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004520a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004520a8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4520aau); call_ind(t); }
    /* 004520aa: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004520ad: jmp 0x4520b6 */ goto L_004520b6;
L_004520af:; BB(0x004520af);
    /* 004520af: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004520b6:; BB(0x004520b6);
    /* 004520b6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004520b9: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
L_004520c3:; BB(0x004520c3);
    /* 004520c3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004520c6: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004520cd: je 0x45210c */ if (fZ) goto L_0045210c;
L_004520cf:; BB(0x004520cf);
    /* 004520cf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004520d2: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004520d8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004520db: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004520de: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004520e1: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004520e5: je 0x4520f8 */ if (fZ) goto L_004520f8;
L_004520e7:; BB(0x004520e7);
    /* 004520e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004520e9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004520ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004520ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004520f1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4520f3u); call_ind(t); }
    /* 004520f3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004520f6: jmp 0x4520ff */ goto L_004520ff;
L_004520f8:; BB(0x004520f8);
    /* 004520f8: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_004520ff:; BB(0x004520ff);
    /* 004520ff: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00452102: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
L_0045210c:; BB(0x0045210c);
    /* 0045210c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045210f: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452116: je 0x452155 */ if (fZ) goto L_00452155;
L_00452118:; BB(0x00452118);
    /* 00452118: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045211b: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00452121: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00452124: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00452127: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045212a: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045212e: je 0x452141 */ if (fZ) goto L_00452141;
L_00452130:; BB(0x00452130);
    /* 00452130: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452132: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452135: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452137: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045213a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x45213cu); call_ind(t); }
    /* 0045213c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045213f: jmp 0x452148 */ goto L_00452148;
L_00452141:; BB(0x00452141);
    /* 00452141: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00452148:; BB(0x00452148);
    /* 00452148: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045214b: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
L_00452155:; BB(0x00452155);
    /* 00452155: mov esp, ebp */ r_esp = r_ebp;
    /* 00452157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452158: ret  */ FN_RET(0x00451f96); r_esp += 4; return;
}

void f_00452159(void) /* FUN_00452159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452159);
    /* 00452159: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045215a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045215c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045215d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452163: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x452168u); f_005d5d20();
    /* 00452168: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045216b: mov dword ptr [eax], 0x635234 */ W32((u32)(r_eax), 0x635234u);
    /* 00452171: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452174: mov esp, ebp */ r_esp = r_ebp;
    /* 00452176: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452177: ret  */ FN_RET(0x00452159); r_esp += 4; return;
}

void f_00452178(void) /* FUN_00452178 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452178);
    /* 00452178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452179: mov ebp, esp */ r_ebp = r_esp;
    /* 0045217b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045217c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045217f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452182: mov dword ptr [eax], 0x635234 */ W32((u32)(r_eax), 0x635234u);
    /* 00452188: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045218b: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x452190u); f_005d5dfb();
    /* 00452190: mov esp, ebp */ r_esp = r_ebp;
    /* 00452192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452193: ret  */ FN_RET(0x00452178); r_esp += 4; return;
}

void f_00452194(void) /* FUN_00452194 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452194);
    /* 00452194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452195: mov ebp, esp */ r_ebp = r_esp;
    /* 00452197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452198: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045219b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045219e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004521a1: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x4521a6u); f_005e03cc();
    /* 004521a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004521a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004521a9: ret  */ FN_RET(0x00452194); r_esp += 4; return;
}

void f_004521c9(void) /* FUN_004521c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004521c9);
    /* 004521c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004521ca: mov ebp, esp */ r_ebp = r_esp;
    /* 004521cc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004521cf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004521d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004521d5: mov dword ptr [eax], 0x6352a4 */ W32((u32)(r_eax), 0x6352a4u);
    /* 004521db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004521de: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521e2: je 0x45221b */ if (fZ) goto L_0045221b;
L_004521e4:; BB(0x004521e4);
    /* 004521e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004521e7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004521ea: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004521ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004521f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004521f3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521f7: je 0x45220a */ if (fZ) goto L_0045220a;
L_004521f9:; BB(0x004521f9);
    /* 004521f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004521fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452200: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452203: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x452205u); call_ind(t); }
    /* 00452205: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00452208: jmp 0x452211 */ goto L_00452211;
L_0045220a:; BB(0x0045220a);
    /* 0045220a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00452211:; BB(0x00452211);
    /* 00452211: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452214: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_0045221b:; BB(0x0045221b);
    /* 0045221b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045221e: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x452223u); f_005e3fed();
    /* 00452223: mov esp, ebp */ r_esp = r_ebp;
    /* 00452225: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452226: ret  */ FN_RET(0x004521c9); r_esp += 4; return;
}

void f_00452227(void) /* FUN_00452227 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452227);
    /* 00452227: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452228: mov ebp, esp */ r_ebp = r_esp;
    /* 0045222a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045222d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00452230: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00452233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452234: call dword ptr [0x63323c] */ { u32 t = R32((u32)(0x63323cu)); r_esp -= 4; W32(r_esp, 0x45223au); call_ind(t); }
    /* 0045223a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0045223d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045223e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00452244: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00452247: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0045224a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045224b: call dword ptr [0x633170] */ { u32 t = R32((u32)(0x633170u)); r_esp -= 4; W32(r_esp, 0x452251u); call_ind(t); }
    /* 00452251: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452254: call 0x5e4151 */ r_esp -= 4; W32(r_esp, 0x452259u); f_005e4151();
    /* 00452259: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045225c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045225d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452261: push 0x67aa3c */ { u32 v = 0x67aa3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00452266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452269: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045226c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045226d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x452272u); f_00624050();
    /* 00452272: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452275: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452278: add edx, 0x7c */ {  u32 a = r_edx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045227b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045227c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045227f: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00452282: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452285: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00452288: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045228a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x45228du); call_ind(t); }
    /* 0045228d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045228f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452290: ret  */ FN_RET(0x00452227); r_esp += 4; return;
}

void f_00452291(void) /* FUN_00452291 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452291);
    /* 00452291: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452292: mov ebp, esp */ r_ebp = r_esp;
    /* 00452294: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452297: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045229a: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045229f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4522a4u); f_0048ab58();
    /* 004522a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004522a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004522aa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522ae: je 0x4522bd */ if (fZ) goto L_004522bd;
L_004522b0:; BB(0x004522b0);
    /* 004522b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522b3: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4522b8u); f_005e8590();
    /* 004522b8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004522bb: jmp 0x4522c4 */ goto L_004522c4;
L_004522bd:; BB(0x004522bd);
    /* 004522bd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004522c4:; BB(0x004522c4);
    /* 004522c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004522ca: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 004522cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522d0: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004522d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522d6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004522d9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004522dc: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004522de: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004522e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522e3: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004522e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522e9: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004522ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004522ee: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4522f1u); call_ind(t); }
    /* 004522f1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004522f3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522f6: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004522f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004522fc: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004522ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452301: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x452304u); call_ind(t); }
    /* 00452304: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452307: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0045230a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045230d: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00452310: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452312: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x452315u); call_ind(t); }
    /* 00452315: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452318: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0045231b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045231e: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00452321: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452323: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x452326u); call_ind(t); }
    /* 00452326: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452329: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x45232eu); f_005e4035();
    /* 0045232e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452331: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452333: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452336: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x452339u); call_ind(t); }
    /* 00452339: mov esp, ebp */ r_esp = r_ebp;
    /* 0045233b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045233c: ret  */ FN_RET(0x00452291); r_esp += 4; return;
}

void f_00452340(void) /* FUN_00452340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452340);
    /* 00452340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452341: mov ebp, esp */ r_ebp = r_esp;
    /* 00452343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045234a: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x45234fu); f_00451870();
    /* 0045234f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452352: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00452355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452357: je 0x452365 */ if (fZ) goto L_00452365;
L_00452359:; BB(0x00452359);
    /* 00452359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045235c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045235d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x452362u); f_0048ac1b();
    /* 00452362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452365:; BB(0x00452365);
    /* 00452365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452368: mov esp, ebp */ r_esp = r_ebp;
    /* 0045236a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045236b: ret 4 */ FN_RET(0x00452340); r_esp += 8; return;
}

void f_00452370(void) /* FUN_00452370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452370);
    /* 00452370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452371: mov ebp, esp */ r_ebp = r_esp;
    /* 00452373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045237a: call 0x452178 */ r_esp -= 4; W32(r_esp, 0x45237fu); f_00452178();
    /* 0045237f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452382: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00452385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452387: je 0x452395 */ if (fZ) goto L_00452395;
L_00452389:; BB(0x00452389);
    /* 00452389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045238c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045238d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x452392u); f_0048ac1b();
    /* 00452392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452395:; BB(0x00452395);
    /* 00452395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452398: mov esp, ebp */ r_esp = r_ebp;
    /* 0045239a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045239b: ret 4 */ FN_RET(0x00452370); r_esp += 8; return;
}

void f_004523a0(void) /* FUN_004523a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004523a0);
    /* 004523a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004523a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004523a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004523a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004523a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523aa: call 0x4521c9 */ r_esp -= 4; W32(r_esp, 0x4523afu); f_004521c9();
    /* 004523af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004523b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004523b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523b7: je 0x4523c5 */ if (fZ) goto L_004523c5;
L_004523b9:; BB(0x004523b9);
    /* 004523b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004523bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4523c2u); f_0048ac1b();
    /* 004523c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004523c5:; BB(0x004523c5);
    /* 004523c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004523ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004523cb: ret 4 */ FN_RET(0x004523a0); r_esp += 8; return;
}

void f_004523d0(void) /* FUN_004523d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004523d0);
    /* 004523d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004523d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004523d3: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004523d9: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 004523df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004523e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004523e3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004523e9: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x4523eeu); f_005d80f0();
    /* 004523ee: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004523f4: mov dword ptr [eax], 0x6352f4 */ W32((u32)(r_eax), 0x6352f4u);
    /* 004523fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004523fc: push 0x4ee */ { u32 v = 0x4eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00452401: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452407: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x45240cu); f_005e0461();
    /* 0045240c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045240e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452410: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452416: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x45241bu); f_005d81dc();
    /* 0045241b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452421: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x452426u); f_005e030e();
    /* 00452426: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00452428: push 0x67aabc */ { u32 v = 0x67aabcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045242d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452433: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x452438u); f_005d825e();
    /* 00452438: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0045243a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452440: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x452445u); f_005e0731();
    /* 00452445: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045244a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45244fu); f_0048ab58();
    /* 0045244f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452452: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00452455: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452459: je 0x45246b */ if (fZ) goto L_0045246b;
L_0045245b:; BB(0x0045245b);
    /* 0045245b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045245e: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x452463u); f_005e8590();
    /* 00452463: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00452469: jmp 0x452475 */ goto L_00452475;
L_0045246b:; BB(0x0045246b);
    /* 0045246b: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00452475:; BB(0x00452475);
    /* 00452475: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045247b: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00452481: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00452487: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0045248d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00452493: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452499: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0045249c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045249e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004524a4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004524aa: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004524b0: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004524b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004524b8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4524bbu); call_ind(t); }
    /* 004524bb: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004524bd: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004524c3: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004524c9: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4524ceu); f_005e87aa();
    /* 004524ce: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 004524d3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004524d9: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 004524df: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4524e4u); f_005e8740();
    /* 004524e4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004524e6: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004524e8: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004524ee: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 004524f4: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004524fa: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 00452500: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452502: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x452505u); call_ind(t); }
    /* 00452505: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045250b: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00452511: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452517: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0045251d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045251f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x452522u); call_ind(t); }
    /* 00452522: push 0x67aad4 */ { u32 v = 0x67aad4u; r_esp -= 4; W32(r_esp, v); }
    /* 00452527: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0045252d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00452533: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452539: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0045253f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452541: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x452544u); call_ind(t); }
    /* 00452544: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00452546: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0045254c: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00452552: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x452557u); f_005e8e99();
    /* 00452557: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045255d: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00452563: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452569: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0045256f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452571: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x452574u); call_ind(t); }
    /* 00452574: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00452579: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45257eu); f_0048ab58();
    /* 0045257e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452581: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00452587: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045258e: je 0x4525a3 */ if (fZ) goto L_004525a3;
L_00452590:; BB(0x00452590);
    /* 00452590: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00452596: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x45259bu); f_005e8590();
    /* 0045259b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004525a1: jmp 0x4525ad */ goto L_004525ad;
L_004525a3:; BB(0x004525a3);
    /* 004525a3: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_004525ad:; BB(0x004525ad);
    /* 004525ad: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004525b3: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004525b9: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 004525bf: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004525c5: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004525cb: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004525d1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004525d4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004525d6: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004525dc: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004525e2: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004525e8: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 004525ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004525f0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4525f3u); call_ind(t); }
    /* 004525f3: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004525f5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004525fb: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 00452601: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x452606u); f_005e87aa();
    /* 00452606: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045260b: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452611: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 00452617: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x45261cu); f_005e8740();
    /* 0045261c: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0045261e: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00452620: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452626: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0045262c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452632: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00452638: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045263a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x45263du); call_ind(t); }
    /* 0045263d: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452643: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00452649: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045264f: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00452655: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452657: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x45265au); call_ind(t); }
    /* 0045265a: push 0x67ab1c */ { u32 v = 0x67ab1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045265f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452665: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0045266b: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452671: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00452677: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452679: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x45267cu); call_ind(t); }
    /* 0045267c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045267e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452684: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0045268a: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x45268fu); f_005e8e99();
    /* 0045268f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452695: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0045269b: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004526a1: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004526a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004526a9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4526acu); call_ind(t); }
    /* 004526ac: mov eax, dword ptr [0x67ab40] */ r_eax = R32((u32)(0x67ab40u));
    /* 004526b1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004526b4: mov ecx, dword ptr [0x67ab44] */ r_ecx = R32((u32)(0x67ab44u));
    /* 004526ba: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004526bd: mov dl, byte ptr [0x67ab48] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x67ab48u))) & 0xffu);
    /* 004526c3: mov byte ptr [ebp - 0x48], dl */ W8((u32)(r_ebp+0xffffffb8u), (u8)r_edx);
    /* 004526c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004526c8: mov dword ptr [ebp - 0x47], eax */ W32((u32)(r_ebp+0xffffffb9u), r_eax);
    /* 004526cb: mov word ptr [ebp - 0x43], ax */ W16((u32)(r_ebp+0xffffffbdu), (u16)r_eax);
    /* 004526cf: mov byte ptr [ebp - 0x41], al */ W8((u32)(r_ebp+0xffffffbfu), (u8)r_eax);
    /* 004526d2: mov ecx, dword ptr [0x67ab4c] */ r_ecx = R32((u32)(0x67ab4cu));
    /* 004526d8: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004526db: mov edx, dword ptr [0x67ab50] */ r_edx = R32((u32)(0x67ab50u));
    /* 004526e1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004526e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004526e6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004526e9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004526ec: mov ecx, dword ptr [0x67ab54] */ r_ecx = R32((u32)(0x67ab54u));
    /* 004526f2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004526f5: mov dx, word ptr [0x67ab58] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x67ab58u))) & 0xffffu);
    /* 004526fc: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 00452700: mov al, byte ptr [0x67ab5a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x67ab5au))) & 0xffu);
    /* 00452705: mov byte ptr [ebp - 0x2a], al */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_eax);
    /* 00452708: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045270a: mov dword ptr [ebp - 0x29], ecx */ W32((u32)(r_ebp+0xffffffd7u), r_ecx);
    /* 0045270d: mov dword ptr [ebp - 0x25], ecx */ W32((u32)(r_ebp+0xffffffdbu), r_ecx);
    /* 00452710: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 00452713: mov edx, dword ptr [0x67ab5c] */ r_edx = R32((u32)(0x67ab5cu));
    /* 00452719: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0045271c: mov ax, word ptr [0x67ab60] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x67ab60u))) & 0xffffu);
    /* 00452722: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 00452726: mov cl, byte ptr [0x67ab62] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x67ab62u))) & 0xffu);
    /* 0045272c: mov byte ptr [ebp - 0x1a], cl */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_ecx);
    /* 0045272f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00452731: mov dword ptr [ebp - 0x19], edx */ W32((u32)(r_ebp+0xffffffe7u), r_edx);
    /* 00452734: mov dword ptr [ebp - 0x15], edx */ W32((u32)(r_ebp+0xffffffebu), r_edx);
    /* 00452737: mov byte ptr [ebp - 0x11], dl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_edx);
    /* 0045273a: mov eax, dword ptr [0x67ab64] */ r_eax = R32((u32)(0x67ab64u));
    /* 0045273f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00452742: mov cx, word ptr [0x67ab68] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x67ab68u))) & 0xffffu);
    /* 00452749: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0045274d: mov dl, byte ptr [0x67ab6a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x67ab6au))) & 0xffu);
    /* 00452753: mov byte ptr [ebp - 0xa], dl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_edx);
    /* 00452756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00452758: mov dword ptr [ebp - 9], eax */ W32((u32)(r_ebp+0xfffffff7u), r_eax);
    /* 0045275b: mov dword ptr [ebp - 5], eax */ W32((u32)(r_ebp+0xfffffffbu), r_eax);
    /* 0045275e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00452761: mov dword ptr [ebp - 0x7c], 0x33 */ W32((u32)(r_ebp+0xffffff84u), 0x33u);
    /* 00452768: mov dword ptr [ebp - 0x78], 0x8a */ W32((u32)(r_ebp+0xffffff88u), 0x8au);
    /* 0045276f: mov dword ptr [ebp - 0x74], 0x7a */ W32((u32)(r_ebp+0xffffff8cu), 0x7au);
    /* 00452776: mov dword ptr [ebp - 0x70], 0x8a */ W32((u32)(r_ebp+0xffffff90u), 0x8au);
    /* 0045277d: mov dword ptr [ebp - 0x6c], 0x33 */ W32((u32)(r_ebp+0xffffff94u), 0x33u);
    /* 00452784: mov dword ptr [ebp - 0x68], 0xa9 */ W32((u32)(r_ebp+0xffffff98u), 0xa9u);
    /* 0045278b: mov dword ptr [ebp - 0x64], 0x7a */ W32((u32)(r_ebp+0xffffff9cu), 0x7au);
    /* 00452792: mov dword ptr [ebp - 0x60], 0xa9 */ W32((u32)(r_ebp+0xffffffa0u), 0xa9u);
    /* 00452799: mov dword ptr [ebp - 0x5c], 0x9f */ W32((u32)(r_ebp+0xffffffa4u), 0x9fu);
    /* 004527a0: mov dword ptr [ebp - 0x58], 0xd1 */ W32((u32)(r_ebp+0xffffffa8u), 0xd1u);
    /* 004527a7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004527ae: jmp 0x4527b9 */ goto L_004527b9;
L_004527b0:; BB(0x004527b0);
    /* 004527b0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004527b3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004527b6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_004527b9:; BB(0x004527b9);
    /* 004527b9: cmp dword ptr [ebp - 0x54], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004527bd: jge 0x45298f */ if ((fS==fO)) goto L_0045298f;
L_004527c3:; BB(0x004527c3);
    /* 004527c3: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004527c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4527cdu); f_0048ab58();
    /* 004527cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004527d0: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004527d6: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004527dd: je 0x4527fd */ if (fZ) goto L_004527fd;
L_004527df:; BB(0x004527df);
    /* 004527df: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004527e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004527e6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004527e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004527ea: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004527f0: call 0x452abe */ r_esp -= 4; W32(r_esp, 0x4527f5u); f_00452abe();
    /* 004527f5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004527fb: jmp 0x452807 */ goto L_00452807;
L_004527fd:; BB(0x004527fd);
    /* 004527fd: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00452807:; BB(0x00452807);
    /* 00452807: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045280a: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452810: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00452816: mov dword ptr [edx + ecx*4 + 0x8c], eax */ W32((u32)(r_edx+r_ecx*4+0x8cu), r_eax);
    /* 0045281d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452820: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452826: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0045282d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452833: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00452836: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452839: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045283c: lea eax, [ebp + edx - 0x50] */ r_eax = (u32)(r_ebp+r_edx+0xffffffb0u);
    /* 00452840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452841: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452844: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045284a: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00452851: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00452854: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045285a: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00452861: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452863: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x452866u); call_ind(t); }
    /* 00452866: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00452868: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0045286a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0045286c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045286f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452875: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0045287c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045287f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452885: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0045288c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045288e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x452891u); call_ind(t); }
    /* 00452891: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00452896: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452899: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045289f: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004528a6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004528a9: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004528af: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004528b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004528b8: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4528bbu); call_ind(t); }
    /* 004528bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004528bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004528bf: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004528c2: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004528c8: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004528cf: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004528d2: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004528d8: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004528df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004528e1: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x4528e4u); call_ind(t); }
    /* 004528e4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004528e7: mov edx, dword ptr [ebp + ecx*8 - 0x78] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff88u));
    /* 004528eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004528ec: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004528ef: mov ecx, dword ptr [ebp + eax*8 - 0x7c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff84u));
    /* 004528f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004528f4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004528f7: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004528fd: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00452904: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452907: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0045290d: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00452914: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452916: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x452919u); call_ind(t); }
    /* 00452919: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045291b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045291e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452924: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0045292b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0045292e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452934: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0045293b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045293d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x452940u); call_ind(t); }
    /* 00452940: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00452943: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00452949: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00452950: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452953: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452959: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00452960: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452962: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x452965u); call_ind(t); }
    /* 00452965: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00452968: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045296e: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00452975: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00452978: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045297e: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00452985: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452987: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45298au); call_ind(t); }
    /* 0045298a: jmp 0x4527b0 */ goto L_004527b0;
L_0045298f:; BB(0x0045298f);
    /* 0045298f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00452995: mov esp, ebp */ r_esp = r_ebp;
    /* 00452997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452998: ret  */ FN_RET(0x004523d0); r_esp += 4; return;
}

void f_00452999(void) /* FUN_00452999 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452999);
    /* 00452999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045299a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045299c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045299f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004529a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004529a5: mov dword ptr [eax], 0x6352f4 */ W32((u32)(r_eax), 0x6352f4u);
    /* 004529ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004529ae: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 004529b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004529b7: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004529bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004529bf: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4529c2u); call_ind(t); }
    /* 004529c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004529c5: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004529cb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004529ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004529d1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004529d4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004529d8: je 0x4529eb */ if (fZ) goto L_004529eb;
L_004529da:; BB(0x004529da);
    /* 004529da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004529dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004529df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004529e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004529e4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4529e6u); call_ind(t); }
    /* 004529e6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004529e9: jmp 0x4529f2 */ goto L_004529f2;
L_004529eb:; BB(0x004529eb);
    /* 004529eb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004529f2:; BB(0x004529f2);
    /* 004529f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004529f5: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 004529ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452a02: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 00452a08: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452a0b: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00452a11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452a13: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x452a16u); call_ind(t); }
    /* 00452a16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452a19: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00452a1f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00452a22: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452a25: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00452a28: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452a2c: je 0x452a3f */ if (fZ) goto L_00452a3f;
L_00452a2e:; BB(0x00452a2e);
    /* 00452a2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452a30: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00452a33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452a35: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00452a38: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452a3au); call_ind(t); }
    /* 00452a3a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00452a3d: jmp 0x452a46 */ goto L_00452a46;
L_00452a3f:; BB(0x00452a3f);
    /* 00452a3f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00452a46:; BB(0x00452a46);
    /* 00452a46: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452a49: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00452a53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452a5a: jmp 0x452a65 */ goto L_00452a65;
L_00452a5c:; BB(0x00452a5c);
    /* 00452a5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452a5f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00452a62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00452a65:; BB(0x00452a65);
    /* 00452a65: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452a69: jge 0x452ab2 */ if ((fS==fO)) goto L_00452ab2;
L_00452a6b:; BB(0x00452a6b);
    /* 00452a6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452a6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452a71: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00452a78: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00452a7b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00452a7e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00452a81: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452a85: je 0x452a98 */ if (fZ) goto L_00452a98;
L_00452a87:; BB(0x00452a87);
    /* 00452a87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452a89: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452a8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452a8e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452a91: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452a93u); call_ind(t); }
    /* 00452a93: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00452a96: jmp 0x452a9f */ goto L_00452a9f;
L_00452a98:; BB(0x00452a98);
    /* 00452a98: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00452a9f:; BB(0x00452a9f);
    /* 00452a9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452aa2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452aa5: mov dword ptr [ecx + eax*4 + 0x8c], 0 */ W32((u32)(r_ecx+r_eax*4+0x8cu), 0x0u);
    /* 00452ab0: jmp 0x452a5c */ goto L_00452a5c;
L_00452ab2:; BB(0x00452ab2);
    /* 00452ab2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452ab5: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x452abau); f_005d8154();
    /* 00452aba: mov esp, ebp */ r_esp = r_ebp;
    /* 00452abc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452abd: ret  */ FN_RET(0x00452999); r_esp += 4; return;
}

void f_00452abe(void) /* FUN_00452abe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452abe);
    /* 00452abe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452abf: mov ebp, esp */ r_ebp = r_esp;
    /* 00452ac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ac2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452ac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452ac8: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x452acdu); f_005d5d20();
    /* 00452acd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452ad0: mov dword ptr [eax], 0x63530c */ W32((u32)(r_eax), 0x63530cu);
    /* 00452ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452ad9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00452adc: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00452ae2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452ae5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452ae8: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00452aee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452af1: mov esp, ebp */ r_esp = r_ebp;
    /* 00452af3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452af4: ret 8 */ FN_RET(0x00452abe); r_esp += 12; return;
}

void f_00452af7(void) /* FUN_00452af7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452af7);
    /* 00452af7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452af8: mov ebp, esp */ r_ebp = r_esp;
    /* 00452afa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452afb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452afe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452b01: mov dword ptr [eax], 0x63530c */ W32((u32)(r_eax), 0x63530cu);
    /* 00452b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452b0a: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x452b0fu); f_005d5dfb();
    /* 00452b0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00452b11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452b12: ret  */ FN_RET(0x00452af7); r_esp += 4; return;
}

void f_00452b13(void) /* FUN_00452b13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452b13);
    /* 00452b13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452b14: mov ebp, esp */ r_ebp = r_esp;
    /* 00452b16: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452b19: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00452b1c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452b1f: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00452b25: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00452b28: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00452b2c: ja 0x452d05 */ if ((!fC&&!fZ)) goto L_00452d05;
L_00452b32:; BB(0x00452b32);
    /* 00452b32: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00452b35: jmp dword ptr [edx*4 + 0x452d09] */ { u32 t = R32((u32)(r_edx*4+0x452d09u)); switch (t) { case 0x452b3cu: goto L_00452b3c; case 0x452ba3u: goto L_00452ba3; case 0x452c0au: goto L_00452c0a; case 0x452c71u: goto L_00452c71; case 0x452cd5u: goto L_00452cd5; default: UNSUP(0x00452b35, "jump table entry is not a known target"); } }
L_00452b3c:; BB(0x00452b3c);
    /* 00452b3c: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00452b41: mov dword ptr [eax + 0x12eac], 7 */ W32((u32)(r_eax+0x12eacu), 0x7u);
    /* 00452b4b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452b51: mov dword ptr [ecx + 0x12eb0], 3 */ W32((u32)(r_ecx+0x12eb0u), 0x3u);
    /* 00452b5b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00452b5d: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00452b63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452b65: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452b6b: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x452b6eu); call_ind(t); }
    /* 00452b6e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452b71: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00452b77: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00452b7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452b7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00452b80: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452b84: je 0x452b97 */ if (fZ) goto L_00452b97;
L_00452b86:; BB(0x00452b86);
    /* 00452b86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452b88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452b8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00452b8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452b90: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452b92u); call_ind(t); }
    /* 00452b92: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00452b95: jmp 0x452b9e */ goto L_00452b9e;
L_00452b97:; BB(0x00452b97);
    /* 00452b97: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00452b9e:; BB(0x00452b9e);
    /* 00452b9e: jmp 0x452d05 */ goto L_00452d05;
L_00452ba3:; BB(0x00452ba3);
    /* 00452ba3: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00452ba8: mov dword ptr [eax + 0x12eac], 3 */ W32((u32)(r_eax+0x12eacu), 0x3u);
    /* 00452bb2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452bb8: mov dword ptr [ecx + 0x12eb0], 3 */ W32((u32)(r_ecx+0x12eb0u), 0x3u);
    /* 00452bc2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00452bc4: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00452bca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452bcc: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452bd2: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x452bd5u); call_ind(t); }
    /* 00452bd5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452bd8: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00452bde: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00452be1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00452be4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00452be7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452beb: je 0x452bfe */ if (fZ) goto L_00452bfe;
L_00452bed:; BB(0x00452bed);
    /* 00452bed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452bef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452bf2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00452bf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452bf7: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452bf9u); call_ind(t); }
    /* 00452bf9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00452bfc: jmp 0x452c05 */ goto L_00452c05;
L_00452bfe:; BB(0x00452bfe);
    /* 00452bfe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00452c05:; BB(0x00452c05);
    /* 00452c05: jmp 0x452d05 */ goto L_00452d05;
L_00452c0a:; BB(0x00452c0a);
    /* 00452c0a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00452c0f: mov dword ptr [eax + 0x12eac], 5 */ W32((u32)(r_eax+0x12eacu), 0x5u);
    /* 00452c19: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452c1f: mov dword ptr [ecx + 0x12eb0], 3 */ W32((u32)(r_ecx+0x12eb0u), 0x3u);
    /* 00452c29: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00452c2b: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00452c31: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452c33: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452c39: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x452c3cu); call_ind(t); }
    /* 00452c3c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452c3f: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00452c45: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00452c48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452c4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00452c4e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452c52: je 0x452c65 */ if (fZ) goto L_00452c65;
L_00452c54:; BB(0x00452c54);
    /* 00452c54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452c56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00452c5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c5e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452c60u); call_ind(t); }
    /* 00452c60: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00452c63: jmp 0x452c6c */ goto L_00452c6c;
L_00452c65:; BB(0x00452c65);
    /* 00452c65: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00452c6c:; BB(0x00452c6c);
    /* 00452c6c: jmp 0x452d05 */ goto L_00452d05;
L_00452c71:; BB(0x00452c71);
    /* 00452c71: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00452c76: mov dword ptr [eax + 0x12eac], 2 */ W32((u32)(r_eax+0x12eacu), 0x2u);
    /* 00452c80: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452c86: mov dword ptr [ecx + 0x12eb0], 3 */ W32((u32)(r_ecx+0x12eb0u), 0x3u);
    /* 00452c90: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00452c92: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00452c98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452c9a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00452ca0: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x452ca3u); call_ind(t); }
    /* 00452ca3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452ca6: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00452cac: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00452caf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00452cb2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00452cb5: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452cb9: je 0x452ccc */ if (fZ) goto L_00452ccc;
L_00452cbb:; BB(0x00452cbb);
    /* 00452cbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452cbd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00452cc0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00452cc2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00452cc5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452cc7u); call_ind(t); }
    /* 00452cc7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00452cca: jmp 0x452cd3 */ goto L_00452cd3;
L_00452ccc:; BB(0x00452ccc);
    /* 00452ccc: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00452cd3:; BB(0x00452cd3);
    /* 00452cd3: jmp 0x452d05 */ goto L_00452d05;
L_00452cd5:; BB(0x00452cd5);
    /* 00452cd5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00452cd8: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00452cde: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00452ce1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452ce4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00452ce7: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ceb: je 0x452cfe */ if (fZ) goto L_00452cfe;
L_00452ced:; BB(0x00452ced);
    /* 00452ced: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452cef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00452cf2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452cf4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00452cf7: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x452cf9u); call_ind(t); }
    /* 00452cf9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00452cfc: jmp 0x452d05 */ goto L_00452d05;
L_00452cfe:; BB(0x00452cfe);
    /* 00452cfe: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00452d05:; BB(0x00452d05);
    /* 00452d05: mov esp, ebp */ r_esp = r_ebp;
    /* 00452d07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452d08: ret  */ FN_RET(0x00452b13); r_esp += 4; return;
}

void f_00452d20(void) /* FUN_00452d20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452d20);
    /* 00452d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00452d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452d27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d2a: call 0x452999 */ r_esp -= 4; W32(r_esp, 0x452d2fu); f_00452999();
    /* 00452d2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452d32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00452d35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d37: je 0x452d45 */ if (fZ) goto L_00452d45;
L_00452d39:; BB(0x00452d39);
    /* 00452d39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d3d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x452d42u); f_0048ac1b();
    /* 00452d42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452d45:; BB(0x00452d45);
    /* 00452d45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d48: mov esp, ebp */ r_esp = r_ebp;
    /* 00452d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452d4b: ret 4 */ FN_RET(0x00452d20); r_esp += 8; return;
}

void f_00452d50(void) /* FUN_00452d50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452d50);
    /* 00452d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00452d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d5a: call 0x452af7 */ r_esp -= 4; W32(r_esp, 0x452d5fu); f_00452af7();
    /* 00452d5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452d62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00452d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d67: je 0x452d75 */ if (fZ) goto L_00452d75;
L_00452d69:; BB(0x00452d69);
    /* 00452d69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x452d72u); f_0048ac1b();
    /* 00452d72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452d75:; BB(0x00452d75);
    /* 00452d75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d78: mov esp, ebp */ r_esp = r_ebp;
    /* 00452d7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452d7b: ret 4 */ FN_RET(0x00452d50); r_esp += 8; return;
}

void f_00452d80(void) /* FUN_00452d80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452d80);
    /* 00452d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00452d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452d87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d8a: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x452d8fu); f_005e8590();
    /* 00452d8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d92: mov dword ptr [eax], 0x63537c */ W32((u32)(r_eax), 0x63537cu);
    /* 00452d98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452d9b: mov dword ptr [ecx + 0x888], 1 */ W32((u32)(r_ecx+0x888u), 0x1u);
    /* 00452da5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452da8: mov dword ptr [edx + 0x88c], 1 */ W32((u32)(r_edx+0x88cu), 0x1u);
    /* 00452db2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452db5: mov dword ptr [eax + 0x890], 0 */ W32((u32)(r_eax+0x890u), 0x0u);
    /* 00452dbf: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00452dc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452dc7: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x452dccu); f_005d975e();
    /* 00452dcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452dcf: mov dword ptr [ecx + 0x894], 0 */ W32((u32)(r_ecx+0x894u), 0x0u);
    /* 00452dd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452ddc: mov esp, ebp */ r_esp = r_ebp;
    /* 00452dde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452ddf: ret  */ FN_RET(0x00452d80); r_esp += 4; return;
}

void f_00452de0(void) /* FUN_00452de0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452de0);
    /* 00452de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00452de3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452de6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00452de9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452dec: mov dword ptr [eax], 0x63537c */ W32((u32)(r_eax), 0x63537cu);
    /* 00452df2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452df5: cmp dword ptr [ecx + 0x894], 0 */ {  u32 a = R32((u32)(r_ecx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452dfc: je 0x452e2e */ if (fZ) goto L_00452e2e;
L_00452dfe:; BB(0x00452dfe);
    /* 00452dfe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452e01: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 00452e07: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00452e0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452e0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452e10: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452e14: je 0x452e27 */ if (fZ) goto L_00452e27;
L_00452e16:; BB(0x00452e16);
    /* 00452e16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00452e18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452e1b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452e1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452e20: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x452e22u); call_ind(t); }
    /* 00452e22: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00452e25: jmp 0x452e2e */ goto L_00452e2e;
L_00452e27:; BB(0x00452e27);
    /* 00452e27: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00452e2e:; BB(0x00452e2e);
    /* 00452e2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00452e31: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x452e36u); f_005e8680();
    /* 00452e36: mov esp, ebp */ r_esp = r_ebp;
    /* 00452e38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452e39: ret  */ FN_RET(0x00452de0); r_esp += 4; return;
}

void f_00452e3a(void) /* FUN_00452e3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452e3a);
    /* 00452e3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452e3b: mov ebp, esp */ r_ebp = r_esp;
    /* 00452e3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e3e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00452e41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452e44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00452e46: cmp dword ptr [ecx + 0x888], 0 */ {  u32 a = R32((u32)(r_ecx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452e4d: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00452e50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452e53: mov dword ptr [eax + 0x888], edx */ W32((u32)(r_eax+0x888u), r_edx);
    /* 00452e59: mov esp, ebp */ r_esp = r_ebp;
    /* 00452e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452e5c: ret  */ FN_RET(0x00452e3a); r_esp += 4; return;
}

void f_00452e5d(void) /* FUN_00452e5d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452e5d);
    /* 00452e5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452e5e: mov ebp, esp */ r_ebp = r_esp;
    /* 00452e60: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452e66: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 00452e6c: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452e72: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452e79: jne 0x452e82 */ if (!fZ) goto L_00452e82;
L_00452e7b:; BB(0x00452e7b);
    /* 00452e7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00452e7d: jmp 0x4533ea */ goto L_004533ea;
L_00452e82:; BB(0x00452e82);
    /* 00452e82: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00452e85: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00452e88: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 00452e8e: cmp dword ptr [ebp - 0x10c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452e95: je 0x453387 */ if (fZ) goto L_00453387;
L_00452e9b:; BB(0x00452e9b);
    /* 00452e9b: cmp dword ptr [ebp - 0x10c], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ea2: je 0x452ea9 */ if (fZ) goto L_00452ea9;
L_00452ea4:; BB(0x00452ea4);
    /* 00452ea4: jmp 0x4533e4 */ goto L_004533e4;
L_00452ea9:; BB(0x00452ea9);
    /* 00452ea9: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452eaf: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x452eb4u); f_00453535();
    /* 00452eb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452eb6: je 0x453385 */ if (fZ) goto L_00453385;
L_00452ebc:; BB(0x00452ebc);
    /* 00452ebc: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452ec2: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x452ec7u); f_005d9690();
    /* 00452ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ec9: je 0x453385 */ if (fZ) goto L_00453385;
L_00452ecf:; BB(0x00452ecf);
    /* 00452ecf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452ed2: cmp dword ptr [eax + 0x1c], 0x20 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ed6: je 0x453385 */ if (fZ) goto L_00453385;
L_00452edc:; BB(0x00452edc);
    /* 00452edc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00452edf: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00452ee3: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ee6: je 0x452ef9 */ if (fZ) goto L_00452ef9;
L_00452ee8:; BB(0x00452ee8);
    /* 00452ee8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452eeb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00452eee: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00452ef1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452ef3: jne 0x453385 */ if (!fZ) goto L_00453385;
L_00452ef9:; BB(0x00452ef9);
    /* 00452ef9: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452eff: cmp dword ptr [edx + 0x888], 0 */ {  u32 a = R32((u32)(r_edx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452f06: je 0x453385 */ if (fZ) goto L_00453385;
L_00452f0c:; BB(0x00452f0c);
    /* 00452f0c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452f0f: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00452f13: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 00452f19: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00452f1f: sub edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00452f22: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00452f28: cmp dword ptr [ebp - 0x110], 0x26 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00452f2f: ja 0x45326d */ if ((!fC&&!fZ)) goto L_0045326d;
L_00452f35:; BB(0x00452f35);
    /* 00452f35: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00452f3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00452f3d: mov al, byte ptr [ecx + 0x45341c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x45341cu))) & 0xffu);
    /* 00452f43: jmp dword ptr [eax*4 + 0x4533f0] */ { u32 t = R32((u32)(r_eax*4+0x4533f0u)); switch (t) { case 0x453167u: goto L_00453167; case 0x453257u: goto L_00453257; case 0x453262u: goto L_00453262; case 0x452f4au: goto L_00452f4a; case 0x452f80u: goto L_00452f80; case 0x452fa0u: goto L_00452fa0; case 0x45302du: goto L_0045302d; case 0x452fdau: goto L_00452fda; case 0x45305cu: goto L_0045305c; case 0x45308bu: goto L_0045308b; case 0x45326du: goto L_0045326d; default: UNSUP(0x00452f43, "jump table entry is not a known target"); } }
L_00452f4a:; BB(0x00452f4a);
    /* 00452f4a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00452f52: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f58: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x452f5bu); call_ind(t); }
    /* 00452f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452f5c: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x452f61u); f_00624990();
    /* 00452f61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452f64: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f6a: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
    /* 00452f70: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f76: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x452f7bu); f_005d9aa5();
    /* 00452f7b: jmp 0x45337b */ goto L_0045337b;
L_00452f80:; BB(0x00452f80);
    /* 00452f80: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f86: mov dword ptr [edx + 0x87c], 0 */ W32((u32)(r_edx+0x87cu), 0x0u);
    /* 00452f90: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452f96: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x452f9bu); f_005d9aa5();
    /* 00452f9b: jmp 0x45337b */ goto L_0045337b;
L_00452fa0:; BB(0x00452fa0);
    /* 00452fa0: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fa6: cmp dword ptr [eax + 0x87c], 0 */ {  u32 a = R32((u32)(r_eax+0x87cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452fad: jle 0x452fca */ if ((fZ||fS!=fO)) goto L_00452fca;
L_00452faf:; BB(0x00452faf);
    /* 00452faf: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fb5: mov ecx, dword ptr [eax + 0x87c] */ r_ecx = R32((u32)(r_eax+0x87cu));
    /* 00452fbb: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00452fbe: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fc4: mov dword ptr [edx + 0x87c], ecx */ W32((u32)(r_edx+0x87cu), r_ecx);
L_00452fca:; BB(0x00452fca);
    /* 00452fca: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fd0: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x452fd5u); f_005d9aa5();
    /* 00452fd5: jmp 0x45337b */ goto L_0045337b;
L_00452fda:; BB(0x00452fda);
    /* 00452fda: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fe0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00452fe2: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452fe8: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x452febu); call_ind(t); }
    /* 00452feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452fec: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x452ff1u); f_00624990();
    /* 00452ff1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00452ff4: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00452ffa: cmp dword ptr [ecx + 0x87c], eax */ {  u32 a = R32((u32)(r_ecx+0x87cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453000: jge 0x45301d */ if ((fS==fO)) goto L_0045301d;
L_00453002:; BB(0x00453002);
    /* 00453002: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453008: mov edx, dword ptr [ecx + 0x87c] */ r_edx = R32((u32)(r_ecx+0x87cu));
    /* 0045300e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453011: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453017: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_0045301d:; BB(0x0045301d);
    /* 0045301d: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453023: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x453028u); f_005d9aa5();
    /* 00453028: jmp 0x45337b */ goto L_0045337b;
L_0045302d:; BB(0x0045302d);
    /* 0045302d: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453033: cmp dword ptr [ecx + 0x880], 0 */ {  u32 a = R32((u32)(r_ecx+0x880u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045303a: jne 0x453057 */ if (!fZ) goto L_00453057;
L_0045303c:; BB(0x0045303c);
    /* 0045303c: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453042: mov dword ptr [edx + 0x880], 1 */ W32((u32)(r_edx+0x880u), 0x1u);
    /* 0045304c: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453052: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x453057u); f_005d9aa5();
L_00453057:; BB(0x00453057);
    /* 00453057: jmp 0x45337b */ goto L_0045337b;
L_0045305c:; BB(0x0045305c);
    /* 0045305c: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453062: cmp dword ptr [eax + 0x884], 0 */ {  u32 a = R32((u32)(r_eax+0x884u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453069: jne 0x453086 */ if (!fZ) goto L_00453086;
L_0045306b:; BB(0x0045306b);
    /* 0045306b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453071: mov dword ptr [ecx + 0x884], 1 */ W32((u32)(r_ecx+0x884u), 0x1u);
    /* 0045307b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453081: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x453086u); f_005d9aa5();
L_00453086:; BB(0x00453086);
    /* 00453086: jmp 0x45337b */ goto L_0045337b;
L_0045308b:; BB(0x0045308b);
    /* 0045308b: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453091: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00453093: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453099: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x45309cu); call_ind(t); }
    /* 0045309c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045309d: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4530a2u); f_00624990();
    /* 004530a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004530a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004530a7: je 0x453162 */ if (fZ) goto L_00453162;
L_004530ad:; BB(0x004530ad);
    /* 004530ad: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004530b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004530b5: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004530bb: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4530beu); call_ind(t); }
    /* 004530be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004530bf: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4530c4u); f_00624990();
    /* 004530c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004530c7: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004530cd: cmp dword ptr [ecx + 0x87c], eax */ {  u32 a = R32((u32)(r_ecx+0x87cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004530d3: je 0x453162 */ if (fZ) goto L_00453162;
L_004530d9:; BB(0x004530d9);
    /* 004530d9: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004530df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004530e1: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004530e7: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x4530eau); call_ind(t); }
    /* 004530ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004530eb: push 0x67abb0 */ { u32 v = 0x67abb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004530f0: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 004530f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004530f7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4530fcu); f_00624050();
    /* 004530fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004530ff: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453105: mov eax, dword ptr [edx + 0x87c] */ r_eax = R32((u32)(r_edx+0x87cu));
    /* 0045310b: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00453111: jmp 0x453122 */ goto L_00453122;
L_00453113:; BB(0x00453113);
    /* 00453113: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00453119: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045311c: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
L_00453122:; BB(0x00453122);
    /* 00453122: cmp dword ptr [ebp - 0x104], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045312c: jge 0x45314a */ if ((fS==fO)) goto L_0045314a;
L_0045312e:; BB(0x0045312e);
    /* 0045312e: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00453134: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 0045313a: mov cl, byte ptr [ebp + eax - 0xff] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff01u))) & 0xffu);
    /* 00453141: mov byte ptr [ebp + edx - 0x100], cl */ W8((u32)(r_ebp+r_edx+0xffffff00u), (u8)r_ecx);
    /* 00453148: jmp 0x453113 */ goto L_00453113;
L_0045314a:; BB(0x0045314a);
    /* 0045314a: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 00453150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453151: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453157: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453159: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045315f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x453162u); call_ind(t); }
L_00453162:; BB(0x00453162);
    /* 00453162: jmp 0x45337b */ goto L_0045337b;
L_00453167:; BB(0x00453167);
    /* 00453167: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045316d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045316f: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453175: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x453178u); call_ind(t); }
    /* 00453178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453179: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x45317eu); f_00624990();
    /* 0045317e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00453183: jbe 0x453252 */ if ((fC||fZ)) goto L_00453252;
L_00453189:; BB(0x00453189);
    /* 00453189: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045318f: cmp dword ptr [eax + 0x87c], 0 */ {  u32 a = R32((u32)(r_eax+0x87cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453196: jle 0x453252 */ if ((fZ||fS!=fO)) goto L_00453252;
L_0045319c:; BB(0x0045319c);
    /* 0045319c: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004531a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004531a4: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004531aa: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4531adu); call_ind(t); }
    /* 004531ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004531ae: push 0x67abb4 */ { u32 v = 0x67abb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004531b3: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 004531b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004531ba: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4531bfu); f_00624050();
    /* 004531bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004531c2: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004531c8: mov edx, dword ptr [ecx + 0x87c] */ r_edx = R32((u32)(r_ecx+0x87cu));
    /* 004531ce: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004531d1: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 004531d7: jmp 0x4531e8 */ goto L_004531e8;
L_004531d9:; BB(0x004531d9);
    /* 004531d9: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004531df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004531e2: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
L_004531e8:; BB(0x004531e8);
    /* 004531e8: cmp dword ptr [ebp - 0x104], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004531f2: jge 0x453210 */ if ((fS==fO)) goto L_00453210;
L_004531f4:; BB(0x004531f4);
    /* 004531f4: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004531fa: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00453200: mov al, byte ptr [ebp + edx - 0xff] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xffffff01u))) & 0xffu);
    /* 00453207: mov byte ptr [ebp + ecx - 0x100], al */ W8((u32)(r_ebp+r_ecx+0xffffff00u), (u8)r_eax);
    /* 0045320e: jmp 0x4531d9 */ goto L_004531d9;
L_00453210:; BB(0x00453210);
    /* 00453210: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453216: cmp dword ptr [ecx + 0x87c], 0 */ {  u32 a = R32((u32)(r_ecx+0x87cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045321d: jle 0x45323a */ if ((fZ||fS!=fO)) goto L_0045323a;
L_0045321f:; BB(0x0045321f);
    /* 0045321f: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453225: mov eax, dword ptr [edx + 0x87c] */ r_eax = R32((u32)(r_edx+0x87cu));
    /* 0045322b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045322e: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453234: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
L_0045323a:; BB(0x0045323a);
    /* 0045323a: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 00453240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453241: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453247: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453249: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045324f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x453252u); call_ind(t); }
L_00453252:; BB(0x00453252);
    /* 00453252: jmp 0x45337b */ goto L_0045337b;
L_00453257:; BB(0x00453257);
    /* 00453257: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045325a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0045325d: jmp 0x4533ea */ goto L_004533ea;
L_00453262:; BB(0x00453262);
    /* 00453262: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453265: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00453268: jmp 0x4533ea */ goto L_004533ea;
L_0045326d:; BB(0x0045326d);
    /* 0045326d: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453273: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00453275: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045327b: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x45327eu); call_ind(t); }
    /* 0045327e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045327f: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x453284u); f_00624990();
    /* 00453284: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453287: cmp eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0045328c: jae 0x45337b */ if (!fC) goto L_0045337b;
L_00453292:; BB(0x00453292);
    /* 00453292: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453298: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045329a: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004532a0: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4532a3u); call_ind(t); }
    /* 004532a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004532a4: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4532a9u); f_00624990();
    /* 004532a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004532ac: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004532b2: cmp eax, dword ptr [ecx + 0x898] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x898u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004532b8: jae 0x45337b */ if (!fC) goto L_0045337b;
L_004532be:; BB(0x004532be);
    /* 004532be: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004532c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004532c6: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004532cc: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x4532cfu); call_ind(t); }
    /* 004532cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004532d0: push 0x67abb8 */ { u32 v = 0x67abb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004532d5: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 004532db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004532dc: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4532e1u); f_00624050();
    /* 004532e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004532e4: mov dword ptr [ebp - 0x104], 0xff */ W32((u32)(r_ebp+0xfffffefcu), 0xffu);
    /* 004532ee: jmp 0x4532ff */ goto L_004532ff;
L_004532f0:; BB(0x004532f0);
    /* 004532f0: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004532f6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004532f9: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
L_004532ff:; BB(0x004532ff);
    /* 004532ff: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453305: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0045330b: cmp ecx, dword ptr [eax + 0x87c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x87cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453311: jle 0x45332f */ if ((fZ||fS!=fO)) goto L_0045332f;
L_00453313:; BB(0x00453313);
    /* 00453313: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00453319: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 0045331f: mov cl, byte ptr [ebp + eax - 0x101] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xfffffeffu))) & 0xffu);
    /* 00453326: mov byte ptr [ebp + edx - 0x100], cl */ W8((u32)(r_ebp+r_edx+0xffffff00u), (u8)r_ecx);
    /* 0045332d: jmp 0x4532f0 */ goto L_004532f0;
L_0045332f:; BB(0x0045332f);
    /* 0045332f: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453335: mov eax, dword ptr [edx + 0x87c] */ r_eax = R32((u32)(r_edx+0x87cu));
    /* 0045333b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045333e: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 00453341: mov byte ptr [ebp + eax - 0x100], dl */ W8((u32)(r_ebp+r_eax+0xffffff00u), (u8)r_edx);
    /* 00453348: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045334e: mov ecx, dword ptr [eax + 0x87c] */ r_ecx = R32((u32)(r_eax+0x87cu));
    /* 00453354: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453357: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0045335d: mov dword ptr [edx + 0x87c], ecx */ W32((u32)(r_edx+0x87cu), r_ecx);
    /* 00453363: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 00453369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045336a: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453370: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00453372: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453378: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x45337bu); call_ind(t); }
L_0045337b:; BB(0x0045337b);
    /* 0045337b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045337e: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_00453385:; BB(0x00453385);
    /* 00453385: jmp 0x4533e4 */ goto L_004533e4;
L_00453387:; BB(0x00453387);
    /* 00453387: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045338a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045338b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00453391: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x453396u); f_005d9738();
    /* 00453396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453398: je 0x4533e4 */ if (fZ) goto L_004533e4;
L_0045339a:; BB(0x0045339a);
    /* 0045339a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004533a2: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533a8: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x4533abu); call_ind(t); }
    /* 004533ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004533ae: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004533b1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004533b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004533b4: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004533bc: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533c2: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4533c5u); call_ind(t); }
    /* 004533c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004533c8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004533cb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004533cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004533ce: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533d4: call 0x5e91e5 */ r_esp -= 4; W32(r_esp, 0x4533d9u); f_005e91e5();
    /* 004533d9: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004533df: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x4533e4u); f_005d9aa5();
L_004533e4:; BB(0x004533e4);
    /* 004533e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004533e7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_004533ea:; BB(0x004533ea);
    /* 004533ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004533ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004533ed: ret 4 */ FN_RET(0x00452e5d); r_esp += 8; return;
}

void f_00453443(void) /* FUN_00453443 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453443);
    /* 00453443: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453444: mov ebp, esp */ r_ebp = r_esp;
    /* 00453446: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453449: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045344c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045344f: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453456: jne 0x4534e1 */ if (!fZ) goto L_004534e1;
L_0045345c:; BB(0x0045345c);
    /* 0045345c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045345f: mov dword ptr [ecx + 0x88c], 1 */ W32((u32)(r_ecx+0x88cu), 0x1u);
    /* 00453469: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045346c: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453473: je 0x4534e1 */ if (fZ) goto L_004534e1;
L_00453475:; BB(0x00453475);
    /* 00453475: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453478: call 0x5e9be4 */ r_esp -= 4; W32(r_esp, 0x45347du); f_005e9be4();
    /* 0045347d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453480: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x453485u); f_005d9aa5();
    /* 00453485: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00453487: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45348cu); f_0048ab58();
    /* 0045348c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045348f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453492: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453496: je 0x4534a9 */ if (fZ) goto L_004534a9;
L_00453498:; BB(0x00453498);
    /* 00453498: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045349b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045349c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045349f: call 0x5e9c4e */ r_esp -= 4; W32(r_esp, 0x4534a4u); f_005e9c4e();
    /* 004534a4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004534a7: jmp 0x4534b0 */ goto L_004534b0;
L_004534a9:; BB(0x004534a9);
    /* 004534a9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004534b0:; BB(0x004534b0);
    /* 004534b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004534b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004534b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004534b7: mov ecx, dword ptr [edx + 0x894] */ r_ecx = R32((u32)(r_edx+0x894u));
    /* 004534bd: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x4534c2u); f_005e40dc();
    /* 004534c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004534c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004534c7: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 004534cd: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004534d0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004534d3: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 004534d9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004534dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004534de: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4534e1u); call_ind(t); }
L_004534e1:; BB(0x004534e1);
    /* 004534e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004534e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004534e4: ret  */ FN_RET(0x00453443); r_esp += 4; return;
}

void f_004534e5(void) /* FUN_004534e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004534e5);
    /* 004534e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004534e6: mov ebp, esp */ r_ebp = r_esp;
    /* 004534e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004534e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004534ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004534ef: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004534f6: je 0x453531 */ if (fZ) goto L_00453531;
L_004534f8:; BB(0x004534f8);
    /* 004534f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004534fb: mov dword ptr [ecx + 0x88c], 0 */ W32((u32)(r_ecx+0x88cu), 0x0u);
    /* 00453505: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453508: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045350f: je 0x453531 */ if (fZ) goto L_00453531;
L_00453511:; BB(0x00453511);
    /* 00453511: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453514: call 0x5e9bfc */ r_esp -= 4; W32(r_esp, 0x453519u); f_005e9bfc();
    /* 00453519: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045351c: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x453521u); f_005d9aa5();
    /* 00453521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453523: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453526: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 0045352c: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x453531u); f_005e40dc();
L_00453531:; BB(0x00453531);
    /* 00453531: mov esp, ebp */ r_esp = r_ebp;
    /* 00453533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453534: ret  */ FN_RET(0x004534e5); r_esp += 4; return;
}

void f_00453535(void) /* FUN_00453535 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453535);
    /* 00453535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453536: mov ebp, esp */ r_ebp = r_esp;
    /* 00453538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453539: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045353c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045353f: mov eax, dword ptr [eax + 0x88c] */ r_eax = R32((u32)(r_eax+0x88cu));
    /* 00453545: mov esp, ebp */ r_esp = r_ebp;
    /* 00453547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453548: ret  */ FN_RET(0x00453535); r_esp += 4; return;
}

void f_0045356e(void) /* FUN_0045356e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045356e);
    /* 0045356e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045356f: mov ebp, esp */ r_ebp = r_esp;
    /* 00453571: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453574: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453577: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045357a: call 0x5e4fdf */ r_esp -= 4; W32(r_esp, 0x45357fu); f_005e4fdf();
    /* 0045357f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453582: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453589: je 0x4535fb */ if (fZ) goto L_004535fb;
L_0045358b:; BB(0x0045358b);
    /* 0045358b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045358e: cmp dword ptr [ecx + 0x88c], 0 */ {  u32 a = R32((u32)(r_ecx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453595: je 0x4535fb */ if (fZ) goto L_004535fb;
L_00453597:; BB(0x00453597);
    /* 00453597: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045359a: call 0x5e9be4 */ r_esp -= 4; W32(r_esp, 0x45359fu); f_005e9be4();
    /* 0045359f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004535a1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4535a6u); f_0048ab58();
    /* 004535a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004535a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004535ac: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004535b0: je 0x4535c3 */ if (fZ) goto L_004535c3;
L_004535b2:; BB(0x004535b2);
    /* 004535b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004535b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004535b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004535b9: call 0x5e9c4e */ r_esp -= 4; W32(r_esp, 0x4535beu); f_005e9c4e();
    /* 004535be: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004535c1: jmp 0x4535ca */ goto L_004535ca;
L_004535c3:; BB(0x004535c3);
    /* 004535c3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004535ca:; BB(0x004535ca);
    /* 004535ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004535cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004535ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004535d1: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 004535d7: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x4535dcu); f_005e40dc();
    /* 004535dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004535de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004535e1: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 004535e7: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004535ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004535ed: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 004535f3: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004535f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004535f8: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4535fbu); call_ind(t); }
L_004535fb:; BB(0x004535fb);
    /* 004535fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004535fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004535fe: ret  */ FN_RET(0x0045356e); r_esp += 4; return;
}

void f_004535ff(void) /* FUN_004535ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004535ff);
    /* 004535ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453600: mov ebp, esp */ r_ebp = r_esp;
    /* 00453602: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453603: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453609: call 0x5e4faf */ r_esp -= 4; W32(r_esp, 0x45360eu); f_005e4faf();
    /* 0045360e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453611: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453618: je 0x453632 */ if (fZ) goto L_00453632;
L_0045361a:; BB(0x0045361a);
    /* 0045361a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045361c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045361f: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 00453625: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x45362au); f_005e40dc();
    /* 0045362a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045362d: call 0x5e9bfc */ r_esp -= 4; W32(r_esp, 0x453632u); f_005e9bfc();
L_00453632:; BB(0x00453632);
    /* 00453632: mov esp, ebp */ r_esp = r_ebp;
    /* 00453634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453635: ret  */ FN_RET(0x004535ff); r_esp += 4; return;
}

void f_00453636(void) /* FUN_00453636 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453636);
    /* 00453636: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453637: mov ebp, esp */ r_ebp = r_esp;
    /* 00453639: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045363c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045363f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453642: call 0x5e8f00 */ r_esp -= 4; W32(r_esp, 0x453647u); f_005e8f00();
    /* 00453647: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00453649: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45364eu); f_0048ab58();
    /* 0045364e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453651: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453654: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453658: je 0x453667 */ if (fZ) goto L_00453667;
L_0045365a:; BB(0x0045365a);
    /* 0045365a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045365d: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x453662u); f_005e3fb0();
    /* 00453662: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00453665: jmp 0x45366e */ goto L_0045366e;
L_00453667:; BB(0x00453667);
    /* 00453667: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0045366e:; BB(0x0045366e);
    /* 0045366e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453671: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453674: mov dword ptr [eax + 0x894], ecx */ W32((u32)(r_eax+0x894u), r_ecx);
    /* 0045367a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045367d: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 00453683: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453686: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00453689: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0045368c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045368e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453691: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 00453697: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x45369cu); f_005ea0c3();
    /* 0045369c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045369f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004536a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536a4: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4536a7u); call_ind(t); }
    /* 004536a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004536a8: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4536adu); f_00624990();
    /* 004536ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004536b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536b3: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
    /* 004536b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536bc: call 0x4536f8 */ r_esp -= 4; W32(r_esp, 0x4536c1u); f_004536f8();
    /* 004536c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536c4: mov ecx, dword ptr [edx + 0x894] */ r_ecx = R32((u32)(r_edx+0x894u));
    /* 004536ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536cd: mov edx, dword ptr [eax + 0x894] */ r_edx = R32((u32)(r_eax+0x894u));
    /* 004536d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004536d5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4536d8u); call_ind(t); }
    /* 004536d8: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004536dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536e0: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 004536e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004536e9: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 004536ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004536f1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4536f4u); call_ind(t); }
    /* 004536f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004536f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004536f7: ret  */ FN_RET(0x00453636); r_esp += 4; return;
}

void f_004536f8(void) /* FUN_004536f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004536f8);
    /* 004536f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004536f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004536fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004536fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004536ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453702: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453709: je 0x453758 */ if (fZ) goto L_00453758;
L_0045370b:; BB(0x0045370b);
    /* 0045370b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045370e: mov edx, dword ptr [ecx + 0x894] */ r_edx = R32((u32)(r_ecx+0x894u));
    /* 00453714: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453718: je 0x453758 */ if (fZ) goto L_00453758;
L_0045371a:; BB(0x0045371a);
    /* 0045371a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045371c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045371f: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 00453725: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00453728: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045372b: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 00453731: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00453734: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00453736: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x453739u); call_ind(t); }
    /* 00453739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045373b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045373e: mov edx, dword ptr [ecx + 0x894] */ r_edx = R32((u32)(r_ecx+0x894u));
    /* 00453744: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 00453747: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045374a: mov edx, dword ptr [eax + 0x894] */ r_edx = R32((u32)(r_eax+0x894u));
    /* 00453750: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00453753: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453755: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x453758u); call_ind(t); }
L_00453758:; BB(0x00453758);
    /* 00453758: mov esp, ebp */ r_esp = r_ebp;
    /* 0045375a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045375b: ret  */ FN_RET(0x004536f8); r_esp += 4; return;
}

void f_0045375c(void) /* FUN_0045375c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045375c);
    /* 0045375c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045375d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045375f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453760: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453766: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045376d: je 0x453789 */ if (fZ) goto L_00453789;
L_0045376f:; BB(0x0045376f);
    /* 0045376f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453773: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453776: mov ecx, dword ptr [edx + 0x894] */ r_ecx = R32((u32)(r_edx+0x894u));
    /* 0045377c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x453781u); f_005ea0c3();
    /* 00453781: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453784: call 0x4536f8 */ r_esp -= 4; W32(r_esp, 0x453789u); f_004536f8();
L_00453789:; BB(0x00453789);
    /* 00453789: mov esp, ebp */ r_esp = r_ebp;
    /* 0045378b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045378c: ret 4 */ FN_RET(0x0045375c); r_esp += 8; return;
}

void f_0045378f(void) /* FUN_0045378f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045378f);
    /* 0045378f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453790: mov ebp, esp */ r_ebp = r_esp;
    /* 00453792: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453793: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453796: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453799: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045379c: mov dword ptr [eax + 0x898], ecx */ W32((u32)(r_eax+0x898u), r_ecx);
    /* 004537a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004537a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004537a5: ret 4 */ FN_RET(0x0045378f); r_esp += 8; return;
}

void f_004537a8(void) /* FUN_004537a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004537a8);
    /* 004537a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004537a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004537ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004537ac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004537af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004537b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004537b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004537b6: call 0x5e89d9 */ r_esp -= 4; W32(r_esp, 0x4537bbu); f_005e89d9();
    /* 004537bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004537be: call 0x4536f8 */ r_esp -= 4; W32(r_esp, 0x4537c3u); f_004536f8();
    /* 004537c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004537c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004537c6: ret 4 */ FN_RET(0x004537a8); r_esp += 8; return;
}

void f_004537d0(void) /* FUN_004537d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004537d0);
    /* 004537d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004537d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004537d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004537d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004537d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004537da: call 0x452de0 */ r_esp -= 4; W32(r_esp, 0x4537dfu); f_00452de0();
    /* 004537df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004537e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004537e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004537e7: je 0x4537f5 */ if (fZ) goto L_004537f5;
L_004537e9:; BB(0x004537e9);
    /* 004537e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004537ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004537ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4537f2u); f_0048ac1b();
    /* 004537f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004537f5:; BB(0x004537f5);
    /* 004537f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004537f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004537fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004537fb: ret 4 */ FN_RET(0x004537d0); r_esp += 8; return;
}

void f_00453800(void) /* FUN_00453800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453800);
    /* 00453800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453801: mov ebp, esp */ r_ebp = r_esp;
    /* 00453803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045380a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x45380fu); f_005dfbf0();
    /* 0045380f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453812: mov dword ptr [eax], 0x6353cc */ W32((u32)(r_eax), 0x6353ccu);
    /* 00453818: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045381a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045381c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045381f: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453822: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453823: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x453828u); f_00624170();
    /* 00453828: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045382b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045382e: mov esp, ebp */ r_esp = r_ebp;
    /* 00453830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453831: ret  */ FN_RET(0x00453800); r_esp += 4; return;
}

void f_00453832(void) /* FUN_00453832 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453832);
    /* 00453832: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453833: mov ebp, esp */ r_ebp = r_esp;
    /* 00453835: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453836: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453839: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045383c: mov dword ptr [eax], 0x6353cc */ W32((u32)(r_eax), 0x6353ccu);
    /* 00453842: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453845: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x45384au); f_005dfc0f();
    /* 0045384a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045384c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045384d: ret  */ FN_RET(0x00453832); r_esp += 4; return;
}

void f_0045384e(void) /* FUN_0045384e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045384e);
    /* 0045384e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045384f: mov ebp, esp */ r_ebp = r_esp;
    /* 00453851: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453852: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453855: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453858: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x45385du); f_005dfbf0();
    /* 0045385d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453860: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453863: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x453868u); f_005dd290();
    /* 00453868: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045386b: mov dword ptr [eax], 0x6353d4 */ W32((u32)(r_eax), 0x6353d4u);
    /* 00453871: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453874: call 0x453af3 */ r_esp -= 4; W32(r_esp, 0x453879u); f_00453af3();
    /* 00453879: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045387c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045387e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045387f: ret  */ FN_RET(0x0045384e); r_esp += 4; return;
}

void f_00453880(void) /* FUN_00453880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453880);
    /* 00453880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453881: mov ebp, esp */ r_ebp = r_esp;
    /* 00453883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453887: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045388a: mov dword ptr [eax], 0x6353d4 */ W32((u32)(r_eax), 0x6353d4u);
    /* 00453890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453893: call 0x4538af */ r_esp -= 4; W32(r_esp, 0x453898u); f_004538af();
    /* 00453898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045389b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045389e: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x4538a3u); f_005dd2d3();
    /* 004538a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004538a6: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x4538abu); f_005dfc0f();
    /* 004538ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004538ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004538ae: ret  */ FN_RET(0x00453880); r_esp += 4; return;
}

void f_004538af(void) /* FUN_004538af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004538af);
    /* 004538af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004538b0: mov ebp, esp */ r_ebp = r_esp;
    /* 004538b2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004538b5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004538b8:; BB(0x004538b8);
    /* 004538b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004538bb: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004538be: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4538c3u); f_005dd4d2();
    /* 004538c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004538c5: je 0x453912 */ if (fZ) goto L_00453912;
L_004538c7:; BB(0x004538c7);
    /* 004538c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004538c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004538cc: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004538cf: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x4538d4u); f_005dd560();
    /* 004538d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004538d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004538da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004538db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004538de: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004538e1: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x4538e6u); f_005dd469();
    /* 004538e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004538e9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004538ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004538ef: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004538f2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004538f6: je 0x453909 */ if (fZ) goto L_00453909;
L_004538f8:; BB(0x004538f8);
    /* 004538f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004538fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004538fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004538ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453902: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x453904u); call_ind(t); }
    /* 00453904: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00453907: jmp 0x453910 */ goto L_00453910;
L_00453909:; BB(0x00453909);
    /* 00453909: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00453910:; BB(0x00453910);
    /* 00453910: jmp 0x4538b8 */ goto L_004538b8;
L_00453912:; BB(0x00453912);
    /* 00453912: mov esp, ebp */ r_esp = r_ebp;
    /* 00453914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453915: ret  */ FN_RET(0x004538af); r_esp += 4; return;
}

void f_00453916(void) /* FUN_00453916 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453916);
    /* 00453916: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453917: mov ebp, esp */ r_ebp = r_esp;
    /* 00453919: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045391f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453921: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 00453927: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00453929: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45392eu); f_0048ab58();
    /* 0045392e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453931: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00453937: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045393e: je 0x453953 */ if (fZ) goto L_00453953;
L_00453940:; BB(0x00453940);
    /* 00453940: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00453946: call 0x453800 */ r_esp -= 4; W32(r_esp, 0x45394bu); f_00453800();
    /* 0045394b: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00453951: jmp 0x45395d */ goto L_0045395d;
L_00453953:; BB(0x00453953);
    /* 00453953: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0045395d:; BB(0x0045395d);
    /* 0045395d: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00453963: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453966: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453969: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045396a: push 0x67abbc */ { u32 v = 0x67abbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045396f: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00453974: push 0x67abc0 */ { u32 v = 0x67abc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453979: lea edx, [ebp - 0x10c] */ r_edx = (u32)(r_ebp+0xfffffef4u);
    /* 0045397f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453980: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x453985u); f_00624050();
    /* 00453985: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453988: push 0x67abc8 */ { u32 v = 0x67abc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045398d: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 00453993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453994: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x453999u); f_006243c0();
    /* 00453999: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045399c: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 004539a2: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004539a9: je 0x4539d4 */ if (fZ) goto L_004539d4;
L_004539ab:; BB(0x004539ab);
    /* 004539ab: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004539b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004539b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004539b4: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004539b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004539b9: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004539bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004539bd: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x4539c2u); f_00624250();
    /* 004539c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004539c5: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 004539cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004539cc: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x4539d1u); f_006241d0();
    /* 004539d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004539d4:; BB(0x004539d4);
    /* 004539d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004539d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004539d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004539db: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004539de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004539df: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4539e4u); f_00624510();
    /* 004539e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004539e7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004539ee: jmp 0x4539f9 */ goto L_004539f9;
L_004539f0:; BB(0x004539f0);
    /* 004539f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004539f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004539f6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004539f9:; BB(0x004539f9);
    /* 004539f9: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 004539ff: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453a02: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x453a07u); f_005dd4d2();
    /* 00453a07: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453a0a: jge 0x453a54 */ if ((fS==fO)) goto L_00453a54;
L_00453a0c:; BB(0x00453a0c);
    /* 00453a0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a10: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453a13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a14: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00453a1a: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x453a1fu); f_00453a6e();
    /* 00453a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453a20: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x453a25u); f_006240c0();
    /* 00453a25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453a28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a2a: jne 0x453a52 */ if (!fZ) goto L_00453a52;
L_00453a2c:; BB(0x00453a2c);
    /* 00453a2c: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a2f: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453a32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453a36: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00453a3c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453a3f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453a44u); f_005dd560();
    /* 00453a44: mov edi, eax */ r_edi = r_eax;
    /* 00453a46: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00453a49: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00453a4e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00453a50: jmp 0x453a66 */ goto L_00453a66;
L_00453a52:; BB(0x00453a52);
    /* 00453a52: jmp 0x4539f0 */ goto L_004539f0;
L_00453a54:; BB(0x00453a54);
    /* 00453a54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a58: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00453a5e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453a61: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x453a66u); f_005dd425();
L_00453a66:; BB(0x00453a66);
    /* 00453a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453a67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453a68: mov esp, ebp */ r_esp = r_ebp;
    /* 00453a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453a6b: ret 4 */ FN_RET(0x00453916); r_esp += 8; return;
}

void f_00453a6e(void) /* FUN_00453a6e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453a6e);
    /* 00453a6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453a6f: mov ebp, esp */ r_ebp = r_esp;
    /* 00453a71: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453a74: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453a77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453a7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453a7e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453a81: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453a86u); f_005dd560();
    /* 00453a86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a8c: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453a8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00453a91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453a92: ret 4 */ FN_RET(0x00453a6e); r_esp += 8; return;
}

void f_00453a95(void) /* FUN_00453a95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453a95);
    /* 00453a95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453a96: mov ebp, esp */ r_ebp = r_esp;
    /* 00453a98: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453a9b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453a9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453aa5: jmp 0x453ab0 */ goto L_00453ab0;
L_00453aa7:; BB(0x00453aa7);
    /* 00453aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453aaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453aad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00453ab0:; BB(0x00453ab0);
    /* 00453ab0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453ab3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453ab6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x453abbu); f_005dd4d2();
    /* 00453abb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453abe: jge 0x453aea */ if ((fS==fO)) goto L_00453aea;
L_00453ac0:; BB(0x00453ac0);
    /* 00453ac0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ac8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453acb: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453ace: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453ad3u); f_005dd560();
    /* 00453ad3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ad7: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x453adcu); f_006240c0();
    /* 00453adc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ae1: jne 0x453ae8 */ if (!fZ) goto L_00453ae8;
L_00453ae3:; BB(0x00453ae3);
    /* 00453ae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ae6: jmp 0x453aed */ goto L_00453aed;
L_00453ae8:; BB(0x00453ae8);
    /* 00453ae8: jmp 0x453aa7 */ goto L_00453aa7;
L_00453aea:; BB(0x00453aea);
    /* 00453aea: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00453aed:; BB(0x00453aed);
    /* 00453aed: mov esp, ebp */ r_esp = r_ebp;
    /* 00453aef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453af0: ret 4 */ FN_RET(0x00453a95); r_esp += 8; return;
}

void f_00453af3(void) /* FUN_00453af3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453af3);
    /* 00453af3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453af4: mov ebp, esp */ r_ebp = r_esp;
    /* 00453af6: sub esp, 0x224 */ {  u32 a = r_esp; u32 b = 0x224u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453afc: mov dword ptr [ebp - 0x224], ecx */ W32((u32)(r_ebp+0xfffffddcu), r_ecx);
    /* 00453b02: push 0x67abcc */ { u32 v = 0x67abccu; r_esp -= 4; W32(r_esp, v); }
    /* 00453b07: push 0x67abd4 */ { u32 v = 0x67abd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00453b0c: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00453b11: push 0x67abd8 */ { u32 v = 0x67abd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00453b16: lea eax, [ebp - 0x220] */ r_eax = (u32)(r_ebp+0xfffffde0u);
    /* 00453b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453b1d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x453b22u); f_00624050();
    /* 00453b22: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453b25: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 00453b2b: call 0x4538af */ r_esp -= 4; W32(r_esp, 0x453b30u); f_004538af();
    /* 00453b30: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 00453b36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b37: lea edx, [ebp - 0x220] */ r_edx = (u32)(r_ebp+0xfffffde0u);
    /* 00453b3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b3e: call 0x625490 */ r_esp -= 4; W32(r_esp, 0x453b43u); f_00625490();
    /* 00453b43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453b46: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453b49: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b4d: jne 0x453b53 */ if (!fZ) goto L_00453b53;
L_00453b4f:; BB(0x00453b4f);
    /* 00453b4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453b51: jmp 0x453bb3 */ goto L_00453bb3;
L_00453b53:; BB(0x00453b53);
    /* 00453b53: cmp dword ptr [ebp - 0x10c], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b5a: jne 0x453b6e */ if (!fZ) goto L_00453b6e;
L_00453b5c:; BB(0x00453b5c);
    /* 00453b5c: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00453b62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453b63: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 00453b69: call 0x453916 */ r_esp -= 4; W32(r_esp, 0x453b6eu); f_00453916();
L_00453b6e:; BB(0x00453b6e);
    /* 00453b6e: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 00453b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453b78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b79: call 0x6255c0 */ r_esp -= 4; W32(r_esp, 0x453b7eu); f_006255c0();
    /* 00453b7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b83: jne 0x453ba2 */ if (!fZ) goto L_00453ba2;
L_00453b85:; BB(0x00453b85);
    /* 00453b85: cmp dword ptr [ebp - 0x10c], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b8c: jne 0x453ba0 */ if (!fZ) goto L_00453ba0;
L_00453b8e:; BB(0x00453b8e);
    /* 00453b8e: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00453b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453b95: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 00453b9b: call 0x453916 */ r_esp -= 4; W32(r_esp, 0x453ba0u); f_00453916();
L_00453ba0:; BB(0x00453ba0);
    /* 00453ba0: jmp 0x453b6e */ goto L_00453b6e;
L_00453ba2:; BB(0x00453ba2);
    /* 00453ba2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ba5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ba6: call 0x6256e0 */ r_esp -= 4; W32(r_esp, 0x453babu); f_006256e0();
    /* 00453bab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453bae: mov eax, 1 */ r_eax = 0x1u;
L_00453bb3:; BB(0x00453bb3);
    /* 00453bb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00453bb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453bb6: ret  */ FN_RET(0x00453af3); r_esp += 4; return;
}

void f_00453bb7(void) /* FUN_00453bb7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453bb7);
    /* 00453bb7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453bb8: mov ebp, esp */ r_ebp = r_esp;
    /* 00453bba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453bbd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453bc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453bc7: jmp 0x453bd2 */ goto L_00453bd2;
L_00453bc9:; BB(0x00453bc9);
    /* 00453bc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453bcc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453bcf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00453bd2:; BB(0x00453bd2);
    /* 00453bd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453bd5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453bd8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x453bddu); f_005dd4d2();
    /* 00453bdd: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453be0: jge 0x453c0e */ if ((fS==fO)) goto L_00453c0e;
L_00453be2:; BB(0x00453be2);
    /* 00453be2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453be5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453be6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453be9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453bea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453bed: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453bf0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453bf5u); f_005dd560();
    /* 00453bf5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453bf9: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x453bfeu); f_006240c0();
    /* 00453bfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453c03: jne 0x453c0c */ if (!fZ) goto L_00453c0c;
L_00453c05:; BB(0x00453c05);
    /* 00453c05: mov eax, 1 */ r_eax = 0x1u;
    /* 00453c0a: jmp 0x453c10 */ goto L_00453c10;
L_00453c0c:; BB(0x00453c0c);
    /* 00453c0c: jmp 0x453bc9 */ goto L_00453bc9;
L_00453c0e:; BB(0x00453c0e);
    /* 00453c0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00453c10:; BB(0x00453c10);
    /* 00453c10: mov esp, ebp */ r_esp = r_ebp;
    /* 00453c12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453c13: ret 4 */ FN_RET(0x00453bb7); r_esp += 8; return;
}

void f_00453c16(void) /* FUN_00453c16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453c16);
    /* 00453c16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453c17: mov ebp, esp */ r_ebp = r_esp;
    /* 00453c19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c1a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453c1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453c20: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453c23: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x453c28u); f_005dd4d2();
    /* 00453c28: mov esp, ebp */ r_esp = r_ebp;
    /* 00453c2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453c2b: ret  */ FN_RET(0x00453c16); r_esp += 4; return;
}

void f_00453c2c(void) /* FUN_00453c2c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453c2c);
    /* 00453c2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453c2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00453c2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453c31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453c32: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453c35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453c3c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453c3f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453c44u); f_005dd560();
    /* 00453c44: mov esi, eax */ r_esi = r_eax;
    /* 00453c46: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453c49: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00453c4e: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00453c51: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00453c53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453c54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453c55: mov esp, ebp */ r_esp = r_ebp;
    /* 00453c57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453c58: ret 8 */ FN_RET(0x00453c2c); r_esp += 12; return;
}

void f_00453c5b(void) /* FUN_00453c5b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453c5b);
    /* 00453c5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453c5c: mov ebp, esp */ r_ebp = r_esp;
    /* 00453c5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c5f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453c60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453c61: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453c64: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453c6b: call 0x453a95 */ r_esp -= 4; W32(r_esp, 0x453c70u); f_00453a95();
    /* 00453c70: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453c73: jne 0x453c79 */ if (!fZ) goto L_00453c79;
L_00453c75:; BB(0x00453c75);
    /* 00453c75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453c77: jmp 0x453ca5 */ goto L_00453ca5;
L_00453c79:; BB(0x00453c79);
    /* 00453c79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453c7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453c80: call 0x453a95 */ r_esp -= 4; W32(r_esp, 0x453c85u); f_00453a95();
    /* 00453c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453c89: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453c8c: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453c91u); f_005dd560();
    /* 00453c91: mov esi, eax */ r_esi = r_eax;
    /* 00453c93: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453c96: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00453c9b: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00453c9e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00453ca0: mov eax, 1 */ r_eax = 0x1u;
L_00453ca5:; BB(0x00453ca5);
    /* 00453ca5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453ca6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453ca7: mov esp, ebp */ r_esp = r_ebp;
    /* 00453ca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453caa: ret 8 */ FN_RET(0x00453c5b); r_esp += 12; return;
}

void f_00453cad(void) /* FUN_00453cad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453cad);
    /* 00453cad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453cae: mov ebp, esp */ r_ebp = r_esp;
    /* 00453cb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453cb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453cb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453cb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453cb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453cbb: call 0x453a95 */ r_esp -= 4; W32(r_esp, 0x453cc0u); f_00453a95();
    /* 00453cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453cc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453cc4: call 0x453ccf */ r_esp -= 4; W32(r_esp, 0x453cc9u); f_00453ccf();
    /* 00453cc9: mov esp, ebp */ r_esp = r_ebp;
    /* 00453ccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453ccc: ret 4 */ FN_RET(0x00453cad); r_esp += 8; return;
}

void f_00453ccf(void) /* FUN_00453ccf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453ccf);
    /* 00453ccf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453cd0: mov ebp, esp */ r_ebp = r_esp;
    /* 00453cd2: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453cd8: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00453cde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ce2: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00453ce8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453ceb: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x453cf0u); f_005dd560();
    /* 00453cf0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00453cf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453cf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453cf7: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00453cfd: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453d00: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x453d05u); f_005dd469();
    /* 00453d05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d08: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d0c: push 0x67abe0 */ { u32 v = 0x67abe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453d11: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 00453d16: push 0x67abe4 */ { u32 v = 0x67abe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00453d1b: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00453d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d22: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x453d27u); f_00624050();
    /* 00453d27: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453d2a: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00453d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d31: call 0x625790 */ r_esp -= 4; W32(r_esp, 0x453d36u); f_00625790();
    /* 00453d36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453d39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d3c: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00453d42: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00453d48: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00453d4e: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453d55: je 0x453d71 */ if (fZ) goto L_00453d71;
L_00453d57:; BB(0x00453d57);
    /* 00453d57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453d59: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00453d5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00453d61: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00453d67: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x453d69u); call_ind(t); }
    /* 00453d69: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00453d6f: jmp 0x453d7b */ goto L_00453d7b;
L_00453d71:; BB(0x00453d71);
    /* 00453d71: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_00453d7b:; BB(0x00453d7b);
    /* 00453d7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00453d7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453d7e: ret 4 */ FN_RET(0x00453ccf); r_esp += 8; return;
}

void f_00453d81(void) /* FUN_00453d81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453d81);
    /* 00453d81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453d82: mov ebp, esp */ r_ebp = r_esp;
    /* 00453d84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d85: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453d88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d8b: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x453d90u); f_005e3fb0();
    /* 00453d90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d93: mov dword ptr [eax], 0x6353dc */ W32((u32)(r_eax), 0x6353dcu);
    /* 00453d99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d9c: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 00453da3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453da6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453da9: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00453dac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453dae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453db1: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x453db6u); f_005ea514();
    /* 00453db6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453db9: mov esp, ebp */ r_esp = r_ebp;
    /* 00453dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453dbc: ret 4 */ FN_RET(0x00453d81); r_esp += 8; return;
}

void f_00453dbf(void) /* FUN_00453dbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453dbf);
    /* 00453dbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453dc0: mov ebp, esp */ r_ebp = r_esp;
    /* 00453dc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453dc3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453dc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453dc9: mov dword ptr [eax], 0x6353dc */ W32((u32)(r_eax), 0x6353dcu);
    /* 00453dcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453dd2: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x453dd7u); f_005e3fed();
    /* 00453dd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00453dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453dda: ret  */ FN_RET(0x00453dbf); r_esp += 4; return;
}

void f_00453ddb(void) /* FUN_00453ddb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453ddb);
    /* 00453ddb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453ddc: mov ebp, esp */ r_ebp = r_esp;
    /* 00453dde: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453de1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453de4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453de7: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453deb: je 0x453df8 */ if (fZ) goto L_00453df8;
L_00453ded:; BB(0x00453ded);
    /* 00453ded: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453df0: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00453df3: jmp 0x453f93 */ goto L_00453f93;
L_00453df8:; BB(0x00453df8);
    /* 00453df8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453dfb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00453dfe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00453e01: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e05: je 0x453e16 */ if (fZ) goto L_00453e16;
L_00453e07:; BB(0x00453e07);
    /* 00453e07: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e0b: je 0x453ed1 */ if (fZ) goto L_00453ed1;
L_00453e11:; BB(0x00453e11);
    /* 00453e11: jmp 0x453f8d */ goto L_00453f8d;
L_00453e16:; BB(0x00453e16);
    /* 00453e16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e19: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e1d: jne 0x453ecc */ if (!fZ) goto L_00453ecc;
L_00453e23:; BB(0x00453e23);
    /* 00453e23: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453e26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453e27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e2a: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x453e2fu); f_005d9738();
    /* 00453e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e31: je 0x453ecc */ if (fZ) goto L_00453ecc;
L_00453e37:; BB(0x00453e37);
    /* 00453e37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453e3a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00453e3d: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00453e40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e42: je 0x453e71 */ if (fZ) goto L_00453e71;
L_00453e44:; BB(0x00453e44);
    /* 00453e44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e47: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e4b: je 0x453e71 */ if (fZ) goto L_00453e71;
L_00453e4d:; BB(0x00453e4d);
    /* 00453e4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e50: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00453e53: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x453e58u); f_0041f839();
    /* 00453e58: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e5b: je 0x453e71 */ if (fZ) goto L_00453e71;
L_00453e5d:; BB(0x00453e5d);
    /* 00453e5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e60: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00453e63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453e64: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00453e69: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00453e6c: call 0x4480f7 */ r_esp -= 4; W32(r_esp, 0x453e71u); f_004480f7();
L_00453e71:; BB(0x00453e71);
    /* 00453e71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453e74: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00453e77: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00453e7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e7c: je 0x453eb8 */ if (fZ) goto L_00453eb8;
L_00453e7e:; BB(0x00453e7e);
    /* 00453e7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e81: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e85: je 0x453eb8 */ if (fZ) goto L_00453eb8;
L_00453e87:; BB(0x00453e87);
    /* 00453e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e8a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00453e8d: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x453e92u); f_0041f839();
    /* 00453e92: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e95: je 0x453eb8 */ if (fZ) goto L_00453eb8;
L_00453e97:; BB(0x00453e97);
    /* 00453e97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453e9a: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00453e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e9e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00453ea4: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00453ea7: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00453ead: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00453eb0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453eb2: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x453eb8u); call_ind(t); }
L_00453eb8:; BB(0x00453eb8);
    /* 00453eb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ebb: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 00453ec2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453ec5: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_00453ecc:; BB(0x00453ecc);
    /* 00453ecc: jmp 0x453f8d */ goto L_00453f8d;
L_00453ed1:; BB(0x00453ed1);
    /* 00453ed1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ed4: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ed8: je 0x453f8d */ if (fZ) goto L_00453f8d;
L_00453ede:; BB(0x00453ede);
    /* 00453ede: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ee1: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ee5: je 0x453f1d */ if (fZ) goto L_00453f1d;
L_00453ee7:; BB(0x00453ee7);
    /* 00453ee7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453eea: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00453eed: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00453ef0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ef2: je 0x453f1d */ if (fZ) goto L_00453f1d;
L_00453ef4:; BB(0x00453ef4);
    /* 00453ef4: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00453ef9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00453efc: call 0x448432 */ r_esp -= 4; W32(r_esp, 0x453f01u); f_00448432();
    /* 00453f01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453f03: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00453f09: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00453f0c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00453f12: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00453f15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453f17: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x453f1du); call_ind(t); }
L_00453f1d:; BB(0x00453f1d);
    /* 00453f1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453f20: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f24: je 0x453f5c */ if (fZ) goto L_00453f5c;
L_00453f26:; BB(0x00453f26);
    /* 00453f26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453f29: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00453f2c: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00453f2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f31: je 0x453f5c */ if (fZ) goto L_00453f5c;
L_00453f33:; BB(0x00453f33);
    /* 00453f33: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00453f38: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00453f3b: call 0x448432 */ r_esp -= 4; W32(r_esp, 0x453f40u); f_00448432();
    /* 00453f40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453f42: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00453f48: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00453f4b: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00453f51: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00453f54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00453f56: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x453f5cu); call_ind(t); }
L_00453f5c:; BB(0x00453f5c);
    /* 00453f5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453f60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453f63: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x453f68u); f_005d9738();
    /* 00453f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f6a: je 0x453f83 */ if (fZ) goto L_00453f83;
L_00453f6c:; BB(0x00453f6c);
    /* 00453f6c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453f6f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00453f72: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00453f75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f77: je 0x453f83 */ if (fZ) goto L_00453f83;
L_00453f79:; BB(0x00453f79);
    /* 00453f79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453f7c: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_00453f83:; BB(0x00453f83);
    /* 00453f83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453f86: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_00453f8d:; BB(0x00453f8d);
    /* 00453f8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453f90: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_00453f93:; BB(0x00453f93);
    /* 00453f93: mov esp, ebp */ r_esp = r_ebp;
    /* 00453f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453f96: ret 4 */ FN_RET(0x00453ddb); r_esp += 8; return;
}

void f_00453f99(void) /* FUN_00453f99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453f99);
    /* 00453f99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453f9a: mov ebp, esp */ r_ebp = r_esp;
    /* 00453f9c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453f9f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453fa2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453fa5: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x453faau); f_005dfbf0();
    /* 00453faa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453fad: mov dword ptr [eax], 0x63542c */ W32((u32)(r_eax), 0x63542cu);
    /* 00453fb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453fba: jmp 0x453fc5 */ goto L_00453fc5;
L_00453fbc:; BB(0x00453fbc);
    /* 00453fbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453fbf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453fc2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00453fc5:; BB(0x00453fc5);
    /* 00453fc5: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453fc9: jge 0x453fdb */ if ((fS==fO)) goto L_00453fdb;
L_00453fcb:; BB(0x00453fcb);
    /* 00453fcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453fce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453fd1: mov dword ptr [eax + edx*4 + 0x60], 0 */ W32((u32)(r_eax+r_edx*4+0x60u), 0x0u);
    /* 00453fd9: jmp 0x453fbc */ goto L_00453fbc;
L_00453fdb:; BB(0x00453fdb);
    /* 00453fdb: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00453fdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453fdf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453fe2: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453fe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453fe6: call 0x624170 */ r_esp -= 4; W32(r_esp, 0x453febu); f_00624170();
    /* 00453feb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453fee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453ff1: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00453ff8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453ffb: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00454002: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454005: mov dword ptr [ecx + 0x10], 0xa */ W32((u32)(r_ecx+0x10u), 0xau);
    /* 0045400c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045400f: mov esp, ebp */ r_esp = r_ebp;
    /* 00454011: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454012: ret  */ FN_RET(0x00453f99); r_esp += 4; return;
}

void f_00454013(void) /* FUN_00454013 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454013);
    /* 00454013: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454014: mov ebp, esp */ r_ebp = r_esp;
    /* 00454016: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454019: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045401c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045401f: mov dword ptr [eax], 0x63542c */ W32((u32)(r_eax), 0x63542cu);
    /* 00454025: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045402c: jmp 0x454037 */ goto L_00454037;
L_0045402e:; BB(0x0045402e);
    /* 0045402e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454031: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00454037:; BB(0x00454037);
    /* 00454037: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045403b: jge 0x45408b */ if ((fS==fO)) goto L_0045408b;
L_0045403d:; BB(0x0045403d);
    /* 0045403d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454040: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454043: cmp dword ptr [eax + edx*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454048: je 0x454089 */ if (fZ) goto L_00454089;
L_0045404a:; BB(0x0045404a);
    /* 0045404a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045404d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454050: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454054: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00454057: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045405a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045405d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454061: je 0x454074 */ if (fZ) goto L_00454074;
L_00454063:; BB(0x00454063);
    /* 00454063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00454065: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454068: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045406a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045406d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x45406fu); call_ind(t); }
    /* 0045406f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00454072: jmp 0x45407b */ goto L_0045407b;
L_00454074:; BB(0x00454074);
    /* 00454074: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0045407b:; BB(0x0045407b);
    /* 0045407b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045407e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454081: mov dword ptr [edx + ecx*4 + 0x60], 0 */ W32((u32)(r_edx+r_ecx*4+0x60u), 0x0u);
L_00454089:; BB(0x00454089);
    /* 00454089: jmp 0x45402e */ goto L_0045402e;
L_0045408b:; BB(0x0045408b);
    /* 0045408b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045408e: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x454093u); f_005dfc0f();
    /* 00454093: mov esp, ebp */ r_esp = r_ebp;
    /* 00454095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454096: ret  */ FN_RET(0x00454013); r_esp += 4; return;
}

void f_00454097(void) /* FUN_00454097 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454097);
    /* 00454097: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454098: mov ebp, esp */ r_ebp = r_esp;
    /* 0045409a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045409d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004540a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004540a7: jmp 0x4540b2 */ goto L_004540b2;
L_004540a9:; BB(0x004540a9);
    /* 004540a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004540ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004540af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004540b2:; BB(0x004540b2);
    /* 004540b2: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004540b6: jge 0x454134 */ if ((fS==fO)) goto L_00454134;
L_004540b8:; BB(0x004540b8);
    /* 004540b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004540bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004540be: cmp dword ptr [edx + ecx*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540c3: jne 0x454100 */ if (!fZ) goto L_00454100;
L_004540c5:; BB(0x004540c5);
    /* 004540c5: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004540ca: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4540cfu); f_0048ab58();
    /* 004540cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004540d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004540d5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540d9: je 0x4540ec */ if (fZ) goto L_004540ec;
L_004540db:; BB(0x004540db);
    /* 004540db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004540de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004540df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004540e2: call 0x453d81 */ r_esp -= 4; W32(r_esp, 0x4540e7u); f_00453d81();
    /* 004540e7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004540ea: jmp 0x4540f3 */ goto L_004540f3;
L_004540ec:; BB(0x004540ec);
    /* 004540ec: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004540f3:; BB(0x004540f3);
    /* 004540f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004540f6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004540f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004540fc: mov dword ptr [edx + ecx*4 + 0x60], eax */ W32((u32)(r_edx+r_ecx*4+0x60u), r_eax);
L_00454100:; BB(0x00454100);
    /* 00454100: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454104: je 0x454116 */ if (fZ) goto L_00454116;
L_00454106:; BB(0x00454106);
    /* 00454106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454109: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045410c: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454110: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454113: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_00454116:; BB(0x00454116);
    /* 00454116: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454119: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045411c: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454120: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454123: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454126: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045412a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045412c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x45412fu); call_ind(t); }
    /* 0045412f: jmp 0x4540a9 */ goto L_004540a9;
L_00454134:; BB(0x00454134);
    /* 00454134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454137: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0045413a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045413b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045413e: call 0x454168 */ r_esp -= 4; W32(r_esp, 0x454143u); f_00454168();
    /* 00454143: mov esp, ebp */ r_esp = r_ebp;
    /* 00454145: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454146: ret 8 */ FN_RET(0x00454097); r_esp += 12; return;
}

void f_00454149(void) /* FUN_00454149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454149);
    /* 00454149: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045414a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045414c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045414d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454150: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454153: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454156: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00454159: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045415c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045415f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00454162: mov esp, ebp */ r_esp = r_ebp;
    /* 00454164: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454165: ret 8 */ FN_RET(0x00454149); r_esp += 12; return;
}

void f_00454168(void) /* FUN_00454168 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454168);
    /* 00454168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454169: mov ebp, esp */ r_ebp = r_esp;
    /* 0045416b: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045416e: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00454171: mov dword ptr [ebp - 0x6c], 0xa */ W32((u32)(r_ebp+0xffffff94u), 0xau);
    /* 00454178: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 0045417f: mov dword ptr [ebp - 0x64], 0xf */ W32((u32)(r_ebp+0xffffff9cu), 0xfu);
    /* 00454186: mov dword ptr [ebp - 0x60], 0x14 */ W32((u32)(r_ebp+0xffffffa0u), 0x14u);
    /* 0045418d: mov dword ptr [ebp - 0x5c], 2 */ W32((u32)(r_ebp+0xffffffa4u), 0x2u);
    /* 00454194: mov dword ptr [ebp - 0x58], 0x3e */ W32((u32)(r_ebp+0xffffffa8u), 0x3eu);
    /* 0045419b: mov dword ptr [ebp - 0x54], 0x3d */ W32((u32)(r_ebp+0xffffffacu), 0x3du);
    /* 004541a2: mov dword ptr [ebp - 0x50], 0x3c */ W32((u32)(r_ebp+0xffffffb0u), 0x3cu);
    /* 004541a9: mov dword ptr [ebp - 0x4c], 0x3e */ W32((u32)(r_ebp+0xffffffb4u), 0x3eu);
    /* 004541b0: mov dword ptr [ebp - 0x48], 0x3d */ W32((u32)(r_ebp+0xffffffb8u), 0x3du);
    /* 004541b7: mov dword ptr [ebp - 0x44], 0x3c */ W32((u32)(r_ebp+0xffffffbcu), 0x3cu);
    /* 004541be: mov dword ptr [ebp - 0x40], 0x6e */ W32((u32)(r_ebp+0xffffffc0u), 0x6eu);
    /* 004541c5: mov dword ptr [ebp - 0x3c], 6 */ W32((u32)(r_ebp+0xffffffc4u), 0x6u);
    /* 004541cc: mov dword ptr [ebp - 0x38], 0x20 */ W32((u32)(r_ebp+0xffffffc8u), 0x20u);
    /* 004541d3: mov dword ptr [ebp - 0x34], 0x1f */ W32((u32)(r_ebp+0xffffffccu), 0x1fu);
    /* 004541da: mov dword ptr [ebp - 0x30], 0x1e */ W32((u32)(r_ebp+0xffffffd0u), 0x1eu);
    /* 004541e1: mov dword ptr [ebp - 0x2c], 0x34 */ W32((u32)(r_ebp+0xffffffd4u), 0x34u);
    /* 004541e8: mov dword ptr [ebp - 0x28], 0x33 */ W32((u32)(r_ebp+0xffffffd8u), 0x33u);
    /* 004541ef: mov dword ptr [ebp - 0x24], 0x32 */ W32((u32)(r_ebp+0xffffffdcu), 0x32u);
    /* 004541f6: mov dword ptr [ebp - 0x20], 0x2d */ W32((u32)(r_ebp+0xffffffe0u), 0x2du);
    /* 004541fd: mov dword ptr [ebp - 0x1c], 0x2c */ W32((u32)(r_ebp+0xffffffe4u), 0x2cu);
    /* 00454204: mov dword ptr [ebp - 0x18], 0x2b */ W32((u32)(r_ebp+0xffffffe8u), 0x2bu);
    /* 0045420b: mov dword ptr [ebp - 0x14], 0x2a */ W32((u32)(r_ebp+0xffffffecu), 0x2au);
    /* 00454212: mov dword ptr [ebp - 0x10], 0x29 */ W32((u32)(r_ebp+0xfffffff0u), 0x29u);
    /* 00454219: mov dword ptr [ebp - 0xc], 0x28 */ W32((u32)(r_ebp+0xfffffff4u), 0x28u);
    /* 00454220: mov dword ptr [ebp - 8], 0x50 */ W32((u32)(r_ebp+0xfffffff8u), 0x50u);
    /* 00454227: mov dword ptr [ebp - 4], 0x78 */ W32((u32)(r_ebp+0xfffffffcu), 0x78u);
    /* 0045422e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00454231: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454234: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00454237: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0045423e: jmp 0x454249 */ goto L_00454249;
L_00454240:; BB(0x00454240);
    /* 00454240: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00454243: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454246: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
L_00454249:; BB(0x00454249);
    /* 00454249: cmp dword ptr [ebp - 0x70], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045424d: jge 0x454285 */ if ((fS==fO)) goto L_00454285;
L_0045424f:; BB(0x0045424f);
    /* 0045424f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00454252: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00454255: cmp dword ptr [ecx + eax*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045425a: je 0x454283 */ if (fZ) goto L_00454283;
L_0045425c:; BB(0x0045425c);
    /* 0045425c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0045425f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00454262: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00454265: add eax, dword ptr [ebp + ecx*4 - 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffff94u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045426a: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0045426d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00454270: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454274: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00454277: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0045427a: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045427e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00454280: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x454283u); call_ind(t); }
L_00454283:; BB(0x00454283);
    /* 00454283: jmp 0x454240 */ goto L_00454240;
L_00454285:; BB(0x00454285);
    /* 00454285: mov esp, ebp */ r_esp = r_ebp;
    /* 00454287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454288: ret 4 */ FN_RET(0x00454168); r_esp += 8; return;
}

void f_0045428b(void) /* FUN_0045428b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045428b);
    /* 0045428b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045428c: mov ebp, esp */ r_ebp = r_esp;
    /* 0045428e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454291: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00454294: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045429b: jmp 0x4542a6 */ goto L_004542a6;
L_0045429d:; BB(0x0045429d);
    /* 0045429d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004542a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004542a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004542a6:; BB(0x004542a6);
    /* 004542a6: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004542aa: jge 0x4542d8 */ if ((fS==fO)) goto L_004542d8;
L_004542ac:; BB(0x004542ac);
    /* 004542ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004542af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004542b2: cmp dword ptr [edx + ecx*4 + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004542b7: je 0x4542d6 */ if (fZ) goto L_004542d6;
L_004542b9:; BB(0x004542b9);
    /* 004542b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004542bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004542bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004542c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004542c3: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 004542c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004542ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004542cd: mov eax, dword ptr [edx + eax*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 004542d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004542d3: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x4542d6u); call_ind(t); }
L_004542d6:; BB(0x004542d6);
    /* 004542d6: jmp 0x45429d */ goto L_0045429d;
L_004542d8:; BB(0x004542d8);
    /* 004542d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004542da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004542db: ret 4 */ FN_RET(0x0045428b); r_esp += 8; return;
}

void f_004542de(void) /* FUN_004542de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004542de);
    /* 004542de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004542df: mov ebp, esp */ r_ebp = r_esp;
    /* 004542e1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004542e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004542e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004542ee: jmp 0x4542f9 */ goto L_004542f9;
L_004542f0:; BB(0x004542f0);
    /* 004542f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004542f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004542f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004542f9:; BB(0x004542f9);
    /* 004542f9: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004542fd: jge 0x45430d */ if ((fS==fO)) goto L_0045430d;
L_004542ff:; BB(0x004542ff);
    /* 004542ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454303: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454306: call 0x45449a */ r_esp -= 4; W32(r_esp, 0x45430bu); f_0045449a();
    /* 0045430b: jmp 0x4542f0 */ goto L_004542f0;
L_0045430d:; BB(0x0045430d);
    /* 0045430d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045430f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454310: ret  */ FN_RET(0x004542de); r_esp += 4; return;
}

void f_00454311(void) /* FUN_00454311 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454311);
    /* 00454311: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454312: mov ebp, esp */ r_ebp = r_esp;
    /* 00454314: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454317: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045431a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454321: jmp 0x45432c */ goto L_0045432c;
L_00454323:; BB(0x00454323);
    /* 00454323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454326: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454329: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045432c:; BB(0x0045432c);
    /* 0045432c: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454330: jge 0x45434d */ if ((fS==fO)) goto L_0045434d;
L_00454332:; BB(0x00454332);
    /* 00454332: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454335: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454338: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 0045433c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045433f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454342: mov eax, dword ptr [edx + eax*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00454346: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00454348: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x45434bu); call_ind(t); }
    /* 0045434b: jmp 0x454323 */ goto L_00454323;
L_0045434d:; BB(0x0045434d);
    /* 0045434d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045434f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454350: ret  */ FN_RET(0x00454311); r_esp += 4; return;
}

void f_00454351(void) /* FUN_00454351 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454351);
    /* 00454351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454352: mov ebp, esp */ r_ebp = r_esp;
    /* 00454354: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454355: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454358: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045435b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045435e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00454361: mov dword ptr [ecx + eax*4 + 0x14], edx */ W32((u32)(r_ecx+r_eax*4+0x14u), r_edx);
    /* 00454365: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454368: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x45436du); f_004542de();
    /* 0045436d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045436f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454370: ret 8 */ FN_RET(0x00454351); r_esp += 12; return;
}

void f_00454373(void) /* FUN_00454373 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454373);
    /* 00454373: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454374: mov ebp, esp */ r_ebp = r_esp;
    /* 00454376: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454379: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045437c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454383: jmp 0x45438e */ goto L_0045438e;
L_00454385:; BB(0x00454385);
    /* 00454385: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454388: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045438b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045438e:; BB(0x0045438e);
    /* 0045438e: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454392: jge 0x4543c2 */ if ((fS==fO)) goto L_004543c2;
L_00454394:; BB(0x00454394);
    /* 00454394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454396: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045439a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045439d: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x4543a2u); f_00454351();
    /* 004543a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004543a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004543a7: call 0x45478e */ r_esp -= 4; W32(r_esp, 0x4543acu); f_0045478e();
    /* 004543ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004543af: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004543b2: mov byte ptr [edx + 0x45], 0 */ W8((u32)(r_edx+0x45u), 0x0u);
    /* 004543b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004543b9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004543bc: mov byte ptr [eax + 0x51], 0 */ W8((u32)(r_eax+0x51u), 0x0u);
    /* 004543c0: jmp 0x454385 */ goto L_00454385;
L_004543c2:; BB(0x004543c2);
    /* 004543c2: mov esp, ebp */ r_esp = r_ebp;
    /* 004543c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004543c5: ret  */ FN_RET(0x00454373); r_esp += 4; return;
}

void f_004543c6(void) /* FUN_004543c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004543c6);
    /* 004543c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004543c7: mov ebp, esp */ r_ebp = r_esp;
    /* 004543c9: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004543cc: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004543cf: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 004543d6: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004543dd: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 004543e4: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 004543eb: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 004543f2: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 004543f9: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00454400: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00454407: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 0045440e: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 00454415: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0045441c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00454423: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454426: mov eax, dword ptr [ebp + eax*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 0045442a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045442c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045442d: ret 4 */ FN_RET(0x004543c6); r_esp += 8; return;
}

void f_00454430(void) /* FUN_00454430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454430);
    /* 00454430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454431: mov ebp, esp */ r_ebp = r_esp;
    /* 00454433: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454436: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00454439: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00454440: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 00454447: mov dword ptr [ebp - 0x28], 3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 0045444e: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 00454455: mov dword ptr [ebp - 0x20], 8 */ W32((u32)(r_ebp+0xffffffe0u), 0x8u);
    /* 0045445c: mov dword ptr [ebp - 0x1c], 0xb */ W32((u32)(r_ebp+0xffffffe4u), 0xbu);
    /* 00454463: mov dword ptr [ebp - 0x18], 0xd */ W32((u32)(r_ebp+0xffffffe8u), 0xdu);
    /* 0045446a: mov dword ptr [ebp - 0x14], 0x10 */ W32((u32)(r_ebp+0xffffffecu), 0x10u);
    /* 00454471: mov dword ptr [ebp - 0x10], 0x13 */ W32((u32)(r_ebp+0xfffffff0u), 0x13u);
    /* 00454478: mov dword ptr [ebp - 0xc], 0x16 */ W32((u32)(r_ebp+0xfffffff4u), 0x16u);
    /* 0045447f: mov dword ptr [ebp - 8], 0x19 */ W32((u32)(r_ebp+0xfffffff8u), 0x19u);
    /* 00454486: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 0045448d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454490: mov eax, dword ptr [ebp + eax*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 00454494: mov esp, ebp */ r_esp = r_ebp;
    /* 00454496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454497: ret 4 */ FN_RET(0x00454430); r_esp += 8; return;
}

void f_0045449a(void) /* FUN_0045449a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045449a);
    /* 0045449a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045449b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045449d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004544a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004544a1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004544a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004544a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004544a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004544ab: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x4544b0u); f_004543c6();
    /* 004544b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004544b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004544b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004544b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004544ba: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x4544bfu); f_00454430();
    /* 004544bf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004544c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004544c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004544c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004544c9: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x4544ceu); f_00454c8d();
    /* 004544ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004544d1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004544d8: jmp 0x4544e3 */ goto L_004544e3;
L_004544da:; BB(0x004544da);
    /* 004544da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004544dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004544e0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004544e3:; BB(0x004544e3);
    /* 004544e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004544e6: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004544e9: jge 0x454690 */ if ((fS==fO)) goto L_00454690;
L_004544ef:; BB(0x004544ef);
    /* 004544ef: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004544f3: jne 0x45452d */ if (!fZ) goto L_0045452d;
L_004544f5:; BB(0x004544f5);
    /* 004544f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004544f8: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004544fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004544fe: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454502: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454505: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454508: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045450b: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045450f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00454511: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x454514u); call_ind(t); }
    /* 00454514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454516: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454519: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045451c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045451f: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454523: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x454528u); f_005ea0c3();
    /* 00454528: jmp 0x45468b */ goto L_0045468b;
L_0045452d:; BB(0x0045452d);
    /* 0045452d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454531: jne 0x45458d */ if (!fZ) goto L_0045458d;
L_00454533:; BB(0x00454533);
    /* 00454533: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454537: je 0x454545 */ if (fZ) goto L_00454545;
L_00454539:; BB(0x00454539);
    /* 00454539: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045453d: je 0x454545 */ if (fZ) goto L_00454545;
L_0045453f:; BB(0x0045453f);
    /* 0045453f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454543: jne 0x45458d */ if (!fZ) goto L_0045458d;
L_00454545:; BB(0x00454545);
    /* 00454545: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454549: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045454c: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045454f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454552: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454556: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x45455bu); f_005ea0c3();
    /* 0045455b: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045455f: jne 0x454577 */ if (!fZ) goto L_00454577;
L_00454561:; BB(0x00454561);
    /* 00454561: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00454563: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454566: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454569: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045456c: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454570: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x454575u); f_005ea1cf();
    /* 00454575: jmp 0x45458b */ goto L_0045458b;
L_00454577:; BB(0x00454577);
    /* 00454577: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00454579: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045457c: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045457f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454582: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454586: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x45458bu); f_005ea1cf();
L_0045458b:; BB(0x0045458b);
    /* 0045458b: jmp 0x4545cd */ goto L_004545cd;
L_0045458d:; BB(0x0045458d);
    /* 0045458d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454590: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454594: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454597: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045459a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045459d: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 004545a1: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4545a6u); f_005ea0c3();
    /* 004545a6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004545aa: je 0x4545b2 */ if (fZ) goto L_004545b2;
L_004545ac:; BB(0x004545ac);
    /* 004545ac: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004545b0: jne 0x4545cd */ if (!fZ) goto L_004545cd;
L_004545b2:; BB(0x004545b2);
    /* 004545b2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004545b5: call 0x4547ac */ r_esp -= 4; W32(r_esp, 0x4545bau); f_004547ac();
    /* 004545ba: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004545bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004545be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004545c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004545c4: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 004545c8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4545cdu); f_005ea1cf();
L_004545cd:; BB(0x004545cd);
    /* 004545cd: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 004545d0: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004545d3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004545d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004545d8: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x4545ddu); f_00454430();
    /* 004545dd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004545df: jne 0x45468b */ if (!fZ) goto L_0045468b;
L_004545e5:; BB(0x004545e5);
    /* 004545e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004545e8: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004545eb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004545ee: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 004545f2: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x4545f7u); f_005ea2f8();
    /* 004545f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004545f9: je 0x454663 */ if (fZ) goto L_00454663;
L_004545fb:; BB(0x004545fb);
    /* 004545fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004545fe: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454601: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454604: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454608: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045460c: jne 0x454661 */ if (!fZ) goto L_00454661;
L_0045460e:; BB(0x0045460e);
    /* 0045460e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454611: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454614: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454617: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 0045461b: mov dword ptr [edx + 0x6c], 0xa */ W32((u32)(r_edx+0x6cu), 0xau);
    /* 00454622: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00454624: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x454629u); f_0048ab58();
    /* 00454629: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045462c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045462f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454633: je 0x454644 */ if (fZ) goto L_00454644;
L_00454635:; BB(0x00454635);
    /* 00454635: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454637: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045463a: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x45463fu); f_005d7698();
    /* 0045463f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00454642: jmp 0x45464b */ goto L_0045464b;
L_00454644:; BB(0x00454644);
    /* 00454644: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0045464b:; BB(0x0045464b);
    /* 0045464b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045464e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045464f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454652: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454655: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454658: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 0045465c: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x454661u); f_005e4060();
L_00454661:; BB(0x00454661);
    /* 00454661: jmp 0x45468b */ goto L_0045468b;
L_00454663:; BB(0x00454663);
    /* 00454663: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454666: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454669: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045466c: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454670: mov dword ptr [edx + 0x6c], 4 */ W32((u32)(r_edx+0x6cu), 0x4u);
    /* 00454677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454679: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045467c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045467f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454682: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454686: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x45468bu); f_005e4060();
L_0045468b:; BB(0x0045468b);
    /* 0045468b: jmp 0x4544da */ goto L_004544da;
L_00454690:; BB(0x00454690);
    /* 00454690: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454693: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454694: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454697: call 0x454aec */ r_esp -= 4; W32(r_esp, 0x45469cu); f_00454aec();
    /* 0045469c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004546a3: jmp 0x4546ae */ goto L_004546ae;
L_004546a5:; BB(0x004546a5);
    /* 004546a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004546a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004546ab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004546ae:; BB(0x004546ae);
    /* 004546ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004546b1: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004546b4: jge 0x45472f */ if ((fS==fO)) goto L_0045472f;
L_004546b6:; BB(0x004546b6);
    /* 004546b6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004546ba: jle 0x45472a */ if ((fZ||fS!=fO)) goto L_0045472a;
L_004546bc:; BB(0x004546bc);
    /* 004546bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004546bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004546c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004546c3: call 0x4547f6 */ r_esp -= 4; W32(r_esp, 0x4546c8u); f_004547f6();
    /* 004546c8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004546cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004546ce: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004546d1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004546d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004546d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004546d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004546db: call 0x4547e0 */ r_esp -= 4; W32(r_esp, 0x4546e0u); f_004547e0();
    /* 004546e0: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004546e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004546e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004546e9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004546eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004546ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004546ef: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004546f2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004546f5: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 004546f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004546fc: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004546ff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454702: mov eax, dword ptr [edx + eax*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00454706: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00454708: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x45470bu); call_ind(t); }
    /* 0045470b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045470e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454711: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454714: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454718: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045471b: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045471e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454721: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454725: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00454727: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x45472au); call_ind(t); }
L_0045472a:; BB(0x0045472a);
    /* 0045472a: jmp 0x4546a5 */ goto L_004546a5;
L_0045472f:; BB(0x0045472f);
    /* 0045472f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454730: mov esp, ebp */ r_esp = r_ebp;
    /* 00454732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454733: ret 4 */ FN_RET(0x0045449a); r_esp += 8; return;
}

void f_00454736(void) /* FUN_00454736 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454736);
    /* 00454736: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454737: mov ebp, esp */ r_ebp = r_esp;
    /* 00454739: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045473c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045473f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454746: jmp 0x454751 */ goto L_00454751;
L_00454748:; BB(0x00454748);
    /* 00454748: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045474b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045474e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00454751:; BB(0x00454751);
    /* 00454751: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454754: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454755: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454758: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x45475du); f_004543c6();
    /* 0045475d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454760: jge 0x454788 */ if ((fS==fO)) goto L_00454788;
L_00454762:; BB(0x00454762);
    /* 00454762: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454766: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454769: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x45476eu); f_00454430();
    /* 0045476e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454774: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454778: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045477b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045477e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00454780: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454783: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x454786u); call_ind(t); }
    /* 00454786: jmp 0x454748 */ goto L_00454748;
L_00454788:; BB(0x00454788);
    /* 00454788: mov esp, ebp */ r_esp = r_ebp;
    /* 0045478a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045478b: ret 4 */ FN_RET(0x00454736); r_esp += 8; return;
}

void f_0045478e(void) /* FUN_0045478e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045478e);
    /* 0045478e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045478f: mov ebp, esp */ r_ebp = r_esp;
    /* 00454791: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454792: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454795: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454798: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045479b: mov byte ptr [eax + 0x44], cl */ W8((u32)(r_eax+0x44u), (u8)r_ecx);
    /* 0045479e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004547a1: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x4547a6u); f_004542de();
    /* 004547a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004547a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004547a9: ret 4 */ FN_RET(0x0045478e); r_esp += 8; return;
}

void f_004547ac(void) /* FUN_004547ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004547ac);
    /* 004547ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004547ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004547af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004547b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004547b6: mov al, byte ptr [eax + 0x44] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x44u))) & 0xffu);
    /* 004547b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004547bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004547bc: ret  */ FN_RET(0x004547ac); r_esp += 4; return;
}

void f_004547bd(void) /* FUN_004547bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004547bd);
    /* 004547bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004547be: mov ebp, esp */ r_ebp = r_esp;
    /* 004547c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004547c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004547c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004547ca: mov dword ptr [ecx + eax*4 + 0x14], 0 */ W32((u32)(r_ecx+r_eax*4+0x14u), 0x0u);
    /* 004547d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004547d5: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x4547dau); f_004542de();
    /* 004547da: mov esp, ebp */ r_esp = r_ebp;
    /* 004547dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004547dd: ret 4 */ FN_RET(0x004547bd); r_esp += 8; return;
}

void f_004547e0(void) /* FUN_004547e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004547e0);
    /* 004547e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004547e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004547e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004547e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004547ea: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004547ed: mov al, byte ptr [eax + 0x45] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x45u))) & 0xffu);
    /* 004547f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004547f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004547f3: ret 4 */ FN_RET(0x004547e0); r_esp += 8; return;
}

void f_004547f6(void) /* FUN_004547f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004547f6);
    /* 004547f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004547f7: mov ebp, esp */ r_ebp = r_esp;
    /* 004547f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004547fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004547fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454800: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454803: mov al, byte ptr [eax + 0x51] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x51u))) & 0xffu);
    /* 00454806: mov esp, ebp */ r_esp = r_ebp;
    /* 00454808: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454809: ret 4 */ FN_RET(0x004547f6); r_esp += 8; return;
}

void f_0045480c(void) /* FUN_0045480c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045480c);
    /* 0045480c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045480d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045480f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454812: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00454815: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454819: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045481c: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x454821u); f_00454430();
    /* 00454821: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00454824: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454828: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045482b: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x454830u); f_004543c6();
    /* 00454830: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00454833: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454836: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454839: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045483d: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x454842u); f_005ea57d();
    /* 00454842: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00454845: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0045484c: jmp 0x454857 */ goto L_00454857;
L_0045484e:; BB(0x0045484e);
    /* 0045484e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454851: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454854: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00454857:; BB(0x00454857);
    /* 00454857: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045485a: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045485d: jge 0x45488d */ if ((fS==fO)) goto L_0045488d;
L_0045485f:; BB(0x0045485f);
    /* 0045485f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454862: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454865: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454868: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 0045486c: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x454871u); f_005ea57d();
    /* 00454871: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454874: jle 0x45488b */ if ((fZ||fS!=fO)) goto L_0045488b;
L_00454876:; BB(0x00454876);
    /* 00454876: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454879: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045487c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045487f: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454883: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x454888u); f_005ea57d();
    /* 00454888: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045488b:; BB(0x0045488b);
    /* 0045488b: jmp 0x45484e */ goto L_0045484e;
L_0045488d:; BB(0x0045488d);
    /* 0045488d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454890: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00454893: mov esp, ebp */ r_esp = r_ebp;
    /* 00454895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454896: ret 4 */ FN_RET(0x0045480c); r_esp += 8; return;
}

void f_00454899(void) /* FUN_00454899 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454899);
    /* 00454899: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045489a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045489c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045489f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004548a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004548a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004548a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004548a9: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x4548aeu); f_00454430();
    /* 004548ae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004548b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004548b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004548b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004548b8: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x4548bdu); f_004543c6();
    /* 004548bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004548c0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004548c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004548c6: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 004548ca: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x4548cfu); f_005ea57d();
    /* 004548cf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004548d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004548d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004548d8: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 004548dc: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x4548e1u); f_005d98da();
    /* 004548e1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004548e4: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 004548eb: jmp 0x4548f6 */ goto L_004548f6;
L_004548ed:; BB(0x004548ed);
    /* 004548ed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004548f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004548f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004548f6:; BB(0x004548f6);
    /* 004548f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004548f9: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004548fc: jge 0x454958 */ if ((fS==fO)) goto L_00454958;
L_004548fe:; BB(0x004548fe);
    /* 004548fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454901: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454904: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454907: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045490b: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x454910u); f_005ea57d();
    /* 00454910: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454913: jge 0x45492a */ if ((fS==fO)) goto L_0045492a;
L_00454915:; BB(0x00454915);
    /* 00454915: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454918: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045491b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045491e: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454922: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x454927u); f_005ea57d();
    /* 00454927: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045492a:; BB(0x0045492a);
    /* 0045492a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045492d: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454930: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454933: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454937: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x45493cu); f_005d98da();
    /* 0045493c: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045493f: jge 0x454956 */ if ((fS==fO)) goto L_00454956;
L_00454941:; BB(0x00454941);
    /* 00454941: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00454944: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454947: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045494a: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045494e: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x454953u); f_005d98da();
    /* 00454953: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00454956:; BB(0x00454956);
    /* 00454956: jmp 0x4548ed */ goto L_004548ed;
L_00454958:; BB(0x00454958);
    /* 00454958: mov ecx, 0x54 */ r_ecx = 0x54u;
    /* 0045495d: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00454960: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00454963: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00454965: jge 0x45496b */ if ((fS==fO)) goto L_0045496b;
L_00454967:; BB(0x00454967);
    /* 00454967: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00454969: jmp 0x454976 */ goto L_00454976;
L_0045496b:; BB(0x0045496b);
    /* 0045496b: mov eax, 0x54 */ r_eax = 0x54u;
    /* 00454970: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00454973: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00454976:; BB(0x00454976);
    /* 00454976: mov esp, ebp */ r_esp = r_ebp;
    /* 00454978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454979: ret 4 */ FN_RET(0x00454899); r_esp += 8; return;
}

void f_0045497c(void) /* FUN_0045497c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045497c);
    /* 0045497c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045497d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045497f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454982: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00454985: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454989: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045498c: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x454991u); f_00454430();
    /* 00454991: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00454994: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454997: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454998: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045499b: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x4549a0u); f_004543c6();
    /* 004549a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004549a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004549a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004549a9: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 004549ad: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x4549b2u); f_005ea54c();
    /* 004549b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004549b5: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 004549bc: jmp 0x4549c7 */ goto L_004549c7;
L_004549be:; BB(0x004549be);
    /* 004549be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004549c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004549c4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_004549c7:; BB(0x004549c7);
    /* 004549c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004549ca: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004549cd: jge 0x4549fd */ if ((fS==fO)) goto L_004549fd;
L_004549cf:; BB(0x004549cf);
    /* 004549cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004549d2: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004549d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004549d8: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 004549dc: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x4549e1u); f_005ea54c();
    /* 004549e1: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004549e4: jge 0x4549fb */ if ((fS==fO)) goto L_004549fb;
L_004549e6:; BB(0x004549e6);
    /* 004549e6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004549e9: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004549ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004549ef: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 004549f3: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x4549f8u); f_005ea54c();
    /* 004549f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004549fb:; BB(0x004549fb);
    /* 004549fb: jmp 0x4549be */ goto L_004549be;
L_004549fd:; BB(0x004549fd);
    /* 004549fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454a00: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00454a03: mov esp, ebp */ r_esp = r_ebp;
    /* 00454a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454a06: ret 4 */ FN_RET(0x0045497c); r_esp += 8; return;
}

void f_00454a09(void) /* FUN_00454a09 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454a09);
    /* 00454a09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454a0a: mov ebp, esp */ r_ebp = r_esp;
    /* 00454a0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454a0f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00454a12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454a16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a19: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x454a1eu); f_00454430();
    /* 00454a1e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00454a21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454a24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454a25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a28: call 0x4543c6 */ r_esp -= 4; W32(r_esp, 0x454a2du); f_004543c6();
    /* 00454a2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00454a30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454a33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a36: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454a3a: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x454a3fu); f_005ea54c();
    /* 00454a3f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00454a42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454a45: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a48: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454a4c: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x454a51u); f_005d98c3();
    /* 00454a51: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00454a54: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00454a5b: jmp 0x454a66 */ goto L_00454a66;
L_00454a5d:; BB(0x00454a5d);
    /* 00454a5d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454a60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454a63: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00454a66:; BB(0x00454a66);
    /* 00454a66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00454a69: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454a6c: jge 0x454ac8 */ if ((fS==fO)) goto L_00454ac8;
L_00454a6e:; BB(0x00454a6e);
    /* 00454a6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454a71: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454a74: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a77: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454a7b: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x454a80u); f_005ea54c();
    /* 00454a80: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454a83: jle 0x454a9a */ if ((fZ||fS!=fO)) goto L_00454a9a;
L_00454a85:; BB(0x00454a85);
    /* 00454a85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454a88: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454a8b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454a8e: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00454a92: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x454a97u); f_005ea54c();
    /* 00454a97: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00454a9a:; BB(0x00454a9a);
    /* 00454a9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00454a9d: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454aa0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454aa3: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454aa7: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x454aacu); f_005d98c3();
    /* 00454aac: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454aaf: jge 0x454ac6 */ if ((fS==fO)) goto L_00454ac6;
L_00454ab1:; BB(0x00454ab1);
    /* 00454ab1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454ab4: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454ab7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00454aba: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00454abe: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x454ac3u); f_005d98c3();
    /* 00454ac3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00454ac6:; BB(0x00454ac6);
    /* 00454ac6: jmp 0x454a5d */ goto L_00454a5d;
L_00454ac8:; BB(0x00454ac8);
    /* 00454ac8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00454acd: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00454ad0: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00454ad3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00454ad5: jge 0x454adb */ if ((fS==fO)) goto L_00454adb;
L_00454ad7:; BB(0x00454ad7);
    /* 00454ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00454ad9: jmp 0x454ae6 */ goto L_00454ae6;
L_00454adb:; BB(0x00454adb);
    /* 00454adb: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00454ae0: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00454ae3: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00454ae6:; BB(0x00454ae6);
    /* 00454ae6: mov esp, ebp */ r_esp = r_ebp;
    /* 00454ae8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454ae9: ret 4 */ FN_RET(0x00454a09); r_esp += 8; return;
}

void f_00454aec(void) /* FUN_00454aec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454aec);
    /* 00454aec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454aed: mov ebp, esp */ r_ebp = r_esp;
    /* 00454aef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454af0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00454af1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454af4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454af8: je 0x454b10 */ if (fZ) goto L_00454b10;
L_00454afa:; BB(0x00454afa);
    /* 00454afa: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454afe: je 0x454b10 */ if (fZ) goto L_00454b10;
L_00454b00:; BB(0x00454b00);
    /* 00454b00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b07: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x454b0cu); f_00454c8d();
    /* 00454b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454b0e: jne 0x454b15 */ if (!fZ) goto L_00454b15;
L_00454b10:; BB(0x00454b10);
    /* 00454b10: jmp 0x454be5 */ goto L_00454be5;
L_00454b15:; BB(0x00454b15);
    /* 00454b15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454b18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b1c: call 0x4547f6 */ r_esp -= 4; W32(r_esp, 0x454b21u); f_004547f6();
    /* 00454b21: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00454b24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454b27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b2b: call 0x45480c */ r_esp -= 4; W32(r_esp, 0x454b30u); f_0045480c();
    /* 00454b30: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b32: jge 0x454b49 */ if ((fS==fO)) goto L_00454b49;
L_00454b34:; BB(0x00454b34);
    /* 00454b34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454b37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b3b: call 0x45480c */ r_esp -= 4; W32(r_esp, 0x454b40u); f_0045480c();
    /* 00454b40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b43: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454b46: mov byte ptr [ecx + 0x51], al */ W8((u32)(r_ecx+0x51u), (u8)r_eax);
L_00454b49:; BB(0x00454b49);
    /* 00454b49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454b4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b50: call 0x4547f6 */ r_esp -= 4; W32(r_esp, 0x454b55u); f_004547f6();
    /* 00454b55: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00454b58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b5f: call 0x454899 */ r_esp -= 4; W32(r_esp, 0x454b64u); f_00454899();
    /* 00454b64: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b66: jle 0x454b7d */ if ((fZ||fS!=fO)) goto L_00454b7d;
L_00454b68:; BB(0x00454b68);
    /* 00454b68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454b6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b6f: call 0x454899 */ r_esp -= 4; W32(r_esp, 0x454b74u); f_00454899();
    /* 00454b74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b77: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454b7a: mov byte ptr [edx + 0x51], al */ W8((u32)(r_edx+0x51u), (u8)r_eax);
L_00454b7d:; BB(0x00454b7d);
    /* 00454b7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454b81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b84: call 0x4547e0 */ r_esp -= 4; W32(r_esp, 0x454b89u); f_004547e0();
    /* 00454b89: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00454b8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454b8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454b93: call 0x45497c */ r_esp -= 4; W32(r_esp, 0x454b98u); f_0045497c();
    /* 00454b98: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454b9a: jge 0x454bb1 */ if ((fS==fO)) goto L_00454bb1;
L_00454b9c:; BB(0x00454b9c);
    /* 00454b9c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ba0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454ba3: call 0x45497c */ r_esp -= 4; W32(r_esp, 0x454ba8u); f_0045497c();
    /* 00454ba8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454bab: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454bae: mov byte ptr [ecx + 0x45], al */ W8((u32)(r_ecx+0x45u), (u8)r_eax);
L_00454bb1:; BB(0x00454bb1);
    /* 00454bb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454bb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454bb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454bb8: call 0x4547e0 */ r_esp -= 4; W32(r_esp, 0x454bbdu); f_004547e0();
    /* 00454bbd: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00454bc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454bc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454bc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454bc7: call 0x454a09 */ r_esp -= 4; W32(r_esp, 0x454bccu); f_00454a09();
    /* 00454bcc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454bce: jle 0x454be5 */ if ((fZ||fS!=fO)) goto L_00454be5;
L_00454bd0:; BB(0x00454bd0);
    /* 00454bd0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00454bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454bd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454bd7: call 0x454a09 */ r_esp -= 4; W32(r_esp, 0x454bdcu); f_00454a09();
    /* 00454bdc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454bdf: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454be2: mov byte ptr [edx + 0x45], al */ W8((u32)(r_edx+0x45u), (u8)r_eax);
L_00454be5:; BB(0x00454be5);
    /* 00454be5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00454be6: mov esp, ebp */ r_esp = r_ebp;
    /* 00454be8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454be9: ret 4 */ FN_RET(0x00454aec); r_esp += 8; return;
}

void f_00454bec(void) /* FUN_00454bec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454bec);
    /* 00454bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454bed: mov ebp, esp */ r_ebp = r_esp;
    /* 00454bef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454bf0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454bf3: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bf7: je 0x454c2d */ if (fZ) goto L_00454c2d;
L_00454bf9:; BB(0x00454bf9);
    /* 00454bf9: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454bfd: je 0x454c16 */ if (fZ) goto L_00454c16;
L_00454bff:; BB(0x00454bff);
    /* 00454bff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c02: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454c05: mov cl, byte ptr [eax + 0x45] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x45u))) & 0xffu);
    /* 00454c08: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454c0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c0e: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454c11: mov byte ptr [edx + 0x45], cl */ W8((u32)(r_edx+0x45u), (u8)r_ecx);
    /* 00454c14: jmp 0x454c2b */ goto L_00454c2b;
L_00454c16:; BB(0x00454c16);
    /* 00454c16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c19: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454c1c: mov cl, byte ptr [eax + 0x45] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x45u))) & 0xffu);
    /* 00454c1f: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454c22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c25: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454c28: mov byte ptr [edx + 0x45], cl */ W8((u32)(r_edx+0x45u), (u8)r_ecx);
L_00454c2b:; BB(0x00454c2b);
    /* 00454c2b: jmp 0x454c5f */ goto L_00454c5f;
L_00454c2d:; BB(0x00454c2d);
    /* 00454c2d: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454c31: je 0x454c4a */ if (fZ) goto L_00454c4a;
L_00454c33:; BB(0x00454c33);
    /* 00454c33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c36: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454c39: mov cl, byte ptr [eax + 0x51] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x51u))) & 0xffu);
    /* 00454c3c: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454c3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c42: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454c45: mov byte ptr [edx + 0x51], cl */ W8((u32)(r_edx+0x51u), (u8)r_ecx);
    /* 00454c48: jmp 0x454c5f */ goto L_00454c5f;
L_00454c4a:; BB(0x00454c4a);
    /* 00454c4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c4d: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454c50: mov cl, byte ptr [eax + 0x51] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x51u))) & 0xffu);
    /* 00454c53: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00454c56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c59: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454c5c: mov byte ptr [edx + 0x51], cl */ W8((u32)(r_edx+0x51u), (u8)r_ecx);
L_00454c5f:; BB(0x00454c5f);
    /* 00454c5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c62: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x454c67u); f_004542de();
    /* 00454c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00454c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454c6a: ret 0xc */ FN_RET(0x00454bec); r_esp += 16; return;
}

void f_00454c6d(void) /* FUN_00454c6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454c6d);
    /* 00454c6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454c6e: mov ebp, esp */ r_ebp = r_esp;
    /* 00454c70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454c71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454c74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454c77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454c78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c7b: call 0x454430 */ r_esp -= 4; W32(r_esp, 0x454c80u); f_00454430();
    /* 00454c80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c83: mov eax, dword ptr [ecx + eax*4 + 0x60] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00454c87: mov esp, ebp */ r_esp = r_ebp;
    /* 00454c89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454c8a: ret 4 */ FN_RET(0x00454c6d); r_esp += 8; return;
}

void f_00454c8d(void) /* FUN_00454c8d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454c8d);
    /* 00454c8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454c8e: mov ebp, esp */ r_ebp = r_esp;
    /* 00454c90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454c91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454c94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454c9a: mov eax, dword ptr [ecx + eax*4 + 0x14] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00454c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00454ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454ca1: ret 4 */ FN_RET(0x00454c8d); r_esp += 8; return;
}

void f_00454cb0(void) /* FUN_00454cb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454cb0);
    /* 00454cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00454cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454cb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454cba: call 0x453832 */ r_esp -= 4; W32(r_esp, 0x454cbfu); f_00453832();
    /* 00454cbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454cc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00454cc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cc7: je 0x454cd5 */ if (fZ) goto L_00454cd5;
L_00454cc9:; BB(0x00454cc9);
    /* 00454cc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454ccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ccd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x454cd2u); f_0048ac1b();
    /* 00454cd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454cd5:; BB(0x00454cd5);
    /* 00454cd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454cd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00454cda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454cdb: ret 4 */ FN_RET(0x00454cb0); r_esp += 8; return;
}

void f_00454ce0(void) /* FUN_00454ce0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454ce0);
    /* 00454ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00454ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454cea: call 0x453880 */ r_esp -= 4; W32(r_esp, 0x454cefu); f_00453880();
    /* 00454cef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454cf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00454cf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454cf7: je 0x454d05 */ if (fZ) goto L_00454d05;
L_00454cf9:; BB(0x00454cf9);
    /* 00454cf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454cfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454cfd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x454d02u); f_0048ac1b();
    /* 00454d02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d05:; BB(0x00454d05);
    /* 00454d05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d08: mov esp, ebp */ r_esp = r_ebp;
    /* 00454d0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d0b: ret 4 */ FN_RET(0x00454ce0); r_esp += 8; return;
}

void f_00454d10(void) /* FUN_00454d10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454d10);
    /* 00454d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00454d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d1a: call 0x453dbf */ r_esp -= 4; W32(r_esp, 0x454d1fu); f_00453dbf();
    /* 00454d1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454d22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00454d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454d27: je 0x454d35 */ if (fZ) goto L_00454d35;
L_00454d29:; BB(0x00454d29);
    /* 00454d29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d2d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x454d32u); f_0048ac1b();
    /* 00454d32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d35:; BB(0x00454d35);
    /* 00454d35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d38: mov esp, ebp */ r_esp = r_ebp;
    /* 00454d3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d3b: ret 4 */ FN_RET(0x00454d10); r_esp += 8; return;
}

void f_00454d40(void) /* FUN_00454d40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454d40);
    /* 00454d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00454d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00454d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d4a: call 0x454013 */ r_esp -= 4; W32(r_esp, 0x454d4fu); f_00454013();
    /* 00454d4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00454d52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00454d55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454d57: je 0x454d65 */ if (fZ) goto L_00454d65;
L_00454d59:; BB(0x00454d59);
    /* 00454d59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454d5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x454d62u); f_0048ac1b();
    /* 00454d62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454d65:; BB(0x00454d65);
    /* 00454d65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454d68: mov esp, ebp */ r_esp = r_ebp;
    /* 00454d6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454d6b: ret 4 */ FN_RET(0x00454d40); r_esp += 8; return;
}

void f_00454d70(void) /* FUN_00454d70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454d70);
    /* 00454d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00454d73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00454d76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00454d79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00454d7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454d7e: call 0x5d8122 */ r_esp -= 4; W32(r_esp, 0x454d83u); f_005d8122();
    /* 00454d83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454d86: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454d8c: call 0x4595e9 */ r_esp -= 4; W32(r_esp, 0x454d91u); f_004595e9();
    /* 00454d91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454d94: mov dword ptr [eax], 0x635434 */ W32((u32)(r_eax), 0x635434u);
    /* 00454d9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00454d9c: push 0x1e8491 */ { u32 v = 0x1e8491u; r_esp -= 4; W32(r_esp, v); }
    /* 00454da1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454da4: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x454da9u); f_005e0461();
    /* 00454da9: mov ecx, dword ptr [0x6ed168] */ r_ecx = R32((u32)(0x6ed168u));
    /* 00454daf: mov dword ptr [0x6ed16c], ecx */ W32((u32)(0x6ed16cu), r_ecx);
    /* 00454db5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454db9: je 0x454dd2 */ if (fZ) goto L_00454dd2;
L_00454dbb:; BB(0x00454dbb);
    /* 00454dbb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00454dbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00454dbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454dc2: add eax, 0x274 */ {  u32 a = r_eax; u32 b = 0x274u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00454dc8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x454dcdu); f_00624510();
    /* 00454dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00454dd0: jmp 0x454de9 */ goto L_00454de9;
L_00454dd2:; BB(0x00454dd2);
    /* 00454dd2: push 0x6f686c */ { u32 v = 0x6f686cu; r_esp -= 4; W32(r_esp, v); }
    /* 00454dd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454dda: add ecx, 0x274 */ {  u32 a = r_ecx; u32 b = 0x274u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454de0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00454de1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x454de6u); f_00624510();
    /* 00454de6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00454de9:; BB(0x00454de9);
    /* 00454de9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454dec: mov dword ptr [edx + 0x290], 0 */ W32((u32)(r_edx+0x290u), 0x0u);
    /* 00454df6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454df9: mov byte ptr [eax + 0x294], 0 */ W8((u32)(r_eax+0x294u), 0x0u);
    /* 00454e00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e03: mov byte ptr [ecx + 0x295], 0 */ W8((u32)(r_ecx+0x295u), 0x0u);
    /* 00454e0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e0d: call 0x458710 */ r_esp -= 4; W32(r_esp, 0x454e12u); f_00458710();
    /* 00454e12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e15: mov dword ptr [edx + 0x298], 0 */ W32((u32)(r_edx+0x298u), 0x0u);
    /* 00454e1f: mov dword ptr [0x6f6864], 0 */ W32((u32)(0x6f6864u), 0x0u);
    /* 00454e29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e2c: mov dword ptr [eax + 0x2a4], 0 */ W32((u32)(r_eax+0x2a4u), 0x0u);
    /* 00454e36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e39: mov dword ptr [ecx + 0x2a0], 0 */ W32((u32)(r_ecx+0x2a0u), 0x0u);
    /* 00454e43: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e46: mov dword ptr [edx + 0x2ac], 0 */ W32((u32)(r_edx+0x2acu), 0x0u);
    /* 00454e50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e53: mov dword ptr [eax + 0x2b4], 0 */ W32((u32)(r_eax+0x2b4u), 0x0u);
    /* 00454e5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e60: mov dword ptr [ecx + 0x2b0], 0 */ W32((u32)(r_ecx+0x2b0u), 0x0u);
    /* 00454e6a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e6d: mov dword ptr [edx + 0x2a8], 0 */ W32((u32)(r_edx+0x2a8u), 0x0u);
    /* 00454e77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454e7a: mov dword ptr [eax + 0x2b8], 0 */ W32((u32)(r_eax+0x2b8u), 0x0u);
    /* 00454e84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454e8b: jmp 0x454e96 */ goto L_00454e96;
L_00454e8d:; BB(0x00454e8d);
    /* 00454e8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454e90: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454e93: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00454e96:; BB(0x00454e96);
    /* 00454e96: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454e9a: jge 0x454eaf */ if ((fS==fO)) goto L_00454eaf;
L_00454e9c:; BB(0x00454e9c);
    /* 00454e9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454e9f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ea2: mov dword ptr [eax + edx*4 + 0x2c4], 0 */ W32((u32)(r_eax+r_edx*4+0x2c4u), 0x0u);
    /* 00454ead: jmp 0x454e8d */ goto L_00454e8d;
L_00454eaf:; BB(0x00454eaf);
    /* 00454eaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454eb6: jmp 0x454ec1 */ goto L_00454ec1;
L_00454eb8:; BB(0x00454eb8);
    /* 00454eb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454ebb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454ebe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00454ec1:; BB(0x00454ec1);
    /* 00454ec1: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ec5: jge 0x454eda */ if ((fS==fO)) goto L_00454eda;
L_00454ec7:; BB(0x00454ec7);
    /* 00454ec7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454eca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ecd: mov dword ptr [eax + edx*4 + 0x2d4], 0 */ W32((u32)(r_eax+r_edx*4+0x2d4u), 0x0u);
    /* 00454ed8: jmp 0x454eb8 */ goto L_00454eb8;
L_00454eda:; BB(0x00454eda);
    /* 00454eda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454ee1: jmp 0x454eec */ goto L_00454eec;
L_00454ee3:; BB(0x00454ee3);
    /* 00454ee3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454ee6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454ee9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00454eec:; BB(0x00454eec);
    /* 00454eec: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454ef0: jge 0x454f05 */ if ((fS==fO)) goto L_00454f05;
L_00454ef2:; BB(0x00454ef2);
    /* 00454ef2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454ef5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ef8: mov dword ptr [eax + edx*4 + 0x2bc], 0 */ W32((u32)(r_eax+r_edx*4+0x2bcu), 0x0u);
    /* 00454f03: jmp 0x454ee3 */ goto L_00454ee3;
L_00454f05:; BB(0x00454f05);
    /* 00454f05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454f08: mov dword ptr [ecx + 0x2e4], 0 */ W32((u32)(r_ecx+0x2e4u), 0x0u);
    /* 00454f12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454f19: jmp 0x454f24 */ goto L_00454f24;
L_00454f1b:; BB(0x00454f1b);
    /* 00454f1b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f1e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454f21: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00454f24:; BB(0x00454f24);
    /* 00454f24: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454f28: jge 0x454f3d */ if ((fS==fO)) goto L_00454f3d;
L_00454f2a:; BB(0x00454f2a);
    /* 00454f2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454f30: mov dword ptr [ecx + eax*4 + 0x2e8], 0 */ W32((u32)(r_ecx+r_eax*4+0x2e8u), 0x0u);
    /* 00454f3b: jmp 0x454f1b */ goto L_00454f1b;
L_00454f3d:; BB(0x00454f3d);
    /* 00454f3d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454f40: mov dword ptr [edx + 0x310], 0 */ W32((u32)(r_edx+0x310u), 0x0u);
    /* 00454f4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454f51: jmp 0x454f5c */ goto L_00454f5c;
L_00454f53:; BB(0x00454f53);
    /* 00454f53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00454f59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00454f5c:; BB(0x00454f5c);
    /* 00454f5c: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454f60: jge 0x454f75 */ if ((fS==fO)) goto L_00454f75;
L_00454f62:; BB(0x00454f62);
    /* 00454f62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454f68: mov dword ptr [edx + ecx*4 + 0x314], 0 */ W32((u32)(r_edx+r_ecx*4+0x314u), 0x0u);
    /* 00454f73: jmp 0x454f53 */ goto L_00454f53;
L_00454f75:; BB(0x00454f75);
    /* 00454f75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454f78: mov dword ptr [eax + 0x354], 0 */ W32((u32)(r_eax+0x354u), 0x0u);
    /* 00454f82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454f89: jmp 0x454f94 */ goto L_00454f94;
L_00454f8b:; BB(0x00454f8b);
    /* 00454f8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f8e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00454f91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00454f94:; BB(0x00454f94);
    /* 00454f94: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454f98: jge 0x454fad */ if ((fS==fO)) goto L_00454fad;
L_00454f9a:; BB(0x00454f9a);
    /* 00454f9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454f9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454fa0: mov dword ptr [eax + edx*4 + 0x358], 0 */ W32((u32)(r_eax+r_edx*4+0x358u), 0x0u);
    /* 00454fab: jmp 0x454f8b */ goto L_00454f8b;
L_00454fad:; BB(0x00454fad);
    /* 00454fad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454fb0: mov dword ptr [ecx + 0x380], 0 */ W32((u32)(r_ecx+0x380u), 0x0u);
    /* 00454fba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00454fc1: jmp 0x454fcc */ goto L_00454fcc;
L_00454fc3:; BB(0x00454fc3);
    /* 00454fc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454fc6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454fc9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00454fcc:; BB(0x00454fcc);
    /* 00454fcc: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454fd0: jge 0x454fe5 */ if ((fS==fO)) goto L_00454fe5;
L_00454fd2:; BB(0x00454fd2);
    /* 00454fd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00454fd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454fd8: mov dword ptr [ecx + eax*4 + 0x384], 0 */ W32((u32)(r_ecx+r_eax*4+0x384u), 0x0u);
    /* 00454fe3: jmp 0x454fc3 */ goto L_00454fc3;
L_00454fe5:; BB(0x00454fe5);
    /* 00454fe5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454fe8: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
    /* 00454ff2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00454ff5: mov esp, ebp */ r_esp = r_ebp;
    /* 00454ff7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00454ff8: ret 4 */ FN_RET(0x00454d70); r_esp += 8; return;
}

void f_00454ffb(void) /* FUN_00454ffb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00454ffb);
    /* 00454ffb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00454ffc: mov ebp, esp */ r_ebp = r_esp;
    /* 00454ffe: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455004: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0045500a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455010: mov dword ptr [eax], 0x635434 */ W32((u32)(r_eax), 0x635434u);
    /* 00455016: cmp dword ptr [0x6f6864], 0 */ {  u32 a = R32((u32)(0x6f6864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045501d: je 0x455069 */ if (fZ) goto L_00455069;
L_0045501f:; BB(0x0045501f);
    /* 0045501f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00455026: jmp 0x455031 */ goto L_00455031;
L_00455028:; BB(0x00455028);
    /* 00455028: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045502b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045502e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00455031:; BB(0x00455031);
    /* 00455031: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455035: jge 0x455069 */ if ((fS==fO)) goto L_00455069;
L_00455037:; BB(0x00455037);
    /* 00455037: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045503a: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 0045503f: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00455043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455044: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045504a: call 0x5dfec7 */ r_esp -= 4; W32(r_esp, 0x45504fu); f_005dfec7();
    /* 0045504f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455052: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00455057: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0045505b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045505c: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455062: call 0x5dff2f */ r_esp -= 4; W32(r_esp, 0x455067u); f_005dff2f();
    /* 00455067: jmp 0x455028 */ goto L_00455028;
L_00455069:; BB(0x00455069);
    /* 00455069: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045506f: cmp dword ptr [edx + 0x2a4], 0 */ {  u32 a = R32((u32)(r_edx+0x2a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455076: je 0x4550c1 */ if (fZ) goto L_004550c1;
L_00455078:; BB(0x00455078);
    /* 00455078: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045507e: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 00455084: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00455087: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045508a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045508d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455091: je 0x4550a7 */ if (fZ) goto L_004550a7;
L_00455093:; BB(0x00455093);
    /* 00455093: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455095: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455098: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045509a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045509d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x45509fu); call_ind(t); }
    /* 0045509f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004550a5: jmp 0x4550b1 */ goto L_004550b1;
L_004550a7:; BB(0x004550a7);
    /* 004550a7: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_004550b1:; BB(0x004550b1);
    /* 004550b1: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004550b7: mov dword ptr [eax + 0x2a4], 0 */ W32((u32)(r_eax+0x2a4u), 0x0u);
L_004550c1:; BB(0x004550c1);
    /* 004550c1: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004550c7: cmp dword ptr [ecx + 0x2a0], 0 */ {  u32 a = R32((u32)(r_ecx+0x2a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004550ce: je 0x455119 */ if (fZ) goto L_00455119;
L_004550d0:; BB(0x004550d0);
    /* 004550d0: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004550d6: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 004550dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004550df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004550e2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004550e5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004550e9: je 0x4550ff */ if (fZ) goto L_004550ff;
L_004550eb:; BB(0x004550eb);
    /* 004550eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004550ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004550f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004550f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004550f5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4550f7u); call_ind(t); }
    /* 004550f7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004550fd: jmp 0x455109 */ goto L_00455109;
L_004550ff:; BB(0x004550ff);
    /* 004550ff: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00455109:; BB(0x00455109);
    /* 00455109: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045510f: mov dword ptr [ecx + 0x2a0], 0 */ W32((u32)(r_ecx+0x2a0u), 0x0u);
L_00455119:; BB(0x00455119);
    /* 00455119: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045511f: cmp dword ptr [edx + 0x2ac], 0 */ {  u32 a = R32((u32)(r_edx+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455126: je 0x455171 */ if (fZ) goto L_00455171;
L_00455128:; BB(0x00455128);
    /* 00455128: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045512e: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 00455134: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00455137: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045513a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045513d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455141: je 0x455157 */ if (fZ) goto L_00455157;
L_00455143:; BB(0x00455143);
    /* 00455143: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455145: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455148: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045514a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045514d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x45514fu); call_ind(t); }
    /* 0045514f: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00455155: jmp 0x455161 */ goto L_00455161;
L_00455157:; BB(0x00455157);
    /* 00455157: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00455161:; BB(0x00455161);
    /* 00455161: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455167: mov dword ptr [eax + 0x2ac], 0 */ W32((u32)(r_eax+0x2acu), 0x0u);
L_00455171:; BB(0x00455171);
    /* 00455171: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455177: cmp dword ptr [ecx + 0x2b4], 0 */ {  u32 a = R32((u32)(r_ecx+0x2b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045517e: je 0x4551c9 */ if (fZ) goto L_004551c9;
L_00455180:; BB(0x00455180);
    /* 00455180: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455186: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0045518c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045518f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455192: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00455195: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455199: je 0x4551af */ if (fZ) goto L_004551af;
L_0045519b:; BB(0x0045519b);
    /* 0045519b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045519d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004551a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004551a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004551a5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4551a7u); call_ind(t); }
    /* 004551a7: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004551ad: jmp 0x4551b9 */ goto L_004551b9;
L_004551af:; BB(0x004551af);
    /* 004551af: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_004551b9:; BB(0x004551b9);
    /* 004551b9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004551bf: mov dword ptr [ecx + 0x2b4], 0 */ W32((u32)(r_ecx+0x2b4u), 0x0u);
L_004551c9:; BB(0x004551c9);
    /* 004551c9: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004551cf: cmp dword ptr [edx + 0x2b0], 0 */ {  u32 a = R32((u32)(r_edx+0x2b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551d6: je 0x455221 */ if (fZ) goto L_00455221;
L_004551d8:; BB(0x004551d8);
    /* 004551d8: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004551de: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 004551e4: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004551e7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004551ea: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004551ed: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551f1: je 0x455207 */ if (fZ) goto L_00455207;
L_004551f3:; BB(0x004551f3);
    /* 004551f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004551f5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004551f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004551fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004551fd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4551ffu); call_ind(t); }
    /* 004551ff: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00455205: jmp 0x455211 */ goto L_00455211;
L_00455207:; BB(0x00455207);
    /* 00455207: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00455211:; BB(0x00455211);
    /* 00455211: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455217: mov dword ptr [eax + 0x2b0], 0 */ W32((u32)(r_eax+0x2b0u), 0x0u);
L_00455221:; BB(0x00455221);
    /* 00455221: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455227: cmp dword ptr [ecx + 0x2a8], 0 */ {  u32 a = R32((u32)(r_ecx+0x2a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045522e: je 0x455279 */ if (fZ) goto L_00455279;
L_00455230:; BB(0x00455230);
    /* 00455230: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455236: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0045523c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045523f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00455242: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00455245: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455249: je 0x45525f */ if (fZ) goto L_0045525f;
L_0045524b:; BB(0x0045524b);
    /* 0045524b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045524d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00455250: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00455252: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00455255: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x455257u); call_ind(t); }
    /* 00455257: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0045525d: jmp 0x455269 */ goto L_00455269;
L_0045525f:; BB(0x0045525f);
    /* 0045525f: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00455269:; BB(0x00455269);
    /* 00455269: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045526f: mov dword ptr [ecx + 0x2a8], 0 */ W32((u32)(r_ecx+0x2a8u), 0x0u);
L_00455279:; BB(0x00455279);
    /* 00455279: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045527f: cmp dword ptr [edx + 0x2b8], 0 */ {  u32 a = R32((u32)(r_edx+0x2b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455286: je 0x4552d1 */ if (fZ) goto L_004552d1;
L_00455288:; BB(0x00455288);
    /* 00455288: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045528e: mov ecx, dword ptr [eax + 0x2b8] */ r_ecx = R32((u32)(r_eax+0x2b8u));
    /* 00455294: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00455297: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045529a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0045529d: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a1: je 0x4552b7 */ if (fZ) goto L_004552b7;
L_004552a3:; BB(0x004552a3);
    /* 004552a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004552a5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004552aa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552ad: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4552afu); call_ind(t); }
    /* 004552af: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004552b5: jmp 0x4552c1 */ goto L_004552c1;
L_004552b7:; BB(0x004552b7);
    /* 004552b7: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_004552c1:; BB(0x004552c1);
    /* 004552c1: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004552c7: mov dword ptr [eax + 0x2b8], 0 */ W32((u32)(r_eax+0x2b8u), 0x0u);
L_004552d1:; BB(0x004552d1);
    /* 004552d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004552d8: jmp 0x4552e3 */ goto L_004552e3;
L_004552da:; BB(0x004552da);
    /* 004552da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004552dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004552e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004552e3:; BB(0x004552e3);
    /* 004552e3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552e7: jge 0x45534f */ if ((fS==fO)) goto L_0045534f;
L_004552e9:; BB(0x004552e9);
    /* 004552e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004552ec: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004552f2: cmp dword ptr [eax + edx*4 + 0x2c4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552fa: je 0x45534d */ if (fZ) goto L_0045534d;
L_004552fc:; BB(0x004552fc);
    /* 004552fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004552ff: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455305: mov eax, dword ptr [edx + ecx*4 + 0x2c4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2c4u));
    /* 0045530c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045530f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00455312: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00455315: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455319: je 0x45532f */ if (fZ) goto L_0045532f;
L_0045531b:; BB(0x0045531b);
    /* 0045531b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045531d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00455320: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00455322: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00455325: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x455327u); call_ind(t); }
    /* 00455327: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0045532d: jmp 0x455339 */ goto L_00455339;
L_0045532f:; BB(0x0045532f);
    /* 0045532f: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00455339:; BB(0x00455339);
    /* 00455339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045533c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455342: mov dword ptr [edx + ecx*4 + 0x2c4], 0 */ W32((u32)(r_edx+r_ecx*4+0x2c4u), 0x0u);
L_0045534d:; BB(0x0045534d);
    /* 0045534d: jmp 0x4552da */ goto L_004552da;
L_0045534f:; BB(0x0045534f);
    /* 0045534f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00455356: jmp 0x455361 */ goto L_00455361;
L_00455358:; BB(0x00455358);
    /* 00455358: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045535b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045535e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00455361:; BB(0x00455361);
    /* 00455361: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455365: jge 0x4553cd */ if ((fS==fO)) goto L_004553cd;
L_00455367:; BB(0x00455367);
    /* 00455367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045536a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455370: cmp dword ptr [edx + ecx*4 + 0x2d4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455378: je 0x4553cb */ if (fZ) goto L_004553cb;
L_0045537a:; BB(0x0045537a);
    /* 0045537a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045537d: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455383: mov edx, dword ptr [ecx + eax*4 + 0x2d4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2d4u));
    /* 0045538a: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0045538d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00455390: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00455393: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455397: je 0x4553ad */ if (fZ) goto L_004553ad;
L_00455399:; BB(0x00455399);
    /* 00455399: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045539b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045539e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004553a0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004553a3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4553a5u); call_ind(t); }
    /* 004553a5: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 004553ab: jmp 0x4553b7 */ goto L_004553b7;
L_004553ad:; BB(0x004553ad);
    /* 004553ad: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_004553b7:; BB(0x004553b7);
    /* 004553b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004553ba: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004553c0: mov dword ptr [ecx + eax*4 + 0x2d4], 0 */ W32((u32)(r_ecx+r_eax*4+0x2d4u), 0x0u);
L_004553cb:; BB(0x004553cb);
    /* 004553cb: jmp 0x455358 */ goto L_00455358;
L_004553cd:; BB(0x004553cd);
    /* 004553cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004553d4: jmp 0x4553df */ goto L_004553df;
L_004553d6:; BB(0x004553d6);
    /* 004553d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004553d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004553dc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004553df:; BB(0x004553df);
    /* 004553df: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004553e3: jge 0x45544b */ if ((fS==fO)) goto L_0045544b;
L_004553e5:; BB(0x004553e5);
    /* 004553e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004553e8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004553ee: cmp dword ptr [ecx + eax*4 + 0x2bc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004553f6: je 0x455449 */ if (fZ) goto L_00455449;
L_004553f8:; BB(0x004553f8);
    /* 004553f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004553fb: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455401: mov ecx, dword ptr [eax + edx*4 + 0x2bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2bcu));
    /* 00455408: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0045540b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045540e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00455411: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455415: je 0x45542b */ if (fZ) goto L_0045542b;
L_00455417:; BB(0x00455417);
    /* 00455417: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455419: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045541c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045541e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00455421: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x455423u); call_ind(t); }
    /* 00455423: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00455429: jmp 0x455435 */ goto L_00455435;
L_0045542b:; BB(0x0045542b);
    /* 0045542b: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00455435:; BB(0x00455435);
    /* 00455435: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455438: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045543e: mov dword ptr [ecx + eax*4 + 0x2bc], 0 */ W32((u32)(r_ecx+r_eax*4+0x2bcu), 0x0u);
L_00455449:; BB(0x00455449);
    /* 00455449: jmp 0x4553d6 */ goto L_004553d6;
L_0045544b:; BB(0x0045544b);
    /* 0045544b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455451: cmp dword ptr [edx + 0x2e4], 0 */ {  u32 a = R32((u32)(r_edx+0x2e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455458: je 0x4554a3 */ if (fZ) goto L_004554a3;
L_0045545a:; BB(0x0045545a);
    /* 0045545a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455460: mov ecx, dword ptr [eax + 0x2e4] */ r_ecx = R32((u32)(r_eax+0x2e4u));
    /* 00455466: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00455469: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045546c: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0045546f: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455473: je 0x455489 */ if (fZ) goto L_00455489;
L_00455475:; BB(0x00455475);
    /* 00455475: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455477: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045547a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045547c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045547f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x455481u); call_ind(t); }
    /* 00455481: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00455487: jmp 0x455493 */ goto L_00455493;
L_00455489:; BB(0x00455489);
    /* 00455489: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00455493:; BB(0x00455493);
    /* 00455493: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455499: mov dword ptr [eax + 0x2e4], 0 */ W32((u32)(r_eax+0x2e4u), 0x0u);
L_004554a3:; BB(0x004554a3);
    /* 004554a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004554aa: jmp 0x4554b5 */ goto L_004554b5;
L_004554ac:; BB(0x004554ac);
    /* 004554ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004554af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004554b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004554b5:; BB(0x004554b5);
    /* 004554b5: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004554b9: jge 0x455521 */ if ((fS==fO)) goto L_00455521;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004554be: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004554c4: cmp dword ptr [eax + edx*4 + 0x2e8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004554cc: je 0x45551f */ if (fZ) goto L_0045551f;
L_004554ce:; BB(0x004554ce);
    /* 004554ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004554d1: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004554d7: mov eax, dword ptr [edx + ecx*4 + 0x2e8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2e8u));
    /* 004554de: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004554e1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004554e4: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 004554e7: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004554eb: je 0x455501 */ if (fZ) goto L_00455501;
L_004554ed:; BB(0x004554ed);
    /* 004554ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004554ef: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004554f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004554f4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004554f7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4554f9u); call_ind(t); }
    /* 004554f9: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 004554ff: jmp 0x45550b */ goto L_0045550b;
L_00455501:; BB(0x00455501);
    /* 00455501: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0045550b:; BB(0x0045550b);
    /* 0045550b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045550e: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455514: mov dword ptr [edx + ecx*4 + 0x2e8], 0 */ W32((u32)(r_edx+r_ecx*4+0x2e8u), 0x0u);
L_0045551f:; BB(0x0045551f);
    /* 0045551f: jmp 0x4554ac */ goto L_004554ac;
L_00455521:; BB(0x00455521);
    /* 00455521: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455527: cmp dword ptr [eax + 0x310], 0 */ {  u32 a = R32((u32)(r_eax+0x310u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045552e: je 0x455579 */ if (fZ) goto L_00455579;
L_00455530:; BB(0x00455530);
    /* 00455530: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455536: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 0045553c: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0045553f: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00455542: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00455545: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455549: je 0x45555f */ if (fZ) goto L_0045555f;
L_0045554b:; BB(0x0045554b);
    /* 0045554b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045554d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00455550: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00455552: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00455555: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x455557u); call_ind(t); }
    /* 00455557: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0045555d: jmp 0x455569 */ goto L_00455569;
L_0045555f:; BB(0x0045555f);
    /* 0045555f: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00455569:; BB(0x00455569);
    /* 00455569: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045556f: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
L_00455579:; BB(0x00455579);
    /* 00455579: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00455580: jmp 0x45558b */ goto L_0045558b;
L_00455582:; BB(0x00455582);
    /* 00455582: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455585: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455588: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045558b:; BB(0x0045558b);
    /* 0045558b: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045558f: jge 0x4555f7 */ if ((fS==fO)) goto L_004555f7;
L_00455591:; BB(0x00455591);
    /* 00455591: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455594: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045559a: cmp dword ptr [eax + edx*4 + 0x314], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555a2: je 0x4555f5 */ if (fZ) goto L_004555f5;
L_004555a4:; BB(0x004555a4);
    /* 004555a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004555a7: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004555ad: mov eax, dword ptr [edx + ecx*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 004555b4: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004555b7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004555ba: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 004555bd: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555c1: je 0x4555d7 */ if (fZ) goto L_004555d7;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004555c5: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004555c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004555ca: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004555cd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4555cfu); call_ind(t); }
    /* 004555cf: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 004555d5: jmp 0x4555e1 */ goto L_004555e1;
L_004555d7:; BB(0x004555d7);
    /* 004555d7: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_004555e1:; BB(0x004555e1);
    /* 004555e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004555e4: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004555ea: mov dword ptr [edx + ecx*4 + 0x314], 0 */ W32((u32)(r_edx+r_ecx*4+0x314u), 0x0u);
L_004555f5:; BB(0x004555f5);
    /* 004555f5: jmp 0x455582 */ goto L_00455582;
L_004555f7:; BB(0x004555f7);
    /* 004555f7: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004555fd: cmp dword ptr [eax + 0x354], 0 */ {  u32 a = R32((u32)(r_eax+0x354u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455604: je 0x45564f */ if (fZ) goto L_0045564f;
L_00455606:; BB(0x00455606);
    /* 00455606: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0045560c: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00455612: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00455615: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00455618: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0045561b: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045561f: je 0x455635 */ if (fZ) goto L_00455635;
L_00455621:; BB(0x00455621);
    /* 00455621: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455623: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00455626: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00455628: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0045562b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x45562du); call_ind(t); }
    /* 0045562d: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00455633: jmp 0x45563f */ goto L_0045563f;
L_00455635:; BB(0x00455635);
    /* 00455635: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0045563f:; BB(0x0045563f);
    /* 0045563f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455645: mov dword ptr [eax + 0x354], 0 */ W32((u32)(r_eax+0x354u), 0x0u);
L_0045564f:; BB(0x0045564f);
    /* 0045564f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00455656: jmp 0x455661 */ goto L_00455661;
L_00455658:; BB(0x00455658);
    /* 00455658: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045565b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045565e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00455661:; BB(0x00455661);
    /* 00455661: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455665: jge 0x4556d3 */ if ((fS==fO)) goto L_004556d3;
L_00455667:; BB(0x00455667);
    /* 00455667: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045566a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455670: cmp dword ptr [eax + edx*4 + 0x358], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455678: je 0x4556d1 */ if (fZ) goto L_004556d1;
L_0045567a:; BB(0x0045567a);
    /* 0045567a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045567d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455683: mov eax, dword ptr [edx + ecx*4 + 0x358] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 0045568a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00455690: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00455696: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00455699: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045569d: je 0x4556b3 */ if (fZ) goto L_004556b3;
L_0045569f:; BB(0x0045569f);
    /* 0045569f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004556a1: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004556a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004556a6: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004556a9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4556abu); call_ind(t); }
    /* 004556ab: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 004556b1: jmp 0x4556bd */ goto L_004556bd;
L_004556b3:; BB(0x004556b3);
    /* 004556b3: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_004556bd:; BB(0x004556bd);
    /* 004556bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004556c0: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004556c6: mov dword ptr [edx + ecx*4 + 0x358], 0 */ W32((u32)(r_edx+r_ecx*4+0x358u), 0x0u);
L_004556d1:; BB(0x004556d1);
    /* 004556d1: jmp 0x455658 */ goto L_00455658;
L_004556d3:; BB(0x004556d3);
    /* 004556d3: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004556d9: cmp dword ptr [eax + 0x380], 0 */ {  u32 a = R32((u32)(r_eax+0x380u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004556e0: je 0x45573d */ if (fZ) goto L_0045573d;
L_004556e2:; BB(0x004556e2);
    /* 004556e2: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004556e8: mov edx, dword ptr [ecx + 0x380] */ r_edx = R32((u32)(r_ecx+0x380u));
    /* 004556ee: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 004556f4: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004556fa: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00455700: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455707: je 0x455723 */ if (fZ) goto L_00455723;
L_00455709:; BB(0x00455709);
    /* 00455709: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045570b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00455711: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00455713: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00455719: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x45571bu); call_ind(t); }
    /* 0045571b: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00455721: jmp 0x45572d */ goto L_0045572d;
L_00455723:; BB(0x00455723);
    /* 00455723: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0045572d:; BB(0x0045572d);
    /* 0045572d: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455733: mov dword ptr [eax + 0x380], 0 */ W32((u32)(r_eax+0x380u), 0x0u);
L_0045573d:; BB(0x0045573d);
    /* 0045573d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00455744: jmp 0x45574f */ goto L_0045574f;
L_00455746:; BB(0x00455746);
    /* 00455746: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455749: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045574c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0045574f:; BB(0x0045574f);
    /* 0045574f: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455753: jge 0x4557d0 */ if ((fS==fO)) goto L_004557d0;
L_00455755:; BB(0x00455755);
    /* 00455755: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455758: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0045575e: cmp dword ptr [eax + edx*4 + 0x384], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x384u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455766: je 0x4557cb */ if (fZ) goto L_004557cb;
L_00455768:; BB(0x00455768);
    /* 00455768: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045576b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455771: mov eax, dword ptr [edx + ecx*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 00455778: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0045577e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00455784: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0045578a: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455791: je 0x4557ad */ if (fZ) goto L_004557ad;
L_00455793:; BB(0x00455793);
    /* 00455793: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455795: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0045579b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045579d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004557a3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4557a5u); call_ind(t); }
    /* 004557a5: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 004557ab: jmp 0x4557b7 */ goto L_004557b7;
L_004557ad:; BB(0x004557ad);
    /* 004557ad: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_004557b7:; BB(0x004557b7);
    /* 004557b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004557ba: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004557c0: mov dword ptr [edx + ecx*4 + 0x384], 0 */ W32((u32)(r_edx+r_ecx*4+0x384u), 0x0u);
L_004557cb:; BB(0x004557cb);
    /* 004557cb: jmp 0x455746 */ goto L_00455746;
L_004557d0:; BB(0x004557d0);
    /* 004557d0: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004557d6: cmp dword ptr [eax + 0x3a4], 0 */ {  u32 a = R32((u32)(r_eax+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004557dd: je 0x45583a */ if (fZ) goto L_0045583a;
L_004557df:; BB(0x004557df);
    /* 004557df: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004557e5: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 004557eb: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 004557f1: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004557f7: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004557fd: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455804: je 0x455820 */ if (fZ) goto L_00455820;
L_00455806:; BB(0x00455806);
    /* 00455806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455808: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0045580e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00455810: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00455816: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x455818u); call_ind(t); }
    /* 00455818: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0045581e: jmp 0x45582a */ goto L_0045582a;
L_00455820:; BB(0x00455820);
    /* 00455820: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0045582a:; BB(0x0045582a);
    /* 0045582a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00455830: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
L_0045583a:; BB(0x0045583a);
    /* 0045583a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455840: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455846: call 0x459794 */ r_esp -= 4; W32(r_esp, 0x45584bu); f_00459794();
    /* 0045584b: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455851: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x455856u); f_005d8154();
    /* 00455856: mov esp, ebp */ r_esp = r_ebp;
    /* 00455858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455859: ret  */ FN_RET(0x00454ffb); r_esp += 4; return;
}

void f_0045585a(void) /* FUN_0045585a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045585a);
    /* 0045585a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045585b: mov ebp, esp */ r_ebp = r_esp;
    /* 0045585d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455860: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00455863: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455865: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455868: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x45586du); f_005e0731();
    /* 0045586d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00455870: cmp dword ptr [eax + 0x380], 0 */ {  u32 a = R32((u32)(r_eax+0x380u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455877: jne 0x4558d2 */ if (!fZ) goto L_004558d2;
L_00455879:; BB(0x00455879);
    /* 00455879: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0045587b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455880u); f_0048ab58();
    /* 00455880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455883: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00455886: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045588a: je 0x455899 */ if (fZ) goto L_00455899;
L_0045588c:; BB(0x0045588c);
    /* 0045588c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045588f: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x455894u); f_005d505b();
    /* 00455894: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00455897: jmp 0x4558a0 */ goto L_004558a0;
L_00455899:; BB(0x00455899);
    /* 00455899: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004558a0:; BB(0x004558a0);
    /* 004558a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004558a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004558a6: mov dword ptr [ecx + 0x380], edx */ W32((u32)(r_ecx+0x380u), r_edx);
    /* 004558ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004558af: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 004558b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004558b8: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004558bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004558be: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 004558c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004558c7: mov eax, dword ptr [edx + 0x380] */ r_eax = R32((u32)(r_edx+0x380u));
    /* 004558cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004558cf: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4558d2u); call_ind(t); }
L_004558d2:; BB(0x004558d2);
    /* 004558d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004558d9: jmp 0x4558e4 */ goto L_004558e4;
L_004558db:; BB(0x004558db);
    /* 004558db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004558de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004558e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004558e4:; BB(0x004558e4);
    /* 004558e4: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004558e8: jge 0x4559d7 */ if ((fS==fO)) goto L_004559d7;
L_004558ee:; BB(0x004558ee);
    /* 004558ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004558f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004558f4: cmp dword ptr [edx + ecx*4 + 0x384], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x384u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004558fc: jne 0x4559d2 */ if (!fZ) goto L_004559d2;
L_00455902:; BB(0x00455902);
    /* 00455902: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00455907: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45590cu); f_0048ab58();
    /* 0045590c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045590f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00455912: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455916: je 0x455929 */ if (fZ) goto L_00455929;
L_00455918:; BB(0x00455918);
    /* 00455918: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045591b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045591c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045591f: call 0x458972 */ r_esp -= 4; W32(r_esp, 0x455924u); f_00458972();
    /* 00455924: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00455927: jmp 0x455930 */ goto L_00455930;
L_00455929:; BB(0x00455929);
    /* 00455929: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00455930:; BB(0x00455930);
    /* 00455930: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455933: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455936: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455939: mov dword ptr [edx + ecx*4 + 0x384], eax */ W32((u32)(r_edx+r_ecx*4+0x384u), r_eax);
    /* 00455940: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455943: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455946: mov eax, dword ptr [edx + ecx*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 0045594d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045594e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455951: mov ecx, dword ptr [ecx + 0x380] */ r_ecx = R32((u32)(r_ecx+0x380u));
    /* 00455957: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x45595cu); f_005d50ed();
    /* 0045595c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045595e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455960: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455964: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00455967: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00455968: and edx, 0xffffffab */ {  u32 a = r_edx; u32 b = 0xffffffabu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045596b: add edx, 0x67 */ {  u32 a = r_edx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045596e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045596f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455972: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00455973: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00455975: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00455977: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045597a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045597c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045597e: imul eax, eax, 0x65 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x65u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00455981: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455985: push 0x1e84d0 */ { u32 v = 0x1e84d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045598a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045598d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455990: mov ecx, dword ptr [ecx + eax*4 + 0x384] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x384u));
    /* 00455997: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x45599cu); f_005e9f50();
    /* 0045599c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045599e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004559a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004559a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004559a4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004559a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004559a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004559aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004559ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004559af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004559b2: mov ecx, dword ptr [eax + edx*4 + 0x384] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 004559b9: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x4559beu); f_005d727e();
    /* 004559be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004559c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004559c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004559c6: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 004559cd: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x4559d2u); f_005ea514();
L_004559d2:; BB(0x004559d2);
    /* 004559d2: jmp 0x4558db */ goto L_004558db;
L_004559d7:; BB(0x004559d7);
    /* 004559d7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004559da: call 0x455a79 */ r_esp -= 4; W32(r_esp, 0x4559dfu); f_00455a79();
    /* 004559df: cmp dword ptr [0x6f6864], 0 */ {  u32 a = R32((u32)(0x6f6864u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004559e6: jne 0x455a3d */ if (!fZ) goto L_00455a3d;
L_004559e8:; BB(0x004559e8);
    /* 004559e8: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 004559ed: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4559f2u); f_0048ab58();
    /* 004559f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004559f5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004559f8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004559fc: je 0x455a0b */ if (fZ) goto L_00455a0b;
L_004559fe:; BB(0x004559fe);
    /* 004559fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455a01: call 0x453f99 */ r_esp -= 4; W32(r_esp, 0x455a06u); f_00453f99();
    /* 00455a06: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00455a09: jmp 0x455a12 */ goto L_00455a12;
L_00455a0b:; BB(0x00455a0b);
    /* 00455a0b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00455a12:; BB(0x00455a12);
    /* 00455a12: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455a15: mov dword ptr [0x6f6864], eax */ W32((u32)(0x6f6864u), r_eax);
    /* 00455a1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a20: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00455a26: call 0x454097 */ r_esp -= 4; W32(r_esp, 0x455a2bu); f_00454097();
    /* 00455a2b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a2d: push 0x1f7 */ { u32 v = 0x1f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a32: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00455a38: call 0x454149 */ r_esp -= 4; W32(r_esp, 0x455a3du); f_00454149();
L_00455a3d:; BB(0x00455a3d);
    /* 00455a3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a42: call 0x45830d */ r_esp -= 4; W32(r_esp, 0x455a47u); f_0045830d();
    /* 00455a47: push 0x6f6870 */ { u32 v = 0x6f6870u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a4c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a4f: add edx, 0x274 */ {  u32 a = r_edx; u32 b = 0x274u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455a55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a56: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x455a5bu); f_006240c0();
    /* 00455a5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455a5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a60: je 0x455a75 */ if (fZ) goto L_00455a75;
L_00455a62:; BB(0x00455a62);
    /* 00455a62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a67: add eax, 0x274 */ {  u32 a = r_eax; u32 b = 0x274u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455a6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a70: call 0x458570 */ r_esp -= 4; W32(r_esp, 0x455a75u); f_00458570();
L_00455a75:; BB(0x00455a75);
    /* 00455a75: mov esp, ebp */ r_esp = r_ebp;
    /* 00455a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455a78: ret  */ FN_RET(0x0045585a); r_esp += 4; return;
}

void f_00455a79(void) /* FUN_00455a79 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00455a79);
    /* 00455a79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455a7a: mov ebp, esp */ r_ebp = r_esp;
    /* 00455a7c: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455a82: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00455a88: mov dword ptr [ebp - 0x90], 0x21 */ W32((u32)(r_ebp+0xffffff70u), 0x21u);
    /* 00455a92: mov dword ptr [ebp - 0x8c], 0x14 */ W32((u32)(r_ebp+0xffffff74u), 0x14u);
    /* 00455a9c: mov dword ptr [ebp - 0x88], 2 */ W32((u32)(r_ebp+0xffffff78u), 0x2u);
    /* 00455aa6: mov dword ptr [ebp - 0x84], 0xf */ W32((u32)(r_ebp+0xffffff7cu), 0xfu);
    /* 00455ab0: mov dword ptr [ebp - 0x10], 0x19 */ W32((u32)(r_ebp+0xfffffff0u), 0x19u);
    /* 00455ab7: mov dword ptr [ebp - 0xc], 0x1a */ W32((u32)(r_ebp+0xfffffff4u), 0x1au);
    /* 00455abe: mov dword ptr [ebp - 8], 0x1b */ W32((u32)(r_ebp+0xfffffff8u), 0x1bu);
    /* 00455ac5: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 00455acc: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 00455ad3: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 00455ada: mov dword ptr [ebp - 0x74], 2 */ W32((u32)(r_ebp+0xffffff8cu), 0x2u);
    /* 00455ae1: mov dword ptr [ebp - 0x70], 3 */ W32((u32)(r_ebp+0xffffff90u), 0x3u);
    /* 00455ae8: mov dword ptr [ebp - 0x6c], 5 */ W32((u32)(r_ebp+0xffffff94u), 0x5u);
    /* 00455aef: mov dword ptr [ebp - 0x68], 6 */ W32((u32)(r_ebp+0xffffff98u), 0x6u);
    /* 00455af6: mov dword ptr [ebp - 0x64], 7 */ W32((u32)(r_ebp+0xffffff9cu), 0x7u);
    /* 00455afd: mov dword ptr [ebp - 0x60], 8 */ W32((u32)(r_ebp+0xffffffa0u), 0x8u);
    /* 00455b04: mov dword ptr [ebp - 0x5c], 0xa */ W32((u32)(r_ebp+0xffffffa4u), 0xau);
    /* 00455b0b: mov dword ptr [ebp - 0x58], 0xb */ W32((u32)(r_ebp+0xffffffa8u), 0xbu);
    /* 00455b12: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00455b19: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 00455b20: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 00455b27: mov dword ptr [ebp - 0x2c], 0xa */ W32((u32)(r_ebp+0xffffffd4u), 0xau);
    /* 00455b2e: mov dword ptr [ebp - 0x28], 6 */ W32((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 00455b35: mov dword ptr [ebp - 0x24], 0xc */ W32((u32)(r_ebp+0xffffffdcu), 0xcu);
    /* 00455b3c: mov dword ptr [ebp - 0x20], 0xe */ W32((u32)(r_ebp+0xffffffe0u), 0xeu);
    /* 00455b43: mov dword ptr [ebp - 0x1c], 8 */ W32((u32)(r_ebp+0xffffffe4u), 0x8u);
    /* 00455b4a: mov dword ptr [ebp - 0x18], 0x12 */ W32((u32)(r_ebp+0xffffffe8u), 0x12u);
    /* 00455b51: mov dword ptr [ebp - 0x14], 0x10 */ W32((u32)(r_ebp+0xffffffecu), 0x10u);
    /* 00455b58: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455b5e: cmp dword ptr [eax + 0x2a0], 0 */ {  u32 a = R32((u32)(r_eax+0x2a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455b65: jne 0x455c1a */ if (!fZ) goto L_00455c1a;
L_00455b6b:; BB(0x00455b6b);
    /* 00455b6b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455b70: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455b75u); f_0048ab58();
    /* 00455b75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455b78: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00455b7e: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455b85: je 0x455ba1 */ if (fZ) goto L_00455ba1;
L_00455b87:; BB(0x00455b87);
    /* 00455b87: push 0x4581b6 */ { u32 v = 0x4581b6u; r_esp -= 4; W32(r_esp, v); }
    /* 00455b8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455b8e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00455b94: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455b99u); f_0045884e();
    /* 00455b99: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00455b9f: jmp 0x455bab */ goto L_00455bab;
L_00455ba1:; BB(0x00455ba1);
    /* 00455ba1: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00455bab:; BB(0x00455bab);
    /* 00455bab: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455bb1: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00455bb7: mov dword ptr [ecx + 0x2a0], edx */ W32((u32)(r_ecx+0x2a0u), r_edx);
    /* 00455bbd: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455bc3: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 00455bc9: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455bcf: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00455bd2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bd8: push 0x1e84a3 */ { u32 v = 0x1e84a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bdd: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455be3: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 00455be9: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455beeu); f_005e9f50();
    /* 00455bee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bf0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455bf6: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455bfc: mov ecx, dword ptr [ecx + 0x2a0] */ r_ecx = R32((u32)(r_ecx+0x2a0u));
    /* 00455c02: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x455c07u); f_005d5ff2();
    /* 00455c07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c09: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455c0f: mov ecx, dword ptr [edx + 0x2a0] */ r_ecx = R32((u32)(r_edx+0x2a0u));
    /* 00455c15: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455c1au); f_005ea514();
L_00455c1a:; BB(0x00455c1a);
    /* 00455c1a: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455c20: cmp dword ptr [eax + 0x2a4], 0 */ {  u32 a = R32((u32)(r_eax+0x2a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455c27: jne 0x455cdc */ if (!fZ) goto L_00455cdc;
L_00455c2d:; BB(0x00455c2d);
    /* 00455c2d: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c32: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455c37u); f_0048ab58();
    /* 00455c37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455c3a: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00455c40: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455c47: je 0x455c63 */ if (fZ) goto L_00455c63;
L_00455c49:; BB(0x00455c49);
    /* 00455c49: push 0x457f3a */ { u32 v = 0x457f3au; r_esp -= 4; W32(r_esp, v); }
    /* 00455c4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c50: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00455c56: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455c5bu); f_0045884e();
    /* 00455c5b: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00455c61: jmp 0x455c6d */ goto L_00455c6d;
L_00455c63:; BB(0x00455c63);
    /* 00455c63: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00455c6d:; BB(0x00455c6d);
    /* 00455c6d: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455c73: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00455c79: mov dword ptr [ecx + 0x2a4], edx */ W32((u32)(r_ecx+0x2a4u), r_edx);
    /* 00455c7f: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455c85: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 00455c8b: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455c91: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00455c94: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c9a: push 0x1e84a4 */ { u32 v = 0x1e84a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455c9f: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455ca5: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 00455cab: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455cb0u); f_005e9f50();
    /* 00455cb0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb8: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455cbe: mov ecx, dword ptr [ecx + 0x2a4] */ r_ecx = R32((u32)(r_ecx+0x2a4u));
    /* 00455cc4: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x455cc9u); f_005d5ff2();
    /* 00455cc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455ccb: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455cd1: mov ecx, dword ptr [edx + 0x2a4] */ r_ecx = R32((u32)(r_edx+0x2a4u));
    /* 00455cd7: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455cdcu); f_005ea514();
L_00455cdc:; BB(0x00455cdc);
    /* 00455cdc: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455ce2: cmp dword ptr [eax + 0x2a8], 0 */ {  u32 a = R32((u32)(r_eax+0x2a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ce9: jne 0x455d85 */ if (!fZ) goto L_00455d85;
L_00455cef:; BB(0x00455cef);
    /* 00455cef: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455cf4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455cf9u); f_0048ab58();
    /* 00455cf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455cfc: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00455d02: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455d09: je 0x455d25 */ if (fZ) goto L_00455d25;
L_00455d0b:; BB(0x00455d0b);
    /* 00455d0b: push 0x45830d */ { u32 v = 0x45830du; r_esp -= 4; W32(r_esp, v); }
    /* 00455d10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d12: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00455d18: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455d1du); f_0045884e();
    /* 00455d1d: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00455d23: jmp 0x455d2f */ goto L_00455d2f;
L_00455d25:; BB(0x00455d25);
    /* 00455d25: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00455d2f:; BB(0x00455d2f);
    /* 00455d2f: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d35: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00455d3b: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 00455d41: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d47: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 00455d4d: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d53: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00455d56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d5c: push 0x1e8483 */ { u32 v = 0x1e8483u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d61: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d67: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 00455d6d: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455d72u); f_005e9f50();
    /* 00455d72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d74: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d7a: mov ecx, dword ptr [ecx + 0x2a8] */ r_ecx = R32((u32)(r_ecx+0x2a8u));
    /* 00455d80: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455d85u); f_005ea514();
L_00455d85:; BB(0x00455d85);
    /* 00455d85: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455d8b: cmp dword ptr [edx + 0x2ac], 0 */ {  u32 a = R32((u32)(r_edx+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455d92: jne 0x455e2e */ if (!fZ) goto L_00455e2e;
L_00455d98:; BB(0x00455d98);
    /* 00455d98: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455d9d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455da2u); f_0048ab58();
    /* 00455da2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455da5: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00455dab: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455db2: je 0x455dce */ if (fZ) goto L_00455dce;
L_00455db4:; BB(0x00455db4);
    /* 00455db4: push 0x4583ca */ { u32 v = 0x4583cau; r_esp -= 4; W32(r_esp, v); }
    /* 00455db9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00455dbb: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00455dc1: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455dc6u); f_0045884e();
    /* 00455dc6: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00455dcc: jmp 0x455dd8 */ goto L_00455dd8;
L_00455dce:; BB(0x00455dce);
    /* 00455dce: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00455dd8:; BB(0x00455dd8);
    /* 00455dd8: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455dde: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00455de4: mov dword ptr [eax + 0x2ac], ecx */ W32((u32)(r_eax+0x2acu), r_ecx);
    /* 00455dea: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455df0: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00455df6: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455dfc: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00455dff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e05: push 0x1e84bb */ { u32 v = 0x1e84bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00455e0a: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455e10: mov ecx, dword ptr [edx + 0x2ac] */ r_ecx = R32((u32)(r_edx+0x2acu));
    /* 00455e16: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455e1bu); f_005e9f50();
    /* 00455e1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e1d: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455e23: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 00455e29: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455e2eu); f_005ea514();
L_00455e2e:; BB(0x00455e2e);
    /* 00455e2e: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455e34: cmp dword ptr [ecx + 0x2b0], 0 */ {  u32 a = R32((u32)(r_ecx+0x2b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e3b: jne 0x455ed7 */ if (!fZ) goto L_00455ed7;
L_00455e41:; BB(0x00455e41);
    /* 00455e41: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e46: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455e4bu); f_0048ab58();
    /* 00455e4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455e4e: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00455e54: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e5b: je 0x455e77 */ if (fZ) goto L_00455e77;
L_00455e5d:; BB(0x00455e5d);
    /* 00455e5d: push 0x4583e1 */ { u32 v = 0x4583e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e62: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00455e64: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00455e6a: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455e6fu); f_0045884e();
    /* 00455e6f: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00455e75: jmp 0x455e81 */ goto L_00455e81;
L_00455e77:; BB(0x00455e77);
    /* 00455e77: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00455e81:; BB(0x00455e81);
    /* 00455e81: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455e87: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00455e8d: mov dword ptr [edx + 0x2b0], eax */ W32((u32)(r_edx+0x2b0u), r_eax);
    /* 00455e93: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455e99: mov edx, dword ptr [ecx + 0x2b0] */ r_edx = R32((u32)(r_ecx+0x2b0u));
    /* 00455e9f: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455ea5: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00455ea8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00455eaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455eac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455eae: push 0x1e8490 */ { u32 v = 0x1e8490u; r_esp -= 4; W32(r_esp, v); }
    /* 00455eb3: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455eb9: mov ecx, dword ptr [ecx + 0x2b0] */ r_ecx = R32((u32)(r_ecx+0x2b0u));
    /* 00455ebf: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455ec4u); f_005e9f50();
    /* 00455ec4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455ec6: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455ecc: mov ecx, dword ptr [edx + 0x2b0] */ r_ecx = R32((u32)(r_edx+0x2b0u));
    /* 00455ed2: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455ed7u); f_005ea514();
L_00455ed7:; BB(0x00455ed7);
    /* 00455ed7: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455edd: cmp dword ptr [eax + 0x2b4], 0 */ {  u32 a = R32((u32)(r_eax+0x2b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ee4: jne 0x455f80 */ if (!fZ) goto L_00455f80;
L_00455eea:; BB(0x00455eea);
    /* 00455eea: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455eef: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455ef4u); f_0048ab58();
    /* 00455ef4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455ef7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00455efd: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f04: je 0x455f20 */ if (fZ) goto L_00455f20;
L_00455f06:; BB(0x00455f06);
    /* 00455f06: push 0x4583fd */ { u32 v = 0x4583fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00455f0b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f0d: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00455f13: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455f18u); f_0045884e();
    /* 00455f18: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00455f1e: jmp 0x455f2a */ goto L_00455f2a;
L_00455f20:; BB(0x00455f20);
    /* 00455f20: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00455f2a:; BB(0x00455f2a);
    /* 00455f2a: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f30: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 00455f36: mov dword ptr [ecx + 0x2b4], edx */ W32((u32)(r_ecx+0x2b4u), r_edx);
    /* 00455f3c: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f42: mov ecx, dword ptr [eax + 0x2b4] */ r_ecx = R32((u32)(r_eax+0x2b4u));
    /* 00455f48: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f4e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00455f51: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f57: push 0x1e8495 */ { u32 v = 0x1e8495u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f5c: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f62: mov ecx, dword ptr [eax + 0x2b4] */ r_ecx = R32((u32)(r_eax+0x2b4u));
    /* 00455f68: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x455f6du); f_005e9f50();
    /* 00455f6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f6f: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f75: mov ecx, dword ptr [ecx + 0x2b4] */ r_ecx = R32((u32)(r_ecx+0x2b4u));
    /* 00455f7b: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x455f80u); f_005ea514();
L_00455f80:; BB(0x00455f80);
    /* 00455f80: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455f86: cmp dword ptr [edx + 0x2b8], 0 */ {  u32 a = R32((u32)(r_edx+0x2b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f8d: jne 0x456029 */ if (!fZ) goto L_00456029;
L_00455f93:; BB(0x00455f93);
    /* 00455f93: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455f98: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x455f9du); f_0048ab58();
    /* 00455f9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455fa0: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00455fa6: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455fad: je 0x455fc9 */ if (fZ) goto L_00455fc9;
L_00455faf:; BB(0x00455faf);
    /* 00455faf: push 0x458419 */ { u32 v = 0x458419u; r_esp -= 4; W32(r_esp, v); }
    /* 00455fb4: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00455fb6: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00455fbc: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x455fc1u); f_0045884e();
    /* 00455fc1: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00455fc7: jmp 0x455fd3 */ goto L_00455fd3;
L_00455fc9:; BB(0x00455fc9);
    /* 00455fc9: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_00455fd3:; BB(0x00455fd3);
    /* 00455fd3: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455fd9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00455fdf: mov dword ptr [eax + 0x2b8], ecx */ W32((u32)(r_eax+0x2b8u), r_ecx);
    /* 00455fe5: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455feb: mov eax, dword ptr [edx + 0x2b8] */ r_eax = R32((u32)(r_edx+0x2b8u));
    /* 00455ff1: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00455ff7: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00455ffa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00455ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455ffe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456000: push 0x1e8485 */ { u32 v = 0x1e8485u; r_esp -= 4; W32(r_esp, v); }
    /* 00456005: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045600b: mov ecx, dword ptr [edx + 0x2b8] */ r_ecx = R32((u32)(r_edx+0x2b8u));
    /* 00456011: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x456016u); f_005e9f50();
    /* 00456016: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456018: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045601e: mov ecx, dword ptr [eax + 0x2b8] */ r_ecx = R32((u32)(r_eax+0x2b8u));
    /* 00456024: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x456029u); f_005ea514();
L_00456029:; BB(0x00456029);
    /* 00456029: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00456030: jmp 0x45603b */ goto L_0045603b;
L_00456032:; BB(0x00456032);
    /* 00456032: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456035: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456038: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_0045603b:; BB(0x0045603b);
    /* 0045603b: cmp dword ptr [ebp - 0x40], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045603f: jge 0x456148 */ if ((fS==fO)) goto L_00456148;
L_00456045:; BB(0x00456045);
    /* 00456045: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456048: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045604e: cmp dword ptr [eax + edx*4 + 0x2bc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456056: jne 0x456143 */ if (!fZ) goto L_00456143;
L_0045605c:; BB(0x0045605c);
    /* 0045605c: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00456061: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x456066u); f_0048ab58();
    /* 00456066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456069: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0045606f: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456076: je 0x456094 */ if (fZ) goto L_00456094;
L_00456078:; BB(0x00456078);
    /* 00456078: push 0x457e4c */ { u32 v = 0x457e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045607d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456081: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00456087: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x45608cu); f_0045884e();
    /* 0045608c: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00456092: jmp 0x45609e */ goto L_0045609e;
L_00456094:; BB(0x00456094);
    /* 00456094: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0045609e:; BB(0x0045609e);
    /* 0045609e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004560a1: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004560a7: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004560ad: mov dword ptr [eax + edx*4 + 0x2bc], ecx */ W32((u32)(r_eax+r_edx*4+0x2bcu), r_ecx);
    /* 004560b4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004560b7: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004560bd: mov ecx, dword ptr [eax + edx*4 + 0x2bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2bcu));
    /* 004560c4: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004560ca: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004560cd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004560cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004560d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004560d3: push 0x1e84aa */ { u32 v = 0x1e84aau; r_esp -= 4; W32(r_esp, v); }
    /* 004560d8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004560db: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004560e1: mov ecx, dword ptr [ecx + eax*4 + 0x2bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2bcu));
    /* 004560e8: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x4560edu); f_005e9f50();
    /* 004560ed: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004560f0: lea eax, [edx*4 + 3] */ r_eax = (u32)(r_edx*4+0x3u);
    /* 004560f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004560f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004560fb: lea edx, [ecx*4 + 2] */ r_edx = (u32)(r_ecx*4+0x2u);
    /* 00456102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456103: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456106: lea ecx, [eax*4 + 1] */ r_ecx = (u32)(r_eax*4+0x1u);
    /* 0045610d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045610e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456111: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00456114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456115: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456118: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045611e: mov ecx, dword ptr [ecx + eax*4 + 0x2bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2bcu));
    /* 00456125: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x45612au); f_005d5ff2();
    /* 0045612a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045612c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045612e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456131: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456137: mov ecx, dword ptr [eax + edx*4 + 0x2bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2bcu));
    /* 0045613e: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x456143u); f_005d678c();
L_00456143:; BB(0x00456143);
    /* 00456143: jmp 0x456032 */ goto L_00456032;
L_00456148:; BB(0x00456148);
    /* 00456148: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0045614f: mov dword ptr [ebp - 0x50], 4 */ W32((u32)(r_ebp+0xffffffb0u), 0x4u);
    /* 00456156: mov dword ptr [ebp - 0x4c], 2 */ W32((u32)(r_ebp+0xffffffb4u), 0x2u);
    /* 0045615d: mov dword ptr [ebp - 0x48], 3 */ W32((u32)(r_ebp+0xffffffb8u), 0x3u);
    /* 00456164: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045616b: jmp 0x456176 */ goto L_00456176;
L_0045616d:; BB(0x0045616d);
    /* 0045616d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456170: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456173: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_00456176:; BB(0x00456176);
    /* 00456176: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045617a: jge 0x4562b6 */ if ((fS==fO)) goto L_004562b6;
L_00456180:; BB(0x00456180);
    /* 00456180: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456183: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456189: cmp dword ptr [eax + edx*4 + 0x2c4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456191: jne 0x4562b1 */ if (!fZ) goto L_004562b1;
L_00456197:; BB(0x00456197);
    /* 00456197: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045619c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4561a1u); f_0048ab58();
    /* 004561a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004561a4: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004561aa: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004561b1: je 0x4561cf */ if (fZ) goto L_004561cf;
L_004561b3:; BB(0x004561b3);
    /* 004561b3: push 0x457711 */ { u32 v = 0x457711u; r_esp -= 4; W32(r_esp, v); }
    /* 004561b8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004561bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004561bc: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004561c2: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x4561c7u); f_0045884e();
    /* 004561c7: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 004561cd: jmp 0x4561d9 */ goto L_004561d9;
L_004561cf:; BB(0x004561cf);
    /* 004561cf: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_004561d9:; BB(0x004561d9);
    /* 004561d9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004561dc: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004561e2: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 004561e8: mov dword ptr [eax + edx*4 + 0x2c4], ecx */ W32((u32)(r_eax+r_edx*4+0x2c4u), r_ecx);
    /* 004561ef: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004561f2: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004561f8: mov ecx, dword ptr [eax + edx*4 + 0x2c4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2c4u));
    /* 004561ff: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456205: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00456208: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045620b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045620e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045620f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456213: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456216: mov edx, dword ptr [ebp + ecx*4 - 0x90] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff70u));
    /* 0045621d: add edx, 0x1e8480 */ {  u32 a = r_edx; u32 b = 0x1e8480u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456223: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456224: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456227: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045622d: mov ecx, dword ptr [ecx + eax*4 + 0x2c4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2c4u));
    /* 00456234: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x456239u); f_005e9f50();
    /* 00456239: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045623b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045623d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045623f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456241: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456244: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045624a: mov ecx, dword ptr [eax + edx*4 + 0x2c4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2c4u));
    /* 00456251: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x456256u); f_005d5ff2();
    /* 00456256: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456259: mov dl, byte ptr [ebp + ecx*4 - 0x54] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx*4+0xffffffacu))) & 0xffu);
    /* 0045625d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045625e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456261: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456267: mov ecx, dword ptr [ecx + eax*4 + 0x2c4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2c4u));
    /* 0045626e: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x456273u); f_005d65d6();
    /* 00456273: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456276: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045627c: mov ecx, dword ptr [eax + edx*4 + 0x2c4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2c4u));
    /* 00456283: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456286: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045628c: mov edx, dword ptr [eax + edx*4 + 0x2c4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2c4u));
    /* 00456293: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00456295: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x456298u); call_ind(t); }
    /* 00456298: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045629a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045629c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045629f: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004562a5: mov ecx, dword ptr [edx + ecx*4 + 0x2c4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2c4u));
    /* 004562ac: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x4562b1u); f_005d678c();
L_004562b1:; BB(0x004562b1);
    /* 004562b1: jmp 0x45616d */ goto L_0045616d;
L_004562b6:; BB(0x004562b6);
    /* 004562b6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004562bd: jmp 0x4562c8 */ goto L_004562c8;
L_004562bf:; BB(0x004562bf);
    /* 004562bf: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004562c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004562c5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_004562c8:; BB(0x004562c8);
    /* 004562c8: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004562cc: jge 0x4563c9 */ if ((fS==fO)) goto L_004563c9;
L_004562d2:; BB(0x004562d2);
    /* 004562d2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004562d5: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004562db: cmp dword ptr [edx + ecx*4 + 0x2d4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004562e3: jne 0x4563c4 */ if (!fZ) goto L_004563c4;
L_004562e9:; BB(0x004562e9);
    /* 004562e9: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004562ee: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4562f3u); f_0048ab58();
    /* 004562f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004562f6: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004562fc: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456303: je 0x456321 */ if (fZ) goto L_00456321;
L_00456305:; BB(0x00456305);
    /* 00456305: push 0x4580c4 */ { u32 v = 0x4580c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045630a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045630d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045630e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00456314: call 0x45884e */ r_esp -= 4; W32(r_esp, 0x456319u); f_0045884e();
    /* 00456319: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0045631f: jmp 0x45632b */ goto L_0045632b;
L_00456321:; BB(0x00456321);
    /* 00456321: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0045632b:; BB(0x0045632b);
    /* 0045632b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045632e: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456334: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0045633a: mov dword ptr [edx + ecx*4 + 0x2d4], eax */ W32((u32)(r_edx+r_ecx*4+0x2d4u), r_eax);
    /* 00456341: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456344: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045634a: mov eax, dword ptr [edx + ecx*4 + 0x2d4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2d4u));
    /* 00456351: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456357: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0045635a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045635c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045635e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456360: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456363: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 00456367: add eax, 0x1e8480 */ {  u32 a = r_eax; u32 b = 0x1e8480u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045636c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045636d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456370: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456376: mov ecx, dword ptr [edx + ecx*4 + 0x2d4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2d4u));
    /* 0045637d: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x456382u); f_005e9f50();
    /* 00456382: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456386: je 0x4563a7 */ if (fZ) goto L_004563a7;
L_00456388:; BB(0x00456388);
    /* 00456388: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045638a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045638c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045638e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456390: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456393: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456399: mov ecx, dword ptr [ecx + eax*4 + 0x2d4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2d4u));
    /* 004563a0: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x4563a5u); f_005d5ff2();
    /* 004563a5: jmp 0x4563c4 */ goto L_004563c4;
L_004563a7:; BB(0x004563a7);
    /* 004563a7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004563a9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004563ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004563ad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004563af: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004563b2: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004563b8: mov ecx, dword ptr [eax + edx*4 + 0x2d4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2d4u));
    /* 004563bf: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x4563c4u); f_005d5ff2();
L_004563c4:; BB(0x004563c4);
    /* 004563c4: jmp 0x4562bf */ goto L_004562bf;
L_004563c9:; BB(0x004563c9);
    /* 004563c9: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004563cf: cmp dword ptr [ecx + 0x2e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x2e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004563d6: jne 0x456452 */ if (!fZ) goto L_00456452;
L_004563d8:; BB(0x004563d8);
    /* 004563d8: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 004563da: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4563dfu); f_0048ab58();
    /* 004563df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004563e2: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004563e8: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004563ef: je 0x456404 */ if (fZ) goto L_00456404;
L_004563f1:; BB(0x004563f1);
    /* 004563f1: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004563f7: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x4563fcu); f_005d505b();
    /* 004563fc: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00456402: jmp 0x45640e */ goto L_0045640e;
L_00456404:; BB(0x00456404);
    /* 00456404: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_0045640e:; BB(0x0045640e);
    /* 0045640e: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456414: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 0045641a: mov dword ptr [edx + 0x2e4], eax */ W32((u32)(r_edx+0x2e4u), r_eax);
    /* 00456420: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456426: mov edx, dword ptr [ecx + 0x2e4] */ r_edx = R32((u32)(r_ecx+0x2e4u));
    /* 0045642c: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456432: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00456435: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045643b: mov ecx, dword ptr [ecx + 0x2e4] */ r_ecx = R32((u32)(r_ecx+0x2e4u));
    /* 00456441: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456447: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 0045644d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045644f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x456452u); call_ind(t); }
L_00456452:; BB(0x00456452);
    /* 00456452: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00456459: jmp 0x456464 */ goto L_00456464;
L_0045645b:; BB(0x0045645b);
    /* 0045645b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045645e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456461: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00456464:; BB(0x00456464);
    /* 00456464: cmp dword ptr [ebp - 0x40], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456468: jge 0x45655f */ if ((fS==fO)) goto L_0045655f;
L_0045646e:; BB(0x0045646e);
    /* 0045646e: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00456473: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x456478u); f_0048ab58();
    /* 00456478: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045647b: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00456481: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456488: je 0x4564af */ if (fZ) goto L_004564af;
L_0045648a:; BB(0x0045648a);
    /* 0045648a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045648c: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456490: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00456493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456494: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456497: mov eax, dword ptr [ebp + edx*4 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff84u));
    /* 0045649b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045649c: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 004564a2: call 0x459374 */ r_esp -= 4; W32(r_esp, 0x4564a7u); f_00459374();
    /* 004564a7: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 004564ad: jmp 0x4564b9 */ goto L_004564b9;
L_004564af:; BB(0x004564af);
    /* 004564af: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_004564b9:; BB(0x004564b9);
    /* 004564b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004564bc: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004564c2: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004564c8: mov dword ptr [edx + ecx*4 + 0x2e8], eax */ W32((u32)(r_edx+r_ecx*4+0x2e8u), r_eax);
    /* 004564cf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004564d2: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004564d8: mov eax, dword ptr [edx + ecx*4 + 0x2e8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2e8u));
    /* 004564df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004564e0: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004564e6: mov ecx, dword ptr [ecx + 0x2e4] */ r_ecx = R32((u32)(r_ecx+0x2e4u));
    /* 004564ec: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x4564f1u); f_005d50ed();
    /* 004564f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004564f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004564f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004564f7: push 0x1e84ce */ { u32 v = 0x1e84ceu; r_esp -= 4; W32(r_esp, v); }
    /* 004564fc: push 0x6f6874 */ { u32 v = 0x6f6874u; r_esp -= 4; W32(r_esp, v); }
    /* 00456501: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456503: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456506: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045650c: mov ecx, dword ptr [eax + edx*4 + 0x2e8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2e8u));
    /* 00456513: call 0x5d5f8d */ r_esp -= 4; W32(r_esp, 0x456518u); f_005d5f8d();
    /* 00456518: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045651b: mov edx, dword ptr [ebp + ecx*4 - 0x38] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u));
    /* 0045651f: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00456522: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00456525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456526: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00456529: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045652a: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045652d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045652e: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00456531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456532: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00456535: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456539: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045653c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045653d: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00456540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456541: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00456544: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456545: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456548: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045654e: mov ecx, dword ptr [eax + edx*4 + 0x2e8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2e8u));
    /* 00456555: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x45655au); f_005d727e();
    /* 0045655a: jmp 0x45645b */ goto L_0045645b;
L_0045655f:; BB(0x0045655f);
    /* 0045655f: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456565: cmp dword ptr [ecx + 0x354], 0 */ {  u32 a = R32((u32)(r_ecx+0x354u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045656c: jne 0x4565e8 */ if (!fZ) goto L_004565e8;
L_0045656e:; BB(0x0045656e);
    /* 0045656e: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00456570: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x456575u); f_0048ab58();
    /* 00456575: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456578: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0045657e: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456585: je 0x45659a */ if (fZ) goto L_0045659a;
L_00456587:; BB(0x00456587);
    /* 00456587: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0045658d: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x456592u); f_005d505b();
    /* 00456592: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00456598: jmp 0x4565a4 */ goto L_004565a4;
L_0045659a:; BB(0x0045659a);
    /* 0045659a: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_004565a4:; BB(0x004565a4);
    /* 004565a4: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004565aa: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 004565b0: mov dword ptr [edx + 0x354], eax */ W32((u32)(r_edx+0x354u), r_eax);
    /* 004565b6: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004565bc: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 004565c2: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004565c8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004565cb: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004565d1: mov ecx, dword ptr [ecx + 0x354] */ r_ecx = R32((u32)(r_ecx+0x354u));
    /* 004565d7: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004565dd: mov eax, dword ptr [edx + 0x354] */ r_eax = R32((u32)(r_edx+0x354u));
    /* 004565e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004565e5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4565e8u); call_ind(t); }
L_004565e8:; BB(0x004565e8);
    /* 004565e8: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004565ef: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004565f6: jmp 0x456601 */ goto L_00456601;
L_004565f8:; BB(0x004565f8);
    /* 004565f8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004565fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004565fe: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00456601:; BB(0x00456601);
    /* 00456601: cmp dword ptr [ebp - 0x40], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456605: jge 0x4567a7 */ if ((fS==fO)) goto L_004567a7;
L_0045660b:; BB(0x0045660b);
    /* 0045660b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045660e: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456614: cmp dword ptr [edx + ecx*4 + 0x358], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045661c: jne 0x4567a2 */ if (!fZ) goto L_004567a2;
L_00456622:; BB(0x00456622);
    /* 00456622: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00456627: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45662cu); f_0048ab58();
    /* 0045662c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045662f: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00456635: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045663c: je 0x456657 */ if (fZ) goto L_00456657;
L_0045663e:; BB(0x0045663e);
    /* 0045663e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456640: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456644: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0045664a: call 0x458a08 */ r_esp -= 4; W32(r_esp, 0x45664fu); f_00458a08();
    /* 0045664f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00456655: jmp 0x456661 */ goto L_00456661;
L_00456657:; BB(0x00456657);
    /* 00456657: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00456661:; BB(0x00456661);
    /* 00456661: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456664: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045666a: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00456670: mov dword ptr [edx + ecx*4 + 0x358], eax */ W32((u32)(r_edx+r_ecx*4+0x358u), r_eax);
    /* 00456677: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045667a: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456680: mov eax, dword ptr [edx + ecx*4 + 0x358] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 00456687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456688: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045668e: mov ecx, dword ptr [ecx + 0x354] */ r_ecx = R32((u32)(r_ecx+0x354u));
    /* 00456694: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x456699u); f_005d50ed();
    /* 00456699: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0045669b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045669e: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 004566a4: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 004566ab: call 0x5d6c57 */ r_esp -= 4; W32(r_esp, 0x4566b0u); f_005d6c57();
    /* 004566b0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004566b3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004566b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004566b7: push 0x67ac6c */ { u32 v = 0x67ac6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004566bc: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 004566bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004566c0: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4566c5u); f_00624050();
    /* 004566c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004566c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004566ca: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 004566cf: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004566d2: imul eax, eax, 0x1f */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1fu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004566d5: add eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004566d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004566d9: push 0x1e84cd */ { u32 v = 0x1e84cdu; r_esp -= 4; W32(r_esp, v); }
    /* 004566de: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004566e1: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004566e7: mov ecx, dword ptr [edx + ecx*4 + 0x358] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 004566ee: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x4566f3u); f_005e9f50();
    /* 004566f3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004566f6: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004566f9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004566fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004566fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456700: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456702: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456704: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00456706: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00456708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045670a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045670c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045670f: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456715: mov ecx, dword ptr [edx + ecx*4 + 0x358] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 0045671c: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x456721u); f_005d727e();
    /* 00456721: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00456723: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00456725: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456728: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045672e: mov ecx, dword ptr [ecx + eax*4 + 0x358] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x358u));
    /* 00456735: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x45673au); f_005d7422();
    /* 0045673a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045673c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045673e: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00456740: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456743: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456749: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00456750: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x456755u); f_005d69c8();
    /* 00456755: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00456758: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456759: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045675c: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456762: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00456769: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x45676eu); f_005d67b1();
    /* 0045676e: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00456773: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456776: imul ecx, ecx, 0x23 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x23u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00456779: add ecx, 0x4f */ {  u32 a = r_ecx; u32 b = 0x4fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045677c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045677d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456780: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456786: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 0045678d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456790: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456796: mov edx, dword ptr [eax + edx*4 + 0x358] */ r_edx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 0045679d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045679f: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4567a2u); call_ind(t); }
L_004567a2:; BB(0x004567a2);
    /* 004567a2: jmp 0x4565f8 */ goto L_004565f8;
L_004567a7:; BB(0x004567a7);
    /* 004567a7: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004567ad: cmp dword ptr [ecx + 0x3a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004567b4: jne 0x4568b1 */ if (!fZ) goto L_004568b1;
L_004567ba:; BB(0x004567ba);
    /* 004567ba: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 004567bc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4567c1u); f_0048ab58();
    /* 004567c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004567c4: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 004567ca: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004567d1: je 0x4567e6 */ if (fZ) goto L_004567e6;
L_004567d3:; BB(0x004567d3);
    /* 004567d3: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004567d9: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x4567deu); f_005e3fb0();
    /* 004567de: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 004567e4: jmp 0x4567f0 */ goto L_004567f0;
L_004567e6:; BB(0x004567e6);
    /* 004567e6: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_004567f0:; BB(0x004567f0);
    /* 004567f0: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004567f6: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 004567fc: mov dword ptr [edx + 0x3a4], eax */ W32((u32)(r_edx+0x3a4u), r_eax);
    /* 00456802: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456808: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 0045680e: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456814: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00456817: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00456819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045681b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045681d: push 0x1e84bd */ { u32 v = 0x1e84bdu; r_esp -= 4; W32(r_esp, v); }
    /* 00456822: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456828: mov ecx, dword ptr [ecx + 0x3a4] */ r_ecx = R32((u32)(r_ecx+0x3a4u));
    /* 0045682e: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x456833u); f_005e9f50();
    /* 00456833: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456839: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 0045683f: mov dword ptr [eax + 0x6c], 9 */ W32((u32)(r_eax+0x6cu), 0x9u);
    /* 00456846: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00456848: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x45684du); f_0048ab58();
    /* 0045684d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456850: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00456856: cmp dword ptr [ebp - 0xd0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045685d: je 0x456872 */ if (fZ) goto L_00456872;
L_0045685f:; BB(0x0045685f);
    /* 0045685f: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00456865: call 0x5d7b88 */ r_esp -= 4; W32(r_esp, 0x45686au); f_005d7b88();
    /* 0045686a: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00456870: jmp 0x45687c */ goto L_0045687c;
L_00456872:; BB(0x00456872);
    /* 00456872: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_0045687c:; BB(0x0045687c);
    /* 0045687c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00456882: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456883: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00456889: mov ecx, dword ptr [edx + 0x3a4] */ r_ecx = R32((u32)(r_edx+0x3a4u));
    /* 0045688f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x456894u); f_005e4060();
    /* 00456894: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045689a: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 004568a0: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004568a6: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 004568ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004568ae: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4568b1u); call_ind(t); }
L_004568b1:; BB(0x004568b1);
    /* 004568b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004568b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004568b4: ret  */ FN_RET(0x00455a79); r_esp += 4; return;
}

void f_004568b5(void) /* FUN_004568b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004568b5);
    /* 004568b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004568b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004568b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004568bb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004568be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004568c1: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x4568c6u); f_005e030e();
    /* 004568c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004568cd: jmp 0x4568d8 */ goto L_004568d8;
L_004568cf:; BB(0x004568cf);
    /* 004568cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004568d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004568d8:; BB(0x004568d8);
    /* 004568d8: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004568dc: jge 0x4568ff */ if ((fS==fO)) goto L_004568ff;
L_004568de:; BB(0x004568de);
    /* 004568de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004568e4: mov ecx, dword ptr [edx + ecx*4 + 0x2e8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2e8u));
    /* 004568eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004568f1: mov eax, dword ptr [edx + eax*4 + 0x2e8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2e8u));
    /* 004568f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004568fa: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4568fdu); call_ind(t); }
    /* 004568fd: jmp 0x4568cf */ goto L_004568cf;
L_004568ff:; BB(0x004568ff);
    /* 004568ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456902: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 00456908: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045690b: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 00456911: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456913: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x456916u); call_ind(t); }
    /* 00456916: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045691d: jmp 0x456928 */ goto L_00456928;
L_0045691f:; BB(0x0045691f);
    /* 0045691f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456922: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456925: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00456928:; BB(0x00456928);
    /* 00456928: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045692c: jge 0x45694f */ if ((fS==fO)) goto L_0045694f;
L_0045692e:; BB(0x0045692e);
    /* 0045692e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456931: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456934: mov ecx, dword ptr [edx + ecx*4 + 0x2c4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2c4u));
    /* 0045693b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045693e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456941: mov eax, dword ptr [edx + eax*4 + 0x2c4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2c4u));
    /* 00456948: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045694a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45694du); call_ind(t); }
    /* 0045694d: jmp 0x45691f */ goto L_0045691f;
L_0045694f:; BB(0x0045694f);
    /* 0045694f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456956: jmp 0x456961 */ goto L_00456961;
L_00456958:; BB(0x00456958);
    /* 00456958: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045695b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045695e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00456961:; BB(0x00456961);
    /* 00456961: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456965: jge 0x456988 */ if ((fS==fO)) goto L_00456988;
L_00456967:; BB(0x00456967);
    /* 00456967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045696a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045696d: mov ecx, dword ptr [edx + ecx*4 + 0x2d4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2d4u));
    /* 00456974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456977: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045697a: mov eax, dword ptr [edx + eax*4 + 0x2d4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2d4u));
    /* 00456981: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456983: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x456986u); call_ind(t); }
    /* 00456986: jmp 0x456958 */ goto L_00456958;
L_00456988:; BB(0x00456988);
    /* 00456988: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045698b: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 00456991: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456994: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0045699a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045699c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x45699fu); call_ind(t); }
    /* 0045699f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569a2: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 004569a8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569ab: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 004569b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004569b3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4569b6u); call_ind(t); }
    /* 004569b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569b9: mov ecx, dword ptr [eax + 0x2b4] */ r_ecx = R32((u32)(r_eax+0x2b4u));
    /* 004569bf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569c2: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 004569c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004569ca: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4569cdu); call_ind(t); }
    /* 004569cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569d0: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 004569d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569d9: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 004569df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004569e1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4569e4u); call_ind(t); }
    /* 004569e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569e7: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 004569ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569f0: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 004569f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004569f8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4569fbu); call_ind(t); }
    /* 004569fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004569fe: mov ecx, dword ptr [eax + 0x2b8] */ r_ecx = R32((u32)(r_eax+0x2b8u));
    /* 00456a04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456a07: mov eax, dword ptr [edx + 0x2b8] */ r_eax = R32((u32)(r_edx+0x2b8u));
    /* 00456a0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456a0f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x456a12u); call_ind(t); }
    /* 00456a12: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456a18: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x456a1du); f_004542de();
    /* 00456a1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456a24: jmp 0x456a2f */ goto L_00456a2f;
L_00456a26:; BB(0x00456a26);
    /* 00456a26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456a29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456a2c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00456a2f:; BB(0x00456a2f);
    /* 00456a2f: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a33: jge 0x456a56 */ if ((fS==fO)) goto L_00456a56;
L_00456a35:; BB(0x00456a35);
    /* 00456a35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456a38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456a3b: mov ecx, dword ptr [edx + ecx*4 + 0x2bc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2bcu));
    /* 00456a42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456a45: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456a48: mov eax, dword ptr [edx + eax*4 + 0x2bc] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2bcu));
    /* 00456a4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456a51: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x456a54u); call_ind(t); }
    /* 00456a54: jmp 0x456a26 */ goto L_00456a26;
L_00456a56:; BB(0x00456a56);
    /* 00456a56: mov esp, ebp */ r_esp = r_ebp;
    /* 00456a58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456a59: ret  */ FN_RET(0x004568b5); r_esp += 4; return;
}

void f_00456a5a(void) /* FUN_00456a5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456a5a);
    /* 00456a5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456a5b: mov ebp, esp */ r_ebp = r_esp;
    /* 00456a5d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456a60: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00456a63: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00456a6a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00456a71: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 00456a78: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 00456a7f: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 00456a86: mov dword ptr [ebp - 0x1c], 3 */ W32((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 00456a8d: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 00456a94: mov dword ptr [ebp - 0x14], 7 */ W32((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 00456a9b: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 00456aa2: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00456aa9: mov dword ptr [ebp - 8], 9 */ W32((u32)(r_ebp+0xfffffff8u), 0x9u);
    /* 00456ab0: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00456ab7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00456aba: mov ecx, dword ptr [ebp + eax*4 - 0x30] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 00456abe: add ecx, 0x1e84bd */ {  u32 a = r_ecx; u32 b = 0x1e84bdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456ac4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ac5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456ac8: mov ecx, dword ptr [edx + 0x3a4] */ r_ecx = R32((u32)(r_edx+0x3a4u));
    /* 00456ace: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x456ad3u); f_005ea0c3();
    /* 00456ad3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456ad6: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 00456adc: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x456ae1u); f_005d53bd();
    /* 00456ae1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456ae4: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00456ae7: cmp dword ptr [ebp - 0x40], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00456aeb: ja 0x456b8f */ if ((!fC&&!fZ)) goto L_00456b8f;
L_00456af1:; BB(0x00456af1);
    /* 00456af1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00456af4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00456af6: mov dl, byte ptr [eax + 0x456c7c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x456c7cu))) & 0xffu);
    /* 00456afc: jmp dword ptr [edx*4 + 0x456c64] */ { u32 t = R32((u32)(r_edx*4+0x456c64u)); switch (t) { case 0x456b03u: goto L_00456b03; case 0x456b11u: goto L_00456b11; case 0x456b51u: goto L_00456b51; case 0x456b8fu: goto L_00456b8f; default: UNSUP(0x00456afc, "jump table entry is not a known target"); } }
L_00456b03:; BB(0x00456b03);
    /* 00456b03: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456b06: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00456b09: mov dword ptr [ecx + 0x290], edx */ W32((u32)(r_ecx+0x290u), r_edx);
    /* 00456b0f: jmp 0x456b8f */ goto L_00456b8f;
L_00456b11:; BB(0x00456b11);
    /* 00456b11: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00456b13: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456b19: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456b1eu); f_00454c8d();
    /* 00456b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b20: jne 0x456b42 */ if (!fZ) goto L_00456b42;
L_00456b22:; BB(0x00456b22);
    /* 00456b22: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00456b24: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456b2a: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456b2fu); f_00454c8d();
    /* 00456b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b31: je 0x456b42 */ if (fZ) goto L_00456b42;
L_00456b33:; BB(0x00456b33);
    /* 00456b33: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456b36: mov dword ptr [eax + 0x290], 4 */ W32((u32)(r_eax+0x290u), 0x4u);
    /* 00456b40: jmp 0x456b4f */ goto L_00456b4f;
L_00456b42:; BB(0x00456b42);
    /* 00456b42: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456b45: mov dword ptr [ecx + 0x290], 3 */ W32((u32)(r_ecx+0x290u), 0x3u);
L_00456b4f:; BB(0x00456b4f);
    /* 00456b4f: jmp 0x456b8f */ goto L_00456b8f;
L_00456b51:; BB(0x00456b51);
    /* 00456b51: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00456b53: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456b59: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456b5eu); f_00454c8d();
    /* 00456b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b60: jne 0x456b82 */ if (!fZ) goto L_00456b82;
L_00456b62:; BB(0x00456b62);
    /* 00456b62: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00456b64: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456b6a: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456b6fu); f_00454c8d();
    /* 00456b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b71: je 0x456b82 */ if (fZ) goto L_00456b82;
L_00456b73:; BB(0x00456b73);
    /* 00456b73: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456b76: mov dword ptr [edx + 0x290], 9 */ W32((u32)(r_edx+0x290u), 0x9u);
    /* 00456b80: jmp 0x456b8f */ goto L_00456b8f;
L_00456b82:; BB(0x00456b82);
    /* 00456b82: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456b85: mov dword ptr [eax + 0x290], 8 */ W32((u32)(r_eax+0x290u), 0x8u);
L_00456b8f:; BB(0x00456b8f);
    /* 00456b8f: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b93: je 0x456b9b */ if (fZ) goto L_00456b9b;
L_00456b95:; BB(0x00456b95);
    /* 00456b95: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b99: jne 0x456bd6 */ if (!fZ) goto L_00456bd6;
L_00456b9b:; BB(0x00456b9b);
    /* 00456b9b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00456ba2: jmp 0x456bad */ goto L_00456bad;
L_00456ba4:; BB(0x00456ba4);
    /* 00456ba4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456ba7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456baa: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00456bad:; BB(0x00456bad);
    /* 00456bad: cmp dword ptr [ebp - 0x34], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456bb1: jge 0x456bd4 */ if ((fS==fO)) goto L_00456bd4;
L_00456bb3:; BB(0x00456bb3);
    /* 00456bb3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456bb6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456bb9: mov ecx, dword ptr [eax + edx*4 + 0x384] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00456bc0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456bc3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456bc6: mov edx, dword ptr [eax + edx*4 + 0x384] */ r_edx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00456bcd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00456bcf: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x456bd2u); call_ind(t); }
    /* 00456bd2: jmp 0x456ba4 */ goto L_00456ba4;
L_00456bd4:; BB(0x00456bd4);
    /* 00456bd4: jmp 0x456c0f */ goto L_00456c0f;
L_00456bd6:; BB(0x00456bd6);
    /* 00456bd6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00456bdd: jmp 0x456be8 */ goto L_00456be8;
L_00456bdf:; BB(0x00456bdf);
    /* 00456bdf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456be2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456be5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00456be8:; BB(0x00456be8);
    /* 00456be8: cmp dword ptr [ebp - 0x34], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456bec: jge 0x456c0f */ if ((fS==fO)) goto L_00456c0f;
L_00456bee:; BB(0x00456bee);
    /* 00456bee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456bf1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456bf4: mov ecx, dword ptr [eax + edx*4 + 0x384] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00456bfb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00456bfe: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c01: mov edx, dword ptr [eax + edx*4 + 0x384] */ r_edx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00456c08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00456c0a: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x456c0du); call_ind(t); }
    /* 00456c0d: jmp 0x456bdf */ goto L_00456bdf;
L_00456c0f:; BB(0x00456c0f);
    /* 00456c0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00456c11: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c14: call 0x456c88 */ r_esp -= 4; W32(r_esp, 0x456c19u); f_00456c88();
    /* 00456c19: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c1c: mov byte ptr [ecx + 0x294], al */ W8((u32)(r_ecx+0x294u), (u8)r_eax);
    /* 00456c22: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c25: call 0x456da4 */ r_esp -= 4; W32(r_esp, 0x456c2au); f_00456da4();
    /* 00456c2a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c2d: movsx eax, byte ptr [edx + 0x294] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x294u));
    /* 00456c34: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00456c35: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00456c38: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456c3a: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00456c3d: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00456c40: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00456c43: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456c47: jge 0x456c50 */ if ((fS==fO)) goto L_00456c50;
L_00456c49:; BB(0x00456c49);
    /* 00456c49: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00456c50:; BB(0x00456c50);
    /* 00456c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456c52: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456c55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456c56: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00456c59: call 0x45708e */ r_esp -= 4; W32(r_esp, 0x456c5eu); f_0045708e();
    /* 00456c5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00456c60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456c61: ret 4 */ FN_RET(0x00456a5a); r_esp += 8; return;
}

void f_00456c88(void) /* FUN_00456c88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456c88);
    /* 00456c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456c89: mov ebp, esp */ r_ebp = r_esp;
    /* 00456c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456c8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456c8f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c93: jne 0x456ca1 */ if (!fZ) goto L_00456ca1;
L_00456c95:; BB(0x00456c95);
    /* 00456c95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456c98: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 00456c9e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00456ca1:; BB(0x00456ca1);
    /* 00456ca1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00456ca4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ca5: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456cab: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456cb0u); f_00454c8d();
    /* 00456cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456cb2: jne 0x456cb9 */ if (!fZ) goto L_00456cb9;
L_00456cb4:; BB(0x00456cb4);
    /* 00456cb4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456cb7: jmp 0x456ce9 */ goto L_00456ce9;
L_00456cb9:; BB(0x00456cb9);
    /* 00456cb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456cbb: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456cc1: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456cc6u); f_00454c8d();
    /* 00456cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456cc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00456cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456ccb: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456cd1: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456cd6u); f_00454c8d();
    /* 00456cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456cd7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456cda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456cdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456cde: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456ce4: call 0x45a249 */ r_esp -= 4; W32(r_esp, 0x456ce9u); f_0045a249();
L_00456ce9:; BB(0x00456ce9);
    /* 00456ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 00456ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456cec: ret 4 */ FN_RET(0x00456c88); r_esp += 8; return;
}

void f_00456cef(void) /* FUN_00456cef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456cef);
    /* 00456cef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456cf0: mov ebp, esp */ r_ebp = r_esp;
    /* 00456cf2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456cf5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456cf8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00456cfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456cfd: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d02u); f_00456d47();
    /* 00456d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d04: jne 0x456d39 */ if (!fZ) goto L_00456d39;
L_00456d06:; BB(0x00456d06);
    /* 00456d06: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d0b: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d10u); f_00456d47();
    /* 00456d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d12: jne 0x456d39 */ if (!fZ) goto L_00456d39;
L_00456d14:; BB(0x00456d14);
    /* 00456d14: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d19: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d1eu); f_00456d47();
    /* 00456d1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d20: jne 0x456d39 */ if (!fZ) goto L_00456d39;
L_00456d22:; BB(0x00456d22);
    /* 00456d22: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d27: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d2cu); f_00456d47();
    /* 00456d2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d2e: jne 0x456d39 */ if (!fZ) goto L_00456d39;
L_00456d30:; BB(0x00456d30);
    /* 00456d30: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456d37: jmp 0x456d40 */ goto L_00456d40;
L_00456d39:; BB(0x00456d39);
    /* 00456d39: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00456d40:; BB(0x00456d40);
    /* 00456d40: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456d43: mov esp, ebp */ r_esp = r_ebp;
    /* 00456d45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456d46: ret  */ FN_RET(0x00456cef); r_esp += 4; return;
}

void f_00456d47(void) /* FUN_00456d47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456d47);
    /* 00456d47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456d48: mov ebp, esp */ r_ebp = r_esp;
    /* 00456d4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456d4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d51: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 00456d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456d59: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d5c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00456d5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00456d61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456d62: ret 4 */ FN_RET(0x00456d47); r_esp += 8; return;
}

void f_00456d65(void) /* FUN_00456d65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456d65);
    /* 00456d65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456d66: mov ebp, esp */ r_ebp = r_esp;
    /* 00456d68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456d6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d71: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d76u); f_00456d47();
    /* 00456d76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d78: jne 0x456d97 */ if (!fZ) goto L_00456d97;
L_00456d7a:; BB(0x00456d7a);
    /* 00456d7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d7f: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x456d84u); f_00456d47();
    /* 00456d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d86: jne 0x456d97 */ if (!fZ) goto L_00456d97;
L_00456d88:; BB(0x00456d88);
    /* 00456d88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456d8b: movsx ecx, byte ptr [eax + 0x294] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x294u));
    /* 00456d92: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d95: jne 0x456d9b */ if (!fZ) goto L_00456d9b;
L_00456d97:; BB(0x00456d97);
    /* 00456d97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456d99: jmp 0x456da0 */ goto L_00456da0;
L_00456d9b:; BB(0x00456d9b);
    /* 00456d9b: mov eax, 1 */ r_eax = 0x1u;
L_00456da0:; BB(0x00456da0);
    /* 00456da0: mov esp, ebp */ r_esp = r_ebp;
    /* 00456da2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456da3: ret  */ FN_RET(0x00456d65); r_esp += 4; return;
}

void f_00456da4(void) /* FUN_00456da4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456da4);
    /* 00456da4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456da5: mov ebp, esp */ r_ebp = r_esp;
    /* 00456da7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456daa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00456dad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456db0: call 0x456d65 */ r_esp -= 4; W32(r_esp, 0x456db5u); f_00456d65();
    /* 00456db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456db7: je 0x456df4 */ if (fZ) goto L_00456df4;
L_00456db9:; BB(0x00456db9);
    /* 00456db9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456dc0: jmp 0x456dcb */ goto L_00456dcb;
L_00456dc2:; BB(0x00456dc2);
    /* 00456dc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456dc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456dc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00456dcb:; BB(0x00456dcb);
    /* 00456dcb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456dcf: jge 0x456df2 */ if ((fS==fO)) goto L_00456df2;
L_00456dd1:; BB(0x00456dd1);
    /* 00456dd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456dd4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456dd7: mov ecx, dword ptr [edx + ecx*4 + 0x2c4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2c4u));
    /* 00456dde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456de1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456de4: mov eax, dword ptr [edx + eax*4 + 0x2c4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2c4u));
    /* 00456deb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456ded: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x456df0u); call_ind(t); }
    /* 00456df0: jmp 0x456dc2 */ goto L_00456dc2;
L_00456df2:; BB(0x00456df2);
    /* 00456df2: jmp 0x456e2d */ goto L_00456e2d;
L_00456df4:; BB(0x00456df4);
    /* 00456df4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456dfb: jmp 0x456e06 */ goto L_00456e06;
L_00456dfd:; BB(0x00456dfd);
    /* 00456dfd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e00: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456e03: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00456e06:; BB(0x00456e06);
    /* 00456e06: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456e0a: jge 0x456e2d */ if ((fS==fO)) goto L_00456e2d;
L_00456e0c:; BB(0x00456e0c);
    /* 00456e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456e12: mov ecx, dword ptr [edx + ecx*4 + 0x2c4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2c4u));
    /* 00456e19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e1c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456e1f: mov eax, dword ptr [edx + eax*4 + 0x2c4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2c4u));
    /* 00456e26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456e28: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x456e2bu); call_ind(t); }
    /* 00456e2b: jmp 0x456dfd */ goto L_00456dfd;
L_00456e2d:; BB(0x00456e2d);
    /* 00456e2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00456e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456e30: ret  */ FN_RET(0x00456da4); r_esp += 4; return;
}

void f_00456e31(void) /* FUN_00456e31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456e31);
    /* 00456e31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456e32: mov ebp, esp */ r_ebp = r_esp;
    /* 00456e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456e35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456e38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e3b: movsx eax, byte ptr [eax + 0x295] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x295u));
    /* 00456e42: mov esp, ebp */ r_esp = r_ebp;
    /* 00456e44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456e45: ret  */ FN_RET(0x00456e31); r_esp += 4; return;
}

void f_00456e46(void) /* FUN_00456e46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456e46);
    /* 00456e46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456e47: mov ebp, esp */ r_ebp = r_esp;
    /* 00456e49: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456e4c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00456e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e51: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00456e57: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x456e5cu); f_00454c8d();
    /* 00456e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456e5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456e60: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 00456e66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456e67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456e6a: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456e70: call 0x45a11d */ r_esp -= 4; W32(r_esp, 0x456e75u); f_0045a11d();
    /* 00456e75: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00456e78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e7b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00456e7c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456e7e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00456e80: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00456e83: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456e85: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00456e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456e89: je 0x456e9c */ if (fZ) goto L_00456e9c;
L_00456e8b:; BB(0x00456e8b);
    /* 00456e8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e8e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00456e8f: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00456e92: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456e94: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00456e97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456e9a: jmp 0x456ea8 */ goto L_00456ea8;
L_00456e9c:; BB(0x00456e9c);
    /* 00456e9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e9f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00456ea0: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00456ea3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456ea5: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_00456ea8:; BB(0x00456ea8);
    /* 00456ea8: mov esp, ebp */ r_esp = r_ebp;
    /* 00456eaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456eab: ret  */ FN_RET(0x00456e46); r_esp += 4; return;
}

void f_00456eac(void) /* FUN_00456eac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456eac);
    /* 00456eac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456ead: mov ebp, esp */ r_ebp = r_esp;
    /* 00456eaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456eb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456eb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456eb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456eb7: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456ebcu); f_00456e31();
    /* 00456ebc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ebe: jne 0x456ed9 */ if (!fZ) goto L_00456ed9;
L_00456ec0:; BB(0x00456ec0);
    /* 00456ec0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ec3: mov ecx, dword ptr [eax + 0x2bc] */ r_ecx = R32((u32)(r_eax+0x2bcu));
    /* 00456ec9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ecc: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00456ed2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456ed4: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x456ed7u); call_ind(t); }
    /* 00456ed7: jmp 0x456ef0 */ goto L_00456ef0;
L_00456ed9:; BB(0x00456ed9);
    /* 00456ed9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456edc: mov ecx, dword ptr [eax + 0x2bc] */ r_ecx = R32((u32)(r_eax+0x2bcu));
    /* 00456ee2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ee5: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00456eeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456eed: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x456ef0u); call_ind(t); }
L_00456ef0:; BB(0x00456ef0);
    /* 00456ef0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ef3: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456ef8u); f_00456e31();
    /* 00456ef8: mov esi, eax */ r_esi = r_eax;
    /* 00456efa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456efd: call 0x456e46 */ r_esp -= 4; W32(r_esp, 0x456f02u); f_00456e46();
    /* 00456f02: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00456f05: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456f07: jne 0x456f22 */ if (!fZ) goto L_00456f22;
L_00456f09:; BB(0x00456f09);
    /* 00456f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f0c: mov ecx, dword ptr [eax + 0x2c0] */ r_ecx = R32((u32)(r_eax+0x2c0u));
    /* 00456f12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f15: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 00456f1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456f1d: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x456f20u); call_ind(t); }
    /* 00456f20: jmp 0x456f39 */ goto L_00456f39;
L_00456f22:; BB(0x00456f22);
    /* 00456f22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f25: mov ecx, dword ptr [eax + 0x2c0] */ r_ecx = R32((u32)(r_eax+0x2c0u));
    /* 00456f2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f2e: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 00456f34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00456f36: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x456f39u); call_ind(t); }
L_00456f39:; BB(0x00456f39);
    /* 00456f39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456f3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00456f3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456f3d: ret  */ FN_RET(0x00456eac); r_esp += 4; return;
}

void f_00456f3e(void) /* FUN_00456f3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456f3e);
    /* 00456f3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456f3f: mov ebp, esp */ r_ebp = r_esp;
    /* 00456f41: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456f44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456f45: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00456f48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456f4b: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456f50u); f_00456e31();
    /* 00456f50: mov esi, eax */ r_esi = r_eax;
    /* 00456f52: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456f55: mov ecx, dword ptr [eax + 0x37c] */ r_ecx = R32((u32)(r_eax+0x37cu));
    /* 00456f5b: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x456f60u); f_005d5015();
    /* 00456f60: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f62: jle 0x456ff1 */ if ((fZ||fS!=fO)) goto L_00456ff1;
L_00456f68:; BB(0x00456f68);
    /* 00456f68: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00456f6f: jmp 0x456f7a */ goto L_00456f7a;
L_00456f71:; BB(0x00456f71);
    /* 00456f71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f74: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00456f77: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00456f7a:; BB(0x00456f7a);
    /* 00456f7a: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f7e: jle 0x456ff1 */ if ((fZ||fS!=fO)) goto L_00456ff1;
L_00456f80:; BB(0x00456f80);
    /* 00456f80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456f83: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456f88u); f_00456e31();
    /* 00456f88: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456f8b: mov edx, 9 */ r_edx = 0x9u;
    /* 00456f90: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00456f93: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00456f95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f96: push 0x67ac70 */ { u32 v = 0x67ac70u; r_esp -= 4; W32(r_esp, v); }
    /* 00456f9b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00456f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f9f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x456fa4u); f_00624050();
    /* 00456fa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456fa7: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00456faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456fae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456fb1: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00456fb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456fbb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456fbe: mov edx, dword ptr [eax + edx*4 + 0x358] */ r_edx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00456fc5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00456fc7: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x456fcau); call_ind(t); }
    /* 00456fca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456fcd: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456fd2u); f_00456e31();
    /* 00456fd2: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00456fd7: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00456fda: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00456fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456fe0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456fe3: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00456fea: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x456fefu); f_005d5029();
    /* 00456fef: jmp 0x456f71 */ goto L_00456f71;
L_00456ff1:; BB(0x00456ff1);
    /* 00456ff1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456ff4: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x456ff9u); f_00456e31();
    /* 00456ff9: mov esi, eax */ r_esi = r_eax;
    /* 00456ffb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456ffe: mov ecx, dword ptr [ecx + 0x358] */ r_ecx = R32((u32)(r_ecx+0x358u));
    /* 00457004: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x457009u); f_005d5015();
    /* 00457009: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045700b: jge 0x457089 */ if ((fS==fO)) goto L_00457089;
L_0045700d:; BB(0x0045700d);
    /* 0045700d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457014: jmp 0x45701f */ goto L_0045701f;
L_00457016:; BB(0x00457016);
    /* 00457016: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457019: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045701c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045701f:; BB(0x0045701f);
    /* 0045701f: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457023: jge 0x457089 */ if ((fS==fO)) goto L_00457089;
L_00457025:; BB(0x00457025);
    /* 00457025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457028: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x45702du); f_00456e31();
    /* 0045702d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457030: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 00457034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457035: push 0x67ac74 */ { u32 v = 0x67ac74u; r_esp -= 4; W32(r_esp, v); }
    /* 0045703a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045703d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045703e: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x457043u); f_00624050();
    /* 00457043: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457046: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00457049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045704a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045704d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457050: mov ecx, dword ptr [eax + edx*4 + 0x358] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00457057: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045705a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045705d: mov edx, dword ptr [eax + edx*4 + 0x358] */ r_edx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00457064: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457066: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x457069u); call_ind(t); }
    /* 00457069: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045706c: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457071u); f_00456e31();
    /* 00457071: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457075: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457078: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045707b: mov ecx, dword ptr [edx + ecx*4 + 0x358] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 00457082: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x457087u); f_005d5029();
    /* 00457087: jmp 0x457016 */ goto L_00457016;
L_00457089:; BB(0x00457089);
    /* 00457089: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045708a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045708c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045708d: ret  */ FN_RET(0x00456f3e); r_esp += 4; return;
}

void f_0045708e(void) /* FUN_0045708e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045708e);
    /* 0045708e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045708f: mov ebp, esp */ r_ebp = r_esp;
    /* 00457091: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457094: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457095: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00457098: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045709b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045709e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004570a1: call 0x456cef */ r_esp -= 4; W32(r_esp, 0x4570a6u); f_00456cef();
    /* 004570a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004570a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004570aa: call 0x457ae3 */ r_esp -= 4; W32(r_esp, 0x4570afu); f_00457ae3();
    /* 004570af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004570b2: mov ecx, dword ptr [ecx + 0x380] */ r_ecx = R32((u32)(r_ecx+0x380u));
    /* 004570b8: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x4570bdu); f_005d53bd();
    /* 004570bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004570c4: jmp 0x4570cf */ goto L_004570cf;
L_004570c6:; BB(0x004570c6);
    /* 004570c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004570c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004570cc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004570cf:; BB(0x004570cf);
    /* 004570cf: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004570d3: jge 0x457127 */ if ((fS==fO)) goto L_00457127;
L_004570d5:; BB(0x004570d5);
    /* 004570d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004570d8: cmp dword ptr [eax + 0x290], 5 */ {  u32 a = R32((u32)(r_eax+0x290u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004570df: jne 0x457104 */ if (!fZ) goto L_00457104;
L_004570e1:; BB(0x004570e1);
    /* 004570e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004570e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004570e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004570e9: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 004570f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004570f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004570f6: mov eax, dword ptr [edx + eax*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_eax*4+0x384u));
    /* 004570fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004570ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x457102u); call_ind(t); }
    /* 00457102: jmp 0x457125 */ goto L_00457125;
L_00457104:; BB(0x00457104);
    /* 00457104: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00457106: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457109: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045710c: mov ecx, dword ptr [ecx + eax*4 + 0x384] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x384u));
    /* 00457113: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457116: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457119: mov edx, dword ptr [eax + edx*4 + 0x384] */ r_edx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00457120: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457122: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x457125u); call_ind(t); }
L_00457125:; BB(0x00457125);
    /* 00457125: jmp 0x4570c6 */ goto L_004570c6;
L_00457127:; BB(0x00457127);
    /* 00457127: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045712b: jne 0x457168 */ if (!fZ) goto L_00457168;
L_0045712d:; BB(0x0045712d);
    /* 0045712d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457130: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 00457136: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457137: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045713d: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x457142u); f_00454c8d();
    /* 00457142: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457144: je 0x457161 */ if (fZ) goto L_00457161;
L_00457146:; BB(0x00457146);
    /* 00457146: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457148: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045714b: call 0x456c88 */ r_esp -= 4; W32(r_esp, 0x457150u); f_00456c88();
    /* 00457150: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00457151: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00457154: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457156: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00457159: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045715c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045715f: jmp 0x457168 */ goto L_00457168;
L_00457161:; BB(0x00457161);
    /* 00457161: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00457168:; BB(0x00457168);
    /* 00457168: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045716f: jmp 0x45717a */ goto L_0045717a;
L_00457171:; BB(0x00457171);
    /* 00457171: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457174: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457177: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045717a:; BB(0x0045717a);
    /* 0045717a: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045717e: jge 0x4571cf */ if ((fS==fO)) goto L_004571cf;
L_00457180:; BB(0x00457180);
    /* 00457180: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457183: call 0x456e46 */ r_esp -= 4; W32(r_esp, 0x457188u); f_00456e46();
    /* 00457188: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045718b: jge 0x4571ae */ if ((fS==fO)) goto L_004571ae;
L_0045718d:; BB(0x0045718d);
    /* 0045718d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457190: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457193: mov ecx, dword ptr [edx + ecx*4 + 0x358] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 0045719a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045719d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004571a0: mov eax, dword ptr [edx + eax*4 + 0x358] */ r_eax = R32((u32)(r_edx+r_eax*4+0x358u));
    /* 004571a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004571a9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4571acu); call_ind(t); }
    /* 004571ac: jmp 0x4571cd */ goto L_004571cd;
L_004571ae:; BB(0x004571ae);
    /* 004571ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004571b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004571b4: mov ecx, dword ptr [ecx + eax*4 + 0x358] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x358u));
    /* 004571bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004571be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004571c1: mov edx, dword ptr [eax + edx*4 + 0x358] */ r_edx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 004571c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004571ca: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4571cdu); call_ind(t); }
L_004571cd:; BB(0x004571cd);
    /* 004571cd: jmp 0x457171 */ goto L_00457171;
L_004571cf:; BB(0x004571cf);
    /* 004571cf: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004571d3: jne 0x45725f */ if (!fZ) goto L_0045725f;
L_004571d9:; BB(0x004571d9);
    /* 004571d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004571dc: mov ecx, dword ptr [ecx + 0x354] */ r_ecx = R32((u32)(r_ecx+0x354u));
    /* 004571e2: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x4571e7u); f_005d53bd();
    /* 004571e7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004571ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004571eb: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004571ee: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004571f0: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004571f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004571f6: mov byte ptr [edx + 0x295], al */ W8((u32)(r_edx+0x295u), (u8)r_eax);
    /* 004571fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004571ff: call 0x456f3e */ r_esp -= 4; W32(r_esp, 0x457204u); f_00456f3e();
    /* 00457204: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045720b: jmp 0x457216 */ goto L_00457216;
L_0045720d:; BB(0x0045720d);
    /* 0045720d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457210: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457213: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00457216:; BB(0x00457216);
    /* 00457216: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045721a: jge 0x45725f */ if ((fS==fO)) goto L_0045725f;
L_0045721c:; BB(0x0045721c);
    /* 0045721c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045721f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457222: mov ecx, dword ptr [edx + ecx*4 + 0x358] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x358u));
    /* 00457229: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x45722eu); f_005d5015();
    /* 0045722e: mov esi, eax */ r_esi = r_eax;
    /* 00457230: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457233: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457238u); f_00456e31();
    /* 00457238: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045723a: jne 0x45725d */ if (!fZ) goto L_0045725d;
L_0045723c:; BB(0x0045723c);
    /* 0045723c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045723f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457242: mov ecx, dword ptr [ecx + eax*4 + 0x358] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x358u));
    /* 00457249: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045724c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045724f: mov edx, dword ptr [eax + edx*4 + 0x358] */ r_edx = R32((u32)(r_eax+r_edx*4+0x358u));
    /* 00457256: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457258: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x45725bu); call_ind(t); }
    /* 0045725b: jmp 0x45725f */ goto L_0045725f;
L_0045725d:; BB(0x0045725d);
    /* 0045725d: jmp 0x45720d */ goto L_0045720d;
L_0045725f:; BB(0x0045725f);
    /* 0045725f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457262: call 0x456eac */ r_esp -= 4; W32(r_esp, 0x457267u); f_00456eac();
    /* 00457267: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045726a: call 0x456cef */ r_esp -= 4; W32(r_esp, 0x45726fu); f_00456cef();
    /* 0045726f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457271: je 0x457435 */ if (fZ) goto L_00457435;
L_00457277:; BB(0x00457277);
    /* 00457277: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00457279: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045727c: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x457281u); f_00456d47();
    /* 00457281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457283: jne 0x457293 */ if (!fZ) goto L_00457293;
L_00457285:; BB(0x00457285);
    /* 00457285: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00457287: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045728a: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x45728fu); f_00456d47();
    /* 0045728f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457291: je 0x4572a3 */ if (fZ) goto L_004572a3;
L_00457293:; BB(0x00457293);
    /* 00457293: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0045729a: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 004572a1: jmp 0x4572b1 */ goto L_004572b1;
L_004572a3:; BB(0x004572a3);
    /* 004572a3: mov dword ptr [ebp - 8], 8 */ W32((u32)(r_ebp+0xfffffff8u), 0x8u);
    /* 004572aa: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
L_004572b1:; BB(0x004572b1);
    /* 004572b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004572b8: jmp 0x4572c3 */ goto L_004572c3;
L_004572ba:; BB(0x004572ba);
    /* 004572ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004572bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004572c0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004572c3:; BB(0x004572c3);
    /* 004572c3: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004572c7: jge 0x457430 */ if ((fS==fO)) goto L_00457430;
L_004572cd:; BB(0x004572cd);
    /* 004572cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004572cf: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004572d5: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x4572dau); f_00454c8d();
    /* 004572da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004572db: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004572de: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004572e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004572e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004572e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004572e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004572e9: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004572ef: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x4572f4u); f_00459e15();
    /* 004572f4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572f7: je 0x4573c6 */ if (fZ) goto L_004573c6;
L_004572fd:; BB(0x004572fd);
    /* 004572fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457300: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457304: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00457307: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457308: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045730b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045730d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457310: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457317: call 0x458f70 */ r_esp -= 4; W32(r_esp, 0x45731cu); f_00458f70();
    /* 0045731c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045731f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457322: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457323: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 00457326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045732a: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045732c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045732f: mov ecx, dword ptr [edx + ecx*4 + 0x318] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 00457336: call 0x458f70 */ r_esp -= 4; W32(r_esp, 0x45733bu); f_00458f70();
    /* 0045733b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045733d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457340: call 0x456c88 */ r_esp -= 4; W32(r_esp, 0x457345u); f_00456c88();
    /* 00457345: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457348: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045734b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045734d: jne 0x4573a5 */ if (!fZ) goto L_004573a5;
L_0045734f:; BB(0x0045734f);
    /* 0045734f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457352: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 00457358: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045735b: jne 0x457382 */ if (!fZ) goto L_00457382;
L_0045735d:; BB(0x0045735d);
    /* 0045735d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457360: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00457362: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457365: mov ecx, dword ptr [edx + ecx*4 + 0x314] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 0045736c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045736f: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00457371: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457374: mov eax, dword ptr [edx + eax*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_eax*4+0x314u));
    /* 0045737b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045737d: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x457380u); call_ind(t); }
    /* 00457380: jmp 0x4573a5 */ goto L_004573a5;
L_00457382:; BB(0x00457382);
    /* 00457382: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457385: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00457387: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045738a: mov ecx, dword ptr [ecx + eax*4 + 0x318] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00457391: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457394: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00457396: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457399: mov edx, dword ptr [eax + edx*4 + 0x318] */ r_edx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 004573a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004573a2: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x4573a5u); call_ind(t); }
L_004573a5:; BB(0x004573a5);
    /* 004573a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004573ab: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 004573b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004573b8: mov eax, dword ptr [edx + eax*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_eax*4+0x384u));
    /* 004573bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004573c1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4573c4u); call_ind(t); }
    /* 004573c4: jmp 0x45742b */ goto L_0045742b;
L_004573c6:; BB(0x004573c6);
    /* 004573c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573c9: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004573cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004573ce: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 004573d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573d8: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004573da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004573dd: mov edx, dword ptr [eax + edx*4 + 0x314] */ r_edx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 004573e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004573e6: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4573e9u); call_ind(t); }
    /* 004573e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573ec: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004573ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004573f1: mov ecx, dword ptr [edx + ecx*4 + 0x318] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 004573f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573fb: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004573fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457400: mov eax, dword ptr [edx + eax*4 + 0x318] */ r_eax = R32((u32)(r_edx+r_eax*4+0x318u));
    /* 00457407: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457409: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x45740cu); call_ind(t); }
    /* 0045740c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045740f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457412: mov ecx, dword ptr [ecx + eax*4 + 0x384] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x384u));
    /* 00457419: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045741c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045741f: mov edx, dword ptr [eax + edx*4 + 0x384] */ r_edx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 00457426: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457428: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x45742bu); call_ind(t); }
L_0045742b:; BB(0x0045742b);
    /* 0045742b: jmp 0x4572ba */ goto L_004572ba;
L_00457430:; BB(0x00457430);
    /* 00457430: jmp 0x45757a */ goto L_0045757a;
L_00457435:; BB(0x00457435);
    /* 00457435: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045743c: jmp 0x457447 */ goto L_00457447;
L_0045743e:; BB(0x0045743e);
    /* 0045743e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457441: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00457447:; BB(0x00457447);
    /* 00457447: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045744b: jge 0x45757a */ if ((fS==fO)) goto L_0045757a;
L_00457451:; BB(0x00457451);
    /* 00457451: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457453: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457459: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x45745eu); f_00454c8d();
    /* 0045745e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045745f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457462: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457465: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457466: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457469: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0045746f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457470: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457473: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457479: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x45747eu); f_00459e15();
    /* 0045747e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457481: je 0x457537 */ if (fZ) goto L_00457537;
L_00457487:; BB(0x00457487);
    /* 00457487: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045748a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045748d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045748e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457491: mov cl, byte ptr [eax + 0x290] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x290u))) & 0xffu);
    /* 00457497: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457498: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045749b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045749e: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 004574a5: call 0x458f70 */ r_esp -= 4; W32(r_esp, 0x4574aau); f_00458f70();
    /* 004574aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004574ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004574af: call 0x456c88 */ r_esp -= 4; W32(r_esp, 0x4574b4u); f_00456c88();
    /* 004574b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004574b7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004574ba: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004574bc: jne 0x4574dd */ if (!fZ) goto L_004574dd;
L_004574be:; BB(0x004574be);
    /* 004574be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004574c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004574c4: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 004574cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004574ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004574d1: mov edx, dword ptr [eax + edx*4 + 0x314] */ r_edx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 004574d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004574da: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x4574ddu); call_ind(t); }
L_004574dd:; BB(0x004574dd);
    /* 004574dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004574e0: cmp dword ptr [ecx + 0x290], 0 */ {  u32 a = R32((u32)(r_ecx+0x290u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004574e7: je 0x457516 */ if (fZ) goto L_00457516;
L_004574e9:; BB(0x004574e9);
    /* 004574e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004574ec: cmp dword ptr [edx + 0x290], 2 */ {  u32 a = R32((u32)(r_edx+0x290u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004574f3: je 0x457516 */ if (fZ) goto L_00457516;
L_004574f5:; BB(0x004574f5);
    /* 004574f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004574f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004574fb: mov ecx, dword ptr [ecx + eax*4 + 0x384] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x384u));
    /* 00457502: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457505: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457508: mov edx, dword ptr [eax + edx*4 + 0x384] */ r_edx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 0045750f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457511: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x457514u); call_ind(t); }
    /* 00457514: jmp 0x457535 */ goto L_00457535;
L_00457516:; BB(0x00457516);
    /* 00457516: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457519: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045751c: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 00457523: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457526: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457529: mov eax, dword ptr [edx + eax*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_eax*4+0x384u));
    /* 00457530: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457532: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x457535u); call_ind(t); }
L_00457535:; BB(0x00457535);
    /* 00457535: jmp 0x457575 */ goto L_00457575;
L_00457537:; BB(0x00457537);
    /* 00457537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045753a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045753d: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457544: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457547: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045754a: mov edx, dword ptr [eax + edx*4 + 0x314] */ r_edx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 00457551: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457553: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x457556u); call_ind(t); }
    /* 00457556: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457559: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045755c: mov ecx, dword ptr [edx + ecx*4 + 0x384] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x384u));
    /* 00457563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457566: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457569: mov eax, dword ptr [edx + eax*4 + 0x384] */ r_eax = R32((u32)(r_edx+r_eax*4+0x384u));
    /* 00457570: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457572: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x457575u); call_ind(t); }
L_00457575:; BB(0x00457575);
    /* 00457575: jmp 0x45743e */ goto L_0045743e;
L_0045757a:; BB(0x0045757a);
    /* 0045757a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045757c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045757f: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x457584u); f_00456d47();
    /* 00457584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457586: jne 0x45766e */ if (!fZ) goto L_0045766e;
L_0045758c:; BB(0x0045758c);
    /* 0045758c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457593: jmp 0x45759e */ goto L_0045759e;
L_00457595:; BB(0x00457595);
    /* 00457595: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457598: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045759b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045759e:; BB(0x0045759e);
    /* 0045759e: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004575a2: jge 0x45766e */ if ((fS==fO)) goto L_0045766e;
L_004575a8:; BB(0x004575a8);
    /* 004575a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004575ab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004575ae: cmp dword ptr [edx + ecx*4 + 0x314], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575b6: je 0x457669 */ if (fZ) goto L_00457669;
L_004575bc:; BB(0x004575bc);
    /* 004575bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004575bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004575c2: mov edx, dword ptr [ecx + eax*4 + 0x314] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 004575c9: cmp dword ptr [edx + 0x114], 0 */ {  u32 a = R32((u32)(r_edx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575d0: je 0x457628 */ if (fZ) goto L_00457628;
L_004575d2:; BB(0x004575d2);
    /* 004575d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004575d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004575d8: mov edx, dword ptr [ecx + eax*4 + 0x314] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 004575df: mov ecx, dword ptr [edx + 0x114] */ r_ecx = R32((u32)(r_edx+0x114u));
    /* 004575e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004575e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004575eb: mov eax, dword ptr [edx + eax*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_eax*4+0x314u));
    /* 004575f2: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004575f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004575fa: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4575fdu); call_ind(t); }
    /* 004575fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457600: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457603: mov eax, dword ptr [edx + ecx*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 0045760a: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 00457610: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457613: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457616: mov edx, dword ptr [eax + edx*4 + 0x314] */ r_edx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 0045761d: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 00457623: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457625: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x457628u); call_ind(t); }
L_00457628:; BB(0x00457628);
    /* 00457628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045762b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045762e: mov edx, dword ptr [ecx + eax*4 + 0x314] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457635: cmp dword ptr [edx + 0x11c], 0 */ {  u32 a = R32((u32)(r_edx+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045763c: je 0x457669 */ if (fZ) goto L_00457669;
L_0045763e:; BB(0x0045763e);
    /* 0045763e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457641: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457644: mov edx, dword ptr [ecx + eax*4 + 0x314] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 0045764b: mov ecx, dword ptr [edx + 0x11c] */ r_ecx = R32((u32)(r_edx+0x11cu));
    /* 00457651: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457654: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457657: mov eax, dword ptr [edx + eax*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_eax*4+0x314u));
    /* 0045765e: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 00457664: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457666: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x457669u); call_ind(t); }
L_00457669:; BB(0x00457669);
    /* 00457669: jmp 0x457595 */ goto L_00457595;
L_0045766e:; BB(0x0045766e);
    /* 0045766e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045766f: mov esp, ebp */ r_esp = r_ebp;
    /* 00457671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457672: ret 8 */ FN_RET(0x0045708e); r_esp += 12; return;
}

void f_00457675(void) /* FUN_00457675 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457675);
    /* 00457675: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457676: mov ebp, esp */ r_ebp = r_esp;
    /* 00457678: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045767b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045767e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457680: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457683: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x457688u); f_00456d47();
    /* 00457688: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045768a: jne 0x45769a */ if (!fZ) goto L_0045769a;
L_0045768c:; BB(0x0045768c);
    /* 0045768c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045768e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457691: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x457696u); f_00456d47();
    /* 00457696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457698: je 0x45770d */ if (fZ) goto L_0045770d;
L_0045769a:; BB(0x0045769a);
    /* 0045769a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004576a1: jmp 0x4576ac */ goto L_004576ac;
L_004576a3:; BB(0x004576a3);
    /* 004576a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004576a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004576ac:; BB(0x004576ac);
    /* 004576ac: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004576b0: jge 0x45770d */ if ((fS==fO)) goto L_0045770d;
L_004576b2:; BB(0x004576b2);
    /* 004576b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004576b8: mov eax, dword ptr [edx + ecx*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 004576bf: cmp dword ptr [eax + 0x108], 0 */ {  u32 a = R32((u32)(r_eax+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004576c6: je 0x45770b */ if (fZ) goto L_0045770b;
L_004576c8:; BB(0x004576c8);
    /* 004576c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004576ce: mov eax, dword ptr [edx + ecx*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 004576d5: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 004576db: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x4576e0u); f_005d9690();
    /* 004576e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004576e2: je 0x45770b */ if (fZ) goto L_0045770b;
L_004576e4:; BB(0x004576e4);
    /* 004576e4: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004576ea: call 0x4547ac */ r_esp -= 4; W32(r_esp, 0x4576efu); f_004547ac();
    /* 004576ef: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004576f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004576f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004576f9: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 00457700: mov ecx, dword ptr [ecx + 0x108] */ r_ecx = R32((u32)(r_ecx+0x108u));
    /* 00457706: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x45770bu); f_005ea1cf();
L_0045770b:; BB(0x0045770b);
    /* 0045770b: jmp 0x4576a3 */ goto L_004576a3;
L_0045770d:; BB(0x0045770d);
    /* 0045770d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045770f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457710: ret  */ FN_RET(0x00457675); r_esp += 4; return;
}

void f_00457711(void) /* FUN_00457711 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457711);
    /* 00457711: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457712: mov ebp, esp */ r_ebp = r_esp;
    /* 00457714: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457717: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457718: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00457719: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0045771c: mov esi, dword ptr [0x6f6864] */ r_esi = R32((u32)(0x6f6864u));
    /* 00457722: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457725: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0045772a: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 0045772d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045772f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457732: cmp dword ptr [eax + 0x290], 2 */ {  u32 a = R32((u32)(r_eax+0x290u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457739: jge 0x457740 */ if ((fS==fO)) goto L_00457740;
L_0045773b:; BB(0x0045773b);
    /* 0045773b: jmp 0x4578d4 */ goto L_004578d4;
L_00457740:; BB(0x00457740);
    /* 00457740: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00457743: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00457746: cmp dword ptr [ebp - 0x54], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045774a: ja 0x4578b2 */ if ((!fC&&!fZ)) goto L_004578b2;
L_00457750:; BB(0x00457750);
    /* 00457750: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00457753: jmp dword ptr [edx*4 + 0x4578dc] */ { u32 t = R32((u32)(r_edx*4+0x4578dcu)); switch (t) { case 0x45775au: goto L_0045775a; case 0x45780au: goto L_0045780a; case 0x4577b2u: goto L_004577b2; case 0x45785fu: goto L_0045785f; default: UNSUP(0x00457753, "jump table entry is not a known target"); } }
L_0045775a:; BB(0x0045775a);
    /* 0045775a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045775c: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045775f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457760: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457763: call 0x4578ec */ r_esp -= 4; W32(r_esp, 0x457768u); f_004578ec();
    /* 00457768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045776a: je 0x4577ad */ if (fZ) goto L_004577ad;
L_0045776c:; BB(0x0045776c);
    /* 0045776c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045776e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457770: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457773: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 00457779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045777a: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457780: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x457785u); f_00454bec();
    /* 00457785: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457788: call 0x45873c */ r_esp -= 4; W32(r_esp, 0x45778du); f_0045873c();
    /* 0045778d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045778f: je 0x4577ad */ if (fZ) goto L_004577ad;
L_00457791:; BB(0x00457791);
    /* 00457791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457793: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457795: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457798: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0045779e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004577a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004577a2: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004577a8: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x4577adu); f_00454bec();
L_004577ad:; BB(0x004577ad);
    /* 004577ad: jmp 0x4578b2 */ goto L_004578b2;
L_004577b2:; BB(0x004577b2);
    /* 004577b2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004577b4: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004577b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004577b8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004577bb: call 0x4578ec */ r_esp -= 4; W32(r_esp, 0x4577c0u); f_004578ec();
    /* 004577c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004577c2: je 0x457805 */ if (fZ) goto L_00457805;
L_004577c4:; BB(0x004577c4);
    /* 004577c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004577c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004577c8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004577cb: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 004577d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004577d2: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004577d8: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x4577ddu); f_00454bec();
    /* 004577dd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004577e0: call 0x45873c */ r_esp -= 4; W32(r_esp, 0x4577e5u); f_0045873c();
    /* 004577e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004577e7: je 0x457805 */ if (fZ) goto L_00457805;
L_004577e9:; BB(0x004577e9);
    /* 004577e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004577eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004577ed: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004577f0: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 004577f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004577f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004577fa: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457800: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x457805u); f_00454bec();
L_00457805:; BB(0x00457805);
    /* 00457805: jmp 0x4578b2 */ goto L_004578b2;
L_0045780a:; BB(0x0045780a);
    /* 0045780a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045780c: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045780f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457810: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457813: call 0x4578ec */ r_esp -= 4; W32(r_esp, 0x457818u); f_004578ec();
    /* 00457818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045781a: je 0x45785d */ if (fZ) goto L_0045785d;
L_0045781c:; BB(0x0045781c);
    /* 0045781c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045781e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457820: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457823: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 00457829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045782a: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457830: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x457835u); f_00454bec();
    /* 00457835: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457838: call 0x45873c */ r_esp -= 4; W32(r_esp, 0x45783du); f_0045873c();
    /* 0045783d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045783f: je 0x45785d */ if (fZ) goto L_0045785d;
L_00457841:; BB(0x00457841);
    /* 00457841: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457843: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457845: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457848: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 0045784e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457851: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457852: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457858: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x45785du); f_00454bec();
L_0045785d:; BB(0x0045785d);
    /* 0045785d: jmp 0x4578b2 */ goto L_004578b2;
L_0045785f:; BB(0x0045785f);
    /* 0045785f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457861: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00457864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457865: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457868: call 0x4578ec */ r_esp -= 4; W32(r_esp, 0x45786du); f_004578ec();
    /* 0045786d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045786f: je 0x4578b2 */ if (fZ) goto L_004578b2;
L_00457871:; BB(0x00457871);
    /* 00457871: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457873: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457875: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457878: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 0045787e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045787f: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457885: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x45788au); f_00454bec();
    /* 0045788a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045788d: call 0x45873c */ r_esp -= 4; W32(r_esp, 0x457892u); f_0045873c();
    /* 00457892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457894: je 0x4578b2 */ if (fZ) goto L_004578b2;
L_00457896:; BB(0x00457896);
    /* 00457896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457898: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045789a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045789d: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 004578a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004578a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004578a7: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004578ad: call 0x454bec */ r_esp -= 4; W32(r_esp, 0x4578b2u); f_00454bec();
L_004578b2:; BB(0x004578b2);
    /* 004578b2: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 004578b8: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004578bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004578bc: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 004578bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004578c0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004578c3: call 0x458667 */ r_esp -= 4; W32(r_esp, 0x4578c8u); f_00458667();
    /* 004578c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004578ca: je 0x4578d4 */ if (fZ) goto L_004578d4;
L_004578cc:; BB(0x004578cc);
    /* 004578cc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004578cf: call 0x4586f8 */ r_esp -= 4; W32(r_esp, 0x4578d4u); f_004586f8();
L_004578d4:; BB(0x004578d4);
    /* 004578d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004578d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004578d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004578d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004578d9: ret 4 */ FN_RET(0x00457711); r_esp += 8; return;
}

void f_004578ec(void) /* FUN_004578ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004578ec);
    /* 004578ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004578ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004578ef: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004578f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004578f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004578f6: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004578fa: jne 0x457908 */ if (!fZ) goto L_00457908;
L_004578fc:; BB(0x004578fc);
    /* 004578fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004578ff: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 00457905: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00457908:; BB(0x00457908);
    /* 00457908: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045790b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045790c: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457912: call 0x454c6d */ r_esp -= 4; W32(r_esp, 0x457917u); f_00454c6d();
    /* 00457917: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457919: jne 0x457922 */ if (!fZ) goto L_00457922;
L_0045791b:; BB(0x0045791b);
    /* 0045791b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045791d: jmp 0x457abc */ goto L_00457abc;
L_00457922:; BB(0x00457922);
    /* 00457922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457925: call 0x45873c */ r_esp -= 4; W32(r_esp, 0x45792au); f_0045873c();
    /* 0045792a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045792c: je 0x4579ed */ if (fZ) goto L_004579ed;
L_00457932:; BB(0x00457932);
    /* 00457932: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00457936: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00457939: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045793d: ja 0x4579ed */ if ((!fC&&!fZ)) goto L_004579ed;
L_00457943:; BB(0x00457943);
    /* 00457943: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457946: jmp dword ptr [ecx*4 + 0x457ac3] */ { u32 t = R32((u32)(r_ecx*4+0x457ac3u)); switch (t) { case 0x45794du: goto L_0045794d; case 0x45799eu: goto L_0045799e; case 0x457976u: goto L_00457976; case 0x4579c6u: goto L_004579c6; case 0x457a08u: goto L_00457a08; case 0x457a65u: goto L_00457a65; case 0x457a39u: goto L_00457a39; case 0x457a91u: goto L_00457a91; default: UNSUP(0x00457946, "jump table entry is not a known target"); } }
L_0045794d:; BB(0x0045794d);
    /* 0045794d: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 00457953: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457956: movsx eax, byte ptr [edx + 0x52] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x52u));
    /* 0045795a: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457960: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457963: movsx edx, byte ptr [ecx + 0x51] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x51u));
    /* 00457967: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457969: jge 0x457974 */ if ((fS==fO)) goto L_00457974;
L_0045796b:; BB(0x0045796b);
    /* 0045796b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045796e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457971: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00457974:; BB(0x00457974);
    /* 00457974: jmp 0x4579ed */ goto L_004579ed;
L_00457976:; BB(0x00457976);
    /* 00457976: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045797c: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045797f: movsx edx, byte ptr [ecx + 0x52] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x52u));
    /* 00457983: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00457988: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045798b: movsx ecx, byte ptr [eax + 0x51] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x51u));
    /* 0045798f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457991: jle 0x45799c */ if ((fZ||fS!=fO)) goto L_0045799c;
L_00457993:; BB(0x00457993);
    /* 00457993: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00457996: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457999: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0045799c:; BB(0x0045799c);
    /* 0045799c: jmp 0x4579ed */ goto L_004579ed;
L_0045799e:; BB(0x0045799e);
    /* 0045799e: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 004579a3: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004579a6: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 004579aa: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 004579b0: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004579b3: movsx eax, byte ptr [edx + 0x46] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x46u));
    /* 004579b7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004579b9: jg 0x4579c4 */ if ((!fZ&&fS==fO)) goto L_004579c4;
L_004579bb:; BB(0x004579bb);
    /* 004579bb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004579be: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004579c1: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_004579c4:; BB(0x004579c4);
    /* 004579c4: jmp 0x4579ed */ goto L_004579ed;
L_004579c6:; BB(0x004579c6);
    /* 004579c6: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 004579cc: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004579cf: movsx eax, byte ptr [edx + 0x46] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x46u));
    /* 004579d3: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004579d9: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004579dc: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 004579e0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004579e2: jge 0x4579ed */ if ((fS==fO)) goto L_004579ed;
L_004579e4:; BB(0x004579e4);
    /* 004579e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004579e7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004579ea: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_004579ed:; BB(0x004579ed);
    /* 004579ed: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 004579f1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004579f4: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004579f8: ja 0x457aba */ if ((!fC&&!fZ)) goto L_00457aba;
L_004579fe:; BB(0x004579fe);
    /* 004579fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457a01: jmp dword ptr [edx*4 + 0x457ad3] */ { u32 t = R32((u32)(r_edx*4+0x457ad3u)); switch (t) { case 0x4579c6u: goto L_004579c6; case 0x457976u: goto L_00457976; case 0x45799eu: goto L_0045799e; case 0x45794du: goto L_0045794d; case 0x457a08u: goto L_00457a08; case 0x457a65u: goto L_00457a65; case 0x457a39u: goto L_00457a39; case 0x457a91u: goto L_00457a91; default: UNSUP(0x00457a01, "jump table entry is not a known target"); } }
L_00457a08:; BB(0x00457a08);
    /* 00457a08: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00457a0d: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457a10: movsx esi, byte ptr [eax + 0x51] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x51u));
    /* 00457a14: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00457a17: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00457a1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457a1b: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457a21: call 0x45480c */ r_esp -= 4; W32(r_esp, 0x457a26u); f_0045480c();
    /* 00457a26: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457a28: jl 0x457a34 */ if ((fS!=fO)) goto L_00457a34;
L_00457a2a:; BB(0x00457a2a);
    /* 00457a2a: mov eax, 1 */ r_eax = 0x1u;
    /* 00457a2f: jmp 0x457abc */ goto L_00457abc;
L_00457a34:; BB(0x00457a34);
    /* 00457a34: jmp 0x457aba */ goto L_00457aba;
L_00457a39:; BB(0x00457a39);
    /* 00457a39: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 00457a3f: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457a42: movsx esi, byte ptr [edx + 0x51] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x51u));
    /* 00457a46: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457a49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00457a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457a4d: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457a53: call 0x454899 */ r_esp -= 4; W32(r_esp, 0x457a58u); f_00454899();
    /* 00457a58: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457a5a: jg 0x457a63 */ if ((!fZ&&fS==fO)) goto L_00457a63;
L_00457a5c:; BB(0x00457a5c);
    /* 00457a5c: mov eax, 1 */ r_eax = 0x1u;
    /* 00457a61: jmp 0x457abc */ goto L_00457abc;
L_00457a63:; BB(0x00457a63);
    /* 00457a63: jmp 0x457aba */ goto L_00457aba;
L_00457a65:; BB(0x00457a65);
    /* 00457a65: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457a6b: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457a6e: movsx esi, byte ptr [ecx + 0x45] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 00457a72: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457a75: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00457a78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457a79: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457a7f: call 0x454a09 */ r_esp -= 4; W32(r_esp, 0x457a84u); f_00454a09();
    /* 00457a84: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457a86: jg 0x457a8f */ if ((!fZ&&fS==fO)) goto L_00457a8f;
L_00457a88:; BB(0x00457a88);
    /* 00457a88: mov eax, 1 */ r_eax = 0x1u;
    /* 00457a8d: jmp 0x457abc */ goto L_00457abc;
L_00457a8f:; BB(0x00457a8f);
    /* 00457a8f: jmp 0x457aba */ goto L_00457aba;
L_00457a91:; BB(0x00457a91);
    /* 00457a91: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 00457a96: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457a99: movsx esi, byte ptr [eax + 0x45] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 00457a9d: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00457aa0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00457aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457aa4: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457aaa: call 0x45497c */ r_esp -= 4; W32(r_esp, 0x457aafu); f_0045497c();
    /* 00457aaf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457ab1: jl 0x457aba */ if ((fS!=fO)) goto L_00457aba;
L_00457ab3:; BB(0x00457ab3);
    /* 00457ab3: mov eax, 1 */ r_eax = 0x1u;
    /* 00457ab8: jmp 0x457abc */ goto L_00457abc;
L_00457aba:; BB(0x00457aba);
    /* 00457aba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00457abc:; BB(0x00457abc);
    /* 00457abc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00457abd: mov esp, ebp */ r_esp = r_ebp;
    /* 00457abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457ac0: ret 8 */ FN_RET(0x004578ec); r_esp += 12; return;
}

void f_00457ae3(void) /* FUN_00457ae3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457ae3);
    /* 00457ae3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457ae4: mov ebp, esp */ r_ebp = r_esp;
    /* 00457ae6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457ae9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00457aec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457aef: cmp dword ptr [eax + 0x310], 0 */ {  u32 a = R32((u32)(r_eax+0x310u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457af6: jne 0x457b51 */ if (!fZ) goto L_00457b51;
L_00457af8:; BB(0x00457af8);
    /* 00457af8: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00457afa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x457affu); f_0048ab58();
    /* 00457aff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457b02: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00457b05: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b09: je 0x457b18 */ if (fZ) goto L_00457b18;
L_00457b0b:; BB(0x00457b0b);
    /* 00457b0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457b0e: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x457b13u); f_005d505b();
    /* 00457b13: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00457b16: jmp 0x457b1f */ goto L_00457b1f;
L_00457b18:; BB(0x00457b18);
    /* 00457b18: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00457b1f:; BB(0x00457b1f);
    /* 00457b1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b22: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00457b25: mov dword ptr [ecx + 0x310], edx */ W32((u32)(r_ecx+0x310u), r_edx);
    /* 00457b2b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b2e: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457b34: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b37: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00457b3a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b3d: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457b43: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b46: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00457b4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457b4e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x457b51u); call_ind(t); }
L_00457b51:; BB(0x00457b51);
    /* 00457b51: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b54: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457b5a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b5d: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00457b63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457b65: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x457b68u); call_ind(t); }
    /* 00457b68: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b6b: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457b71: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x457b76u); f_005d53bd();
    /* 00457b76: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457b79: mov ecx, dword ptr [ecx + 0x310] */ r_ecx = R32((u32)(r_ecx+0x310u));
    /* 00457b7f: call 0x5d5416 */ r_esp -= 4; W32(r_esp, 0x457b84u); f_005d5416();
    /* 00457b84: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b88: je 0x457d18 */ if (fZ) goto L_00457d18;
L_00457b8e:; BB(0x00457b8e);
    /* 00457b8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457b95: jmp 0x457ba0 */ goto L_00457ba0;
L_00457b97:; BB(0x00457b97);
    /* 00457b97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457b9a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457b9d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00457ba0:; BB(0x00457ba0);
    /* 00457ba0: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457ba4: jge 0x457d13 */ if ((fS==fO)) goto L_00457d13;
L_00457baa:; BB(0x00457baa);
    /* 00457baa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00457bb1: jmp 0x457bbc */ goto L_00457bbc;
L_00457bb3:; BB(0x00457bb3);
    /* 00457bb3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457bb6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457bb9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00457bbc:; BB(0x00457bbc);
    /* 00457bbc: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457bc0: jge 0x457d0e */ if ((fS==fO)) goto L_00457d0e;
L_00457bc6:; BB(0x00457bc6);
    /* 00457bc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457bc9: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457bcc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457bcf: cmp dword ptr [edx + ecx*4 + 0x314], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457bd7: jne 0x457c1f */ if (!fZ) goto L_00457c1f;
L_00457bd9:; BB(0x00457bd9);
    /* 00457bd9: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00457bde: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x457be3u); f_0048ab58();
    /* 00457be3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457be6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00457be9: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457bed: je 0x457c05 */ if (fZ) goto L_00457c05;
L_00457bef:; BB(0x00457bef);
    /* 00457bef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457bf1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457bf4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457bf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457bfb: call 0x458a85 */ r_esp -= 4; W32(r_esp, 0x457c00u); f_00458a85();
    /* 00457c00: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00457c03: jmp 0x457c0c */ goto L_00457c0c;
L_00457c05:; BB(0x00457c05);
    /* 00457c05: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00457c0c:; BB(0x00457c0c);
    /* 00457c0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c0f: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457c12: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457c15: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457c18: mov dword ptr [edx + ecx*4 + 0x314], eax */ W32((u32)(r_edx+r_ecx*4+0x314u), r_eax);
L_00457c1f:; BB(0x00457c1f);
    /* 00457c1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c22: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457c25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457c26: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c29: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457c2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457c2f: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 00457c36: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x457c3bu); f_005d5029();
    /* 00457c3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c3e: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457c41: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457c44: mov eax, dword ptr [edx + ecx*4 + 0x314] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 00457c4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c4c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457c4f: mov ecx, dword ptr [ecx + 0x310] */ r_ecx = R32((u32)(r_ecx+0x310u));
    /* 00457c55: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x457c5au); f_005d50ed();
    /* 00457c5a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00457c5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00457c5e: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457c62: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00457c65: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00457c66: and edx, 0xffffffab */ {  u32 a = r_edx; u32 b = 0xffffffabu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00457c69: add edx, 0x67 */ {  u32 a = r_edx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457c6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457c6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c70: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00457c71: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457c73: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457c75: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00457c78: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457c7a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457c7c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00457c7d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457c7f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00457c81: imul eax, eax, 0x65 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x65u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00457c84: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c88: push 0x1e84a5 */ { u32 v = 0x1e84a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457c8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457c90: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457c93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457c96: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457c9d: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x457ca2u); f_005e9f50();
    /* 00457ca2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457ca6: jne 0x457ccf */ if (!fZ) goto L_00457ccf;
L_00457ca8:; BB(0x00457ca8);
    /* 00457ca8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457caa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cae: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cb0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cb2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cb4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cb6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457cbb: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457cbe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457cc1: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 00457cc8: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x457ccdu); f_005d727e();
    /* 00457ccd: jmp 0x457cf4 */ goto L_00457cf4;
L_00457ccf:; BB(0x00457ccf);
    /* 00457ccf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cd1: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cd3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cd5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cd7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00457cd9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00457cdb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cdd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00457cdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ce2: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457ce5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457ce8: mov ecx, dword ptr [edx + ecx*4 + 0x314] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 00457cef: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x457cf4u); f_005d727e();
L_00457cf4:; BB(0x00457cf4);
    /* 00457cf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457cf7: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457cfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457cfd: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457d04: call 0x458d50 */ r_esp -= 4; W32(r_esp, 0x457d09u); f_00458d50();
    /* 00457d09: jmp 0x457bb3 */ goto L_00457bb3;
L_00457d0e:; BB(0x00457d0e);
    /* 00457d0e: jmp 0x457b97 */ goto L_00457b97;
L_00457d13:; BB(0x00457d13);
    /* 00457d13: jmp 0x457e2f */ goto L_00457e2f;
L_00457d18:; BB(0x00457d18);
    /* 00457d18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457d1f: jmp 0x457d2a */ goto L_00457d2a;
L_00457d21:; BB(0x00457d21);
    /* 00457d21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d24: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00457d27: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00457d2a:; BB(0x00457d2a);
    /* 00457d2a: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457d2e: jge 0x457e2f */ if ((fS==fO)) goto L_00457e2f;
L_00457d34:; BB(0x00457d34);
    /* 00457d34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457d3a: cmp dword ptr [ecx + eax*4 + 0x314], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d42: jne 0x457d84 */ if (!fZ) goto L_00457d84;
L_00457d44:; BB(0x00457d44);
    /* 00457d44: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00457d49: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x457d4eu); f_0048ab58();
    /* 00457d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457d51: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00457d54: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d58: je 0x457d6d */ if (fZ) goto L_00457d6d;
L_00457d5a:; BB(0x00457d5a);
    /* 00457d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457d5c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457d60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457d63: call 0x458a85 */ r_esp -= 4; W32(r_esp, 0x457d68u); f_00458a85();
    /* 00457d68: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00457d6b: jmp 0x457d74 */ goto L_00457d74;
L_00457d6d:; BB(0x00457d6d);
    /* 00457d6d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00457d74:; BB(0x00457d74);
    /* 00457d74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457d7a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00457d7d: mov dword ptr [ecx + eax*4 + 0x314], edx */ W32((u32)(r_ecx+r_eax*4+0x314u), r_edx);
L_00457d84:; BB(0x00457d84);
    /* 00457d84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457d88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d8b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457d8e: mov ecx, dword ptr [edx + ecx*4 + 0x314] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 00457d95: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x457d9au); f_005d5029();
    /* 00457d9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457d9d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457da0: mov edx, dword ptr [ecx + eax*4 + 0x314] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457da7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457da8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457dab: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457db1: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x457db6u); f_005d50ed();
    /* 00457db6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00457db8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00457dba: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457dbe: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00457dc1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00457dc2: and ecx, 0xffffffab */ {  u32 a = r_ecx; u32 b = 0xffffffabu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00457dc5: add ecx, 0x67 */ {  u32 a = r_ecx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457dc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457dc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457dcc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00457dcd: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457dcf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457dd1: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00457dd4: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457dd6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457dd8: imul eax, eax, 0x65 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x65u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00457ddb: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457ddf: push 0x1e84a5 */ { u32 v = 0x1e84a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00457de4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457de7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457dea: mov ecx, dword ptr [eax + edx*4 + 0x314] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x314u));
    /* 00457df1: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x457df6u); f_005e9f50();
    /* 00457df6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457df8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457dfa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457dfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457dfe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e00: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e09: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457e0c: mov ecx, dword ptr [edx + ecx*4 + 0x314] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x314u));
    /* 00457e13: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x457e18u); f_005d727e();
    /* 00457e18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457e1e: mov ecx, dword ptr [ecx + eax*4 + 0x314] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x314u));
    /* 00457e25: call 0x458d50 */ r_esp -= 4; W32(r_esp, 0x457e2au); f_00458d50();
    /* 00457e2a: jmp 0x457d21 */ goto L_00457d21;
L_00457e2f:; BB(0x00457e2f);
    /* 00457e2f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457e32: mov ecx, dword ptr [edx + 0x310] */ r_ecx = R32((u32)(r_edx+0x310u));
    /* 00457e38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457e3b: mov edx, dword ptr [eax + 0x310] */ r_edx = R32((u32)(r_eax+0x310u));
    /* 00457e41: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457e43: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x457e46u); call_ind(t); }
    /* 00457e46: mov esp, ebp */ r_esp = r_ebp;
    /* 00457e48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457e49: ret 4 */ FN_RET(0x00457ae3); r_esp += 8; return;
}

void f_00457e4c(void) /* FUN_00457e4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457e4c);
    /* 00457e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00457e4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457e50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457e51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00457e54: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457e58: jne 0x457ec1 */ if (!fZ) goto L_00457ec1;
L_00457e5a:; BB(0x00457e5a);
    /* 00457e5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e5d: mov cl, byte ptr [eax + 0x295] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x295u))) & 0xffu);
    /* 00457e63: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00457e66: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e69: mov byte ptr [edx + 0x295], cl */ W8((u32)(r_edx+0x295u), (u8)r_ecx);
    /* 00457e6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e72: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457e77u); f_00456e31();
    /* 00457e77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457e79: jne 0x457e92 */ if (!fZ) goto L_00457e92;
L_00457e7b:; BB(0x00457e7b);
    /* 00457e7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e7e: mov ecx, dword ptr [eax + 0x2bc] */ r_ecx = R32((u32)(r_eax+0x2bcu));
    /* 00457e84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e87: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00457e8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457e8f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x457e92u); call_ind(t); }
L_00457e92:; BB(0x00457e92);
    /* 00457e92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e95: mov ecx, dword ptr [eax + 0x2c0] */ r_ecx = R32((u32)(r_eax+0x2c0u));
    /* 00457e9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457e9e: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 00457ea4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457ea6: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x457ea9u); call_ind(t); }
    /* 00457ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457eab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457eae: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457eb3u); f_00456e31();
    /* 00457eb3: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00457eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457eb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457eba: call 0x45708e */ r_esp -= 4; W32(r_esp, 0x457ebfu); f_0045708e();
    /* 00457ebf: jmp 0x457f33 */ goto L_00457f33;
L_00457ec1:; BB(0x00457ec1);
    /* 00457ec1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ec4: mov cl, byte ptr [eax + 0x295] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x295u))) & 0xffu);
    /* 00457eca: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00457ecd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ed0: mov byte ptr [edx + 0x295], cl */ W8((u32)(r_edx+0x295u), (u8)r_ecx);
    /* 00457ed6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ed9: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457edeu); f_00456e31();
    /* 00457ede: mov esi, eax */ r_esi = r_eax;
    /* 00457ee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ee3: call 0x456e46 */ r_esp -= 4; W32(r_esp, 0x457ee8u); f_00456e46();
    /* 00457ee8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457eeb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457eed: jne 0x457f06 */ if (!fZ) goto L_00457f06;
L_00457eef:; BB(0x00457eef);
    /* 00457eef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457ef2: mov ecx, dword ptr [eax + 0x2c0] */ r_ecx = R32((u32)(r_eax+0x2c0u));
    /* 00457ef8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457efb: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 00457f01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457f03: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x457f06u); call_ind(t); }
L_00457f06:; BB(0x00457f06);
    /* 00457f06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457f09: mov ecx, dword ptr [eax + 0x2bc] */ r_ecx = R32((u32)(r_eax+0x2bcu));
    /* 00457f0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457f12: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00457f18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457f1a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x457f1du); call_ind(t); }
    /* 00457f1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457f1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457f22: call 0x456e31 */ r_esp -= 4; W32(r_esp, 0x457f27u); f_00456e31();
    /* 00457f27: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00457f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457f2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457f2e: call 0x45708e */ r_esp -= 4; W32(r_esp, 0x457f33u); f_0045708e();
L_00457f33:; BB(0x00457f33);
    /* 00457f33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00457f34: mov esp, ebp */ r_esp = r_ebp;
    /* 00457f36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457f37: ret 4 */ FN_RET(0x00457e4c); r_esp += 8; return;
}

void f_00457f3a(void) /* FUN_00457f3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457f3a);
    /* 00457f3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457f3b: mov ebp, esp */ r_ebp = r_esp;
    /* 00457f3d: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457f41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00457f42: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00457f45: mov esi, dword ptr [0x6f6864] */ r_esi = R32((u32)(0x6f6864u));
    /* 00457f4b: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00457f4e: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00457f53: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 00457f56: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00457f58: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457f5b: cmp dword ptr [eax + 0x290], 2 */ {  u32 a = R32((u32)(r_eax+0x290u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457f62: jle 0x457fa3 */ if ((fZ||fS!=fO)) goto L_00457fa3;
L_00457f64:; BB(0x00457f64);
    /* 00457f64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457f66: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457f69: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 00457f6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457f70: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457f76: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x457f7bu); f_00454351();
    /* 00457f7b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457f7e: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 00457f84: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x457f89u); f_005d53bd();
    /* 00457f89: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457f8c: mov ecx, dword ptr [ecx + 0x310] */ r_ecx = R32((u32)(r_ecx+0x310u));
    /* 00457f92: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x457f97u); f_005d53bd();
    /* 00457f97: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457f9a: mov byte ptr [edx + 0x294], 0xff */ W8((u32)(r_edx+0x294u), 0xffu);
    /* 00457fa1: jmp 0x45801e */ goto L_0045801e;
L_00457fa3:; BB(0x00457fa3);
    /* 00457fa3: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457fa6: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00457fac: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x457fb1u); f_005d51df();
    /* 00457fb1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457fb4: jge 0x457fc8 */ if ((fS==fO)) goto L_00457fc8;
L_00457fb6:; BB(0x00457fb6);
    /* 00457fb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fb8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457fbb: mov ecx, dword ptr [ecx + 0x310] */ r_ecx = R32((u32)(r_ecx+0x310u));
    /* 00457fc1: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x457fc6u); f_005d5253();
    /* 00457fc6: jmp 0x457fd6 */ goto L_00457fd6;
L_00457fc8:; BB(0x00457fc8);
    /* 00457fc8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457fcb: mov ecx, dword ptr [edx + 0x310] */ r_ecx = R32((u32)(r_edx+0x310u));
    /* 00457fd1: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x457fd6u); f_005d53bd();
L_00457fd6:; BB(0x00457fd6);
    /* 00457fd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fd8: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00457fde: call 0x454c8d */ r_esp -= 4; W32(r_esp, 0x457fe3u); f_00454c8d();
    /* 00457fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fe6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457fe9: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 00457fef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457ff0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457ff3: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457ff9: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x457ffeu); f_00459e15();
    /* 00457ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457fff: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458002: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 00458008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458009: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045800f: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458014u); f_00454351();
    /* 00458014: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458017: mov byte ptr [ecx + 0x294], 0 */ W8((u32)(r_ecx+0x294u), 0x0u);
L_0045801e:; BB(0x0045801e);
    /* 0045801e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00458020: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458023: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x458028u); f_00456d47();
    /* 00458028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045802a: jne 0x45803a */ if (!fZ) goto L_0045803a;
L_0045802c:; BB(0x0045802c);
    /* 0045802c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045802e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458031: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x458036u); f_00456d47();
    /* 00458036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458038: je 0x458058 */ if (fZ) goto L_00458058;
L_0045803a:; BB(0x0045803a);
    /* 0045803a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045803c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045803e: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458044: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458049u); f_00454351();
    /* 00458049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045804b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045804d: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458053: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458058u); f_00454351();
L_00458058:; BB(0x00458058);
    /* 00458058: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045805a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045805d: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x458062u); f_00456d47();
    /* 00458062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458064: jne 0x458074 */ if (!fZ) goto L_00458074;
L_00458066:; BB(0x00458066);
    /* 00458066: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00458068: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045806b: call 0x456d47 */ r_esp -= 4; W32(r_esp, 0x458070u); f_00456d47();
    /* 00458070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458072: je 0x458092 */ if (fZ) goto L_00458092;
L_00458074:; BB(0x00458074);
    /* 00458074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458076: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00458078: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045807e: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458083u); f_00454351();
    /* 00458083: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458085: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00458087: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045808d: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458092u); f_00454351();
L_00458092:; BB(0x00458092);
    /* 00458092: mov edx, dword ptr [0x6f6864] */ r_edx = R32((u32)(0x6f6864u));
    /* 00458098: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045809b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045809c: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0045809f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004580a0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004580a3: call 0x458667 */ r_esp -= 4; W32(r_esp, 0x4580a8u); f_00458667();
    /* 004580a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004580aa: je 0x4580b4 */ if (fZ) goto L_004580b4;
L_004580ac:; BB(0x004580ac);
    /* 004580ac: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004580af: call 0x4586f8 */ r_esp -= 4; W32(r_esp, 0x4580b4u); f_004586f8();
L_004580b4:; BB(0x004580b4);
    /* 004580b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004580b7: call 0x456da4 */ r_esp -= 4; W32(r_esp, 0x4580bcu); f_00456da4();
    /* 004580bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004580bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004580be: mov esp, ebp */ r_esp = r_ebp;
    /* 004580c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004580c1: ret 4 */ FN_RET(0x00457f3a); r_esp += 8; return;
}

void f_004580c4(void) /* FUN_004580c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004580c4);
    /* 004580c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004580c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004580c7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004580ca: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004580cd: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004580d3: call 0x4547ac */ r_esp -= 4; W32(r_esp, 0x4580d8u); f_004547ac();
    /* 004580d8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004580db: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004580de: je 0x4580e8 */ if (fZ) goto L_004580e8;
L_004580e0:; BB(0x004580e0);
    /* 004580e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004580e3: call 0x4586f8 */ r_esp -= 4; W32(r_esp, 0x4580e8u); f_004586f8();
L_004580e8:; BB(0x004580e8);
    /* 004580e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004580eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004580ec: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004580f2: call 0x45478e */ r_esp -= 4; W32(r_esp, 0x4580f7u); f_0045478e();
    /* 004580f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004580f9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004580fb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004580fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004580ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458102: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458105: mov ecx, dword ptr [eax + edx*4 + 0x2d4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2d4u));
    /* 0045810c: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x458111u); f_005d5ff2();
    /* 00458111: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458118: jmp 0x458123 */ goto L_00458123;
L_0045811a:; BB(0x0045811a);
    /* 0045811a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045811d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458120: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00458123:; BB(0x00458123);
    /* 00458123: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458127: jge 0x45814d */ if ((fS==fO)) goto L_0045814d;
L_00458129:; BB(0x00458129);
    /* 00458129: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045812c: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045812f: je 0x45814b */ if (fZ) goto L_0045814b;
L_00458131:; BB(0x00458131);
    /* 00458131: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00458133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458135: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458137: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458139: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045813c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045813f: mov ecx, dword ptr [ecx + eax*4 + 0x2d4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2d4u));
    /* 00458146: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x45814bu); f_005d5ff2();
L_0045814b:; BB(0x0045814b);
    /* 0045814b: jmp 0x45811a */ goto L_0045811a;
L_0045814d:; BB(0x0045814d);
    /* 0045814d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458154: jmp 0x45815f */ goto L_0045815f;
L_00458156:; BB(0x00458156);
    /* 00458156: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458159: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045815c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045815f:; BB(0x0045815f);
    /* 0045815f: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458163: jge 0x4581a8 */ if ((fS==fO)) goto L_004581a8;
L_00458165:; BB(0x00458165);
    /* 00458165: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458168: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045816b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045816c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045816f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458173: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458176: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045817a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045817d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458181: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458184: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458188: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045818b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045818c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045818f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458190: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458194: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458197: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045819a: mov ecx, dword ptr [eax + edx*4 + 0x384] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x384u));
    /* 004581a1: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x4581a6u); f_005d727e();
    /* 004581a6: jmp 0x458156 */ goto L_00458156;
L_004581a8:; BB(0x004581a8);
    /* 004581a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004581ab: call 0x457675 */ r_esp -= 4; W32(r_esp, 0x4581b0u); f_00457675();
    /* 004581b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004581b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004581b3: ret 4 */ FN_RET(0x004580c4); r_esp += 8; return;
}

void f_004581b6(void) /* FUN_004581b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004581b6);
    /* 004581b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004581b7: mov ebp, esp */ r_ebp = r_esp;
    /* 004581b9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004581bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004581bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004581c2: call 0x4586f8 */ r_esp -= 4; W32(r_esp, 0x4581c7u); f_004586f8();
    /* 004581c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004581c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004581cc: call 0x45830d */ r_esp -= 4; W32(r_esp, 0x4581d1u); f_0045830d();
    /* 004581d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004581d3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4581d8u); f_0060ee31();
    /* 004581d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004581db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004581dc: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004581e2: call 0x45478e */ r_esp -= 4; W32(r_esp, 0x4581e7u); f_0045478e();
    /* 004581e7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004581ee: jmp 0x4581f9 */ goto L_004581f9;
L_004581f0:; BB(0x004581f0);
    /* 004581f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004581f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004581f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004581f9:; BB(0x004581f9);
    /* 004581f9: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004581fd: jge 0x4582e4 */ if ((fS==fO)) goto L_004582e4;
L_00458203:; BB(0x00458203);
    /* 00458203: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00458205: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x45820au); f_0060ee31();
    /* 0045820a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045820d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045820f: je 0x45821f */ if (fZ) goto L_0045821f;
L_00458211:; BB(0x00458211);
    /* 00458211: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458215: je 0x45821d */ if (fZ) goto L_0045821d;
L_00458217:; BB(0x00458217);
    /* 00458217: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045821b: jne 0x45821f */ if (!fZ) goto L_0045821f;
L_0045821d:; BB(0x0045821d);
    /* 0045821d: jmp 0x4581f0 */ goto L_004581f0;
L_0045821f:; BB(0x0045821f);
    /* 0045821f: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458223: jne 0x45825d */ if (!fZ) goto L_0045825d;
L_00458225:; BB(0x00458225);
    /* 00458225: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458229: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045822c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045822d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458230: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458236: call 0x459f78 */ r_esp -= 4; W32(r_esp, 0x45823bu); f_00459f78();
    /* 0045823b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045823e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458242: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458245: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458246: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045824a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045824d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458253: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458258u); f_00459e15();
    /* 00458258: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045825b: jmp 0x45828f */ goto L_0045828f;
L_0045825d:; BB(0x0045825d);
    /* 0045825d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045825f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458262: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458263: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458266: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045826c: call 0x459f78 */ r_esp -= 4; W32(r_esp, 0x458271u); f_00459f78();
    /* 00458271: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458274: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458276: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458279: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045827a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045827d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045827e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458281: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458287: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x45828cu); f_00459e15();
    /* 0045828c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045828f:; BB(0x0045828f);
    /* 0045828f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458293: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458296: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458297: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045829d: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x4582a2u); f_00454351();
    /* 004582a2: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004582a6: je 0x4582ae */ if (fZ) goto L_004582ae;
L_004582a8:; BB(0x004582a8);
    /* 004582a8: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004582ac: jne 0x4582df */ if (!fZ) goto L_004582df;
L_004582ae:; BB(0x004582ae);
    /* 004582ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004582b1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004582b4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004582b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004582b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004582bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004582bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004582c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004582c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004582c4: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004582ca: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x4582cfu); f_00459e15();
    /* 004582cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004582d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004582d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004582d4: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004582da: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x4582dfu); f_00454351();
L_004582df:; BB(0x004582df);
    /* 004582df: jmp 0x4581f0 */ goto L_004581f0;
L_004582e4:; BB(0x004582e4);
    /* 004582e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004582e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004582e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004582eb: call 0x45708e */ r_esp -= 4; W32(r_esp, 0x4582f0u); f_0045708e();
    /* 004582f0: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 004582f6: call 0x4547ac */ r_esp -= 4; W32(r_esp, 0x4582fbu); f_004547ac();
    /* 004582fb: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004582fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004582ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00458302: call 0x4580c4 */ r_esp -= 4; W32(r_esp, 0x458307u); f_004580c4();
    /* 00458307: mov esp, ebp */ r_esp = r_ebp;
    /* 00458309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045830a: ret 4 */ FN_RET(0x004581b6); r_esp += 8; return;
}

void f_0045830d(void) /* FUN_0045830d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045830d);
    /* 0045830d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045830e: mov ebp, esp */ r_ebp = r_esp;
    /* 00458310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458311: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458314: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045831a: call 0x454373 */ r_esp -= 4; W32(r_esp, 0x45831fu); f_00454373();
    /* 0045831f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458321: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458323: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458325: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458328: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045832e: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458333u); f_00459e15();
    /* 00458333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458334: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458336: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 0045833c: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458341u); f_00454351();
    /* 00458341: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458343: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458345: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045834a: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458350: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458355u); f_00459e15();
    /* 00458355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458356: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458358: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045835a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045835d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458363: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x458368u); f_00459e15();
    /* 00458368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458369: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045836b: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458371: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458376u); f_00454351();
    /* 00458376: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458378: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045837a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045837c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045837f: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458385: call 0x459e15 */ r_esp -= 4; W32(r_esp, 0x45838au); f_00459e15();
    /* 0045838a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045838b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045838d: mov ecx, dword ptr [0x6f6864] */ r_ecx = R32((u32)(0x6f6864u));
    /* 00458393: call 0x454351 */ r_esp -= 4; W32(r_esp, 0x458398u); f_00454351();
    /* 00458398: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045839a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045839d: mov ecx, dword ptr [eax + 0x2e4] */ r_ecx = R32((u32)(r_eax+0x2e4u));
    /* 004583a3: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x4583a8u); f_005d5253();
    /* 004583a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004583aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004583ad: call 0x456a5a */ r_esp -= 4; W32(r_esp, 0x4583b2u); f_00456a5a();
    /* 004583b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004583b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004583b7: call 0x4580c4 */ r_esp -= 4; W32(r_esp, 0x4583bcu); f_004580c4();
    /* 004583bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004583bf: call 0x458710 */ r_esp -= 4; W32(r_esp, 0x4583c4u); f_00458710();
    /* 004583c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004583c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004583c7: ret 4 */ FN_RET(0x0045830d); r_esp += 8; return;
}

void f_004583ca(void) /* FUN_004583ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004583ca);
    /* 004583ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004583cb: mov ebp, esp */ r_ebp = r_esp;
    /* 004583cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004583ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004583d1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004583d3: call 0x61d7da */ r_esp -= 4; W32(r_esp, 0x4583d8u); f_0061d7da();
    /* 004583d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004583db: mov esp, ebp */ r_esp = r_ebp;
    /* 004583dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004583de: ret 4 */ FN_RET(0x004583ca); r_esp += 8; return;
}

void f_004583e1(void) /* FUN_004583e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004583e1);
    /* 004583e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004583e2: mov ebp, esp */ r_ebp = r_esp;
    /* 004583e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004583e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004583e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004583ea: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004583ef: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004583f2: call 0x44ae5c */ r_esp -= 4; W32(r_esp, 0x4583f7u); f_0044ae5c();
    /* 004583f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004583f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004583fa: ret 4 */ FN_RET(0x004583e1); r_esp += 8; return;
}

void f_004583fd(void) /* FUN_004583fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004583fd);
    /* 004583fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004583fe: mov ebp, esp */ r_ebp = r_esp;
    /* 00458400: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458401: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458404: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458406: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0045840b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0045840e: call 0x44ae5c */ r_esp -= 4; W32(r_esp, 0x458413u); f_0044ae5c();
    /* 00458413: mov esp, ebp */ r_esp = r_ebp;
    /* 00458415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458416: ret 4 */ FN_RET(0x004583fd); r_esp += 8; return;
}

void f_00458419(void) /* FUN_00458419 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458419);
    /* 00458419: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045841a: mov ebp, esp */ r_ebp = r_esp;
    /* 0045841c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045841d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458420: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458423: call 0x458728 */ r_esp -= 4; W32(r_esp, 0x458428u); f_00458728();
    /* 00458428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045842a: je 0x45845e */ if (fZ) goto L_0045845e;
L_0045842c:; BB(0x0045842c);
    /* 0045842c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045842e: push 0x67ac78 */ { u32 v = 0x67ac78u; r_esp -= 4; W32(r_esp, v); }
    /* 00458433: push 0x67ac80 */ { u32 v = 0x67ac80u; r_esp -= 4; W32(r_esp, v); }
    /* 00458438: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x45843du); f_0060f9d8();
    /* 0045843d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458440: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458443: jne 0x45845e */ if (!fZ) goto L_0045845e;
L_00458445:; BB(0x00458445);
    /* 00458445: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458448: mov dword ptr [eax + 0x298], 1 */ W32((u32)(r_eax+0x298u), 0x1u);
    /* 00458452: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458454: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458457: call 0x4583fd */ r_esp -= 4; W32(r_esp, 0x45845cu); f_004583fd();
    /* 0045845c: jmp 0x45846c */ goto L_0045846c;
L_0045845e:; BB(0x0045845e);
    /* 0045845e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00458464: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00458467: call 0x44af72 */ r_esp -= 4; W32(r_esp, 0x45846cu); f_0044af72();
L_0045846c:; BB(0x0045846c);
    /* 0045846c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045846e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045846f: ret 4 */ FN_RET(0x00458419); r_esp += 8; return;
}

void f_00458472(void) /* FUN_00458472 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458472);
    /* 00458472: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458473: mov ebp, esp */ r_ebp = r_esp;
    /* 00458475: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045847b: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 00458481: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458485: push 0x67ac90 */ { u32 v = 0x67ac90u; r_esp -= 4; W32(r_esp, v); }
    /* 0045848a: lea ecx, [ebp - 0x124] */ r_ecx = (u32)(r_ebp+0xfffffedcu);
    /* 00458490: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458491: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x458496u); f_00624050();
    /* 00458496: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458499: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 0045849f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004584a0: push 0x67ac98 */ { u32 v = 0x67ac98u; r_esp -= 4; W32(r_esp, v); }
    /* 004584a5: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 004584aa: push 0x67ac9c */ { u32 v = 0x67ac9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004584af: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004584b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004584b6: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4584bbu); f_00624050();
    /* 004584bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004584be: push 0x67aca4 */ { u32 v = 0x67aca4u; r_esp -= 4; W32(r_esp, v); }
    /* 004584c3: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 004584c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004584ca: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x4584cfu); f_006243c0();
    /* 004584cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004584d2: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 004584d8: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004584df: je 0x45850c */ if (fZ) goto L_0045850c;
L_004584e1:; BB(0x004584e1);
    /* 004584e1: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004584e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004584e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004584ea: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004584ec: mov eax, dword ptr [0x6f6864] */ r_eax = R32((u32)(0x6f6864u));
    /* 004584f1: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004584f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004584f5: call 0x624f00 */ r_esp -= 4; W32(r_esp, 0x4584fau); f_00624f00();
    /* 004584fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004584fd: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00458503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458504: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x458509u); f_006241d0();
    /* 00458509: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045850c:; BB(0x0045850c);
    /* 0045850c: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458513: jne 0x458544 */ if (!fZ) goto L_00458544;
L_00458515:; BB(0x00458515);
    /* 00458515: cmp dword ptr [0x6f6f34], 0 */ {  u32 a = R32((u32)(0x6f6f34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045851c: jne 0x458544 */ if (!fZ) goto L_00458544;
L_0045851e:; BB(0x0045851e);
    /* 0045851e: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00458524: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458525: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0045852b: call 0x460f59 */ r_esp -= 4; W32(r_esp, 0x458530u); f_00460f59();
    /* 00458530: mov ecx, eax */ r_ecx = r_eax;
    /* 00458532: call 0x460f71 */ r_esp -= 4; W32(r_esp, 0x458537u); f_00460f71();
    /* 00458537: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0045853d: call 0x460f66 */ r_esp -= 4; W32(r_esp, 0x458542u); f_00460f66();
    /* 00458542: jmp 0x45855f */ goto L_0045855f;
L_00458544:; BB(0x00458544);
    /* 00458544: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045854b: je 0x45855f */ if (fZ) goto L_0045855f;
L_0045854d:; BB(0x0045854d);
    /* 0045854d: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 00458553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458554: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 0045855a: call 0x4878b9 */ r_esp -= 4; W32(r_esp, 0x45855fu); f_004878b9();
L_0045855f:; BB(0x0045855f);
    /* 0045855f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00458565: call 0x458710 */ r_esp -= 4; W32(r_esp, 0x45856au); f_00458710();
    /* 0045856a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045856c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045856d: ret 4 */ FN_RET(0x00458472); r_esp += 8; return;
}

