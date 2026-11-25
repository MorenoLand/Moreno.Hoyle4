#include "protos.h"

void f_004247c0(void) /* _Order_node_base<Concurrency::agent_status> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004247c0);
    /* 004247c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004247c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004247c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004247c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004247c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247ca: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x4247cfu); f_005d4d90();
    /* 004247cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247d2: mov dword ptr [eax], 0x63406c */ W32((u32)(r_eax), 0x63406cu);
    /* 004247d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247db: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 004247e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247e8: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 004247f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247f5: mov dword ptr [eax + 0x8c], 1 */ W32((u32)(r_eax+0x8cu), 0x1u);
    /* 004247ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424802: mov dword ptr [ecx + 0x90], 1 */ W32((u32)(r_ecx+0x90u), 0x1u);
    /* 0042480c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042480f: mov esp, ebp */ r_esp = r_ebp;
    /* 00424811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424812: ret  */ FN_RET(0x004247c0); r_esp += 4; return;
}

