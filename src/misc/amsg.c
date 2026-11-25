#include "protos.h"

void f_00627150(void) /* __amsg_exit */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627150);
    /* 00627150: cmp dword ptr [0x711338], 1 */ {  u32 a = R32((u32)(0x711338u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627157: jne 0x62715e */ if (!fZ) goto L_0062715e;
L_00627159:; BB(0x00627159);
    /* 00627159: call 0x62e970 */ r_esp -= 4; W32(r_esp, 0x62715eu); f_0062e970();
L_0062715e:; BB(0x0062715e);
    /* 0062715e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00627162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627163: call 0x62e9b0 */ r_esp -= 4; W32(r_esp, 0x627168u); f_0062e9b0();
    /* 00627168: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062716b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00627170: call dword ptr [0x6f232c] */ { u32 t = R32((u32)(0x6f232cu)); r_esp -= 4; W32(r_esp, 0x627176u); call_ind(t); }
    /* 00627176: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627179: ret  */ FN_RET(0x00627150); r_esp += 4; return;
}

