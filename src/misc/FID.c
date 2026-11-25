#include "protos.h"

void f_0043e583(void) /* FID_conflict:evaluation_error */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043e583);
    /* 0043e583: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e584: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e587: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043e58a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e58e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e591: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x43e596u); f_005d7b34();
    /* 0043e596: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e599: mov dword ptr [ecx], 0x634abc */ W32((u32)(r_ecx), 0x634abcu);
    /* 0043e59f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e5a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e5a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e5a5: ret 4 */ FN_RET(0x0043e583); r_esp += 8; return;
}

void f_00472c88(void) /* FID_conflict:evaluation_error */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472c88);
    /* 00472c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472c89: mov ebp, esp */ r_ebp = r_esp;
    /* 00472c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472c8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472c8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472c93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472c96: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x472c9bu); f_005d7b34();
    /* 00472c9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472c9e: mov dword ptr [ecx], 0x63612c */ W32((u32)(r_ecx), 0x63612cu);
    /* 00472ca4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472ca7: mov esp, ebp */ r_esp = r_ebp;
    /* 00472ca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472caa: ret 4 */ FN_RET(0x00472c88); r_esp += 8; return;
}

void f_005bfd12(void) /* FID_conflict:evaluation_error */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd12);
    /* 005bfd12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd13: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfd19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfd1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd20: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x5bfd25u); f_005d7b34();
    /* 005bfd25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd28: mov dword ptr [ecx], 0x639e84 */ W32((u32)(r_ecx), 0x639e84u);
    /* 005bfd2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd31: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfd33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfd34: ret 4 */ FN_RET(0x005bfd12); r_esp += 8; return;
}

void f_0061a9e9(void) /* FID_conflict:evaluation_error */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a9e9);
    /* 0061a9e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9ea: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a9ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a9f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061a9f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a9f7: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x61a9fcu); f_005d7b34();
    /* 0061a9fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a9ff: mov dword ptr [ecx], 0x63cbf4 */ W32((u32)(r_ecx), 0x63cbf4u);
    /* 0061aa05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aa08: mov esp, ebp */ r_esp = r_ebp;
    /* 0061aa0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061aa0b: ret 4 */ FN_RET(0x0061a9e9); r_esp += 8; return;
}

