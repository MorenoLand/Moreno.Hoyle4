#include "protos.h"

void f_0062b602(void) /* __local_unwind2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b602);
    /* 0062b602: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b603: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b604: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b605: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062b609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b60a: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b60c: push 0x62b5e0 */ { u32 v = 0x62b5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b611: push dword ptr fs:[0] */ { u32 v = R32((u32)(TEB)); r_esp -= 4; W32(r_esp, v); }
    /* 0062b618: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
L_0062b61f:; BB(0x0062b61f);
    /* 0062b61f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0062b623: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0062b626: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0062b629: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b62c: je 0x62b65c */ if (fZ) goto L_0062b65c;
L_0062b62e:; BB(0x0062b62e);
    /* 0062b62e: cmp esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b632: je 0x62b65c */ if (fZ) goto L_0062b65c;
L_0062b634:; BB(0x0062b634);
    /* 0062b634: lea esi, [esi + esi*2] */ r_esi = (u32)(r_esi+r_esi*2);
    /* 0062b637: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 0062b63a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0062b63e: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0062b641: cmp dword ptr [ebx + esi*4 + 4], 0 */ {  u32 a = R32((u32)(r_ebx+r_esi*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b646: jne 0x62b65a */ if (!fZ) goto L_0062b65a;
L_0062b648:; BB(0x0062b648);
    /* 0062b648: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b64d: mov eax, dword ptr [ebx + esi*4 + 8] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x8u));
    /* 0062b651: call 0x62b696 */ r_esp -= 4; W32(r_esp, 0x62b656u); f_0062b696();
    /* 0062b656: call dword ptr [ebx + esi*4 + 8] */ { u32 t = R32((u32)(r_ebx+r_esi*4+0x8u)); r_esp -= 4; W32(r_esp, 0x62b65au); call_ind(t); }
L_0062b65a:; BB(0x0062b65a);
    /* 0062b65a: jmp 0x62b61f */ goto L_0062b61f;
L_0062b65c:; BB(0x0062b65c);
    /* 0062b65c: pop dword ptr fs:[0] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(TEB), v); }
    /* 0062b663: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062b667: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b668: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062b669: ret  */ FN_RET(0x0062b602); r_esp += 4; return;
}

