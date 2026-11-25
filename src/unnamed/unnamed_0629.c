#include "protos.h"

void f_00629710(void) /* __exit */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629710);
    /* 00629710: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00629714: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629716: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629719: call 0x629730 */ r_esp -= 4; W32(r_esp, 0x62971eu); f_00629730();
    /* 0062971e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629721: ret  */ FN_RET(0x00629710); r_esp += 4; return;
}

