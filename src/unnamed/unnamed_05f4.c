#include "protos.h"

void f_005f41fe(void) /* GetScheduler */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f41fe);
    /* 005f41fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f41ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4202: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4205: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4208: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f420b: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x5f4210u); f_005d65b7();
    /* 005f4210: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4212: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4213: ret  */ FN_RET(0x005f41fe); r_esp += 4; return;
}

