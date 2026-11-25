#include "protos.h"

void f_0061a7b6(void) /* FUN_0061a7b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a7b6);
    /* 0061a7b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a7b7: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a7b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a7bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a7bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a7c2: call 0x5d6575 */ r_esp -= 4; W32(r_esp, 0x61a7c7u); f_005d6575();
    /* 0061a7c7: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a7cc: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a7d0: je 0x61a86f */ if (fZ) goto L_0061a86f;
L_0061a7d6:; BB(0x0061a7d6);
    /* 0061a7d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a7d9: call 0x61a7a2 */ r_esp -= 4; W32(r_esp, 0x61a7deu); f_0061a7a2();
    /* 0061a7de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061a7e1: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061a7e5: ja 0x61a86f */ if ((!fC&&!fZ)) goto L_0061a86f;
L_0061a7eb:; BB(0x0061a7eb);
    /* 0061a7eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061a7ee: jmp dword ptr [ecx*4 + 0x61a873] */ { u32 t = R32((u32)(r_ecx*4+0x61a873u)); switch (t) { case 0x61a7f5u: goto L_0061a7f5; case 0x61a80au: goto L_0061a80a; case 0x61a81eu: goto L_0061a81e; case 0x61a833u: goto L_0061a833; case 0x61a848u: goto L_0061a848; case 0x61a85cu: goto L_0061a85c; default: UNSUP(0x0061a7ee, "jump table entry is not a known target"); } }
L_0061a7f5:; BB(0x0061a7f5);
    /* 0061a7f5: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a7fa: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a800: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0061a803: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a808u); f_00444067();
    /* 0061a808: jmp 0x61a86f */ goto L_0061a86f;
L_0061a80a:; BB(0x0061a80a);
    /* 0061a80a: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a80f: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a814: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0061a817: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a81cu); f_00444067();
    /* 0061a81c: jmp 0x61a86f */ goto L_0061a86f;
L_0061a81e:; BB(0x0061a81e);
    /* 0061a81e: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a823: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061a829: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0061a82c: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a831u); f_00444067();
    /* 0061a831: jmp 0x61a86f */ goto L_0061a86f;
L_0061a833:; BB(0x0061a833);
    /* 0061a833: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a838: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a83e: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0061a841: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a846u); f_00444067();
    /* 0061a846: jmp 0x61a86f */ goto L_0061a86f;
L_0061a848:; BB(0x0061a848);
    /* 0061a848: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a84d: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a852: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0061a855: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a85au); f_00444067();
    /* 0061a85a: jmp 0x61a86f */ goto L_0061a86f;
L_0061a85c:; BB(0x0061a85c);
    /* 0061a85c: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a861: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061a867: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0061a86a: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x61a86fu); f_00444067();
L_0061a86f:; BB(0x0061a86f);
    /* 0061a86f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a872: ret  */ FN_RET(0x0061a7b6); r_esp += 4; return;
}

void f_0061a88b(void) /* FUN_0061a88b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a88b);
    /* 0061a88b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a88c: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a88e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a891: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a894: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a897: call 0x5d650a */ r_esp -= 4; W32(r_esp, 0x61a89cu); f_005d650a();
    /* 0061a89c: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a8a1: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a8a5: je 0x61a944 */ if (fZ) goto L_0061a944;
L_0061a8ab:; BB(0x0061a8ab);
    /* 0061a8ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a8ae: call 0x61a7a2 */ r_esp -= 4; W32(r_esp, 0x61a8b3u); f_0061a7a2();
    /* 0061a8b3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061a8b6: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061a8ba: ja 0x61a944 */ if ((!fC&&!fZ)) goto L_0061a944;
L_0061a8c0:; BB(0x0061a8c0);
    /* 0061a8c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061a8c3: jmp dword ptr [ecx*4 + 0x61a948] */ { u32 t = R32((u32)(r_ecx*4+0x61a948u)); switch (t) { case 0x61a8cau: goto L_0061a8ca; case 0x61a8dfu: goto L_0061a8df; case 0x61a8f3u: goto L_0061a8f3; case 0x61a908u: goto L_0061a908; case 0x61a91du: goto L_0061a91d; case 0x61a931u: goto L_0061a931; default: UNSUP(0x0061a8c3, "jump table entry is not a known target"); } }
L_0061a8ca:; BB(0x0061a8ca);
    /* 0061a8ca: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a8cf: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a8d5: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0061a8d8: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a8ddu); f_00443fda();
    /* 0061a8dd: jmp 0x61a944 */ goto L_0061a944;
L_0061a8df:; BB(0x0061a8df);
    /* 0061a8df: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a8e4: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a8e9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0061a8ec: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a8f1u); f_00443fda();
    /* 0061a8f1: jmp 0x61a944 */ goto L_0061a944;
L_0061a8f3:; BB(0x0061a8f3);
    /* 0061a8f3: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a8f8: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061a8fe: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0061a901: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a906u); f_00443fda();
    /* 0061a906: jmp 0x61a944 */ goto L_0061a944;
L_0061a908:; BB(0x0061a908);
    /* 0061a908: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a90d: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a913: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0061a916: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a91bu); f_00443fda();
    /* 0061a91b: jmp 0x61a944 */ goto L_0061a944;
L_0061a91d:; BB(0x0061a91d);
    /* 0061a91d: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a922: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a927: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0061a92a: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a92fu); f_00443fda();
    /* 0061a92f: jmp 0x61a944 */ goto L_0061a944;
L_0061a931:; BB(0x0061a931);
    /* 0061a931: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a936: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061a93c: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0061a93f: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x61a944u); f_00443fda();
L_0061a944:; BB(0x0061a944);
    /* 0061a944: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a947: ret  */ FN_RET(0x0061a88b); r_esp += 4; return;
}

void f_0061a960(void) /* FUN_0061a960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a960);
    /* 0061a960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a961: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a96a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x61a96fu); f_005d5d20();
    /* 0061a96f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a972: mov dword ptr [eax], 0x63cb84 */ W32((u32)(r_eax), 0x63cb84u);
    /* 0061a978: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a97b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a97d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a97e: ret  */ FN_RET(0x0061a960); r_esp += 4; return;
}

void f_0061a97f(void) /* FUN_0061a97f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a97f);
    /* 0061a97f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a980: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a982: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a983: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a989: mov dword ptr [eax], 0x63cb84 */ W32((u32)(r_eax), 0x63cb84u);
    /* 0061a98f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a992: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x61a997u); f_005d5dfb();
    /* 0061a997: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a99a: ret  */ FN_RET(0x0061a97f); r_esp += 4; return;
}

void f_0061a99b(void) /* FUN_0061a99b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a99b);
    /* 0061a99b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a99c: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a99e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a99f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a9a2: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a9a7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061a9aa: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x61a9afu); f_005e63b4();
    /* 0061a9af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a9b2: jne 0x61a9e5 */ if (!fZ) goto L_0061a9e5;
L_0061a9b4:; BB(0x0061a9b4);
    /* 0061a9b4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9b6: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061a9bc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061a9bf: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a9c5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061a9c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061a9ca: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61a9cdu); call_ind(t); }
    /* 0061a9cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9cf: mov eax, dword ptr [0x711150] */ r_eax = R32((u32)(0x711150u));
    /* 0061a9d4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061a9d7: mov edx, dword ptr [0x711150] */ r_edx = R32((u32)(0x711150u));
    /* 0061a9dd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061a9e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061a9e2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61a9e5u); call_ind(t); }
L_0061a9e5:; BB(0x0061a9e5);
    /* 0061a9e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a9e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a9e8: ret  */ FN_RET(0x0061a99b); r_esp += 4; return;
}

void f_0061aa0e(void) /* FUN_0061aa0e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061aa0e);
    /* 0061aa0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa0f: mov ebp, esp */ r_ebp = r_esp;
    /* 0061aa11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa12: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061aa15: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061aa1a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061aa1d: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061aa23: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061aa26: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 0061aa2c: mov ecx, dword ptr [ecx + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x4cu));
    /* 0061aa30: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061aa35: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061aa38: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0061aa3e: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061aa44: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0061aa47: mov eax, dword ptr [edx + eax*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4cu));
    /* 0061aa4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061aa4d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x61aa50u); call_ind(t); }
    /* 0061aa50: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061aa55: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061aa58: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061aa5e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061aa61: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 0061aa67: mov ecx, dword ptr [ecx + edx*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x38u));
    /* 0061aa6b: call 0x615707 */ r_esp -= 4; W32(r_esp, 0x61aa70u); f_00615707();
    /* 0061aa70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aa73: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x61aa78u); f_005d765a();
    /* 0061aa78: mov esp, ebp */ r_esp = r_ebp;
    /* 0061aa7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061aa7b: ret  */ FN_RET(0x0061aa0e); r_esp += 4; return;
}

void f_0061aa7c(void) /* FUN_0061aa7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061aa7c);
    /* 0061aa7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa7d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061aa7f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061aa82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061aa85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061aa88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aa8c: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x61aa91u); f_005e626d();
    /* 0061aa91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aa94: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0061aa97: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061aa9a: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061aa9e: ja 0x61ab19 */ if ((!fC&&!fZ)) goto L_0061ab19;
L_0061aaa0:; BB(0x0061aaa0);
    /* 0061aaa0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061aaa3: jmp dword ptr [eax*4 + 0x61ab1f] */ { u32 t = R32((u32)(r_eax*4+0x61ab1fu)); switch (t) { case 0x61aaaau: goto L_0061aaaa; case 0x61aaccu: goto L_0061aacc; case 0x61aae0u: goto L_0061aae0; case 0x61aafcu: goto L_0061aafc; default: UNSUP(0x0061aaa3, "jump table entry is not a known target"); } }
L_0061aaaa:; BB(0x0061aaaa);
    /* 0061aaaa: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061aab0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061aab3: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 0061aabd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aabf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aac2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061aac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aac7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61aacau); call_ind(t); }
    /* 0061aaca: jmp 0x61ab19 */ goto L_0061ab19;
L_0061aacc:; BB(0x0061aacc);
    /* 0061aacc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aacf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aad0: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061aad6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061aad9: call 0x61998a */ r_esp -= 4; W32(r_esp, 0x61aadeu); f_0061998a();
    /* 0061aade: jmp 0x61ab19 */ goto L_0061ab19;
L_0061aae0:; BB(0x0061aae0);
    /* 0061aae0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aae2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aae5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061aae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aaea: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x61aaedu); call_ind(t); }
    /* 0061aaed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aaef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aaf2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061aaf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aaf7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61aafau); call_ind(t); }
    /* 0061aafa: jmp 0x61ab19 */ goto L_0061ab19;
L_0061aafc:; BB(0x0061aafc);
    /* 0061aafc: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061ab01: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061ab04: call 0x619aae */ r_esp -= 4; W32(r_esp, 0x61ab09u); f_00619aae();
    /* 0061ab09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab0b: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061ab11: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061ab14: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x61ab19u); f_005e62ca();
L_0061ab19:; BB(0x0061ab19);
    /* 0061ab19: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ab1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ab1c: ret 4 */ FN_RET(0x0061aa7c); r_esp += 8; return;
}

void f_0061ab2f(void) /* FUN_0061ab2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ab2f);
    /* 0061ab2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab30: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ab32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ab36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ab39: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x61ab3eu); f_005e9d30();
    /* 0061ab3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ab41: mov dword ptr [eax], 0x63cc0c */ W32((u32)(r_eax), 0x63cc0cu);
    /* 0061ab47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ab4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ab4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ab4d: ret  */ FN_RET(0x0061ab2f); r_esp += 4; return;
}

void f_0061ab4e(void) /* FUN_0061ab4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ab4e);
    /* 0061ab4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab4f: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ab51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ab55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ab58: mov dword ptr [eax], 0x63cc0c */ W32((u32)(r_eax), 0x63cc0cu);
    /* 0061ab5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ab61: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x61ab66u); f_005e9dde();
    /* 0061ab66: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ab68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ab69: ret  */ FN_RET(0x0061ab4e); r_esp += 4; return;
}

void f_0061ab6a(void) /* FUN_0061ab6a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ab6a);
    /* 0061ab6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab6b: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ab6d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ab70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab71: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061ab74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ab77: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ab7b: jne 0x61ab97 */ if (!fZ) goto L_0061ab97;
L_0061ab7d:; BB(0x0061ab7d);
    /* 0061ab7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ab80: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0061ab83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ab87: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0061ab8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ab8e: call 0x5ea4a2 */ r_esp -= 4; W32(r_esp, 0x61ab93u); f_005ea4a2();
    /* 0061ab93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ab95: jne 0x61aba2 */ if (!fZ) goto L_0061aba2;
L_0061ab97:; BB(0x0061ab97);
    /* 0061ab97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ab9a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061ab9d: jmp 0x61ace4 */ goto L_0061ace4;
L_0061aba2:; BB(0x0061aba2);
    /* 0061aba2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061aba5: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061aba8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061abab: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061abaf: je 0x61abb6 */ if (fZ) goto L_0061abb6;
L_0061abb1:; BB(0x0061abb1);
    /* 0061abb1: jmp 0x61acde */ goto L_0061acde;
L_0061abb6:; BB(0x0061abb6);
    /* 0061abb6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061abb9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0061abbc: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061abbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061abc1: je 0x61ac57 */ if (fZ) goto L_0061ac57;
L_0061abc7:; BB(0x0061abc7);
    /* 0061abc7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061abcc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abcf: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x61abd2u); call_ind(t); }
    /* 0061abd2: mov esi, eax */ r_esi = r_eax;
    /* 0061abd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abd7: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x61abdcu); f_005d98c3();
    /* 0061abdc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061abdd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061abdf: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061abe1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061abe3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061abe6: cmp dword ptr [eax + 0xc], esi */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061abe9: jge 0x61ac22 */ if ((fS==fO)) goto L_0061ac22;
L_0061abeb:; BB(0x0061abeb);
    /* 0061abeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abee: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0061abf1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061abf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abf7: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0061abfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061abfd: cmp dword ptr [ecx + 0x6c], 2 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ac01: jge 0x61ac0d */ if ((fS==fO)) goto L_0061ac0d;
L_0061ac03:; BB(0x0061ac03);
    /* 0061ac03: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac06: mov dword ptr [edx + 0x6c], 0x14 */ W32((u32)(r_edx+0x6cu), 0x14u);
L_0061ac0d:; BB(0x0061ac0d);
    /* 0061ac0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac10: cmp dword ptr [eax + 0x6c], 0x13 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac14: jne 0x61ac20 */ if (!fZ) goto L_0061ac20;
L_0061ac16:; BB(0x0061ac16);
    /* 0061ac16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac19: mov dword ptr [ecx + 0x6c], 0xe */ W32((u32)(r_ecx+0x6cu), 0xeu);
L_0061ac20:; BB(0x0061ac20);
    /* 0061ac20: jmp 0x61ac57 */ goto L_0061ac57;
L_0061ac22:; BB(0x0061ac22);
    /* 0061ac22: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac25: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0061ac28: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ac2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac2e: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0061ac31: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac34: cmp dword ptr [edx + 0x6c], 0xf */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac38: jne 0x61ac44 */ if (!fZ) goto L_0061ac44;
L_0061ac3a:; BB(0x0061ac3a);
    /* 0061ac3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac3d: mov dword ptr [eax + 0x6c], 0x14 */ W32((u32)(r_eax+0x6cu), 0x14u);
L_0061ac44:; BB(0x0061ac44);
    /* 0061ac44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac47: cmp dword ptr [ecx + 0x6c], 0x15 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac4b: jne 0x61ac57 */ if (!fZ) goto L_0061ac57;
L_0061ac4d:; BB(0x0061ac4d);
    /* 0061ac4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac50: mov dword ptr [edx + 0x6c], 2 */ W32((u32)(r_edx+0x6cu), 0x2u);
L_0061ac57:; BB(0x0061ac57);
    /* 0061ac57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ac5a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061ac5d: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ac60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac62: je 0x61ac8f */ if (fZ) goto L_0061ac8f;
L_0061ac64:; BB(0x0061ac64);
    /* 0061ac64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac67: cmp dword ptr [edx + 0x6c], 0x14 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac6b: je 0x61ac8f */ if (fZ) goto L_0061ac8f;
L_0061ac6d:; BB(0x0061ac6d);
    /* 0061ac6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac70: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0061ac73: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ac76: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac79: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0061ac7c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac7f: cmp dword ptr [eax + 0x70], 3 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ac83: jle 0x61ac8f */ if ((fZ||fS!=fO)) goto L_0061ac8f;
L_0061ac85:; BB(0x0061ac85);
    /* 0061ac85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac88: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_0061ac8f:; BB(0x0061ac8f);
    /* 0061ac8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac92: cmp dword ptr [edx + 0x6c], 0x14 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ac96: jne 0x61aca4 */ if (!fZ) goto L_0061aca4;
L_0061ac98:; BB(0x0061ac98);
    /* 0061ac98: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ac9d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x61aca2u); f_005ea1cf();
    /* 0061aca2: jmp 0x61acde */ goto L_0061acde;
L_0061aca4:; BB(0x0061aca4);
    /* 0061aca4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061aca7: cmp dword ptr [eax + 0x6c], 0xe */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061acab: jne 0x61acb6 */ if (!fZ) goto L_0061acb6;
L_0061acad:; BB(0x0061acad);
    /* 0061acad: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0061acb4: jmp 0x61acbf */ goto L_0061acbf;
L_0061acb6:; BB(0x0061acb6);
    /* 0061acb6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061acb9: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0061acbc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0061acbf:; BB(0x0061acbf);
    /* 0061acbf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061acc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061acc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061acc8: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0061accb: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061acce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061acd1: lea ecx, [edx + eax - 1] */ r_ecx = (u32)(r_edx+r_eax+0xffffffffu);
    /* 0061acd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061acd6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061acd9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x61acdeu); f_005ea1cf();
L_0061acde:; BB(0x0061acde);
    /* 0061acde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ace1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_0061ace4:; BB(0x0061ace4);
    /* 0061ace4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061ace5: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ace7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ace8: ret 4 */ FN_RET(0x0061ab6a); r_esp += 8; return;
}

void f_0061aceb(void) /* FUN_0061aceb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061aceb);
    /* 0061aceb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061acec: mov ebp, esp */ r_ebp = r_esp;
    /* 0061acee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061acef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061acf2: mov ecx, dword ptr [0x711144] */ r_ecx = R32((u32)(0x711144u));
    /* 0061acf8: call 0x61b11c */ r_esp -= 4; W32(r_esp, 0x61acfdu); f_0061b11c();
    /* 0061acfd: mov esp, ebp */ r_esp = r_ebp;
    /* 0061acff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ad00: ret  */ FN_RET(0x0061aceb); r_esp += 4; return;
}

void f_0061ad01(void) /* FUN_0061ad01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ad01);
    /* 0061ad01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad02: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ad04: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ad07: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061ad0a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ad0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad0e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ad11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ad15: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x61ad1au); f_005d80f0();
    /* 0061ad1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ad1d: mov dword ptr [edx], 0x63cc54 */ W32((u32)(r_edx), 0x63cc54u);
    /* 0061ad23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ad26: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0061ad30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ad37: jmp 0x61ad42 */ goto L_0061ad42;
L_0061ad39:; BB(0x0061ad39);
    /* 0061ad39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ad3c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ad3f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0061ad42:; BB(0x0061ad42);
    /* 0061ad42: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ad46: jge 0x61ad5b */ if ((fS==fO)) goto L_0061ad5b;
L_0061ad48:; BB(0x0061ad48);
    /* 0061ad48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ad4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ad4e: mov dword ptr [eax + edx*4 + 0x90], 0 */ W32((u32)(r_eax+r_edx*4+0x90u), 0x0u);
    /* 0061ad59: jmp 0x61ad39 */ goto L_0061ad39;
L_0061ad5b:; BB(0x0061ad5b);
    /* 0061ad5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ad5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ad60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ad61: ret 8 */ FN_RET(0x0061ad01); r_esp += 12; return;
}

void f_0061ad64(void) /* FUN_0061ad64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ad64);
    /* 0061ad64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad65: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ad67: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ad6a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061ad6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ad70: mov dword ptr [eax], 0x63cc54 */ W32((u32)(r_eax), 0x63cc54u);
    /* 0061ad76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ad7d: jmp 0x61ad88 */ goto L_0061ad88;
L_0061ad7f:; BB(0x0061ad7f);
    /* 0061ad7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ad82: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ad85: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0061ad88:; BB(0x0061ad88);
    /* 0061ad88: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ad8c: jge 0x61ade5 */ if ((fS==fO)) goto L_0061ade5;
L_0061ad8e:; BB(0x0061ad8e);
    /* 0061ad8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ad91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ad94: cmp dword ptr [eax + edx*4 + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ad9c: je 0x61ade3 */ if (fZ) goto L_0061ade3;
L_0061ad9e:; BB(0x0061ad9e);
    /* 0061ad9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ada1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ada4: mov eax, dword ptr [edx + ecx*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061adab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061adae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061adb1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061adb4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061adb8: je 0x61adcb */ if (fZ) goto L_0061adcb;
L_0061adba:; BB(0x0061adba);
    /* 0061adba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061adbc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061adbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061adc1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061adc4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x61adc6u); call_ind(t); }
    /* 0061adc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061adc9: jmp 0x61add2 */ goto L_0061add2;
L_0061adcb:; BB(0x0061adcb);
    /* 0061adcb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0061add2:; BB(0x0061add2);
    /* 0061add2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061add5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061add8: mov dword ptr [edx + ecx*4 + 0x90], 0 */ W32((u32)(r_edx+r_ecx*4+0x90u), 0x0u);
L_0061ade3:; BB(0x0061ade3);
    /* 0061ade3: jmp 0x61ad7f */ goto L_0061ad7f;
L_0061ade5:; BB(0x0061ade5);
    /* 0061ade5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ade8: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061adef: je 0x61ae2e */ if (fZ) goto L_0061ae2e;
L_0061adf1:; BB(0x0061adf1);
    /* 0061adf1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061adf4: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0061adfa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061adfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ae00: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061ae03: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae07: je 0x61ae1a */ if (fZ) goto L_0061ae1a;
L_0061ae09:; BB(0x0061ae09);
    /* 0061ae09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ae0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061ae10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ae13: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61ae15u); call_ind(t); }
    /* 0061ae15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061ae18: jmp 0x61ae21 */ goto L_0061ae21;
L_0061ae1a:; BB(0x0061ae1a);
    /* 0061ae1a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0061ae21:; BB(0x0061ae21);
    /* 0061ae21: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ae24: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_0061ae2e:; BB(0x0061ae2e);
    /* 0061ae2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ae31: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x61ae36u); f_005d8154();
    /* 0061ae36: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ae38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ae39: ret  */ FN_RET(0x0061ad64); r_esp += 4; return;
}

void f_0061ae3a(void) /* FUN_0061ae3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ae3a);
    /* 0061ae3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae3b: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ae3d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ae40: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061ae43: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ae46: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae4d: jne 0x61af4e */ if (!fZ) goto L_0061af4e;
L_0061ae53:; BB(0x0061ae53);
    /* 0061ae53: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae58: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61ae5du); f_0048ab58();
    /* 0061ae5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ae60: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061ae63: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae67: je 0x61ae82 */ if (fZ) goto L_0061ae82;
L_0061ae69:; BB(0x0061ae69);
    /* 0061ae69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ae6c: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x61ae71u); f_005d5d20();
    /* 0061ae71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ae74: mov dword ptr [ecx], 0x63cc6c */ W32((u32)(r_ecx), 0x63cc6cu);
    /* 0061ae7a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ae7d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061ae80: jmp 0x61ae89 */ goto L_0061ae89;
L_0061ae82:; BB(0x0061ae82);
    /* 0061ae82: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0061ae89:; BB(0x0061ae89);
    /* 0061ae89: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ae8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ae8f: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 0061ae95: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ae98: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061ae9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aea1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0061aea4: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0061aea9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aeac: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0061aeb2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aeb5: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 0061aebb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061aebd: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x61aec0u); call_ind(t); }
    /* 0061aec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aec4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aec7: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0061aecd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aed0: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061aed6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061aed8: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x61aedbu); call_ind(t); }
    /* 0061aedb: push 0x6f0768 */ { u32 v = 0x6f0768u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aee0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aee3: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061aee9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aeec: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061aef2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061aef4: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x61aef7u); call_ind(t); }
    /* 0061aef7: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aef9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aefb: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aefd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af00: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061af06: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af09: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061af0f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061af11: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x61af14u); call_ind(t); }
    /* 0061af14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061af16: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af19: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061af1f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af22: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061af28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061af2a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61af2du); call_ind(t); }
    /* 0061af2d: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061af32: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061af37: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af3a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061af40: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af43: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061af49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061af4b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x61af4eu); call_ind(t); }
L_0061af4e:; BB(0x0061af4e);
    /* 0061af4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061af55: jmp 0x61af60 */ goto L_0061af60;
L_0061af57:; BB(0x0061af57);
    /* 0061af57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061af5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061af5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061af60:; BB(0x0061af60);
    /* 0061af60: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061af64: jge 0x61b0b3 */ if ((fS==fO)) goto L_0061b0b3;
L_0061af6a:; BB(0x0061af6a);
    /* 0061af6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061af6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061af70: cmp dword ptr [edx + ecx*4 + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061af78: jne 0x61b0ae */ if (!fZ) goto L_0061b0ae;
L_0061af7e:; BB(0x0061af7e);
    /* 0061af7e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0061af80: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61af85u); f_0048ab58();
    /* 0061af85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061af88: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061af8b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061af8f: je 0x61af9e */ if (fZ) goto L_0061af9e;
L_0061af91:; BB(0x0061af91);
    /* 0061af91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061af94: call 0x61ab2f */ r_esp -= 4; W32(r_esp, 0x61af99u); f_0061ab2f();
    /* 0061af99: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061af9c: jmp 0x61afa5 */ goto L_0061afa5;
L_0061af9e:; BB(0x0061af9e);
    /* 0061af9e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0061afa5:; BB(0x0061afa5);
    /* 0061afa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061afa8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061afab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061afae: mov dword ptr [ecx + eax*4 + 0x90], edx */ W32((u32)(r_ecx+r_eax*4+0x90u), r_edx);
    /* 0061afb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061afb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061afbb: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061afc2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061afc5: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061afc8: push 0x13881 */ { u32 v = 0x13881u; r_esp -= 4; W32(r_esp, v); }
    /* 0061afcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061afd0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061afd3: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061afda: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x61afdfu); f_005ea0c3();
    /* 0061afdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061afe2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061afe5: mov ecx, dword ptr [ecx + eax*4 + 0x90] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061afec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061afef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aff2: mov edx, dword ptr [eax + edx*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0061aff9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061affb: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61affeu); call_ind(t); }
    /* 0061affe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b000: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b003: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b006: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061b00d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b010: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b013: mov eax, dword ptr [edx + eax*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_eax*4+0x90u));
    /* 0061b01a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b01c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61b01fu); call_ind(t); }
    /* 0061b01f: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b021: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b024: imul eax, eax, 0x41 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x41u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b027: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b02b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b02e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b031: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061b038: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b03b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b03e: mov eax, dword ptr [edx + eax*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_eax*4+0x90u));
    /* 0061b045: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b047: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x61b04au); call_ind(t); }
    /* 0061b04a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b04d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b050: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b053: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b056: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061b05d: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0061b060: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b063: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b066: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0061b06d: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 0061b074: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b077: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b07a: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0061b081: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0061b084: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061b087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b08a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b08d: mov eax, dword ptr [ecx + eax*4 + 0x90] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061b094: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0061b097: lea edx, [edx + ecx - 1] */ r_edx = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 0061b09b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b09c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b09f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b0a2: mov ecx, dword ptr [ecx + eax*4 + 0x90] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061b0a9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x61b0aeu); f_005ea1cf();
L_0061b0ae:; BB(0x0061b0ae);
    /* 0061b0ae: jmp 0x61af57 */ goto L_0061af57;
L_0061b0b3:; BB(0x0061b0b3);
    /* 0061b0b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b0b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b0b6: ret  */ FN_RET(0x0061ae3a); r_esp += 4; return;
}

void f_0061b0b7(void) /* FUN_0061b0b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b0b7);
    /* 0061b0b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b0b8: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b0ba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b0bd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b0c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b0c3: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x61b0c8u); f_005e030e();
    /* 0061b0c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b0cb: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061b0d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b0d4: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0061b0da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b0dc: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x61b0dfu); call_ind(t); }
    /* 0061b0df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b0e6: jmp 0x61b0f1 */ goto L_0061b0f1;
L_0061b0e8:; BB(0x0061b0e8);
    /* 0061b0e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b0eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b0ee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061b0f1:; BB(0x0061b0f1);
    /* 0061b0f1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b0f5: jge 0x61b118 */ if ((fS==fO)) goto L_0061b118;
L_0061b0f7:; BB(0x0061b0f7);
    /* 0061b0f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b0fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b0fd: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061b104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b107: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b10a: mov eax, dword ptr [edx + eax*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_eax*4+0x90u));
    /* 0061b111: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b113: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x61b116u); call_ind(t); }
    /* 0061b116: jmp 0x61b0e8 */ goto L_0061b0e8;
L_0061b118:; BB(0x0061b118);
    /* 0061b118: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b11b: ret  */ FN_RET(0x0061b0b7); r_esp += 4; return;
}

void f_0061b11c(void) /* FUN_0061b11c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b11c);
    /* 0061b11c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b11d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b11f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b122: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061b125: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b12c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061b133: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b13a: jmp 0x61b145 */ goto L_0061b145;
L_0061b13c:; BB(0x0061b13c);
    /* 0061b13c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b13f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b142: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061b145:; BB(0x0061b145);
    /* 0061b145: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b149: jge 0x61b169 */ if ((fS==fO)) goto L_0061b169;
L_0061b14b:; BB(0x0061b14b);
    /* 0061b14b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b14e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b151: mov eax, dword ptr [edx + ecx*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0061b158: cmp dword ptr [eax + 0x6c], 0x14 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b15c: jne 0x61b167 */ if (!fZ) goto L_0061b167;
L_0061b15e:; BB(0x0061b15e);
    /* 0061b15e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b161: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0061b167:; BB(0x0061b167);
    /* 0061b167: jmp 0x61b13c */ goto L_0061b13c;
L_0061b169:; BB(0x0061b169);
    /* 0061b169: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b16f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061b172: call 0x618193 */ r_esp -= 4; W32(r_esp, 0x61b177u); f_00618193();
    /* 0061b177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b179: je 0x61b18a */ if (fZ) goto L_0061b18a;
L_0061b17b:; BB(0x0061b17b);
    /* 0061b17b: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b17f: jle 0x61b188 */ if ((fZ||fS!=fO)) goto L_0061b188;
L_0061b181:; BB(0x0061b181);
    /* 0061b181: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0061b188:; BB(0x0061b188);
    /* 0061b188: jmp 0x61b197 */ goto L_0061b197;
L_0061b18a:; BB(0x0061b18a);
    /* 0061b18a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b18e: je 0x61b197 */ if (fZ) goto L_0061b197;
L_0061b190:; BB(0x0061b190);
    /* 0061b190: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0061b197:; BB(0x0061b197);
    /* 0061b197: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b19e: jmp 0x61b1a9 */ goto L_0061b1a9;
L_0061b1a0:; BB(0x0061b1a0);
    /* 0061b1a0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b1a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b1a6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061b1a9:; BB(0x0061b1a9);
    /* 0061b1a9: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b1ad: jge 0x61b21a */ if ((fS==fO)) goto L_0061b21a;
L_0061b1af:; BB(0x0061b1af);
    /* 0061b1af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b1b2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b1b5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061b1b8: jmp 0x61b1c3 */ goto L_0061b1c3;
L_0061b1ba:; BB(0x0061b1ba);
    /* 0061b1ba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b1bd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b1c0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0061b1c3:; BB(0x0061b1c3);
    /* 0061b1c3: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b1c7: jge 0x61b218 */ if ((fS==fO)) goto L_0061b218;
L_0061b1c9:; BB(0x0061b1c9);
    /* 0061b1c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b1cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b1cf: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061b1d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b1d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b1dc: mov eax, dword ptr [ecx + eax*4 + 0x90] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0061b1e3: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0061b1e6: cmp ecx, dword ptr [eax + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b1e9: jne 0x61b216 */ if (!fZ) goto L_0061b216;
L_0061b1eb:; BB(0x0061b1eb);
    /* 0061b1eb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b1ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b1f1: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0061b1f8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b1fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b1fe: mov edx, dword ptr [eax + edx*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0061b205: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 0061b208: cmp eax, dword ptr [edx + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b20b: jne 0x61b216 */ if (!fZ) goto L_0061b216;
L_0061b20d:; BB(0x0061b20d);
    /* 0061b20d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061b214: jmp 0x61b218 */ goto L_0061b218;
L_0061b216:; BB(0x0061b216);
    /* 0061b216: jmp 0x61b1ba */ goto L_0061b1ba;
L_0061b218:; BB(0x0061b218);
    /* 0061b218: jmp 0x61b1a0 */ goto L_0061b1a0;
L_0061b21a:; BB(0x0061b21a);
    /* 0061b21a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b21e: je 0x61b23b */ if (fZ) goto L_0061b23b;
L_0061b220:; BB(0x0061b220);
    /* 0061b220: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b225: push 0x6f076c */ { u32 v = 0x6f076cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b22a: push 0x6f0778 */ { u32 v = 0x6f0778u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b22f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b231: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x61b236u); f_0060f9f3();
    /* 0061b236: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b239: jmp 0x61b243 */ goto L_0061b243;
L_0061b23b:; BB(0x0061b23b);
    /* 0061b23b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b23e: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x61b243u); f_005e03cc();
L_0061b243:; BB(0x0061b243);
    /* 0061b243: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b246: ret  */ FN_RET(0x0061b11c); r_esp += 4; return;
}

void f_0061b250(void) /* FUN_0061b250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b250);
    /* 0061b250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b251: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b25a: call 0x615549 */ r_esp -= 4; W32(r_esp, 0x61b25fu); f_00615549();
    /* 0061b25f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b262: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b267: je 0x61b275 */ if (fZ) goto L_0061b275;
L_0061b269:; BB(0x0061b269);
    /* 0061b269: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b26c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b26d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b272u); f_0048ac1b();
    /* 0061b272: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b275:; BB(0x0061b275);
    /* 0061b275: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b278: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b27a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b27b: ret 4 */ FN_RET(0x0061b250); r_esp += 8; return;
}

void f_0061b280(void) /* FUN_0061b280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b280);
    /* 0061b280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b281: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b28a: call 0x615c50 */ r_esp -= 4; W32(r_esp, 0x61b28fu); f_00615c50();
    /* 0061b28f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b292: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b297: je 0x61b2a5 */ if (fZ) goto L_0061b2a5;
L_0061b299:; BB(0x0061b299);
    /* 0061b299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b29c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b29d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b2a2u); f_0048ac1b();
    /* 0061b2a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b2a5:; BB(0x0061b2a5);
    /* 0061b2a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b2ab: ret 4 */ FN_RET(0x0061b280); r_esp += 8; return;
}

void f_0061b2b0(void) /* FUN_0061b2b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b2b0);
    /* 0061b2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b2b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2ba: call 0x615d79 */ r_esp -= 4; W32(r_esp, 0x61b2bfu); f_00615d79();
    /* 0061b2bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b2c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b2c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b2c7: je 0x61b2d5 */ if (fZ) goto L_0061b2d5;
L_0061b2c9:; BB(0x0061b2c9);
    /* 0061b2c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b2d2u); f_0048ac1b();
    /* 0061b2d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b2d5:; BB(0x0061b2d5);
    /* 0061b2d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b2db: ret 4 */ FN_RET(0x0061b2b0); r_esp += 8; return;
}

void f_0061b2e0(void) /* FUN_0061b2e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b2e0);
    /* 0061b2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b2e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2ea: call 0x615ec6 */ r_esp -= 4; W32(r_esp, 0x61b2efu); f_00615ec6();
    /* 0061b2ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b2f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b2f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b2f7: je 0x61b305 */ if (fZ) goto L_0061b305;
L_0061b2f9:; BB(0x0061b2f9);
    /* 0061b2f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b2fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b302u); f_0048ac1b();
    /* 0061b302: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b305:; BB(0x0061b305);
    /* 0061b305: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b308: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b30a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b30b: ret 4 */ FN_RET(0x0061b2e0); r_esp += 8; return;
}

void f_0061b310(void) /* FUN_0061b310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b310);
    /* 0061b310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b311: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b31a: call 0x615f51 */ r_esp -= 4; W32(r_esp, 0x61b31fu); f_00615f51();
    /* 0061b31f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b327: je 0x61b335 */ if (fZ) goto L_0061b335;
L_0061b329:; BB(0x0061b329);
    /* 0061b329: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b32d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b332u); f_0048ac1b();
    /* 0061b332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b335:; BB(0x0061b335);
    /* 0061b335: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b338: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b33a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b33b: ret 4 */ FN_RET(0x0061b310); r_esp += 8; return;
}

void f_0061b340(void) /* FUN_0061b340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b340);
    /* 0061b340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b341: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b34a: call 0x616b29 */ r_esp -= 4; W32(r_esp, 0x61b34fu); f_00616b29();
    /* 0061b34f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b352: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b357: je 0x61b365 */ if (fZ) goto L_0061b365;
L_0061b359:; BB(0x0061b359);
    /* 0061b359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b35c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b35d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b362u); f_0048ac1b();
    /* 0061b362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b365:; BB(0x0061b365);
    /* 0061b365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b368: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b36a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b36b: ret 4 */ FN_RET(0x0061b340); r_esp += 8; return;
}

void f_0061b370(void) /* FUN_0061b370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b370);
    /* 0061b370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b371: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b37a: call 0x61a6cf */ r_esp -= 4; W32(r_esp, 0x61b37fu); f_0061a6cf();
    /* 0061b37f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b382: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b387: je 0x61b395 */ if (fZ) goto L_0061b395;
L_0061b389:; BB(0x0061b389);
    /* 0061b389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b38d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b392u); f_0048ac1b();
    /* 0061b392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b395:; BB(0x0061b395);
    /* 0061b395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b398: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b39a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b39b: ret 4 */ FN_RET(0x0061b370); r_esp += 8; return;
}

void f_0061b3a0(void) /* FUN_0061b3a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b3a0);
    /* 0061b3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b3a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3aa: call 0x61a97f */ r_esp -= 4; W32(r_esp, 0x61b3afu); f_0061a97f();
    /* 0061b3af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b3b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b3b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b3b7: je 0x61b3c5 */ if (fZ) goto L_0061b3c5;
L_0061b3b9:; BB(0x0061b3b9);
    /* 0061b3b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b3c2u); f_0048ac1b();
    /* 0061b3c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b3c5:; BB(0x0061b3c5);
    /* 0061b3c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b3ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b3cb: ret 4 */ FN_RET(0x0061b3a0); r_esp += 8; return;
}

void f_0061b3d0(void) /* FUN_0061b3d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b3d0);
    /* 0061b3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3da: call 0x61ab4e */ r_esp -= 4; W32(r_esp, 0x61b3dfu); f_0061ab4e();
    /* 0061b3df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b3e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b3e7: je 0x61b3f5 */ if (fZ) goto L_0061b3f5;
L_0061b3e9:; BB(0x0061b3e9);
    /* 0061b3e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b3f2u); f_0048ac1b();
    /* 0061b3f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b3f5:; BB(0x0061b3f5);
    /* 0061b3f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b3f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b3fb: ret 4 */ FN_RET(0x0061b3d0); r_esp += 8; return;
}

void f_0061b400(void) /* FUN_0061b400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b400);
    /* 0061b400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b401: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b40a: call 0x61ad64 */ r_esp -= 4; W32(r_esp, 0x61b40fu); f_0061ad64();
    /* 0061b40f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b412: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b417: je 0x61b425 */ if (fZ) goto L_0061b425;
L_0061b419:; BB(0x0061b419);
    /* 0061b419: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b41c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b41d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b422u); f_0048ac1b();
    /* 0061b422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b425:; BB(0x0061b425);
    /* 0061b425: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b428: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b42a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b42b: ret 4 */ FN_RET(0x0061b400); r_esp += 8; return;
}

void f_0061b430(void) /* FUN_0061b430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b430);
    /* 0061b430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b431: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b43a: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x61b43fu); f_00446fe0();
    /* 0061b43f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b442: mov dword ptr [eax], 0x63ccdc */ W32((u32)(r_eax), 0x63ccdcu);
    /* 0061b448: push 0x6f08dc */ { u32 v = 0x6f08dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b44d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061b453: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x61b458u); f_005da413();
    /* 0061b458: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b45b: mov dword ptr [0x711150], ecx */ W32((u32)(0x711150u), r_ecx);
    /* 0061b461: push 0x1389d */ { u32 v = 0x1389du; r_esp -= 4; W32(r_esp, v); }
    /* 0061b466: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b469: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x61b46eu); f_005e5ec3();
    /* 0061b46e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b471: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b474: ret  */ FN_RET(0x0061b430); r_esp += 4; return;
}

void f_0061b475(void) /* FUN_0061b475 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b475);
    /* 0061b475: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b476: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b478: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b47b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061b47e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b481: mov dword ptr [eax], 0x63ccdc */ W32((u32)(r_eax), 0x63ccdcu);
    /* 0061b487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b489: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061b48f: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x61b494u); f_005da413();
    /* 0061b494: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b49a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b49d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b4a0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061b4a3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b4a7: je 0x61b4ba */ if (fZ) goto L_0061b4ba;
L_0061b4a9:; BB(0x0061b4a9);
    /* 0061b4a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b4ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b4b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b4b3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61b4b5u); call_ind(t); }
    /* 0061b4b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061b4b8: jmp 0x61b4c1 */ goto L_0061b4c1;
L_0061b4ba:; BB(0x0061b4ba);
    /* 0061b4ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0061b4c1:; BB(0x0061b4c1);
    /* 0061b4c1: mov dword ptr [0x711154], 0 */ W32((u32)(0x711154u), 0x0u);
    /* 0061b4cb: mov dword ptr [0x711150], 0 */ W32((u32)(0x711150u), 0x0u);
    /* 0061b4d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b4d8: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x61b4ddu); f_0044711a();
    /* 0061b4dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b4e0: ret  */ FN_RET(0x0061b475); r_esp += 4; return;
}

void f_0061b4e1(void) /* FUN_0061b4e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b4e1);
    /* 0061b4e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4e2: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b4e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4e7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061b4ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b4ed: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x61b4f2u); f_004476a6();
    /* 0061b4f2: cmp dword ptr [0x711154], 0 */ {  u32 a = R32((u32)(0x711154u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b4f9: jne 0x61b52a */ if (!fZ) goto L_0061b52a;
L_0061b4fb:; BB(0x0061b4fb);
    /* 0061b4fb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4fd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61b502u); f_0048ab58();
    /* 0061b502: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b505: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b508: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b50c: je 0x61b51b */ if (fZ) goto L_0061b51b;
L_0061b50e:; BB(0x0061b50e);
    /* 0061b50e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b511: call 0x615f07 */ r_esp -= 4; W32(r_esp, 0x61b516u); f_00615f07();
    /* 0061b516: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061b519: jmp 0x61b522 */ goto L_0061b522;
L_0061b51b:; BB(0x0061b51b);
    /* 0061b51b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0061b522:; BB(0x0061b522);
    /* 0061b522: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b525: mov dword ptr [0x711154], eax */ W32((u32)(0x711154u), r_eax);
L_0061b52a:; BB(0x0061b52a);
    /* 0061b52a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b52c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61b531u); f_0048ab58();
    /* 0061b531: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b534: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061b537: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b53b: je 0x61b558 */ if (fZ) goto L_0061b558;
L_0061b53d:; BB(0x0061b53d);
    /* 0061b53d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b53f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b542: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x61b547u); f_005e6160();
    /* 0061b547: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b54a: mov dword ptr [ecx], 0x63cd94 */ W32((u32)(r_ecx), 0x63cd94u);
    /* 0061b550: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b553: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061b556: jmp 0x61b55f */ goto L_0061b55f;
L_0061b558:; BB(0x0061b558);
    /* 0061b558: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0061b55f:; BB(0x0061b55f);
    /* 0061b55f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b563: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b566: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x61b56bu); f_005e5d66();
    /* 0061b56b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b56d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b56e: ret  */ FN_RET(0x0061b4e1); r_esp += 4; return;
}

void f_0061b56f(void) /* FUN_0061b56f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b56f);
    /* 0061b56f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b570: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b573: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b576: cmp dword ptr [0x711154], 0 */ {  u32 a = R32((u32)(0x711154u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b57d: je 0x61b595 */ if (fZ) goto L_0061b595;
L_0061b57f:; BB(0x0061b57f);
    /* 0061b57f: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b584: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b588: je 0x61b595 */ if (fZ) goto L_0061b595;
L_0061b58a:; BB(0x0061b58a);
    /* 0061b58a: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b590: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061b593: jmp 0x61b597 */ goto L_0061b597;
L_0061b595:; BB(0x0061b595);
    /* 0061b595: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061b597:; BB(0x0061b597);
    /* 0061b597: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b599: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b59a: ret  */ FN_RET(0x0061b56f); r_esp += 4; return;
}

void f_0061b59b(void) /* FUN_0061b59b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b59b);
    /* 0061b59b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b59c: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b59e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b59f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b5a2: cmp dword ptr [0x711154], 0 */ {  u32 a = R32((u32)(0x711154u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b5a9: je 0x61b5d2 */ if (fZ) goto L_0061b5d2;
L_0061b5ab:; BB(0x0061b5ab);
    /* 0061b5ab: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b5b0: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b5b4: je 0x61b5d2 */ if (fZ) goto L_0061b5d2;
L_0061b5b6:; BB(0x0061b5b6);
    /* 0061b5b6: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b5bc: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0061b5bf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0061b5c2: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b5c5: jne 0x61b5d2 */ if (!fZ) goto L_0061b5d2;
L_0061b5c7:; BB(0x0061b5c7);
    /* 0061b5c7: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b5cd: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061b5d0: jmp 0x61b5d4 */ goto L_0061b5d4;
L_0061b5d2:; BB(0x0061b5d2);
    /* 0061b5d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061b5d4:; BB(0x0061b5d4);
    /* 0061b5d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b5d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b5d7: ret 4 */ FN_RET(0x0061b59b); r_esp += 8; return;
}

void f_0061b5da(void) /* FUN_0061b5da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b5da);
    /* 0061b5da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b5db: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b5dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b5de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b5e1: cmp dword ptr [0x711154], 0 */ {  u32 a = R32((u32)(0x711154u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b5e8: je 0x61b61e */ if (fZ) goto L_0061b61e;
L_0061b5ea:; BB(0x0061b5ea);
    /* 0061b5ea: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b5ef: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b5f3: je 0x61b61e */ if (fZ) goto L_0061b61e;
L_0061b5f5:; BB(0x0061b5f5);
    /* 0061b5f5: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b5fb: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0061b5fe: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x61b603u); f_004259cd();
    /* 0061b603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b604: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061b607: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b608: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x61b60du); f_006240c0();
    /* 0061b60d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b612: jne 0x61b61e */ if (!fZ) goto L_0061b61e;
L_0061b614:; BB(0x0061b614);
    /* 0061b614: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b619: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061b61c: jmp 0x61b620 */ goto L_0061b620;
L_0061b61e:; BB(0x0061b61e);
    /* 0061b61e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061b620:; BB(0x0061b620);
    /* 0061b620: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b623: ret 4 */ FN_RET(0x0061b5da); r_esp += 8; return;
}

void f_0061b626(void) /* FUN_0061b626 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b626);
    /* 0061b626: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b627: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b629: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b62c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061b62f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b631: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b633: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x61b638u); f_004298bc();
    /* 0061b638: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b63b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061b63e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061b641: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061b644: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061b647: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b64a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061b64d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b64f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b651: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x61b656u); f_004298bc();
    /* 0061b656: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b659: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061b65c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0061b65f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b662: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061b665: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061b668: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b66b: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b671: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061b674: call 0x618733 */ r_esp -= 4; W32(r_esp, 0x61b679u); f_00618733();
    /* 0061b679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b67a: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061b67d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b67e: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b683: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b686: call 0x618852 */ r_esp -= 4; W32(r_esp, 0x61b68bu); f_00618852();
    /* 0061b68b: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b691: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061b694: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0061b69a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b69b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061b69e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b69f: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b6a5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061b6a8: call 0x618852 */ r_esp -= 4; W32(r_esp, 0x61b6adu); f_00618852();
    /* 0061b6ad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6b1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061b6b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6b5: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061b6b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6b9: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x61b6beu); f_00429a59();
    /* 0061b6be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b6c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b6c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b6c4: ret 8 */ FN_RET(0x0061b626); r_esp += 12; return;
}

void f_0061b6c7(void) /* FUN_0061b6c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b6c7);
    /* 0061b6c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b6ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b6ce: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b6d3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b6d6: call 0x6184f8 */ r_esp -= 4; W32(r_esp, 0x61b6dbu); f_006184f8();
    /* 0061b6db: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b6dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b6de: ret  */ FN_RET(0x0061b6c7); r_esp += 4; return;
}

void f_0061b6df(void) /* FUN_0061b6df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b6df);
    /* 0061b6df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6e0: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b6e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6e3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b6e6: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b6eb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b6ee: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 0061b6f8: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b6fe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061b701: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0061b70b: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b711: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061b714: call 0x6184f8 */ r_esp -= 4; W32(r_esp, 0x61b719u); f_006184f8();
    /* 0061b719: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b71b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b71c: ret 4 */ FN_RET(0x0061b6df); r_esp += 8; return;
}

void f_0061b71f(void) /* FUN_0061b71f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b71f);
    /* 0061b71f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b720: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b722: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b725: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b728: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b72d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b730: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b737: jne 0x61b754 */ if (!fZ) goto L_0061b754;
L_0061b739:; BB(0x0061b739);
    /* 0061b739: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b73f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061b742: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b749: jne 0x61b754 */ if (!fZ) goto L_0061b754;
L_0061b74b:; BB(0x0061b74b);
    /* 0061b74b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061b752: jmp 0x61b75b */ goto L_0061b75b;
L_0061b754:; BB(0x0061b754);
    /* 0061b754: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061b75b:; BB(0x0061b75b);
    /* 0061b75b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b75e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b760: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b761: ret 4 */ FN_RET(0x0061b71f); r_esp += 8; return;
}

void f_0061b764(void) /* FUN_0061b764 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b764);
    /* 0061b764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b765: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b767: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b76a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061b76d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b76f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b771: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x61b776u); f_004298bc();
    /* 0061b776: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b779: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061b77c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061b77f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b782: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061b785: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b788: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b78b: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b791: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061b794: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b79b: jne 0x61b7b0 */ if (!fZ) goto L_0061b7b0;
L_0061b79d:; BB(0x0061b79d);
    /* 0061b79d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061b7a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b7a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b7a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b7a6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061b7a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b7ab: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x61b7aeu); call_ind(t); }
    /* 0061b7ae: jmp 0x61b7d0 */ goto L_0061b7d0;
L_0061b7b0:; BB(0x0061b7b0);
    /* 0061b7b0: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b7b6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061b7b9: call 0x618733 */ r_esp -= 4; W32(r_esp, 0x61b7beu); f_00618733();
    /* 0061b7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b7bf: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0061b7c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b7c3: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b7c8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b7cb: call 0x618852 */ r_esp -= 4; W32(r_esp, 0x61b7d0u); f_00618852();
L_0061b7d0:; BB(0x0061b7d0);
    /* 0061b7d0: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061b7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b7d4: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b7da: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0061b7dd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b7e0: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x61b7e5u); f_004267ae();
    /* 0061b7e5: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b7eb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061b7ee: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 0061b7f8: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b7fd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b800: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0061b80a: mov edx, dword ptr [0x711154] */ r_edx = R32((u32)(0x711154u));
    /* 0061b810: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061b813: call 0x6184f8 */ r_esp -= 4; W32(r_esp, 0x61b818u); f_006184f8();
    /* 0061b818: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b81a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b81b: ret  */ FN_RET(0x0061b764); r_esp += 4; return;
}

void f_0061b81c(void) /* FUN_0061b81c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b81c);
    /* 0061b81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b81d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b81f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b820: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b823: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b828: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b82b: call 0x619c08 */ r_esp -= 4; W32(r_esp, 0x61b830u); f_00619c08();
    /* 0061b830: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b833: ret 4 */ FN_RET(0x0061b81c); r_esp += 8; return;
}

void f_0061b836(void) /* FUN_0061b836 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b836);
    /* 0061b836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b837: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b839: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b83a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b83d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b841: je 0x61b857 */ if (fZ) goto L_0061b857;
L_0061b843:; BB(0x0061b843);
    /* 0061b843: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b847: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b84d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061b850: call 0x6182b5 */ r_esp -= 4; W32(r_esp, 0x61b855u); f_006182b5();
    /* 0061b855: jmp 0x61b87d */ goto L_0061b87d;
L_0061b857:; BB(0x0061b857);
    /* 0061b857: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b859: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b85c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061b85f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b862: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061b865: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061b867: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x61b86au); call_ind(t); }
    /* 0061b86a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b86c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b86f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061b872: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b875: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061b878: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b87a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61b87du); call_ind(t); }
L_0061b87d:; BB(0x0061b87d);
    /* 0061b87d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b87f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b880: ret 4 */ FN_RET(0x0061b836); r_esp += 8; return;
}

void f_0061b883(void) /* FUN_0061b883 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b883);
    /* 0061b883: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b884: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b886: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b889: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061b88c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b88f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b890: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b893: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x61b898u); f_005e626d();
    /* 0061b898: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b89b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0061b89e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061b8a1: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061b8a5: ja 0x61b9b1 */ if ((!fC&&!fZ)) goto L_0061b9b1;
L_0061b8ab:; BB(0x0061b8ab);
    /* 0061b8ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b8ae: jmp dword ptr [eax*4 + 0x61b9b7] */ { u32 t = R32((u32)(r_eax*4+0x61b9b7u)); switch (t) { case 0x61b8b5u: goto L_0061b8b5; case 0x61b8c5u: goto L_0061b8c5; case 0x61b90eu: goto L_0061b90e; case 0x61b91eu: goto L_0061b91e; case 0x61b947u: goto L_0061b947; case 0x61b970u: goto L_0061b970; default: UNSUP(0x0061b8ae, "jump table entry is not a known target"); } }
L_0061b8b5:; BB(0x0061b8b5);
    /* 0061b8b5: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b8bb: call 0x61606f */ r_esp -= 4; W32(r_esp, 0x61b8c0u); f_0061606f();
    /* 0061b8c0: jmp 0x61b9b1 */ goto L_0061b9b1;
L_0061b8c5:; BB(0x0061b8c5);
    /* 0061b8c5: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b8cb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061b8ce: cmp dword ptr [edx + 0xa4], 1 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b8d5: jne 0x61b8f1 */ if (!fZ) goto L_0061b8f1;
L_0061b8d7:; BB(0x0061b8d7);
    /* 0061b8d7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8d9: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0061b8df: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x61b8e4u); f_0060e7bd();
    /* 0061b8e4: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b8ea: call 0x6161f0 */ r_esp -= 4; W32(r_esp, 0x61b8efu); f_006161f0();
    /* 0061b8ef: jmp 0x61b8fe */ goto L_0061b8fe;
L_0061b8f1:; BB(0x0061b8f1);
    /* 0061b8f1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8f3: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0061b8f9: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x61b8feu); f_0060e7bd();
L_0061b8fe:; BB(0x0061b8fe);
    /* 0061b8fe: mov ecx, dword ptr [0x711154] */ r_ecx = R32((u32)(0x711154u));
    /* 0061b904: call 0x616164 */ r_esp -= 4; W32(r_esp, 0x61b909u); f_00616164();
    /* 0061b909: jmp 0x61b9b1 */ goto L_0061b9b1;
L_0061b90e:; BB(0x0061b90e);
    /* 0061b90e: mov ecx, dword ptr [0x711150] */ r_ecx = R32((u32)(0x711150u));
    /* 0061b914: call 0x448c07 */ r_esp -= 4; W32(r_esp, 0x61b919u); f_00448c07();
    /* 0061b919: jmp 0x61b9b1 */ goto L_0061b9b1;
L_0061b91e:; BB(0x0061b91e);
    /* 0061b91e: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b923: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b926: call 0x6184f8 */ r_esp -= 4; W32(r_esp, 0x61b92bu); f_006184f8();
    /* 0061b92b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b92d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b930: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061b932: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b935: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61b938u); call_ind(t); }
    /* 0061b938: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b93a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b93d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b93f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b942: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61b945u); call_ind(t); }
    /* 0061b945: jmp 0x61b9b1 */ goto L_0061b9b1;
L_0061b947:; BB(0x0061b947);
    /* 0061b947: mov eax, dword ptr [0x711154] */ r_eax = R32((u32)(0x711154u));
    /* 0061b94c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b94f: call 0x619483 */ r_esp -= 4; W32(r_esp, 0x61b954u); f_00619483();
    /* 0061b954: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b956: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b959: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061b95b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b95e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61b961u); call_ind(t); }
    /* 0061b961: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b963: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b966: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b968: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b96b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61b96eu); call_ind(t); }
    /* 0061b96e: jmp 0x61b9b1 */ goto L_0061b9b1;
L_0061b970:; BB(0x0061b970);
    /* 0061b970: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b972: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61b977u); f_0048ab58();
    /* 0061b977: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b97a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b97d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b981: je 0x61b99e */ if (fZ) goto L_0061b99e;
L_0061b983:; BB(0x0061b983);
    /* 0061b983: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b985: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b988: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x61b98du); f_005e6160();
    /* 0061b98d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b990: mov dword ptr [eax], 0x63cdac */ W32((u32)(r_eax), 0x63cdacu);
    /* 0061b996: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b999: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061b99c: jmp 0x61b9a5 */ goto L_0061b9a5;
L_0061b99e:; BB(0x0061b99e);
    /* 0061b99e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0061b9a5:; BB(0x0061b9a5);
    /* 0061b9a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061b9a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061b9ac: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x61b9b1u); f_005e62ca();
L_0061b9b1:; BB(0x0061b9b1);
    /* 0061b9b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b9b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b9b4: ret 4 */ FN_RET(0x0061b883); r_esp += 8; return;
}

void f_0061b9d0(void) /* FUN_0061b9d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061b9d0);
    /* 0061b9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b9d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b9da: call 0x61b475 */ r_esp -= 4; W32(r_esp, 0x61b9dfu); f_0061b475();
    /* 0061b9df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b9e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061b9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b9e7: je 0x61b9f5 */ if (fZ) goto L_0061b9f5;
L_0061b9e9:; BB(0x0061b9e9);
    /* 0061b9e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b9ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61b9f2u); f_0048ac1b();
    /* 0061b9f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061b9f5:; BB(0x0061b9f5);
    /* 0061b9f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061b9f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b9fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b9fb: ret 4 */ FN_RET(0x0061b9d0); r_esp += 8; return;
}

void f_0061ba00(void) /* FUN_0061ba00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ba00);
    /* 0061ba00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba01: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ba03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ba07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba0a: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x61ba0fu); f_0048e320();
    /* 0061ba0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba12: mov dword ptr [eax], 0x63cdc4 */ W32((u32)(r_eax), 0x63cdc4u);
    /* 0061ba18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ba1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba1f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ba22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba23: call dword ptr [0x63307c] */ { u32 t = R32((u32)(0x63307cu)); r_esp -= 4; W32(r_esp, 0x61ba29u); call_ind(t); }
    /* 0061ba29: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ba2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba30: add ecx, 0x107 */ {  u32 a = r_ecx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba37: call dword ptr [0x63307c] */ { u32 t = R32((u32)(0x63307cu)); r_esp -= 4; W32(r_esp, 0x61ba3du); call_ind(t); }
    /* 0061ba3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba40: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ba42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ba43: ret 8 */ FN_RET(0x0061ba00); r_esp += 12; return;
}

void f_0061ba46(void) /* FUN_0061ba46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ba46);
    /* 0061ba46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba47: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ba49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba4a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ba4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba50: mov dword ptr [eax], 0x63cdc4 */ W32((u32)(r_eax), 0x63cdc4u);
    /* 0061ba56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ba59: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x61ba5eu); f_0048e361();
    /* 0061ba5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ba60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ba61: ret  */ FN_RET(0x0061ba46); r_esp += 4; return;
}

void f_0061ba62(void) /* FUN_0061ba62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ba62);
    /* 0061ba62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba63: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ba65: sub esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ba6b: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 0061ba71: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba73: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0061ba76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba77: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061ba7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba7b: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61ba80u); f_00632640();
    /* 0061ba80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ba83: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba85: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 0061ba8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba8c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0061ba8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba90: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ba93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba94: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061ba9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061ba9c: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061baa2: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61baa5u); call_ind(t); }
    /* 0061baa5: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0061baab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061baac: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x61bab1u); f_00625430();
    /* 0061bab1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bab4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bab7: ret 8 */ FN_RET(0x0061ba62); r_esp += 12; return;
}

void f_0061baba(void) /* FUN_0061baba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061baba);
    /* 0061baba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061babb: mov ebp, esp */ r_ebp = r_esp;
    /* 0061babd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bac0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061bac3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bac5: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061bac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bac9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bacc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bacd: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61bad2u); f_00632640();
    /* 0061bad2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bad5: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0061bad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bad9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061badc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061badd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bae0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061bae2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bae5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61bae8u); call_ind(t); }
    /* 0061bae8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061baea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061baeb: ret 8 */ FN_RET(0x0061baba); r_esp += 12; return;
}

void f_0061baee(void) /* FUN_0061baee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061baee);
    /* 0061baee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061baef: mov ebp, esp */ r_ebp = r_esp;
    /* 0061baf1: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061baf7: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 0061bafd: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0061bb00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb03: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061bb06: push 0x6f0944 */ { u32 v = 0x6f0944u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb0b: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0061bb0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb0f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x61bb14u); f_00624050();
    /* 0061bb14: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb17: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb19: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0061bb1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb20: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0061bb23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb28: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0061bb2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061bb30: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0061bb36: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x61bb39u); call_ind(t); }
    /* 0061bb39: lea eax, [ebp - 0x140] */ r_eax = (u32)(r_ebp+0xfffffec0u);
    /* 0061bb3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb40: call 0x626d30 */ r_esp -= 4; W32(r_esp, 0x61bb45u); f_00626d30();
    /* 0061bb45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb48: fst dword ptr [ebp - 0x148] */ W_F32((u32)(r_ebp+0xfffffeb8u), ST(0));
    /* 0061bb4e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bb50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bb51: ret 8 */ FN_RET(0x0061baee); r_esp += 12; return;
}

void f_0061bb54(void) /* FUN_0061bb54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bb54);
    /* 0061bb54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb55: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bb57: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb5a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0061bb5d: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0061bb60: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb63: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061bb66: push 0x6f0948 */ { u32 v = 0x6f0948u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb6b: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0061bb6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb6f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x61bb74u); f_00624050();
    /* 0061bb74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb77: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0061bb7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061bb7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb7f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061bb82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061bb84: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061bb87: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61bb8au); call_ind(t); }
    /* 0061bb8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bb8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bb8d: ret 8 */ FN_RET(0x0061bb54); r_esp += 12; return;
}

void f_0061bb90(void) /* FUN_0061bb90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bb90);
    /* 0061bb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bb93: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb99: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 0061bb9f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bba1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061bba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bba5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bba8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bba9: call 0x6326f0 */ r_esp -= 4; W32(r_esp, 0x61bbaeu); f_006326f0();
    /* 0061bbae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bbb1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbb3: lea edx, [ebp - 0x10c] */ r_edx = (u32)(r_ebp+0xfffffef4u);
    /* 0061bbb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061bbbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbbe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061bbc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbc2: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0061bbc8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061bbca: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0061bbd0: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61bbd3u); call_ind(t); }
    /* 0061bbd3: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 0061bbd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbda: call 0x625390 */ r_esp -= 4; W32(r_esp, 0x61bbdfu); f_00625390();
    /* 0061bbdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bbe2: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bbe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bbe5: ret 8 */ FN_RET(0x0061bb90); r_esp += 12; return;
}

void f_0061bbe8(void) /* FUN_0061bbe8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bbe8);
    /* 0061bbe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbe9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bbeb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bbee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061bbf1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbf3: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061bbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbf7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bbfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbfb: call 0x6326f0 */ r_esp -= 4; W32(r_esp, 0x61bc00u); f_006326f0();
    /* 0061bc00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc03: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0061bc06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bc0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bc0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061bc10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bc13: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61bc16u); call_ind(t); }
    /* 0061bc16: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bc18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bc19: ret 8 */ FN_RET(0x0061bbe8); r_esp += 12; return;
}

void f_0061bc1c(void) /* FUN_0061bc1c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bc1c);
    /* 0061bc1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bc1f: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc25: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0061bc2b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc2d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc31: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bc34: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bc3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc3b: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61bc40u); f_00632640();
    /* 0061bc40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc43: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc45: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0061bc4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc4c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bc4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061bc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc54: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0061bc5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061bc5c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0061bc62: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61bc65u); call_ind(t); }
    /* 0061bc65: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0061bc6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc6c: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x61bc71u); f_00625430();
    /* 0061bc71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc74: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bc77: ret 8 */ FN_RET(0x0061bc1c); r_esp += 12; return;
}

void f_0061bc7a(void) /* FUN_0061bc7a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bc7a);
    /* 0061bc7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc7b: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bc7d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc80: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061bc83: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc85: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bc88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc89: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bc8c: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bc92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc93: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61bc98u); f_00632640();
    /* 0061bc98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc9b: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0061bc9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bca3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bca6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061bca8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bcab: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61bcaeu); call_ind(t); }
    /* 0061bcae: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bcb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bcb1: ret 8 */ FN_RET(0x0061bc7a); r_esp += 12; return;
}

void f_0061bcb4(void) /* FUN_0061bcb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bcb4);
    /* 0061bcb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bcb7: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bcbd: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0061bcc3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcc5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcc9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061bccc: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bcd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcd3: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61bcd8u); f_00632640();
    /* 0061bcd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bcdb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcdd: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0061bce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bce4: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bce8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061bceb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcec: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0061bcf2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061bcf4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0061bcfa: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61bcfdu); call_ind(t); }
    /* 0061bcfd: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0061bd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd04: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x61bd09u); f_00625430();
    /* 0061bd09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bd0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bd0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bd0f: ret 8 */ FN_RET(0x0061bcb4); r_esp += 12; return;
}

void f_0061bd12(void) /* FUN_0061bd12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bd12);
    /* 0061bd12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd13: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bd15: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bd18: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061bd1b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd1d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0061bd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd21: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0061bd25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd26: call 0x632640 */ r_esp -= 4; W32(r_esp, 0x61bd2bu); f_00632640();
    /* 0061bd2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bd2e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0061bd31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bd39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061bd3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bd3e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61bd41u); call_ind(t); }
    /* 0061bd41: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bd43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bd44: ret 8 */ FN_RET(0x0061bd12); r_esp += 12; return;
}

void f_0061bd50(void) /* FUN_0061bd50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bd50);
    /* 0061bd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bd53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061bd57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bd5a: call 0x61ba46 */ r_esp -= 4; W32(r_esp, 0x61bd5fu); f_0061ba46();
    /* 0061bd5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061bd62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061bd65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bd67: je 0x61bd75 */ if (fZ) goto L_0061bd75;
L_0061bd69:; BB(0x0061bd69);
    /* 0061bd69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bd6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61bd72u); f_0048ac1b();
    /* 0061bd72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061bd75:; BB(0x0061bd75);
    /* 0061bd75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bd78: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bd7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bd7b: ret 4 */ FN_RET(0x0061bd50); r_esp += 8; return;
}

void f_0061bd80(void) /* FUN_0061bd80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bd80);
    /* 0061bd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bd83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bd86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061bd89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bd8c: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x61bd91u); f_0048e320();
    /* 0061bd91: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bd94: mov dword ptr [eax], 0x63cdfc */ W32((u32)(r_eax), 0x63cdfcu);
    /* 0061bd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bd9d: mov dword ptr [ecx + 0x408], 1 */ W32((u32)(r_ecx+0x408u), 0x1u);
    /* 0061bda7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bdaa: mov dword ptr [edx + 0x80c], 1 */ W32((u32)(r_edx+0x80cu), 0x1u);
    /* 0061bdb4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bdb7: mov ecx, dword ptr [0x6f0950] */ r_ecx = R32((u32)(0x6f0950u));
    /* 0061bdbd: mov dword ptr [eax + 0x810], ecx */ W32((u32)(r_eax+0x810u), r_ecx);
    /* 0061bdc3: mov edx, dword ptr [0x6f0954] */ r_edx = R32((u32)(0x6f0954u));
    /* 0061bdc9: mov dword ptr [eax + 0x814], edx */ W32((u32)(r_eax+0x814u), r_edx);
    /* 0061bdcf: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061bdd6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061bddd: jmp 0x61bde8 */ goto L_0061bde8;
L_0061bddf:; BB(0x0061bddf);
    /* 0061bddf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061bde2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061bde5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0061bde8:; BB(0x0061bde8);
    /* 0061bde8: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bdec: jge 0x61bef4 */ if ((fS==fO)) goto L_0061bef4;
L_0061bdf2:; BB(0x0061bdf2);
    /* 0061bdf2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061bdf9: jmp 0x61be04 */ goto L_0061be04;
L_0061bdfb:; BB(0x0061bdfb);
    /* 0061bdfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bdfe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061be01: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0061be04:; BB(0x0061be04);
    /* 0061be04: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061be08: jge 0x61beef */ if ((fS==fO)) goto L_0061beef;
L_0061be0e:; BB(0x0061be0e);
    /* 0061be0e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061be15: jmp 0x61be20 */ goto L_0061be20;
L_0061be17:; BB(0x0061be17);
    /* 0061be17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061be1a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061be1d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0061be20:; BB(0x0061be20);
    /* 0061be20: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061be24: jge 0x61beea */ if ((fS==fO)) goto L_0061beea;
L_0061be2a:; BB(0x0061be2a);
    /* 0061be2a: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0061be2d: fmul qword ptr [0x63cdd0] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd0u));
    /* 0061be33: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61be38u); f_00624144();
    /* 0061be38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061be3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061be3e: mov byte ptr [edx + ecx*4 + 0xa], al */ W8((u32)(r_edx+r_ecx*4+0xau), (u8)r_eax);
    /* 0061be42: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0061be45: fmul qword ptr [0x63cdd0] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd0u));
    /* 0061be4b: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61be50u); f_00624144();
    /* 0061be50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061be53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061be56: mov byte ptr [edx + ecx*4 + 9], al */ W8((u32)(r_edx+r_ecx*4+0x9u), (u8)r_eax);
    /* 0061be5a: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0061be5d: fmul qword ptr [0x63cdd8] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd8u));
    /* 0061be63: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61be68u); f_00624144();
    /* 0061be68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061be6b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061be6e: mov byte ptr [edx + ecx*4 + 8], al */ W8((u32)(r_edx+r_ecx*4+0x8u), (u8)r_eax);
    /* 0061be72: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061be75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061be78: mov byte ptr [ecx + eax*4 + 0xb], 0 */ W8((u32)(r_ecx+r_eax*4+0xbu), 0x0u);
    /* 0061be7d: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0061be80: fmul qword ptr [0x63cdd0] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd0u));
    /* 0061be86: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61be8bu); f_00624144();
    /* 0061be8b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061be8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061be91: mov byte ptr [ecx + edx*4 + 0x40e], al */ W8((u32)(r_ecx+r_edx*4+0x40eu), (u8)r_eax);
    /* 0061be98: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0061be9b: fmul qword ptr [0x63cdd0] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd0u));
    /* 0061bea1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61bea6u); f_00624144();
    /* 0061bea6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bea9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061beac: mov byte ptr [ecx + edx*4 + 0x40d], al */ W8((u32)(r_ecx+r_edx*4+0x40du), (u8)r_eax);
    /* 0061beb3: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0061beb6: fmul qword ptr [0x63cdd8] */ ST(0) = ST(0) * R_F64((u32)(0x63cdd8u));
    /* 0061bebc: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61bec1u); f_00624144();
    /* 0061bec1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bec4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bec7: mov byte ptr [ecx + edx*4 + 0x40c], al */ W8((u32)(r_ecx+r_edx*4+0x40cu), (u8)r_eax);
    /* 0061bece: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bed1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bed4: mov byte ptr [eax + edx*4 + 0x40f], 0 */ W8((u32)(r_eax+r_edx*4+0x40fu), 0x0u);
    /* 0061bedc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061bedf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bee2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061bee5: jmp 0x61be17 */ goto L_0061be17;
L_0061beea:; BB(0x0061beea);
    /* 0061beea: jmp 0x61bdfb */ goto L_0061bdfb;
L_0061beef:; BB(0x0061beef);
    /* 0061beef: jmp 0x61bddf */ goto L_0061bddf;
L_0061bef4:; BB(0x0061bef4);
    /* 0061bef4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bef7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061befa: ret  */ FN_RET(0x0061bd80); r_esp += 4; return;
}

void f_0061befb(void) /* FUN_0061befb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061befb);
    /* 0061befb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061befc: mov ebp, esp */ r_ebp = r_esp;
    /* 0061befe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061beff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061bf02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bf05: mov dword ptr [eax], 0x63cdfc */ W32((u32)(r_eax), 0x63cdfcu);
    /* 0061bf0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bf0e: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x61bf13u); f_0048e361();
    /* 0061bf13: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bf15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bf16: ret  */ FN_RET(0x0061befb); r_esp += 4; return;
}

void f_0061bf17(void) /* FUN_0061bf17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bf17);
    /* 0061bf17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf18: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bf1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf1b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061bf1e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bf20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bf21: ret  */ FN_RET(0x0061bf17); r_esp += 4; return;
}

void f_0061bf22(void) /* FUN_0061bf22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061bf22);
    /* 0061bf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf23: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bf25: sub esp, 0x350 */ {  u32 a = r_esp; u32 b = 0x350u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bf2b: mov dword ptr [ebp - 0x350], ecx */ W32((u32)(r_ebp+0xfffffcb0u), r_ecx);
    /* 0061bf31: mov eax, dword ptr [ebp - 0x350] */ r_eax = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061bf37: cmp dword ptr [eax + 0x408], 0 */ {  u32 a = R32((u32)(r_eax+0x408u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bf3e: jne 0x61c00e */ if (!fZ) goto L_0061c00e;
L_0061bf44:; BB(0x0061bf44);
    /* 0061bf44: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061bf4a: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x61bf4fu); f_005d9e34();
    /* 0061bf4f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0061bf52: mov ecx, dword ptr [ebp - 0x350] */ r_ecx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061bf58: mov dword ptr [ecx + 0x408], 1 */ W32((u32)(r_ecx+0x408u), 0x1u);
    /* 0061bf62: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0061bf69: jmp 0x61bf74 */ goto L_0061bf74;
L_0061bf6b:; BB(0x0061bf6b);
    /* 0061bf6b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bf6e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061bf71: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_0061bf74:; BB(0x0061bf74);
    /* 0061bf74: cmp dword ptr [ebp - 0x48], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061bf7b: jge 0x61bfcd */ if ((fS==fO)) goto L_0061bfcd;
L_0061bf7d:; BB(0x0061bf7d);
    /* 0061bf7d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bf80: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bf83: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bf86: mov edx, dword ptr [ebp - 0x350] */ r_edx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061bf8c: mov cl, byte ptr [edx + ecx*4 + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx*4+0xau))) & 0xffu);
    /* 0061bf90: mov byte ptr [ebp + eax - 0x34c], cl */ W8((u32)(r_ebp+r_eax+0xfffffcb4u), (u8)r_ecx);
    /* 0061bf97: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bf9a: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bf9d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bfa0: mov ecx, dword ptr [ebp - 0x350] */ r_ecx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061bfa6: mov al, byte ptr [ecx + eax*4 + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax*4+0x9u))) & 0xffu);
    /* 0061bfaa: mov byte ptr [ebp + edx - 0x34b], al */ W8((u32)(r_ebp+r_edx+0xfffffcb5u), (u8)r_eax);
    /* 0061bfb1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bfb4: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061bfb7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061bfba: mov eax, dword ptr [ebp - 0x350] */ r_eax = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061bfc0: mov dl, byte ptr [eax + edx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*4+0x8u))) & 0xffu);
    /* 0061bfc4: mov byte ptr [ebp + ecx - 0x34a], dl */ W8((u32)(r_ebp+r_ecx+0xfffffcb6u), (u8)r_edx);
    /* 0061bfcb: jmp 0x61bf6b */ goto L_0061bf6b;
L_0061bfcd:; BB(0x0061bfcd);
    /* 0061bfcd: lea eax, [ebp - 0x34c] */ r_eax = (u32)(r_ebp+0xfffffcb4u);
    /* 0061bfd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfd4: call 0x60b9be */ r_esp -= 4; W32(r_esp, 0x61bfd9u); f_0060b9be();
    /* 0061bfd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bfdc: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061bfe2: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x61bfe7u); f_005d9e34();
    /* 0061bfe7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061bfea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061bfed: sub ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061bff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff1: push 0x6f0958 */ { u32 v = 0x6f0958u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff6: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0061bff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bffa: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x61bfffu); f_00624050();
    /* 0061bfff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c002: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0061c005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c006: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61c00bu); f_0060fc40();
    /* 0061c00b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061c00e:; BB(0x0061c00e);
    /* 0061c00e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0061c015: jmp 0x61c020 */ goto L_0061c020;
L_0061c017:; BB(0x0061c017);
    /* 0061c017: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061c01a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c01d: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_0061c020:; BB(0x0061c020);
    /* 0061c020: cmp dword ptr [ebp - 0x48], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c027: jge 0x61c042 */ if ((fS==fO)) goto L_0061c042;
L_0061c029:; BB(0x0061c029);
    /* 0061c029: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061c02c: mov eax, dword ptr [ebp - 0x350] */ r_eax = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0061c032: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0061c036: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061c039: mov dword ptr [edx*4 + 0x6f5370], ecx */ W32((u32)(r_edx*4+0x6f5370u), r_ecx);
    /* 0061c040: jmp 0x61c017 */ goto L_0061c017;
L_0061c042:; BB(0x0061c042);
    /* 0061c042: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c044: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c045: ret  */ FN_RET(0x0061bf22); r_esp += 4; return;
}

void f_0061c046(void) /* FUN_0061c046 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c046);
    /* 0061c046: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c047: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c049: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c04c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c04f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c056: jmp 0x61c061 */ goto L_0061c061;
L_0061c058:; BB(0x0061c058);
    /* 0061c058: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c05b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c05e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061c061:; BB(0x0061c061);
    /* 0061c061: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c068: jge 0x61c07f */ if ((fS==fO)) goto L_0061c07f;
L_0061c06a:; BB(0x0061c06a);
    /* 0061c06a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c06d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c070: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061c073: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c076: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c079: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 0061c07d: jmp 0x61c058 */ goto L_0061c058;
L_0061c07f:; BB(0x0061c07f);
    /* 0061c07f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c081: mov al, byte ptr [0x6f6efc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6efcu))) & 0xffu);
    /* 0061c086: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c089: jne 0x61c093 */ if (!fZ) goto L_0061c093;
L_0061c08b:; BB(0x0061c08b);
    /* 0061c08b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c08e: call 0x61bf22 */ r_esp -= 4; W32(r_esp, 0x61c093u); f_0061bf22();
L_0061c093:; BB(0x0061c093);
    /* 0061c093: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c096: ret 8 */ FN_RET(0x0061c046); r_esp += 12; return;
}

void f_0061c099(void) /* FUN_0061c099 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c099);
    /* 0061c099: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c09a: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c09c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c09f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c0a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c0a9: jmp 0x61c0b4 */ goto L_0061c0b4;
L_0061c0ab:; BB(0x0061c0ab);
    /* 0061c0ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c0ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c0b1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061c0b4:; BB(0x0061c0b4);
    /* 0061c0b4: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c0bb: jge 0x61c0d5 */ if ((fS==fO)) goto L_0061c0d5;
L_0061c0bd:; BB(0x0061c0bd);
    /* 0061c0bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c0c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c0c3: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061c0c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c0c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c0cc: mov dword ptr [edx + ecx*4 + 0x40c], eax */ W32((u32)(r_edx+r_ecx*4+0x40cu), r_eax);
    /* 0061c0d3: jmp 0x61c0ab */ goto L_0061c0ab;
L_0061c0d5:; BB(0x0061c0d5);
    /* 0061c0d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c0d8: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 0061c0e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c0e7: add ecx, 0x40c */ {  u32 a = r_ecx; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c0ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c0f1: call 0x61c046 */ r_esp -= 4; W32(r_esp, 0x61c0f6u); f_0061c046();
    /* 0061c0f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c0f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c0f9: ret 4 */ FN_RET(0x0061c099); r_esp += 8; return;
}

void f_0061c0fc(void) /* FUN_0061c0fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c0fc);
    /* 0061c0fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c0fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c0ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c100: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c103: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c106: mov dword ptr [eax + 0x80c], 1 */ W32((u32)(r_eax+0x80cu), 0x1u);
    /* 0061c110: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c112: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c113: ret  */ FN_RET(0x0061c0fc); r_esp += 4; return;
}

void f_0061c114(void) /* FUN_0061c114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c114);
    /* 0061c114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c115: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c117: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c118: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c11b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c11e: mov dword ptr [eax + 0x80c], 0 */ W32((u32)(r_eax+0x80cu), 0x0u);
    /* 0061c128: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c12a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c12b: ret  */ FN_RET(0x0061c114); r_esp += 4; return;
}

void f_0061c12c(void) /* FUN_0061c12c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c12c);
    /* 0061c12c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c12d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c12f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c132: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c133: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061c136: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c13a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c13c: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061c142: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0061c145: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x61c14au); f_005ba399();
    /* 0061c14a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c14d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c151: je 0x61c1e8 */ if (fZ) goto L_0061c1e8;
L_0061c157:; BB(0x0061c157);
    /* 0061c157: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c15a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c15c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c15f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61c162u); call_ind(t); }
    /* 0061c162: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061c165: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c169: je 0x61c1e8 */ if (fZ) goto L_0061c1e8;
L_0061c16b:; BB(0x0061c16b);
    /* 0061c16b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061c172: jmp 0x61c17d */ goto L_0061c17d;
L_0061c174:; BB(0x0061c174);
    /* 0061c174: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c177: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c17a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0061c17d:; BB(0x0061c17d);
    /* 0061c17d: cmp dword ptr [ebp - 0x10], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c184: jge 0x61c1b6 */ if ((fS==fO)) goto L_0061c1b6;
L_0061c186:; BB(0x0061c186);
    /* 0061c186: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c189: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c18c: mov cl, byte ptr [eax + edx*4 + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*4+0x1au))) & 0xffu);
    /* 0061c190: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 0061c193: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c196: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c199: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c19c: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c19f: mov cl, byte ptr [esi + ecx*4 + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx*4+0x18u))) & 0xffu);
    /* 0061c1a3: mov byte ptr [eax + edx*4 + 0x1a], cl */ W8((u32)(r_eax+r_edx*4+0x1au), (u8)r_ecx);
    /* 0061c1a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c1aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c1ad: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061c1b0: mov byte ptr [eax + edx*4 + 0x18], cl */ W8((u32)(r_eax+r_edx*4+0x18u), (u8)r_ecx);
    /* 0061c1b4: jmp 0x61c174 */ goto L_0061c174;
L_0061c1b6:; BB(0x0061c1b6);
    /* 0061c1b6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c1ba: je 0x61c1d6 */ if (fZ) goto L_0061c1d6;
L_0061c1bc:; BB(0x0061c1bc);
    /* 0061c1bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c1bf: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c1c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c1c6: call 0x61c099 */ r_esp -= 4; W32(r_esp, 0x61c1cbu); f_0061c099();
    /* 0061c1cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c1ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061c1d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c1d3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x61c1d6u); call_ind(t); }
L_0061c1d6:; BB(0x0061c1d6);
    /* 0061c1d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1da: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061c1e0: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0061c1e3: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x61c1e8u); f_005ba79b();
L_0061c1e8:; BB(0x0061c1e8);
    /* 0061c1e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c1e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c1eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c1ec: ret 4 */ FN_RET(0x0061c12c); r_esp += 8; return;
}

void f_0061c1ef(void) /* FUN_0061c1ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c1ef);
    /* 0061c1ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c1f0: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c1f2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c1f5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061c1f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c1fb: fld qword ptr [0x63cde0] */ FPUSH(R_F64((u32)(0x63cde0u)));
    /* 0061c201: fdiv qword ptr [eax + 0x810] */ ST(0) = ST(0) / R_F64((u32)(r_eax+0x810u));
    /* 0061c207: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0061c20a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c20d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c20e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c211: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c212: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c215: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c217: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0061c21a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061c21d: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 0061c220: fdiv qword ptr [0x63cde8] */ ST(0) = ST(0) / R_F64((u32)(0x63cde8u));
    /* 0061c226: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c229: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061c22c: call 0x626da9 */ r_esp -= 4; W32(r_esp, 0x61c231u); f_00626da9();
    /* 0061c231: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c234: fmul qword ptr [0x63cde8] */ ST(0) = ST(0) * R_F64((u32)(0x63cde8u));
    /* 0061c23a: fadd qword ptr [0x63cdf0] */ ST(0) = ST(0) + R_F64((u32)(0x63cdf0u));
    /* 0061c240: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61c245u); f_00624144();
    /* 0061c245: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c248: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 0061c24b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c24e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c24f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c252: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c253: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c256: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c258: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0061c25b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061c25e: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0061c261: fdiv qword ptr [0x63cde8] */ ST(0) = ST(0) / R_F64((u32)(0x63cde8u));
    /* 0061c267: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c26a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061c26d: call 0x626da9 */ r_esp -= 4; W32(r_esp, 0x61c272u); f_00626da9();
    /* 0061c272: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c275: fmul qword ptr [0x63cde8] */ ST(0) = ST(0) * R_F64((u32)(0x63cde8u));
    /* 0061c27b: fadd qword ptr [0x63cdf0] */ ST(0) = ST(0) + R_F64((u32)(0x63cdf0u));
    /* 0061c281: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61c286u); f_00624144();
    /* 0061c286: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c289: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 0061c28c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c28f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c290: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c294: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c297: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061c299: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061c29b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0061c29e: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 0061c2a1: fdiv qword ptr [0x63cde8] */ ST(0) = ST(0) / R_F64((u32)(0x63cde8u));
    /* 0061c2a7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c2aa: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061c2ad: call 0x626da9 */ r_esp -= 4; W32(r_esp, 0x61c2b2u); f_00626da9();
    /* 0061c2b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c2b5: fmul qword ptr [0x63cde8] */ ST(0) = ST(0) * R_F64((u32)(0x63cde8u));
    /* 0061c2bb: fadd qword ptr [0x63cdf0] */ ST(0) = ST(0) + R_F64((u32)(0x63cdf0u));
    /* 0061c2c1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x61c2c6u); f_00624144();
    /* 0061c2c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c2c9: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0061c2cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c2cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c2ce: ret 4 */ FN_RET(0x0061c1ef); r_esp += 8; return;
}

void f_0061c2d1(void) /* FUN_0061c2d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c2d1);
    /* 0061c2d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c2d2: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c2d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c2d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c2d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c2db: fld qword ptr [eax + 0x810] */ FPUSH(R_F64((u32)(r_eax+0x810u)));
    /* 0061c2e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c2e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c2e4: ret  */ FN_RET(0x0061c2d1); r_esp += 4; return;
}

void f_0061c2e5(void) /* FUN_0061c2e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c2e5);
    /* 0061c2e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c2e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c2e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c2e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c2ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c2ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c2f2: mov dword ptr [eax + 0x810], ecx */ W32((u32)(r_eax+0x810u), r_ecx);
    /* 0061c2f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061c2fb: mov dword ptr [eax + 0x814], edx */ W32((u32)(r_eax+0x814u), r_edx);
    /* 0061c301: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c304: ret 8 */ FN_RET(0x0061c2e5); r_esp += 12; return;
}

void f_0061c310(void) /* FUN_0061c310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c310);
    /* 0061c310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c311: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c31a: call 0x61befb */ r_esp -= 4; W32(r_esp, 0x61c31fu); f_0061befb();
    /* 0061c31f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061c325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c327: je 0x61c335 */ if (fZ) goto L_0061c335;
L_0061c329:; BB(0x0061c329);
    /* 0061c329: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c32d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61c332u); f_0048ac1b();
    /* 0061c332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061c335:; BB(0x0061c335);
    /* 0061c335: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c338: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c33a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c33b: ret 4 */ FN_RET(0x0061c310); r_esp += 8; return;
}

void f_0061c340(void) /* FUN_0061c340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c340);
    /* 0061c340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c341: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c347: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c349: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061c34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c34d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c351: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061c354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c355: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c358: call 0x5bac50 */ r_esp -= 4; W32(r_esp, 0x61c35du); f_005bac50();
    /* 0061c35d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c360: mov dword ptr [eax], 0x63ce0c */ W32((u32)(r_eax), 0x63ce0cu);
    /* 0061c366: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c369: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0061c370: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c373: mov word ptr [edx + 0x34], 0 */ W16((u32)(r_edx+0x34u), 0x0u);
    /* 0061c379: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c37c: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 0061c383: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c386: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0061c38d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c390: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 0061c397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c39a: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 0061c3a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c3a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c3a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c3a7: ret 0xc */ FN_RET(0x0061c340); r_esp += 16; return;
}

void f_0061c3aa(void) /* FUN_0061c3aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c3aa);
    /* 0061c3aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c3ab: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c3ad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c3b0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061c3b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c3b6: mov dword ptr [eax], 0x63ce0c */ W32((u32)(r_eax), 0x63ce0cu);
    /* 0061c3bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c3bf: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0061c3c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061c3c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c3c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c3cb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c3cf: je 0x61c3e2 */ if (fZ) goto L_0061c3e2;
L_0061c3d1:; BB(0x0061c3d1);
    /* 0061c3d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c3d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c3d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061c3d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c3db: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61c3ddu); call_ind(t); }
    /* 0061c3dd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061c3e0: jmp 0x61c3e9 */ goto L_0061c3e9;
L_0061c3e2:; BB(0x0061c3e2);
    /* 0061c3e2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0061c3e9:; BB(0x0061c3e9);
    /* 0061c3e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c3ec: call 0x5bad47 */ r_esp -= 4; W32(r_esp, 0x61c3f1u); f_005bad47();
    /* 0061c3f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c3f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c3f4: ret  */ FN_RET(0x0061c3aa); r_esp += 4; return;
}

void f_0061c3f5(void) /* FUN_0061c3f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c3f5);
    /* 0061c3f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c3f6: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c3f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c3f9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c3fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c3ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c400: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c403: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0061c406: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x61c40bu); f_005ba79b();
    /* 0061c40b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c40e: ret  */ FN_RET(0x0061c3f5); r_esp += 4; return;
}

void f_0061c40f(void) /* FUN_0061c40f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c40f);
    /* 0061c40f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c410: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c412: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c413: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c416: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c419: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c41d: je 0x61c426 */ if (fZ) goto L_0061c426;
L_0061c41f:; BB(0x0061c41f);
    /* 0061c41f: mov eax, 1 */ r_eax = 0x1u;
    /* 0061c424: jmp 0x61c428 */ goto L_0061c428;
L_0061c426:; BB(0x0061c426);
    /* 0061c426: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061c428:; BB(0x0061c428);
    /* 0061c428: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c42a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c42b: ret  */ FN_RET(0x0061c40f); r_esp += 4; return;
}

void f_0061c42c(void) /* FUN_0061c42c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c42c);
    /* 0061c42c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c42d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c42f: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c432: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061c435: push 0x6f0984 */ { u32 v = 0x6f0984u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c43a: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61c43fu); f_0060fc40();
    /* 0061c43f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c442: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c445: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061c448: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0061c44b: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c44f: je 0x61c45c */ if (fZ) goto L_0061c45c;
L_0061c451:; BB(0x0061c451);
    /* 0061c451: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c455: je 0x61c49c */ if (fZ) goto L_0061c49c;
L_0061c457:; BB(0x0061c457);
    /* 0061c457: jmp 0x61c4dc */ goto L_0061c4dc;
L_0061c45c:; BB(0x0061c45c);
    /* 0061c45c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c45e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61c463u); f_0048ab58();
    /* 0061c463: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c466: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061c469: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c46d: je 0x61c483 */ if (fZ) goto L_0061c483;
L_0061c46f:; BB(0x0061c46f);
    /* 0061c46f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c472: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0061c475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c476: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061c479: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x61c47eu); f_0060eb40();
    /* 0061c47e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061c481: jmp 0x61c48a */ goto L_0061c48a;
L_0061c483:; BB(0x0061c483);
    /* 0061c483: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061c48a:; BB(0x0061c48a);
    /* 0061c48a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061c48d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061c490: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c493: mov dword ptr [edx + 0x30], 1 */ W32((u32)(r_edx+0x30u), 0x1u);
    /* 0061c49a: jmp 0x61c4dc */ goto L_0061c4dc;
L_0061c49c:; BB(0x0061c49c);
    /* 0061c49c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c49e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61c4a3u); f_0048ab58();
    /* 0061c4a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c4a6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061c4a9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c4ad: je 0x61c4c5 */ if (fZ) goto L_0061c4c5;
L_0061c4af:; BB(0x0061c4af);
    /* 0061c4af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c4b2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0061c4b5: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061c4b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c4b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c4bb: call 0x60eb40 */ r_esp -= 4; W32(r_esp, 0x61c4c0u); f_0060eb40();
    /* 0061c4c0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061c4c3: jmp 0x61c4cc */ goto L_0061c4cc;
L_0061c4c5:; BB(0x0061c4c5);
    /* 0061c4c5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0061c4cc:; BB(0x0061c4cc);
    /* 0061c4cc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061c4cf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061c4d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c4d5: mov dword ptr [eax + 0x30], 2 */ W32((u32)(r_eax+0x30u), 0x2u);
L_0061c4dc:; BB(0x0061c4dc);
    /* 0061c4dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c4df: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x61c4e4u); f_0060ebea();
    /* 0061c4e4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061c4e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c4ea: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0061c4ed: call 0x60ebea */ r_esp -= 4; W32(r_esp, 0x61c4f2u); f_0060ebea();
    /* 0061c4f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c4f5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061c4fc: jmp 0x61c507 */ goto L_0061c507;
L_0061c4fe:; BB(0x0061c4fe);
    /* 0061c4fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c501: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c504: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061c507:; BB(0x0061c507);
    /* 0061c507: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c50a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c50d: cmp ecx, dword ptr [eax + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x38u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061c510: jae 0x61c53b */ if (!fC) goto L_0061c53b;
L_0061c512:; BB(0x0061c512);
    /* 0061c512: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c515: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c517: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0061c51a: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061c51d: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c522: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c525: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0061c527: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c52a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061c52d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061c530: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c533: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c536: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c539: jmp 0x61c4fe */ goto L_0061c4fe;
L_0061c53b:; BB(0x0061c53b);
    /* 0061c53b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c53e: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0061c541: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061c544: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061c547: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061c54a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c54e: je 0x61c561 */ if (fZ) goto L_0061c561;
L_0061c550:; BB(0x0061c550);
    /* 0061c550: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c552: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c555: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061c557: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061c55a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61c55cu); call_ind(t); }
    /* 0061c55c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0061c55f: jmp 0x61c568 */ goto L_0061c568;
L_0061c561:; BB(0x0061c561);
    /* 0061c561: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0061c568:; BB(0x0061c568);
    /* 0061c568: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c56b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c56e: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0061c571: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061c574: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x61c579u); f_0060ec47();
    /* 0061c579: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061c57c: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0061c57f: call 0x60ec47 */ r_esp -= 4; W32(r_esp, 0x61c584u); f_0060ec47();
    /* 0061c584: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c587: ret  */ FN_RET(0x0061c42c); r_esp += 4; return;
}

void f_0061c590(void) /* FUN_0061c590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c590);
    /* 0061c590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c591: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c59a: call 0x61c3aa */ r_esp -= 4; W32(r_esp, 0x61c59fu); f_0061c3aa();
    /* 0061c59f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c5a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061c5a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c5a7: je 0x61c5b5 */ if (fZ) goto L_0061c5b5;
L_0061c5a9:; BB(0x0061c5a9);
    /* 0061c5a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c5ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61c5b2u); f_0048ac1b();
    /* 0061c5b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061c5b5:; BB(0x0061c5b5);
    /* 0061c5b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c5b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c5ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c5bb: ret 4 */ FN_RET(0x0061c590); r_esp += 8; return;
}

void f_0061c5c0(void) /* FUN_0061c5c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c5c0);
    /* 0061c5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c5c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c5c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061c5c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c5cc: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x61c5d1u); f_0048e320();
    /* 0061c5d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c5d4: mov dword ptr [eax], 0x63ce1c */ W32((u32)(r_eax), 0x63ce1cu);
    /* 0061c5da: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5dc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0061c5df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5e0: push 0x6f09a8 */ { u32 v = 0x6f09a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5e5: push 0x6f09ac */ { u32 v = 0x6f09acu; r_esp -= 4; W32(r_esp, v); }
    /* 0061c5ea: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061c5f0: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0061c5f3: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061c5f8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0061c5fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c5fd: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61c600u); call_ind(t); }
    /* 0061c600: push 0x6f09b4 */ { u32 v = 0x6f09b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c605: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0061c608: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c609: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x61c60eu); f_006325b0();
    /* 0061c60e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061c611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c613: je 0x61c624 */ if (fZ) goto L_0061c624;
L_0061c615:; BB(0x0061c615);
    /* 0061c615: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c618: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 0061c622: jmp 0x61c631 */ goto L_0061c631;
L_0061c624:; BB(0x0061c624);
    /* 0061c624: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c627: mov dword ptr [eax + 0xc8], 1 */ W32((u32)(r_eax+0xc8u), 0x1u);
L_0061c631:; BB(0x0061c631);
    /* 0061c631: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061c638: jmp 0x61c643 */ goto L_0061c643;
L_0061c63a:; BB(0x0061c63a);
    /* 0061c63a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c63d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061c640: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0061c643:; BB(0x0061c643);
    /* 0061c643: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c647: jge 0x61c678 */ if ((fS==fO)) goto L_0061c678;
L_0061c649:; BB(0x0061c649);
    /* 0061c649: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c64c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c64f: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0061c657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c65a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c65d: mov dword ptr [edx + ecx*4 + 0x48], 0 */ W32((u32)(r_edx+r_ecx*4+0x48u), 0x0u);
    /* 0061c665: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c668: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c66b: mov dword ptr [ecx + eax*4 + 0x88], 0 */ W32((u32)(r_ecx+r_eax*4+0x88u), 0x0u);
    /* 0061c676: jmp 0x61c63a */ goto L_0061c63a;
L_0061c678:; BB(0x0061c678);
    /* 0061c678: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c67b: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 0061c685: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061c688: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c68a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c68b: ret  */ FN_RET(0x0061c5c0); r_esp += 4; return;
}

void f_0061c68c(void) /* FUN_0061c68c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c68c);
    /* 0061c68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c68d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c68f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c690: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c693: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c696: mov dword ptr [eax], 0x63ce1c */ W32((u32)(r_eax), 0x63ce1cu);
    /* 0061c69c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c69f: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x61c6a4u); f_0048e361();
    /* 0061c6a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c6a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c6a7: ret  */ FN_RET(0x0061c68c); r_esp += 4; return;
}

void f_0061c6a8(void) /* FUN_0061c6a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c6a8);
    /* 0061c6a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c6ab: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c6ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6af: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    { u32 th = r_ecx; fprintf(stderr, "wasmVOICE play id=%x en=%u\n", R32(r_ebp+0x8u), (th && th < 0x10000000u) ? R32(th+0xc8) : 0); }
    /* 0061c6b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c6b5: cmp dword ptr [eax + 0xc8], 0 */ {  u32 a = R32((u32)(r_eax+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c6bc: jne 0x61c6c5 */ if (!fZ) goto L_0061c6c5;
L_0061c6be:; BB(0x0061c6be);
    /* 0061c6be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c6c0: jmp 0x61c7b8 */ goto L_0061c7b8;
L_0061c6c5:; BB(0x0061c6c5);
    /* 0061c6c5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c6c9: jne 0x61c6d2 */ if (!fZ) goto L_0061c6d2;
L_0061c6cb:; BB(0x0061c6cb);
    /* 0061c6cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c6cd: jmp 0x61c7b8 */ goto L_0061c7b8;
L_0061c6d2:; BB(0x0061c6d2);
    /* 0061c6d2: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c6d6: jne 0x61c6e4 */ if (!fZ) goto L_0061c6e4;
L_0061c6d8:; BB(0x0061c6d8);
    /* 0061c6d8: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061c6de: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0061c6e1: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0061c6e4:; BB(0x0061c6e4);
    /* 0061c6e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c6e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c6ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c6ed: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x61c6f2u); f_005ba399();
    /* 0061c6f2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061c6f5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c6f9: je 0x61c7a8 */ if (fZ) goto L_0061c7a8;
L_0061c6ff:; BB(0x0061c6ff);
    /* 0061c6ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c702: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c706: je 0x61c7a8 */ if (fZ) goto L_0061c7a8;
L_0061c70c:; BB(0x0061c70c);
    /* 0061c70c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c70f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0061c712: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0061c715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061c717: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c71a: call 0x61c800 */ r_esp -= 4; W32(r_esp, 0x61c71fu); f_0061c800();
    /* 0061c71f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c722: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c726: jne 0x61c737 */ if (!fZ) goto L_0061c737;
L_0061c728:; BB(0x0061c728);
    /* 0061c728: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c72b: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x61c730u); f_0061c3f5();
    /* 0061c730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c732: jmp 0x61c7b8 */ goto L_0061c7b8;
L_0061c737:; BB(0x0061c737);
    /* 0061c737: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c73a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061c73d: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0061c740: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c743: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061c746: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 0061c749: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c74c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c74f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c752: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 0061c756: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c759: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c75c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0061c760: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061c763: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0061c766: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061c769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061c76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c76d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c76e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c771: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061c773: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c776: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x61c779u); call_ind(t); }
    /* 0061c779: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c77c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c77f: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c784: je 0x61c7a4 */ if (fZ) goto L_0061c7a4;
L_0061c786:; BB(0x0061c786);
    /* 0061c786: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c789: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061c78c: mov esi, dword ptr [ecx + eax*4 + 8] */ r_esi = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0061c790: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061c796: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x61c79bu); f_005d9e34();
    /* 0061c79b: mov edx, dword ptr [esi + 0x50] */ r_edx = R32((u32)(r_esi+0x50u));
    /* 0061c79e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061c7a0: mov eax, edx */ r_eax = r_edx;
    /* 0061c7a2: jmp 0x61c7b8 */ goto L_0061c7b8;
L_0061c7a4:; BB(0x0061c7a4);
    /* 0061c7a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061c7a6: jmp 0x61c7b8 */ goto L_0061c7b8;
L_0061c7a8:; BB(0x0061c7a8);
    /* 0061c7a8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c7ac: je 0x61c7b6 */ if (fZ) goto L_0061c7b6;
L_0061c7ae:; BB(0x0061c7ae);
    /* 0061c7ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c7b1: call 0x61c3f5 */ r_esp -= 4; W32(r_esp, 0x61c7b6u); f_0061c3f5();
L_0061c7b6:; BB(0x0061c7b6);
    /* 0061c7b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061c7b8:; BB(0x0061c7b8);
    /* 0061c7b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061c7b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c7bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c7bc: ret 0x1c */ FN_RET(0x0061c6a8); r_esp += 32; return;
}

void f_0061c7bf(void) /* FUN_0061c7bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c7bf);
    /* 0061c7bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c7c0: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c7c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c7c5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c7c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c7cb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061c7ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c7d1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c7d5: je 0x61c7fa */ if (fZ) goto L_0061c7fa;
L_0061c7d7:; BB(0x0061c7d7);
    /* 0061c7d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c7da: cmp dword ptr [edx + 0x50], -1 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c7de: je 0x61c7f3 */ if (fZ) goto L_0061c7f3;
L_0061c7e0:; BB(0x0061c7e0);
    /* 0061c7e0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061c7e6: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x61c7ebu); f_005d9e34();
    /* 0061c7eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c7ee: cmp dword ptr [ecx + 0x50], eax */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c7f1: jl 0x61c7fa */ if ((fS!=fO)) goto L_0061c7fa;
L_0061c7f3:; BB(0x0061c7f3);
    /* 0061c7f3: mov eax, 1 */ r_eax = 0x1u;
    /* 0061c7f8: jmp 0x61c7fc */ goto L_0061c7fc;
L_0061c7fa:; BB(0x0061c7fa);
    /* 0061c7fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061c7fc:; BB(0x0061c7fc);
    /* 0061c7fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c7fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c7ff: ret  */ FN_RET(0x0061c7bf); r_esp += 4; return;
}

void f_0061c800(void) /* FUN_0061c800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c800);
    /* 0061c800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c801: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c809: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061c810:; BB(0x0061c810);
    /* 0061c810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c813: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c816: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0061c81a: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c81d: je 0x61c830 */ if (fZ) goto L_0061c830;
L_0061c81f:; BB(0x0061c81f);
    /* 0061c81f: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c823: jge 0x61c830 */ if ((fS==fO)) goto L_0061c830;
L_0061c825:; BB(0x0061c825);
    /* 0061c825: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c828: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c82b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c82e: jmp 0x61c810 */ goto L_0061c810;
L_0061c830:; BB(0x0061c830);
    /* 0061c830: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c834: jge 0x61c84a */ if ((fS==fO)) goto L_0061c84a;
L_0061c836:; BB(0x0061c836);
    /* 0061c836: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c839: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c83c: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0061c840: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c843: jne 0x61c84a */ if (!fZ) goto L_0061c84a;
L_0061c845:; BB(0x0061c845);
    /* 0061c845: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c848: jmp 0x61c84d */ goto L_0061c84d;
L_0061c84a:; BB(0x0061c84a);
    /* 0061c84a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0061c84d:; BB(0x0061c84d);
    /* 0061c84d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c850: ret 4 */ FN_RET(0x0061c800); r_esp += 8; return;
}

void f_0061c853(void) /* FUN_0061c853 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c853);
    /* 0061c853: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c854: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c856: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c859: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c85c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061c863:; BB(0x0061c863);
    /* 0061c863: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c866: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c869: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 0061c86d: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c870: je 0x61c883 */ if (fZ) goto L_0061c883;
L_0061c872:; BB(0x0061c872);
    /* 0061c872: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c876: jge 0x61c883 */ if ((fS==fO)) goto L_0061c883;
L_0061c878:; BB(0x0061c878);
    /* 0061c878: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c87b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c87e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c881: jmp 0x61c863 */ goto L_0061c863;
L_0061c883:; BB(0x0061c883);
    /* 0061c883: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c887: jge 0x61c8ab */ if ((fS==fO)) goto L_0061c8ab;
L_0061c889:; BB(0x0061c889);
    /* 0061c889: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c88c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c88f: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 0061c893: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c896: jne 0x61c8ab */ if (!fZ) goto L_0061c8ab;
L_0061c898:; BB(0x0061c898);
    /* 0061c898: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c89b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c89c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c89f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061c8a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8a8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x61c8abu); call_ind(t); }
L_0061c8ab:; BB(0x0061c8ab);
    /* 0061c8ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c8ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c8ae: ret 8 */ FN_RET(0x0061c853); r_esp += 12; return;
}

void f_0061c8b1(void) /* FUN_0061c8b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c8b1);
    /* 0061c8b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c8b2: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c8b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c8b7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061c8ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061c8c1:; BB(0x0061c8c1);
    /* 0061c8c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c8c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8c7: mov edx, dword ptr [ecx + eax*4 + 0x88] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x88u));
    /* 0061c8ce: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c8d1: je 0x61c8e4 */ if (fZ) goto L_0061c8e4;
L_0061c8d3:; BB(0x0061c8d3);
    /* 0061c8d3: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c8d7: jge 0x61c8e4 */ if ((fS==fO)) goto L_0061c8e4;
L_0061c8d9:; BB(0x0061c8d9);
    /* 0061c8d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c8dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061c8df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061c8e2: jmp 0x61c8c1 */ goto L_0061c8c1;
L_0061c8e4:; BB(0x0061c8e4);
    /* 0061c8e4: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061c8e8: jge 0x61c90f */ if ((fS==fO)) goto L_0061c90f;
L_0061c8ea:; BB(0x0061c8ea);
    /* 0061c8ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c8ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c8f0: mov eax, dword ptr [edx + ecx*4 + 0x88] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x88u));
    /* 0061c8f7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c8fa: jne 0x61c90f */ if (!fZ) goto L_0061c90f;
L_0061c8fc:; BB(0x0061c8fc);
    /* 0061c8fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061c8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c900: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c903: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c904: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c907: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061c909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061c90c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x61c90fu); call_ind(t); }
L_0061c90f:; BB(0x0061c90f);
    /* 0061c90f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c912: ret 8 */ FN_RET(0x0061c8b1); r_esp += 12; return;
}

void f_0061c920(void) /* FUN_0061c920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c920);
    /* 0061c920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c921: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c92a: call 0x61c68c */ r_esp -= 4; W32(r_esp, 0x61c92fu); f_0061c68c();
    /* 0061c92f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c932: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061c935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c937: je 0x61c945 */ if (fZ) goto L_0061c945;
L_0061c939:; BB(0x0061c939);
    /* 0061c939: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c93c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c93d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61c942u); f_0048ac1b();
    /* 0061c942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061c945:; BB(0x0061c945);
    /* 0061c945: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c948: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c94a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c94b: ret 4 */ FN_RET(0x0061c920); r_esp += 8; return;
}

void f_0061c950(void) /* FUN_0061c950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c950);
    /* 0061c950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c951: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c957: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c95a: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x61c95fu); f_0048e320();
    /* 0061c95f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c962: mov dword ptr [eax], 0x63ce34 */ W32((u32)(r_eax), 0x63ce34u);
    /* 0061c968: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c96b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c96d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c96e: ret  */ FN_RET(0x0061c950); r_esp += 4; return;
}

void f_0061c96f(void) /* FUN_0061c96f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c96f);
    /* 0061c96f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c970: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c972: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c973: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c976: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c979: mov dword ptr [eax], 0x63ce34 */ W32((u32)(r_eax), 0x63ce34u);
    /* 0061c97f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c982: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x61c987u); f_0048e361();
    /* 0061c987: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c98a: ret  */ FN_RET(0x0061c96f); r_esp += 4; return;
}

void f_0061c990(void) /* FUN_0061c990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c990);
    /* 0061c990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c991: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c99a: call 0x61c96f */ r_esp -= 4; W32(r_esp, 0x61c99fu); f_0061c96f();
    /* 0061c99f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061c9a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061c9a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c9a7: je 0x61c9b5 */ if (fZ) goto L_0061c9b5;
L_0061c9a9:; BB(0x0061c9a9);
    /* 0061c9a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61c9b2u); f_0048ac1b();
    /* 0061c9b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061c9b5:; BB(0x0061c9b5);
    /* 0061c9b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061c9ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061c9bb: ret 4 */ FN_RET(0x0061c990); r_esp += 8; return;
}

void f_0061c9c0(void) /* FUN_0061c9c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061c9c0);
    /* 0061c9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061c9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061c9c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061c9c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061c9c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9cf: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061c9d2: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c9d5: jne 0x61ca0a */ if (!fZ) goto L_0061ca0a;
L_0061c9d7:; BB(0x0061c9d7);
    /* 0061c9d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9dd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061c9e0: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c9e3: jne 0x61ca0a */ if (!fZ) goto L_0061ca0a;
L_0061c9e5:; BB(0x0061c9e5);
    /* 0061c9e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9eb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061c9ee: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c9f1: jne 0x61ca0a */ if (!fZ) goto L_0061ca0a;
L_0061c9f3:; BB(0x0061c9f3);
    /* 0061c9f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061c9f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061c9f9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0061c9fc: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061c9ff: jne 0x61ca0a */ if (!fZ) goto L_0061ca0a;
L_0061ca01:; BB(0x0061ca01);
    /* 0061ca01: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061ca08: jmp 0x61ca11 */ goto L_0061ca11;
L_0061ca0a:; BB(0x0061ca0a);
    /* 0061ca0a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061ca11:; BB(0x0061ca11);
    /* 0061ca11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ca14: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ca16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ca17: ret 4 */ FN_RET(0x0061c9c0); r_esp += 8; return;
}

void f_0061ca1a(void) /* FUN_0061ca1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ca1a);
    /* 0061ca1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca1b: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ca1d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ca20: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ca23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca29: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061ca2c: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca2f: jge 0x61ca64 */ if ((fS==fO)) goto L_0061ca64;
L_0061ca31:; BB(0x0061ca31);
    /* 0061ca31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca34: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca37: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061ca3a: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca3d: jle 0x61ca64 */ if ((fZ||fS!=fO)) goto L_0061ca64;
L_0061ca3f:; BB(0x0061ca3f);
    /* 0061ca3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca45: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061ca48: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca4b: jge 0x61ca64 */ if ((fS==fO)) goto L_0061ca64;
L_0061ca4d:; BB(0x0061ca4d);
    /* 0061ca4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca53: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0061ca56: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca59: jle 0x61ca64 */ if ((fZ||fS!=fO)) goto L_0061ca64;
L_0061ca5b:; BB(0x0061ca5b);
    /* 0061ca5b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061ca62: jmp 0x61ca6b */ goto L_0061ca6b;
L_0061ca64:; BB(0x0061ca64);
    /* 0061ca64: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061ca6b:; BB(0x0061ca6b);
    /* 0061ca6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ca6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ca70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ca71: ret 4 */ FN_RET(0x0061ca1a); r_esp += 8; return;
}

void f_0061ca74(void) /* FUN_0061ca74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ca74);
    /* 0061ca74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ca75: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ca77: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ca7a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ca7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ca83: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca86: jl 0x61cab2 */ if ((fS!=fO)) goto L_0061cab2;
L_0061ca88:; BB(0x0061ca88);
    /* 0061ca88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061ca8e: cmp eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca91: jge 0x61cab2 */ if ((fS==fO)) goto L_0061cab2;
L_0061ca93:; BB(0x0061ca93);
    /* 0061ca93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ca96: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ca99: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ca9c: jl 0x61cab2 */ if ((fS!=fO)) goto L_0061cab2;
L_0061ca9e:; BB(0x0061ca9e);
    /* 0061ca9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061caa1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061caa4: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061caa7: jge 0x61cab2 */ if ((fS==fO)) goto L_0061cab2;
L_0061caa9:; BB(0x0061caa9);
    /* 0061caa9: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061cab0: jmp 0x61cab9 */ goto L_0061cab9;
L_0061cab2:; BB(0x0061cab2);
    /* 0061cab2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061cab9:; BB(0x0061cab9);
    /* 0061cab9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cabc: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cabe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cabf: ret 8 */ FN_RET(0x0061ca74); r_esp += 12; return;
}

void f_0061cac2(void) /* FUN_0061cac2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cac2);
    /* 0061cac2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cac3: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cac5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cac8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cacb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cace: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cad1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061cad4: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cad7: jl 0x61cb0c */ if ((fS!=fO)) goto L_0061cb0c;
L_0061cad9:; BB(0x0061cad9);
    /* 0061cad9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cadc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cadf: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061cae2: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cae5: jg 0x61cb0c */ if ((!fZ&&fS==fO)) goto L_0061cb0c;
L_0061cae7:; BB(0x0061cae7);
    /* 0061cae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061caea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061caed: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061caf0: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061caf3: jl 0x61cb0c */ if ((fS!=fO)) goto L_0061cb0c;
L_0061caf5:; BB(0x0061caf5);
    /* 0061caf5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061caf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cafb: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0061cafe: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cb01: jg 0x61cb0c */ if ((!fZ&&fS==fO)) goto L_0061cb0c;
L_0061cb03:; BB(0x0061cb03);
    /* 0061cb03: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061cb0a: jmp 0x61cb13 */ goto L_0061cb13;
L_0061cb0c:; BB(0x0061cb0c);
    /* 0061cb0c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061cb13:; BB(0x0061cb13);
    /* 0061cb13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cb16: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cb18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cb19: ret 4 */ FN_RET(0x0061cac2); r_esp += 8; return;
}

void f_0061cb1c(void) /* FUN_0061cb1c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cb1c);
    /* 0061cb1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cb1f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cb22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cb25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cb28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb2b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061cb2e: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cb31: jl 0x61cb66 */ if ((fS!=fO)) goto L_0061cb66;
L_0061cb33:; BB(0x0061cb33);
    /* 0061cb33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cb36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb39: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061cb3c: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cb3f: jg 0x61cb66 */ if ((!fZ&&fS==fO)) goto L_0061cb66;
L_0061cb41:; BB(0x0061cb41);
    /* 0061cb41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cb44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb47: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061cb4a: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cb4d: jl 0x61cb66 */ if ((fS!=fO)) goto L_0061cb66;
L_0061cb4f:; BB(0x0061cb4f);
    /* 0061cb4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cb52: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061cb55: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0061cb58: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cb5b: jg 0x61cb66 */ if ((!fZ&&fS==fO)) goto L_0061cb66;
L_0061cb5d:; BB(0x0061cb5d);
    /* 0061cb5d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0061cb64: jmp 0x61cb6d */ goto L_0061cb6d;
L_0061cb66:; BB(0x0061cb66);
    /* 0061cb66: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061cb6d:; BB(0x0061cb6d);
    /* 0061cb6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cb70: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cb72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cb73: ret 4 */ FN_RET(0x0061cb1c); r_esp += 8; return;
}

void f_0061cb76(void) /* FUN_0061cb76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cb76);
    /* 0061cb76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cb77: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cb79: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cb7c: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0061cb7f: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0061cb82: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x61cb87u); f_005dfbf0();
    /* 0061cb87: mov dword ptr [ebp - 0x30], 0x63ce44 */ W32((u32)(r_ebp+0xffffffd0u), 0x63ce44u);
    /* 0061cb8e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061cb91: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cb94: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061cb96: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0061cb99: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061cb9c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0061cb9f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061cba2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061cba5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061cba8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0061cbab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cbae: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cbb2: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0061cbb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cbb6: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0061cbb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cbba: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x61cbc0u); call_ind(t); }
    /* 0061cbc0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061cbc3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061cbc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061cbc9: mov dword ptr [ebp - 0x18], 0x636fec */ W32((u32)(r_ebp+0xffffffe8u), 0x636fecu);
    /* 0061cbd0: mov dword ptr [ebp - 0x18], 0x63bbb4 */ W32((u32)(r_ebp+0xffffffe8u), 0x63bbb4u);
    /* 0061cbd7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061cbda: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cbdd: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061cbe0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0061cbe2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0061cbe4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0061cbe7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0061cbea: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061cbed: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0061cbf0: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0061cbf3: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061cbf6: mov dword ptr [ebp - 0x18], 0x63ce44 */ W32((u32)(r_ebp+0xffffffe8u), 0x63ce44u);
    /* 0061cbfd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061cc00: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0061cc03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cc06: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc09: jge 0x61cc38 */ if ((fS==fO)) goto L_0061cc38;
L_0061cc0b:; BB(0x0061cc0b);
    /* 0061cc0b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc0e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061cc11: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061cc14: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc17: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cc1a: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0061cc1d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cc23: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0061cc26: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc29: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061cc2c: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0061cc2f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc32: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cc35: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0061cc38:; BB(0x0061cc38);
    /* 0061cc38: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061cc3b: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc3e: jge 0x61cc99 */ if ((fS==fO)) goto L_0061cc99;
L_0061cc40:; BB(0x0061cc40);
    /* 0061cc40: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061cc46: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0061cc49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cc4c: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc4f: jle 0x61cc59 */ if ((fZ||fS!=fO)) goto L_0061cc59;
L_0061cc51:; BB(0x0061cc51);
    /* 0061cc51: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cc54: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0061cc57: jmp 0x61cc5f */ goto L_0061cc5f;
L_0061cc59:; BB(0x0061cc59);
    /* 0061cc59: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061cc5c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_0061cc5f:; BB(0x0061cc5f);
    /* 0061cc5f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc62: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061cc65: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0061cc68: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc6b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061cc6e: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0061cc71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cc74: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc77: jge 0x61cc81 */ if ((fS==fO)) goto L_0061cc81;
L_0061cc79:; BB(0x0061cc79);
    /* 0061cc79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cc7c: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0061cc7f: jmp 0x61cc87 */ goto L_0061cc87;
L_0061cc81:; BB(0x0061cc81);
    /* 0061cc81: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061cc84: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_0061cc87:; BB(0x0061cc87);
    /* 0061cc87: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc8a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061cc8d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0061cc90: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cc93: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cc96: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0061cc99:; BB(0x0061cc99);
    /* 0061cc99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cc9c: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cc9f: jle 0x61ccfa */ if ((fZ||fS!=fO)) goto L_0061ccfa;
L_0061cca1:; BB(0x0061cca1);
    /* 0061cca1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cca4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061cca7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0061ccaa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ccad: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ccb0: jle 0x61ccba */ if ((fZ||fS!=fO)) goto L_0061ccba;
L_0061ccb2:; BB(0x0061ccb2);
    /* 0061ccb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ccb5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0061ccb8: jmp 0x61ccc0 */ goto L_0061ccc0;
L_0061ccba:; BB(0x0061ccba);
    /* 0061ccba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ccbd: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_0061ccc0:; BB(0x0061ccc0);
    /* 0061ccc0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061ccc3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061ccc6: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0061ccc9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cccc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cccf: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0061ccd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ccd5: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ccd8: jge 0x61cce2 */ if ((fS==fO)) goto L_0061cce2;
L_0061ccda:; BB(0x0061ccda);
    /* 0061ccda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ccdd: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0061cce0: jmp 0x61cce8 */ goto L_0061cce8;
L_0061cce2:; BB(0x0061cce2);
    /* 0061cce2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061cce5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0061cce8:; BB(0x0061cce8);
    /* 0061cce8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cceb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061ccee: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0061ccf1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061ccf4: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ccf7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0061ccfa:; BB(0x0061ccfa);
    /* 0061ccfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ccfd: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061cd00: jle 0x61cd2f */ if ((fZ||fS!=fO)) goto L_0061cd2f;
L_0061cd02:; BB(0x0061cd02);
    /* 0061cd02: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061cd08: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061cd0b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd0e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061cd11: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0061cd14: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd1a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0061cd1d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cd23: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0061cd26: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd29: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cd2c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0061cd2f:; BB(0x0061cd2f);
    /* 0061cd2f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061cd32: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061cd35: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061cd36: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0061cd3b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0061cd3b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0061cd3b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0061cd3d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061cd40: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0061cd43: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x61cd48u); f_005dfc0f();
    /* 0061cd48: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0061cd4b: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x61cd50u); f_005dfc0f();
    /* 0061cd50: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061cd53: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cd55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cd56: ret 8 */ FN_RET(0x0061cb76); r_esp += 12; return;
}

void f_0061cd59(void) /* FUN_0061cd59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cd59);
    /* 0061cd59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd5a: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cd5c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cd5f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061cd62: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd65: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x61cd6au); f_0048e320();
    /* 0061cd6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd6d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cd70: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x61cd75u); f_005dd290();
    /* 0061cd75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd78: mov dword ptr [eax], 0x63ce4c */ W32((u32)(r_eax), 0x63ce4cu);
    /* 0061cd7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd81: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0061cd88: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd8b: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 0061cd92: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cd95: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0061cd9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cd9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cda0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cda2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cda4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cda7: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cdaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdab: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61cdb1u); call_ind(t); }
    /* 0061cdb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdb9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cdbc: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061cdbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdc0: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61cdc6u); call_ind(t); }
    /* 0061cdc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cdd1: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cdd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdd5: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61cddbu); call_ind(t); }
    /* 0061cddb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061cdde: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 0061cde5: push 0x818 */ { u32 v = 0x818u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cdea: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61cdefu); f_0048ab58();
    /* 0061cdef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cdf2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061cdf5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cdf9: je 0x61ce08 */ if (fZ) goto L_0061ce08;
L_0061cdfb:; BB(0x0061cdfb);
    /* 0061cdfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cdfe: call 0x4a24c0 */ r_esp -= 4; W32(r_esp, 0x61ce03u); f_004a24c0();
    /* 0061ce03: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061ce06: jmp 0x61ce0f */ goto L_0061ce0f;
L_0061ce08:; BB(0x0061ce08);
    /* 0061ce08: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0061ce0f:; BB(0x0061ce0f);
    /* 0061ce0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ce12: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ce15: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0061ce18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ce1b: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0061ce22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ce25: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ce27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ce28: ret  */ FN_RET(0x0061cd59); r_esp += 4; return;
}

void f_0061ce29(void) /* FUN_0061ce29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061ce29);
    /* 0061ce29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce2a: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ce2c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ce2f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061ce32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ce35: mov dword ptr [eax], 0x63ce4c */ W32((u32)(r_eax), 0x63ce4cu);
    /* 0061ce3b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ce3e: call 0x61d33f */ r_esp -= 4; W32(r_esp, 0x61ce43u); f_0061d33f();
    /* 0061ce43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ce46: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061ce49: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061ce4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061ce4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ce52: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce56: je 0x61ce69 */ if (fZ) goto L_0061ce69;
L_0061ce58:; BB(0x0061ce58);
    /* 0061ce58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ce5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061ce5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ce62: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61ce64u); call_ind(t); }
    /* 0061ce64: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061ce67: jmp 0x61ce70 */ goto L_0061ce70;
L_0061ce69:; BB(0x0061ce69);
    /* 0061ce69: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0061ce70:; BB(0x0061ce70);
    /* 0061ce70: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ce73: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ce76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061ce79: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ce7c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061ce7f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce83: je 0x61cead */ if (fZ) goto L_0061cead;
L_0061ce85:; BB(0x0061ce85);
    /* 0061ce85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ce88: call 0x45a8ec */ r_esp -= 4; W32(r_esp, 0x61ce8du); f_0045a8ec();
    /* 0061ce8d: mov eax, 1 */ r_eax = 0x1u;
    /* 0061ce92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061ce95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ce97: je 0x61cea5 */ if (fZ) goto L_0061cea5;
L_0061ce99:; BB(0x0061ce99);
    /* 0061ce99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ce9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ce9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61cea2u); f_0048ac1b();
    /* 0061cea2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061cea5:; BB(0x0061cea5);
    /* 0061cea5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061cea8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061ceab: jmp 0x61ceb4 */ goto L_0061ceb4;
L_0061cead:; BB(0x0061cead);
    /* 0061cead: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0061ceb4:; BB(0x0061ceb4);
    /* 0061ceb4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ceb7: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0061ceba: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061cebd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061cec0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cec1: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61cec6u); f_0048ac1b();
    /* 0061cec6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cec9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061cecc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cecf: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x61ced4u); f_005dd2d3();
    /* 0061ced4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ced7: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x61cedcu); f_0048e361();
    /* 0061cedc: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cedf: ret  */ FN_RET(0x0061ce29); r_esp += 4; return;
}

void f_0061cee0(void) /* FUN_0061cee0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cee0);
    /* 0061cee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cee7: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 0061ceec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ceef: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0061cef2: call 0x61c12c */ r_esp -= 4; W32(r_esp, 0x61cef7u); f_0061c12c();
    /* 0061cef7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cefa: ret  */ FN_RET(0x0061cee0); r_esp += 4; return;
}

void f_0061cefb(void) /* FUN_0061cefb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cefb);
    /* 0061cefb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cefc: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cefe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ceff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cf02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf05: mov dword ptr [eax + 0x5c], 1 */ W32((u32)(r_eax+0x5cu), 0x1u);
    /* 0061cf0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cf0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cf0f: ret  */ FN_RET(0x0061cefb); r_esp += 4; return;
}

void f_0061cf10(void) /* FUN_0061cf10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cf10);
    /* 0061cf10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf11: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cf13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cf17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf1a: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 0061cf21: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cf23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cf24: ret  */ FN_RET(0x0061cf10); r_esp += 4; return;
}

void f_0061cf25(void) /* FUN_0061cf25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cf25);
    /* 0061cf25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf26: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cf28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf29: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cf2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf32: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0061cf35: sub eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061cf38: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cf3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cf3b: ret  */ FN_RET(0x0061cf25); r_esp += 4; return;
}

void f_0061cf3c(void) /* FUN_0061cf3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cf3c);
    /* 0061cf3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cf3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf40: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cf43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cf49: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0061cf4c: sub eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061cf4f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061cf51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061cf52: ret  */ FN_RET(0x0061cf3c); r_esp += 4; return;
}

void f_0061cf53(void) /* FUN_0061cf53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061cf53);
    /* 0061cf53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf54: mov ebp, esp */ r_ebp = r_esp;
    /* 0061cf56: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061cf59: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0061cf5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061cf5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf60: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x61cf66u); call_ind(t); }
    /* 0061cf66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cf68: je 0x61cf6f */ if (fZ) goto L_0061cf6f;
L_0061cf6a:; BB(0x0061cf6a);
    /* 0061cf6a: jmp 0x61d23e */ goto L_0061d23e;
L_0061cf6f:; BB(0x0061cf6f);
    /* 0061cf6f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061cf72: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cf76: jne 0x61cf7d */ if (!fZ) goto L_0061cf7d;
L_0061cf78:; BB(0x0061cf78);
    /* 0061cf78: jmp 0x61d23e */ goto L_0061d23e;
L_0061cf7d:; BB(0x0061cf7d);
    /* 0061cf7d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cf80: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061cf82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061cf85: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0061cf88: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061cf8b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061cf8e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061cf91: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061cf94: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061cf97: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0061cf9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cf9b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061cf9e: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cfa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061cfa2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061cfa5: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061cfa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061cfa9: call dword ptr [0x6331d0] */ { u32 t = R32((u32)(0x6331d0u)); r_esp -= 4; W32(r_esp, 0x61cfafu); call_ind(t); }
    /* 0061cfaf: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061cfb1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61cfb6u); f_0048ab58();
    /* 0061cfb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061cfb9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061cfbc: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061cfc0: je 0x61cfdb */ if (fZ) goto L_0061cfdb;
L_0061cfc2:; BB(0x0061cfc2);
    /* 0061cfc2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061cfc5: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x61cfcau); f_005dfbf0();
    /* 0061cfca: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061cfcd: mov dword ptr [edx], 0x63ce44 */ W32((u32)(r_edx), 0x63ce44u);
    /* 0061cfd3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061cfd6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061cfd9: jmp 0x61cfe2 */ goto L_0061cfe2;
L_0061cfdb:; BB(0x0061cfdb);
    /* 0061cfdb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0061cfe2:; BB(0x0061cfe2);
    /* 0061cfe2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061cfe5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061cfe8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061cfeb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061cfee: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061cff1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0061cff3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0061cff5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0061cff8: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0061cffb: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061cffe: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0061d001: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0061d004: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061d007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d00b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d00e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d011: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x61d016u); f_005dd425();
    /* 0061d016: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d019: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d01c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d021u); f_005dd4d2();
    /* 0061d021: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d024: jle 0x61d112 */ if ((fZ||fS!=fO)) goto L_0061d112;
L_0061d02a:; BB(0x0061d02a);
    /* 0061d02a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d02d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d030: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d035u); f_005dd4d2();
    /* 0061d035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d037: je 0x61d084 */ if (fZ) goto L_0061d084;
L_0061d039:; BB(0x0061d039);
    /* 0061d039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d03b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d03e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d041: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d046u); f_005dd560();
    /* 0061d046: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061d049: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d04c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d04d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d050: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d053: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x61d058u); f_005dd469();
    /* 0061d058: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d05b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0061d05e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061d061: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061d064: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d068: je 0x61d07b */ if (fZ) goto L_0061d07b;
L_0061d06a:; BB(0x0061d06a);
    /* 0061d06a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d06c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061d06f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d071: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061d074: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61d076u); call_ind(t); }
    /* 0061d076: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0061d079: jmp 0x61d082 */ goto L_0061d082;
L_0061d07b:; BB(0x0061d07b);
    /* 0061d07b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0061d082:; BB(0x0061d082);
    /* 0061d082: jmp 0x61d02a */ goto L_0061d02a;
L_0061d084:; BB(0x0061d084);
    /* 0061d084: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d086: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61d08bu); f_0048ab58();
    /* 0061d08b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d08e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0061d091: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d095: je 0x61d0b0 */ if (fZ) goto L_0061d0b0;
L_0061d097:; BB(0x0061d097);
    /* 0061d097: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061d09a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x61d09fu); f_005dfbf0();
    /* 0061d09f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061d0a2: mov dword ptr [eax], 0x63ce44 */ W32((u32)(r_eax), 0x63ce44u);
    /* 0061d0a8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061d0ab: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0061d0ae: jmp 0x61d0b7 */ goto L_0061d0b7;
L_0061d0b0:; BB(0x0061d0b0);
    /* 0061d0b0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0061d0b7:; BB(0x0061d0b7);
    /* 0061d0b7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061d0ba: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d0bd: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d0c0: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d0c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d0c6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d0c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061d0cb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0061d0cd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d0d0: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0061d0d3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061d0d6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0061d0d9: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061d0dc: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0061d0df: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d0e2: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0061d0e5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d0e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0e8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d0eb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061d0ee: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d0f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d0f4: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d0f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0f8: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61d0feu); call_ind(t); }
    /* 0061d0fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d102: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d105: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d108: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x61d10du); f_005dd425();
    /* 0061d10d: jmp 0x61d23e */ goto L_0061d23e;
L_0061d112:; BB(0x0061d112);
    /* 0061d112: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061d119: jmp 0x61d124 */ goto L_0061d124;
L_0061d11b:; BB(0x0061d11b);
    /* 0061d11b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d11e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d121: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0061d124:; BB(0x0061d124);
    /* 0061d124: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d127: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d12a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d12fu); f_005dd4d2();
    /* 0061d12f: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d132: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d135: jg 0x61d23e */ if ((!fZ&&fS==fO)) goto L_0061d23e;
L_0061d13b:; BB(0x0061d13b);
    /* 0061d13b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d13e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d141: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d144: jmp 0x61d14f */ goto L_0061d14f;
L_0061d146:; BB(0x0061d146);
    /* 0061d146: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d149: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d14c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061d14f:; BB(0x0061d14f);
    /* 0061d14f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d152: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d155: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d15au); f_005dd4d2();
    /* 0061d15a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d15d: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d160: jg 0x61d239 */ if ((!fZ&&fS==fO)) goto L_0061d239;
L_0061d166:; BB(0x0061d166);
    /* 0061d166: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d169: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d16a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d16d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d170: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d175u); f_005dd560();
    /* 0061d175: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061d178: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d17b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d17c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d17f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d182: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d187u); f_005dd560();
    /* 0061d187: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d18a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d18d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d191: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d194: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d198: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0061d19b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d19c: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x61d1a2u); call_ind(t); }
    /* 0061d1a2: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061d1a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1a6: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x61d1acu); call_ind(t); }
    /* 0061d1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d1ae: jne 0x61d234 */ if (!fZ) goto L_0061d234;
L_0061d1b4:; BB(0x0061d1b4);
    /* 0061d1b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d1b7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d1ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d1be: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d1c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1c2: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061d1c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1c6: call dword ptr [0x6331d0] */ { u32 t = R32((u32)(0x6331d0u)); r_esp -= 4; W32(r_esp, 0x61d1ccu); call_ind(t); }
    /* 0061d1cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d1cf: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d1d2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061d1d5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0061d1d7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d1da: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061d1dd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061d1e0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0061d1e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d1e6: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0061d1e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d1ed: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061d1f0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d1f3: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x61d1f8u); f_005dd469();
    /* 0061d1f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d1fb: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0061d1fe: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061d201: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061d204: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d208: je 0x61d21b */ if (fZ) goto L_0061d21b;
L_0061d20a:; BB(0x0061d20a);
    /* 0061d20a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d20c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061d20f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d211: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061d214: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61d216u); call_ind(t); }
    /* 0061d216: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0061d219: jmp 0x61d222 */ goto L_0061d222;
L_0061d21b:; BB(0x0061d21b);
    /* 0061d21b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0061d222:; BB(0x0061d222);
    /* 0061d222: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061d229: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d22c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d22f: jmp 0x61d146 */ goto L_0061d146;
L_0061d234:; BB(0x0061d234);
    /* 0061d234: jmp 0x61d146 */ goto L_0061d146;
L_0061d239:; BB(0x0061d239);
    /* 0061d239: jmp 0x61d11b */ goto L_0061d11b;
L_0061d23e:; BB(0x0061d23e);
    /* 0061d23e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d241: ret 4 */ FN_RET(0x0061cf53); r_esp += 8; return;
}

void f_0061d244(void) /* FUN_0061d244 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d244);
    /* 0061d244: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d245: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d247: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d24a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061d24d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061d254: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d258: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061d25e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061d261: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d264: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d269u); f_005dd560();
    /* 0061d269: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061d26c:; BB(0x0061d26c);
    /* 0061d26c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d270: je 0x61d2da */ if (fZ) goto L_0061d2da;
L_0061d272:; BB(0x0061d272);
    /* 0061d272: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d275: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061d277: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061d27a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0061d27d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d280: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061d283: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d286: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061d289: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d28c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d28f: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61d294u); f_005e06e1();
    /* 0061d294: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d297: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d29a: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61d29fu); f_005e06d0();
    /* 0061d29f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2a2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d2a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2a6: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61d2acu); call_ind(t); }
    /* 0061d2ac: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061d2af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d2b3: call 0x5e0247 */ r_esp -= 4; W32(r_esp, 0x61d2b8u); f_005e0247();
    /* 0061d2b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d2bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d2be: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061d2c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d2c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2c5: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061d2ca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061d2cd: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d2d0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d2d5u); f_005dd560();
    /* 0061d2d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d2d8: jmp 0x61d26c */ goto L_0061d26c;
L_0061d2da:; BB(0x0061d2da);
    /* 0061d2da: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d2dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d2dd: ret 4 */ FN_RET(0x0061d244); r_esp += 8; return;
}

void f_0061d2e0(void) /* FUN_0061d2e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d2e0);
    /* 0061d2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d2e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d2e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d2ea: ret 4 */ FN_RET(0x0061d2e0); r_esp += 8; return;
}

void f_0061d2ed(void) /* FUN_0061d2ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d2ed);
    /* 0061d2ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d2ee: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d2f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d2f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061d2f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d2f9: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d2fc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d2fe: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d301: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d304: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d307: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061d30a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d30d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061d310: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d313: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d316: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061d319: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d31b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d31c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d31f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0061d322: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d325: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d329: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61d32fu); call_ind(t); }
    /* 0061d32f: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d332: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d333: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d336: call 0x61cf53 */ r_esp -= 4; W32(r_esp, 0x61d33bu); f_0061cf53();
    /* 0061d33b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d33d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d33e: ret  */ FN_RET(0x0061d2ed); r_esp += 4; return;
}

void f_0061d33f(void) /* FUN_0061d33f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d33f);
    /* 0061d33f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d340: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d342: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d345: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0061d348:; BB(0x0061d348);
    /* 0061d348: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d34b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d34e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d353u); f_005dd4d2();
    /* 0061d353: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d355: je 0x61d3bf */ if (fZ) goto L_0061d3bf;
L_0061d357:; BB(0x0061d357);
    /* 0061d357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d359: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d35c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d35f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d364u); f_005dd560();
    /* 0061d364: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d367: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d36a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d36d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d36f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d372: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d375: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d378: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061d37b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d37e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061d381: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d384: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d388: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d38b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d38e: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x61d393u); f_005dd469();
    /* 0061d393: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d396: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061d399: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061d39c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0061d39f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d3a3: je 0x61d3b6 */ if (fZ) goto L_0061d3b6;
L_0061d3a5:; BB(0x0061d3a5);
    /* 0061d3a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d3aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061d3ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d3af: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x61d3b1u); call_ind(t); }
    /* 0061d3b1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061d3b4: jmp 0x61d3bd */ goto L_0061d3bd;
L_0061d3b6:; BB(0x0061d3b6);
    /* 0061d3b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061d3bd:; BB(0x0061d3bd);
    /* 0061d3bd: jmp 0x61d348 */ goto L_0061d348;
L_0061d3bf:; BB(0x0061d3bf);
    /* 0061d3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d3ca: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3ce: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61d3d4u); call_ind(t); }
    /* 0061d3d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d3d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d3d7: ret  */ FN_RET(0x0061d33f); r_esp += 4; return;
}

void f_0061d3d8(void) /* FUN_0061d3d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d3d8);
    /* 0061d3d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d3db: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d3de: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0061d3e1:; BB(0x0061d3e1);
    /* 0061d3e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d3e4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d3e7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x61d3ecu); f_005dd4d2();
    /* 0061d3ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d3ee: je 0x61d477 */ if (fZ) goto L_0061d477;
L_0061d3f4:; BB(0x0061d3f4);
    /* 0061d3f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d3f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d3f9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d3fc: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x61d401u); f_005dd560();
    /* 0061d401: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061d404: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d407: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d40a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d40c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d40f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d412: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d415: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061d418: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d41b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061d41e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d421: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061d424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d425: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d428: call 0x61d2e0 */ r_esp -= 4; W32(r_esp, 0x61d42du); f_0061d2e0();
    /* 0061d42d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d430: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d431: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d434: call 0x61d244 */ r_esp -= 4; W32(r_esp, 0x61d439u); f_0061d244();
    /* 0061d439: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d43c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d43d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d440: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d443: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x61d448u); f_005dd469();
    /* 0061d448: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d44b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061d44e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061d451: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061d454: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d458: je 0x61d46b */ if (fZ) goto L_0061d46b;
L_0061d45a:; BB(0x0061d45a);
    /* 0061d45a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d45c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d45f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061d461: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d464: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x61d466u); call_ind(t); }
    /* 0061d466: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061d469: jmp 0x61d472 */ goto L_0061d472;
L_0061d46b:; BB(0x0061d46b);
    /* 0061d46b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061d472:; BB(0x0061d472);
    /* 0061d472: jmp 0x61d3e1 */ goto L_0061d3e1;
L_0061d477:; BB(0x0061d477);
    /* 0061d477: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d47a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d47b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d47e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061d480: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061d483: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x61d486u); call_ind(t); }
    /* 0061d486: cmp dword ptr [0x711158], 0 */ {  u32 a = R32((u32)(0x711158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d48d: je 0x61d4ad */ if (fZ) goto L_0061d4ad;
L_0061d48f:; BB(0x0061d48f);
    /* 0061d48f: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d496: je 0x61d4ad */ if (fZ) goto L_0061d4ad;
L_0061d498:; BB(0x0061d498);
    /* 0061d498: mov dword ptr [0x711158], 0 */ W32((u32)(0x711158u), 0x0u);
    /* 0061d4a2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061d4a8: call 0x5da48b */ r_esp -= 4; W32(r_esp, 0x61d4adu); f_005da48b();
L_0061d4ad:; BB(0x0061d4ad);
    /* 0061d4ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d4af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d4b0: ret 4 */ FN_RET(0x0061d3d8); r_esp += 8; return;
}

void f_0061d4b3(void) /* FUN_0061d4b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d4b3);
    /* 0061d4b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4b4: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d4b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d4ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d4bd: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4c1: call dword ptr [0x633224] */ { u32 t = R32((u32)(0x633224u)); r_esp -= 4; W32(r_esp, 0x61d4c7u); call_ind(t); }
    /* 0061d4c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d4c9: jne 0x61d4ef */ if (!fZ) goto L_0061d4ef;
L_0061d4cb:; BB(0x0061d4cb);
    /* 0061d4cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d4ce: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d4d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d4d5: call 0x61d3d8 */ r_esp -= 4; W32(r_esp, 0x61d4dau); f_0061d3d8();
    /* 0061d4da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d4e5: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d4e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4e9: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61d4efu); call_ind(t); }
L_0061d4ef:; BB(0x0061d4ef);
    /* 0061d4ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d4f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d4f2: ret  */ FN_RET(0x0061d4b3); r_esp += 4; return;
}

void f_0061d4f3(void) /* FUN_0061d4f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d4f3);
    /* 0061d4f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d4f4: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d4f6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d4f9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061d4fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d4ff: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d502: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d504: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d507: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061d50a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d50d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061d510: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d513: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061d516: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d519: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d51c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061d51f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d521: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d522: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d525: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0061d528: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d52a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d52b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d52e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d52f: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61d535u); call_ind(t); }
    /* 0061d535: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061d538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d539: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d53c: call 0x61d3d8 */ r_esp -= 4; W32(r_esp, 0x61d541u); f_0061d3d8();
    /* 0061d541: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d544: ret  */ FN_RET(0x0061d4f3); r_esp += 4; return;
}

void f_0061d545(void) /* FUN_0061d545 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d545);
    /* 0061d545: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d546: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d549: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d54c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d54f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d551: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d555: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0061d558: mov eax, ecx */ r_eax = r_ecx;
    /* 0061d55a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d55d: ret  */ FN_RET(0x0061d545); r_esp += 4; return;
}

void f_0061d55e(void) /* FUN_0061d55e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d55e);
    /* 0061d55e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d55f: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d562: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d565: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d568: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0061d56b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d56d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d56e: ret  */ FN_RET(0x0061d55e); r_esp += 4; return;
}

void f_0061d56f(void) /* FUN_0061d56f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d56f);
    /* 0061d56f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d570: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d572: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d575: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d578: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d57b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061d57e: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d581: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d584: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0061d587: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d58a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061d58d: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d590: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d593: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0061d596: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d599: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061d59c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d59f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5a2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d5a5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d5a9: je 0x61d5d3 */ if (fZ) goto L_0061d5d3;
L_0061d5ab:; BB(0x0061d5ab);
    /* 0061d5ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d5ae: call 0x45a8ec */ r_esp -= 4; W32(r_esp, 0x61d5b3u); f_0045a8ec();
    /* 0061d5b3: mov eax, 1 */ r_eax = 0x1u;
    /* 0061d5b8: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d5bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d5bd: je 0x61d5cb */ if (fZ) goto L_0061d5cb;
L_0061d5bf:; BB(0x0061d5bf);
    /* 0061d5bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d5c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5c3: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d5c8u); f_0048ac1b();
    /* 0061d5c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061d5cb:; BB(0x0061d5cb);
    /* 0061d5cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d5ce: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061d5d1: jmp 0x61d5da */ goto L_0061d5da;
L_0061d5d3:; BB(0x0061d5d3);
    /* 0061d5d3: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0061d5da:; BB(0x0061d5da);
    /* 0061d5da: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5dc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61d5e1u); f_0048ab58();
    /* 0061d5e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d5e4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d5e7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d5eb: je 0x61d618 */ if (fZ) goto L_0061d618;
L_0061d5ed:; BB(0x0061d5ed);
    /* 0061d5ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5f1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d5f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d5f7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0061d5fa: sub edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d5fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d5fe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d601: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d604: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0061d607: sub edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d60a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d60b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d60e: call 0x45a830 */ r_esp -= 4; W32(r_esp, 0x61d613u); f_0045a830();
    /* 0061d613: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061d616: jmp 0x61d61f */ goto L_0061d61f;
L_0061d618:; BB(0x0061d618);
    /* 0061d618: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0061d61f:; BB(0x0061d61f);
    /* 0061d61f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d622: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d625: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0061d628: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d62b: call 0x61d2ed */ r_esp -= 4; W32(r_esp, 0x61d630u); f_0061d2ed();
    /* 0061d630: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d632: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d633: ret 8 */ FN_RET(0x0061d56f); r_esp += 12; return;
}

void f_0061d636(void) /* FUN_0061d636 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d636);
    /* 0061d636: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d637: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d639: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d63c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d63f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d642: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0061d645: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d648: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d64b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d64c: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d651u); f_0048ac1b();
    /* 0061d651: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d654: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061d657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d658: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x61d65du); f_00624990();
    /* 0061d65d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d660: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d664: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61d669u); f_0048ab58();
    /* 0061d669: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d66c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d66f: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0061d672: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d676: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d679: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0061d67c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d67d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x61d682u); f_00624510();
    /* 0061d682: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d685: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d688: ret 4 */ FN_RET(0x0061d636); r_esp += 8; return;
}

void f_0061d690(void) /* FUN_0061d690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d690);
    /* 0061d690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d691: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d697: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d69a: call 0x61ce29 */ r_esp -= 4; W32(r_esp, 0x61d69fu); f_0061ce29();
    /* 0061d69f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061d6a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061d6a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d6a7: je 0x61d6b5 */ if (fZ) goto L_0061d6b5;
L_0061d6a9:; BB(0x0061d6a9);
    /* 0061d6a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d6ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d6b2u); f_0048ac1b();
    /* 0061d6b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061d6b5:; BB(0x0061d6b5);
    /* 0061d6b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d6b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d6ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d6bb: ret 4 */ FN_RET(0x0061d690); r_esp += 8; return;
}

void f_0061d6c0(void) /* FUN_0061d6c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d6c0);
    /* 0061d6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d6c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d6c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6c8: push 0x63ce88 */ { u32 v = 0x63ce88u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6d1: push 0x63ce68 */ { u32 v = 0x63ce68u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6d6: call dword ptr [0x6332c0] */ { u32 t = R32((u32)(0x6332c0u)); r_esp -= 4; W32(r_esp, 0x61d6dcu); call_ind(t); }
    /* 0061d6dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d6df: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d6e3: jl 0x61d6fc */ if ((fS!=fO)) goto L_0061d6fc;
L_0061d6e5:; BB(0x0061d6e5);
    /* 0061d6e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d6e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6e9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061d6ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061d6ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061d6f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d6f3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0061d6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6f6: call dword ptr [ecx + 0x48] */ { u32 t = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, 0x61d6f9u); call_ind(t); }
    /* 0061d6f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061d6fc:; BB(0x0061d6fc);
    /* 0061d6fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d6ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d701: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d702: ret  */ FN_RET(0x0061d6c0); r_esp += 4; return;
}

void f_0061d703(void) /* FUN_0061d703 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d703);
    /* 0061d703: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d704: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d707: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d709: push 0x71115c */ { u32 v = 0x71115cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d70e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d710: call 0x61d6c0 */ r_esp -= 4; W32(r_esp, 0x61d715u); f_0061d6c0();
    /* 0061d715: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d718: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d71b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d71f: je 0x61d725 */ if (fZ) goto L_0061d725;
L_0061d721:; BB(0x0061d721);
    /* 0061d721: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d723: jmp 0x61d74e */ goto L_0061d74e;
L_0061d725:; BB(0x0061d725);
    /* 0061d725: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d727: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061d72a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d72b: mov ecx, dword ptr [0x71115c] */ r_ecx = R32((u32)(0x71115cu));
    /* 0061d731: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d733: mov eax, dword ptr [0x71115c] */ r_eax = R32((u32)(0x71115cu));
    /* 0061d738: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d739: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x61d73cu); call_ind(t); }
    /* 0061d73c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d73f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d743: je 0x61d749 */ if (fZ) goto L_0061d749;
L_0061d745:; BB(0x0061d745);
    /* 0061d745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d747: jmp 0x61d74e */ goto L_0061d74e;
L_0061d749:; BB(0x0061d749);
    /* 0061d749: mov eax, 1 */ r_eax = 0x1u;
L_0061d74e:; BB(0x0061d74e);
    /* 0061d74e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d751: ret  */ FN_RET(0x0061d703); r_esp += 4; return;
}

void f_0061d752(void) /* FUN_0061d752 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d752);
    /* 0061d752: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d753: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d755: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d756: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061d759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d75a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061d75d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d75e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d761: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d762: mov eax, dword ptr [0x71115c] */ r_eax = R32((u32)(0x71115cu));
    /* 0061d767: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d769: mov edx, dword ptr [0x71115c] */ r_edx = R32((u32)(0x71115cu));
    /* 0061d76f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d770: call dword ptr [ecx + 0x54] */ { u32 t = R32((u32)(r_ecx+0x54u)); r_esp -= 4; W32(r_esp, 0x61d773u); call_ind(t); }
    /* 0061d773: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d776: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d77a: je 0x61d780 */ if (fZ) goto L_0061d780;
L_0061d77c:; BB(0x0061d77c);
    /* 0061d77c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061d77e: jmp 0x61d785 */ goto L_0061d785;
L_0061d780:; BB(0x0061d780);
    /* 0061d780: mov eax, 1 */ r_eax = 0x1u;
L_0061d785:; BB(0x0061d785);
    /* 0061d785: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d787: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d788: ret  */ FN_RET(0x0061d752); r_esp += 4; return;
}

void f_0061d789(void) /* FUN_0061d789 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d789);
    /* 0061d789: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d78a: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d78c: cmp dword ptr [0x71115c], 0 */ {  u32 a = R32((u32)(0x71115cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d793: je 0x61d7d8 */ if (fZ) goto L_0061d7d8;
L_0061d795:; BB(0x0061d795);
    /* 0061d795: mov eax, dword ptr [0x71115c] */ r_eax = R32((u32)(0x71115cu));
    /* 0061d79a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061d79c: mov edx, dword ptr [0x71115c] */ r_edx = R32((u32)(0x71115cu));
    /* 0061d7a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7a3: call dword ptr [ecx + 0x4c] */ { u32 t = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, 0x61d7a6u); call_ind(t); }
    /* 0061d7a6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061d7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7ac: mov ecx, dword ptr [0x71115c] */ r_ecx = R32((u32)(0x71115cu));
    /* 0061d7b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d7b4: mov eax, dword ptr [0x71115c] */ r_eax = R32((u32)(0x71115cu));
    /* 0061d7b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7ba: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x61d7bdu); call_ind(t); }
    /* 0061d7bd: mov ecx, dword ptr [0x71115c] */ r_ecx = R32((u32)(0x71115cu));
    /* 0061d7c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061d7c5: mov eax, dword ptr [0x71115c] */ r_eax = R32((u32)(0x71115cu));
    /* 0061d7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7cb: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x61d7ceu); call_ind(t); }
    /* 0061d7ce: mov dword ptr [0x71115c], 0 */ W32((u32)(0x71115cu), 0x0u);
L_0061d7d8:; BB(0x0061d7d8);
    /* 0061d7d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d7d9: ret  */ FN_RET(0x0061d789); r_esp += 4; return;
}

void f_0061d7da(void) /* FUN_0061d7da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d7da);
    /* 0061d7da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7db: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d7dd: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061d7e2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061d7e5: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x61d7eau); f_006201dc();
    /* 0061d7ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d7ec: je 0x61d80b */ if (fZ) goto L_0061d80b;
L_0061d7ee:; BB(0x0061d7ee);
    /* 0061d7ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d7f0: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061d7f6: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0061d7f9: call 0x6201af */ r_esp -= 4; W32(r_esp, 0x61d7feu); f_006201af();
    /* 0061d7fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d800: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061d806: call 0x460e1d */ r_esp -= 4; W32(r_esp, 0x61d80bu); f_00460e1d();
L_0061d80b:; BB(0x0061d80b);
    /* 0061d80b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d80e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d80f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d811: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d816: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061d81b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061d81e: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061d821: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d822: call dword ptr [0x6331d8] */ { u32 t = R32((u32)(0x6331d8u)); r_esp -= 4; W32(r_esp, 0x61d828u); call_ind(t); }
    /* 0061d828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d829: ret  */ FN_RET(0x0061d7da); r_esp += 4; return;
}

void f_0061d82a(void) /* FUN_0061d82a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d82a);
    /* 0061d82a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d82b: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d82d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d82e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d831: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d834: call 0x61cd59 */ r_esp -= 4; W32(r_esp, 0x61d839u); f_0061cd59();
    /* 0061d839: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d83c: mov dword ptr [eax], 0x63ceec */ W32((u32)(r_eax), 0x63ceecu);
    /* 0061d842: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d845: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0061d84c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d84f: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 0061d856: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d859: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0061d860: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d863: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 0061d86a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d86d: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 0061d874: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d877: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 0061d881: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d884: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 0061d88e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d891: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 0061d89b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d89e: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 0061d8a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8ab: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 0061d8b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8b8: mov dword ptr [edx + 0x74], 1 */ W32((u32)(r_edx+0x74u), 0x1u);
    /* 0061d8bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8c2: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 0061d8c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8cc: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0061d8d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8d9: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 0061d8e3: mov eax, dword ptr [0x687130] */ r_eax = R32((u32)(0x687130u));
    /* 0061d8e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8ec: call 0x61d636 */ r_esp -= 4; W32(r_esp, 0x61d8f1u); f_0061d636();
    /* 0061d8f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d8f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d8f7: ret  */ FN_RET(0x0061d82a); r_esp += 4; return;
}

void f_0061d8f8(void) /* FUN_0061d8f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d8f8);
    /* 0061d8f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d8f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d8fb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d8fe: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d901: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d904: mov dword ptr [eax], 0x63ceec */ W32((u32)(r_eax), 0x63ceecu);
    /* 0061d90a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d90d: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d911: je 0x61d94d */ if (fZ) goto L_0061d94d;
L_0061d913:; BB(0x0061d913);
    /* 0061d913: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d915: call dword ptr [0x633278] */ { u32 t = R32((u32)(0x633278u)); r_esp -= 4; W32(r_esp, 0x61d91bu); call_ind(t); }
    /* 0061d91b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d91d: call dword ptr [0x633278] */ { u32 t = R32((u32)(0x633278u)); r_esp -= 4; W32(r_esp, 0x61d923u); call_ind(t); }
    /* 0061d923: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061d929: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d92c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d92f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d930: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d935u); f_0048ac1b();
    /* 0061d935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d938: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061d93e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d941: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d945: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d94au); f_0048ac1b();
    /* 0061d94a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061d94d:; BB(0x0061d94d);
    /* 0061d94d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d94f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d951: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d954: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061d957: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d958: call dword ptr [0x6331d4] */ { u32 t = R32((u32)(0x6331d4u)); r_esp -= 4; W32(r_esp, 0x61d95eu); call_ind(t); }
    /* 0061d95e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d960: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d962: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d967: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d96a: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0061d96d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d96e: call dword ptr [0x6331d8] */ { u32 t = R32((u32)(0x6331d8u)); r_esp -= 4; W32(r_esp, 0x61d974u); call_ind(t); }
    /* 0061d974: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d977: call 0x620665 */ r_esp -= 4; W32(r_esp, 0x61d97cu); f_00620665();
    /* 0061d97c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d97f: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 0061d985: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d988: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d98c: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x61d991u); f_0048ac1b();
    /* 0061d991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d994: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d997: call 0x61ce29 */ r_esp -= 4; W32(r_esp, 0x61d99cu); f_0061ce29();
    /* 0061d99c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d99e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d99f: ret  */ FN_RET(0x0061d8f8); r_esp += 4; return;
}

void f_0061d9a0(void) /* FUN_0061d9a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d9a0);
    /* 0061d9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d9a3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d9a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9a7: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0061d9aa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061d9ad: call 0x61cee0 */ r_esp -= 4; W32(r_esp, 0x61d9b2u); f_0061cee0();
    /* 0061d9b2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9b4: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061d9b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9b8: push 0x6f09e8 */ { u32 v = 0x6f09e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9bd: push 0x6f09ec */ { u32 v = 0x6f09ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9c2: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061d9c8: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0061d9cb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061d9d1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0061d9d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061d9d6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x61d9d9u); call_ind(t); }
    /* 0061d9d9: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061d9dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9dd: call 0x626d30 */ r_esp -= 4; W32(r_esp, 0x61d9e2u); f_00626d30();
    /* 0061d9e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d9e5: fstp qword ptr [0x6f0950] */ W_F64((u32)(0x6f0950u), ST(0)); FPOP();
    /* 0061d9eb: mov ecx, dword ptr [0x6f0954] */ r_ecx = R32((u32)(0x6f0954u));
    /* 0061d9f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9f2: mov edx, dword ptr [0x6f0950] */ r_edx = R32((u32)(0x6f0950u));
    /* 0061d9f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d9f9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061d9fc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0061d9ff: call 0x61c2e5 */ r_esp -= 4; W32(r_esp, 0x61da04u); f_0061c2e5();
    /* 0061da04: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da06: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0061da09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061da0a: push 0x6f09f4 */ { u32 v = 0x6f09f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da0f: push 0x6f09f8 */ { u32 v = 0x6f09f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da14: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061da1a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0061da1d: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061da22: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0061da25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061da27: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x61da2au); call_ind(t); }
    /* 0061da2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da2c: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x61da32u); call_ind(t); }
    /* 0061da32: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061da35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da37: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x61da3du); call_ind(t); }
    /* 0061da3d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061da40: push 0x6f0a04 */ { u32 v = 0x6f0a04u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da45: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0061da48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061da49: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x61da4eu); f_006325b0();
    /* 0061da4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061da51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061da53: jne 0x61da67 */ if (!fZ) goto L_0061da67;
L_0061da55:; BB(0x0061da55);
    /* 0061da55: cmp dword ptr [0x711140], 0 */ {  u32 a = R32((u32)(0x711140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061da5c: jne 0x61da67 */ if (!fZ) goto L_0061da67;
L_0061da5e:; BB(0x0061da5e);
    /* 0061da5e: cmp dword ptr [ebp - 4], 0x280 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061da65: jg 0x61da70 */ if ((!fZ&&fS==fO)) goto L_0061da70;
L_0061da67:; BB(0x0061da67);
    /* 0061da67: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0061da6e: jmp 0x61da77 */ goto L_0061da77;
L_0061da70:; BB(0x0061da70);
    /* 0061da70: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0061da77:; BB(0x0061da77);
    /* 0061da77: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da7c: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da81: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061da84: call 0x61fd20 */ r_esp -= 4; W32(r_esp, 0x61da89u); f_0061fd20();
    /* 0061da89: push 0x7f02 */ { u32 v = 0x7f02u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061da90: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61da96u); call_ind(t); }
    /* 0061da96: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061da99: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 0061da9c: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0061daa1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061daa3: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61daa9u); call_ind(t); }
    /* 0061daa9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061daac: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0061daaf: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dab1: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061dab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dab8: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61dabeu); call_ind(t); }
    /* 0061dabe: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dac1: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 0061dac4: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0061dac6: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061dacc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dacd: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61dad3u); call_ind(t); }
    /* 0061dad3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dad6: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 0061dad9: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dadb: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061dae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dae2: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61dae8u); call_ind(t); }
    /* 0061dae8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061daeb: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 0061daf1: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0061daf3: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061daf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dafa: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61db00u); call_ind(t); }
    /* 0061db00: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db03: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 0061db09: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0061db0b: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061db11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061db12: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61db18u); call_ind(t); }
    /* 0061db18: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db1b: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 0061db21: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0061db23: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061db29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061db2a: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x61db30u); call_ind(t); }
    /* 0061db30: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db33: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0061db39: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db3c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db3f: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0061db42: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0061db48: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db4b: mov dword ptr [edx + 0x98], 0x20 */ W32((u32)(r_edx+0x98u), 0x20u);
    /* 0061db55: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061db58: mov dword ptr [eax + 0x9c], 0x61e0aa */ W32((u32)(r_eax+0x9cu), 0x61e0aau);
    /* 0061db62: mov ecx, dword ptr [0x687130] */ r_ecx = R32((u32)(0x687130u));
    /* 0061db68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061db69: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x61db6eu); f_00624990();
    /* 0061db6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061db71: mov esi, eax */ r_esi = r_eax;
    /* 0061db73: push 0x6f0a08 */ { u32 v = 0x6f0a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0061db78: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x61db7du); f_00624990();
    /* 0061db7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061db80: lea edx, [esi + eax + 1] */ r_edx = (u32)(r_esi+r_eax+0x1u);
    /* 0061db84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061db85: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61db8au); f_0048ab58();
    /* 0061db8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061db8d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061db90: mov eax, dword ptr [0x687130] */ r_eax = R32((u32)(0x687130u));
    /* 0061db95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061db96: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061db99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061db9a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x61db9fu); f_00624510();
    /* 0061db9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dba2: push 0x6f0a10 */ { u32 v = 0x6f0a10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dba7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061dbaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dbab: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x61dbb0u); f_00624520();
    /* 0061dbb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061dbb3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dbb6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061dbb9: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 0061dbbf: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dbc2: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 0061dbcc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dbcf: mov dword ptr [eax + 0xa4], 4 */ W32((u32)(r_eax+0xa4u), 0x4u);
    /* 0061dbd9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dbdc: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 0061dbe2: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 0061dbe8: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dbea: mov eax, dword ptr [0x6f6ef4] */ r_eax = R32((u32)(0x6f6ef4u));
    /* 0061dbef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dbf0: call dword ptr [0x6331c8] */ { u32 t = R32((u32)(0x6331c8u)); r_esp -= 4; W32(r_esp, 0x61dbf6u); call_ind(t); }
    /* 0061dbf6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dbf9: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0061dbff: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc02: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc05: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0061dc08: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
    /* 0061dc0e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc10: call dword ptr [0x633014] */ { u32 t = R32((u32)(0x633014u)); r_esp -= 4; W32(r_esp, 0x61dc16u); call_ind(t); }
    /* 0061dc16: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc19: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0061dc1f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc22: mov dword ptr [eax + 0xb8], 0x7c */ W32((u32)(r_eax+0xb8u), 0x7cu);
    /* 0061dc2c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc2f: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 0061dc39: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc3c: add edx, 0x98 */ {  u32 a = r_edx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061dc42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc43: call dword ptr [0x6331cc] */ { u32 t = R32((u32)(0x6331ccu)); r_esp -= 4; W32(r_esp, 0x61dc49u); call_ind(t); }
    /* 0061dc49: cmp dword ptr [ebp - 0x34], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dc4d: jne 0x61dc59 */ if (!fZ) goto L_0061dc59;
L_0061dc4f:; BB(0x0061dc4f);
    /* 0061dc4f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc52: call 0x6204ca */ r_esp -= 4; W32(r_esp, 0x61dc57u); f_006204ca();
    /* 0061dc57: jmp 0x61dc63 */ goto L_0061dc63;
L_0061dc59:; BB(0x0061dc59);
    /* 0061dc59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc5b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc5e: call 0x6201fb */ r_esp -= 4; W32(r_esp, 0x61dc63u); f_006201fb();
L_0061dc63:; BB(0x0061dc63);
    /* 0061dc63: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc66: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061dc69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc6a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc6d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061dc6f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc72: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x61dc75u); call_ind(t); }
    /* 0061dc75: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc78: call 0x61df99 */ r_esp -= 4; W32(r_esp, 0x61dc7du); f_0061df99();
    /* 0061dc7d: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dc84: je 0x61dc99 */ if (fZ) goto L_0061dc99;
L_0061dc86:; BB(0x0061dc86);
    /* 0061dc86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc88: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc8c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dc8f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061dc92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dc93: call dword ptr [0x6331c4] */ { u32 t = R32((u32)(0x6331c4u)); r_esp -= 4; W32(r_esp, 0x61dc99u); call_ind(t); }
L_0061dc99:; BB(0x0061dc99);
    /* 0061dc99: cmp dword ptr [0x6f5360], 0xb13 */ {  u32 a = R32((u32)(0x6f5360u)); u32 b = 0xb13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dca3: je 0x61dd6e */ if (fZ) goto L_0061dd6e;
L_0061dca9:; BB(0x0061dca9);
    /* 0061dca9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0061dcb0: jmp 0x61dcbb */ goto L_0061dcbb;
L_0061dcb2:; BB(0x0061dcb2);
    /* 0061dcb2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dcb5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061dcb8: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0061dcbb:; BB(0x0061dcbb);
    /* 0061dcbb: cmp dword ptr [ebp - 0x28], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061dcc2: jge 0x61dcf2 */ if ((fS==fO)) goto L_0061dcf2;
L_0061dcc4:; BB(0x0061dcc4);
    /* 0061dcc4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dcc7: mov byte ptr [eax*4 + 0x6f5372], 0 */ W8((u32)(r_eax*4+0x6f5372u), 0x0u);
    /* 0061dccf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dcd2: mov byte ptr [ecx*4 + 0x6f5371], 0 */ W8((u32)(r_ecx*4+0x6f5371u), 0x0u);
    /* 0061dcda: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dcdd: mov byte ptr [edx*4 + 0x6f5370], 0 */ W8((u32)(r_edx*4+0x6f5370u), 0x0u);
    /* 0061dce5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dce8: mov byte ptr [eax*4 + 0x6f5373], 0 */ W8((u32)(r_eax*4+0x6f5373u), 0x0u);
    /* 0061dcf0: jmp 0x61dcb2 */ goto L_0061dcb2;
L_0061dcf2:; BB(0x0061dcf2);
    /* 0061dcf2: mov dword ptr [0x6f5348], 0x28 */ W32((u32)(0x6f5348u), 0x28u);
    /* 0061dcfc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dcff: call 0x61cf25 */ r_esp -= 4; W32(r_esp, 0x61dd04u); f_0061cf25();
    /* 0061dd04: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061dd09: mov dword ptr [0x6f534c], eax */ W32((u32)(0x6f534cu), r_eax);
    /* 0061dd0e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dd11: call 0x61cf3c */ r_esp -= 4; W32(r_esp, 0x61dd16u); f_0061cf3c();
    /* 0061dd16: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061dd1b: mov dword ptr [0x6f5350], eax */ W32((u32)(0x6f5350u), r_eax);
    /* 0061dd20: mov word ptr [0x6f5354], 1 */ W16((u32)(0x6f5354u), 0x1u);
    /* 0061dd29: mov word ptr [0x6f5356], 0x10 */ W16((u32)(0x6f5356u), 0x10u);
    /* 0061dd32: mov dword ptr [0x6f5358], 0 */ W32((u32)(0x6f5358u), 0x0u);
    /* 0061dd3c: mov dword ptr [0x6f535c], 0 */ W32((u32)(0x6f535cu), 0x0u);
    /* 0061dd46: mov dword ptr [0x6f5360], 0xb13 */ W32((u32)(0x6f5360u), 0xb13u);
    /* 0061dd50: mov dword ptr [0x6f5364], 0xb13 */ W32((u32)(0x6f5364u), 0xb13u);
    /* 0061dd5a: mov dword ptr [0x6f5368], 0 */ W32((u32)(0x6f5368u), 0x0u);
    /* 0061dd64: mov dword ptr [0x6f536c], 0 */ W32((u32)(0x6f536cu), 0x0u);
L_0061dd6e:; BB(0x0061dd6e);
    /* 0061dd6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd70: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd74: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dd77: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061dd7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd7b: call dword ptr [0x633270] */ { u32 t = R32((u32)(0x633270u)); r_esp -= 4; W32(r_esp, 0x61dd81u); call_ind(t); }
    /* 0061dd81: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd88: call dword ptr [0x633274] */ { u32 t = R32((u32)(0x633274u)); r_esp -= 4; W32(r_esp, 0x61dd8eu); call_ind(t); }
    /* 0061dd8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd90: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd94: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061dd97: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061dd9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dd9b: call dword ptr [0x633270] */ { u32 t = R32((u32)(0x633270u)); r_esp -= 4; W32(r_esp, 0x61dda1u); call_ind(t); }
    /* 0061dda1: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dda6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dda8: call dword ptr [0x633274] */ { u32 t = R32((u32)(0x633274u)); r_esp -= 4; W32(r_esp, 0x61ddaeu); call_ind(t); }
    /* 0061ddae: call dword ptr [0x63326c] */ { u32 t = R32((u32)(0x63326cu)); r_esp -= 4; W32(r_esp, 0x61ddb4u); call_ind(t); }
    /* 0061ddb4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061ddb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddb8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61ddbdu); f_0048ab58();
    /* 0061ddbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ddc0: mov dword ptr [0x711164], eax */ W32((u32)(0x711164u), r_eax);
    /* 0061ddc5: call dword ptr [0x63326c] */ { u32 t = R32((u32)(0x63326cu)); r_esp -= 4; W32(r_esp, 0x61ddcbu); call_ind(t); }
    /* 0061ddcb: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061ddce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ddcf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61ddd4u); f_0048ab58();
    /* 0061ddd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ddd7: mov dword ptr [0x711168], eax */ W32((u32)(0x711168u), r_eax);
    /* 0061dddc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0061dde3: jmp 0x61ddee */ goto L_0061ddee;
L_0061dde5:; BB(0x0061dde5);
    /* 0061dde5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061dde8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ddeb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0061ddee:; BB(0x0061ddee);
    /* 0061ddee: call dword ptr [0x63326c] */ { u32 t = R32((u32)(0x63326cu)); r_esp -= 4; W32(r_esp, 0x61ddf4u); call_ind(t); }
    /* 0061ddf4: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ddf7: jge 0x61de72 */ if ((fS==fO)) goto L_0061de72;
L_0061ddf9:; BB(0x0061ddf9);
    /* 0061ddf9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061ddfc: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061ddff: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061de05: mov dword ptr [ecx + eax], 0x8000 */ W32((u32)(r_ecx+r_eax), 0x8000u);
    /* 0061de0c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061de0f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061de12: mov eax, dword ptr [0x711168] */ r_eax = R32((u32)(0x711168u));
    /* 0061de17: mov dword ptr [eax + edx + 4], 0x8000 */ W32((u32)(r_eax+r_edx+0x4u), 0x8000u);
    /* 0061de1f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061de22: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061de25: mov edx, dword ptr [0x711168] */ r_edx = R32((u32)(0x711168u));
    /* 0061de2b: mov dword ptr [edx + ecx + 0xc], 0 */ W32((u32)(r_edx+r_ecx+0xcu), 0x0u);
    /* 0061de33: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061de36: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061de39: mov ecx, dword ptr [0x711164] */ r_ecx = R32((u32)(0x711164u));
    /* 0061de3f: mov dword ptr [ecx + eax], 0x8000 */ W32((u32)(r_ecx+r_eax), 0x8000u);
    /* 0061de46: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061de49: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061de4c: mov eax, dword ptr [0x711164] */ r_eax = R32((u32)(0x711164u));
    /* 0061de51: mov dword ptr [eax + edx + 4], 0x8000 */ W32((u32)(r_eax+r_edx+0x4u), 0x8000u);
    /* 0061de59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061de5c: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061de5f: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061de65: mov dword ptr [edx + ecx + 0xc], 0 */ W32((u32)(r_edx+r_ecx+0xcu), 0x0u);
    /* 0061de6d: jmp 0x61dde5 */ goto L_0061dde5;
L_0061de72:; BB(0x0061de72);
    /* 0061de72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061de73: mov esp, ebp */ r_esp = r_ebp;
    /* 0061de75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061de76: ret  */ FN_RET(0x0061d9a0); r_esp += 4; return;
}

void f_0061de77(void) /* FUN_0061de77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061de77);
    /* 0061de77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061de78: mov ebp, esp */ r_ebp = r_esp;
    /* 0061de7a: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061de7d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0061de80: mov dword ptr [ebp - 0x30], 0x2c */ W32((u32)(r_ebp+0xffffffd0u), 0x2cu);
    /* 0061de87: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 0061de8e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0061de91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061de92: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061de95: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061de98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061de99: call dword ptr [0x6331bc] */ { u32 t = R32((u32)(0x6331bcu)); r_esp -= 4; W32(r_esp, 0x61de9fu); call_ind(t); }
    /* 0061de9f: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dea3: jne 0x61deb4 */ if (!fZ) goto L_0061deb4;
L_0061dea5:; BB(0x0061dea5);
    /* 0061dea5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dea7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061deaa: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061dead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061deae: call dword ptr [0x633254] */ { u32 t = R32((u32)(0x633254u)); r_esp -= 4; W32(r_esp, 0x61deb4u); call_ind(t); }
L_0061deb4:; BB(0x0061deb4);
    /* 0061deb4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061deb7: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061debb: je 0x61ded6 */ if (fZ) goto L_0061ded6;
L_0061debd:; BB(0x0061debd);
    /* 0061debd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061debf: push 0x6f0a18 */ { u32 v = 0x6f0a18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dec4: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061dec9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061decc: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x61ded1u); f_0061ba62();
    /* 0061ded1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ded4: jmp 0x61dedd */ goto L_0061dedd;
L_0061ded6:; BB(0x0061ded6);
    /* 0061ded6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061dedd:; BB(0x0061dedd);
    /* 0061dedd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dee1: jne 0x61defb */ if (!fZ) goto L_0061defb;
L_0061dee3:; BB(0x0061dee3);
    /* 0061dee3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061dee6: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061deea: je 0x61df0c */ if (fZ) goto L_0061df0c;
L_0061deec:; BB(0x0061deec);
    /* 0061deec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061deee: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x61def4u); call_ind(t); }
    /* 0061def4: cmp eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061def9: jg 0x61df0c */ if ((!fZ&&fS==fO)) goto L_0061df0c;
L_0061defb:; BB(0x0061defb);
    /* 0061defb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0061defd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061df00: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0061df03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df04: call dword ptr [0x633254] */ { u32 t = R32((u32)(0x633254u)); r_esp -= 4; W32(r_esp, 0x61df0au); call_ind(t); }
    /* 0061df0a: jmp 0x61df1b */ goto L_0061df1b;
L_0061df0c:; BB(0x0061df0c);
    /* 0061df0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df0e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061df11: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061df14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df15: call dword ptr [0x633254] */ { u32 t = R32((u32)(0x633254u)); r_esp -= 4; W32(r_esp, 0x61df1bu); call_ind(t); }
L_0061df1b:; BB(0x0061df1b);
    /* 0061df1b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061df1e: call 0x61cefb */ r_esp -= 4; W32(r_esp, 0x61df23u); f_0061cefb();
    /* 0061df23: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061df26: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061df29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df2a: call dword ptr [0x633200] */ { u32 t = R32((u32)(0x633200u)); r_esp -= 4; W32(r_esp, 0x61df30u); call_ind(t); }
    /* 0061df30: mov esp, ebp */ r_esp = r_ebp;
    /* 0061df32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061df33: ret  */ FN_RET(0x0061de77); r_esp += 4; return;
}

void f_0061df34(void) /* FUN_0061df34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061df34);
    /* 0061df34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061df35: mov ebp, esp */ r_ebp = r_esp;
    /* 0061df37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df38: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061df3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df40: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061df43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df44: call dword ptr [0x633254] */ { u32 t = R32((u32)(0x633254u)); r_esp -= 4; W32(r_esp, 0x61df4au); call_ind(t); }
    /* 0061df4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df4d: call 0x61cf10 */ r_esp -= 4; W32(r_esp, 0x61df52u); f_0061cf10();
    /* 0061df52: mov esp, ebp */ r_esp = r_ebp;
    /* 0061df54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061df55: ret  */ FN_RET(0x0061df34); r_esp += 4; return;
}

void f_0061df56(void) /* FUN_0061df56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061df56);
    /* 0061df56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061df57: mov ebp, esp */ r_ebp = r_esp;
    /* 0061df59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df5a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061df5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df60: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061df64: jne 0x61df68 */ if (!fZ) goto L_0061df68;
L_0061df66:; BB(0x0061df66);
    /* 0061df66: jmp 0x61df93 */ goto L_0061df93;
L_0061df68:; BB(0x0061df68);
    /* 0061df68: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061df6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df6d: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0061df70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df74: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0061df77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df7b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0061df7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061df7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df82: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0061df85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061df89: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0061df8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061df8d: call dword ptr [0x63301c] */ { u32 t = R32((u32)(0x63301cu)); r_esp -= 4; W32(r_esp, 0x61df93u); call_ind(t); }
L_0061df93:; BB(0x0061df93);
    /* 0061df93: mov esp, ebp */ r_esp = r_ebp;
    /* 0061df95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061df96: ret 4 */ FN_RET(0x0061df56); r_esp += 8; return;
}

void f_0061df99(void) /* FUN_0061df99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061df99);
    /* 0061df99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061df9a: mov ebp, esp */ r_ebp = r_esp;
    /* 0061df9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061df9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061dfa2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dfa5: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061dfa9: jne 0x61dfb0 */ if (!fZ) goto L_0061dfb0;
L_0061dfab:; BB(0x0061dfab);
    /* 0061dfab: jmp 0x61e0a6 */ goto L_0061e0a6;
L_0061dfb0:; BB(0x0061dfb0);
    /* 0061dfb0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dfb3: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0061dfb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dfba: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061dfbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfc2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061dfc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfc6: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61dfccu); call_ind(t); }
    /* 0061dfcc: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061dfd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dfd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfd6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061dfd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfda: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061dfdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dfe1: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0061dfe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dfe5: call dword ptr [0x63301c] */ { u32 t = R32((u32)(0x63301cu)); r_esp -= 4; W32(r_esp, 0x61dfebu); call_ind(t); }
    /* 0061dfeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dfee: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0061dff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061dff2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061dff5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0061dff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061dff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dffb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061dffd: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061e000: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e001: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61e007u); call_ind(t); }
    /* 0061e007: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e009: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e00c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e00d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061e010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e011: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e014: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e015: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e019: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e01c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0061e01f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e020: call dword ptr [0x63301c] */ { u32 t = R32((u32)(0x63301cu)); r_esp -= 4; W32(r_esp, 0x61e026u); call_ind(t); }
    /* 0061e026: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e029: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0061e02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e02d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e030: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0061e033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e034: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e037: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0061e03a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e03b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e03d: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0061e040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e041: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61e047u); call_ind(t); }
    /* 0061e047: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e049: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e04c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e04d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061e050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e051: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e055: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e059: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e05c: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0061e05f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e060: call dword ptr [0x63301c] */ { u32 t = R32((u32)(0x63301cu)); r_esp -= 4; W32(r_esp, 0x61e066u); call_ind(t); }
    /* 0061e066: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e069: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0061e06c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e06d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e070: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0061e073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e076: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e079: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0061e07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e07d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061e080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e081: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61e087u); call_ind(t); }
    /* 0061e087: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e089: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e08c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e08d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061e090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e091: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e095: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061e098: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e099: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e09c: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0061e09f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0a0: call dword ptr [0x63301c] */ { u32 t = R32((u32)(0x63301cu)); r_esp -= 4; W32(r_esp, 0x61e0a6u); call_ind(t); }
L_0061e0a6:; BB(0x0061e0a6);
    /* 0061e0a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e0a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e0a9: ret  */ FN_RET(0x0061df99); r_esp += 4; return;
}

void f_0061e0aa(void) /* FUN_0061e0aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061e0aa);
    /* 0061e0aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0ab: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e0ad: sub esp, 0x13c */ {  u32 a = r_esp; u32 b = 0x13cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e0b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0b4: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061e0ba: call 0x5d9400 */ r_esp -= 4; W32(r_esp, 0x61e0bfu); f_005d9400();
    /* 0061e0bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0c5: call dword ptr [0x6331a0] */ { u32 t = R32((u32)(0x6331a0u)); r_esp -= 4; W32(r_esp, 0x61e0cbu); call_ind(t); }
    /* 0061e0cb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061e0ce: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e0d2: je 0x61e10c */ if (fZ) goto L_0061e10c;
L_0061e0d4:; BB(0x0061e0d4);
    /* 0061e0d4: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e0d8: jne 0x61e10c */ if (!fZ) goto L_0061e10c;
L_0061e0da:; BB(0x0061e0da);
    /* 0061e0da: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061e0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0de: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061e0e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0e2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061e0e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e0e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0ea: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61e0f0u); call_ind(t); }
    /* 0061e0f0: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0061e0f6: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061e0fc: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61e101u); f_005d9462();
    /* 0061e101: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 0061e107: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061e10c:; BB(0x0061e10c);
    /* 0061e10c: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e113: je 0x61e121 */ if (fZ) goto L_0061e121;
L_0061e115:; BB(0x0061e115);
    /* 0061e115: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0061e11b: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e11f: jne 0x61e159 */ if (!fZ) goto L_0061e159;
L_0061e121:; BB(0x0061e121);
    /* 0061e121: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e125: je 0x61e159 */ if (fZ) goto L_0061e159;
L_0061e127:; BB(0x0061e127);
    /* 0061e127: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061e12a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e12b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061e12e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e12f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061e132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e133: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e137: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61e13du); call_ind(t); }
    /* 0061e13d: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0061e143: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061e149: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61e14eu); f_005d9462();
    /* 0061e14e: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0061e154: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061e159:; BB(0x0061e159);
    /* 0061e159: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061e15c: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 0061e162: cmp dword ptr [ebp - 0x124], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e169: ja 0x61e1a4 */ if ((!fC&&!fZ)) goto L_0061e1a4;
L_0061e16b:; BB(0x0061e16b);
    /* 0061e16b: cmp dword ptr [ebp - 0x124], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e172: je 0x61e4e3 */ if (fZ) goto L_0061e4e3;
L_0061e178:; BB(0x0061e178);
    /* 0061e178: cmp dword ptr [ebp - 0x124], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e17f: je 0x61e4b4 */ if (fZ) goto L_0061e4b4;
L_0061e185:; BB(0x0061e185);
    /* 0061e185: cmp dword ptr [ebp - 0x124], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e18c: je 0x61f36a */ if (fZ) goto L_0061f36a;
L_0061e192:; BB(0x0061e192);
    /* 0061e192: cmp dword ptr [ebp - 0x124], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e199: je 0x61f3ff */ if (fZ) goto L_0061f3ff;
L_0061e19f:; BB(0x0061e19f);
    /* 0061e19f: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e1a4:; BB(0x0061e1a4);
    /* 0061e1a4: cmp dword ptr [ebp - 0x124], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e1ab: ja 0x61e1e6 */ if ((!fC&&!fZ)) goto L_0061e1e6;
L_0061e1ad:; BB(0x0061e1ad);
    /* 0061e1ad: cmp dword ptr [ebp - 0x124], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1b4: je 0x61efe2 */ if (fZ) goto L_0061efe2;
L_0061e1ba:; BB(0x0061e1ba);
    /* 0061e1ba: cmp dword ptr [ebp - 0x124], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1c1: je 0x61e566 */ if (fZ) goto L_0061e566;
L_0061e1c7:; BB(0x0061e1c7);
    /* 0061e1c7: cmp dword ptr [ebp - 0x124], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1ce: je 0x61e566 */ if (fZ) goto L_0061e566;
L_0061e1d4:; BB(0x0061e1d4);
    /* 0061e1d4: cmp dword ptr [ebp - 0x124], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1db: je 0x61e53a */ if (fZ) goto L_0061e53a;
L_0061e1e1:; BB(0x0061e1e1);
    /* 0061e1e1: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e1e6:; BB(0x0061e1e6);
    /* 0061e1e6: cmp dword ptr [ebp - 0x124], 0x53 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e1ed: ja 0x61e20e */ if ((!fC&&!fZ)) goto L_0061e20e;
L_0061e1ef:; BB(0x0061e1ef);
    /* 0061e1ef: cmp dword ptr [ebp - 0x124], 0x53 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1f6: je 0x61f35b */ if (fZ) goto L_0061f35b;
L_0061e1fc:; BB(0x0061e1fc);
    /* 0061e1fc: cmp dword ptr [ebp - 0x124], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e203: je 0x61f560 */ if (fZ) goto L_0061f560;
L_0061e209:; BB(0x0061e209);
    /* 0061e209: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e20e:; BB(0x0061e20e);
    /* 0061e20e: cmp dword ptr [ebp - 0x124], 0x84 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e218: ja 0x61e23c */ if ((!fC&&!fZ)) goto L_0061e23c;
L_0061e21a:; BB(0x0061e21a);
    /* 0061e21a: cmp dword ptr [ebp - 0x124], 0x84 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e224: je 0x61f395 */ if (fZ) goto L_0061f395;
L_0061e22a:; BB(0x0061e22a);
    /* 0061e22a: cmp dword ptr [ebp - 0x124], 0x7e */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x7eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e231: je 0x61f0af */ if (fZ) goto L_0061f0af;
L_0061e237:; BB(0x0061e237);
    /* 0061e237: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e23c:; BB(0x0061e23c);
    /* 0061e23c: cmp dword ptr [ebp - 0x124], 0x104 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e246: ja 0x61e27d */ if ((!fC&&!fZ)) goto L_0061e27d;
L_0061e248:; BB(0x0061e248);
    /* 0061e248: cmp dword ptr [ebp - 0x124], 0x104 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e252: je 0x61ede0 */ if (fZ) goto L_0061ede0;
L_0061e258:; BB(0x0061e258);
    /* 0061e258: cmp dword ptr [ebp - 0x124], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061e262: jb 0x61fc52 */ if (fC) goto L_0061fc52;
L_0061e268:; BB(0x0061e268);
    /* 0061e268: cmp dword ptr [ebp - 0x124], 0x102 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e272: jbe 0x61ec5b */ if ((fC||fZ)) goto L_0061ec5b;
L_0061e278:; BB(0x0061e278);
    /* 0061e278: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e27d:; BB(0x0061e27d);
    /* 0061e27d: cmp dword ptr [ebp - 0x124], 0x111 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x111u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e287: ja 0x61e2ae */ if ((!fC&&!fZ)) goto L_0061e2ae;
L_0061e289:; BB(0x0061e289);
    /* 0061e289: cmp dword ptr [ebp - 0x124], 0x111 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x111u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e293: je 0x61e547 */ if (fZ) goto L_0061e547;
L_0061e299:; BB(0x0061e299);
    /* 0061e299: cmp dword ptr [ebp - 0x124], 0x105 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x105u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2a3: je 0x61efc2 */ if (fZ) goto L_0061efc2;
L_0061e2a9:; BB(0x0061e2a9);
    /* 0061e2a9: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e2ae:; BB(0x0061e2ae);
    /* 0061e2ae: cmp dword ptr [ebp - 0x124], 0x200 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e2b8: ja 0x61e2ef */ if ((!fC&&!fZ)) goto L_0061e2ef;
L_0061e2ba:; BB(0x0061e2ba);
    /* 0061e2ba: cmp dword ptr [ebp - 0x124], 0x200 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2c4: je 0x61eae5 */ if (fZ) goto L_0061eae5;
L_0061e2ca:; BB(0x0061e2ca);
    /* 0061e2ca: cmp dword ptr [ebp - 0x124], 0x112 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x112u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2d4: je 0x61f3cd */ if (fZ) goto L_0061f3cd;
L_0061e2da:; BB(0x0061e2da);
    /* 0061e2da: cmp dword ptr [ebp - 0x124], 0x113 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x113u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2e4: je 0x61e48d */ if (fZ) goto L_0061e48d;
L_0061e2ea:; BB(0x0061e2ea);
    /* 0061e2ea: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e2ef:; BB(0x0061e2ef);
    /* 0061e2ef: cmp dword ptr [ebp - 0x124], 0x211 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x211u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e2f9: ja 0x61e337 */ if ((!fC&&!fZ)) goto L_0061e337;
L_0061e2fb:; BB(0x0061e2fb);
    /* 0061e2fb: cmp dword ptr [ebp - 0x124], 0x211 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x211u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e305: je 0x61e55c */ if (fZ) goto L_0061e55c;
L_0061e30b:; BB(0x0061e30b);
    /* 0061e30b: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061e311: sub edx, 0x201 */ {  u32 a = r_edx; u32 b = 0x201u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e317: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 0061e31d: cmp dword ptr [ebp - 0x124], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e324: ja 0x61fc52 */ if ((!fC&&!fZ)) goto L_0061fc52;
L_0061e32a:; BB(0x0061e32a);
    /* 0061e32a: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061e330: jmp dword ptr [eax*4 + 0x61fca3] */ { u32 t = R32((u32)(r_eax*4+0x61fca3u)); switch (t) { case 0x61e5ddu: goto L_0061e5dd; case 0x61e725u: goto L_0061e725; case 0x61fc52u: goto L_0061fc52; case 0x61e869u: goto L_0061e869; case 0x61e9a7u: goto L_0061e9a7; case 0x61f5e7u: goto L_0061f5e7; case 0x61f711u: goto L_0061f711; default: UNSUP(0x0061e330, "jump table entry is not a known target"); } }
L_0061e337:; BB(0x0061e337);
    /* 0061e337: cmp dword ptr [ebp - 0x124], 0x219 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x219u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e341: ja 0x61e368 */ if ((!fC&&!fZ)) goto L_0061e368;
L_0061e343:; BB(0x0061e343);
    /* 0061e343: cmp dword ptr [ebp - 0x124], 0x219 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x219u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e34d: je 0x61f199 */ if (fZ) goto L_0061f199;
L_0061e353:; BB(0x0061e353);
    /* 0061e353: cmp dword ptr [ebp - 0x124], 0x212 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x212u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e35d: je 0x61e561 */ if (fZ) goto L_0061e561;
L_0061e363:; BB(0x0061e363);
    /* 0061e363: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e368:; BB(0x0061e368);
    /* 0061e368: cmp dword ptr [ebp - 0x124], 0x3a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e372: ja 0x61e3a9 */ if ((!fC&&!fZ)) goto L_0061e3a9;
L_0061e374:; BB(0x0061e374);
    /* 0061e374: cmp dword ptr [ebp - 0x124], 0x3a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3a0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061e37e: jae 0x61f83d */ if (!fC) goto L_0061f83d;
L_0061e384:; BB(0x0061e384);
    /* 0061e384: cmp dword ptr [ebp - 0x124], 0x30f */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x30fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e38e: je 0x61f109 */ if (fZ) goto L_0061f109;
L_0061e394:; BB(0x0061e394);
    /* 0061e394: cmp dword ptr [ebp - 0x124], 0x311 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x311u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e39e: je 0x61f150 */ if (fZ) goto L_0061f150;
L_0061e3a4:; BB(0x0061e3a4);
    /* 0061e3a4: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e3a9:; BB(0x0061e3a9);
    /* 0061e3a9: cmp dword ptr [ebp - 0x124], 0xa000 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xa000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e3b3: ja 0x61e3ed */ if ((!fC&&!fZ)) goto L_0061e3ed;
L_0061e3b5:; BB(0x0061e3b5);
    /* 0061e3b5: cmp dword ptr [ebp - 0x124], 0xa000 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xa000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e3bf: je 0x61e3f2 */ if (fZ) goto L_0061e3f2;
L_0061e3c1:; BB(0x0061e3c1);
    /* 0061e3c1: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061e3c7: sub ecx, 0x3b5 */ {  u32 a = r_ecx; u32 b = 0x3b5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e3cd: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 0061e3d3: cmp dword ptr [ebp - 0x124], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061e3da: ja 0x61fc52 */ if ((!fC&&!fZ)) goto L_0061fc52;
L_0061e3e0:; BB(0x0061e3e0);
    /* 0061e3e0: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0061e3e6: jmp dword ptr [edx*4 + 0x61fcb7] */ { u32 t = R32((u32)(r_edx*4+0x61fcb7u)); switch (t) { case 0x61e9a7u: goto L_0061e9a7; case 0x61e869u: goto L_0061e869; case 0x61fc52u: goto L_0061fc52; case 0x61e725u: goto L_0061e725; case 0x61e5ddu: goto L_0061e5dd; case 0x61f5e7u: goto L_0061f5e7; case 0x61f711u: goto L_0061f711; default: UNSUP(0x0061e3e6, "jump table entry is not a known target"); } }
L_0061e3ed:; BB(0x0061e3ed);
    /* 0061e3ed: jmp 0x61fc52 */ goto L_0061fc52;
L_0061e3f2:; BB(0x0061e3f2);
    /* 0061e3f2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061e3f5: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e3fa: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0061e400: cmp dword ptr [ebp - 0x128], 0xa000 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0xa000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e40a: je 0x61e41a */ if (fZ) goto L_0061e41a;
L_0061e40c:; BB(0x0061e40c);
    /* 0061e40c: cmp dword ptr [ebp - 0x128], 0xa003 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0xa003u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e416: je 0x61e42e */ if (fZ) goto L_0061e42e;
L_0061e418:; BB(0x0061e418);
    /* 0061e418: jmp 0x61e488 */ goto L_0061e488;
L_0061e41a:; BB(0x0061e41a);
    /* 0061e41a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061e41d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e41e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061e424: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061e427: call 0x6000d8 */ r_esp -= 4; W32(r_esp, 0x61e42cu); f_006000d8();
    /* 0061e42c: jmp 0x61e488 */ goto L_0061e488;
L_0061e42e:; BB(0x0061e42e);
    /* 0061e42e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061e431: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e436: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0061e43c: cmp dword ptr [ebp - 0x12c], 0x2000 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e446: je 0x61e456 */ if (fZ) goto L_0061e456;
L_0061e448:; BB(0x0061e448);
    /* 0061e448: cmp dword ptr [ebp - 0x12c], 0x4000 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e452: je 0x61e458 */ if (fZ) goto L_0061e458;
L_0061e454:; BB(0x0061e454);
    /* 0061e454: jmp 0x61e488 */ goto L_0061e488;
L_0061e456:; BB(0x0061e456);
    /* 0061e456: jmp 0x61e488 */ goto L_0061e488;
L_0061e458:; BB(0x0061e458);
    /* 0061e458: push 0x6f0a28 */ { u32 v = 0x6f0a28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e45d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61e462u); f_0060fc40();
    /* 0061e462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e465: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e467: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061e46a: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0061e46d: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e473: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e479: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e47a: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061e480: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061e483: call 0x61c853 */ r_esp -= 4; W32(r_esp, 0x61e488u); f_0061c853();
L_0061e488:; BB(0x0061e488);
    /* 0061e488: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e48d:; BB(0x0061e48d);
    /* 0061e48d: cmp dword ptr [0x6f6ee8], 0 */ {  u32 a = R32((u32)(0x6f6ee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e494: je 0x61e4af */ if (fZ) goto L_0061e4af;
L_0061e496:; BB(0x0061e496);
    /* 0061e496: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061e49b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e49f: je 0x61e4af */ if (fZ) goto L_0061e4af;
L_0061e4a1:; BB(0x0061e4a1);
    /* 0061e4a1: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0061e4a7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061e4aa: call 0x5ff893 */ r_esp -= 4; W32(r_esp, 0x61e4afu); f_005ff893();
L_0061e4af:; BB(0x0061e4af);
    /* 0061e4af: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e4b4:; BB(0x0061e4b4);
    /* 0061e4b4: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061e4b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061e4b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e4bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4c0: call dword ptr [0x6331d4] */ { u32 t = R32((u32)(0x6331d4u)); r_esp -= 4; W32(r_esp, 0x61e4c6u); call_ind(t); }
    /* 0061e4c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061e4cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4cc: call dword ptr [0x6331a0] */ { u32 t = R32((u32)(0x6331a0u)); r_esp -= 4; W32(r_esp, 0x61e4d2u); call_ind(t); }
    /* 0061e4d2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061e4d5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e4d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e4db: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0061e4de: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e4e3:; BB(0x0061e4e3);
    /* 0061e4e3: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 0061e4e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e4ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4ee: call dword ptr [0x6331a8] */ { u32 t = R32((u32)(0x6331a8u)); r_esp -= 4; W32(r_esp, 0x61e4f4u); call_ind(t); }
    /* 0061e4f4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e4f7: call 0x6201f0 */ r_esp -= 4; W32(r_esp, 0x61e4fcu); f_006201f0();
    /* 0061e4fc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e4ff: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0061e502: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e505: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e508: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061e50b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e50d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e50e: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0061e511: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e512: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61e518u); call_ind(t); }
    /* 0061e518: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 0061e51b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e51c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e51f: call 0x61d3d8 */ r_esp -= 4; W32(r_esp, 0x61e524u); f_0061d3d8();
    /* 0061e524: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0061e52a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e52b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061e52e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e52f: call dword ptr [0x6331ac] */ { u32 t = R32((u32)(0x6331acu)); r_esp -= 4; W32(r_esp, 0x61e535u); call_ind(t); }
    /* 0061e535: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e53a:; BB(0x0061e53a);
    /* 0061e53a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e53d: call 0x61df99 */ r_esp -= 4; W32(r_esp, 0x61e542u); f_0061df99();
    /* 0061e542: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e547:; BB(0x0061e547);
    /* 0061e547: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061e54a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e54b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e54e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e54f: call 0x46c23c */ r_esp -= 4; W32(r_esp, 0x61e554u); f_0046c23c();
    /* 0061e554: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e557: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e55c:; BB(0x0061e55c);
    /* 0061e55c: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e561:; BB(0x0061e561);
    /* 0061e561: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e566:; BB(0x0061e566);
    /* 0061e566: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e569: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x61e56eu); f_006201dc();
    /* 0061e56e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e570: jne 0x61e57d */ if (!fZ) goto L_0061e57d;
L_0061e572:; BB(0x0061e572);
    /* 0061e572: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e575: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061e577: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e57a: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x61e57du); call_ind(t); }
L_0061e57d:; BB(0x0061e57d);
    /* 0061e57d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e583: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061e586: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x61e58bu); f_005e5f8e();
    /* 0061e58b: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061e591: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e598: je 0x61e59f */ if (fZ) goto L_0061e59f;
L_0061e59a:; BB(0x0061e59a);
    /* 0061e59a: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e59f:; BB(0x0061e59f);
    /* 0061e59f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e5a5: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x61e5aau); f_005da3ec();
    /* 0061e5aa: cmp eax, 0x232c */ {  u32 a = r_eax; u32 b = 0x232cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e5af: jne 0x61e5c0 */ if (!fZ) goto L_0061e5c0;
L_0061e5b1:; BB(0x0061e5b1);
    /* 0061e5b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5b3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e5b9: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x61e5beu); f_0045b98a();
    /* 0061e5be: jmp 0x61e5d8 */ goto L_0061e5d8;
L_0061e5c0:; BB(0x0061e5c0);
    /* 0061e5c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061e5c2: cmp dword ptr [0x6870a8], 0 */ {  u32 a = R32((u32)(0x6870a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e5c9: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0061e5cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5cd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e5d3: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x61e5d8u); f_0045b98a();
L_0061e5d8:; BB(0x0061e5d8);
    /* 0061e5d8: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e5dd:; BB(0x0061e5dd);
    /* 0061e5dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5e1: call dword ptr [0x6331b0] */ { u32 t = R32((u32)(0x6331b0u)); r_esp -= 4; W32(r_esp, 0x61e5e7u); call_ind(t); }
    /* 0061e5e7: movsx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0061e5eb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e5ee: sub ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e5f1: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0061e5f7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061e5fa: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0061e5fd: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e602: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e605: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e608: sub ecx, dword ptr [edx + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e60b: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0061e611: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 0061e61b: mov dword ptr [ebp - 0x8c], 8 */ W32((u32)(r_ebp+0xffffff74u), 0x8u);
    /* 0061e625: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e627: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e62du); call_ind(t); }
    /* 0061e62d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e630: and eax, 0xf000 */ {  u32 a = r_eax; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e635: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e637: je 0x61e648 */ if (fZ) goto L_0061e648;
L_0061e639:; BB(0x0061e639);
    /* 0061e639: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e63f: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e642: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0061e648:; BB(0x0061e648);
    /* 0061e648: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e64a: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e650u); call_ind(t); }
    /* 0061e650: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e653: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e659: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e65b: je 0x61e66b */ if (fZ) goto L_0061e66b;
L_0061e65d:; BB(0x0061e65d);
    /* 0061e65d: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e663: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061e665: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061e66b:; BB(0x0061e66b);
    /* 0061e66b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e66d: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e673u); call_ind(t); }
    /* 0061e673: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e676: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e67c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e67e: je 0x61e68f */ if (fZ) goto L_0061e68f;
L_0061e680:; BB(0x0061e680);
    /* 0061e680: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e686: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061e689: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0061e68f:; BB(0x0061e68f);
    /* 0061e68f: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061e699: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0061e69f: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0061e6a5: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0061e6ab: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0061e6b1: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e6b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6b8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e6be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6bf: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e6c5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061e6c8: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61e6cdu); f_005e5f9f();
    /* 0061e6cd: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061e6d3: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e6da: je 0x61e720 */ if (fZ) goto L_0061e720;
L_0061e6dc:; BB(0x0061e6dc);
    /* 0061e6dc: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e6e2: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61e6e7u); f_005e06d0();
    /* 0061e6e7: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e6ed: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e6ef: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0061e6f5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e6fb: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61e700u); f_005e06e1();
    /* 0061e700: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e706: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e708: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0061e70e: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0061e714: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e715: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e71b: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61e720u); f_005d9db7();
L_0061e720:; BB(0x0061e720);
    /* 0061e720: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e725:; BB(0x0061e725);
    /* 0061e725: call dword ptr [0x6331b8] */ { u32 t = R32((u32)(0x6331b8u)); r_esp -= 4; W32(r_esp, 0x61e72bu); call_ind(t); }
    /* 0061e72b: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0061e72f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e732: sub eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061e735: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0061e73b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061e73e: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061e741: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e747: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0061e74a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e74d: sub eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061e750: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0061e756: mov dword ptr [ebp - 0x90], 2 */ W32((u32)(r_ebp+0xffffff70u), 0x2u);
    /* 0061e760: mov dword ptr [ebp - 0x8c], 8 */ W32((u32)(r_ebp+0xffffff74u), 0x8u);
    /* 0061e76a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e76c: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e772u); call_ind(t); }
    /* 0061e772: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e775: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e77b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e77d: je 0x61e78d */ if (fZ) goto L_0061e78d;
L_0061e77f:; BB(0x0061e77f);
    /* 0061e77f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e785: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061e787: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061e78d:; BB(0x0061e78d);
    /* 0061e78d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e78f: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e795u); call_ind(t); }
    /* 0061e795: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e798: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e79e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e7a0: je 0x61e7b1 */ if (fZ) goto L_0061e7b1;
L_0061e7a2:; BB(0x0061e7a2);
    /* 0061e7a2: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e7a8: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061e7ab: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0061e7b1:; BB(0x0061e7b1);
    /* 0061e7b1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7b3: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e7b9u); call_ind(t); }
    /* 0061e7b9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e7bc: and eax, 0xf000 */ {  u32 a = r_eax; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e7c3: je 0x61e7d4 */ if (fZ) goto L_0061e7d4;
L_0061e7c5:; BB(0x0061e7c5);
    /* 0061e7c5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e7cb: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e7ce: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0061e7d4:; BB(0x0061e7d4);
    /* 0061e7d4: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061e7de: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0061e7e4: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0061e7ea: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0061e7f0: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0061e7f6: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e7fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7fd: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e804: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061e809: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061e80c: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61e811u); f_005e5f9f();
    /* 0061e811: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061e817: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e81e: je 0x61e864 */ if (fZ) goto L_0061e864;
L_0061e820:; BB(0x0061e820);
    /* 0061e820: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e826: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61e82bu); f_005e06d0();
    /* 0061e82b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e831: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e833: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0061e839: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e83f: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61e844u); f_005e06e1();
    /* 0061e844: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e84a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e84c: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0061e852: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061e858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e859: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e85f: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61e864u); f_005d9db7();
L_0061e864:; BB(0x0061e864);
    /* 0061e864: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e869:; BB(0x0061e869);
    /* 0061e869: movsx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0061e86d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e870: sub ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e873: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0061e879: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061e87c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0061e87f: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e884: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e887: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e88a: sub ecx, dword ptr [edx + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e88d: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0061e893: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 0061e89d: mov dword ptr [ebp - 0x8c], 0x10 */ W32((u32)(r_ebp+0xffffff74u), 0x10u);
    /* 0061e8a7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8a9: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e8afu); call_ind(t); }
    /* 0061e8af: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e8b2: and eax, 0xf000 */ {  u32 a = r_eax; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e8b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e8b9: je 0x61e8ca */ if (fZ) goto L_0061e8ca;
L_0061e8bb:; BB(0x0061e8bb);
    /* 0061e8bb: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e8c1: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e8c4: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0061e8ca:; BB(0x0061e8ca);
    /* 0061e8ca: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8cc: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e8d2u); call_ind(t); }
    /* 0061e8d2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e8d5: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e8db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e8dd: je 0x61e8ed */ if (fZ) goto L_0061e8ed;
L_0061e8df:; BB(0x0061e8df);
    /* 0061e8df: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e8e5: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061e8e7: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061e8ed:; BB(0x0061e8ed);
    /* 0061e8ed: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8ef: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e8f5u); call_ind(t); }
    /* 0061e8f5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e8f8: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e8fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e900: je 0x61e911 */ if (fZ) goto L_0061e911;
L_0061e902:; BB(0x0061e902);
    /* 0061e902: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061e908: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061e90b: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0061e911:; BB(0x0061e911);
    /* 0061e911: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061e91b: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0061e921: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0061e927: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0061e92d: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0061e933: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e93a: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e941: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e947: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061e94a: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61e94fu); f_005e5f9f();
    /* 0061e94f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061e955: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e95c: je 0x61e9a2 */ if (fZ) goto L_0061e9a2;
L_0061e95e:; BB(0x0061e95e);
    /* 0061e95e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e964: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61e969u); f_005e06d0();
    /* 0061e969: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061e96f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e971: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0061e977: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061e97d: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61e982u); f_005e06e1();
    /* 0061e982: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061e988: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e98a: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0061e990: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0061e996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e997: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061e99d: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61e9a2u); f_005d9db7();
L_0061e9a2:; BB(0x0061e9a2);
    /* 0061e9a2: jmp 0x61fc81 */ goto L_0061fc81;
L_0061e9a7:; BB(0x0061e9a7);
    /* 0061e9a7: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0061e9ab: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e9ae: sub eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061e9b1: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0061e9b7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061e9ba: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061e9bd: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e9c3: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0061e9c6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061e9c9: sub eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061e9cc: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0061e9d2: mov dword ptr [ebp - 0x90], 2 */ W32((u32)(r_ebp+0xffffff70u), 0x2u);
    /* 0061e9dc: mov dword ptr [ebp - 0x8c], 0x10 */ W32((u32)(r_ebp+0xffffff74u), 0x10u);
    /* 0061e9e6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9e8: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61e9eeu); call_ind(t); }
    /* 0061e9ee: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061e9f1: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061e9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e9f9: je 0x61ea09 */ if (fZ) goto L_0061ea09;
L_0061e9fb:; BB(0x0061e9fb);
    /* 0061e9fb: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ea01: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061ea03: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061ea09:; BB(0x0061ea09);
    /* 0061ea09: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea0b: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61ea11u); call_ind(t); }
    /* 0061ea11: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061ea14: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ea1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea1c: je 0x61ea2d */ if (fZ) goto L_0061ea2d;
L_0061ea1e:; BB(0x0061ea1e);
    /* 0061ea1e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ea24: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061ea27: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0061ea2d:; BB(0x0061ea2d);
    /* 0061ea2d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea2f: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61ea35u); call_ind(t); }
    /* 0061ea35: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0061ea38: and eax, 0xf000 */ {  u32 a = r_eax; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea3f: je 0x61ea50 */ if (fZ) goto L_0061ea50;
L_0061ea41:; BB(0x0061ea41);
    /* 0061ea41: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ea47: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ea4a: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0061ea50:; BB(0x0061ea50);
    /* 0061ea50: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061ea5a: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0061ea60: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0061ea66: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0061ea6c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0061ea72: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061ea78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea79: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061ea7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea80: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061ea85: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061ea88: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61ea8du); f_005e5f9f();
    /* 0061ea8d: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061ea93: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea9a: je 0x61eae0 */ if (fZ) goto L_0061eae0;
L_0061ea9c:; BB(0x0061ea9c);
    /* 0061ea9c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061eaa2: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61eaa7u); f_005e06d0();
    /* 0061eaa7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061eaad: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eaaf: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0061eab5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061eabb: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61eac0u); f_005e06e1();
    /* 0061eac0: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061eac6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061eac8: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0061eace: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061ead4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ead5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061eadb: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61eae0u); f_005d9db7();
L_0061eae0:; BB(0x0061eae0);
    /* 0061eae0: jmp 0x61fc81 */ goto L_0061fc81;
L_0061eae5:; BB(0x0061eae5);
    /* 0061eae5: cmp dword ptr [0x71116c], 0 */ {  u32 a = R32((u32)(0x71116cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eaec: jne 0x61eb03 */ if (!fZ) goto L_0061eb03;
L_0061eaee:; BB(0x0061eaee);
    /* 0061eaee: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eaf5: je 0x61eb03 */ if (fZ) goto L_0061eb03;
L_0061eaf7:; BB(0x0061eaf7);
    /* 0061eaf7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061eafd: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eb01: jne 0x61eb08 */ if (!fZ) goto L_0061eb08;
L_0061eb03:; BB(0x0061eb03);
    /* 0061eb03: jmp 0x61fc81 */ goto L_0061fc81;
L_0061eb08:; BB(0x0061eb08);
    /* 0061eb08: mov dword ptr [0x71116c], 1 */ W32((u32)(0x71116cu), 0x1u);
    /* 0061eb12: movsx edx, word ptr [ebp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0061eb16: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061eb19: sub edx, dword ptr [eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061eb1c: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0061eb22: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061eb25: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0061eb28: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eb2e: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0061eb31: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061eb34: sub edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061eb37: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0061eb3d: mov dword ptr [ebp - 0x90], 3 */ W32((u32)(r_ebp+0xffffff70u), 0x3u);
    /* 0061eb47: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 0061eb51: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb53: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61eb59u); call_ind(t); }
    /* 0061eb59: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061eb5c: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eb62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eb64: je 0x61eb75 */ if (fZ) goto L_0061eb75;
L_0061eb66:; BB(0x0061eb66);
    /* 0061eb66: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061eb6c: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061eb6f: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0061eb75:; BB(0x0061eb75);
    /* 0061eb75: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb77: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61eb7du); call_ind(t); }
    /* 0061eb7d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0061eb80: and eax, 0xf000 */ {  u32 a = r_eax; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061eb85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eb87: je 0x61eb98 */ if (fZ) goto L_0061eb98;
L_0061eb89:; BB(0x0061eb89);
    /* 0061eb89: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061eb8f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eb92: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0061eb98:; BB(0x0061eb98);
    /* 0061eb98: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb9a: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61eba0u); call_ind(t); }
    /* 0061eba0: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061eba3: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061eba9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ebab: je 0x61ebbb */ if (fZ) goto L_0061ebbb;
L_0061ebad:; BB(0x0061ebad);
    /* 0061ebad: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ebb3: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061ebb5: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061ebbb:; BB(0x0061ebbb);
    /* 0061ebbb: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061ebc5: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0061ebcb: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0061ebd1: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0061ebd7: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0061ebdd: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0061ebe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ebe4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061ebea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ebeb: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0061ebf1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061ebf4: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61ebf9u); f_005e5f9f();
    /* 0061ebf9: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061ebff: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ec06: je 0x61ec4c */ if (fZ) goto L_0061ec4c;
L_0061ec08:; BB(0x0061ec08);
    /* 0061ec08: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061ec0e: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x61ec13u); f_005e06d0();
    /* 0061ec13: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061ec19: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ec1b: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0061ec21: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0061ec27: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x61ec2cu); f_005e06e1();
    /* 0061ec2c: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061ec32: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061ec34: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0061ec3a: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061ec40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec41: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061ec47: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61ec4cu); f_005d9db7();
L_0061ec4c:; BB(0x0061ec4c);
    /* 0061ec4c: mov dword ptr [0x71116c], 0 */ W32((u32)(0x71116cu), 0x0u);
    /* 0061ec56: jmp 0x61fc81 */ goto L_0061fc81;
L_0061ec5b:; BB(0x0061ec5b);
    /* 0061ec5b: cmp dword ptr [ebp + 0x10], 0x1a */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061ec5f: ja 0x61ec9c */ if ((!fC&&!fZ)) goto L_0061ec9c;
L_0061ec61:; BB(0x0061ec61);
    /* 0061ec61: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061ec64: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ec67: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0061ec6d: mov dword ptr [ebp - 0x8c], 2 */ W32((u32)(r_ebp+0xffffff74u), 0x2u);
    /* 0061ec77: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec79: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61ec7fu); call_ind(t); }
    /* 0061ec7f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061ec82: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061ec88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ec8a: je 0x61ec9a */ if (fZ) goto L_0061ec9a;
L_0061ec8c:; BB(0x0061ec8c);
    /* 0061ec8c: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ec92: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061ec94: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061ec9a:; BB(0x0061ec9a);
    /* 0061ec9a: jmp 0x61ecd2 */ goto L_0061ecd2;
L_0061ec9c:; BB(0x0061ec9c);
    /* 0061ec9c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061ec9f: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0061eca5: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 0061ecaf: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecb1: call dword ptr [0x6331b4] */ { u32 t = R32((u32)(0x6331b4u)); r_esp -= 4; W32(r_esp, 0x61ecb7u); call_ind(t); }
    /* 0061ecb7: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0061ecba: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061ecc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ecc2: je 0x61ecd2 */ if (fZ) goto L_0061ecd2;
L_0061ecc4:; BB(0x0061ecc4);
    /* 0061ecc4: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0061ecca: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061eccc: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0061ecd2:; BB(0x0061ecd2);
    /* 0061ecd2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0061ecd9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061ecdc: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 0061ece2: cmp dword ptr [ebp - 0x130], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ecec: je 0x61ed08 */ if (fZ) goto L_0061ed08;
L_0061ecee:; BB(0x0061ecee);
    /* 0061ecee: cmp dword ptr [ebp - 0x130], 0x101 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ecf8: je 0x61ed3f */ if (fZ) goto L_0061ed3f;
L_0061ecfa:; BB(0x0061ecfa);
    /* 0061ecfa: cmp dword ptr [ebp - 0x130], 0x102 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ed04: je 0x61ed4b */ if (fZ) goto L_0061ed4b;
L_0061ed06:; BB(0x0061ed06);
    /* 0061ed06: jmp 0x61ed55 */ goto L_0061ed55;
L_0061ed08:; BB(0x0061ed08);
    /* 0061ed08: cmp dword ptr [ebp + 0x10], 0x1b */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061ed0c: jbe 0x61ed33 */ if ((fC||fZ)) goto L_0061ed33;
L_0061ed0e:; BB(0x0061ed0e);
    /* 0061ed0e: cmp dword ptr [ebp + 0x10], 0x29 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061ed12: jb 0x61ed1a */ if (fC) goto L_0061ed1a;
L_0061ed14:; BB(0x0061ed14);
    /* 0061ed14: cmp dword ptr [ebp + 0x10], 0x2e */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ed18: jne 0x61ed33 */ if (!fZ) goto L_0061ed33;
L_0061ed1a:; BB(0x0061ed1a);
    /* 0061ed1a: cmp dword ptr [ebp + 0x10], 0x20 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ed1e: je 0x61ed33 */ if (fZ) goto L_0061ed33;
L_0061ed20:; BB(0x0061ed20);
    /* 0061ed20: mov dword ptr [ebp - 0x90], 4 */ W32((u32)(r_ebp+0xffffff70u), 0x4u);
    /* 0061ed2a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0061ed31: jmp 0x61ed3d */ goto L_0061ed3d;
L_0061ed33:; BB(0x0061ed33);
    /* 0061ed33: mov dword ptr [ebp - 0x90], 0x15 */ W32((u32)(r_ebp+0xffffff70u), 0x15u);
L_0061ed3d:; BB(0x0061ed3d);
    /* 0061ed3d: jmp 0x61ed55 */ goto L_0061ed55;
L_0061ed3f:; BB(0x0061ed3f);
    /* 0061ed3f: mov dword ptr [ebp - 0x90], 0x16 */ W32((u32)(r_ebp+0xffffff70u), 0x16u);
    /* 0061ed49: jmp 0x61ed55 */ goto L_0061ed55;
L_0061ed4b:; BB(0x0061ed4b);
    /* 0061ed4b: mov dword ptr [ebp - 0x90], 4 */ W32((u32)(r_ebp+0xffffff70u), 0x4u);
L_0061ed55:; BB(0x0061ed55);
    /* 0061ed55: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061ed5f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 0061ed69: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0061ed73: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0061ed76: mov byte ptr [ebp - 0x94], dl */ W8((u32)(r_ebp+0xffffff6cu), (u8)r_edx);
    /* 0061ed7c: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0061ed82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed83: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061ed89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed8a: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0061ed90: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061ed93: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61ed98u); f_005e5f9f();
    /* 0061ed98: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061ed9e: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eda5: je 0x61eddb */ if (fZ) goto L_0061eddb;
L_0061eda7:; BB(0x0061eda7);
    /* 0061eda7: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061edad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061edae: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061edb4: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61edb9u); f_005d9db7();
    /* 0061edb9: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061edbd: je 0x61eddb */ if (fZ) goto L_0061eddb;
L_0061edbf:; BB(0x0061edbf);
    /* 0061edbf: mov dword ptr [ebp - 0x90], 0x15 */ W32((u32)(r_ebp+0xffffff70u), 0x15u);
    /* 0061edc9: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061edcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061edd0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061edd6: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61eddbu); f_005d9db7();
L_0061eddb:; BB(0x0061eddb);
    /* 0061eddb: jmp 0x61fc81 */ goto L_0061fc81;
L_0061ede0:; BB(0x0061ede0);
    /* 0061ede0: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ede4: jne 0x61ee53 */ if (!fZ) goto L_0061ee53;
L_0061ede6:; BB(0x0061ede6);
    /* 0061ede6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061edec: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x61edf1u); f_005da3ec();
    /* 0061edf1: cmp eax, 0x232a */ {  u32 a = r_eax; u32 b = 0x232au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061edf6: je 0x61ee53 */ if (fZ) goto L_0061ee53;
L_0061edf8:; BB(0x0061edf8);
    /* 0061edf8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061edfe: call 0x5da3ec */ r_esp -= 4; W32(r_esp, 0x61ee03u); f_005da3ec();
    /* 0061ee03: cmp eax, 0x232e */ {  u32 a = r_eax; u32 b = 0x232eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee08: je 0x61ee53 */ if (fZ) goto L_0061ee53;
L_0061ee0a:; BB(0x0061ee0a);
    /* 0061ee0a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061ee0d: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x61ee12u); f_006201dc();
    /* 0061ee12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee14: je 0x61ee2f */ if (fZ) goto L_0061ee2f;
L_0061ee16:; BB(0x0061ee16);
    /* 0061ee16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee18: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061ee1b: call 0x6201af */ r_esp -= 4; W32(r_esp, 0x61ee20u); f_006201af();
    /* 0061ee20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee22: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061ee28: call 0x460e1d */ r_esp -= 4; W32(r_esp, 0x61ee2du); f_00460e1d();
    /* 0061ee2d: jmp 0x61ee44 */ goto L_0061ee44;
L_0061ee2f:; BB(0x0061ee2f);
    /* 0061ee2f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061ee32: call 0x620188 */ r_esp -= 4; W32(r_esp, 0x61ee37u); f_00620188();
    /* 0061ee37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee39: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061ee3f: call 0x460e1d */ r_esp -= 4; W32(r_esp, 0x61ee44u); f_00460e1d();
L_0061ee44:; BB(0x0061ee44);
    /* 0061ee44: mov dword ptr [0x711160], 0 */ W32((u32)(0x711160u), 0x0u);
    /* 0061ee4e: jmp 0x61ef90 */ goto L_0061ef90;
L_0061ee53:; BB(0x0061ee53);
    /* 0061ee53: cmp dword ptr [ebp + 0x10], 0x30 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061ee57: jb 0x61ef4a */ if (fC) goto L_0061ef4a;
L_0061ee5d:; BB(0x0061ee5d);
    /* 0061ee5d: cmp dword ptr [ebp + 0x10], 0x39 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061ee61: ja 0x61ef4a */ if ((!fC&&!fZ)) goto L_0061ef4a;
L_0061ee67:; BB(0x0061ee67);
    /* 0061ee67: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee6e: je 0x61ef4a */ if (fZ) goto L_0061ef4a;
L_0061ee74:; BB(0x0061ee74);
    /* 0061ee74: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061ee77: add edx, 0x9a */ {  u32 a = r_edx; u32 b = 0x9au; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ee7d: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0061ee80: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061ee86: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x61ee8bu); f_0045cb85();
    /* 0061ee8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee8d: je 0x61eeae */ if (fZ) goto L_0061eeae;
L_0061ee8f:; BB(0x0061ee8f);
    /* 0061ee8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee95: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061ee98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee99: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061ee9f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0061eea2: mov ecx, dword ptr [edx*4 + 0x6f5f78] */ r_ecx = R32((u32)(r_edx*4+0x6f5f78u));
    /* 0061eea9: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x61eeaeu); f_005e8389();
L_0061eeae:; BB(0x0061eeae);
    /* 0061eeae: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061eeb4: call 0x5edcdd */ r_esp -= 4; W32(r_esp, 0x61eeb9u); f_005edcdd();
    /* 0061eeb9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061eebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eebd: push 0x6f0a40 */ { u32 v = 0x6f0a40u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eec2: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061eec8: call 0x5edca9 */ r_esp -= 4; W32(r_esp, 0x61eecdu); f_005edca9();
    /* 0061eecd: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eed2: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061eed8: call 0x5edd35 */ r_esp -= 4; W32(r_esp, 0x61eeddu); f_005edd35();
    /* 0061eedd: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061eee3: cmp dword ptr [ecx + 0x298], 0 */ {  u32 a = R32((u32)(r_ecx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eeea: je 0x61ef48 */ if (fZ) goto L_0061ef48;
L_0061eeec:; BB(0x0061eeec);
    /* 0061eeec: mov edx, dword ptr [0x6fc470] */ r_edx = R32((u32)(0x6fc470u));
    /* 0061eef2: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0061eef8: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0061eefe: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 0061ef04: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef0b: je 0x61ef29 */ if (fZ) goto L_0061ef29;
L_0061ef0d:; BB(0x0061ef0d);
    /* 0061ef0d: mov edx, dword ptr [0x6fc470] */ r_edx = R32((u32)(0x6fc470u));
    /* 0061ef13: mov ecx, dword ptr [edx + 0x298] */ r_ecx = R32((u32)(r_edx+0x298u));
    /* 0061ef19: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 0061ef1e: mov edx, dword ptr [eax + 0x298] */ r_edx = R32((u32)(r_eax+0x298u));
    /* 0061ef24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061ef26: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x61ef29u); call_ind(t); }
L_0061ef29:; BB(0x0061ef29);
    /* 0061ef29: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061ef2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef2d: mov edx, dword ptr [0x6fc470] */ r_edx = R32((u32)(0x6fc470u));
    /* 0061ef33: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0061ef36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef37: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 0061ef3d: mov ecx, dword ptr [ecx + 0x298] */ r_ecx = R32((u32)(r_ecx+0x298u));
    /* 0061ef43: call 0x42ca5a */ r_esp -= 4; W32(r_esp, 0x61ef48u); f_0042ca5a();
L_0061ef48:; BB(0x0061ef48);
    /* 0061ef48: jmp 0x61ef90 */ goto L_0061ef90;
L_0061ef4a:; BB(0x0061ef4a);
    /* 0061ef4a: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef51: je 0x61ef90 */ if (fZ) goto L_0061ef90;
L_0061ef53:; BB(0x0061ef53);
    /* 0061ef53: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0061ef59: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef5d: je 0x61ef90 */ if (fZ) goto L_0061ef90;
L_0061ef5f:; BB(0x0061ef5f);
    /* 0061ef5f: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061ef64: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061ef67: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x61ef6cu); f_005e5f8e();
    /* 0061ef6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef6e: je 0x61ef90 */ if (fZ) goto L_0061ef90;
L_0061ef70:; BB(0x0061ef70);
    /* 0061ef70: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 0061ef7a: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061ef80: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61ef85u); f_005d9462();
    /* 0061ef85: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 0061ef8b: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061ef90:; BB(0x0061ef90);
    /* 0061ef90: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061ef93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef94: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061ef97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef98: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ef9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ef9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061efa0: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61efa6u); call_ind(t); }
    /* 0061efa6: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0061efac: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061efb2: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61efb7u); f_005d9462();
    /* 0061efb7: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0061efbd: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061efc2:; BB(0x0061efc2);
    /* 0061efc2: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 0061efcc: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061efd2: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61efd7u); f_005d9462();
    /* 0061efd7: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 0061efdd: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061efe2:; BB(0x0061efe2);
    /* 0061efe2: push 0x6f0a48 */ { u32 v = 0x6f0a48u; r_esp -= 4; W32(r_esp, v); }
    /* 0061efe7: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61efecu); f_0060fc40();
    /* 0061efec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061efef: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eff3: je 0x61f001 */ if (fZ) goto L_0061f001;
L_0061eff5:; BB(0x0061eff5);
    /* 0061eff5: mov dword ptr [ebp - 0x134], 0x6f0a60 */ W32((u32)(r_ebp+0xfffffeccu), 0x6f0a60u);
    /* 0061efff: jmp 0x61f00b */ goto L_0061f00b;
L_0061f001:; BB(0x0061f001);
    /* 0061f001: mov dword ptr [ebp - 0x134], 0x6f0a6c */ W32((u32)(r_ebp+0xfffffeccu), 0x6f0a6cu);
L_0061f00b:; BB(0x0061f00b);
    /* 0061f00b: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0061f011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f012: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f017u); f_0060fc40();
    /* 0061f017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f01a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f01d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f01e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f022: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061f025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f026: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f02a: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61f030u); call_ind(t); }
    /* 0061f030: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061f033: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f037: je 0x61f090 */ if (fZ) goto L_0061f090;
L_0061f039:; BB(0x0061f039);
    /* 0061f039: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f040: je 0x61f090 */ if (fZ) goto L_0061f090;
L_0061f042:; BB(0x0061f042);
    /* 0061f042: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f048: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f04c: je 0x61f090 */ if (fZ) goto L_0061f090;
L_0061f04e:; BB(0x0061f04e);
    /* 0061f04e: cmp dword ptr [0x711160], 0 */ {  u32 a = R32((u32)(0x711160u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f055: je 0x61f076 */ if (fZ) goto L_0061f076;
L_0061f057:; BB(0x0061f057);
    /* 0061f057: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f05a: call 0x620188 */ r_esp -= 4; W32(r_esp, 0x61f05fu); f_00620188();
    /* 0061f05f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f061: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f067: call 0x460e1d */ r_esp -= 4; W32(r_esp, 0x61f06cu); f_00460e1d();
    /* 0061f06c: mov dword ptr [0x711160], 0 */ W32((u32)(0x711160u), 0x0u);
L_0061f076:; BB(0x0061f076);
    /* 0061f076: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f079: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0061f07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f07d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f080: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0061f083: call 0x4a2535 */ r_esp -= 4; W32(r_esp, 0x61f088u); f_004a2535();
    /* 0061f088: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f08b: call 0x61d4f3 */ r_esp -= 4; W32(r_esp, 0x61f090u); f_0061d4f3();
L_0061f090:; BB(0x0061f090);
    /* 0061f090: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f093: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 0061f099: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f09f: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f0a4u); f_005d9462();
    /* 0061f0a4: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0061f0aa: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f0af:; BB(0x0061f0af);
    /* 0061f0af: push 0x6f0a7c */ { u32 v = 0x6f0a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0b4: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f0b9u); f_0060fc40();
    /* 0061f0b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f0bc: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0061f0bf: mov byte ptr [0x6f6efc], al */ W8((u32)(0x6f6efcu), (u8)r_eax);
    /* 0061f0c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f0c6: mov cl, byte ptr [0x6f6efc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6f6efcu))) & 0xffu);
    /* 0061f0cc: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f0cf: jne 0x61f0ec */ if (!fZ) goto L_0061f0ec;
L_0061f0d1:; BB(0x0061f0d1);
    /* 0061f0d1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f0d4: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0061f0d7: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 0061f0e1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f0e4: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0061f0e7: call 0x61bf22 */ r_esp -= 4; W32(r_esp, 0x61f0ecu); f_0061bf22();
L_0061f0ec:; BB(0x0061f0ec);
    /* 0061f0ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0ee: call dword ptr [0x633180] */ { u32 t = R32((u32)(0x633180u)); r_esp -= 4; W32(r_esp, 0x61f0f4u); call_ind(t); }
    /* 0061f0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0f5: push 0x311 */ { u32 v = 0x311u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0fa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f0fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0fe: call dword ptr [0x633248] */ { u32 t = R32((u32)(0x633248u)); r_esp -= 4; W32(r_esp, 0x61f104u); call_ind(t); }
    /* 0061f104: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f109:; BB(0x0061f109);
    /* 0061f109: push 0x6f0a98 */ { u32 v = 0x6f0a98u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f10e: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f113u); f_0060fc40();
    /* 0061f113: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f116: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f119: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0061f11c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f11d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f120: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0061f123: call 0x4a2535 */ r_esp -= 4; W32(r_esp, 0x61f128u); f_004a2535();
    /* 0061f128: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f12b: call 0x61d2ed */ r_esp -= 4; W32(r_esp, 0x61f130u); f_0061d2ed();
    /* 0061f130: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 0061f13a: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f140: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f145u); f_005d9462();
    /* 0061f145: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0061f14b: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f150:; BB(0x0061f150);
    /* 0061f150: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061f153: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f156: je 0x61f194 */ if (fZ) goto L_0061f194;
L_0061f158:; BB(0x0061f158);
    /* 0061f158: cmp dword ptr [0x6f6eec], 0 */ {  u32 a = R32((u32)(0x6f6eecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f15f: je 0x61f194 */ if (fZ) goto L_0061f194;
L_0061f161:; BB(0x0061f161);
    /* 0061f161: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f167: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f16b: je 0x61f194 */ if (fZ) goto L_0061f194;
L_0061f16d:; BB(0x0061f16d);
    /* 0061f16d: push 0x6f0ab0 */ { u32 v = 0x6f0ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f172: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f177u); f_0060fc40();
    /* 0061f177: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f17a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f17d: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0061f180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f181: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f184: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0061f187: call 0x4a2535 */ r_esp -= 4; W32(r_esp, 0x61f18cu); f_004a2535();
    /* 0061f18c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f18f: call 0x61d2ed */ r_esp -= 4; W32(r_esp, 0x61f194u); f_0061d2ed();
L_0061f194:; BB(0x0061f194);
    /* 0061f194: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f199:; BB(0x0061f199);
    /* 0061f199: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f19c: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 0061f1a2: cmp dword ptr [ebp - 0x138], 0x8001 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x8001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f1ac: je 0x61f2f7 */ if (fZ) goto L_0061f2f7;
L_0061f1b2:; BB(0x0061f1b2);
    /* 0061f1b2: cmp dword ptr [ebp - 0x138], 0x8004 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x8004u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f1bc: je 0x61f1c3 */ if (fZ) goto L_0061f1c3;
L_0061f1be:; BB(0x0061f1be);
    /* 0061f1be: jmp 0x61f356 */ goto L_0061f356;
L_0061f1c3:; BB(0x0061f1c3);
    /* 0061f1c3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f1c6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061f1c9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061f1cc: cmp dword ptr [ecx + 4], 2 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f1d0: jne 0x61f2f5 */ if (!fZ) goto L_0061f2f5;
L_0061f1d6:; BB(0x0061f1d6);
    /* 0061f1d6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061f1d9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061f1dc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f1df: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0061f1e2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0061f1e5:; BB(0x0061f1e5);
    /* 0061f1e5: movsx edx, byte ptr [0x6f6f00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0061f1ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f1ee: je 0x61f2f5 */ if (fZ) goto L_0061f2f5;
L_0061f1f4:; BB(0x0061f1f4);
    /* 0061f1f4: movsx ecx, byte ptr [0x6f6f00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0061f1fb: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061f1fe: mov eax, 1 */ r_eax = 0x1u;
    /* 0061f203: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061f205: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f208: jne 0x61f2f5 */ if (!fZ) goto L_0061f2f5;
L_0061f20e:; BB(0x0061f20e);
    /* 0061f20e: mov dword ptr [ebp - 0xe0], 0x2c */ W32((u32)(r_ebp+0xffffff20u), 0x2cu);
    /* 0061f218: mov dword ptr [ebp - 0xd8], 2 */ W32((u32)(r_ebp+0xffffff28u), 0x2u);
    /* 0061f222: lea ecx, [ebp - 0xe0] */ r_ecx = (u32)(r_ebp+0xffffff20u);
    /* 0061f228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f229: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f22c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f22d: call dword ptr [0x6331bc] */ { u32 t = R32((u32)(0x6331bcu)); r_esp -= 4; W32(r_esp, 0x61f233u); call_ind(t); }
    /* 0061f233: cmp dword ptr [ebp - 0xd8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f23a: jne 0x61f248 */ if (!fZ) goto L_0061f248;
L_0061f23c:; BB(0x0061f23c);
    /* 0061f23c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f23e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f242: call dword ptr [0x633254] */ { u32 t = R32((u32)(0x633254u)); r_esp -= 4; W32(r_esp, 0x61f248u); call_ind(t); }
L_0061f248:; BB(0x0061f248);
    /* 0061f248: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061f24b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f24c: call dword ptr [0x633200] */ { u32 t = R32((u32)(0x633200u)); r_esp -= 4; W32(r_esp, 0x61f252u); call_ind(t); }
    /* 0061f252: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f254: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f257: call 0x6201af */ r_esp -= 4; W32(r_esp, 0x61f25cu); f_006201af();
    /* 0061f25c: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f261: push 0x6f0ac8 */ { u32 v = 0x6f0ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f266: push 0x6f0ad4 */ { u32 v = 0x6f0ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f26b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f26d: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x61f273u); call_ind(t); }
    /* 0061f273: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f276: jne 0x61f28e */ if (!fZ) goto L_0061f28e;
L_0061f278:; BB(0x0061f278);
    /* 0061f278: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f27a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f280: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x61f285u); f_0045b98a();
    /* 0061f285: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061f28c: jmp 0x61f2f0 */ goto L_0061f2f0;
L_0061f28e:; BB(0x0061f28e);
    /* 0061f28e: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f293: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x61f299u); call_ind(t); }
    /* 0061f299: mov edx, dword ptr [0x687134] */ r_edx = R32((u32)(0x687134u));
    /* 0061f29f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2a0: movsx eax, byte ptr [0x6f6f00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0061f2a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2a8: push 0x6f0b14 */ { u32 v = 0x6f0b14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2ad: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0061f2b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2b1: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x61f2b7u); call_ind(t); }
    /* 0061f2b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f2ba: push 0x6f0b1c */ { u32 v = 0x6f0b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2bf: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0061f2c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2c3: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x61f2c8u); f_006243c0();
    /* 0061f2c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f2cb: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0061f2d1: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f2d8: je 0x61f2f0 */ if (fZ) goto L_0061f2f0;
L_0061f2da:; BB(0x0061f2da);
    /* 0061f2da: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0061f2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2e1: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x61f2e6u); f_006241d0();
    /* 0061f2e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f2e9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0061f2f0:; BB(0x0061f2f0);
    /* 0061f2f0: jmp 0x61f1e5 */ goto L_0061f1e5;
L_0061f2f5:; BB(0x0061f2f5);
    /* 0061f2f5: jmp 0x61f356 */ goto L_0061f356;
L_0061f2f7:; BB(0x0061f2f7);
    /* 0061f2f7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f2fa: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0061f2fd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061f300: cmp dword ptr [edx + 4], 2 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f304: jne 0x61f356 */ if (!fZ) goto L_0061f356;
L_0061f306:; BB(0x0061f306);
    /* 0061f306: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f309: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061f30c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f30f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0061f312: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061f315: movsx eax, byte ptr [0x6f6f00] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0061f31c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f31e: je 0x61f356 */ if (fZ) goto L_0061f356;
L_0061f320:; BB(0x0061f320);
    /* 0061f320: movsx ecx, byte ptr [0x6f6f00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0061f327: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061f32a: mov edx, 1 */ r_edx = 0x1u;
    /* 0061f32f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061f331: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f334: jne 0x61f356 */ if (!fZ) goto L_0061f356;
L_0061f336:; BB(0x0061f336);
    /* 0061f336: mov dword ptr [ebp - 0x100], 0x424d5144 */ W32((u32)(r_ebp+0xffffff00u), 0x424d5144u);
    /* 0061f340: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f346: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f34bu); f_005d9462();
    /* 0061f34b: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 0061f351: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f356:; BB(0x0061f356);
    /* 0061f356: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f35b:; BB(0x0061f35b);
    /* 0061f35b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f35d: call 0x61d7da */ r_esp -= 4; W32(r_esp, 0x61f362u); f_0061d7da();
    /* 0061f362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f365: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f36a:; BB(0x0061f36a);
    /* 0061f36a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f36d: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061f372: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f375: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0061f378: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061f37b: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061f37e: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f384: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f38a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f38d: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0061f390: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f395:; BB(0x0061f395);
    /* 0061f395: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f399: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f39c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f39d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061f3a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061f3a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3a5: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61f3abu); call_ind(t); }
    /* 0061f3ab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061f3ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f3b1: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 0061f3b7: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f3bd: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f3c2u); f_005d9462();
    /* 0061f3c2: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 0061f3c8: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f3cd:; BB(0x0061f3cd);
    /* 0061f3cd: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3d1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f3d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3d5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061f3d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3dd: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61f3e3u); call_ind(t); }
    /* 0061f3e3: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0061f3e9: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f3ef: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f3f4u); f_005d9462();
    /* 0061f3f4: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0061f3fa: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f3ff:; BB(0x0061f3ff);
    /* 0061f3ff: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f402: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0061f408: cmp dword ptr [ebp - 0x13c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f40f: je 0x61f44d */ if (fZ) goto L_0061f44d;
L_0061f411:; BB(0x0061f411);
    /* 0061f411: cmp dword ptr [ebp - 0x13c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f418: je 0x61f41c */ if (fZ) goto L_0061f41c;
L_0061f41a:; BB(0x0061f41a);
    /* 0061f41a: jmp 0x61f47d */ goto L_0061f47d;
L_0061f41c:; BB(0x0061f41c);
    /* 0061f41c: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f420: je 0x61f44b */ if (fZ) goto L_0061f44b;
L_0061f422:; BB(0x0061f422);
    /* 0061f422: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f425: call 0x61d55e */ r_esp -= 4; W32(r_esp, 0x61f42au); f_0061d55e();
    /* 0061f42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f42c: je 0x61f44b */ if (fZ) goto L_0061f44b;
L_0061f42e:; BB(0x0061f42e);
    /* 0061f42e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f431: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f435: je 0x61f44b */ if (fZ) goto L_0061f44b;
L_0061f437:; BB(0x0061f437);
    /* 0061f437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f439: push 0x6f0b20 */ { u32 v = 0x6f0b20u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f43e: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061f443: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061f446: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x61f44bu); f_0061baba();
L_0061f44b:; BB(0x0061f44b);
    /* 0061f44b: jmp 0x61f47d */ goto L_0061f47d;
L_0061f44d:; BB(0x0061f44d);
    /* 0061f44d: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f451: je 0x61f47d */ if (fZ) goto L_0061f47d;
L_0061f453:; BB(0x0061f453);
    /* 0061f453: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f456: call 0x61d55e */ r_esp -= 4; W32(r_esp, 0x61f45bu); f_0061d55e();
    /* 0061f45b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f45d: je 0x61f47d */ if (fZ) goto L_0061f47d;
L_0061f45f:; BB(0x0061f45f);
    /* 0061f45f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f462: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f466: je 0x61f47d */ if (fZ) goto L_0061f47d;
L_0061f468:; BB(0x0061f468);
    /* 0061f468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f46a: push 0x6f0b30 */ { u32 v = 0x6f0b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f46f: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061f475: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0061f478: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x61f47du); f_0061baba();
L_0061f47d:; BB(0x0061f47d);
    /* 0061f47d: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f481: jne 0x61f488 */ if (!fZ) goto L_0061f488;
L_0061f483:; BB(0x0061f483);
    /* 0061f483: jmp 0x61f526 */ goto L_0061f526;
L_0061f488:; BB(0x0061f488);
    /* 0061f488: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f48b: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061f490: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061f493: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f496: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0061f499: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f49f: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f4a5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0061f4a8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061f4ab: sub eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061f4b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061f4b1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061f4b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061f4b5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061f4b8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061f4bb: sub eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061f4c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061f4c1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061f4c3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061f4c5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0061f4c8: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f4cc: jge 0x61f4d5 */ if ((fS==fO)) goto L_0061f4d5;
L_0061f4ce:; BB(0x0061f4ce);
    /* 0061f4ce: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0061f4d5:; BB(0x0061f4d5);
    /* 0061f4d5: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f4d9: jge 0x61f4e2 */ if ((fS==fO)) goto L_0061f4e2;
L_0061f4db:; BB(0x0061f4db);
    /* 0061f4db: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0061f4e2:; BB(0x0061f4e2);
    /* 0061f4e2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061f4e5: add edx, 0x1e0 */ {  u32 a = r_edx; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061f4eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f4ec: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061f4ef: add eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f4f5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061f4f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f4f9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061f4fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f4fd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f500: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f504: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61f50au); call_ind(t); }
    /* 0061f50a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f50d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f510: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f511: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f514: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0061f517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f518: call dword ptr [0x6331ec] */ { u32 t = R32((u32)(0x6331ecu)); r_esp -= 4; W32(r_esp, 0x61f51eu); call_ind(t); }
    /* 0061f51e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f521: call 0x61df99 */ r_esp -= 4; W32(r_esp, 0x61f526u); f_0061df99();
L_0061f526:; BB(0x0061f526);
    /* 0061f526: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f529: call 0x61d2ed */ r_esp -= 4; W32(r_esp, 0x61f52eu); f_0061d2ed();
    /* 0061f52e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f531: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f532: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f536: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061f539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f53a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061f53d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f53e: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61f544u); call_ind(t); }
    /* 0061f544: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0061f54a: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f550: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f555u); f_005d9462();
    /* 0061f555: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0061f55b: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f560:; BB(0x0061f560);
    /* 0061f560: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061f563: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f569: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f56c: jne 0x61f5b5 */ if (!fZ) goto L_0061f5b5;
L_0061f56e:; BB(0x0061f56e);
    /* 0061f56e: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0061f573: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f577: je 0x61f588 */ if (fZ) goto L_0061f588;
L_0061f579:; BB(0x0061f579);
    /* 0061f579: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f57c: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0061f57f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f580: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x61f586u); call_ind(t); }
    /* 0061f586: jmp 0x61f595 */ goto L_0061f595;
L_0061f588:; BB(0x0061f588);
    /* 0061f588: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061f58b: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0061f58e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f58f: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x61f595u); call_ind(t); }
L_0061f595:; BB(0x0061f595);
    /* 0061f595: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
    /* 0061f59f: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f5a5: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f5aau); f_005d9462();
    /* 0061f5aa: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 0061f5b0: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f5b5:; BB(0x0061f5b5);
    /* 0061f5b5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061f5b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061f5bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061f5c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f5c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5c5: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61f5cbu); call_ind(t); }
    /* 0061f5cb: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0061f5d1: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f5d7: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61f5dcu); f_005d9462();
    /* 0061f5dc: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0061f5e2: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061f5e7:; BB(0x0061f5e7);
    /* 0061f5e7: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0061f5f1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061f5f4: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061f5f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f5fb: je 0x61f614 */ if (fZ) goto L_0061f614;
L_0061f5fd:; BB(0x0061f5fd);
    /* 0061f5fd: push 0x6f0b40 */ { u32 v = 0x6f0b40u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f602: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f607u); f_0060fc40();
    /* 0061f607: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f60a: mov dword ptr [ebp - 0x90], 0xd */ W32((u32)(r_ebp+0xffffff70u), 0xdu);
L_0061f614:; BB(0x0061f614);
    /* 0061f614: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f617: and ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f61d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f61f: je 0x61f638 */ if (fZ) goto L_0061f638;
L_0061f621:; BB(0x0061f621);
    /* 0061f621: push 0x6f0b58 */ { u32 v = 0x6f0b58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f626: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f62bu); f_0060fc40();
    /* 0061f62b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f62e: mov dword ptr [ebp - 0x90], 0xf */ W32((u32)(r_ebp+0xffffff70u), 0xfu);
L_0061f638:; BB(0x0061f638);
    /* 0061f638: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f63b: and edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f641: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f643: je 0x61f65c */ if (fZ) goto L_0061f65c;
L_0061f645:; BB(0x0061f645);
    /* 0061f645: push 0x6f0b70 */ { u32 v = 0x6f0b70u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f64a: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f64fu); f_0060fc40();
    /* 0061f64f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f652: mov dword ptr [ebp - 0x90], 0x11 */ W32((u32)(r_ebp+0xffffff70u), 0x11u);
L_0061f65c:; BB(0x0061f65c);
    /* 0061f65c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061f65f: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061f664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f666: je 0x61f67f */ if (fZ) goto L_0061f67f;
L_0061f668:; BB(0x0061f668);
    /* 0061f668: push 0x6f0b88 */ { u32 v = 0x6f0b88u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f66d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f672u); f_0060fc40();
    /* 0061f672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f675: mov dword ptr [ebp - 0x90], 0x13 */ W32((u32)(r_ebp+0xffffff70u), 0x13u);
L_0061f67f:; BB(0x0061f67f);
    /* 0061f67f: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f686: je 0x61f70c */ if (fZ) goto L_0061f70c;
L_0061f68c:; BB(0x0061f68c);
    /* 0061f68c: cmp dword ptr [ebp + 0xc], 0x3b5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3b5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f693: jne 0x61f6a1 */ if (!fZ) goto L_0061f6a1;
L_0061f695:; BB(0x0061f695);
    /* 0061f695: mov dword ptr [ebp - 0x8c], 0x40 */ W32((u32)(r_ebp+0xffffff74u), 0x40u);
    /* 0061f69f: jmp 0x61f6ab */ goto L_0061f6ab;
L_0061f6a1:; BB(0x0061f6a1);
    /* 0061f6a1: mov dword ptr [ebp - 0x8c], 0x80 */ W32((u32)(r_ebp+0xffffff74u), 0x80u);
L_0061f6ab:; BB(0x0061f6ab);
    /* 0061f6ab: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061f6b5: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 0061f6bf: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0061f6c9: mov byte ptr [ebp - 0x94], 0 */ W8((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0061f6d0: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061f6d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f6d7: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061f6dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f6de: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061f6e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061f6e6: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61f6ebu); f_005e5f9f();
    /* 0061f6eb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061f6f1: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f6f8: je 0x61f70c */ if (fZ) goto L_0061f70c;
L_0061f6fa:; BB(0x0061f6fa);
    /* 0061f6fa: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f701: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f707: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61f70cu); f_005d9db7();
L_0061f70c:; BB(0x0061f70c);
    /* 0061f70c: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f711:; BB(0x0061f711);
    /* 0061f711: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0061f71b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f71e: and edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f724: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f726: je 0x61f73f */ if (fZ) goto L_0061f73f;
L_0061f728:; BB(0x0061f728);
    /* 0061f728: push 0x6f0ba0 */ { u32 v = 0x6f0ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f72d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f732u); f_0060fc40();
    /* 0061f732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f735: mov dword ptr [ebp - 0x90], 0xe */ W32((u32)(r_ebp+0xffffff70u), 0xeu);
L_0061f73f:; BB(0x0061f73f);
    /* 0061f73f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061f742: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061f747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f749: je 0x61f762 */ if (fZ) goto L_0061f762;
L_0061f74b:; BB(0x0061f74b);
    /* 0061f74b: push 0x6f0bb8 */ { u32 v = 0x6f0bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f750: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f755u); f_0060fc40();
    /* 0061f755: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f758: mov dword ptr [ebp - 0x90], 0x10 */ W32((u32)(r_ebp+0xffffff70u), 0x10u);
L_0061f762:; BB(0x0061f762);
    /* 0061f762: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f765: and ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f76b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f76d: je 0x61f786 */ if (fZ) goto L_0061f786;
L_0061f76f:; BB(0x0061f76f);
    /* 0061f76f: push 0x6f0bd0 */ { u32 v = 0x6f0bd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f774: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f779u); f_0060fc40();
    /* 0061f779: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f77c: mov dword ptr [ebp - 0x90], 0x12 */ W32((u32)(r_ebp+0xffffff70u), 0x12u);
L_0061f786:; BB(0x0061f786);
    /* 0061f786: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061f789: and edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061f78f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f791: je 0x61f7aa */ if (fZ) goto L_0061f7aa;
L_0061f793:; BB(0x0061f793);
    /* 0061f793: push 0x6f0be8 */ { u32 v = 0x6f0be8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f798: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f79du); f_0060fc40();
    /* 0061f79d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f7a0: mov dword ptr [ebp - 0x90], 0x14 */ W32((u32)(r_ebp+0xffffff70u), 0x14u);
L_0061f7aa:; BB(0x0061f7aa);
    /* 0061f7aa: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7b1: je 0x61f838 */ if (fZ) goto L_0061f838;
L_0061f7b7:; BB(0x0061f7b7);
    /* 0061f7b7: cmp dword ptr [ebp + 0xc], 0x3b7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3b7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7be: jne 0x61f7cc */ if (!fZ) goto L_0061f7cc;
L_0061f7c0:; BB(0x0061f7c0);
    /* 0061f7c0: mov dword ptr [ebp - 0x8c], 0x40 */ W32((u32)(r_ebp+0xffffff74u), 0x40u);
    /* 0061f7ca: jmp 0x61f7d6 */ goto L_0061f7d6;
L_0061f7cc:; BB(0x0061f7cc);
    /* 0061f7cc: mov dword ptr [ebp - 0x8c], 0x80 */ W32((u32)(r_ebp+0xffffff74u), 0x80u);
L_0061f7d6:; BB(0x0061f7d6);
    /* 0061f7d6: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061f7e0: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 0061f7ea: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0061f7f4: mov byte ptr [ebp - 0x94], 0 */ W8((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0061f7fb: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0061f801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f802: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061f808: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f809: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0061f80f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061f812: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61f817u); f_005e5f9f();
    /* 0061f817: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061f81d: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f824: je 0x61f838 */ if (fZ) goto L_0061f838;
L_0061f826:; BB(0x0061f826);
    /* 0061f826: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061f82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f82d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f833: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61f838u); f_005d9db7();
L_0061f838:; BB(0x0061f838);
    /* 0061f838: jmp 0x61fc81 */ goto L_0061fc81;
L_0061f83d:; BB(0x0061f83d);
    /* 0061f83d: cmp dword ptr [ebp + 0xc], 0x3a0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f844: jne 0x61f859 */ if (!fZ) goto L_0061f859;
L_0061f846:; BB(0x0061f846);
    /* 0061f846: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0061f84d: mov dword ptr [ebp - 0x8c], 0x40 */ W32((u32)(r_ebp+0xffffff74u), 0x40u);
    /* 0061f857: jmp 0x61f86a */ goto L_0061f86a;
L_0061f859:; BB(0x0061f859);
    /* 0061f859: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0061f860: mov dword ptr [ebp - 0x8c], 0x80 */ W32((u32)(r_ebp+0xffffff74u), 0x80u);
L_0061f86a:; BB(0x0061f86a);
    /* 0061f86a: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0061f874: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 0061f87e: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0061f888: mov byte ptr [ebp - 0x94], 0 */ W8((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0061f88f: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061f895: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f896: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061f89c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f89d: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0061f8a2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061f8a5: call 0x5e5f9f */ r_esp -= 4; W32(r_esp, 0x61f8aau); f_005e5f9f();
    /* 0061f8aa: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061f8b0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f8b3: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8b9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f8bc: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061f8bf: mov eax, dword ptr [0x711164] */ r_eax = R32((u32)(0x711164u));
    /* 0061f8c4: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 0061f8c7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f8ca: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0061f8cd: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8d3: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8d9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f8dc: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061f8df: mov eax, dword ptr [0x711164] */ r_eax = R32((u32)(0x711164u));
    /* 0061f8e4: mov dword ptr [eax + edx + 4], ecx */ W32((u32)(r_eax+r_edx+0x4u), r_ecx);
    /* 0061f8e8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f8eb: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f8ee: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061f8f4: cmp dword ptr [edx + ecx + 4], 0x4000 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061f8fc: jae 0x61f93d */ if (!fC) goto L_0061f93d;
L_0061f8fe:; BB(0x0061f8fe);
    /* 0061f8fe: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f901: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061f904: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061f90a: cmp dword ptr [ecx + eax + 4], 0x4000 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061f912: jbe 0x61f93d */ if ((fC||fZ)) goto L_0061f93d;
L_0061f914:; BB(0x0061f914);
    /* 0061f914: push 0x6f0c00 */ { u32 v = 0x6f0c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f919: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f91eu); f_0060fc40();
    /* 0061f91e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f921: mov dword ptr [ebp - 0x90], 6 */ W32((u32)(r_ebp+0xffffff70u), 0x6u);
    /* 0061f92b: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0061f931: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f932: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f938: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61f93du); f_005d9db7();
L_0061f93d:; BB(0x0061f93d);
    /* 0061f93d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f940: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061f943: mov ecx, dword ptr [0x711164] */ r_ecx = R32((u32)(0x711164u));
    /* 0061f949: cmp dword ptr [ecx + eax + 4], 0x4000 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061f951: jbe 0x61f991 */ if ((fC||fZ)) goto L_0061f991;
L_0061f953:; BB(0x0061f953);
    /* 0061f953: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f956: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061f959: mov eax, dword ptr [0x711168] */ r_eax = R32((u32)(0x711168u));
    /* 0061f95e: cmp dword ptr [eax + edx + 4], 0x4000 */ {  u32 a = R32((u32)(r_eax+r_edx+0x4u)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061f966: jae 0x61f991 */ if (!fC) goto L_0061f991;
L_0061f968:; BB(0x0061f968);
    /* 0061f968: push 0x6f0c14 */ { u32 v = 0x6f0c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f96d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f972u); f_0060fc40();
    /* 0061f972: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f975: mov dword ptr [ebp - 0x90], 5 */ W32((u32)(r_ebp+0xffffff70u), 0x5u);
    /* 0061f97f: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061f985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f986: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f98c: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61f991u); f_005d9db7();
L_0061f991:; BB(0x0061f991);
    /* 0061f991: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f994: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061f997: mov eax, dword ptr [0x711164] */ r_eax = R32((u32)(0x711164u));
    /* 0061f99c: cmp dword ptr [eax + edx + 4], 0xc000 */ {  u32 a = R32((u32)(r_eax+r_edx+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061f9a4: jbe 0x61f9e5 */ if ((fC||fZ)) goto L_0061f9e5;
L_0061f9a6:; BB(0x0061f9a6);
    /* 0061f9a6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f9a9: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f9ac: mov edx, dword ptr [0x711168] */ r_edx = R32((u32)(0x711168u));
    /* 0061f9b2: cmp dword ptr [edx + ecx + 4], 0xc000 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061f9ba: jae 0x61f9e5 */ if (!fC) goto L_0061f9e5;
L_0061f9bc:; BB(0x0061f9bc);
    /* 0061f9bc: push 0x6f0c28 */ { u32 v = 0x6f0c28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f9c1: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61f9c6u); f_0060fc40();
    /* 0061f9c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f9c9: mov dword ptr [ebp - 0x90], 8 */ W32((u32)(r_ebp+0xffffff70u), 0x8u);
    /* 0061f9d3: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061f9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f9da: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061f9e0: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61f9e5u); f_005d9db7();
L_0061f9e5:; BB(0x0061f9e5);
    /* 0061f9e5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f9e8: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f9eb: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061f9f1: cmp dword ptr [edx + ecx + 4], 0xc000 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061f9f9: jae 0x61fa3a */ if (!fC) goto L_0061fa3a;
L_0061f9fb:; BB(0x0061f9fb);
    /* 0061f9fb: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061f9fe: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fa01: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061fa07: cmp dword ptr [ecx + eax + 4], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061fa0f: jbe 0x61fa3a */ if ((fC||fZ)) goto L_0061fa3a;
L_0061fa11:; BB(0x0061fa11);
    /* 0061fa11: push 0x6f0c3c */ { u32 v = 0x6f0c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa16: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61fa1bu); f_0060fc40();
    /* 0061fa1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fa1e: mov dword ptr [ebp - 0x90], 7 */ W32((u32)(r_ebp+0xffffff70u), 0x7u);
    /* 0061fa28: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0061fa2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa2f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fa35: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fa3au); f_005d9db7();
L_0061fa3a:; BB(0x0061fa3a);
    /* 0061fa3a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fa3d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fa40: mov ecx, dword ptr [0x711164] */ r_ecx = R32((u32)(0x711164u));
    /* 0061fa46: cmp dword ptr [ecx + eax], 0x4000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061fa4d: jae 0x61fa8c */ if (!fC) goto L_0061fa8c;
L_0061fa4f:; BB(0x0061fa4f);
    /* 0061fa4f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fa52: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061fa55: mov eax, dword ptr [0x711168] */ r_eax = R32((u32)(0x711168u));
    /* 0061fa5a: cmp dword ptr [eax + edx], 0x4000 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061fa61: jbe 0x61fa8c */ if ((fC||fZ)) goto L_0061fa8c;
L_0061fa63:; BB(0x0061fa63);
    /* 0061fa63: push 0x6f0c50 */ { u32 v = 0x6f0c50u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa68: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61fa6du); f_0060fc40();
    /* 0061fa6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fa70: mov dword ptr [ebp - 0x90], 0xc */ W32((u32)(r_ebp+0xffffff70u), 0xcu);
    /* 0061fa7a: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061fa80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa81: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fa87: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fa8cu); f_005d9db7();
L_0061fa8c:; BB(0x0061fa8c);
    /* 0061fa8c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fa8f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061fa92: mov eax, dword ptr [0x711164] */ r_eax = R32((u32)(0x711164u));
    /* 0061fa97: cmp dword ptr [eax + edx], 0x4000 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061fa9e: jbe 0x61fade */ if ((fC||fZ)) goto L_0061fade;
L_0061faa0:; BB(0x0061faa0);
    /* 0061faa0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061faa3: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061faa6: mov edx, dword ptr [0x711168] */ r_edx = R32((u32)(0x711168u));
    /* 0061faac: cmp dword ptr [edx + ecx], 0x4000 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061fab3: jae 0x61fade */ if (!fC) goto L_0061fade;
L_0061fab5:; BB(0x0061fab5);
    /* 0061fab5: push 0x6f0c64 */ { u32 v = 0x6f0c64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061faba: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61fabfu); f_0060fc40();
    /* 0061fabf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fac2: mov dword ptr [ebp - 0x90], 0xb */ W32((u32)(r_ebp+0xffffff70u), 0xbu);
    /* 0061facc: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0061fad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fad3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fad9: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fadeu); f_005d9db7();
L_0061fade:; BB(0x0061fade);
    /* 0061fade: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fae1: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061fae4: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061faea: cmp dword ptr [edx + ecx], 0xc000 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061faf1: jbe 0x61fb31 */ if ((fC||fZ)) goto L_0061fb31;
L_0061faf3:; BB(0x0061faf3);
    /* 0061faf3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061faf6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061faf9: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061faff: cmp dword ptr [ecx + eax], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061fb06: jae 0x61fb31 */ if (!fC) goto L_0061fb31;
L_0061fb08:; BB(0x0061fb08);
    /* 0061fb08: push 0x6f0c78 */ { u32 v = 0x6f0c78u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fb0d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61fb12u); f_0060fc40();
    /* 0061fb12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fb15: mov dword ptr [ebp - 0x90], 0xa */ W32((u32)(r_ebp+0xffffff70u), 0xau);
    /* 0061fb1f: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0061fb25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fb26: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fb2c: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fb31u); f_005d9db7();
L_0061fb31:; BB(0x0061fb31);
    /* 0061fb31: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb34: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fb37: mov ecx, dword ptr [0x711164] */ r_ecx = R32((u32)(0x711164u));
    /* 0061fb3d: cmp dword ptr [ecx + eax], 0xc000 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061fb44: jae 0x61fb83 */ if (!fC) goto L_0061fb83;
L_0061fb46:; BB(0x0061fb46);
    /* 0061fb46: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb49: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061fb4c: mov eax, dword ptr [0x711168] */ r_eax = R32((u32)(0x711168u));
    /* 0061fb51: cmp dword ptr [eax + edx], 0xc000 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061fb58: jbe 0x61fb83 */ if ((fC||fZ)) goto L_0061fb83;
L_0061fb5a:; BB(0x0061fb5a);
    /* 0061fb5a: push 0x6f0c8c */ { u32 v = 0x6f0c8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061fb5f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x61fb64u); f_0060fc40();
    /* 0061fb64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fb67: mov dword ptr [ebp - 0x90], 9 */ W32((u32)(r_ebp+0xffffff70u), 0x9u);
    /* 0061fb71: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061fb77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fb78: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fb7e: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fb83u); f_005d9db7();
L_0061fb83:; BB(0x0061fb83);
    /* 0061fb83: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb86: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061fb89: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb8c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fb8f: mov ecx, dword ptr [0x711164] */ r_ecx = R32((u32)(0x711164u));
    /* 0061fb95: mov esi, dword ptr [0x711168] */ r_esi = R32((u32)(0x711168u));
    /* 0061fb9b: mov edx, dword ptr [ecx + edx + 4] */ r_edx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0061fb9f: cmp edx, dword ptr [esi + eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fba3: jne 0x61fbc5 */ if (!fZ) goto L_0061fbc5;
L_0061fba5:; BB(0x0061fba5);
    /* 0061fba5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fba8: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fbab: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fbae: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061fbb1: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061fbb7: mov esi, dword ptr [0x711168] */ r_esi = R32((u32)(0x711168u));
    /* 0061fbbd: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 0061fbc0: cmp eax, dword ptr [esi + ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fbc3: je 0x61fc12 */ if (fZ) goto L_0061fc12;
L_0061fbc5:; BB(0x0061fbc5);
    /* 0061fbc5: mov dword ptr [ebp - 0x90], 0x17 */ W32((u32)(r_ebp+0xffffff70u), 0x17u);
    /* 0061fbcf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fbd2: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061fbd5: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061fbdb: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 0061fbde: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fbe1: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0061fbe7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fbea: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061fbed: mov edx, dword ptr [0x711164] */ r_edx = R32((u32)(0x711164u));
    /* 0061fbf3: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 0061fbf7: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fbfa: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0061fc00: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061fc06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc07: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0061fc0d: call 0x5d9db7 */ r_esp -= 4; W32(r_esp, 0x61fc12u); f_005d9db7();
L_0061fc12:; BB(0x0061fc12);
    /* 0061fc12: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc15: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061fc18: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc1b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fc1e: mov ecx, dword ptr [0x711168] */ r_ecx = R32((u32)(0x711168u));
    /* 0061fc24: mov esi, dword ptr [0x711164] */ r_esi = R32((u32)(0x711164u));
    /* 0061fc2a: mov edx, dword ptr [esi + edx] */ r_edx = R32((u32)(r_esi+r_edx));
    /* 0061fc2d: mov dword ptr [ecx + eax], edx */ W32((u32)(r_ecx+r_eax), r_edx);
    /* 0061fc30: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc33: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061fc36: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc39: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061fc3c: mov edx, dword ptr [0x711168] */ r_edx = R32((u32)(0x711168u));
    /* 0061fc42: mov esi, dword ptr [0x711164] */ r_esi = R32((u32)(0x711164u));
    /* 0061fc48: mov eax, dword ptr [esi + eax + 4] */ r_eax = R32((u32)(r_esi+r_eax+0x4u));
    /* 0061fc4c: mov dword ptr [edx + ecx + 4], eax */ W32((u32)(r_edx+r_ecx+0x4u), r_eax);
    /* 0061fc50: jmp 0x61fc81 */ goto L_0061fc81;
L_0061fc52:; BB(0x0061fc52);
    /* 0061fc52: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061fc55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc56: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061fc59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc5a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061fc5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061fc61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc62: call dword ptr [0x6331a4] */ { u32 t = R32((u32)(0x6331a4u)); r_esp -= 4; W32(r_esp, 0x61fc68u); call_ind(t); }
    /* 0061fc68: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0061fc6e: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061fc74: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61fc79u); f_005d9462();
    /* 0061fc79: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0061fc7f: jmp 0x61fc9c */ goto L_0061fc9c;
L_0061fc81:; BB(0x0061fc81);
    /* 0061fc81: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0061fc8b: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0061fc91: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x61fc96u); f_005d9462();
    /* 0061fc96: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
L_0061fc9c:; BB(0x0061fc9c);
    /* 0061fc9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fc9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fc9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fca0: ret 0x10 */ FN_RET(0x0061e0aa); r_esp += 20; return;
}

void f_0061fcc7(void) /* FUN_0061fcc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061fcc7);
    /* 0061fcc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fcc8: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fcca: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fccd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061fcd0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcd4: je 0x61fce1 */ if (fZ) goto L_0061fce1;
L_0061fcd6:; BB(0x0061fcd6);
    /* 0061fcd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fcd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061fcdc: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 0061fcdf: jmp 0x61fcf0 */ goto L_0061fcf0;
L_0061fce1:; BB(0x0061fce1);
    /* 0061fce1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fce4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fce7: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0061fced: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
L_0061fcf0:; BB(0x0061fcf0);
    /* 0061fcf0: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 0061fcf6: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcfa: je 0x61fd07 */ if (fZ) goto L_0061fd07;
L_0061fcfc:; BB(0x0061fcfc);
    /* 0061fcfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fcff: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0061fd02: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061fd05: jmp 0x61fd10 */ goto L_0061fd10;
L_0061fd07:; BB(0x0061fd07);
    /* 0061fd07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fd0a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0061fd0d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0061fd10:; BB(0x0061fd10);
    /* 0061fd10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061fd13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd14: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x61fd1au); call_ind(t); }
    /* 0061fd1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fd1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fd1d: ret 4 */ FN_RET(0x0061fcc7); r_esp += 8; return;
}

void f_0061fd20(void) /* FUN_0061fd20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061fd20);
    /* 0061fd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fd23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fd26: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061fd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fd2c: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fd30: je 0x61fd62 */ if (fZ) goto L_0061fd62;
L_0061fd32:; BB(0x0061fd32);
    /* 0061fd32: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061fd35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fd39: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0061fd3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd3d: call dword ptr [0x633198] */ { u32 t = R32((u32)(0x633198u)); r_esp -= 4; W32(r_esp, 0x61fd43u); call_ind(t); }
    /* 0061fd43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061fd48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fd4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061fd50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061fd54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd55: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fd58: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0061fd5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd5c: call dword ptr [0x63319c] */ { u32 t = R32((u32)(0x63319cu)); r_esp -= 4; W32(r_esp, 0x61fd62u); call_ind(t); }
L_0061fd62:; BB(0x0061fd62);
    /* 0061fd62: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061fd65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fd69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fd6d: call 0x61d56f */ r_esp -= 4; W32(r_esp, 0x61fd72u); f_0061d56f();
    /* 0061fd72: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fd74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fd75: ret 8 */ FN_RET(0x0061fd20); r_esp += 12; return;
}

void f_0061fd78(void) /* FUN_0061fd78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061fd78);
    /* 0061fd78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd79: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fd7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061fd7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fd82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fd86: call 0x61d636 */ r_esp -= 4; W32(r_esp, 0x61fd8bu); f_0061d636();
    /* 0061fd8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fd8e: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0061fd91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fd95: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0061fd98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd99: call dword ptr [0x633194] */ { u32 t = R32((u32)(0x633194u)); r_esp -= 4; W32(r_esp, 0x61fd9fu); call_ind(t); }
    /* 0061fd9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fda1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fda2: ret 4 */ FN_RET(0x0061fd78); r_esp += 8; return;
}

void f_0061fda5(void) /* FUN_0061fda5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061fda5);
    /* 0061fda5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fda6: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fda8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fdab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061fdae: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061fdb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdb2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fdb5: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061fdb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdb9: call dword ptr [0x633198] */ { u32 t = R32((u32)(0x633198u)); r_esp -= 4; W32(r_esp, 0x61fdbfu); call_ind(t); }
    /* 0061fdbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061fdc4: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061fdc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061fdcb: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fdce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdcf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061fdd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fdd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdd7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fdda: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0061fddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdde: call dword ptr [0x63319c] */ { u32 t = R32((u32)(0x63319cu)); r_esp -= 4; W32(r_esp, 0x61fde4u); call_ind(t); }
    /* 0061fde4: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fde6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fde7: ret 8 */ FN_RET(0x0061fda5); r_esp += 12; return;
}

void f_0061fdea(void) /* FUN_0061fdea */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061fdea);
    /* 0061fdea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdeb: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fded: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fdf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdf1: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0061fdf4: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fdf7: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fdfb: jne 0x61fe02 */ if (!fZ) goto L_0061fe02;
L_0061fdfd:; BB(0x0061fdfd);
    /* 0061fdfd: jmp 0x620181 */ goto L_00620181;
L_0061fe02:; BB(0x0061fe02);
    /* 0061fe02: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061fe05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061fe07: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0061fe0a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061fe0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061fe10: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061fe13: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0061fe16: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061fe19: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061fe1c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe1f: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0061fe22: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x61fe27u); f_0045a952();
    /* 0061fe27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe28: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe2b: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0061fe2e: call 0x45a942 */ r_esp -= 4; W32(r_esp, 0x61fe33u); f_0045a942();
    /* 0061fe33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe38: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061fe3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe3c: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61fe42u); call_ind(t); }
    /* 0061fe42: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe45: call 0x61cf3c */ r_esp -= 4; W32(r_esp, 0x61fe4au); f_0061cf3c();
    /* 0061fe4a: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe50: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe53: call 0x61cf25 */ r_esp -= 4; W32(r_esp, 0x61fe58u); f_0061cf25();
    /* 0061fe58: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe62: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0061fe65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe66: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x61fe6cu); call_ind(t); }
    /* 0061fe6c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe6f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0061fe72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe73: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe76: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0061fe79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe7a: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061fe7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe7e: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61fe84u); call_ind(t); }
    /* 0061fe84: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe87: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0061fe8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe8b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fe8e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061fe91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe92: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0061fe95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe96: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x61fe9cu); call_ind(t); }
    /* 0061fe9c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0061fe9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fea0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061fea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fea4: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0061fea7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fea8: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061feab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061feac: call 0x409320 */ r_esp -= 4; W32(r_esp, 0x61feb1u); f_00409320();
    /* 0061feb1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061feb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061feb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061feba: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061febd: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fec0: jne 0x61fec7 */ if (!fZ) goto L_0061fec7;
L_0061fec2:; BB(0x0061fec2);
    /* 0061fec2: jmp 0x620181 */ goto L_00620181;
L_0061fec7:; BB(0x0061fec7);
    /* 0061fec7: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061feca: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0061fecd: call 0x45a90e */ r_esp -= 4; W32(r_esp, 0x61fed2u); f_0045a90e();
    /* 0061fed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fed4: jge 0x61ff20 */ if ((fS==fO)) goto L_0061ff20;
L_0061fed6:; BB(0x0061fed6);
    /* 0061fed6: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fed9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0061fedc: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x61fee1u); f_0045a952();
    /* 0061fee1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061fee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fee5: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fee8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061feeb: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x61fef0u); f_0045a91f();
    /* 0061fef0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061fef3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061fef6: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0061fef9: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x61fefeu); f_0045a952();
    /* 0061fefe: mov esi, eax */ r_esi = r_eax;
    /* 0061ff00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ff03: sub esi, dword ptr [edx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061ff06: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ff09: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ff0c: call 0x45a90e */ r_esp -= 4; W32(r_esp, 0x61ff11u); f_0045a90e();
    /* 0061ff11: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff13: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ff16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff19: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ff1b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061ff1e: jmp 0x61ff30 */ goto L_0061ff30;
L_0061ff20:; BB(0x0061ff20);
    /* 0061ff20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff22: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ff25: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0061ff28: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x61ff2du); f_0045a91f();
    /* 0061ff2d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061ff30:; BB(0x0061ff30);
    /* 0061ff30: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ff33: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ff36: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x61ff3bu); f_0045a952();
    /* 0061ff3b: mov dword ptr [0x6f5350], eax */ W32((u32)(0x6f5350u), r_eax);
    /* 0061ff40: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ff43: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0061ff46: call 0x45a942 */ r_esp -= 4; W32(r_esp, 0x61ff4bu); f_0045a942();
    /* 0061ff4b: mov dword ptr [0x6f534c], eax */ W32((u32)(0x6f534cu), r_eax);
    /* 0061ff50: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ff53: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0061ff56: call 0x45a963 */ r_esp -= 4; W32(r_esp, 0x61ff5bu); f_0045a963();
    /* 0061ff5b: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061ff5e: mov word ptr [0x6f5356], ax */ W16((u32)(0x6f5356u), (u16)r_eax);
    /* 0061ff64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff66: mov al, byte ptr [0x6f6efc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6efcu))) & 0xffu);
    /* 0061ff6b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff6e: je 0x61ff7d */ if (fZ) goto L_0061ff7d;
L_0061ff70:; BB(0x0061ff70);
    /* 0061ff70: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff77: je 0x62011e */ if (fZ) goto L_0062011e;
L_0061ff7d:; BB(0x0061ff7d);
    /* 0061ff7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061ff80: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ff83: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0061ff86: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061ff89: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061ff8c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0061ff8f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061ff92: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ff95: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061ff98: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff9b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061ff9c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff9e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffa0: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffa3: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffa5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffa7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ffa9: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0061ffac: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061ffaf: imul edx, dword ptr [ebp - 0x50] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffb0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ffb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ffb4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x61ffb9u); f_0048ab58();
    /* 0061ffb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ffbc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0061ffbf: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0061ffc6: jmp 0x61ffd1 */ goto L_0061ffd1;
L_0061ffc8:; BB(0x0061ffc8);
    /* 0061ffc8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0061ffcb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffce: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_0061ffd1:; BB(0x0061ffd1);
    /* 0061ffd1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0061ffd4: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ffd7: jge 0x620086 */ if ((fS==fO)) goto L_00620086;
L_0061ffdd:; BB(0x0061ffdd);
    /* 0061ffdd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ffe0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061ffe3: add eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ffe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ffe7: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061ffea: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0061ffed: call 0x45a91f */ r_esp -= 4; W32(r_esp, 0x61fff2u); f_0045a91f();
    /* 0061fff2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fff5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0061fff7: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0061fffa: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0061fffd: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00620000: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00620003: call 0x45a90e */ r_esp -= 4; W32(r_esp, 0x620008u); f_0045a90e();
    /* 00620008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062000a: jge 0x620023 */ if ((fS==fO)) goto L_00620023;
L_0062000c:; BB(0x0062000c);
    /* 0062000c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062000f: sub ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620012: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620015: imul ecx, dword ptr [ebp - 0x44] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffbcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620019: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062001c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062001e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00620021: jmp 0x620032 */ goto L_00620032;
L_00620023:; BB(0x00620023);
    /* 00620023: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00620026: imul eax, dword ptr [ebp - 0x44] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffbcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062002a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062002d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062002f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_00620032:; BB(0x00620032);
    /* 00620032: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00620039: jmp 0x620044 */ goto L_00620044;
L_0062003b:; BB(0x0062003b);
    /* 0062003b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0062003e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620041: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
L_00620044:; BB(0x00620044);
    /* 00620044: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00620047: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062004a: jge 0x620081 */ if ((fS==fO)) goto L_00620081;
L_0062004c:; BB(0x0062004c);
    /* 0062004c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062004f: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00620051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620052: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00620055: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00620058: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620059: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062005c: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0062005f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620060: call 0x60babe */ r_esp -= 4; W32(r_esp, 0x620065u); f_0060babe();
    /* 00620065: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620068: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062006b: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0062006d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00620070: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620073: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00620076: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00620079: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062007c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062007f: jmp 0x62003b */ goto L_0062003b;
L_00620081:; BB(0x00620081);
    /* 00620081: jmp 0x61ffc8 */ goto L_0061ffc8;
L_00620086:; BB(0x00620086);
    /* 00620086: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620089: mov dword ptr [0x6f5350], ecx */ W32((u32)(0x6f5350u), r_ecx);
    /* 0062008f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00620092: mov dword ptr [0x6f534c], edx */ W32((u32)(0x6f534cu), r_edx);
    /* 00620098: mov word ptr [0x6f5356], 8 */ W16((u32)(0x6f5356u), 0x8u);
    /* 006200a1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006200a8: jmp 0x6200b3 */ goto L_006200b3;
L_006200aa:; BB(0x006200aa);
    /* 006200aa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006200ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006200b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_006200b3:; BB(0x006200b3);
    /* 006200b3: cmp dword ptr [ebp - 0x28], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006200ba: jge 0x6200d5 */ if ((fS==fO)) goto L_006200d5;
L_006200bc:; BB(0x006200bc);
    /* 006200bc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006200bf: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006200c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006200c5: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 006200c9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006200cc: mov dword ptr [edx*4 + 0x6f5370], ecx */ W32((u32)(r_edx*4+0x6f5370u), r_ecx);
    /* 006200d3: jmp 0x6200aa */ goto L_006200aa;
L_006200d5:; BB(0x006200d5);
    /* 006200d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006200d7: push 0x6f5348 */ { u32 v = 0x6f5348u; r_esp -= 4; W32(r_esp, v); }
    /* 006200dc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006200df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006200e0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006200e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006200e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006200e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006200e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006200ea: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006200ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006200ee: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006200f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006200f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006200f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006200f6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006200f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006200fa: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 006200fd: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00620100: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620101: call dword ptr [0x633018] */ { u32 t = R32((u32)(0x633018u)); r_esp -= 4; W32(r_esp, 0x620107u); call_ind(t); }
    /* 00620107: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062010a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062010d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00620110: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00620113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620114: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x620119u); f_0048ac1b();
    /* 00620119: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062011c: jmp 0x620165 */ goto L_00620165;
L_0062011e:; BB(0x0062011e);
    /* 0062011e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620120: push 0x6f5348 */ { u32 v = 0x6f5348u; r_esp -= 4; W32(r_esp, v); }
    /* 00620125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620128: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620129: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0062012c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0062012f: call 0x45a952 */ r_esp -= 4; W32(r_esp, 0x620134u); f_0045a952();
    /* 00620134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620135: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620137: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620139: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062013c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062013e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062013f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620142: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620145: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620146: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620149: sub eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062014c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062014d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620151: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620154: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620155: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00620158: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0062015b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062015c: call dword ptr [0x633018] */ { u32 t = R32((u32)(0x633018u)); r_esp -= 4; W32(r_esp, 0x620162u); call_ind(t); }
    /* 00620162: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00620165:; BB(0x00620165);
    /* 00620165: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620169: jne 0x620181 */ if (!fZ) goto L_00620181;
L_0062016b:; BB(0x0062016b);
    /* 0062016b: call dword ptr [0x633098] */ { u32 t = R32((u32)(0x633098u)); r_esp -= 4; W32(r_esp, 0x620171u); call_ind(t); }
    /* 00620171: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00620174: push 0x6f0ca0 */ { u32 v = 0x6f0ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620179: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x62017eu); f_0060fc40();
    /* 0062017e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00620181:; BB(0x00620181);
    /* 00620181: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00620182: mov esp, ebp */ r_esp = r_ebp;
    /* 00620184: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620185: ret 4 */ FN_RET(0x0061fdea); r_esp += 8; return;
}

void f_00620188(void) /* FUN_00620188 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620188);
    /* 00620188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620189: mov ebp, esp */ r_ebp = r_esp;
    /* 0062018b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062018c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062018f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620192: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x620197u); f_006201dc();
    /* 00620197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620199: jne 0x6201ab */ if (!fZ) goto L_006201ab;
L_0062019b:; BB(0x0062019b);
    /* 0062019b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062019e: call 0x620665 */ r_esp -= 4; W32(r_esp, 0x6201a3u); f_00620665();
    /* 006201a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006201a6: call 0x6204ca */ r_esp -= 4; W32(r_esp, 0x6201abu); f_006204ca();
L_006201ab:; BB(0x006201ab);
    /* 006201ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006201ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201ae: ret  */ FN_RET(0x00620188); r_esp += 4; return;
}

void f_006201af(void) /* FUN_006201af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006201af);
    /* 006201af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006201b0: mov ebp, esp */ r_ebp = r_esp;
    /* 006201b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006201b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006201b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006201b9: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x6201beu); f_006201dc();
    /* 006201be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006201c0: je 0x6201d6 */ if (fZ) goto L_006201d6;
L_006201c2:; BB(0x006201c2);
    /* 006201c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006201c5: call 0x620665 */ r_esp -= 4; W32(r_esp, 0x6201cau); f_00620665();
    /* 006201ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006201cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006201ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006201d1: call 0x6201fb */ r_esp -= 4; W32(r_esp, 0x6201d6u); f_006201fb();
L_006201d6:; BB(0x006201d6);
    /* 006201d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006201d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201d9: ret 4 */ FN_RET(0x006201af); r_esp += 8; return;
}

void f_006201dc(void) /* FUN_006201dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006201dc);
    /* 006201dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006201dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006201df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006201e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006201e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006201e6: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 006201ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006201ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201ef: ret  */ FN_RET(0x006201dc); r_esp += 4; return;
}

void f_006201f0(void) /* FUN_006201f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006201f0);
    /* 006201f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006201f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006201f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006201f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006201f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006201f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201fa: ret  */ FN_RET(0x006201f0); r_esp += 4; return;
}

void f_006201fb(void) /* FUN_006201fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006201fb);
    /* 006201fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006201fc: mov ebp, esp */ r_ebp = r_esp;
    /* 006201fe: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620201: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00620204: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620206: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x62020cu); call_ind(t); }
    /* 0062020c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062020f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620211: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x620217u); call_ind(t); }
    /* 00620217: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062021a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062021c: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0062021f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620220: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620222: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00620224: call dword ptr [0x63318c] */ { u32 t = R32((u32)(0x63318cu)); r_esp -= 4; W32(r_esp, 0x62022au); call_ind(t); }
    /* 0062022a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062022c: jne 0x620248 */ if (!fZ) goto L_00620248;
L_0062022e:; BB(0x0062022e);
    /* 0062022e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00620235: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062023c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062023f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00620242: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620245: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00620248:; BB(0x00620248);
    /* 00620248: cmp dword ptr [ebp - 0x18], 0x280 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062024f: jg 0x62025a */ if ((!fZ&&fS==fO)) goto L_0062025a;
L_00620251:; BB(0x00620251);
    /* 00620251: mov dword ptr [ebp - 0x34], 0x80000000 */ W32((u32)(r_ebp+0xffffffccu), 0x80000000u);
    /* 00620258: jmp 0x620261 */ goto L_00620261;
L_0062025a:; BB(0x0062025a);
    /* 0062025a: mov dword ptr [ebp - 0x34], 0xcf0000 */ W32((u32)(r_ebp+0xffffffccu), 0xcf0000u);
L_00620261:; BB(0x00620261);
    /* 00620261: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620266: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0062026b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062026d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062026f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00620272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620273: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x620279u); call_ind(t); }
    /* 00620279: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062027c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062027d: mov edx, dword ptr [0x6f6ef4] */ r_edx = R32((u32)(0x6f6ef4u));
    /* 00620283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620288: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062028b: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062028e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062028f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620292: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620295: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620296: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620299: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062029a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062029d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062029e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006202a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006202a2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202a5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 006202a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006202a9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202ac: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 006202b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006202b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006202b5: call dword ptr [0x633190] */ { u32 t = R32((u32)(0x633190u)); r_esp -= 4; W32(r_esp, 0x6202bbu); call_ind(t); }
    /* 006202bb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202be: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 006202c1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202c4: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 006202c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006202c8: call dword ptr [0x633184] */ { u32 t = R32((u32)(0x633184u)); r_esp -= 4; W32(r_esp, 0x6202ceu); call_ind(t); }
    /* 006202ce: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202d1: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 006202d4: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 006202d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006202d8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202db: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006202de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006202df: call dword ptr [0x633198] */ { u32 t = R32((u32)(0x633198u)); r_esp -= 4; W32(r_esp, 0x6202e5u); call_ind(t); }
    /* 006202e5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202e8: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006202eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006202ec: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202ef: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006202f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006202f3: call dword ptr [0x6331ec] */ { u32 t = R32((u32)(0x6331ecu)); r_esp -= 4; W32(r_esp, 0x6202f9u); call_ind(t); }
    /* 006202f9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006202fc: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006202ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620300: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620303: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00620306: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620307: call dword ptr [0x6331ec] */ { u32 t = R32((u32)(0x6331ecu)); r_esp -= 4; W32(r_esp, 0x62030du); call_ind(t); }
    /* 0062030d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620310: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620313: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620316: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620319: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0062031c: sub eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062031f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620321: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00620324: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620327: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062032a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062032d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620330: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00620333: sub edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620336: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620338: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0062033b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062033e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620341: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00620344: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620347: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062034a: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0062034d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620350: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620353: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00620356: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620359: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062035c: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0062035f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620362: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00620365: sub eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062036a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062036b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062036d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062036f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620372: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00620375: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620378: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0062037b: sub eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620380: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00620381: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620383: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00620385: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620388: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0062038b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062038e: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620392: jge 0x62039e */ if ((fS==fO)) goto L_0062039e;
L_00620394:; BB(0x00620394);
    /* 00620394: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620397: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0062039e:; BB(0x0062039e);
    /* 0062039e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203a1: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006203a5: jge 0x6203b1 */ if ((fS==fO)) goto L_006203b1;
L_006203a7:; BB(0x006203a7);
    /* 006203a7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203aa: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
L_006203b1:; BB(0x006203b1);
    /* 006203b1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203b4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006203b7: add ecx, 0x1e0 */ {  u32 a = r_ecx; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006203bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006203be: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203c1: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006203c4: add eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006203c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006203ca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203cd: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006203d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006203d1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203d4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006203d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006203d8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006203db: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006203de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006203df: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x6203e5u); call_ind(t); }
    /* 006203e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006203e8: sub eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006203eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006203ee: add ecx, 0x280 */ {  u32 a = r_ecx; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006203f4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006203f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006203f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006203f9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006203fb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006203fe: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620400: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00620403: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620406: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620409: jge 0x620411 */ if ((fS==fO)) goto L_00620411;
L_0062040b:; BB(0x0062040b);
    /* 0062040b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062040e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00620411:; BB(0x00620411);
    /* 00620411: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620414: sub eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620417: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062041a: add edx, 0x1e0 */ {  u32 a = r_edx; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620420: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620422: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00620423: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620425: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00620427: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062042a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062042c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062042f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620432: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620435: jge 0x62043d */ if ((fS==fO)) goto L_0062043d;
L_00620437:; BB(0x00620437);
    /* 00620437: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062043a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0062043d:; BB(0x0062043d);
    /* 0062043d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620440: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620443: lea eax, [edx + ecx + 0x280] */ r_eax = (u32)(r_edx+r_ecx+0x280u);
    /* 0062044a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062044d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00620450: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620453: lea eax, [edx + ecx + 0x1e0] */ r_eax = (u32)(r_edx+r_ecx+0x1e0u);
    /* 0062045a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062045d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062045f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620462: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620465: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620466: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620469: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062046c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062046d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620471: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620475: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620478: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0062047b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062047c: call dword ptr [0x63319c] */ { u32 t = R32((u32)(0x63319cu)); r_esp -= 4; W32(r_esp, 0x620482u); call_ind(t); }
    /* 00620482: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620485: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0062048f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620492: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620494: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620497: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x62049au); call_ind(t); }
    /* 0062049a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062049e: je 0x6204b5 */ if (fZ) goto L_006204b5;
L_006204a0:; BB(0x006204a0);
    /* 006204a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006204a2: push 0x6f0cc8 */ { u32 v = 0x6f0cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006204a7: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 006204ad: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006204b0: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x6204b5u); f_0061baba();
L_006204b5:; BB(0x006204b5);
    /* 006204b5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006204b8: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 006204bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006204bc: call 0x5fe52c */ r_esp -= 4; W32(r_esp, 0x6204c1u); f_005fe52c();
    /* 006204c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006204c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006204c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006204c7: ret 4 */ FN_RET(0x006201fb); r_esp += 8; return;
}

void f_006204ca(void) /* FUN_006204ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006204ca);
    /* 006204ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006204cb: mov ebp, esp */ r_ebp = r_esp;
    /* 006204cd: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006204d0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006204d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006204d5: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x6204dbu); call_ind(t); }
    /* 006204db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006204de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006204e0: call dword ptr [0x633174] */ { u32 t = R32((u32)(0x633174u)); r_esp -= 4; W32(r_esp, 0x6204e6u); call_ind(t); }
    /* 006204e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006204e9: mov dword ptr [ebp - 0x1c], 0x80000000 */ W32((u32)(r_ebp+0xffffffe4u), 0x80000000u);
    /* 006204f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006204f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006204f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006204f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006204f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006204fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006204fc: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 006204ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620500: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x620506u); call_ind(t); }
    /* 00620506: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062050a: mov ecx, dword ptr [0x6f6ef4] */ r_ecx = R32((u32)(0x6f6ef4u));
    /* 00620510: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620513: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620515: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620518: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062051b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062051c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062051f: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620526: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620527: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062052a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062052b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062052e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062052f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620532: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00620535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620536: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620539: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0062053f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620542: call dword ptr [0x633190] */ { u32 t = R32((u32)(0x633190u)); r_esp -= 4; W32(r_esp, 0x620548u); call_ind(t); }
    /* 00620548: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062054b: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0062054e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620551: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620553: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620556: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x620559u); call_ind(t); }
    /* 00620559: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062055c: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620560: je 0x620605 */ if (fZ) goto L_00620605;
L_00620566:; BB(0x00620566);
    /* 00620566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620569: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0062056c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062056d: call 0x61d703 */ r_esp -= 4; W32(r_esp, 0x620572u); f_0061d703();
    /* 00620572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620577: je 0x620605 */ if (fZ) goto L_00620605;
L_0062057d:; BB(0x0062057d);
    /* 0062057d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062057f: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620584: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00620589: call 0x61d752 */ r_esp -= 4; W32(r_esp, 0x62058eu); f_0061d752();
    /* 0062058e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620593: jne 0x6205c5 */ if (!fZ) goto L_006205c5;
L_00620595:; BB(0x00620595);
    /* 00620595: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00620597: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062059c: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 006205a1: call 0x61d752 */ r_esp -= 4; W32(r_esp, 0x6205a6u); f_0061d752();
    /* 006205a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006205a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006205ab: jne 0x6205c5 */ if (!fZ) goto L_006205c5;
L_006205ad:; BB(0x006205ad);
    /* 006205ad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006205af: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006205b4: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 006205b9: call 0x61d752 */ r_esp -= 4; W32(r_esp, 0x6205beu); f_0061d752();
    /* 006205be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006205c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006205c3: je 0x620605 */ if (fZ) goto L_00620605;
L_006205c5:; BB(0x006205c5);
    /* 006205c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006205c7: push 0x6f0cd8 */ { u32 v = 0x6f0cd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006205cc: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 006205d1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006205d4: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x6205d9u); f_0061baba();
    /* 006205d9: mov dword ptr [0x711140], 1 */ W32((u32)(0x711140u), 0x1u);
    /* 006205e3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006205e6: mov dword ptr [ecx + 0x94], 1 */ W32((u32)(r_ecx+0x94u), 0x1u);
    /* 006205f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006205f3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 006205f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006205f7: call dword ptr [0x633184] */ { u32 t = R32((u32)(0x633184u)); r_esp -= 4; W32(r_esp, 0x6205fdu); call_ind(t); }
    /* 006205fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620600: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 00620603: jmp 0x620652 */ goto L_00620652;
L_00620605:; BB(0x00620605);
    /* 00620605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620607: push 0x6f0ce8 */ { u32 v = 0x6f0ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062060c: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00620612: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00620615: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x62061au); f_0061baba();
    /* 0062061a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062061d: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00620620: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620621: call 0x61d789 */ r_esp -= 4; W32(r_esp, 0x620626u); f_0061d789();
    /* 00620626: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620629: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062062c: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00620636: mov dword ptr [0x711140], 0 */ W32((u32)(0x711140u), 0x0u);
    /* 00620640: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620643: call 0x620665 */ r_esp -= 4; W32(r_esp, 0x620648u); f_00620665();
    /* 00620648: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062064a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062064d: call 0x6201fb */ r_esp -= 4; W32(r_esp, 0x620652u); f_006201fb();
L_00620652:; BB(0x00620652);
    /* 00620652: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620655: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00620658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620659: call 0x5fe52c */ r_esp -= 4; W32(r_esp, 0x62065eu); f_005fe52c();
    /* 0062065e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620661: mov esp, ebp */ r_esp = r_ebp;
    /* 00620663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620664: ret  */ FN_RET(0x006204ca); r_esp += 4; return;
}

void f_00620665(void) /* FUN_00620665 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620665);
    /* 00620665: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620666: mov ebp, esp */ r_ebp = r_esp;
    /* 00620668: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062066b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062066e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620671: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x620676u); f_006201dc();
    /* 00620676: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620678: je 0x620696 */ if (fZ) goto L_00620696;
L_0062067a:; BB(0x0062067a);
    /* 0062067a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062067d: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00620680: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620681: call 0x61d789 */ r_esp -= 4; W32(r_esp, 0x620686u); f_0061d789();
    /* 00620686: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620689: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062068c: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
L_00620696:; BB(0x00620696);
    /* 00620696: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620699: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062069d: je 0x620711 */ if (fZ) goto L_00620711;
L_0062069f:; BB(0x0062069f);
    /* 0062069f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006206a1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006206a3: call dword ptr [0x633014] */ { u32 t = R32((u32)(0x633014u)); r_esp -= 4; W32(r_esp, 0x6206a9u); call_ind(t); }
    /* 006206a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006206aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206ad: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 006206b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006206b1: call dword ptr [0x63300c] */ { u32 t = R32((u32)(0x63300cu)); r_esp -= 4; W32(r_esp, 0x6206b7u); call_ind(t); }
    /* 006206b7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006206ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006206bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006206be: call dword ptr [0x633008] */ { u32 t = R32((u32)(0x633008u)); r_esp -= 4; W32(r_esp, 0x6206c4u); call_ind(t); }
    /* 006206c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206c7: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 006206ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006206cb: call dword ptr [0x63320c] */ { u32 t = R32((u32)(0x63320cu)); r_esp -= 4; W32(r_esp, 0x6206d1u); call_ind(t); }
    /* 006206d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006206d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006206d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206d9: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006206dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006206dd: call dword ptr [0x63316c] */ { u32 t = R32((u32)(0x63316cu)); r_esp -= 4; W32(r_esp, 0x6206e3u); call_ind(t); }
    /* 006206e3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006206e7: je 0x6206f3 */ if (fZ) goto L_006206f3;
L_006206e9:; BB(0x006206e9);
    /* 006206e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006206ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006206ed: call dword ptr [0x633178] */ { u32 t = R32((u32)(0x633178u)); r_esp -= 4; W32(r_esp, 0x6206f3u); call_ind(t); }
L_006206f3:; BB(0x006206f3);
    /* 006206f3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206f6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006206f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006206fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206fd: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00620700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620701: call dword ptr [0x633188] */ { u32 t = R32((u32)(0x633188u)); r_esp -= 4; W32(r_esp, 0x620707u); call_ind(t); }
    /* 00620707: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062070a: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_00620711:; BB(0x00620711);
    /* 00620711: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620714: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00620717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620718: call dword ptr [0x633258] */ { u32 t = R32((u32)(0x633258u)); r_esp -= 4; W32(r_esp, 0x62071eu); call_ind(t); }
    /* 0062071e: mov esp, ebp */ r_esp = r_ebp;
    /* 00620720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620721: ret  */ FN_RET(0x00620665); r_esp += 4; return;
}

void f_00620730(void) /* FUN_00620730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620730);
    /* 00620730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620731: mov ebp, esp */ r_ebp = r_esp;
    /* 00620733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00620737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062073a: call 0x61d8f8 */ r_esp -= 4; W32(r_esp, 0x62073fu); f_0061d8f8();
    /* 0062073f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620742: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00620745: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620747: je 0x620755 */ if (fZ) goto L_00620755;
L_00620749:; BB(0x00620749);
    /* 00620749: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062074c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062074d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x620752u); f_0048ac1b();
    /* 00620752: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00620755:; BB(0x00620755);
    /* 00620755: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620758: mov esp, ebp */ r_esp = r_ebp;
    /* 0062075a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062075b: ret 4 */ FN_RET(0x00620730); r_esp += 8; return;
}

void f_00620760(void) /* FUN_00620760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620760);
    /* 00620760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620761: mov ebp, esp */ r_ebp = r_esp;
    /* 00620763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00620769: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062076c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062076d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620770: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620774: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x620779u); f_005d80f0();
    /* 00620779: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062077c: mov dword ptr [edx], 0x63cf0c */ W32((u32)(r_edx), 0x63cf0cu);
    /* 00620782: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620789: jmp 0x620794 */ goto L_00620794;
L_0062078b:; BB(0x0062078b);
    /* 0062078b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062078e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620791: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00620794:; BB(0x00620794);
    /* 00620794: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620798: jge 0x6207ad */ if ((fS==fO)) goto L_006207ad;
L_0062079a:; BB(0x0062079a);
    /* 0062079a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062079d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006207a0: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
    /* 006207ab: jmp 0x62078b */ goto L_0062078b;
L_006207ad:; BB(0x006207ad);
    /* 006207ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006207b4: jmp 0x6207bf */ goto L_006207bf;
L_006207b6:; BB(0x006207b6);
    /* 006207b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006207b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006207bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006207bf:; BB(0x006207bf);
    /* 006207bf: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006207c3: jge 0x6207d8 */ if ((fS==fO)) goto L_006207d8;
L_006207c5:; BB(0x006207c5);
    /* 006207c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006207c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006207cb: mov dword ptr [edx + ecx*4 + 0x98], 0 */ W32((u32)(r_edx+r_ecx*4+0x98u), 0x0u);
    /* 006207d6: jmp 0x6207b6 */ goto L_006207b6;
L_006207d8:; BB(0x006207d8);
    /* 006207d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006207df: jmp 0x6207ea */ goto L_006207ea;
L_006207e1:; BB(0x006207e1);
    /* 006207e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006207e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006207e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006207ea:; BB(0x006207ea);
    /* 006207ea: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006207ee: jge 0x620803 */ if ((fS==fO)) goto L_00620803;
L_006207f0:; BB(0x006207f0);
    /* 006207f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006207f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006207f6: mov dword ptr [edx + ecx*4 + 0xe0], 0 */ W32((u32)(r_edx+r_ecx*4+0xe0u), 0x0u);
    /* 00620801: jmp 0x6207e1 */ goto L_006207e1;
L_00620803:; BB(0x00620803);
    /* 00620803: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062080a: jmp 0x620815 */ goto L_00620815;
L_0062080c:; BB(0x0062080c);
    /* 0062080c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062080f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620812: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00620815:; BB(0x00620815);
    /* 00620815: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620819: jge 0x62082e */ if ((fS==fO)) goto L_0062082e;
L_0062081b:; BB(0x0062081b);
    /* 0062081b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062081e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620821: mov dword ptr [edx + ecx*4 + 0xc4], 0 */ W32((u32)(r_edx+r_ecx*4+0xc4u), 0x0u);
    /* 0062082c: jmp 0x62080c */ goto L_0062080c;
L_0062082e:; BB(0x0062082e);
    /* 0062082e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620831: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 0062083b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062083e: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 00620848: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062084b: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 00620855: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620858: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
    /* 00620862: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620865: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
    /* 0062086f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620872: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 0062087c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062087f: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 00620889: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062088c: mov dword ptr [ecx + 0xf4], 0 */ W32((u32)(r_ecx+0xf4u), 0x0u);
    /* 00620896: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620899: mov dword ptr [edx + 0x10c], 0 */ W32((u32)(r_edx+0x10cu), 0x0u);
    /* 006208a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006208a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006208a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006208a9: ret 8 */ FN_RET(0x00620760); r_esp += 12; return;
}

void f_006208ac(void) /* FUN_006208ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006208ac);
    /* 006208ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006208ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006208af: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006208b5: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 006208b8: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006208bb: mov dword ptr [eax], 0x63cf0c */ W32((u32)(r_eax), 0x63cf0cu);
    /* 006208c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006208c8: jmp 0x6208d3 */ goto L_006208d3;
L_006208ca:; BB(0x006208ca);
    /* 006208ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006208cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006208d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006208d3:; BB(0x006208d3);
    /* 006208d3: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006208d7: jge 0x620930 */ if ((fS==fO)) goto L_00620930;
L_006208d9:; BB(0x006208d9);
    /* 006208d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006208dc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006208df: cmp dword ptr [eax + edx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006208e7: je 0x62092e */ if (fZ) goto L_0062092e;
L_006208e9:; BB(0x006208e9);
    /* 006208e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006208ec: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006208ef: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 006208f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006208f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006208fc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006208ff: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620903: je 0x620916 */ if (fZ) goto L_00620916;
L_00620905:; BB(0x00620905);
    /* 00620905: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620907: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062090a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062090c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062090f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x620911u); call_ind(t); }
    /* 00620911: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00620914: jmp 0x62091d */ goto L_0062091d;
L_00620916:; BB(0x00620916);
    /* 00620916: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0062091d:; BB(0x0062091d);
    /* 0062091d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620920: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620923: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
L_0062092e:; BB(0x0062092e);
    /* 0062092e: jmp 0x6208ca */ goto L_006208ca;
L_00620930:; BB(0x00620930);
    /* 00620930: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620937: jmp 0x620942 */ goto L_00620942;
L_00620939:; BB(0x00620939);
    /* 00620939: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062093c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062093f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00620942:; BB(0x00620942);
    /* 00620942: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620946: jge 0x62099f */ if ((fS==fO)) goto L_0062099f;
L_00620948:; BB(0x00620948);
    /* 00620948: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062094b: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0062094e: cmp dword ptr [edx + ecx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620956: je 0x62099d */ if (fZ) goto L_0062099d;
L_00620958:; BB(0x00620958);
    /* 00620958: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062095b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0062095e: mov edx, dword ptr [ecx + eax*4 + 0x98] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 00620965: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00620968: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062096b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062096e: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620972: je 0x620985 */ if (fZ) goto L_00620985;
L_00620974:; BB(0x00620974);
    /* 00620974: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620976: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620979: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062097b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062097e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620980u); call_ind(t); }
    /* 00620980: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00620983: jmp 0x62098c */ goto L_0062098c;
L_00620985:; BB(0x00620985);
    /* 00620985: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0062098c:; BB(0x0062098c);
    /* 0062098c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062098f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620992: mov dword ptr [ecx + eax*4 + 0x98], 0 */ W32((u32)(r_ecx+r_eax*4+0x98u), 0x0u);
L_0062099d:; BB(0x0062099d);
    /* 0062099d: jmp 0x620939 */ goto L_00620939;
L_0062099f:; BB(0x0062099f);
    /* 0062099f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006209a6: jmp 0x6209b1 */ goto L_006209b1;
L_006209a8:; BB(0x006209a8);
    /* 006209a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006209ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006209ae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006209b1:; BB(0x006209b1);
    /* 006209b1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006209b5: jge 0x620a0e */ if ((fS==fO)) goto L_00620a0e;
L_006209b7:; BB(0x006209b7);
    /* 006209b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006209ba: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006209bd: cmp dword ptr [ecx + eax*4 + 0xe0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006209c5: je 0x620a0c */ if (fZ) goto L_00620a0c;
L_006209c7:; BB(0x006209c7);
    /* 006209c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006209ca: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006209cd: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 006209d4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006209d7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006209da: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006209dd: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006209e1: je 0x6209f4 */ if (fZ) goto L_006209f4;
L_006209e3:; BB(0x006209e3);
    /* 006209e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006209e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006209e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006209ea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006209ed: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6209efu); call_ind(t); }
    /* 006209ef: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006209f2: jmp 0x6209fb */ goto L_006209fb;
L_006209f4:; BB(0x006209f4);
    /* 006209f4: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_006209fb:; BB(0x006209fb);
    /* 006209fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006209fe: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620a01: mov dword ptr [ecx + eax*4 + 0xe0], 0 */ W32((u32)(r_ecx+r_eax*4+0xe0u), 0x0u);
L_00620a0c:; BB(0x00620a0c);
    /* 00620a0c: jmp 0x6209a8 */ goto L_006209a8;
L_00620a0e:; BB(0x00620a0e);
    /* 00620a0e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620a15: jmp 0x620a20 */ goto L_00620a20;
L_00620a17:; BB(0x00620a17);
    /* 00620a17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620a1a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620a1d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00620a20:; BB(0x00620a20);
    /* 00620a20: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a24: jge 0x620a6c */ if ((fS==fO)) goto L_00620a6c;
L_00620a26:; BB(0x00620a26);
    /* 00620a26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620a29: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620a2c: cmp dword ptr [ecx + eax*4 + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a34: je 0x620a6a */ if (fZ) goto L_00620a6a;
L_00620a36:; BB(0x00620a36);
    /* 00620a36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620a39: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620a3c: mov ecx, dword ptr [eax + edx*4 + 0xc4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 00620a43: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00620a46: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620a49: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00620a4c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a50: je 0x620a63 */ if (fZ) goto L_00620a63;
L_00620a52:; BB(0x00620a52);
    /* 00620a52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620a54: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620a57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620a59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620a5c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620a5eu); call_ind(t); }
    /* 00620a5e: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00620a61: jmp 0x620a6a */ goto L_00620a6a;
L_00620a63:; BB(0x00620a63);
    /* 00620a63: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00620a6a:; BB(0x00620a6a);
    /* 00620a6a: jmp 0x620a17 */ goto L_00620a17;
L_00620a6c:; BB(0x00620a6c);
    /* 00620a6c: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620a6f: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a76: je 0x620ab5 */ if (fZ) goto L_00620ab5;
L_00620a78:; BB(0x00620a78);
    /* 00620a78: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620a7b: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 00620a81: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00620a84: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00620a87: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00620a8a: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a8e: je 0x620aa1 */ if (fZ) goto L_00620aa1;
L_00620a90:; BB(0x00620a90);
    /* 00620a90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620a92: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00620a95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00620a97: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00620a9a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620a9cu); call_ind(t); }
    /* 00620a9c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00620a9f: jmp 0x620aa8 */ goto L_00620aa8;
L_00620aa1:; BB(0x00620aa1);
    /* 00620aa1: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00620aa8:; BB(0x00620aa8);
    /* 00620aa8: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620aab: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
L_00620ab5:; BB(0x00620ab5);
    /* 00620ab5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620ab8: cmp dword ptr [ecx + 0xd0], 0 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620abf: je 0x620afe */ if (fZ) goto L_00620afe;
L_00620ac1:; BB(0x00620ac1);
    /* 00620ac1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620ac4: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00620aca: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00620acd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620ad0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00620ad3: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ad7: je 0x620aea */ if (fZ) goto L_00620aea;
L_00620ad9:; BB(0x00620ad9);
    /* 00620ad9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620adb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00620ade: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620ae0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00620ae3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x620ae5u); call_ind(t); }
    /* 00620ae5: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00620ae8: jmp 0x620af1 */ goto L_00620af1;
L_00620aea:; BB(0x00620aea);
    /* 00620aea: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00620af1:; BB(0x00620af1);
    /* 00620af1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620af4: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
L_00620afe:; BB(0x00620afe);
    /* 00620afe: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b01: cmp dword ptr [edx + 0xd4], 0 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b08: je 0x620b4d */ if (fZ) goto L_00620b4d;
L_00620b0a:; BB(0x00620b0a);
    /* 00620b0a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b0d: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00620b13: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00620b16: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00620b19: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00620b1c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b20: je 0x620b36 */ if (fZ) goto L_00620b36;
L_00620b22:; BB(0x00620b22);
    /* 00620b22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620b24: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620b27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620b29: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620b2c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620b2eu); call_ind(t); }
    /* 00620b2e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00620b34: jmp 0x620b40 */ goto L_00620b40;
L_00620b36:; BB(0x00620b36);
    /* 00620b36: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00620b40:; BB(0x00620b40);
    /* 00620b40: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b43: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_00620b4d:; BB(0x00620b4d);
    /* 00620b4d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b50: cmp dword ptr [ecx + 0xd8], 0 */ {  u32 a = R32((u32)(r_ecx+0xd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b57: je 0x620b9c */ if (fZ) goto L_00620b9c;
L_00620b59:; BB(0x00620b59);
    /* 00620b59: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b5c: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00620b62: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00620b65: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00620b68: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00620b6b: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b6f: je 0x620b85 */ if (fZ) goto L_00620b85;
L_00620b71:; BB(0x00620b71);
    /* 00620b71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620b73: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620b76: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620b78: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620b7b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x620b7du); call_ind(t); }
    /* 00620b7d: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00620b83: jmp 0x620b8f */ goto L_00620b8f;
L_00620b85:; BB(0x00620b85);
    /* 00620b85: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00620b8f:; BB(0x00620b8f);
    /* 00620b8f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b92: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
L_00620b9c:; BB(0x00620b9c);
    /* 00620b9c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620b9f: cmp dword ptr [edx + 0xdc], 0 */ {  u32 a = R32((u32)(r_edx+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ba6: je 0x620beb */ if (fZ) goto L_00620beb;
L_00620ba8:; BB(0x00620ba8);
    /* 00620ba8: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620bab: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00620bb1: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00620bb4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00620bb7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00620bba: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bbe: je 0x620bd4 */ if (fZ) goto L_00620bd4;
L_00620bc0:; BB(0x00620bc0);
    /* 00620bc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620bc2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00620bc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620bc7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00620bca: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620bccu); call_ind(t); }
    /* 00620bcc: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00620bd2: jmp 0x620bde */ goto L_00620bde;
L_00620bd4:; BB(0x00620bd4);
    /* 00620bd4: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00620bde:; BB(0x00620bde);
    /* 00620bde: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620be1: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00620beb:; BB(0x00620beb);
    /* 00620beb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620bee: cmp dword ptr [ecx + 0xf0], 0 */ {  u32 a = R32((u32)(r_ecx+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bf5: je 0x620c3a */ if (fZ) goto L_00620c3a;
L_00620bf7:; BB(0x00620bf7);
    /* 00620bf7: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620bfa: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00620c00: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00620c03: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00620c06: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00620c09: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c0d: je 0x620c23 */ if (fZ) goto L_00620c23;
L_00620c0f:; BB(0x00620c0f);
    /* 00620c0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620c11: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620c14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620c16: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620c19: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x620c1bu); call_ind(t); }
    /* 00620c1b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00620c21: jmp 0x620c2d */ goto L_00620c2d;
L_00620c23:; BB(0x00620c23);
    /* 00620c23: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00620c2d:; BB(0x00620c2d);
    /* 00620c2d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c30: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
L_00620c3a:; BB(0x00620c3a);
    /* 00620c3a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c3d: cmp dword ptr [edx + 0xec], 0 */ {  u32 a = R32((u32)(r_edx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c44: je 0x620c89 */ if (fZ) goto L_00620c89;
L_00620c46:; BB(0x00620c46);
    /* 00620c46: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c49: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00620c4f: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00620c52: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00620c55: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00620c58: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c5c: je 0x620c72 */ if (fZ) goto L_00620c72;
L_00620c5e:; BB(0x00620c5e);
    /* 00620c5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620c60: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00620c63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620c65: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00620c68: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x620c6au); call_ind(t); }
    /* 00620c6a: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00620c70: jmp 0x620c7c */ goto L_00620c7c;
L_00620c72:; BB(0x00620c72);
    /* 00620c72: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00620c7c:; BB(0x00620c7c);
    /* 00620c7c: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c7f: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_00620c89:; BB(0x00620c89);
    /* 00620c89: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c8c: cmp dword ptr [ecx + 0xf4], 0 */ {  u32 a = R32((u32)(r_ecx+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c93: je 0x620cd8 */ if (fZ) goto L_00620cd8;
L_00620c95:; BB(0x00620c95);
    /* 00620c95: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620c98: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00620c9e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00620ca1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00620ca4: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00620ca7: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620cab: je 0x620cc1 */ if (fZ) goto L_00620cc1;
L_00620cad:; BB(0x00620cad);
    /* 00620cad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620caf: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00620cb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620cb4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00620cb7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x620cb9u); call_ind(t); }
    /* 00620cb9: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00620cbf: jmp 0x620ccb */ goto L_00620ccb;
L_00620cc1:; BB(0x00620cc1);
    /* 00620cc1: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00620ccb:; BB(0x00620ccb);
    /* 00620ccb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620cce: mov dword ptr [ecx + 0xf4], 0 */ W32((u32)(r_ecx+0xf4u), 0x0u);
L_00620cd8:; BB(0x00620cd8);
    /* 00620cd8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00620cdb: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x620ce0u); f_005d8154();
    /* 00620ce0: mov esp, ebp */ r_esp = r_ebp;
    /* 00620ce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620ce3: ret  */ FN_RET(0x006208ac); r_esp += 4; return;
}

void f_00620ce4(void) /* FUN_00620ce4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620ce4);
    /* 00620ce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620ce5: mov ebp, esp */ r_ebp = r_esp;
    /* 00620ce7: sub esp, 0x1e0 */ {  u32 a = r_esp; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620ced: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 00620cf3: mov dword ptr [ebp - 0x80], 0x6f0d10 */ W32((u32)(r_ebp+0xffffff80u), 0x6f0d10u);
    /* 00620cfa: mov dword ptr [ebp - 0x7c], 0x6f0d18 */ W32((u32)(r_ebp+0xffffff84u), 0x6f0d18u);
    /* 00620d01: mov dword ptr [ebp - 0x78], 0x6f0d20 */ W32((u32)(r_ebp+0xffffff88u), 0x6f0d20u);
    /* 00620d08: mov dword ptr [ebp - 0x13c], 0xf1 */ W32((u32)(r_ebp+0xfffffec4u), 0xf1u);
    /* 00620d12: mov dword ptr [ebp - 0x138], 0x135 */ W32((u32)(r_ebp+0xfffffec8u), 0x135u);
    /* 00620d1c: mov dword ptr [ebp - 0x134], 0x179 */ W32((u32)(r_ebp+0xfffffeccu), 0x179u);
    /* 00620d26: mov dword ptr [ebp - 0x168], 0x6f0d28 */ W32((u32)(r_ebp+0xfffffe98u), 0x6f0d28u);
    /* 00620d30: mov dword ptr [ebp - 0x164], 0x6f0d3c */ W32((u32)(r_ebp+0xfffffe9cu), 0x6f0d3cu);
    /* 00620d3a: mov dword ptr [ebp - 0x160], 0x6f0d48 */ W32((u32)(r_ebp+0xfffffea0u), 0x6f0d48u);
    /* 00620d44: mov dword ptr [ebp - 0x15c], 0x6f0d54 */ W32((u32)(r_ebp+0xfffffea4u), 0x6f0d54u);
    /* 00620d4e: mov dword ptr [ebp - 0x158], 0x6f0d5c */ W32((u32)(r_ebp+0xfffffea8u), 0x6f0d5cu);
    /* 00620d58: mov dword ptr [ebp - 0x154], 0x6f0d64 */ W32((u32)(r_ebp+0xfffffeacu), 0x6f0d64u);
    /* 00620d62: mov dword ptr [ebp - 0x150], 0x6f0d74 */ W32((u32)(r_ebp+0xfffffeb0u), 0x6f0d74u);
    /* 00620d6c: mov dword ptr [ebp - 0x14c], 0x6f0d7c */ W32((u32)(r_ebp+0xfffffeb4u), 0x6f0d7cu);
    /* 00620d76: mov dword ptr [ebp - 0x148], 0x6f0d88 */ W32((u32)(r_ebp+0xfffffeb8u), 0x6f0d88u);
    /* 00620d80: mov dword ptr [ebp - 0x144], 0x6f0d90 */ W32((u32)(r_ebp+0xfffffebcu), 0x6f0d90u);
    /* 00620d8a: mov dword ptr [ebp - 0x74], 0xe4 */ W32((u32)(r_ebp+0xffffff8cu), 0xe4u);
    /* 00620d91: mov dword ptr [ebp - 0x70], 0xba */ W32((u32)(r_ebp+0xffffff90u), 0xbau);
    /* 00620d98: mov dword ptr [ebp - 0x6c], 0xe4 */ W32((u32)(r_ebp+0xffffff94u), 0xe4u);
    /* 00620d9f: mov dword ptr [ebp - 0x68], 0xa0 */ W32((u32)(r_ebp+0xffffff98u), 0xa0u);
    /* 00620da6: mov dword ptr [ebp - 0x64], 0xcb */ W32((u32)(r_ebp+0xffffff9cu), 0xcbu);
    /* 00620dad: mov dword ptr [ebp - 0x60], 0x93 */ W32((u32)(r_ebp+0xffffffa0u), 0x93u);
    /* 00620db4: mov dword ptr [ebp - 0x5c], 0xcb */ W32((u32)(r_ebp+0xffffffa4u), 0xcbu);
    /* 00620dbb: mov dword ptr [ebp - 0x58], 0xa8 */ W32((u32)(r_ebp+0xffffffa8u), 0xa8u);
    /* 00620dc2: mov dword ptr [ebp - 0x54], 0xcb */ W32((u32)(r_ebp+0xffffffacu), 0xcbu);
    /* 00620dc9: mov dword ptr [ebp - 0x50], 0xbd */ W32((u32)(r_ebp+0xffffffb0u), 0xbdu);
    /* 00620dd0: mov dword ptr [ebp - 0x4c], 0xcb */ W32((u32)(r_ebp+0xffffffb4u), 0xcbu);
    /* 00620dd7: mov dword ptr [ebp - 0x48], 0xd2 */ W32((u32)(r_ebp+0xffffffb8u), 0xd2u);
    /* 00620dde: mov dword ptr [ebp - 0x44], 0x136 */ W32((u32)(r_ebp+0xffffffbcu), 0x136u);
    /* 00620de5: mov dword ptr [ebp - 0x40], 0x93 */ W32((u32)(r_ebp+0xffffffc0u), 0x93u);
    /* 00620dec: mov dword ptr [ebp - 0x3c], 0x136 */ W32((u32)(r_ebp+0xffffffc4u), 0x136u);
    /* 00620df3: mov dword ptr [ebp - 0x38], 0xa8 */ W32((u32)(r_ebp+0xffffffc8u), 0xa8u);
    /* 00620dfa: mov dword ptr [ebp - 0x34], 0x136 */ W32((u32)(r_ebp+0xffffffccu), 0x136u);
    /* 00620e01: mov dword ptr [ebp - 0x30], 0xbd */ W32((u32)(r_ebp+0xffffffd0u), 0xbdu);
    /* 00620e08: mov dword ptr [ebp - 0x2c], 0x136 */ W32((u32)(r_ebp+0xffffffd4u), 0x136u);
    /* 00620e0f: mov dword ptr [ebp - 0x28], 0xd2 */ W32((u32)(r_ebp+0xffffffd8u), 0xd2u);
    /* 00620e16: mov dword ptr [ebp - 0x178], 0x6f0d9c */ W32((u32)(r_ebp+0xfffffe88u), 0x6f0d9cu);
    /* 00620e20: mov dword ptr [ebp - 0x174], 0x6f0da4 */ W32((u32)(r_ebp+0xfffffe8cu), 0x6f0da4u);
    /* 00620e2a: mov dword ptr [ebp - 0x170], 0x6f0db0 */ W32((u32)(r_ebp+0xfffffe90u), 0x6f0db0u);
    /* 00620e34: mov dword ptr [ebp - 0x130], 0xe6 */ W32((u32)(r_ebp+0xfffffed0u), 0xe6u);
    /* 00620e3e: mov dword ptr [ebp - 0x12c], 0xd8 */ W32((u32)(r_ebp+0xfffffed4u), 0xd8u);
    /* 00620e48: mov dword ptr [ebp - 0x128], 0x16e */ W32((u32)(r_ebp+0xfffffed8u), 0x16eu);
    /* 00620e52: mov dword ptr [ebp - 0x124], 0xd8 */ W32((u32)(r_ebp+0xfffffedcu), 0xd8u);
    /* 00620e5c: mov dword ptr [ebp - 0x120], 0x121 */ W32((u32)(r_ebp+0xfffffee0u), 0x121u);
    /* 00620e66: mov dword ptr [ebp - 0x11c], 0xd2 */ W32((u32)(r_ebp+0xfffffee4u), 0xd2u);
    /* 00620e70: mov dword ptr [ebp - 0x24], 0x6f0dbc */ W32((u32)(r_ebp+0xffffffdcu), 0x6f0dbcu);
    /* 00620e77: mov dword ptr [ebp - 0x20], 0x6f0dc4 */ W32((u32)(r_ebp+0xffffffe0u), 0x6f0dc4u);
    /* 00620e7e: mov dword ptr [ebp - 0x1c], 0x6f0dcc */ W32((u32)(r_ebp+0xffffffe4u), 0x6f0dccu);
    /* 00620e85: mov dword ptr [ebp - 0x18], 0xd8 */ W32((u32)(r_ebp+0xffffffe8u), 0xd8u);
    /* 00620e8c: mov dword ptr [ebp - 0x14], 0xb0 */ W32((u32)(r_ebp+0xffffffecu), 0xb0u);
    /* 00620e93: mov dword ptr [ebp - 0x10], 0x174 */ W32((u32)(r_ebp+0xfffffff0u), 0x174u);
    /* 00620e9a: mov dword ptr [ebp - 0xc], 0xb0 */ W32((u32)(r_ebp+0xfffffff4u), 0xb0u);
    /* 00620ea1: mov dword ptr [ebp - 8], 0x11d */ W32((u32)(r_ebp+0xfffffff8u), 0x11du);
    /* 00620ea8: mov dword ptr [ebp - 4], 0xaa */ W32((u32)(r_ebp+0xfffffffcu), 0xaau);
    /* 00620eaf: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 00620eb9: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620ebf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620ec2: mov dword ptr [eax + 0xf8], ecx */ W32((u32)(r_eax+0xf8u), r_ecx);
    /* 00620ec8: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620ece: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00620ed4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620ed8: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620ede: add ecx, 0xfc */ {  u32 a = r_ecx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620ee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ee5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x620eeau); f_00624510();
    /* 00620eea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620eed: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620ef3: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620ef9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620efa: push 0x6f0dd4 */ { u32 v = 0x6f0dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00620eff: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 00620f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620f06: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x620f0cu); call_ind(t); }
    /* 00620f0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620f0f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00620f11: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 00620f17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620f18: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620f1e: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x620f23u); f_005d825e();
    /* 00620f23: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00620f25: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620f2b: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x620f30u); f_005e0731();
    /* 00620f30: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 00620f3a: jmp 0x620f4b */ goto L_00620f4b;
L_00620f3c:; BB(0x00620f3c);
    /* 00620f3c: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620f42: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f45: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
L_00620f4b:; BB(0x00620f4b);
    /* 00620f4b: cmp dword ptr [ebp - 0x16c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620f52: jge 0x62115c */ if ((fS==fO)) goto L_0062115c;
L_00620f58:; BB(0x00620f58);
    /* 00620f58: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620f5e: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620f64: cmp dword ptr [ecx + eax*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620f6c: jne 0x620fc7 */ if (!fZ) goto L_00620fc7;
L_00620f6e:; BB(0x00620f6e);
    /* 00620f6e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620f73: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x620f78u); f_0048ab58();
    /* 00620f78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620f7b: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 00620f81: cmp dword ptr [ebp - 0x17c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620f88: je 0x620fa4 */ if (fZ) goto L_00620fa4;
L_00620f8a:; BB(0x00620f8a);
    /* 00620f8a: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620f90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620f91: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00620f97: call 0x622e0c */ r_esp -= 4; W32(r_esp, 0x620f9cu); f_00622e0c();
    /* 00620f9c: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 00620fa2: jmp 0x620fae */ goto L_00620fae;
L_00620fa4:; BB(0x00620fa4);
    /* 00620fa4: mov dword ptr [ebp - 0x1b0], 0 */ W32((u32)(r_ebp+0xfffffe50u), 0x0u);
L_00620fae:; BB(0x00620fae);
    /* 00620fae: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620fb4: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620fba: mov edx, dword ptr [ebp - 0x1b0] */ r_edx = R32((u32)(r_ebp+0xfffffe50u));
    /* 00620fc0: mov dword ptr [ecx + eax*4 + 0x8c], edx */ W32((u32)(r_ecx+r_eax*4+0x8cu), r_edx);
L_00620fc7:; BB(0x00620fc7);
    /* 00620fc7: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620fcd: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620fd3: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00620fda: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620fe0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00620fe3: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620fe9: mov edx, dword ptr [ebp + ecx*4 - 0x80] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff80u));
    /* 00620fed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620fee: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00620ff4: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00620ffa: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00621001: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621007: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062100d: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00621014: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621016: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x621019u); call_ind(t); }
    /* 00621019: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0062101b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0062101d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0062101f: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621025: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062102b: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00621032: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621038: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062103e: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00621045: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621047: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x62104au); call_ind(t); }
    /* 0062104a: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0062104f: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621055: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062105b: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00621062: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621068: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062106e: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00621075: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621077: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x62107au); call_ind(t); }
    /* 0062107a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062107c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062107e: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621084: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062108a: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00621091: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621097: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062109d: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 006210a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006210a6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x6210a9u); call_ind(t); }
    /* 006210a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006210ab: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 006210b1: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006210b7: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 006210be: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006210c4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006210ca: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 006210d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006210d3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6210d6u); call_ind(t); }
    /* 006210d6: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 006210db: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006210e1: mov edx, dword ptr [ebp + ecx*4 - 0x13c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffec4u));
    /* 006210e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006210e9: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 006210ef: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006210f5: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 006210fc: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621102: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621108: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0062110f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621111: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x621114u); call_ind(t); }
    /* 00621114: cmp dword ptr [ebp - 0x16c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062111b: jne 0x621157 */ if (!fZ) goto L_00621157;
L_0062111d:; BB(0x0062111d);
    /* 0062111d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0062111f: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621125: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062112b: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00621132: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x621137u); f_005d65d6();
    /* 00621137: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00621139: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062113b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062113d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062113f: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621145: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062114b: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00621152: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x621157u); f_005d5ff2();
L_00621157:; BB(0x00621157);
    /* 00621157: jmp 0x620f3c */ goto L_00620f3c;
L_0062115c:; BB(0x0062115c);
    /* 0062115c: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 00621166: jmp 0x621177 */ goto L_00621177;
L_00621168:; BB(0x00621168);
    /* 00621168: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062116e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00621171: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
L_00621177:; BB(0x00621177);
    /* 00621177: cmp dword ptr [ebp - 0x16c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062117e: jge 0x6213ab */ if ((fS==fO)) goto L_006213ab;
L_00621184:; BB(0x00621184);
    /* 00621184: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062118a: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621190: cmp dword ptr [ecx + eax*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621198: jne 0x6213a6 */ if (!fZ) goto L_006213a6;
L_0062119e:; BB(0x0062119e);
    /* 0062119e: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 006211a3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6211a8u); f_0048ab58();
    /* 006211a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006211ab: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 006211b1: cmp dword ptr [ebp - 0x180], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006211b8: je 0x6211cf */ if (fZ) goto L_006211cf;
L_006211ba:; BB(0x006211ba);
    /* 006211ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006211bc: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 006211c2: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x6211c7u); f_005d6e50();
    /* 006211c7: mov dword ptr [ebp - 0x1b4], eax */ W32((u32)(r_ebp+0xfffffe4cu), r_eax);
    /* 006211cd: jmp 0x6211d9 */ goto L_006211d9;
L_006211cf:; BB(0x006211cf);
    /* 006211cf: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
L_006211d9:; BB(0x006211d9);
    /* 006211d9: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006211df: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006211e5: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 006211eb: mov dword ptr [eax + edx*4 + 0x98], ecx */ W32((u32)(r_eax+r_edx*4+0x98u), r_ecx);
    /* 006211f2: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006211f8: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006211fe: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 00621205: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062120b: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0062120e: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621214: mov ecx, dword ptr [ebp + eax*4 - 0x168] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffe98u));
    /* 0062121b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062121c: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621222: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621228: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0062122f: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621235: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062123b: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 00621242: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621244: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x621247u); call_ind(t); }
    /* 00621247: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00621249: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062124b: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0062124d: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621253: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621259: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00621260: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621266: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062126c: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 00621273: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621275: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x621278u); call_ind(t); }
    /* 00621278: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0062127d: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621283: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621289: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 00621290: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621296: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062129c: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 006212a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006212a5: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x6212a8u); call_ind(t); }
    /* 006212a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006212aa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006212ac: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006212b2: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006212b8: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 006212bf: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x6212c4u); f_005d7422();
    /* 006212c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006212c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006212c8: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 006212ce: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006212d4: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 006212db: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006212e1: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006212e7: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 006212ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006212f0: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x6212f3u); call_ind(t); }
    /* 006212f3: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006212f9: mov edx, dword ptr [ebp + ecx*8 - 0x70] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff90u));
    /* 006212fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006212fe: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621304: mov ecx, dword ptr [ebp + eax*8 - 0x74] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff8cu));
    /* 00621308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621309: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062130f: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621315: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0062131c: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621322: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621328: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0062132f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621331: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x621334u); call_ind(t); }
    /* 00621334: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621336: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062133c: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621342: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00621349: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062134f: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621355: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 0062135c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062135e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621361u); call_ind(t); }
    /* 00621361: cmp dword ptr [ebp - 0x16c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621368: jne 0x6213a6 */ if (!fZ) goto L_006213a6;
L_0062136a:; BB(0x0062136a);
    /* 0062136a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0062136f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00621372: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x621377u); f_00448ca3();
    /* 00621377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621379: je 0x6213a6 */ if (fZ) goto L_006213a6;
L_0062137b:; BB(0x0062137b);
    /* 0062137b: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621381: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621387: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 0062138e: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621394: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062139a: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 006213a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006213a3: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6213a6u); call_ind(t); }
L_006213a6:; BB(0x006213a6);
    /* 006213a6: jmp 0x621168 */ goto L_00621168;
L_006213ab:; BB(0x006213ab);
    /* 006213ab: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006213b1: cmp dword ptr [eax + 0xf4], 0 */ {  u32 a = R32((u32)(r_eax+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006213b8: jne 0x621500 */ if (!fZ) goto L_00621500;
L_006213be:; BB(0x006213be);
    /* 006213be: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 006213c3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6213c8u); f_0048ab58();
    /* 006213c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006213cb: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 006213d1: cmp dword ptr [ebp - 0x184], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006213d8: je 0x6213ef */ if (fZ) goto L_006213ef;
L_006213da:; BB(0x006213da);
    /* 006213da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006213dc: mov ecx, dword ptr [ebp - 0x184] */ r_ecx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 006213e2: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x6213e7u); f_005d6e50();
    /* 006213e7: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 006213ed: jmp 0x6213f9 */ goto L_006213f9;
L_006213ef:; BB(0x006213ef);
    /* 006213ef: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
L_006213f9:; BB(0x006213f9);
    /* 006213f9: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006213ff: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 00621405: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 0062140b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621411: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00621417: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062141d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621420: push 0x6f0de8 */ { u32 v = 0x6f0de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621425: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062142b: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00621431: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621437: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0062143d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062143f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x621442u); call_ind(t); }
    /* 00621442: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00621444: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621446: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00621448: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062144e: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00621454: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062145a: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00621460: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621462: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x621465u); call_ind(t); }
    /* 00621465: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0062146a: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621470: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00621476: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062147c: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00621482: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621484: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x621487u); call_ind(t); }
    /* 00621487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621489: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0062148b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621491: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00621497: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x62149cu); f_005d7422();
    /* 0062149c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062149e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006214a0: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214a6: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 006214ac: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214b2: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006214b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006214ba: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x6214bdu); call_ind(t); }
    /* 006214bd: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 006214bf: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 006214c4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214ca: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 006214d0: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214d6: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006214dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006214de: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x6214e1u); call_ind(t); }
    /* 006214e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006214e3: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214e9: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 006214ef: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006214f5: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006214fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006214fd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621500u); call_ind(t); }
L_00621500:; BB(0x00621500);
    /* 00621500: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 0062150a: jmp 0x62151b */ goto L_0062151b;
L_0062150c:; BB(0x0062150c);
    /* 0062150c: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621512: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00621515: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
L_0062151b:; BB(0x0062151b);
    /* 0062151b: cmp dword ptr [ebp - 0x16c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621522: jge 0x6216b0 */ if ((fS==fO)) goto L_006216b0;
L_00621528:; BB(0x00621528);
    /* 00621528: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062152e: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621534: cmp dword ptr [edx + ecx*4 + 0xc4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062153c: jne 0x6216ab */ if (!fZ) goto L_006216ab;
L_00621542:; BB(0x00621542);
    /* 00621542: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00621547: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x62154cu); f_0048ab58();
    /* 0062154c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062154f: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 00621555: cmp dword ptr [ebp - 0x188], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062155c: je 0x621571 */ if (fZ) goto L_00621571;
L_0062155e:; BB(0x0062155e);
    /* 0062155e: mov ecx, dword ptr [ebp - 0x188] */ r_ecx = R32((u32)(r_ebp+0xfffffe78u));
    /* 00621564: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x621569u); f_005e8590();
    /* 00621569: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 0062156f: jmp 0x62157b */ goto L_0062157b;
L_00621571:; BB(0x00621571);
    /* 00621571: mov dword ptr [ebp - 0x1bc], 0 */ W32((u32)(r_ebp+0xfffffe44u), 0x0u);
L_0062157b:; BB(0x0062157b);
    /* 0062157b: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621581: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621587: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 0062158d: mov dword ptr [ecx + eax*4 + 0xc4], edx */ W32((u32)(r_ecx+r_eax*4+0xc4u), r_edx);
    /* 00621594: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062159a: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006215a0: mov edx, dword ptr [ecx + eax*4 + 0xc4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xc4u));
    /* 006215a7: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006215ad: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006215b0: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006215b6: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 006215ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006215bb: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 006215c1: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006215c7: mov ecx, dword ptr [ecx + eax*4 + 0xc4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xc4u));
    /* 006215ce: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006215d4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006215da: mov edx, dword ptr [eax + edx*4 + 0xc4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 006215e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006215e3: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6215e6u); call_ind(t); }
    /* 006215e6: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006215ec: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006215ef: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006215f1: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006215f3: and ecx, 0xfffffff6 */ {  u32 a = r_ecx; u32 b = 0xfffffff6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006215f6: add ecx, 0x2f */ {  u32 a = r_ecx; u32 b = 0x2fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006215f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006215fa: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621600: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621606: mov ecx, dword ptr [eax + edx*4 + 0xc4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 0062160d: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x621612u); f_005e87aa();
    /* 00621612: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621618: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062161e: mov ecx, dword ptr [edx + ecx*4 + 0xc4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc4u));
    /* 00621625: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062162b: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621631: mov eax, dword ptr [edx + eax*4 + 0xc4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xc4u));
    /* 00621638: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062163a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x62163du); call_ind(t); }
    /* 0062163d: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621643: mov ecx, dword ptr [ebp + eax*8 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffecu));
    /* 00621647: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621648: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062164e: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 00621652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621653: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621659: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062165f: mov ecx, dword ptr [edx + ecx*4 + 0xc4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc4u));
    /* 00621666: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062166c: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621672: mov eax, dword ptr [edx + eax*4 + 0xc4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xc4u));
    /* 00621679: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062167b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x62167eu); call_ind(t); }
    /* 0062167e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621680: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621686: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062168c: mov ecx, dword ptr [ecx + eax*4 + 0xc4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xc4u));
    /* 00621693: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621699: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062169f: mov edx, dword ptr [eax + edx*4 + 0xc4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 006216a6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006216a8: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6216abu); call_ind(t); }
L_006216ab:; BB(0x006216ab);
    /* 006216ab: jmp 0x62150c */ goto L_0062150c;
L_006216b0:; BB(0x006216b0);
    /* 006216b0: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006216b6: cmp dword ptr [ecx + 0xc0], 0 */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216bd: jne 0x6217dd */ if (!fZ) goto L_006217dd;
L_006216c3:; BB(0x006216c3);
    /* 006216c3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006216c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6216cdu); f_0048ab58();
    /* 006216cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006216d0: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 006216d6: cmp dword ptr [ebp - 0x18c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216dd: je 0x6216f6 */ if (fZ) goto L_006216f6;
L_006216df:; BB(0x006216df);
    /* 006216df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006216e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006216e3: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 006216e9: call 0x5e76e0 */ r_esp -= 4; W32(r_esp, 0x6216eeu); f_005e76e0();
    /* 006216ee: mov dword ptr [ebp - 0x1c0], eax */ W32((u32)(r_ebp+0xfffffe40u), r_eax);
    /* 006216f4: jmp 0x621700 */ goto L_00621700;
L_006216f6:; BB(0x006216f6);
    /* 006216f6: mov dword ptr [ebp - 0x1c0], 0 */ W32((u32)(r_ebp+0xfffffe40u), 0x0u);
L_00621700:; BB(0x00621700);
    /* 00621700: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621706: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0062170c: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00621712: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621718: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0062171e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621724: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00621727: push 0x3f1 */ { u32 v = 0x3f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062172c: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621732: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00621738: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x62173du); f_005ea0c3();
    /* 0062173d: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621743: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 00621749: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062174f: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 00621755: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00621757: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x62175au); call_ind(t); }
    /* 0062175a: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062175f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621764: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062176a: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00621770: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621776: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0062177c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062177e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621781u); call_ind(t); }
    /* 00621781: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621783: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621789: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0062178f: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621795: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0062179b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062179d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6217a0u); call_ind(t); }
    /* 006217a0: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 006217a5: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 006217aa: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006217b0: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 006217b6: call 0x5e7901 */ r_esp -= 4; W32(r_esp, 0x6217bbu); f_005e7901();
    /* 006217bb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006217bd: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 006217c2: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 006217c7: push 0x423 */ { u32 v = 0x423u; r_esp -= 4; W32(r_esp, v); }
    /* 006217cc: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006217d2: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 006217d8: call 0x5e780a */ r_esp -= 4; W32(r_esp, 0x6217ddu); f_005e780a();
L_006217dd:; BB(0x006217dd);
    /* 006217dd: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 006217e7: jmp 0x6217f8 */ goto L_006217f8;
L_006217e9:; BB(0x006217e9);
    /* 006217e9: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006217ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006217f2: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
L_006217f8:; BB(0x006217f8);
    /* 006217f8: cmp dword ptr [ebp - 0x16c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006217ff: jge 0x621996 */ if ((fS==fO)) goto L_00621996;
L_00621805:; BB(0x00621805);
    /* 00621805: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062180b: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621811: cmp dword ptr [ecx + eax*4 + 0xe0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621819: jne 0x621991 */ if (!fZ) goto L_00621991;
L_0062181f:; BB(0x0062181f);
    /* 0062181f: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00621824: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621829u); f_0048ab58();
    /* 00621829: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062182c: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 00621832: cmp dword ptr [ebp - 0x190], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621839: je 0x62184e */ if (fZ) goto L_0062184e;
L_0062183b:; BB(0x0062183b);
    /* 0062183b: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 00621841: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x621846u); f_005e8590();
    /* 00621846: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 0062184c: jmp 0x621858 */ goto L_00621858;
L_0062184e:; BB(0x0062184e);
    /* 0062184e: mov dword ptr [ebp - 0x1c4], 0 */ W32((u32)(r_ebp+0xfffffe3cu), 0x0u);
L_00621858:; BB(0x00621858);
    /* 00621858: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062185e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621864: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 0062186a: mov dword ptr [eax + edx*4 + 0xe0], ecx */ W32((u32)(r_eax+r_edx*4+0xe0u), r_ecx);
    /* 00621871: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621877: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062187d: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 00621884: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062188a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0062188d: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621893: mov ecx, dword ptr [ebp + eax*4 - 0x178] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffe88u));
    /* 0062189a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062189b: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006218a1: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006218a7: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 006218ae: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006218b4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006218ba: mov edx, dword ptr [eax + edx*4 + 0xe0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 006218c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006218c3: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6218c6u); call_ind(t); }
    /* 006218c6: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006218cc: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006218cf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006218d1: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006218d3: and ecx, 0xfffffff6 */ {  u32 a = r_ecx; u32 b = 0xfffffff6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006218d6: add ecx, 0x2f */ {  u32 a = r_ecx; u32 b = 0x2fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006218d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006218da: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006218e0: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006218e6: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 006218ed: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x6218f2u); f_005e87aa();
    /* 006218f2: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006218f8: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006218fe: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 00621905: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062190b: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621911: mov eax, dword ptr [edx + eax*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe0u));
    /* 00621918: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062191a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x62191du); call_ind(t); }
    /* 0062191d: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621923: mov ecx, dword ptr [ebp + eax*8 - 0x12c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xfffffed4u));
    /* 0062192a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062192b: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621931: mov eax, dword ptr [ebp + edx*8 - 0x130] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffed0u));
    /* 00621938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621939: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062193f: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621945: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0062194c: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00621952: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621958: mov eax, dword ptr [edx + eax*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe0u));
    /* 0062195f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621961: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621964u); call_ind(t); }
    /* 00621964: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621966: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062196c: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621972: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 00621979: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062197f: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621985: mov edx, dword ptr [eax + edx*4 + 0xe0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0062198c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062198e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x621991u); call_ind(t); }
L_00621991:; BB(0x00621991);
    /* 00621991: jmp 0x6217e9 */ goto L_006217e9;
L_00621996:; BB(0x00621996);
    /* 00621996: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062199c: cmp dword ptr [ecx + 0xd0], 0 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006219a3: jne 0x621ab4 */ if (!fZ) goto L_00621ab4;
L_006219a9:; BB(0x006219a9);
    /* 006219a9: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 006219ae: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x6219b3u); f_0048ab58();
    /* 006219b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006219b6: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 006219bc: cmp dword ptr [ebp - 0x194], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006219c3: je 0x6219d8 */ if (fZ) goto L_006219d8;
L_006219c5:; BB(0x006219c5);
    /* 006219c5: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 006219cb: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x6219d0u); f_005e8590();
    /* 006219d0: mov dword ptr [ebp - 0x1c8], eax */ W32((u32)(r_ebp+0xfffffe38u), r_eax);
    /* 006219d6: jmp 0x6219e2 */ goto L_006219e2;
L_006219d8:; BB(0x006219d8);
    /* 006219d8: mov dword ptr [ebp - 0x1c8], 0 */ W32((u32)(r_ebp+0xfffffe38u), 0x0u);
L_006219e2:; BB(0x006219e2);
    /* 006219e2: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006219e8: mov eax, dword ptr [ebp - 0x1c8] */ r_eax = R32((u32)(r_ebp+0xfffffe38u));
    /* 006219ee: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 006219f4: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006219fa: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00621a00: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a06: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00621a09: push 0x6f0df4 */ { u32 v = 0x6f0df4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621a0e: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a14: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00621a1a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a20: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00621a26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621a28: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x621a2bu); call_ind(t); }
    /* 00621a2b: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00621a2d: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a33: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00621a39: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x621a3eu); f_005e87aa();
    /* 00621a3e: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a44: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00621a4a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a50: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00621a56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621a58: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x621a5bu); call_ind(t); }
    /* 00621a5b: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621a60: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a66: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00621a6c: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x621a71u); f_005e8740();
    /* 00621a71: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00621a73: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621a78: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a7e: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00621a84: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a8a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00621a90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621a92: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621a95u); call_ind(t); }
    /* 00621a95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621a97: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621a9d: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00621aa3: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621aa9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00621aaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621ab1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621ab4u); call_ind(t); }
L_00621ab4:; BB(0x00621ab4);
    /* 00621ab4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621aba: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ac1: jne 0x621bfb */ if (!fZ) goto L_00621bfb;
L_00621ac7:; BB(0x00621ac7);
    /* 00621ac7: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00621acc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621ad1u); f_0048ab58();
    /* 00621ad1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621ad4: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 00621ada: cmp dword ptr [ebp - 0x198], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ae1: je 0x621af6 */ if (fZ) goto L_00621af6;
L_00621ae3:; BB(0x00621ae3);
    /* 00621ae3: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00621ae9: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x621aeeu); f_005e8590();
    /* 00621aee: mov dword ptr [ebp - 0x1cc], eax */ W32((u32)(r_ebp+0xfffffe34u), r_eax);
    /* 00621af4: jmp 0x621b00 */ goto L_00621b00;
L_00621af6:; BB(0x00621af6);
    /* 00621af6: mov dword ptr [ebp - 0x1cc], 0 */ W32((u32)(r_ebp+0xfffffe34u), 0x0u);
L_00621b00:; BB(0x00621b00);
    /* 00621b00: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b06: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 00621b0c: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00621b12: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b18: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621b1e: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b24: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621b27: push 0x711170 */ { u32 v = 0x711170u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b2c: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b32: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621b38: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b3e: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00621b44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621b46: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x621b49u); call_ind(t); }
    /* 00621b49: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b4f: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621b55: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b5b: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00621b61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621b63: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x621b66u); call_ind(t); }
    /* 00621b66: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00621b68: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b6e: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621b74: call 0x5e8ee7 */ r_esp -= 4; W32(r_esp, 0x621b79u); f_005e8ee7();
    /* 00621b79: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b7b: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b81: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00621b87: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x621b8cu); f_005e87aa();
    /* 00621b8c: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00621b91: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621b97: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 00621b9d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x621ba2u); f_005e8740();
    /* 00621ba2: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00621ba7: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621bad: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621bb3: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x621bb8u); f_005e8775();
    /* 00621bb8: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00621bba: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621bbf: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621bc5: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00621bcb: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621bd1: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00621bd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621bd9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621bdcu); call_ind(t); }
    /* 00621bdc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621bde: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621be4: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00621bea: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621bf0: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00621bf6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621bf8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621bfbu); call_ind(t); }
L_00621bfb:; BB(0x00621bfb);
    /* 00621bfb: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c01: cmp dword ptr [eax + 0xd8], 0 */ {  u32 a = R32((u32)(r_eax+0xd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621c08: jne 0x621cbd */ if (!fZ) goto L_00621cbd;
L_00621c0e:; BB(0x00621c0e);
    /* 00621c0e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621c10: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621c15u); f_0048ab58();
    /* 00621c15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621c18: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 00621c1e: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621c25: je 0x621c3a */ if (fZ) goto L_00621c3a;
L_00621c27:; BB(0x00621c27);
    /* 00621c27: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 00621c2d: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x621c32u); f_005e9d30();
    /* 00621c32: mov dword ptr [ebp - 0x1d0], eax */ W32((u32)(r_ebp+0xfffffe30u), r_eax);
    /* 00621c38: jmp 0x621c44 */ goto L_00621c44;
L_00621c3a:; BB(0x00621c3a);
    /* 00621c3a: mov dword ptr [ebp - 0x1d0], 0 */ W32((u32)(r_ebp+0xfffffe30u), 0x0u);
L_00621c44:; BB(0x00621c44);
    /* 00621c44: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c4a: mov edx, dword ptr [ebp - 0x1d0] */ r_edx = R32((u32)(r_ebp+0xfffffe30u));
    /* 00621c50: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 00621c56: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c5c: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00621c62: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c68: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621c6b: push 0x432 */ { u32 v = 0x432u; r_esp -= 4; W32(r_esp, v); }
    /* 00621c70: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c76: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00621c7c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x621c81u); f_005ea0c3();
    /* 00621c81: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c87: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 00621c8d: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621c93: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00621c99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621c9b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x621c9eu); call_ind(t); }
    /* 00621c9e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621ca0: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621ca6: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00621cac: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621cb2: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00621cb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621cba: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621cbdu); call_ind(t); }
L_00621cbd:; BB(0x00621cbd);
    /* 00621cbd: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621cc3: cmp dword ptr [eax + 0xf0], 0 */ {  u32 a = R32((u32)(r_eax+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621cca: jne 0x621da0 */ if (!fZ) goto L_00621da0;
L_00621cd0:; BB(0x00621cd0);
    /* 00621cd0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621cd2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621cd7u); f_0048ab58();
    /* 00621cd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621cda: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00621ce0: cmp dword ptr [ebp - 0x1a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ce7: je 0x621cfc */ if (fZ) goto L_00621cfc;
L_00621ce9:; BB(0x00621ce9);
    /* 00621ce9: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 00621cef: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x621cf4u); f_005e9d30();
    /* 00621cf4: mov dword ptr [ebp - 0x1d4], eax */ W32((u32)(r_ebp+0xfffffe2cu), r_eax);
    /* 00621cfa: jmp 0x621d06 */ goto L_00621d06;
L_00621cfc:; BB(0x00621cfc);
    /* 00621cfc: mov dword ptr [ebp - 0x1d4], 0 */ W32((u32)(r_ebp+0xfffffe2cu), 0x0u);
L_00621d06:; BB(0x00621d06);
    /* 00621d06: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d0c: mov edx, dword ptr [ebp - 0x1d4] */ r_edx = R32((u32)(r_ebp+0xfffffe2cu));
    /* 00621d12: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 00621d18: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d1e: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00621d24: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d2a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621d2d: push 0x523 */ { u32 v = 0x523u; r_esp -= 4; W32(r_esp, v); }
    /* 00621d32: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d38: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00621d3e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x621d43u); f_005ea0c3();
    /* 00621d43: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00621d45: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00621d47: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d4d: mov ecx, dword ptr [ecx + 0xf0] */ r_ecx = R32((u32)(r_ecx+0xf0u));
    /* 00621d53: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d59: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00621d5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621d61: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621d64u); call_ind(t); }
    /* 00621d64: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d6a: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00621d70: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d76: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00621d7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621d7e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x621d81u); call_ind(t); }
    /* 00621d81: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621d83: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d89: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00621d8f: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621d95: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00621d9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621d9d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621da0u); call_ind(t); }
L_00621da0:; BB(0x00621da0);
    /* 00621da0: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621da6: cmp dword ptr [eax + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621dad: jne 0x621ee1 */ if (!fZ) goto L_00621ee1;
L_00621db3:; BB(0x00621db3);
    /* 00621db3: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00621db8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621dbdu); f_0048ab58();
    /* 00621dbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621dc0: mov dword ptr [ebp - 0x1a4], eax */ W32((u32)(r_ebp+0xfffffe5cu), r_eax);
    /* 00621dc6: cmp dword ptr [ebp - 0x1a4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621dcd: je 0x621de2 */ if (fZ) goto L_00621de2;
L_00621dcf:; BB(0x00621dcf);
    /* 00621dcf: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00621dd5: call 0x622ef1 */ r_esp -= 4; W32(r_esp, 0x621ddau); f_00622ef1();
    /* 00621dda: mov dword ptr [ebp - 0x1d8], eax */ W32((u32)(r_ebp+0xfffffe28u), r_eax);
    /* 00621de0: jmp 0x621dec */ goto L_00621dec;
L_00621de2:; BB(0x00621de2);
    /* 00621de2: mov dword ptr [ebp - 0x1d8], 0 */ W32((u32)(r_ebp+0xfffffe28u), 0x0u);
L_00621dec:; BB(0x00621dec);
    /* 00621dec: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621df2: mov edx, dword ptr [ebp - 0x1d8] */ r_edx = R32((u32)(r_ebp+0xfffffe28u));
    /* 00621df8: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 00621dfe: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e04: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621e0a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e10: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621e13: push 0x6f0e00 */ { u32 v = 0x6f0e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e18: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e1e: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621e24: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e2a: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621e30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621e32: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x621e35u); call_ind(t); }
    /* 00621e35: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e37: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e39: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e3b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e41: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621e47: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e4d: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621e53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621e55: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x621e58u); call_ind(t); }
    /* 00621e58: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00621e5d: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e63: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621e69: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e6f: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621e75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621e77: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x621e7au); call_ind(t); }
    /* 00621e7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e7e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e84: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621e8a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621e90: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621e96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621e98: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x621e9bu); call_ind(t); }
    /* 00621e9b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e9d: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621ea3: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621ea9: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621eaf: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621eb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621eb7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621ebau); call_ind(t); }
    /* 00621eba: push 0xef */ { u32 v = 0xefu; r_esp -= 4; W32(r_esp, v); }
    /* 00621ebf: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 00621ec4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621eca: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00621ed0: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621ed6: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621edc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621ede: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621ee1u); call_ind(t); }
L_00621ee1:; BB(0x00621ee1);
    /* 00621ee1: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00621ee6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00621ee9: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x621eeeu); f_00448ca3();
    /* 00621eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ef0: je 0x621f0f */ if (fZ) goto L_00621f0f;
L_00621ef2:; BB(0x00621ef2);
    /* 00621ef2: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621ef8: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 00621efe: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f04: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00621f0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621f0c: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x621f0fu); call_ind(t); }
L_00621f0f:; BB(0x00621f0f);
    /* 00621f0f: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f15: cmp dword ptr [eax + 0xdc], 0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621f1c: jne 0x62203c */ if (!fZ) goto L_0062203c;
L_00621f22:; BB(0x00621f22);
    /* 00621f22: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f27: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x621f2cu); f_0048ab58();
    /* 00621f2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621f2f: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 00621f35: cmp dword ptr [ebp - 0x1a8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621f3c: je 0x621f55 */ if (fZ) goto L_00621f55;
L_00621f3e:; BB(0x00621f3e);
    /* 00621f3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f42: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 00621f48: call 0x5e76e0 */ r_esp -= 4; W32(r_esp, 0x621f4du); f_005e76e0();
    /* 00621f4d: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 00621f53: jmp 0x621f5f */ goto L_00621f5f;
L_00621f55:; BB(0x00621f55);
    /* 00621f55: mov dword ptr [ebp - 0x1dc], 0 */ W32((u32)(r_ebp+0xfffffe24u), 0x0u);
L_00621f5f:; BB(0x00621f5f);
    /* 00621f5f: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f65: mov edx, dword ptr [ebp - 0x1dc] */ r_edx = R32((u32)(r_ebp+0xfffffe24u));
    /* 00621f6b: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00621f71: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f77: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00621f7d: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f83: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00621f86: push 0x3f1 */ { u32 v = 0x3f1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f8b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621f91: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00621f97: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x621f9cu); f_005ea0c3();
    /* 00621f9c: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621fa2: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00621fa8: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621fae: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00621fb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621fb6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x621fb9u); call_ind(t); }
    /* 00621fb9: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00621fbe: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621fc3: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621fc9: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00621fcf: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621fd5: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00621fdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621fdd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x621fe0u); call_ind(t); }
    /* 00621fe0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621fe2: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621fe8: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00621fee: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00621ff4: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00621ffa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00621ffc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x621fffu); call_ind(t); }
    /* 00621fff: push 0x18d */ { u32 v = 0x18du; r_esp -= 4; W32(r_esp, v); }
    /* 00622004: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00622009: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062200f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00622015: call 0x5e7901 */ r_esp -= 4; W32(r_esp, 0x62201au); f_005e7901();
    /* 0062201a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0062201c: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00622021: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00622026: push 0x423 */ { u32 v = 0x423u; r_esp -= 4; W32(r_esp, v); }
    /* 0062202b: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622031: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00622037: call 0x5e780a */ r_esp -= 4; W32(r_esp, 0x62203cu); f_005e780a();
L_0062203c:; BB(0x0062203c);
    /* 0062203c: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622042: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00622048: movsx ecx, byte ptr [eax + 0x80] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x80u));
    /* 0062204f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622051: je 0x622097 */ if (fZ) goto L_00622097;
L_00622053:; BB(0x00622053);
    /* 00622053: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622059: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0062205f: movsx ecx, byte ptr [eax + 0x80] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x80u));
    /* 00622066: mov dword ptr [ebp - 0x1e0], ecx */ W32((u32)(r_ebp+0xfffffe20u), r_ecx);
    /* 0062206c: fild dword ptr [ebp - 0x1e0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe20u)));
    /* 00622072: fadd qword ptr [0x63cf20] */ ST(0) = ST(0) + R_F64((u32)(0x63cf20u));
    /* 00622078: fmul qword ptr [0x63cf28] */ ST(0) = ST(0) * R_F64((u32)(0x63cf28u));
    /* 0062207e: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x622083u); f_00624144();
    /* 00622083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622084: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062208a: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 00622090: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x622095u); f_005e7b77();
    /* 00622095: jmp 0x6220aa */ goto L_006220aa;
L_00622097:; BB(0x00622097);
    /* 00622097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622099: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062209f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 006220a5: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x6220aau); f_005e7b77();
L_006220aa:; BB(0x006220aa);
    /* 006220aa: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006220b0: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 006220b6: movsx eax, byte ptr [edx + 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x70u));
    /* 006220ba: imul eax, eax, 0x11 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x11u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006220bd: mov ecx, 0xaa */ r_ecx = 0xaau;
    /* 006220c2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006220c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006220c5: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006220cb: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 006220d1: call 0x5e7b77 */ r_esp -= 4; W32(r_esp, 0x6220d6u); f_005e7b77();
    /* 006220d6: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006220dc: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 006220e2: movsx edx, byte ptr [ecx + 0x6f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6fu));
    /* 006220e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006220e8: je 0x622107 */ if (fZ) goto L_00622107;
L_006220ea:; BB(0x006220ea);
    /* 006220ea: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006220f0: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 006220f6: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006220fc: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00622102: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622104: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x622107u); call_ind(t); }
L_00622107:; BB(0x00622107);
    /* 00622107: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062210d: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00622113: movsx edx, byte ptr [ecx + 0x92] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x92u));
    /* 0062211a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062211c: jne 0x62213b */ if (!fZ) goto L_0062213b;
L_0062211e:; BB(0x0062211e);
    /* 0062211e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622124: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0062212a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622130: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00622136: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622138: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x62213bu); call_ind(t); }
L_0062213b:; BB(0x0062213b);
    /* 0062213b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622141: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00622147: movsx edx, byte ptr [ecx + 0x6c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6cu));
    /* 0062214b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062214d: je 0x62216c */ if (fZ) goto L_0062216c;
L_0062214f:; BB(0x0062214f);
    /* 0062214f: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622155: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0062215b: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622161: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00622167: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622169: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x62216cu); call_ind(t); }
L_0062216c:; BB(0x0062216c);
    /* 0062216c: mov dword ptr [ebp - 0x16c], 2 */ W32((u32)(r_ebp+0xfffffe94u), 0x2u);
    /* 00622176: jmp 0x622187 */ goto L_00622187;
L_00622178:; BB(0x00622178);
    /* 00622178: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0062217e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622181: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
L_00622187:; BB(0x00622187);
    /* 00622187: cmp dword ptr [ebp - 0x16c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062218e: jge 0x622229 */ if ((fS==fO)) goto L_00622229;
L_00622194:; BB(0x00622194);
    /* 00622194: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0062219a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0062219d: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x6221a2u); f_00448ca3();
    /* 006221a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006221a4: je 0x6221d1 */ if (fZ) goto L_006221d1;
L_006221a6:; BB(0x006221a6);
    /* 006221a6: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006221ac: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006221b2: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 006221b9: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006221bf: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006221c5: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 006221cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006221ce: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6221d1u); call_ind(t); }
L_006221d1:; BB(0x006221d1);
    /* 006221d1: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006221d7: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 006221dd: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 006221e3: movsx ecx, byte ptr [edx + eax + 0x80] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x80u));
    /* 006221eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006221ed: je 0x622224 */ if (fZ) goto L_00622224;
L_006221ef:; BB(0x006221ef);
    /* 006221ef: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
    /* 006221f9: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006221ff: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622205: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0062220c: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00622212: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622218: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 0062221f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00622221: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x622224u); call_ind(t); }
L_00622224:; BB(0x00622224);
    /* 00622224: jmp 0x622178 */ goto L_00622178;
L_00622229:; BB(0x00622229);
    /* 00622229: cmp dword ptr [ebp - 0x140], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622230: jne 0x622254 */ if (!fZ) goto L_00622254;
L_00622232:; BB(0x00622232);
    /* 00622232: push 0x6f0e08 */ { u32 v = 0x6f0e08u; r_esp -= 4; W32(r_esp, v); }
    /* 00622237: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 0062223d: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 00622243: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622249: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0062224f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622251: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x622254u); call_ind(t); }
L_00622254:; BB(0x00622254);
    /* 00622254: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062225b: je 0x6222e6 */ if (fZ) goto L_006222e6;
L_00622261:; BB(0x00622261);
    /* 00622261: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622267: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0062226d: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622273: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00622279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062227b: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x62227eu); call_ind(t); }
    /* 0062227e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622284: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0062228a: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 00622290: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00622296: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622298: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x62229bu); call_ind(t); }
    /* 0062229b: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006222a1: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 006222a7: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006222ad: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 006222b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006222b5: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x6222b8u); call_ind(t); }
    /* 006222b8: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006222be: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 006222c4: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006222ca: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 006222d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006222d2: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6222d5u); call_ind(t); }
    /* 006222d5: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006222db: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 006222e1: call 0x5e7b4b */ r_esp -= 4; W32(r_esp, 0x6222e6u); f_005e7b4b();
L_006222e6:; BB(0x006222e6);
    /* 006222e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006222e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006222e9: ret 4 */ FN_RET(0x00620ce4); r_esp += 8; return;
}

void f_006222ec(void) /* FUN_006222ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006222ec);
    /* 006222ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006222ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006222ef: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006222f2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006222f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006222f8: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x6222fdu); f_005e030e();
    /* 006222fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622304: jmp 0x62230f */ goto L_0062230f;
L_00622306:; BB(0x00622306);
    /* 00622306: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622309: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062230c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062230f:; BB(0x0062230f);
    /* 0062230f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622313: jge 0x622336 */ if ((fS==fO)) goto L_00622336;
L_00622315:; BB(0x00622315);
    /* 00622315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622318: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062231b: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00622322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622325: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622328: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0062232f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622331: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622334u); call_ind(t); }
    /* 00622334: jmp 0x622306 */ goto L_00622306;
L_00622336:; BB(0x00622336);
    /* 00622336: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622339: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0062233f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622340: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622343: call 0x62234c */ r_esp -= 4; W32(r_esp, 0x622348u); f_0062234c();
    /* 00622348: mov esp, ebp */ r_esp = r_ebp;
    /* 0062234a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062234b: ret  */ FN_RET(0x006222ec); r_esp += 4; return;
}

void f_0062234c(void) /* FUN_0062234c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062234c);
    /* 0062234c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062234d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062234f: sub esp, 0x408 */ {  u32 a = r_esp; u32 b = 0x408u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622355: mov dword ptr [ebp - 0x404], ecx */ W32((u32)(r_ebp+0xfffffbfcu), r_ecx);
    /* 0062235b: mov dword ptr [ebp - 0x400], 0x6f0e10 */ W32((u32)(r_ebp+0xfffffc00u), 0x6f0e10u);
    /* 00622365: mov dword ptr [ebp - 0x3fc], 0x6f0e70 */ W32((u32)(r_ebp+0xfffffc04u), 0x6f0e70u);
    /* 0062236f: mov dword ptr [ebp - 0x3f8], 0x6f0fb0 */ W32((u32)(r_ebp+0xfffffc08u), 0x6f0fb0u);
    /* 00622379: mov dword ptr [ebp - 0x3f4], 0x6f107c */ W32((u32)(r_ebp+0xfffffc0cu), 0x6f107cu);
    /* 00622383: mov dword ptr [ebp - 0x3f0], 0x6f1174 */ W32((u32)(r_ebp+0xfffffc10u), 0x6f1174u);
    /* 0062238d: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622393: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00622396: mov dword ptr [eax + 0x10c], ecx */ W32((u32)(r_eax+0x10cu), r_ecx);
    /* 0062239c: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006223a2: call 0x622a65 */ r_esp -= 4; W32(r_esp, 0x6223a7u); f_00622a65();
    /* 006223a7: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006223ad: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006223b3: mov dword ptr [ebp - 0x408], eax */ W32((u32)(r_ebp+0xfffffbf8u), r_eax);
    /* 006223b9: cmp dword ptr [ebp - 0x408], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006223c0: ja 0x622a4b */ if ((!fC&&!fZ)) goto L_00622a4b;
L_006223c6:; BB(0x006223c6);
    /* 006223c6: mov ecx, dword ptr [ebp - 0x408] */ r_ecx = R32((u32)(r_ebp+0xfffffbf8u));
    /* 006223cc: jmp dword ptr [ecx*4 + 0x622a51] */ { u32 t = R32((u32)(r_ecx*4+0x622a51u)); switch (t) { case 0x6223d3u: goto L_006223d3; case 0x6224e1u: goto L_006224e1; case 0x622658u: goto L_00622658; case 0x6227b2u: goto L_006227b2; case 0x6228efu: goto L_006228ef; default: UNSUP(0x006223cc, "jump table entry is not a known target"); } }
L_006223d3:; BB(0x006223d3);
    /* 006223d3: push 0x6f12c4 */ { u32 v = 0x6f12c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006223d8: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006223de: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 006223e4: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006223ea: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 006223f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006223f2: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6223f5u); call_ind(t); }
    /* 006223f5: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006223fb: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00622401: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622407: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062240d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062240f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622412u); call_ind(t); }
    /* 00622412: mov eax, dword ptr [ebp - 0x400] */ r_eax = R32((u32)(r_ebp+0xfffffc00u));
    /* 00622418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622419: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 0062241f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622420: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x622426u); call_ind(t); }
    /* 00622426: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622429: lea edx, [ebp - 0x3e8] */ r_edx = (u32)(r_ebp+0xfffffc18u);
    /* 0062242f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622430: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622436: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0062243c: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622442: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622448: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062244a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x62244du); call_ind(t); }
    /* 0062244d: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622453: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622459: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062245f: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622465: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622467: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62246au); call_ind(t); }
    /* 0062246a: push 0x435 */ { u32 v = 0x435u; r_esp -= 4; W32(r_esp, v); }
    /* 0062246f: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622475: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 0062247b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x622480u); f_005ea0c3();
    /* 00622480: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622486: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 0062248c: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622492: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00622498: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062249a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62249du); call_ind(t); }
    /* 0062249d: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224a3: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 006224a9: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224af: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 006224b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006224b7: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6224bau); call_ind(t); }
    /* 006224ba: push 0x6f12d0 */ { u32 v = 0x6f12d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006224bf: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224c5: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 006224cb: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224d1: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 006224d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006224d9: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x6224dcu); call_ind(t); }
    /* 006224dc: jmp 0x622a4b */ goto L_00622a4b;
L_006224e1:; BB(0x006224e1);
    /* 006224e1: push 0x6f12d8 */ { u32 v = 0x6f12d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006224e6: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224ec: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 006224f2: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006224f8: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006224fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622500: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x622503u); call_ind(t); }
    /* 00622503: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622509: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0062250f: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622515: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062251b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062251d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622520u); call_ind(t); }
    /* 00622520: mov eax, dword ptr [ebp - 0x3fc] */ r_eax = R32((u32)(r_ebp+0xfffffc04u));
    /* 00622526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622527: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 0062252d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062252e: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x622534u); call_ind(t); }
    /* 00622534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622537: lea edx, [ebp - 0x3e8] */ r_edx = (u32)(r_ebp+0xfffffc18u);
    /* 0062253d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062253e: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622544: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0062254a: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622550: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622556: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622558: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x62255bu); call_ind(t); }
    /* 0062255b: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622561: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622567: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062256d: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622573: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622575: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622578u); call_ind(t); }
    /* 00622578: push 0x432 */ { u32 v = 0x432u; r_esp -= 4; W32(r_esp, v); }
    /* 0062257d: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622583: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00622589: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x62258eu); f_005ea0c3();
    /* 0062258e: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622594: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 0062259a: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225a0: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006225a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006225a8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6225abu); call_ind(t); }
    /* 006225ab: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225b1: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 006225b7: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225bd: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 006225c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006225c5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6225c8u); call_ind(t); }
    /* 006225c8: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225ce: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 006225d4: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225da: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 006225e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006225e2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6225e5u); call_ind(t); }
    /* 006225e5: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225eb: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 006225f1: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006225f7: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 006225fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006225ff: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622602u); call_ind(t); }
    /* 00622602: mov dword ptr [ebp - 0x3ec], 0 */ W32((u32)(r_ebp+0xfffffc14u), 0x0u);
    /* 0062260c: jmp 0x62261d */ goto L_0062261d;
L_0062260e:; BB(0x0062260e);
    /* 0062260e: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 00622614: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622617: mov dword ptr [ebp - 0x3ec], eax */ W32((u32)(r_ebp+0xfffffc14u), r_eax);
L_0062261d:; BB(0x0062261d);
    /* 0062261d: cmp dword ptr [ebp - 0x3ec], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffc14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622624: jge 0x622653 */ if ((fS==fO)) goto L_00622653;
L_00622626:; BB(0x00622626);
    /* 00622626: mov ecx, dword ptr [ebp - 0x3ec] */ r_ecx = R32((u32)(r_ebp+0xfffffc14u));
    /* 0062262c: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622632: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 00622639: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 0062263f: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622645: mov eax, dword ptr [edx + eax*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe0u));
    /* 0062264c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062264e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622651u); call_ind(t); }
    /* 00622651: jmp 0x62260e */ goto L_0062260e;
L_00622653:; BB(0x00622653);
    /* 00622653: jmp 0x622a4b */ goto L_00622a4b;
L_00622658:; BB(0x00622658);
    /* 00622658: push 0x6f12e4 */ { u32 v = 0x6f12e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062265d: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622663: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00622669: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062266f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00622675: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622677: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x62267au); call_ind(t); }
    /* 0062267a: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622680: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00622686: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062268c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00622692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622694: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622697u); call_ind(t); }
    /* 00622697: mov eax, dword ptr [ebp - 0x3f8] */ r_eax = R32((u32)(r_ebp+0xfffffc08u));
    /* 0062269d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062269e: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 006226a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006226a5: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x6226abu); call_ind(t); }
    /* 006226ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006226ae: lea edx, [ebp - 0x3e8] */ r_edx = (u32)(r_ebp+0xfffffc18u);
    /* 006226b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006226b5: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006226bb: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 006226c1: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006226c7: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 006226cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006226cf: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x6226d2u); call_ind(t); }
    /* 006226d2: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006226d8: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 006226de: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006226e4: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 006226ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006226ec: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6226efu); call_ind(t); }
    /* 006226ef: push 0x4db */ { u32 v = 0x4dbu; r_esp -= 4; W32(r_esp, v); }
    /* 006226f4: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006226fa: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00622700: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x622705u); f_005ea0c3();
    /* 00622705: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062270b: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 00622711: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622717: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0062271d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062271f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622722u); call_ind(t); }
    /* 00622722: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622728: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0062272e: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622734: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0062273a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062273c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62273fu); call_ind(t); }
    /* 0062273f: mov dword ptr [ebp - 0x3ec], 0 */ W32((u32)(r_ebp+0xfffffc14u), 0x0u);
    /* 00622749: jmp 0x62275a */ goto L_0062275a;
L_0062274b:; BB(0x0062274b);
    /* 0062274b: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 00622751: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622754: mov dword ptr [ebp - 0x3ec], eax */ W32((u32)(r_ebp+0xfffffc14u), r_eax);
L_0062275a:; BB(0x0062275a);
    /* 0062275a: cmp dword ptr [ebp - 0x3ec], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffc14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622761: jge 0x622790 */ if ((fS==fO)) goto L_00622790;
L_00622763:; BB(0x00622763);
    /* 00622763: mov ecx, dword ptr [ebp - 0x3ec] */ r_ecx = R32((u32)(r_ebp+0xfffffc14u));
    /* 00622769: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062276f: mov ecx, dword ptr [edx + ecx*4 + 0xc4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc4u));
    /* 00622776: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 0062277c: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622782: mov eax, dword ptr [edx + eax*4 + 0xc4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xc4u));
    /* 00622789: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062278b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62278eu); call_ind(t); }
    /* 0062278e: jmp 0x62274b */ goto L_0062274b;
L_00622790:; BB(0x00622790);
    /* 00622790: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622796: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0062279c: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006227a2: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006227a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006227aa: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6227adu); call_ind(t); }
    /* 006227ad: jmp 0x622a4b */ goto L_00622a4b;
L_006227b2:; BB(0x006227b2);
    /* 006227b2: push 0x6f1300 */ { u32 v = 0x6f1300u; r_esp -= 4; W32(r_esp, v); }
    /* 006227b7: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006227bd: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 006227c3: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006227c9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006227cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006227d1: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x6227d4u); call_ind(t); }
    /* 006227d4: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006227da: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 006227e0: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006227e6: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006227ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006227ee: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6227f1u); call_ind(t); }
    /* 006227f1: mov eax, dword ptr [ebp - 0x3f4] */ r_eax = R32((u32)(r_ebp+0xfffffc0cu));
    /* 006227f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006227f8: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 006227fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006227ff: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x622805u); call_ind(t); }
    /* 00622805: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622808: lea edx, [ebp - 0x3e8] */ r_edx = (u32)(r_ebp+0xfffffc18u);
    /* 0062280e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062280f: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622815: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0062281b: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622821: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622827: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622829: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x62282cu); call_ind(t); }
    /* 0062282c: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622832: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622838: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062283e: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622844: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622846: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622849u); call_ind(t); }
    /* 00622849: push 0x433 */ { u32 v = 0x433u; r_esp -= 4; W32(r_esp, v); }
    /* 0062284e: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622854: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 0062285a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x62285fu); f_005ea0c3();
    /* 0062285f: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622865: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 0062286b: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622871: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00622877: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622879: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62287cu); call_ind(t); }
    /* 0062287c: mov dword ptr [ebp - 0x3ec], 2 */ W32((u32)(r_ebp+0xfffffc14u), 0x2u);
    /* 00622886: jmp 0x622897 */ goto L_00622897;
L_00622888:; BB(0x00622888);
    /* 00622888: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 0062288e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622891: mov dword ptr [ebp - 0x3ec], eax */ W32((u32)(r_ebp+0xfffffc14u), r_eax);
L_00622897:; BB(0x00622897);
    /* 00622897: cmp dword ptr [ebp - 0x3ec], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffc14u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062289e: jge 0x6228cd */ if ((fS==fO)) goto L_006228cd;
L_006228a0:; BB(0x006228a0);
    /* 006228a0: mov ecx, dword ptr [ebp - 0x3ec] */ r_ecx = R32((u32)(r_ebp+0xfffffc14u));
    /* 006228a6: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006228ac: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 006228b3: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
    /* 006228b9: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006228bf: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 006228c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006228c8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6228cbu); call_ind(t); }
    /* 006228cb: jmp 0x622888 */ goto L_00622888;
L_006228cd:; BB(0x006228cd);
    /* 006228cd: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006228d3: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 006228d9: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006228df: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006228e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006228e7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6228eau); call_ind(t); }
    /* 006228ea: jmp 0x622a4b */ goto L_00622a4b;
L_006228ef:; BB(0x006228ef);
    /* 006228ef: push 0x6f130c */ { u32 v = 0x6f130cu; r_esp -= 4; W32(r_esp, v); }
    /* 006228f4: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006228fa: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00622900: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622906: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062290c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062290e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x622911u); call_ind(t); }
    /* 00622911: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622917: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0062291d: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622923: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00622929: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062292b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x62292eu); call_ind(t); }
    /* 0062292e: mov eax, dword ptr [ebp - 0x3f0] */ r_eax = R32((u32)(r_ebp+0xfffffc10u));
    /* 00622934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622935: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 0062293b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062293c: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x622942u); call_ind(t); }
    /* 00622942: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622945: lea edx, [ebp - 0x3e8] */ r_edx = (u32)(r_ebp+0xfffffc18u);
    /* 0062294b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062294c: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622952: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622958: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062295e: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622964: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622966: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x622969u); call_ind(t); }
    /* 00622969: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062296f: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622975: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 0062297b: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622981: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622983: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x622986u); call_ind(t); }
    /* 00622986: push 0x436 */ { u32 v = 0x436u; r_esp -= 4; W32(r_esp, v); }
    /* 0062298b: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622991: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00622997: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x62299cu); f_005ea0c3();
    /* 0062299c: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229a2: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 006229a8: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229ae: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006229b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006229b6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6229b9u); call_ind(t); }
    /* 006229b9: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229bf: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 006229c5: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229cb: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 006229d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006229d3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6229d6u); call_ind(t); }
    /* 006229d6: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229dc: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 006229e2: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229e8: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 006229ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006229f0: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x6229f3u); call_ind(t); }
    /* 006229f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006229f5: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 006229fb: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00622a01: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x622a06u); f_005d65d6();
    /* 00622a06: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00622a08: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622a0e: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00622a14: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x622a19u); f_005d65d6();
    /* 00622a19: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a1b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a1f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a21: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622a27: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00622a2d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x622a32u); f_005d5ff2();
    /* 00622a32: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a34: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a3a: mov eax, dword ptr [ebp - 0x404] */ r_eax = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622a40: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00622a46: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x622a4bu); f_005d5ff2();
L_00622a4b:; BB(0x00622a4b);
    /* 00622a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00622a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622a4e: ret 4 */ FN_RET(0x0062234c); r_esp += 8; return;
}

void f_00622a65(void) /* FUN_00622a65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622a65);
    /* 00622a65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622a66: mov ebp, esp */ r_ebp = r_esp;
    /* 00622a68: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622a6b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00622a6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622a75: jmp 0x622a80 */ goto L_00622a80;
L_00622a77:; BB(0x00622a77);
    /* 00622a77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622a7a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622a80:; BB(0x00622a80);
    /* 00622a80: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622a84: jge 0x622aa7 */ if ((fS==fO)) goto L_00622aa7;
L_00622a86:; BB(0x00622a86);
    /* 00622a86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622a89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622a8c: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00622a93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622a96: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622a99: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 00622aa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622aa2: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622aa5u); call_ind(t); }
    /* 00622aa5: jmp 0x622a77 */ goto L_00622a77;
L_00622aa7:; BB(0x00622aa7);
    /* 00622aa7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622aae: jmp 0x622ab9 */ goto L_00622ab9;
L_00622ab0:; BB(0x00622ab0);
    /* 00622ab0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622ab3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622ab6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622ab9:; BB(0x00622ab9);
    /* 00622ab9: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622abd: jge 0x622ae0 */ if ((fS==fO)) goto L_00622ae0;
L_00622abf:; BB(0x00622abf);
    /* 00622abf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622ac2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ac5: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 00622acc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622acf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ad2: mov eax, dword ptr [edx + eax*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_eax*4+0xe0u));
    /* 00622ad9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622adb: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622adeu); call_ind(t); }
    /* 00622ade: jmp 0x622ab0 */ goto L_00622ab0;
L_00622ae0:; BB(0x00622ae0);
    /* 00622ae0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622ae7: jmp 0x622af2 */ goto L_00622af2;
L_00622ae9:; BB(0x00622ae9);
    /* 00622ae9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622aec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622aef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622af2:; BB(0x00622af2);
    /* 00622af2: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622af6: jge 0x622b19 */ if ((fS==fO)) goto L_00622b19;
L_00622af8:; BB(0x00622af8);
    /* 00622af8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622afb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622afe: mov ecx, dword ptr [edx + ecx*4 + 0xc4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc4u));
    /* 00622b05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622b08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b0b: mov eax, dword ptr [edx + eax*4 + 0xc4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xc4u));
    /* 00622b12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b14: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b17u); call_ind(t); }
    /* 00622b17: jmp 0x622ae9 */ goto L_00622ae9;
L_00622b19:; BB(0x00622b19);
    /* 00622b19: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b1c: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00622b22: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b25: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00622b2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b2d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b30u); call_ind(t); }
    /* 00622b30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b33: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00622b39: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b3c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00622b42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b44: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b47u); call_ind(t); }
    /* 00622b47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b4a: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00622b50: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b53: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00622b59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b5b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b5eu); call_ind(t); }
    /* 00622b5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b61: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00622b67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b6a: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00622b70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b72: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b75u); call_ind(t); }
    /* 00622b75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b78: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 00622b7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b81: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00622b87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622b89: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622b8cu); call_ind(t); }
    /* 00622b8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b8f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00622b95: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622b98: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00622b9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622ba0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622ba3u); call_ind(t); }
    /* 00622ba3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ba6: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00622bac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622baf: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00622bb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622bb7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622bbau); call_ind(t); }
    /* 00622bba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622bbd: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00622bc3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622bc6: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00622bcc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622bce: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x622bd1u); call_ind(t); }
    /* 00622bd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622bd4: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00622bda: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622bdd: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00622be3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622be5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x622be8u); call_ind(t); }
    /* 00622be8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622beb: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00622bf1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622bf4: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00622bfa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622bfc: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x622bffu); call_ind(t); }
    /* 00622bff: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00622c01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c04: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00622c0a: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x622c0fu); f_005d65d6();
    /* 00622c0f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c11: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c13: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c1a: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00622c20: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x622c25u); f_005d5ff2();
    /* 00622c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c2a: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00622c30: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x622c35u); f_005d65d6();
    /* 00622c35: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c37: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c3d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c40: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00622c46: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x622c4bu); f_005d5ff2();
    /* 00622c4b: push 0x6f1324 */ { u32 v = 0x6f1324u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c53: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00622c59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c5c: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00622c62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622c64: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x622c67u); call_ind(t); }
    /* 00622c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00622c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622c6a: ret  */ FN_RET(0x00622a65); r_esp += 4; return;
}

void f_00622c6b(void) /* FUN_00622c6b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622c6b);
    /* 00622c6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622c6c: mov ebp, esp */ r_ebp = r_esp;
    /* 00622c6e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622c71: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00622c74: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622c7b: jne 0x622cdf */ if (!fZ) goto L_00622cdf;
L_00622c7d:; BB(0x00622c7d);
    /* 00622c7d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c80: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00622c86: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x622c8bu); f_005d71b9();
    /* 00622c8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c8e: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00622c94: mov byte ptr [edx + 0x6c], al */ W8((u32)(r_edx+0x6cu), (u8)r_eax);
    /* 00622c97: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622c9a: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00622ca0: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x622ca5u); f_005d71b9();
    /* 00622ca5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ca8: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00622cae: mov byte ptr [edx + 0x6f], al */ W8((u32)(r_edx+0x6fu), (u8)r_eax);
    /* 00622cb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622cb4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00622cba: call 0x5e7beb */ r_esp -= 4; W32(r_esp, 0x622cbfu); f_005e7beb();
    /* 00622cbf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00622cc2: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 00622cc5: fdiv qword ptr [0x63cf28] */ ST(0) = ST(0) / R_F64((u32)(0x63cf28u));
    /* 00622ccb: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x622cd0u); f_00624144();
    /* 00622cd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622cd3: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00622cd9: mov byte ptr [edx + 0x80], al */ W8((u32)(r_edx+0x80u), (u8)r_eax);
L_00622cdf:; BB(0x00622cdf);
    /* 00622cdf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ce2: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00622ce8: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x622cedu); f_005d71b9();
    /* 00622ced: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00622cef: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00622cf1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622cf2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622cf5: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00622cfb: mov byte ptr [edx + 0x92], al */ W8((u32)(r_edx+0x92u), (u8)r_eax);
    /* 00622d01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d04: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00622d0a: call 0x5e7beb */ r_esp -= 4; W32(r_esp, 0x622d0fu); f_005e7beb();
    /* 00622d0f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00622d10: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 00622d15: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00622d15, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00622d15, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00622d17: mov edx, 0xa */ r_edx = 0xau;
    /* 00622d1c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622d1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d21: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00622d27: mov byte ptr [ecx + 0x70], dl */ W8((u32)(r_ecx+0x70u), (u8)r_edx);
    /* 00622d2a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00622d31: jmp 0x622d3c */ goto L_00622d3c;
L_00622d33:; BB(0x00622d33);
    /* 00622d33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622d39: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00622d3c:; BB(0x00622d3c);
    /* 00622d3c: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622d40: jge 0x622d69 */ if ((fS==fO)) goto L_00622d69;
L_00622d42:; BB(0x00622d42);
    /* 00622d42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d48: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 00622d4f: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x622d54u); f_005d71b9();
    /* 00622d54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d57: mov ecx, dword ptr [edx + 0xf8] */ r_ecx = R32((u32)(r_edx+0xf8u));
    /* 00622d5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d60: mov byte ptr [ecx + edx + 0x80], al */ W8((u32)(r_ecx+r_edx+0x80u), (u8)r_eax);
    /* 00622d67: jmp 0x622d33 */ goto L_00622d33;
L_00622d69:; BB(0x00622d69);
    /* 00622d69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d6c: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00622d72: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00622d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622d77: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00622d7d: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x622d82u); f_0045c8df();
    /* 00622d82: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00622d87: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00622d8a: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00622d90: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00622d93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622d95: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x622d98u); call_ind(t); }
    /* 00622d98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622d9a: je 0x622dc3 */ if (fZ) goto L_00622dc3;
L_00622d9c:; BB(0x00622d9c);
    /* 00622d9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d9f: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00622da5: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00622da9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622dab: jne 0x622dc3 */ if (!fZ) goto L_00622dc3;
L_00622dad:; BB(0x00622dad);
    /* 00622dad: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00622db2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00622db5: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00622dbb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00622dbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622dc0: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x622dc3u); call_ind(t); }
L_00622dc3:; BB(0x00622dc3);
    /* 00622dc3: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00622dc8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00622dcb: call 0x449d6c */ r_esp -= 4; W32(r_esp, 0x622dd0u); f_00449d6c();
    /* 00622dd0: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622dd7: je 0x622e08 */ if (fZ) goto L_00622e08;
L_00622dd9:; BB(0x00622dd9);
    /* 00622dd9: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00622ddf: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x622de4u); f_005e078a();
    /* 00622de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622de6: je 0x622e08 */ if (fZ) goto L_00622e08;
L_00622de8:; BB(0x00622de8);
    /* 00622de8: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00622dee: call 0x48645d */ r_esp -= 4; W32(r_esp, 0x622df3u); f_0048645d();
    /* 00622df3: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00622df9: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x622dfeu); f_005e0a55();
    /* 00622dfe: mov dword ptr [0x6f6a18], 0 */ W32((u32)(0x6f6a18u), 0x0u);
L_00622e08:; BB(0x00622e08);
    /* 00622e08: mov esp, ebp */ r_esp = r_ebp;
    /* 00622e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622e0b: ret  */ FN_RET(0x00622c6b); r_esp += 4; return;
}

void f_00622e0c(void) /* FUN_00622e0c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622e0c);
    /* 00622e0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622e0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00622e0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e16: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x622e1bu); f_005d5d20();
    /* 00622e1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e1e: mov dword ptr [eax], 0x63cf34 */ W32((u32)(r_eax), 0x63cf34u);
    /* 00622e24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00622e2a: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00622e30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e33: mov esp, ebp */ r_esp = r_ebp;
    /* 00622e35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622e36: ret 4 */ FN_RET(0x00622e0c); r_esp += 8; return;
}

void f_00622e39(void) /* FUN_00622e39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622e39);
    /* 00622e39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622e3a: mov ebp, esp */ r_ebp = r_esp;
    /* 00622e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622e40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e43: mov dword ptr [eax], 0x63cf34 */ W32((u32)(r_eax), 0x63cf34u);
    /* 00622e49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e4c: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x622e51u); f_005d5dfb();
    /* 00622e51: mov esp, ebp */ r_esp = r_ebp;
    /* 00622e53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622e54: ret  */ FN_RET(0x00622e39); r_esp += 4; return;
}

void f_00622e55(void) /* FUN_00622e55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622e55);
    /* 00622e55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622e56: mov ebp, esp */ r_ebp = r_esp;
    /* 00622e58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622e5b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622e5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622e61: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00622e67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00622e6a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622e6e: je 0x622e7e */ if (fZ) goto L_00622e7e;
L_00622e70:; BB(0x00622e70);
    /* 00622e70: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622e74: je 0x622e9b */ if (fZ) goto L_00622e9b;
L_00622e76:; BB(0x00622e76);
    /* 00622e76: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622e7a: je 0x622eb8 */ if (fZ) goto L_00622eb8;
L_00622e7c:; BB(0x00622e7c);
    /* 00622e7c: jmp 0x622eed */ goto L_00622eed;
L_00622e7e:; BB(0x00622e7e);
    /* 00622e7e: mov edx, dword ptr [0x6f6a28] */ r_edx = R32((u32)(0x6f6a28u));
    /* 00622e84: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00622e8a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00622e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e8e: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00622e94: call 0x62234c */ r_esp -= 4; W32(r_esp, 0x622e99u); f_0062234c();
    /* 00622e99: jmp 0x622eed */ goto L_00622eed;
L_00622e9b:; BB(0x00622e9b);
    /* 00622e9b: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00622ea1: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00622ea7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622eab: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00622eb1: call 0x62234c */ r_esp -= 4; W32(r_esp, 0x622eb6u); f_0062234c();
    /* 00622eb6: jmp 0x622eed */ goto L_00622eed;
L_00622eb8:; BB(0x00622eb8);
    /* 00622eb8: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00622ebe: call 0x622c6b */ r_esp -= 4; W32(r_esp, 0x622ec3u); f_00622c6b();
    /* 00622ec3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622ec5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622ec8: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x622ecdu); f_005d6635();
    /* 00622ecd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622ed0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00622ed3: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x622ed8u); f_005e03cc();
    /* 00622ed8: mov ecx, dword ptr [0x6f6a28] */ r_ecx = R32((u32)(0x6f6a28u));
    /* 00622ede: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x622ee3u); f_005e0a55();
    /* 00622ee3: mov dword ptr [0x6f6a28], 0 */ W32((u32)(0x6f6a28u), 0x0u);
L_00622eed:; BB(0x00622eed);
    /* 00622eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00622eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622ef0: ret  */ FN_RET(0x00622e55); r_esp += 4; return;
}

void f_00622ef1(void) /* FUN_00622ef1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622ef1);
    /* 00622ef1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622ef2: mov ebp, esp */ r_ebp = r_esp;
    /* 00622ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622ef5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622ef8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622efb: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x622f00u); f_005d5d20();
    /* 00622f00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f03: mov dword ptr [eax], 0x63cfa4 */ W32((u32)(r_eax), 0x63cfa4u);
    /* 00622f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00622f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622f0f: ret  */ FN_RET(0x00622ef1); r_esp += 4; return;
}

void f_00622f10(void) /* FUN_00622f10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622f10);
    /* 00622f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00622f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622f17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f1a: mov dword ptr [eax], 0x63cfa4 */ W32((u32)(r_eax), 0x63cfa4u);
    /* 00622f20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f23: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x622f28u); f_005d5dfb();
    /* 00622f28: mov esp, ebp */ r_esp = r_ebp;
    /* 00622f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622f2b: ret  */ FN_RET(0x00622f10); r_esp += 4; return;
}

void f_00622f2c(void) /* FUN_00622f2c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622f2c);
    /* 00622f2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622f2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00622f2f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622f32: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00622f35: push 0x6f132c */ { u32 v = 0x6f132cu; r_esp -= 4; W32(r_esp, v); }
    /* 00622f3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622f3d: call 0x5d6977 */ r_esp -= 4; W32(r_esp, 0x622f42u); f_005d6977();
    /* 00622f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622f43: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x622f48u); f_006240c0();
    /* 00622f48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622f4d: jne 0x622fa0 */ if (!fZ) goto L_00622fa0;
L_00622f4f:; BB(0x00622f4f);
    /* 00622f4f: push 0x6f1334 */ { u32 v = 0x6f1334u; r_esp -= 4; W32(r_esp, v); }
    /* 00622f54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622f57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622f59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622f5c: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x622f5fu); call_ind(t); }
    /* 00622f5f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00622f66: jmp 0x622f71 */ goto L_00622f71;
L_00622f68:; BB(0x00622f68);
    /* 00622f68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622f6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622f71:; BB(0x00622f71);
    /* 00622f71: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622f75: jge 0x622f9e */ if ((fS==fO)) goto L_00622f9e;
L_00622f77:; BB(0x00622f77);
    /* 00622f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f7a: mov edx, dword ptr [0x6f6a28] */ r_edx = R32((u32)(0x6f6a28u));
    /* 00622f80: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00622f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622f8a: mov edx, dword ptr [0x6f6a28] */ r_edx = R32((u32)(0x6f6a28u));
    /* 00622f90: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 00622f97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622f99: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x622f9cu); call_ind(t); }
    /* 00622f9c: jmp 0x622f68 */ goto L_00622f68;
L_00622f9e:; BB(0x00622f9e);
    /* 00622f9e: jmp 0x622fef */ goto L_00622fef;
L_00622fa0:; BB(0x00622fa0);
    /* 00622fa0: push 0x6f133c */ { u32 v = 0x6f133cu; r_esp -= 4; W32(r_esp, v); }
    /* 00622fa5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622fa8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622faa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622fad: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x622fb0u); call_ind(t); }
    /* 00622fb0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00622fb7: jmp 0x622fc2 */ goto L_00622fc2;
L_00622fb9:; BB(0x00622fb9);
    /* 00622fb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622fbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622fbf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622fc2:; BB(0x00622fc2);
    /* 00622fc2: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622fc6: jge 0x622fef */ if ((fS==fO)) goto L_00622fef;
L_00622fc8:; BB(0x00622fc8);
    /* 00622fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622fcb: mov edx, dword ptr [0x6f6a28] */ r_edx = R32((u32)(0x6f6a28u));
    /* 00622fd1: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 00622fd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622fdb: mov edx, dword ptr [0x6f6a28] */ r_edx = R32((u32)(0x6f6a28u));
    /* 00622fe1: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 00622fe8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00622fea: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x622fedu); call_ind(t); }
    /* 00622fed: jmp 0x622fb9 */ goto L_00622fb9;
L_00622fef:; BB(0x00622fef);
    /* 00622fef: mov esp, ebp */ r_esp = r_ebp;
    /* 00622ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622ff2: ret  */ FN_RET(0x00622f2c); r_esp += 4; return;
}

void f_00623000(void) /* FUN_00623000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623000);
    /* 00623000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623001: mov ebp, esp */ r_ebp = r_esp;
    /* 00623003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00623007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062300a: call 0x6208ac */ r_esp -= 4; W32(r_esp, 0x62300fu); f_006208ac();
    /* 0062300f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00623012: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00623017: je 0x623025 */ if (fZ) goto L_00623025;
L_00623019:; BB(0x00623019);
    /* 00623019: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062301c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062301d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x623022u); f_0048ac1b();
    /* 00623022: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00623025:; BB(0x00623025);
    /* 00623025: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623028: mov esp, ebp */ r_esp = r_ebp;
    /* 0062302a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062302b: ret 4 */ FN_RET(0x00623000); r_esp += 8; return;
}

