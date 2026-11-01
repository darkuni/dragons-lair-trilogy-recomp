#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_80044A60
void f_80044A60(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF8AF8u,c->r[3]); // 80044A60
  return; // 80044A64
}

// fn_80044A70
void f_80044A70(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF8AFCu,c->r[3]); // 80044A70
  return; // 80044A74
}

// OSSetArenaHi
void f_80044A80(Ctx* __restrict c) {
  trace_call(0x80044A80u);
  W32(c->r[13]+0xFFFF8AF8u,c->r[3]); // 80044A80
  return; // 80044A84
}

// fn_80044A90
void f_80044A90(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF80E8u,c->r[3]); // 80044A90
  return; // 80044A94
}

// fn_80044AA0
void f_80044AA0(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF80ECu,c->r[3]); // 80044AA0
  return; // 80044AA4
}

// OSSetArenaLo
void f_80044AB0(Ctx* __restrict c) {
  trace_call(0x80044AB0u);
  W32(c->r[13]+0xFFFF80E8u,c->r[3]); // 80044AB0
  return; // 80044AB4
}

// OSAllocFromMEM1ArenaLo
void f_80044AC0(Ctx* __restrict c) {
  trace_call(0x80044AC0u);
  c->r[0]=R32(c->r[13]+0xFFFF80E8u); // 80044AC0
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80044AC4
  c->r[6]=~(c->r[5]|c->r[5]); // 80044AC8
  c->r[5]=c->r[4]+c->r[0]; // 80044ACC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80044AD0
  c->r[0]=c->r[6]&c->r[0]; // 80044AD4
  c->r[3]=c->r[0]+c->r[3]; // 80044AD8
  c->r[4]=c->r[3]+c->r[4]; // 80044ADC
  c->r[3]=c->r[0]|c->r[0]; // 80044AE0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80044AE4
  c->r[0]=c->r[6]&c->r[0]; // 80044AE8
  W32(c->r[13]+0xFFFF80E8u,c->r[0]); // 80044AEC
  return; // 80044AF0
}

// __AIClockInit
void f_80044B00(Ctx* __restrict c) {
  trace_call(0x80044B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044B00
  c->r[0]=c->lr; // 80044B04
  c->r[4]=0u+0xCD800000u; // 80044B08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044B0C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 80044B10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80044B14
  c->r[31]=c->r[3]|c->r[3]; // 80044B18
  W32(c->r[1]+0x00000018u,c->r[30]); // 80044B1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80044B20
  W32(c->r[1]+0x00000010u,c->r[28]); // 80044B24
  c->r[5]=R32(c->r[4]+0x00000180u); // 80044B28
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 80044B2C
  c->r[5]=c->r[5]|c->r[0]; // 80044B30
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 80044B34
  W32(c->r[4]+0x00000180u,c->r[0]); // 80044B38
  c->r[0]=R32(c->r[4]+0x000001D0u); // 80044B3C
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 80044B40
  W32(c->r[4]+0x000001D0u,c->r[0]); // 80044B44
  c->lr=0x80044B4Cu; f_8004DAC0(c); // 80044B48
  c->r[4]=0u+0x431C0000u; // 80044B4C
  c->r[28]=c->r[3]|c->r[3]; // 80044B50
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80044B54
  c->r[29]=0u+0x80000000u; // 80044B58
L_80044B5C:;
  c->lr=0x80044B60u; f_8004DAC0(c); // 80044B5C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80044B60
  c->r[3]=c->r[3]-c->r[28]; // 80044B64
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80044B68
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80044B6C
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80044B70
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80044B74
  c->r[0]=divwu(c->r[3],c->r[0]); // 80044B78
  cmpu(c,0,c->r[0],0x00000064u); // 80044B7C
  if (crb(c,0)) { IRQCHK(c); goto L_80044B5C; } // 80044B80
  cmps(c,0,(int32_t)c->r[31],0); // 80044B84
  if (!crb(c,2)) { goto L_80044BB4; } // 80044B88
  c->r[4]=0u+0xCD800000u; // 80044B8C
  c->r[3]=0u+0xF8040000u; // 80044B90
  c->r[5]=R32(c->r[4]+0x000001CCu); // 80044B94
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 80044B98
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 80044B9C
  c->r[3]=c->r[3]|0x00000FC0u; // 80044BA0
  c->r[0]=c->r[3]&c->r[0]; // 80044BA4
  c->r[0]=c->r[0]|0x04640000u; // 80044BA8
  W32(c->r[4]+0x000001CCu,c->r[0]); // 80044BAC
  goto L_80044BD8; // 80044BB0
L_80044BB4:;
  c->r[3]=0u+0xCD800000u; // 80044BB4
  c->r[0]=R32(c->r[3]+0x000001CCu); // 80044BB8
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 80044BBC
  c->r[0]=c->r[0]|0x0000FFC0u; // 80044BC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 80044BC4
  c->r[0]=c->r[0]|0x0000000Eu; // 80044BC8
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 80044BCC
  c->r[0]=c->r[0]|0x04B00000u; // 80044BD0
  W32(c->r[3]+0x000001CCu,c->r[0]); // 80044BD4
L_80044BD8:;
  c->lr=0x80044BDCu; f_8004DAC0(c); // 80044BD8
  c->r[4]=0u+0x431C0000u; // 80044BDC
  c->r[31]=c->r[3]|c->r[3]; // 80044BE0
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80044BE4
  c->r[29]=0u+0x80000000u; // 80044BE8
L_80044BEC:;
  c->lr=0x80044BF0u; f_8004DAC0(c); // 80044BEC
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80044BF0
  c->r[3]=c->r[3]-c->r[31]; // 80044BF4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80044BF8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80044BFC
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80044C00
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80044C04
  c->r[0]=divwu(c->r[3],c->r[0]); // 80044C08
  cmpu(c,0,c->r[0],0x00000064u); // 80044C0C
  if (crb(c,0)) { IRQCHK(c); goto L_80044BEC; } // 80044C10
  c->r[3]=0u+0xCD800000u; // 80044C14
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80044C18
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80044C1C
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80044C20
  c->lr=0x80044C28u; f_8004DAC0(c); // 80044C24
  c->r[4]=0u+0x431C0000u; // 80044C28
  c->r[31]=c->r[3]|c->r[3]; // 80044C2C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80044C30
  c->r[29]=0u+0x80000000u; // 80044C34
L_80044C38:;
  c->lr=0x80044C3Cu; f_8004DAC0(c); // 80044C38
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80044C3C
  c->r[3]=c->r[3]-c->r[31]; // 80044C40
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80044C44
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80044C48
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80044C4C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80044C50
  c->r[0]=divwu(c->r[3],c->r[0]); // 80044C54
  cmpu(c,0,c->r[0],0x000003E8u); // 80044C58
  if (crb(c,0)) { IRQCHK(c); goto L_80044C38; } // 80044C5C
  c->r[3]=0u+0xCD800000u; // 80044C60
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80044C64
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80044C68
  c->r[0]=c->r[0]|0x40000000u; // 80044C6C
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80044C70
  c->lr=0x80044C78u; f_8004DAC0(c); // 80044C74
  c->r[4]=0u+0x431C0000u; // 80044C78
  c->r[31]=c->r[3]|c->r[3]; // 80044C7C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80044C80
  c->r[29]=0u+0x80000000u; // 80044C84
L_80044C88:;
  c->lr=0x80044C8Cu; f_8004DAC0(c); // 80044C88
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80044C8C
  c->r[3]=c->r[3]-c->r[31]; // 80044C90
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80044C94
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80044C98
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80044C9C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80044CA0
  c->r[0]=divwu(c->r[3],c->r[0]); // 80044CA4
  cmpu(c,0,c->r[0],0x000003E8u); // 80044CA8
  if (crb(c,0)) { IRQCHK(c); goto L_80044C88; } // 80044CAC
  c->r[3]=0u+0xCD800000u; // 80044CB0
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80044CB4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80044CB8
  c->r[0]=c->r[0]|0x80000000u; // 80044CBC
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80044CC0
  c->lr=0x80044CC8u; f_8004DAC0(c); // 80044CC4
  c->r[4]=0u+0x431C0000u; // 80044CC8
  c->r[29]=c->r[3]|c->r[3]; // 80044CCC
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80044CD0
  c->r[31]=0u+0x80000000u; // 80044CD4
L_80044CD8:;
  c->lr=0x80044CDCu; f_8004DAC0(c); // 80044CD8
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80044CDC
  c->r[3]=c->r[3]-c->r[29]; // 80044CE0
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80044CE4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80044CE8
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80044CEC
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80044CF0
  c->r[0]=divwu(c->r[3],c->r[0]); // 80044CF4
  cmpu(c,0,c->r[0],0x000003E8u); // 80044CF8
  if (crb(c,0)) { IRQCHK(c); goto L_80044CD8; } // 80044CFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044D00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80044D04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80044D08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80044D0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80044D10
  c->lr=c->r[0]; // 80044D14
  c->r[1]=c->r[1]+0x00000020u; // 80044D18
  return; // 80044D1C
}

// __OSInitAudioSystem
void f_80044D20(Ctx* __restrict c) {
  stub_log(0x80044D20u);  return;
}

// __OSStopAudioSystem
void f_80044EF0(Ctx* __restrict c) {
  trace_call(0x80044EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044EF0
  c->r[0]=c->lr; // 80044EF4
  c->r[3]=0u+0xCC000000u; // 80044EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044EFC
  c->r[0]=0u+0x00000804u; // 80044F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044F04
  W16(c->r[3]+0x0000500Au,c->r[0]); // 80044F08
  c->r[0]=R16(c->r[3]+0x00005036u); // 80044F0C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 80044F10
  W16(c->r[3]+0x00005036u,c->r[0]); // 80044F14
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F18
  goto L_80044F24; // 80044F1C
L_80044F20:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F20
L_80044F24:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80044F24
  if (!crb(c,2)) { IRQCHK(c); goto L_80044F20; } // 80044F28
  c->r[3]=0u+0xCC000000u; // 80044F2C
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F30
  goto L_80044F3C; // 80044F34
L_80044F38:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F38
L_80044F3C:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80044F3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80044F38; } // 80044F40
  c->r[4]=0u+0xCC000000u; // 80044F44
  c->r[0]=0u+0x000008ACu; // 80044F48
  W16(c->r[4]+0x0000500Au,c->r[0]); // 80044F4C
  c->r[0]=0u+0x00000000u; // 80044F50
  W16(c->r[4]+0x00005000u,c->r[0]); // 80044F54
L_80044F58:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 80044F58
  c->r[0]=R16(c->r[4]+0x00005006u); // 80044F5C
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 80044F60
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80044F64
  if (!crb(c,2)) { IRQCHK(c); goto L_80044F58; } // 80044F68
  c->lr=0x80044F70u; f_8004DAC0(c); // 80044F6C
  c->r[31]=c->r[3]|c->r[3]; // 80044F70
L_80044F74:;
  c->lr=0x80044F78u; f_8004DAC0(c); // 80044F74
  c->r[0]=c->r[3]-c->r[31]; // 80044F78
  cmps(c,0,(int32_t)c->r[0],44); // 80044F7C
  if (crb(c,0)) { IRQCHK(c); goto L_80044F74; } // 80044F80
  c->r[3]=0u+0xCC000000u; // 80044F84
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F88
  c->r[0]=c->r[0]|0x00000001u; // 80044F8C
  W16(c->r[3]+0x0000500Au,c->r[0]); // 80044F90
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044F94
  goto L_80044FA4; // 80044F98
  c->r[0]=c->r[0]|0x00000000u; // 80044F9C
L_80044FA0:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80044FA0
L_80044FA4:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80044FA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80044FA0; } // 80044FA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044FAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044FB0
  c->lr=c->r[0]; // 80044FB4
  c->r[1]=c->r[1]+0x00000010u; // 80044FB8
  return; // 80044FBC
}

// DCEnable
void f_80044FC0(Ctx* __restrict c) {
  trace_call(0x80044FC0u);
  /* sync */ // 80044FC0
  c->r[3]=mfspr(c,1008); // 80044FC4
  c->r[3]=c->r[3]|0x00004000u; // 80044FC8
  mtspr(c,1008,c->r[3]); // 80044FCC
  return; // 80044FD0
}

// DCInvalidateRange
void f_80044FE0(Ctx* __restrict c) {
  trace_call(0x80044FE0u);
  cmpu(c,0,c->r[4],0x00000000u); // 80044FE0
  if (!crb(c,1)) return; // 80044FE4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80044FE8
  c->r[4]=c->r[4]+c->r[5]; // 80044FEC
  c->r[4]=c->r[4]+0x0000001Fu; // 80044FF0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80044FF4
  c->ctr=c->r[4]; // 80044FF8
L_80044FFC:;
  /* dcbi */ // 80044FFC
  c->r[3]=c->r[3]+0x00000020u; // 80045000
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80044FFC; } // 80045004
  return; // 80045008
}

// DCFlushRange
void f_80045010(Ctx* __restrict c) {
  trace_call(0x80045010u);
  cmpu(c,0,c->r[4],0x00000000u); // 80045010
  if (!crb(c,1)) return; // 80045014
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80045018
  c->r[4]=c->r[4]+c->r[5]; // 8004501C
  c->r[4]=c->r[4]+0x0000001Fu; // 80045020
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80045024
  c->ctr=c->r[4]; // 80045028
L_8004502C:;
  /* dcbf */ // 8004502C
  c->r[3]=c->r[3]+0x00000020u; // 80045030
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004502C; } // 80045034
  sc(c,0x80045038u); // 80045038
  return; // 8004503C
}

// DCStoreRange
void f_80045040(Ctx* __restrict c) {
  trace_call(0x80045040u);
  cmpu(c,0,c->r[4],0x00000000u); // 80045040
  if (!crb(c,1)) return; // 80045044
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80045048
  c->r[4]=c->r[4]+c->r[5]; // 8004504C
  c->r[4]=c->r[4]+0x0000001Fu; // 80045050
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80045054
  c->ctr=c->r[4]; // 80045058
L_8004505C:;
  /* dcbst */ // 8004505C
  c->r[3]=c->r[3]+0x00000020u; // 80045060
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004505C; } // 80045064
  sc(c,0x80045068u); // 80045068
  return; // 8004506C
}

// DCFlushRangeNoSync
void f_80045070(Ctx* __restrict c) {
  trace_call(0x80045070u);
  cmpu(c,0,c->r[4],0x00000000u); // 80045070
  if (!crb(c,1)) return; // 80045074
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80045078
  c->r[4]=c->r[4]+c->r[5]; // 8004507C
  c->r[4]=c->r[4]+0x0000001Fu; // 80045080
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80045084
  c->ctr=c->r[4]; // 80045088
L_8004508C:;
  /* dcbf */ // 8004508C
  c->r[3]=c->r[3]+0x00000020u; // 80045090
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004508C; } // 80045094
  return; // 80045098
}

// DCZeroRange
void f_800450A0(Ctx* __restrict c) {
  trace_call(0x800450A0u);
  cmpu(c,0,c->r[4],0x00000000u); // 800450A0
  if (!crb(c,1)) return; // 800450A4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800450A8
  c->r[4]=c->r[4]+c->r[5]; // 800450AC
  c->r[4]=c->r[4]+0x0000001Fu; // 800450B0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800450B4
  c->ctr=c->r[4]; // 800450B8
L_800450BC:;
  dcbz(0u+c->r[3]); // 800450BC
  c->r[3]=c->r[3]+0x00000020u; // 800450C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800450BC; } // 800450C4
  return; // 800450C8
}

// ICInvalidateRange
void f_800450D0(Ctx* __restrict c) {
  trace_call(0x800450D0u);
  cmpu(c,0,c->r[4],0x00000000u); // 800450D0
  if (!crb(c,1)) return; // 800450D4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 800450D8
  c->r[4]=c->r[4]+c->r[5]; // 800450DC
  c->r[4]=c->r[4]+0x0000001Fu; // 800450E0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800450E4
  c->ctr=c->r[4]; // 800450E8
L_800450EC:;
  /* icbi */ // 800450EC
  c->r[3]=c->r[3]+0x00000020u; // 800450F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800450EC; } // 800450F4
  /* sync */ // 800450F8
  /* isync */ // 800450FC
  return; // 80045100
}

// ICFlashInvalidate
void f_80045110(Ctx* __restrict c) {
  trace_call(0x80045110u);
  c->r[3]=mfspr(c,1008); // 80045110
  c->r[3]=c->r[3]|0x00000800u; // 80045114
  mtspr(c,1008,c->r[3]); // 80045118
  return; // 8004511C
}

// ICEnable
void f_80045120(Ctx* __restrict c) {
  trace_call(0x80045120u);
  /* isync */ // 80045120
  c->r[3]=mfspr(c,1008); // 80045124
  c->r[3]=c->r[3]|0x00008000u; // 80045128
  mtspr(c,1008,c->r[3]); // 8004512C
  return; // 80045130
}

// LCDisable
void f_80045140(Ctx* __restrict c) {
  trace_call(0x80045140u);
  c->r[3]=0u+0xE0000000u; // 80045140
  c->r[4]=0u+0x00000200u; // 80045144
  c->ctr=c->r[4]; // 80045148
L_8004514C:;
  /* dcbi */ // 8004514C
  c->r[3]=c->r[3]+0x00000020u; // 80045150
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004514C; } // 80045154
  c->r[4]=mfspr(c,920); // 80045158
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 8004515C
  mtspr(c,920,c->r[4]); // 80045160
  return; // 80045164
}

// DMAErrorHandler
void f_80045170(Ctx* __restrict c) {
  trace_call(0x80045170u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045170
  c->r[0]=c->lr; // 80045174
  W32(c->r[1]+0x00000084u,c->r[0]); // 80045178
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8004517C
  W32(c->r[1]+0x00000078u,c->r[30]); // 80045180
  W32(c->r[1]+0x00000074u,c->r[29]); // 80045184
  c->r[29]=c->r[4]|c->r[4]; // 80045188
  if (!crb(c,6)) { goto L_800451B0; } // 8004518C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80045190
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80045194
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80045198
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8004519C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800451A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800451A4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800451A8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800451AC
L_800451B0:;
  c->r[31]=0u+0x80130000u; // 800451B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800451B4
  c->r[31]=c->r[31]+0x00007D90u; // 800451B8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800451BC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800451C0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800451C4
  W32(c->r[1]+0x00000018u,c->r[7]); // 800451C8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800451CC
  W32(c->r[1]+0x00000020u,c->r[9]); // 800451D0
  W32(c->r[1]+0x00000024u,c->r[10]); // 800451D4
  c->lr=0x800451DCu; f_80042870(c); // 800451D8
  c->r[30]=c->r[3]|c->r[3]; // 800451DC
  c->r[3]=c->r[31]+0x00000000u; // 800451E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800451E4
  c->lr=0x800451ECu; f_80045C80(c); // 800451E8
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 800451EC
  c->r[4]=c->r[30]|c->r[30]; // 800451F0
  c->r[3]=c->r[31]+0x00000018u; // 800451F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800451F8
  c->lr=0x80045200u; f_80045C80(c); // 800451FC
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 80045200
  if (crb(c,2)) { goto L_80045214; } // 80045204
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 80045208
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 8004520C
  if (!crb(c,2)) { goto L_8004522C; } // 80045210
L_80045214:;
  c->r[3]=c->r[31]+0x00000038u; // 80045214
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045218
  c->lr=0x80045220u; f_80045C80(c); // 8004521C
  c->r[3]=c->r[29]|c->r[29]; // 80045220
  c->lr=0x80045228u; f_80045950(c); // 80045224
  c->lr=0x8004522Cu; f_800427A0(c); // 80045228
L_8004522C:;
  c->r[3]=c->r[31]+0x00000068u; // 8004522C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045230
  c->lr=0x80045238u; f_80045C80(c); // 80045234
  c->r[3]=c->r[31]+0x000000A4u; // 80045238
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004523C
  c->lr=0x80045244u; f_80045C80(c); // 80045240
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 80045244
  if (crb(c,2)) { goto L_80045258; } // 80045248
  c->r[3]=c->r[31]+0x000000DCu; // 8004524C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045250
  c->lr=0x80045258u; f_80045C80(c); // 80045254
L_80045258:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 80045258
  if (crb(c,2)) { goto L_8004526C; } // 8004525C
  c->r[3]=c->r[31]+0x0000011Cu; // 80045260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045264
  c->lr=0x8004526Cu; f_80045C80(c); // 80045268
L_8004526C:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 8004526C
  if (crb(c,2)) { goto L_80045280; } // 80045270
  c->r[3]=c->r[31]+0x00000148u; // 80045274
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045278
  c->lr=0x80045280u; f_80045C80(c); // 8004527C
L_80045280:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 80045280
  if (crb(c,2)) { goto L_80045294; } // 80045284
  c->r[3]=c->r[31]+0x00000168u; // 80045288
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004528C
  c->lr=0x80045294u; f_80045C80(c); // 80045290
L_80045294:;
  c->r[3]=c->r[30]|c->r[30]; // 80045294
  c->lr=0x8004529Cu; f_80042880(c); // 80045298
  c->r[0]=R32(c->r[1]+0x00000084u); // 8004529C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800452A0
  c->r[30]=R32(c->r[1]+0x00000078u); // 800452A4
  c->r[29]=R32(c->r[1]+0x00000074u); // 800452A8
  c->lr=c->r[0]; // 800452AC
  c->r[1]=c->r[1]+0x00000080u; // 800452B0
  return; // 800452B4
}

// fn_800452C0
void f_800452C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800452C0
  c->r[0]=c->lr; // 800452C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800452C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800452CC
  c->lr=0x800452D4u; f_80042740(c); // 800452D0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 800452D4
  if (!crb(c,2)) { goto L_800452E0; } // 800452D8
  c->lr=0x800452E0u; f_80045120(c); // 800452DC
L_800452E0:;
  c->lr=0x800452E4u; f_80042740(c); // 800452E0
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 800452E4
  if (!crb(c,2)) { goto L_800452F0; } // 800452E8
  c->lr=0x800452F0u; f_80044FC0(c); // 800452EC
L_800452F0:;
  c->lr=0x800452F4u; f_80042760(c); // 800452F0
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800452F4
  if (!crb(c,2)) { goto L_80045384; } // 800452F8
  c->lr=0x80045300u; f_80042720(c); // 800452FC
  c->r[31]=c->r[3]|c->r[3]; // 80045300
  /* sync */ // 80045304
  c->r[3]=0u+0x00000030u; // 80045308
  c->lr=0x80045310u; f_80042730(c); // 8004530C
  /* sync */ // 80045310
  /* sync */ // 80045314
  c->lr=0x8004531Cu; f_80042760(c); // 80045318
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8004531C
  c->lr=0x80045324u; f_80042770(c); // 80045320
  /* sync */ // 80045324
  /* sync */ // 80045328
  c->lr=0x80045330u; f_80042760(c); // 8004532C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80045330
  c->lr=0x80045338u; f_80042770(c); // 80045334
  /* sync */ // 80045338
  c->lr=0x80045340u; f_80042760(c); // 8004533C
  c->r[3]=c->r[3]|0x00200000u; // 80045340
  c->lr=0x80045348u; f_80042770(c); // 80045344
L_80045348:;
  c->lr=0x8004534Cu; f_80042760(c); // 80045348
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8004534C
  if (!crb(c,2)) { IRQCHK(c); goto L_80045348; } // 80045350
  c->lr=0x80045358u; f_80042760(c); // 80045354
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 80045358
  c->lr=0x80045360u; f_80042770(c); // 8004535C
L_80045360:;
  c->lr=0x80045364u; f_80042760(c); // 80045360
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80045364
  if (!crb(c,2)) { IRQCHK(c); goto L_80045360; } // 80045368
  c->r[3]=c->r[31]|c->r[31]; // 8004536C
  c->lr=0x80045374u; f_80042730(c); // 80045370
  c->lr=0x80045378u; f_80042760(c); // 80045374
  c->r[0]=c->r[3]|0x80000000u; // 80045378
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 8004537C
  c->lr=0x80045384u; f_80042770(c); // 80045380
L_80045384:;
  c->r[4]=0u+0x80040000u; // 80045384
  c->r[3]=0u+0x00000001u; // 80045388
  c->r[4]=c->r[4]+0x00005170u; // 8004538C
  c->lr=0x80045394u; f_80045E30(c); // 80045390
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045398
  c->lr=c->r[0]; // 8004539C
  c->r[1]=c->r[1]+0x00000010u; // 800453A0
  return; // 800453A4
}

// __OSLoadFPUContext
void f_800453B0(Ctx* __restrict c) {
  trace_call(0x800453B0u);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 800453B0
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 800453B4
  if (crb(c,2)) { goto L_800454D0; } // 800453B8
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 800453BC
  c->fpscr=(uint32_t)d2u(c->f[0]); // 800453C0
  c->r[5]=mfspr(c,920); // 800453C4
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 800453C8
  if (crb(c,2)) { goto L_80045450; } // 800453CC
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 800453D0
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 800453D4
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 800453D8
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 800453DC
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 800453E0
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 800453E4
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 800453E8
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 800453EC
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 800453F0
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 800453F4
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 800453F8
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 800453FC
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 80045400
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 80045404
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 80045408
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 8004540C
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 80045410
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 80045414
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 80045418
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 8004541C
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 80045420
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 80045424
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 80045428
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 8004542C
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 80045430
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 80045434
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 80045438
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 8004543C
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 80045440
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 80045444
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 80045448
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 8004544C
L_80045450:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 80045450
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 80045454
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 80045458
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 8004545C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 80045460
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 80045464
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 80045468
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 8004546C
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 80045470
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 80045474
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 80045478
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 8004547C
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 80045480
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 80045484
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 80045488
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 8004548C
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 80045490
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 80045494
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 80045498
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 8004549C
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 800454A0
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 800454A4
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 800454A8
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 800454AC
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 800454B0
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 800454B4
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 800454B8
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 800454BC
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 800454C0
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 800454C4
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 800454C8
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 800454CC
L_800454D0:;
  return; // 800454D0
}

// __OSSaveFPUContext
void f_800454E0(Ctx* __restrict c) {
  trace_call(0x800454E0u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 800454E0
  c->r[3]=c->r[3]|0x00000001u; // 800454E4
  W16(c->r[5]+0x000001A2u,c->r[3]); // 800454E8
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 800454EC
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 800454F0
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 800454F4
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 800454F8
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 800454FC
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 80045500
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 80045504
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 80045508
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 8004550C
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 80045510
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 80045514
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 80045518
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 8004551C
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 80045520
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 80045524
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 80045528
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 8004552C
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 80045530
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 80045534
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 80045538
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 8004553C
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 80045540
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 80045544
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 80045548
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 8004554C
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 80045550
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 80045554
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 80045558
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 8004555C
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 80045560
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 80045564
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 80045568
  c->f[0]=u2d((uint64_t)c->fpscr); // 8004556C
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 80045570
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 80045574
  c->r[3]=mfspr(c,920); // 80045578
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 8004557C
  if (crb(c,2)) { goto L_80045604; } // 80045580
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 80045584
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 80045588
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 8004558C
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 80045590
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 80045594
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 80045598
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 8004559C
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 800455A0
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 800455A4
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 800455A8
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 800455AC
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 800455B0
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 800455B4
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 800455B8
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 800455BC
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 800455C0
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 800455C4
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 800455C8
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 800455CC
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 800455D0
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 800455D4
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 800455D8
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 800455DC
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 800455E0
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 800455E4
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 800455E8
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 800455EC
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 800455F0
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 800455F4
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 800455F8
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 800455FC
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 80045600
L_80045604:;
  return; // 80045604
}

// fn_80045610
void f_80045610(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0x00000000u; // 80045610
  f_800454E0(c); return; // 80045614
}

// OSSetCurrentContext
void f_80045620(Ctx* __restrict c) {
  trace_call(0x80045620u);
  c->r[4]=0u+0x80000000u; // 80045620
  W32(c->r[4]+0x000000D4u,c->r[3]); // 80045624
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 80045628
  W32(c->r[4]+0x000000C0u,c->r[5]); // 8004562C
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80045630
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 80045634
  if (!crb(c,2)) { goto L_80045658; } // 80045638
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 8004563C
  c->r[6]=c->r[6]|0x00002000u; // 80045640
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 80045644
  c->r[6]=c->msr; // 80045648
  c->r[6]=c->r[6]|0x00000002u; // 8004564C
  c->msr=c->r[6]; // 80045650
  return; // 80045654
L_80045658:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 80045658
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 8004565C
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 80045660
  c->r[6]=c->msr; // 80045664
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 80045668
  c->r[6]=c->r[6]|0x00000002u; // 8004566C
  c->msr=c->r[6]; // 80045670
  /* isync */ // 80045674
  return; // 80045678
}

// OSGetCurrentContext
void f_80045680(Ctx* __restrict c) {
  trace_call(0x80045680u);
  c->r[3]=0u+0x80000000u; // 80045680
  c->r[3]=R32(c->r[3]+0x000000D4u); // 80045684
  return; // 80045688
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_80045690(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_80045710(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_800457F0(Ctx* __restrict c) {
  trace_call(0x800457F0u);
  c->r[3]=c->r[1]|c->r[1]; // 800457F0
  return; // 800457F4
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_80045800(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_80045830(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_80045860(Ctx* __restrict c) {
  trace_call(0x80045860u);
  c->r[5]=0u+0x00000000u; // 80045860
  W16(c->r[3]+0x000001A0u,c->r[5]); // 80045864
  c->r[4]=0u+0x80000000u; // 80045868
  W16(c->r[3]+0x000001A2u,c->r[5]); // 8004586C
  c->r[0]=R32(c->r[4]+0x000000D8u); // 80045870
  cmpu(c,0,c->r[3],c->r[0]); // 80045874
  if (!crb(c,2)) return; // 80045878
  W32(c->r[4]+0x000000D8u,c->r[5]); // 8004587C
  return; // 80045880
}

// OSInitContext
void f_80045890(Ctx* __restrict c) {
  trace_call(0x80045890u);
  W32(c->r[3]+0x00000198u,c->r[4]); // 80045890
  W32(c->r[3]+0x00000004u,c->r[5]); // 80045894
  c->r[11]=0u+0x00000000u; // 80045898
  c->r[11]=c->r[11]|0x00009032u; // 8004589C
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 800458A0
  c->r[0]=0u+0x00000000u; // 800458A4
  W32(c->r[3]+0x00000080u,c->r[0]); // 800458A8
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800458AC
  W32(c->r[3]+0x00000008u,c->r[2]); // 800458B0
  W32(c->r[3]+0x00000034u,c->r[13]); // 800458B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800458B8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800458BC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800458C0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800458C4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800458C8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800458CC
  W32(c->r[3]+0x00000024u,c->r[0]); // 800458D0
  W32(c->r[3]+0x00000028u,c->r[0]); // 800458D4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800458D8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800458DC
  W32(c->r[3]+0x00000038u,c->r[0]); // 800458E0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800458E4
  W32(c->r[3]+0x00000040u,c->r[0]); // 800458E8
  W32(c->r[3]+0x00000044u,c->r[0]); // 800458EC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800458F0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800458F4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800458F8
  W32(c->r[3]+0x00000054u,c->r[0]); // 800458FC
  W32(c->r[3]+0x00000058u,c->r[0]); // 80045900
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80045904
  W32(c->r[3]+0x00000060u,c->r[0]); // 80045908
  W32(c->r[3]+0x00000064u,c->r[0]); // 8004590C
  W32(c->r[3]+0x00000068u,c->r[0]); // 80045910
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 80045914
  W32(c->r[3]+0x00000070u,c->r[0]); // 80045918
  W32(c->r[3]+0x00000074u,c->r[0]); // 8004591C
  W32(c->r[3]+0x00000078u,c->r[0]); // 80045920
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 80045924
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80045928
  W32(c->r[3]+0x000001A8u,c->r[0]); // 8004592C
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80045930
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80045934
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80045938
  W32(c->r[3]+0x000001B8u,c->r[0]); // 8004593C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80045940
  W32(c->r[3]+0x000001C0u,c->r[0]); // 80045944
  f_80045860(c); return; // 80045948
}

// fn_80045950
void f_80045950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045950
  c->r[0]=c->lr; // 80045954
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80045958
  c->r[11]=c->r[1]+0x000002F0u; // 8004595C
  c->lr=0x80045964u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80045960
  c->r[28]=0u+0x80130000u; // 80045964
  c->r[30]=c->r[3]|c->r[3]; // 80045968
  c->r[28]=c->r[28]+0x00007F18u; // 8004596C
  c->r[4]=c->r[30]|c->r[30]; // 80045970
  c->r[3]=c->r[28]+0x00000000u; // 80045974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045978
  c->lr=0x80045980u; f_80045C80(c); // 8004597C
  c->r[26]=c->r[30]|c->r[30]; // 80045980
  c->r[25]=0u+0x00000000u; // 80045984
L_80045988:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 80045988
  c->r[4]=c->r[25]|c->r[25]; // 8004598C
  c->r[5]=R32(c->r[26]+0x00000000u); // 80045990
  c->r[3]=c->r[28]+0x00000048u; // 80045994
  c->r[9]=c->r[8]|c->r[8]; // 80045998
  c->r[7]=c->r[25]+0x00000010u; // 8004599C
  c->r[6]=c->r[5]|c->r[5]; // 800459A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800459A4
  c->lr=0x800459ACu; f_80045C80(c); // 800459A8
  c->r[25]=c->r[25]+0x00000001u; // 800459AC
  c->r[26]=c->r[26]+0x00000004u; // 800459B0
  cmpu(c,0,c->r[25],0x00000010u); // 800459B4
  if (crb(c,0)) { IRQCHK(c); goto L_80045988; } // 800459B8
  c->r[4]=R32(c->r[30]+0x00000084u); // 800459BC
  c->r[3]=c->r[28]+0x00000078u; // 800459C0
  c->r[5]=R32(c->r[30]+0x00000080u); // 800459C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800459C8
  c->lr=0x800459D0u; f_80045C80(c); // 800459CC
  c->r[4]=R32(c->r[30]+0x00000198u); // 800459D0
  c->r[3]=c->r[28]+0x000000A8u; // 800459D4
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 800459D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800459DC
  c->lr=0x800459E4u; f_80045C80(c); // 800459E0
  c->r[3]=c->r[28]+0x000000D8u; // 800459E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800459E8
  c->lr=0x800459F0u; f_80045C80(c); // 800459EC
  c->r[26]=c->r[30]|c->r[30]; // 800459F0
  c->r[25]=0u+0x00000000u; // 800459F4
L_800459F8:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 800459F8
  c->r[4]=c->r[25]|c->r[25]; // 800459FC
  c->r[7]=R32(c->r[26]+0x000001B4u); // 80045A00
  c->r[3]=c->r[28]+0x000000ECu; // 80045A04
  c->r[6]=c->r[25]+0x00000004u; // 80045A08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045A0C
  c->lr=0x80045A14u; f_80045C80(c); // 80045A10
  c->r[25]=c->r[25]+0x00000001u; // 80045A14
  c->r[26]=c->r[26]+0x00000004u; // 80045A18
  cmpu(c,0,c->r[25],0x00000004u); // 80045A1C
  if (crb(c,0)) { IRQCHK(c); goto L_800459F8; } // 80045A20
  c->r[0]=R16(c->r[30]+0x000001A2u); // 80045A24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80045A28
  if (crb(c,2)) { goto L_80045B44; } // 80045A2C
  c->lr=0x80045A34u; f_80049A20(c); // 80045A30
  c->r[6]=0u+0x80000000u; // 80045A34
  c->r[5]=0u+0x00000000u; // 80045A38
  c->r[27]=R32(c->r[6]+0x000000D4u); // 80045A3C
  c->r[4]=c->r[1]+0x00000008u; // 80045A40
  c->r[31]=c->r[3]|c->r[3]; // 80045A44
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80045A48
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80045A4C
  c->r[0]=R32(c->r[6]+0x000000D8u); // 80045A50
  cmpu(c,0,c->r[4],c->r[0]); // 80045A54
  if (!crb(c,2)) { goto L_80045A60; } // 80045A58
  W32(c->r[6]+0x000000D8u,c->r[5]); // 80045A5C
L_80045A60:;
  c->r[3]=c->r[1]+0x00000008u; // 80045A60
  c->lr=0x80045A68u; f_80045620(c); // 80045A64
  c->r[3]=c->r[28]+0x00000110u; // 80045A68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045A6C
  c->lr=0x80045A74u; f_80045C80(c); // 80045A70
  c->r[26]=c->r[30]|c->r[30]; // 80045A74
  c->r[25]=0u+0x00000000u; // 80045A78
L_80045A7C:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 80045A7C
  c->lr=0x80045A84u; f_8006E400(c); // 80045A80
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 80045A84
  c->r[29]=c->r[3]|c->r[3]; // 80045A88
  c->lr=0x80045A90u; f_8006E400(c); // 80045A8C
  c->r[5]=c->r[3]|c->r[3]; // 80045A90
  c->r[4]=c->r[25]|c->r[25]; // 80045A94
  c->r[7]=c->r[29]|c->r[29]; // 80045A98
  c->r[3]=c->r[28]+0x00000124u; // 80045A9C
  c->r[6]=c->r[25]+0x00000001u; // 80045AA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045AA4
  c->lr=0x80045AACu; f_80045C80(c); // 80045AA8
  c->r[25]=c->r[25]+0x00000002u; // 80045AAC
  c->r[26]=c->r[26]+0x00000010u; // 80045AB0
  cmpu(c,0,c->r[25],0x00000020u); // 80045AB4
  if (crb(c,0)) { IRQCHK(c); goto L_80045A7C; } // 80045AB8
  c->r[3]=c->r[28]+0x00000140u; // 80045ABC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045AC0
  c->lr=0x80045AC8u; f_80045C80(c); // 80045AC4
  c->r[26]=c->r[30]|c->r[30]; // 80045AC8
  c->r[25]=0u+0x00000000u; // 80045ACC
L_80045AD0:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 80045AD0
  c->lr=0x80045AD8u; f_8006E400(c); // 80045AD4
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 80045AD8
  c->r[29]=c->r[3]|c->r[3]; // 80045ADC
  c->lr=0x80045AE4u; f_8006E400(c); // 80045AE0
  c->r[5]=c->r[3]|c->r[3]; // 80045AE4
  c->r[4]=c->r[25]|c->r[25]; // 80045AE8
  c->r[7]=c->r[29]|c->r[29]; // 80045AEC
  c->r[3]=c->r[28]+0x00000154u; // 80045AF0
  c->r[6]=c->r[25]+0x00000001u; // 80045AF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045AF8
  c->lr=0x80045B00u; f_80045C80(c); // 80045AFC
  c->r[25]=c->r[25]+0x00000002u; // 80045B00
  c->r[26]=c->r[26]+0x00000010u; // 80045B04
  cmpu(c,0,c->r[25],0x00000020u); // 80045B08
  if (crb(c,0)) { IRQCHK(c); goto L_80045AD0; } // 80045B0C
  c->r[5]=0u+0x00000000u; // 80045B10
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80045B14
  c->r[3]=0u+0x80000000u; // 80045B18
  c->r[4]=c->r[1]+0x00000008u; // 80045B1C
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80045B20
  c->r[0]=R32(c->r[3]+0x000000D8u); // 80045B24
  cmpu(c,0,c->r[4],c->r[0]); // 80045B28
  if (!crb(c,2)) { goto L_80045B34; } // 80045B2C
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80045B30
L_80045B34:;
  c->r[3]=c->r[27]|c->r[27]; // 80045B34
  c->lr=0x80045B3Cu; f_80045620(c); // 80045B38
  c->r[3]=c->r[31]|c->r[31]; // 80045B3C
  c->lr=0x80045B44u; f_80049A60(c); // 80045B40
L_80045B44:;
  c->r[3]=c->r[28]+0x00000174u; // 80045B44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045B48
  c->lr=0x80045B50u; f_80045C80(c); // 80045B4C
  c->r[25]=R32(c->r[30]+0x00000004u); // 80045B50
  c->r[26]=0u+0x00000000u; // 80045B54
  goto L_80045B78; // 80045B58
L_80045B5C:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 80045B5C
  c->r[4]=c->r[25]|c->r[25]; // 80045B60
  c->r[6]=R32(c->r[25]+0x00000004u); // 80045B64
  c->r[3]=c->r[28]+0x0000019Cu; // 80045B68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80045B6C
  c->lr=0x80045B74u; f_80045C80(c); // 80045B70
  c->r[25]=R32(c->r[25]+0x00000000u); // 80045B74
L_80045B78:;
  cmps(c,0,(int32_t)c->r[25],0); // 80045B78
  if (crb(c,2)) { goto L_80045B98; } // 80045B7C
  c->r[0]=c->r[25]+0x00010000u; // 80045B80
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80045B84
  if (crb(c,2)) { goto L_80045B98; } // 80045B88
  cmpu(c,0,c->r[26],0x00000010u); // 80045B8C
  c->r[26]=c->r[26]+0x00000001u; // 80045B90
  if (crb(c,0)) { IRQCHK(c); goto L_80045B5C; } // 80045B94
L_80045B98:;
  c->r[11]=c->r[1]+0x000002F0u; // 80045B98
  c->lr=0x80045BA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80045B9C
  c->r[0]=R32(c->r[1]+0x000002F4u); // 80045BA0
  c->lr=c->r[0]; // 80045BA4
  c->r[1]=c->r[1]+0x000002F0u; // 80045BA8
  return; // 80045BAC
}

// OSSwitchFPUContext
void f_80045BB0(Ctx* __restrict c) {
  trace_call(0x80045BB0u);
  c->r[5]=c->msr; // 80045BB0
  c->r[5]=c->r[5]|0x00002000u; // 80045BB4
  c->msr=c->r[5]; // 80045BB8
  /* isync */ // 80045BBC
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 80045BC0
  c->r[5]=c->r[5]|0x00002000u; // 80045BC4
  mtspr(c,27,c->r[5]); // 80045BC8
  c->r[3]=0u+0x80000000u; // 80045BCC
  c->r[5]=R32(c->r[3]+0x000000D8u); // 80045BD0
  W32(c->r[3]+0x000000D8u,c->r[4]); // 80045BD4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80045BD8
  if (crb(c,2)) { goto L_80045BF0; } // 80045BDC
  cmps(c,0,(int32_t)c->r[5],0); // 80045BE0
  if (crb(c,2)) { goto L_80045BEC; } // 80045BE4
  c->lr=0x80045BECu; f_800454E0(c); // 80045BE8
L_80045BEC:;
  c->lr=0x80045BF0u; f_800453B0(c); // 80045BEC
L_80045BF0:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 80045BF0
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 80045BF4
  c->r[3]=R32(c->r[4]+0x00000084u); // 80045BF8
  c->lr=c->r[3]; // 80045BFC
  c->r[3]=R32(c->r[4]+0x00000198u); // 80045C00
  mtspr(c,26,c->r[3]); // 80045C04
  c->r[3]=R32(c->r[4]+0x00000088u); // 80045C08
  c->ctr=c->r[3]; // 80045C0C
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 80045C10
  mtspr(c,1,c->r[3]); // 80045C14
  c->r[3]=R16(c->r[4]+0x000001A2u); // 80045C18
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80045C1C
  W16(c->r[4]+0x000001A2u,c->r[3]); // 80045C20
  c->r[5]=R32(c->r[4]+0x00000014u); // 80045C24
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80045C28
  c->r[4]=R32(c->r[4]+0x00000010u); // 80045C2C
  return; /* rfi */ // 80045C30
}

// fn_80045C40
void f_80045C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045C40
  c->r[0]=c->lr; // 80045C44
  c->r[4]=0u+0x80040000u; // 80045C48
  c->r[3]=0u+0x00000007u; // 80045C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045C50
  c->r[4]=c->r[4]+0x00005BB0u; // 80045C54
  c->lr=0x80045C5Cu; f_80043BB0(c); // 80045C58
  c->r[3]=0u+0x80000000u; // 80045C5C
  c->r[0]=0u+0x00000000u; // 80045C60
  W32(c->r[3]+0x000000D8u,c->r[0]); // 80045C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045C68
  c->lr=c->r[0]; // 80045C6C
  c->r[1]=c->r[1]+0x00000010u; // 80045C70
  return; // 80045C74
}

void hle_OSReport(Ctx*);
// OSReport
void f_80045C80(Ctx* __restrict c) {
  hle_OSReport(c);
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_80045D00(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_80045E30(Ctx* __restrict c) {
  trace_call(0x80045E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045E30
  c->r[0]=c->lr; // 80045E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045E38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045E3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80045E40
  W32(c->r[1]+0x00000014u,c->r[29]); // 80045E44
  c->r[29]=c->r[3]|c->r[3]; // 80045E48
  W32(c->r[1]+0x00000010u,c->r[28]); // 80045E4C
  c->r[28]=c->r[4]|c->r[4]; // 80045E50
  c->lr=0x80045E58u; f_80049A20(c); // 80045E54
  c->r[4]=0u+0x801A0000u; // 80045E58
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 80045E5C
  c->r[4]=c->r[4]+0xFFFFA6D0u; // 80045E60
  cmpu(c,0,c->r[29],0x00000010u); // 80045E64
  c->r[30]=R32(c->r[4]+c->r[0]); // 80045E68
  c->r[29]=c->r[3]|c->r[3]; // 80045E6C
  W32(c->r[4]+c->r[0],c->r[28]); // 80045E70
  if (!crb(c,2)) { goto L_80046090; } // 80045E74
  c->lr=0x80045E7Cu; f_80042720(c); // 80045E78
  c->r[31]=c->r[3]|c->r[3]; // 80045E7C
  c->r[3]=c->r[3]|0x00002000u; // 80045E80
  c->lr=0x80045E88u; f_80042730(c); // 80045E84
  c->lr=0x80045E8Cu; f_80042820(c); // 80045E88
  cmps(c,0,(int32_t)c->r[28],0); // 80045E8C
  if (crb(c,2)) { goto L_8004602C; } // 80045E90
  c->r[5]=0u+0x80000000u; // 80045E94
  c->r[4]=0u+0x60060000u; // 80045E98
  c->r[9]=R32(c->r[5]+0x000000DCu); // 80045E9C
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 80045EA0
  c->r[8]=0u+0xFFFFFFFFu; // 80045EA4
  c->r[7]=0u+0x00000004u; // 80045EA8
  c->r[0]=0u+0x00000002u; // 80045EAC
  goto L_80046010; // 80045EB0
  c->r[0]=c->r[0]|0x00000000u; // 80045EB4
L_80045EB8:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 80045EB8
  c->r[4]=c->r[4]|0x00000900u; // 80045EBC
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 80045EC0
  c->r[6]=R16(c->r[9]+0x000001A2u); // 80045EC4
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 80045EC8
  if (!crb(c,2)) { goto L_80045FF4; } // 80045ECC
  c->r[4]=c->r[6]|0x00000001u; // 80045ED0
  W16(c->r[9]+0x000001A2u,c->r[4]); // 80045ED4
  c->r[4]=c->r[9]+0x00000090u; // 80045ED8
  c->r[6]=c->r[9]+0x000001C8u; // 80045EDC
  c->ctr=c->r[0]; // 80045EE0
L_80045EE4:;
  W32(c->r[4]+0x00000004u,c->r[8]); // 80045EE4
  W32(c->r[4]+0x00000000u,c->r[8]); // 80045EE8
  W32(c->r[6]+0x00000004u,c->r[8]); // 80045EEC
  W32(c->r[6]+0x00000000u,c->r[8]); // 80045EF0
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80045EF4
  W32(c->r[4]+0x00000008u,c->r[8]); // 80045EF8
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 80045EFC
  W32(c->r[6]+0x00000008u,c->r[8]); // 80045F00
  W32(c->r[4]+0x00000014u,c->r[8]); // 80045F04
  W32(c->r[4]+0x00000010u,c->r[8]); // 80045F08
  W32(c->r[6]+0x00000014u,c->r[8]); // 80045F0C
  W32(c->r[6]+0x00000010u,c->r[8]); // 80045F10
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 80045F14
  W32(c->r[4]+0x00000018u,c->r[8]); // 80045F18
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 80045F1C
  W32(c->r[6]+0x00000018u,c->r[8]); // 80045F20
  W32(c->r[4]+0x00000024u,c->r[8]); // 80045F24
  W32(c->r[4]+0x00000020u,c->r[8]); // 80045F28
  W32(c->r[6]+0x00000024u,c->r[8]); // 80045F2C
  W32(c->r[6]+0x00000020u,c->r[8]); // 80045F30
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 80045F34
  W32(c->r[4]+0x00000028u,c->r[8]); // 80045F38
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 80045F3C
  W32(c->r[6]+0x00000028u,c->r[8]); // 80045F40
  W32(c->r[4]+0x00000034u,c->r[8]); // 80045F44
  W32(c->r[4]+0x00000030u,c->r[8]); // 80045F48
  W32(c->r[6]+0x00000034u,c->r[8]); // 80045F4C
  W32(c->r[6]+0x00000030u,c->r[8]); // 80045F50
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 80045F54
  W32(c->r[4]+0x00000038u,c->r[8]); // 80045F58
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 80045F5C
  W32(c->r[6]+0x00000038u,c->r[8]); // 80045F60
  W32(c->r[4]+0x00000044u,c->r[8]); // 80045F64
  W32(c->r[4]+0x00000040u,c->r[8]); // 80045F68
  W32(c->r[6]+0x00000044u,c->r[8]); // 80045F6C
  W32(c->r[6]+0x00000040u,c->r[8]); // 80045F70
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 80045F74
  W32(c->r[4]+0x00000048u,c->r[8]); // 80045F78
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 80045F7C
  W32(c->r[6]+0x00000048u,c->r[8]); // 80045F80
  W32(c->r[4]+0x00000054u,c->r[8]); // 80045F84
  W32(c->r[4]+0x00000050u,c->r[8]); // 80045F88
  W32(c->r[6]+0x00000054u,c->r[8]); // 80045F8C
  W32(c->r[6]+0x00000050u,c->r[8]); // 80045F90
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 80045F94
  W32(c->r[4]+0x00000058u,c->r[8]); // 80045F98
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 80045F9C
  W32(c->r[6]+0x00000058u,c->r[8]); // 80045FA0
  W32(c->r[4]+0x00000064u,c->r[8]); // 80045FA4
  W32(c->r[4]+0x00000060u,c->r[8]); // 80045FA8
  W32(c->r[6]+0x00000064u,c->r[8]); // 80045FAC
  W32(c->r[6]+0x00000060u,c->r[8]); // 80045FB0
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 80045FB4
  W32(c->r[4]+0x00000068u,c->r[8]); // 80045FB8
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 80045FBC
  W32(c->r[6]+0x00000068u,c->r[8]); // 80045FC0
  W32(c->r[4]+0x00000074u,c->r[8]); // 80045FC4
  W32(c->r[4]+0x00000070u,c->r[8]); // 80045FC8
  W32(c->r[6]+0x00000074u,c->r[8]); // 80045FCC
  W32(c->r[6]+0x00000070u,c->r[8]); // 80045FD0
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 80045FD4
  W32(c->r[4]+0x00000078u,c->r[8]); // 80045FD8
  c->r[4]=c->r[4]+0x00000080u; // 80045FDC
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 80045FE0
  W32(c->r[6]+0x00000078u,c->r[8]); // 80045FE4
  c->r[6]=c->r[6]+0x00000080u; // 80045FE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80045EE4; } // 80045FEC
  W32(c->r[9]+0x00000194u,c->r[7]); // 80045FF0
L_80045FF4:;
  c->r[4]=R32(c->r[13]+0xFFFF80F0u); // 80045FF4
  c->r[6]=R32(c->r[9]+0x00000194u); // 80045FF8
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 80045FFC
  c->r[4]=c->r[6]|c->r[4]; // 80046000
  c->r[4]=c->r[4]&c->r[5]; // 80046004
  W32(c->r[9]+0x00000194u,c->r[4]); // 80046008
  c->r[9]=R32(c->r[9]+0x000002FCu); // 8004600C
L_80046010:;
  cmps(c,0,(int32_t)c->r[9],0); // 80046010
  if (!crb(c,2)) { IRQCHK(c); goto L_80045EB8; } // 80046014
  c->r[0]=R32(c->r[13]+0xFFFF80F0u); // 80046018
  c->r[31]=c->r[31]|0x00000900u; // 8004601C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80046020
  c->r[4]=c->r[3]|c->r[0]; // 80046024
  goto L_80046078; // 80046028
L_8004602C:;
  c->r[5]=0u+0x80000000u; // 8004602C
  c->r[4]=0u+0x60060000u; // 80046030
  c->r[6]=R32(c->r[5]+0x000000DCu); // 80046034
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 80046038
  c->r[5]=0u+0xFFFFF6FFu; // 8004603C
  goto L_80046064; // 80046040
L_80046044:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 80046044
  c->r[0]=c->r[0]&c->r[5]; // 80046048
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 8004604C
  c->r[0]=R32(c->r[6]+0x00000194u); // 80046050
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 80046054
  c->r[0]=c->r[0]&c->r[4]; // 80046058
  W32(c->r[6]+0x00000194u,c->r[0]); // 8004605C
  c->r[6]=R32(c->r[6]+0x000002FCu); // 80046060
L_80046064:;
  cmps(c,0,(int32_t)c->r[6],0); // 80046064
  if (!crb(c,2)) { IRQCHK(c); goto L_80046044; } // 80046068
  c->r[0]=0u+0xFFFFF6FFu; // 8004606C
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 80046070
  c->r[31]=c->r[31]&c->r[0]; // 80046074
L_80046078:;
  c->r[3]=0u+0x60060000u; // 80046078
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 8004607C
  c->r[3]=c->r[4]&c->r[0]; // 80046080
  c->lr=0x80046088u; f_80042840(c); // 80046084
  c->r[3]=c->r[31]|c->r[31]; // 80046088
  c->lr=0x80046090u; f_80042730(c); // 8004608C
L_80046090:;
  c->r[3]=c->r[29]|c->r[29]; // 80046090
  c->lr=0x80046098u; f_80049A60(c); // 80046094
  c->r[3]=c->r[30]|c->r[30]; // 80046098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004609C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800460A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800460A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800460A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800460AC
  c->lr=c->r[0]; // 800460B0
  c->r[1]=c->r[1]+0x00000020u; // 800460B4
  return; // 800460B8
}

// fn_800460C0
void f_800460C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800460C0
  c->r[0]=c->lr; // 800460C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800460C8
  c->r[11]=c->r[1]+0x00000030u; // 800460CC
  c->lr=0x800460D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800460D0
  c->r[31]=0u+0x80140000u; // 800460D4
  c->r[25]=c->r[3]|c->r[3]; // 800460D8
  c->r[26]=c->r[4]|c->r[4]; // 800460DC
  c->r[27]=c->r[5]|c->r[5]; // 800460E0
  c->r[28]=c->r[6]|c->r[6]; // 800460E4
  c->r[31]=c->r[31]+0xFFFF80D0u; // 800460E8
  c->lr=0x800460F0u; f_8004DAA0(c); // 800460EC
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 800460F0
  c->r[29]=c->r[4]|c->r[4]; // 800460F4
  c->r[30]=c->r[3]|c->r[3]; // 800460F8
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800460FC
  if (!crb(c,2)) { goto L_80046118; } // 80046100
  c->r[4]=c->r[25]|c->r[25]; // 80046104
  c->r[3]=c->r[31]+0x0000005Cu; // 80046108
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004610C
  c->lr=0x80046114u; f_80045C80(c); // 80046110
  goto L_80046274; // 80046114
L_80046118:;
  cmpu(c,0,c->r[25],0x00000006u); // 80046118
  if (!crb(c,2)) { goto L_80046208; } // 8004611C
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 80046120
  if (crb(c,2)) { goto L_80046208; } // 80046124
  c->r[3]=0u+0x801A0000u; // 80046128
  c->r[3]=c->r[3]+0xFFFFA6D0u; // 8004612C
  c->r[0]=R32(c->r[3]+0x00000040u); // 80046130
  cmps(c,0,(int32_t)c->r[0],0); // 80046134
  if (crb(c,2)) { goto L_80046208; } // 80046138
  c->r[25]=0u+0x00000010u; // 8004613C
  c->lr=0x80046144u; f_80042720(c); // 80046140
  c->r[23]=c->r[3]|c->r[3]; // 80046144
  c->r[3]=c->r[3]|0x00002000u; // 80046148
  c->lr=0x80046150u; f_80042730(c); // 8004614C
  c->r[3]=0u+0x80000000u; // 80046150
  c->r[3]=R32(c->r[3]+0x000000D8u); // 80046154
  cmps(c,0,(int32_t)c->r[3],0); // 80046158
  if (crb(c,2)) { goto L_80046164; } // 8004615C
  c->lr=0x80046164u; f_80045610(c); // 80046160
L_80046164:;
  c->lr=0x80046168u; f_80042820(c); // 80046164
  c->r[24]=0u+0x60060000u; // 80046168
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 8004616C
  c->r[3]=c->r[3]&c->r[0]; // 80046170
  c->lr=0x80046178u; f_80042840(c); // 80046174
  c->r[3]=c->r[23]|c->r[23]; // 80046178
  c->lr=0x80046180u; f_80042730(c); // 8004617C
  c->r[23]=0u+0x80000000u; // 80046180
  c->r[0]=R32(c->r[23]+0x000000D8u); // 80046184
  cmpu(c,0,c->r[0],c->r[26]); // 80046188
  if (!crb(c,2)) { goto L_800461EC; } // 8004618C
  c->lr=0x80046194u; f_8004C740(c); // 80046190
  c->r[4]=c->r[26]|c->r[26]; // 80046194
  c->r[5]=c->r[27]|c->r[27]; // 80046198
  c->r[6]=c->r[28]|c->r[28]; // 8004619C
  c->r[3]=0u+0x00000010u; // 800461A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800461A4
  c->r[7]=0u+0x801A0000u; // 800461A8
  c->r[7]=c->r[7]+0xFFFFA6D0u; // 800461AC
  c->r[12]=R32(c->r[7]+0x00000040u); // 800461B0
  c->ctr=c->r[12]; // 800461B4
  if (true) { c->lr=0x800461BCu; dispatch(c,c->ctr); } // 800461B8
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 800461BC
  c->r[3]=0u+0x00000000u; // 800461C0
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 800461C4
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 800461C8
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 800461CC
  W32(c->r[23]+0x000000D8u,c->r[3]); // 800461D0
  c->r[3]=R32(c->r[26]+0x00000194u); // 800461D4
  c->r[0]=c->r[3]&c->r[0]; // 800461D8
  W32(c->r[26]+0x00000194u,c->r[0]); // 800461DC
  c->lr=0x800461E4u; f_8004C780(c); // 800461E0
  c->lr=0x800461E8u; f_8004CCA0(c); // 800461E4
  goto L_80046200; // 800461E8
L_800461EC:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 800461EC
  c->r[0]=0u+0x00000000u; // 800461F0
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 800461F4
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 800461F8
  W32(c->r[23]+0x000000D8u,c->r[0]); // 800461FC
L_80046200:;
  c->r[3]=c->r[26]|c->r[26]; // 80046200
  c->lr=0x80046208u; f_80045710(c); // 80046204
L_80046208:;
  c->r[24]=0u+0x801A0000u; // 80046208
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 8004620C
  c->r[24]=c->r[24]+0xFFFFA6D0u; // 80046210
  c->r[0]=R32(c->r[24]+c->r[23]); // 80046214
  cmps(c,0,(int32_t)c->r[0],0); // 80046218
  if (crb(c,2)) { goto L_80046254; } // 8004621C
  c->lr=0x80046224u; f_8004C740(c); // 80046220
  c->r[3]=c->r[25]|c->r[25]; // 80046224
  c->r[4]=c->r[26]|c->r[26]; // 80046228
  c->r[5]=c->r[27]|c->r[27]; // 8004622C
  c->r[6]=c->r[28]|c->r[28]; // 80046230
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046234
  c->r[12]=R32(c->r[24]+c->r[23]); // 80046238
  c->ctr=c->r[12]; // 8004623C
  if (true) { c->lr=0x80046244u; dispatch(c,c->ctr); } // 80046240
  c->lr=0x80046248u; f_8004C780(c); // 80046244
  c->lr=0x8004624Cu; f_8004CCA0(c); // 80046248
  c->r[3]=c->r[26]|c->r[26]; // 8004624C
  c->lr=0x80046254u; f_80045710(c); // 80046250
L_80046254:;
  cmpu(c,0,c->r[25],0x00000008u); // 80046254
  if (!crb(c,2)) { goto L_80046264; } // 80046258
  c->r[3]=c->r[26]|c->r[26]; // 8004625C
  c->lr=0x80046264u; f_80045710(c); // 80046260
L_80046264:;
  c->r[4]=c->r[25]|c->r[25]; // 80046264
  c->r[3]=c->r[31]+0x0000007Cu; // 80046268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004626C
  c->lr=0x80046274u; f_80045C80(c); // 80046270
L_80046274:;
  c->r[3]=c->r[13]+0xFFFF80F4u; // 80046274
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046278
  c->lr=0x80046280u; f_80045C80(c); // 8004627C
  c->r[3]=c->r[26]|c->r[26]; // 80046280
  c->lr=0x80046288u; f_80045950(c); // 80046284
  c->r[4]=c->r[27]|c->r[27]; // 80046288
  c->r[5]=c->r[28]|c->r[28]; // 8004628C
  c->r[3]=c->r[31]+0x00000094u; // 80046290
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046294
  c->lr=0x8004629Cu; f_80045C80(c); // 80046298
  c->r[6]=c->r[29]|c->r[29]; // 8004629C
  c->r[5]=c->r[30]|c->r[30]; // 800462A0
  c->r[3]=c->r[31]+0x000000C8u; // 800462A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800462A8
  c->lr=0x800462B0u; f_80045C80(c); // 800462AC
  cmps(c,0,(int32_t)c->r[25],2); // 800462B0
  if (crb(c,2)) { goto L_800462DC; } // 800462B4
  cmps(c,0,(int32_t)c->r[25],3); // 800462B8
  if (crb(c,2)) { goto L_800462F4; } // 800462BC
  cmps(c,0,(int32_t)c->r[25],5); // 800462C0
  if (crb(c,2)) { goto L_80046308; } // 800462C4
  cmps(c,0,(int32_t)c->r[25],6); // 800462C8
  if (crb(c,2)) { goto L_80046320; } // 800462CC
  cmps(c,0,(int32_t)c->r[25],15); // 800462D0
  if (crb(c,2)) { goto L_80046338; } // 800462D4
  goto L_80046384; // 800462D8
L_800462DC:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800462DC
  c->r[5]=c->r[28]|c->r[28]; // 800462E0
  c->r[3]=c->r[31]+0x000000D8u; // 800462E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800462E8
  c->lr=0x800462F0u; f_80045C80(c); // 800462EC
  goto L_80046384; // 800462F0
L_800462F4:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 800462F4
  c->r[3]=c->r[31]+0x00000138u; // 800462F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800462FC
  c->lr=0x80046304u; f_80045C80(c); // 80046300
  goto L_80046384; // 80046304
L_80046308:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80046308
  c->r[5]=c->r[28]|c->r[28]; // 8004630C
  c->r[3]=c->r[31]+0x00000184u; // 80046310
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046314
  c->lr=0x8004631Cu; f_80045C80(c); // 80046318
  goto L_80046384; // 8004631C
L_80046320:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80046320
  c->r[5]=c->r[28]|c->r[28]; // 80046324
  c->r[3]=c->r[31]+0x000001E8u; // 80046328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004632C
  c->lr=0x80046334u; f_80045C80(c); // 80046330
  goto L_80046384; // 80046334
L_80046338:;
  c->r[3]=c->r[13]+0xFFFF80F4u; // 80046338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004633C
  c->lr=0x80046344u; f_80045C80(c); // 80046340
  c->r[25]=0u+0xCC000000u; // 80046344
  c->r[3]=c->r[31]+0x00000248u; // 80046348
  c->r[4]=R16(c->r[25]+0x00005030u); // 8004634C
  c->r[5]=R16(c->r[25]+0x00005032u); // 80046350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046354
  c->lr=0x8004635Cu; f_80045C80(c); // 80046358
  c->r[4]=R16(c->r[25]+0x00005020u); // 8004635C
  c->r[3]=c->r[31]+0x00000268u; // 80046360
  c->r[5]=R16(c->r[25]+0x00005022u); // 80046364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046368
  c->lr=0x80046370u; f_80045C80(c); // 8004636C
  c->r[4]=0u+0xCD000000u; // 80046370
  c->r[3]=c->r[31]+0x00000288u; // 80046374
  c->r[4]=R32(c->r[4]+0x00006014u); // 80046378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004637C
  c->lr=0x80046384u; f_80045C80(c); // 80046380
L_80046384:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF8B2Cu); // 80046384
  c->r[3]=c->r[31]+0x000002A4u; // 80046388
  c->r[5]=R32(c->r[13]+0xFFFF8B28u); // 8004638C
  c->r[7]=R32(c->r[13]+0xFFFF8B30u); // 80046390
  c->r[8]=R32(c->r[13]+0xFFFF8B34u); // 80046394
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046398
  c->lr=0x800463A0u; f_80045C80(c); // 8004639C
  c->lr=0x800463A4u; f_800427A0(c); // 800463A0
  c->r[11]=c->r[1]+0x00000030u; // 800463A4
  c->lr=0x800463ACu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800463A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800463AC
  c->lr=c->r[0]; // 800463B0
  c->r[1]=c->r[1]+0x00000030u; // 800463B4
  return; // 800463B8
}

// fn_800463C0
void f_800463C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800463C0
  c->r[0]=c->lr; // 800463C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800463C8
  c->r[11]=c->r[1]+0x00000030u; // 800463CC
  c->lr=0x800463D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800463D0
  c->r[25]=c->r[4]|c->r[4]; // 800463D4
  c->r[29]=c->r[5]|c->r[5]; // 800463D8
  c->r[30]=c->r[3]|c->r[3]; // 800463DC
  c->r[4]=0u+0x00000000u; // 800463E0
  c->r[5]=0u+0x00002000u; // 800463E4
  c->lr=0x800463ECu; f_80004714(c); // 800463E8
  cmps(c,0,(int32_t)c->r[25],0); // 800463EC
  if (!crb(c,2)) { goto L_80046400; } // 800463F0
  c->r[0]=0u+0x00000000u; // 800463F4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800463F8
  goto L_80046524; // 800463FC
L_80046400:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80046400
  c->r[31]=c->r[25]|c->r[25]; // 80046404
  c->r[26]=c->r[30]+0x00002000u; // 80046408
  c->r[28]=c->r[29]+c->r[0]; // 8004640C
  goto L_8004643C; // 80046410
L_80046414:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 80046414
  c->r[3]=c->r[27]|c->r[27]; // 80046418
  c->lr=0x80046420u; f_8006DD10(c); // 8004641C
  c->r[0]=c->r[3]+0x00000001u; // 80046420
  c->r[4]=c->r[27]|c->r[27]; // 80046424
  c->r[26]=c->r[26]-c->r[0]; // 80046428
  c->r[3]=c->r[26]|c->r[26]; // 8004642C
  c->lr=0x80046434u; f_80075140(c); // 80046430
  c->r[0]=c->r[26]-c->r[30]; // 80046434
  W32(c->r[28]+0x00000000u,c->r[0]); // 80046438
L_8004643C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 8004643C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80046440
  if (!crb(c,0)) { IRQCHK(c); goto L_80046414; } // 80046444
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80046448
  c->r[0]=c->r[26]-c->r[30]; // 8004644C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80046450
  c->r[7]=0u+0x00000000u; // 80046454
  c->r[6]=c->r[30]+c->r[4]; // 80046458
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8004645C
  c->r[6]=c->r[6]-c->r[0]; // 80046460
  if (crb(c,2)) { goto L_80046514; } // 80046464
  cmpu(c,0,c->r[3],0x00000008u); // 80046468
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 8004646C
  if (!crb(c,1)) { goto L_800464E0; } // 80046470
  c->r[0]=c->r[3]+0x00000007u; // 80046474
  c->r[4]=c->r[29]|c->r[29]; // 80046478
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8004647C
  c->r[5]=c->r[6]|c->r[6]; // 80046480
  c->ctr=c->r[0]; // 80046484
  cmpu(c,0,c->r[3],0x00000000u); // 80046488
  if (!crb(c,1)) { goto L_800464E0; } // 8004648C
L_80046490:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80046490
  c->r[7]=c->r[7]+0x00000008u; // 80046494
  W32(c->r[5]+0x00000000u,c->r[0]); // 80046498
  c->r[0]=R32(c->r[4]+0x00000004u); // 8004649C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800464A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800464A4
  W32(c->r[5]+0x00000008u,c->r[0]); // 800464A8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800464AC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800464B0
  c->r[0]=R32(c->r[4]+0x00000010u); // 800464B4
  W32(c->r[5]+0x00000010u,c->r[0]); // 800464B8
  c->r[0]=R32(c->r[4]+0x00000014u); // 800464BC
  W32(c->r[5]+0x00000014u,c->r[0]); // 800464C0
  c->r[0]=R32(c->r[4]+0x00000018u); // 800464C4
  W32(c->r[5]+0x00000018u,c->r[0]); // 800464C8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800464CC
  c->r[4]=c->r[4]+0x00000020u; // 800464D0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800464D4
  c->r[5]=c->r[5]+0x00000020u; // 800464D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80046490; } // 800464DC
L_800464E0:;
  c->r[3]=c->r[31]+0x00000001u; // 800464E0
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800464E4
  c->r[0]=c->r[3]-c->r[7]; // 800464E8
  c->r[4]=c->r[29]+c->r[5]; // 800464EC
  c->r[5]=c->r[6]+c->r[5]; // 800464F0
  c->ctr=c->r[0]; // 800464F4
  cmpu(c,0,c->r[7],c->r[3]); // 800464F8
  if (!crb(c,0)) { goto L_80046514; } // 800464FC
L_80046500:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80046500
  c->r[4]=c->r[4]+0x00000004u; // 80046504
  W32(c->r[5]+0x00000000u,c->r[0]); // 80046508
  c->r[5]=c->r[5]+0x00000004u; // 8004650C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80046500; } // 80046510
L_80046514:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80046514
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80046518
  c->r[0]=c->r[0]-c->r[30]; // 8004651C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80046520
L_80046524:;
  c->r[11]=c->r[1]+0x00000030u; // 80046524
  c->r[3]=0u+0x00000001u; // 80046528
  c->lr=0x80046530u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004652C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80046530
  c->lr=c->r[0]; // 80046534
  c->r[1]=c->r[1]+0x00000030u; // 80046538
  return; // 8004653C
}

// Utf16ToArg
void f_80046540(Ctx* __restrict c) {
  trace_call(0x80046540u);
  cmps(c,0,(int32_t)c->r[4],0); // 80046540
  if (crb(c,2)) { goto L_80046690; } // 80046544
  c->r[6]=0u+0x00000004u; // 80046548
  c->r[0]=0u+0x00000002u; // 8004654C
  goto L_80046668; // 80046550
  c->r[0]=c->r[0]|0x00000000u; // 80046554
L_80046558:;
  c->r[10]=0u+0x00000000u; // 80046558
  c->ctr=c->r[0]; // 8004655C
L_80046560:;
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 80046560
  c->r[8]=0u+0x000000F0u; // 80046564
  if (crb(c,2)) { goto L_80046570; } // 80046568
  c->r[8]=0u+0x0000000Fu; // 8004656C
L_80046570:;
  c->r[5]=0u-c->r[9]; // 80046570
  c->r[7]=R8(c->r[4]+0x00000000u); // 80046574
  c->r[5]=c->r[5]|c->r[9]; // 80046578
  c->r[5]=sraw(c,c->r[5],31); // 8004657C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80046580
  c->r[5]=c->r[6]&~c->r[5]; // 80046584
  c->r[7]=c->r[7]&c->r[8]; // 80046588
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 8004658C
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 80046590
  if (crb(c,0)) { goto L_800465AC; } // 80046594
  cmps(c,0,(int32_t)c->r[5],10); // 80046598
  if (!crb(c,0)) { goto L_800465AC; } // 8004659C
  c->r[5]=c->r[5]+0x00000030u; // 800465A0
  W8(c->r[3]+0x00000000u,c->r[5]); // 800465A4
  goto L_800465D0; // 800465A8
L_800465AC:;
  cmps(c,0,(int32_t)c->r[5],10); // 800465AC
  if (crb(c,0)) { goto L_800465C8; } // 800465B0
  cmps(c,0,(int32_t)c->r[5],16); // 800465B4
  if (!crb(c,0)) { goto L_800465C8; } // 800465B8
  c->r[5]=c->r[5]+0x00000057u; // 800465BC
  W8(c->r[3]+0x00000000u,c->r[5]); // 800465C0
  goto L_800465D0; // 800465C4
L_800465C8:;
  c->r[3]=0u+0x00000000u; // 800465C8
  return; // 800465CC
L_800465D0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800465D0
  if (crb(c,2)) { goto L_800465DC; } // 800465D4
  c->r[4]=c->r[4]+0x00000001u; // 800465D8
L_800465DC:;
  c->r[10]=c->r[10]+0x00000001u; // 800465DC
  c->r[8]=0u+0x000000F0u; // 800465E0
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 800465E4
  if (crb(c,2)) { goto L_800465F0; } // 800465E8
  c->r[8]=0u+0x0000000Fu; // 800465EC
L_800465F0:;
  c->r[5]=0u-c->r[9]; // 800465F0
  c->r[7]=R8(c->r[4]+0x00000000u); // 800465F4
  c->r[5]=c->r[5]|c->r[9]; // 800465F8
  c->r[5]=sraw(c,c->r[5],31); // 800465FC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80046600
  c->r[5]=c->r[6]&~c->r[5]; // 80046604
  c->r[7]=c->r[7]&c->r[8]; // 80046608
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 8004660C
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 80046610
  if (crb(c,0)) { goto L_8004662C; } // 80046614
  cmps(c,0,(int32_t)c->r[5],10); // 80046618
  if (!crb(c,0)) { goto L_8004662C; } // 8004661C
  c->r[5]=c->r[5]+0x00000030u; // 80046620
  W8(c->r[3]+0x00000001u,c->r[5]); // 80046624
  goto L_80046650; // 80046628
L_8004662C:;
  cmps(c,0,(int32_t)c->r[5],10); // 8004662C
  if (crb(c,0)) { goto L_80046648; } // 80046630
  cmps(c,0,(int32_t)c->r[5],16); // 80046634
  if (!crb(c,0)) { goto L_80046648; } // 80046638
  c->r[5]=c->r[5]+0x00000057u; // 8004663C
  W8(c->r[3]+0x00000001u,c->r[5]); // 80046640
  goto L_80046650; // 80046644
L_80046648:;
  c->r[3]=0u+0x00000000u; // 80046648
  return; // 8004664C
L_80046650:;
  cmps(c,0,(int32_t)c->r[9],0); // 80046650
  c->r[3]=c->r[3]+0x00000002u; // 80046654
  if (crb(c,2)) { goto L_80046660; } // 80046658
  c->r[4]=c->r[4]+0x00000001u; // 8004665C
L_80046660:;
  c->r[10]=c->r[10]+0x00000001u; // 80046660
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80046560; } // 80046664
L_80046668:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 80046668
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 8004666C
  if (!crb(c,2)) { IRQCHK(c); goto L_80046558; } // 80046670
  c->r[5]=R8(c->r[4]+0x00000001u); // 80046674
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 80046678
  if (!crb(c,2)) { IRQCHK(c); goto L_80046558; } // 8004667C
  c->r[0]=0u+0x00000000u; // 80046680
  W8(c->r[3]+0x00000000u,c->r[0]); // 80046684
  c->r[3]=0u+0x00000001u; // 80046688
  return; // 8004668C
L_80046690:;
  c->r[3]=0u+0x00000000u; // 80046690
  return; // 80046694
}

// fn_800466A0
void f_800466A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800466A0
  c->r[0]=c->lr; // 800466A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800466A8
  c->r[11]=c->r[1]+0x00000030u; // 800466AC
  c->lr=0x800466B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800466B0
  c->r[27]=c->r[4]|c->r[4]; // 800466B4
  c->r[28]=c->r[5]|c->r[5]; // 800466B8
  c->r[30]=c->r[3]|c->r[3]; // 800466BC
  c->r[4]=0u+0x00000000u; // 800466C0
  c->r[5]=0u+0x00002000u; // 800466C4
  c->lr=0x800466CCu; f_80004714(c); // 800466C8
  cmps(c,0,(int32_t)c->r[27],0); // 800466CC
  if (!crb(c,2)) { goto L_800466E0; } // 800466D0
  c->r[0]=0u+0x00000000u; // 800466D4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800466D8
  goto L_80046850; // 800466DC
L_800466E0:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800466E0
  c->r[31]=c->r[27]|c->r[27]; // 800466E4
  c->r[29]=c->r[30]+0x00002000u; // 800466E8
  c->r[26]=c->r[28]+c->r[0]; // 800466EC
  goto L_80046768; // 800466F0
L_800466F4:;
  cmps(c,0,(int32_t)c->r[27],2); // 800466F4
  if (crb(c,0)) { goto L_80046710; } // 800466F8
  c->r[3]=rotl(c->r[27],1)&0x00000001u; // 800466FC
  c->r[0]=rotl(c->r[27],0)&0x00000001u; // 80046700
  c->r[0]=c->r[0]^c->r[3]; // 80046704
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 80046708
  if (crb(c,2)) { goto L_8004673C; } // 8004670C
L_80046710:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 80046710
  c->r[3]=c->r[25]|c->r[25]; // 80046714
  c->lr=0x8004671Cu; f_8006DD10(c); // 80046718
  c->r[0]=c->r[3]+0x00000001u; // 8004671C
  c->r[4]=c->r[25]|c->r[25]; // 80046720
  c->r[29]=c->r[29]-c->r[0]; // 80046724
  c->r[3]=c->r[29]|c->r[29]; // 80046728
  c->lr=0x80046730u; f_80075140(c); // 8004672C
  c->r[0]=c->r[29]-c->r[30]; // 80046730
  W32(c->r[26]+0x00000000u,c->r[0]); // 80046734
  goto L_80046768; // 80046738
L_8004673C:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 8004673C
  c->r[3]=c->r[25]|c->r[25]; // 80046740
  c->lr=0x80046748u; f_80075940(c); // 80046744
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80046748
  c->r[4]=c->r[25]|c->r[25]; // 8004674C
  c->r[0]=c->r[3]+0x00000001u; // 80046750
  c->r[29]=c->r[29]-c->r[0]; // 80046754
  c->r[3]=c->r[29]|c->r[29]; // 80046758
  c->lr=0x80046760u; f_80046540(c); // 8004675C
  c->r[0]=c->r[29]-c->r[30]; // 80046760
  W32(c->r[26]+0x00000000u,c->r[0]); // 80046764
L_80046768:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 80046768
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 8004676C
  if (!crb(c,0)) { IRQCHK(c); goto L_800466F4; } // 80046770
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80046774
  c->r[0]=c->r[29]-c->r[30]; // 80046778
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8004677C
  c->r[7]=0u+0x00000000u; // 80046780
  c->r[6]=c->r[30]+c->r[4]; // 80046784
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80046788
  c->r[6]=c->r[6]-c->r[0]; // 8004678C
  if (crb(c,2)) { goto L_80046840; } // 80046790
  cmpu(c,0,c->r[3],0x00000008u); // 80046794
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 80046798
  if (!crb(c,1)) { goto L_8004680C; } // 8004679C
  c->r[0]=c->r[3]+0x00000007u; // 800467A0
  c->r[4]=c->r[28]|c->r[28]; // 800467A4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800467A8
  c->r[5]=c->r[6]|c->r[6]; // 800467AC
  c->ctr=c->r[0]; // 800467B0
  cmpu(c,0,c->r[3],0x00000000u); // 800467B4
  if (!crb(c,1)) { goto L_8004680C; } // 800467B8
L_800467BC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800467BC
  c->r[7]=c->r[7]+0x00000008u; // 800467C0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800467C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800467C8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800467CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800467D0
  W32(c->r[5]+0x00000008u,c->r[0]); // 800467D4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800467D8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800467DC
  c->r[0]=R32(c->r[4]+0x00000010u); // 800467E0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800467E4
  c->r[0]=R32(c->r[4]+0x00000014u); // 800467E8
  W32(c->r[5]+0x00000014u,c->r[0]); // 800467EC
  c->r[0]=R32(c->r[4]+0x00000018u); // 800467F0
  W32(c->r[5]+0x00000018u,c->r[0]); // 800467F4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800467F8
  c->r[4]=c->r[4]+0x00000020u; // 800467FC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80046800
  c->r[5]=c->r[5]+0x00000020u; // 80046804
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800467BC; } // 80046808
L_8004680C:;
  c->r[3]=c->r[31]+0x00000001u; // 8004680C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80046810
  c->r[0]=c->r[3]-c->r[7]; // 80046814
  c->r[4]=c->r[28]+c->r[5]; // 80046818
  c->r[5]=c->r[6]+c->r[5]; // 8004681C
  c->ctr=c->r[0]; // 80046820
  cmpu(c,0,c->r[7],c->r[3]); // 80046824
  if (!crb(c,0)) { goto L_80046840; } // 80046828
L_8004682C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004682C
  c->r[4]=c->r[4]+0x00000004u; // 80046830
  W32(c->r[5]+0x00000000u,c->r[0]); // 80046834
  c->r[5]=c->r[5]+0x00000004u; // 80046838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004682C; } // 8004683C
L_80046840:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80046840
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80046844
  c->r[0]=c->r[0]-c->r[30]; // 80046848
  W32(c->r[30]+0x00000008u,c->r[0]); // 8004684C
L_80046850:;
  c->r[11]=c->r[1]+0x00000030u; // 80046850
  c->r[3]=0u+0x00000001u; // 80046854
  c->lr=0x8004685Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80046858
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004685C
  c->lr=c->r[0]; // 80046860
  c->r[1]=c->r[1]+0x00000030u; // 80046864
  return; // 80046868
}

// fn_80046870
void f_80046870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80046870
  c->r[0]=c->lr; // 80046874
  W32(c->r[1]+0x00000014u,c->r[0]); // 80046878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004687C
  c->r[31]=c->r[3]|c->r[3]; // 80046880
  c->lr=0x80046888u; f_80045110(c); // 80046884
  /* sync */ // 80046888
  /* isync */ // 8004688C
  c->ctr=c->r[31]; // 80046890
  if (true) { dispatch(c,c->ctr); return; } // 80046894
}

// fn_80046898
void f_80046898(Ctx* __restrict c) {
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80046898
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004689C
  c->lr=c->r[0]; // 800468A0
  c->r[1]=c->r[1]+0x00000010u; // 800468A4
  return; // 800468A8
}

// fn_800468B0
void f_800468B0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800468B0
  W32(c->r[13]+0xFFFF8B10u,c->r[0]); // 800468B4
  return; // 800468B8
}

// __OSGetExecParams
void f_800468C0(Ctx* __restrict c) {
  trace_call(0x800468C0u);
  c->r[5]=0u+0x80000000u; // 800468C0
  c->r[4]=R32(c->r[5]+0x000030F0u); // 800468C4
  cmpu(c,0,c->r[4],c->r[5]); // 800468C8
  if (crb(c,0)) { goto L_800468D8; } // 800468CC
  c->r[5]=0u+0x0000001Cu; // 800468D0
  f_800043C4(c); return; // 800468D4
L_800468D8:;
  c->r[0]=0u+0x00000000u; // 800468D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800468DC
  return; // 800468E0
}

// fn_800468F0
void f_800468F0(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF8B08u,c->r[3]); // 800468F0
  return; // 800468F4
}

// fn_80046900
void f_80046900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80046900
  c->r[0]=c->lr; // 80046904
  W32(c->r[1]+0x00000044u,c->r[0]); // 80046908
  c->r[11]=c->r[1]+0x00000040u; // 8004690C
  c->lr=0x80046914u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80046910
  c->r[30]=0u+0x80140000u; // 80046914
  c->r[3]=0u+0x00000001u; // 80046918
  c->r[0]=0u+0x00000000u; // 8004691C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80046920
  c->r[30]=c->r[30]+0xFFFF83B0u; // 80046924
  c->r[31]=0u+0xFFFFFFFFu; // 80046928
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004692C
  c->r[3]=0u+0x00000020u; // 80046930
  c->r[4]=0u+0x00000020u; // 80046934
  c->lr=0x8004693Cu; f_80044AC0(c); // 80046938
  c->r[27]=c->r[3]|c->r[3]; // 8004693C
  c->r[3]=0u+0x00000800u; // 80046940
  c->r[4]=0u+0x00000020u; // 80046944
  c->lr=0x8004694Cu; f_80044AC0(c); // 80046948
  c->r[28]=c->r[3]|c->r[3]; // 8004694C
  c->r[3]=0u+0x00004A00u; // 80046950
  c->r[4]=0u+0x00000040u; // 80046954
  c->lr=0x8004695Cu; f_80044AC0(c); // 80046958
  c->r[25]=c->r[3]|c->r[3]; // 8004695C
  c->r[3]=0u+0x000000E0u; // 80046960
  c->r[4]=0u+0x00000020u; // 80046964
  c->lr=0x8004696Cu; f_80044AC0(c); // 80046968
  c->r[4]=0u+0x80000000u; // 8004696C
  c->r[5]=R32(c->r[13]+0xFFFF8B00u); // 80046970
  c->r[0]=R32(c->r[4]+0x00003194u); // 80046974
  c->r[29]=c->r[3]|c->r[3]; // 80046978
  cmpu(c,0,c->r[5],c->r[0]); // 8004697C
  if (!crb(c,2)) { goto L_80046A24; } // 80046980
  c->r[0]=R32(c->r[4]+0x00003198u); // 80046984
  cmps(c,0,(int32_t)c->r[0],0); // 80046988
  if (crb(c,2)) { goto L_80046A24; } // 8004698C
  c->lr=0x80046994u; f_800DB3E0(c); // 80046990
  cmps(c,0,(int32_t)c->r[3],0); // 80046994
  c->r[31]=c->r[3]|c->r[3]; // 80046998
  if (!crb(c,2)) { goto L_800469B0; } // 8004699C
  c->r[4]=c->r[29]|c->r[29]; // 800469A0
  c->r[3]=0u+0x00000000u; // 800469A4
  c->lr=0x800469ACu; f_800DB650(c); // 800469A8
  c->r[31]=c->r[3]|c->r[3]; // 800469AC
L_800469B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800469B0
  if (!crb(c,2)) { goto L_800469C8; } // 800469B4
  c->r[4]=c->r[1]+0x00000010u; // 800469B8
  c->r[3]=0u+0x00000000u; // 800469BC
  c->lr=0x800469C4u; f_800DB700(c); // 800469C0
  c->r[31]=c->r[3]|c->r[3]; // 800469C4
L_800469C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800469C8
  if (!crb(c,2)) { goto L_800469E0; } // 800469CC
  c->r[3]=c->r[25]|c->r[25]; // 800469D0
  c->r[4]=c->r[1]+0x00000010u; // 800469D4
  c->lr=0x800469DCu; f_800DB700(c); // 800469D8
  c->r[31]=c->r[3]|c->r[3]; // 800469DC
L_800469E0:;
  c->lr=0x800469E4u; f_800DB440(c); // 800469E0
  c->lr=0x800469E8u; f_8004F960(c); // 800469E4
  cmps(c,0,(int32_t)c->r[3],0); // 800469E8
  if (crb(c,2)) { goto L_80046A24; } // 800469EC
  c->r[3]=0u+0x00000000u; // 800469F0
  c->r[0]=0u+0xFFFFFFFFu; // 800469F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800469F8
  c->r[3]=c->r[29]|c->r[29]; // 800469FC
  c->r[4]=c->r[1]+0x0000000Cu; // 80046A00
  c->r[5]=c->r[1]+0x00000008u; // 80046A04
  W32(c->r[1]+0x00000008u,c->r[0]); // 80046A08
  c->lr=0x80046A10u; f_8004FE10(c); // 80046A0C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80046A10
  cmps(c,0,(int32_t)c->r[0],0); // 80046A14
  if (!crb(c,2)) { goto L_80046A24; } // 80046A18
  c->lr=0x80046A20u; f_8004FB40(c); // 80046A1C
  c->lr=0x80046A24u; f_8004B7C0(c); // 80046A20
L_80046A24:;
  cmps(c,0,(int32_t)c->r[31],0); // 80046A24
  if (!crb(c,2)) { goto L_80046A48; } // 80046A28
  c->r[3]=0u+0x80000000u; // 80046A2C
  c->r[26]=c->r[28]|c->r[28]; // 80046A30
  c->r[0]=R32(c->r[3]+0x00003194u); // 80046A34
  W32(c->r[28]+0x00000004u,c->r[0]); // 80046A38
  c->r[0]=R32(c->r[3]+0x00003198u); // 80046A3C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80046A40
  goto L_80046DDC; // 80046A44
L_80046A48:;
  c->r[0]=0u+0x00000000u; // 80046A48
  c->r[3]=0u+0x80040000u; // 80046A4C
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046A50
  c->r[3]=c->r[3]+0x000068F0u; // 80046A54
  c->lr=0x80046A5Cu; f_80058BE0(c); // 80046A58
  c->r[0]=c->r[0]|0x00000000u; // 80046A5C
L_80046A60:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046A60
  cmps(c,0,(int32_t)c->r[0],0); // 80046A64
  if (crb(c,2)) { IRQCHK(c); goto L_80046A60; } // 80046A68
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046A6C
  cmps(c,0,(int32_t)c->r[0],2); // 80046A70
  if (crb(c,2)) { goto L_80046A94; } // 80046A74
  if (!crb(c,0)) { goto L_80046A88; } // 80046A78
  cmps(c,0,(int32_t)c->r[0],1); // 80046A7C
  if (!crb(c,0)) { goto L_80046ACC; } // 80046A80
  goto L_80046ABC; // 80046A84
L_80046A88:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046A88
  if (crb(c,2)) { goto L_80046AA8; } // 80046A8C
  goto L_80046ABC; // 80046A90
L_80046A94:;
  c->r[3]=c->r[30]+0x00000000u; // 80046A94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046A98
  c->lr=0x80046AA0u; f_80045C80(c); // 80046A9C
  c->lr=0x80046AA4u; f_8004B7C0(c); // 80046AA0
  goto L_80046ACC; // 80046AA4
L_80046AA8:;
  c->r[3]=c->r[30]+0x00000018u; // 80046AA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046AAC
  c->lr=0x80046AB4u; f_80045C80(c); // 80046AB0
  c->lr=0x80046AB8u; f_8004B7C0(c); // 80046AB4
  goto L_80046ACC; // 80046AB8
L_80046ABC:;
  c->r[3]=c->r[30]+0x00000034u; // 80046ABC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046AC0
  c->lr=0x80046AC8u; f_80045C80(c); // 80046AC4
  c->lr=0x80046ACCu; f_8004B7C0(c); // 80046AC8
L_80046ACC:;
  c->r[0]=0u+0x00000000u; // 80046ACC
  c->r[6]=0u+0x80040000u; // 80046AD0
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046AD4
  c->r[3]=c->r[27]|c->r[27]; // 80046AD8
  c->r[6]=c->r[6]+0x000068F0u; // 80046ADC
  c->r[4]=0u+0x00000020u; // 80046AE0
  c->r[5]=0u+0x00010000u; // 80046AE4
  c->lr=0x80046AECu; f_80058D50(c); // 80046AE8
  c->r[0]=c->r[0]|0x00000000u; // 80046AEC
L_80046AF0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80046AF4
  if (crb(c,2)) { IRQCHK(c); goto L_80046AF0; } // 80046AF8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046AFC
  cmps(c,0,(int32_t)c->r[0],2); // 80046B00
  if (crb(c,2)) { goto L_80046B24; } // 80046B04
  if (!crb(c,0)) { goto L_80046B18; } // 80046B08
  cmps(c,0,(int32_t)c->r[0],1); // 80046B0C
  if (!crb(c,0)) { goto L_80046B5C; } // 80046B10
  goto L_80046B4C; // 80046B14
L_80046B18:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046B18
  if (crb(c,2)) { goto L_80046B38; } // 80046B1C
  goto L_80046B4C; // 80046B20
L_80046B24:;
  c->r[3]=c->r[30]+0x00000000u; // 80046B24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046B28
  c->lr=0x80046B30u; f_80045C80(c); // 80046B2C
  c->lr=0x80046B34u; f_8004B7C0(c); // 80046B30
  goto L_80046B5C; // 80046B34
L_80046B38:;
  c->r[3]=c->r[30]+0x00000018u; // 80046B38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046B3C
  c->lr=0x80046B44u; f_80045C80(c); // 80046B40
  c->lr=0x80046B48u; f_8004B7C0(c); // 80046B44
  goto L_80046B5C; // 80046B48
L_80046B4C:;
  c->r[3]=c->r[30]+0x00000034u; // 80046B4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046B50
  c->lr=0x80046B58u; f_80045C80(c); // 80046B54
  c->lr=0x80046B5Cu; f_8004B7C0(c); // 80046B58
L_80046B5C:;
  c->r[0]=0u+0x00000000u; // 80046B5C
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046B60
  c->r[6]=0u+0x80040000u; // 80046B64
  c->r[3]=c->r[28]|c->r[28]; // 80046B68
  c->r[5]=R32(c->r[27]+0x00000004u); // 80046B6C
  c->r[6]=c->r[6]+0x000068F0u; // 80046B70
  c->r[4]=0u+0x00000800u; // 80046B74
  c->lr=0x80046B7Cu; f_80058D50(c); // 80046B78
  c->r[0]=c->r[0]|0x00000000u; // 80046B7C
L_80046B80:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046B80
  cmps(c,0,(int32_t)c->r[0],0); // 80046B84
  if (crb(c,2)) { IRQCHK(c); goto L_80046B80; } // 80046B88
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046B8C
  cmps(c,0,(int32_t)c->r[0],2); // 80046B90
  if (crb(c,2)) { goto L_80046BB4; } // 80046B94
  if (!crb(c,0)) { goto L_80046BA8; } // 80046B98
  cmps(c,0,(int32_t)c->r[0],1); // 80046B9C
  if (!crb(c,0)) { goto L_80046BEC; } // 80046BA0
  goto L_80046BDC; // 80046BA4
L_80046BA8:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046BA8
  if (crb(c,2)) { goto L_80046BC8; } // 80046BAC
  goto L_80046BDC; // 80046BB0
L_80046BB4:;
  c->r[3]=c->r[30]+0x00000000u; // 80046BB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046BB8
  c->lr=0x80046BC0u; f_80045C80(c); // 80046BBC
  c->lr=0x80046BC4u; f_8004B7C0(c); // 80046BC0
  goto L_80046BEC; // 80046BC4
L_80046BC8:;
  c->r[3]=c->r[30]+0x00000018u; // 80046BC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046BCC
  c->lr=0x80046BD4u; f_80045C80(c); // 80046BD0
  c->lr=0x80046BD8u; f_8004B7C0(c); // 80046BD4
  goto L_80046BEC; // 80046BD8
L_80046BDC:;
  c->r[3]=c->r[30]+0x00000034u; // 80046BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046BE0
  c->lr=0x80046BE8u; f_80045C80(c); // 80046BE4
  c->lr=0x80046BECu; f_8004B7C0(c); // 80046BE8
L_80046BEC:;
  c->r[4]=R32(c->r[13]+0xFFFF8B00u); // 80046BEC
  c->r[6]=c->r[28]|c->r[28]; // 80046BF0
  c->r[26]=0u+0x00000000u; // 80046BF4
  c->r[5]=0u+0x00000000u; // 80046BF8
  goto L_80046C18; // 80046BFC
L_80046C00:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80046C00
  cmpu(c,0,c->r[0],c->r[4]); // 80046C04
  if (!crb(c,2)) { goto L_80046C10; } // 80046C08
  c->r[26]=c->r[6]|c->r[6]; // 80046C0C
L_80046C10:;
  c->r[6]=c->r[6]+0x00000008u; // 80046C10
  c->r[5]=c->r[5]+0x00000001u; // 80046C14
L_80046C18:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80046C18
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80046C1C
  cmpu(c,0,c->r[3],c->r[0]); // 80046C20
  if (crb(c,0)) { IRQCHK(c); goto L_80046C00; } // 80046C24
  cmps(c,0,(int32_t)c->r[26],0); // 80046C28
  if (!crb(c,2)) { goto L_80046C68; } // 80046C2C
  c->r[4]=R32(c->r[13]+0xFFFF8B00u); // 80046C30
  c->r[6]=c->r[28]+0x00000020u; // 80046C34
  c->r[5]=0u+0x00000000u; // 80046C38
  goto L_80046C58; // 80046C3C
L_80046C40:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80046C40
  cmpu(c,0,c->r[0],c->r[4]); // 80046C44
  if (!crb(c,2)) { goto L_80046C50; } // 80046C48
  c->r[26]=c->r[6]|c->r[6]; // 80046C4C
L_80046C50:;
  c->r[6]=c->r[6]+0x00000008u; // 80046C50
  c->r[5]=c->r[5]+0x00000001u; // 80046C54
L_80046C58:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80046C58
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80046C5C
  cmpu(c,0,c->r[3],c->r[0]); // 80046C60
  if (crb(c,0)) { IRQCHK(c); goto L_80046C40; } // 80046C64
L_80046C68:;
  cmps(c,0,(int32_t)c->r[26],0); // 80046C68
  if (!crb(c,2)) { goto L_80046C80; } // 80046C6C
  c->r[3]=c->r[30]+0x00000054u; // 80046C70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046C74
  c->lr=0x80046C7Cu; f_80045C80(c); // 80046C78
  c->lr=0x80046C80u; f_8004B7C0(c); // 80046C7C
L_80046C80:;
  c->r[4]=0u+0x80000000u; // 80046C80
  c->r[0]=R32(c->r[26]+0x00000004u); // 80046C84
  W32(c->r[4]+0x00003194u,c->r[0]); // 80046C88
  c->r[0]=0u+0x00000000u; // 80046C8C
  c->r[3]=R32(c->r[26]+0x00000000u); // 80046C90
  W32(c->r[4]+0x00003198u,c->r[3]); // 80046C94
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046C98
  c->r[0]=R8(c->r[4]+0x00003187u); // 80046C9C
  cmpu(c,0,c->r[0],0x00000080u); // 80046CA0
  if (!crb(c,2)) { goto L_80046CD0; } // 80046CA4
  c->r[9]=0u+0x80040000u; // 80046CA8
  c->r[3]=R32(c->r[26]+0x00000000u); // 80046CAC
  c->r[5]=R32(c->r[1]+0x00000010u); // 80046CB0
  c->r[4]=c->r[29]|c->r[29]; // 80046CB4
  c->r[6]=c->r[25]|c->r[25]; // 80046CB8
  c->r[9]=c->r[9]+0x000068F0u; // 80046CBC
  c->r[7]=0u+0x00000000u; // 80046CC0
  c->r[8]=0u+0x00000000u; // 80046CC4
  c->lr=0x80046CCCu; f_800584C0(c); // 80046CC8
  goto L_80046CF0; // 80046CCC
L_80046CD0:;
  c->r[8]=0u+0x80040000u; // 80046CD0
  c->r[3]=R32(c->r[26]+0x00000000u); // 80046CD4
  c->r[7]=c->r[25]|c->r[25]; // 80046CD8
  c->r[4]=0u+0x00000000u; // 80046CDC
  c->r[8]=c->r[8]+0x000068F0u; // 80046CE0
  c->r[5]=0u+0x00000000u; // 80046CE4
  c->r[6]=0u+0x00000000u; // 80046CE8
  c->lr=0x80046CF0u; f_80058250(c); // 80046CEC
L_80046CF0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80046CF4
  if (crb(c,2)) { IRQCHK(c); goto L_80046CF0; } // 80046CF8
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046CFC
  cmps(c,0,(int32_t)c->r[0],2); // 80046D00
  if (crb(c,2)) { goto L_80046D24; } // 80046D04
  if (!crb(c,0)) { goto L_80046D18; } // 80046D08
  cmps(c,0,(int32_t)c->r[0],1); // 80046D0C
  if (!crb(c,0)) { goto L_80046D5C; } // 80046D10
  goto L_80046D4C; // 80046D14
L_80046D18:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046D18
  if (crb(c,2)) { goto L_80046D38; } // 80046D1C
  goto L_80046D4C; // 80046D20
L_80046D24:;
  c->r[3]=c->r[30]+0x00000000u; // 80046D24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046D28
  c->lr=0x80046D30u; f_80045C80(c); // 80046D2C
  c->lr=0x80046D34u; f_8004B7C0(c); // 80046D30
  goto L_80046D5C; // 80046D34
L_80046D38:;
  c->r[3]=c->r[30]+0x00000018u; // 80046D38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046D3C
  c->lr=0x80046D44u; f_80045C80(c); // 80046D40
  c->lr=0x80046D48u; f_8004B7C0(c); // 80046D44
  goto L_80046D5C; // 80046D48
L_80046D4C:;
  c->r[3]=c->r[30]+0x00000034u; // 80046D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046D50
  c->lr=0x80046D58u; f_80045C80(c); // 80046D54
  c->lr=0x80046D5Cu; f_8004B7C0(c); // 80046D58
L_80046D5C:;
  c->r[0]=0u+0x00000000u; // 80046D5C
  c->r[3]=0u+0x80040000u; // 80046D60
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046D64
  c->r[3]=c->r[3]+0x000068F0u; // 80046D68
  c->lr=0x80046D70u; f_80058BE0(c); // 80046D6C
L_80046D70:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046D70
  cmps(c,0,(int32_t)c->r[0],0); // 80046D74
  if (crb(c,2)) { IRQCHK(c); goto L_80046D70; } // 80046D78
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046D7C
  cmps(c,0,(int32_t)c->r[0],2); // 80046D80
  if (crb(c,2)) { goto L_80046DA4; } // 80046D84
  if (!crb(c,0)) { goto L_80046D98; } // 80046D88
  cmps(c,0,(int32_t)c->r[0],1); // 80046D8C
  if (!crb(c,0)) { goto L_80046DDC; } // 80046D90
  goto L_80046DCC; // 80046D94
L_80046D98:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046D98
  if (crb(c,2)) { goto L_80046DB8; } // 80046D9C
  goto L_80046DCC; // 80046DA0
L_80046DA4:;
  c->r[3]=c->r[30]+0x00000000u; // 80046DA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046DA8
  c->lr=0x80046DB0u; f_80045C80(c); // 80046DAC
  c->lr=0x80046DB4u; f_8004B7C0(c); // 80046DB0
  goto L_80046DDC; // 80046DB4
L_80046DB8:;
  c->r[3]=c->r[30]+0x00000018u; // 80046DB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046DBC
  c->lr=0x80046DC4u; f_80045C80(c); // 80046DC0
  c->lr=0x80046DC8u; f_8004B7C0(c); // 80046DC4
  goto L_80046DDC; // 80046DC8
L_80046DCC:;
  c->r[3]=c->r[30]+0x00000034u; // 80046DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046DD0
  c->lr=0x80046DD8u; f_80045C80(c); // 80046DD4
  c->lr=0x80046DDCu; f_8004B7C0(c); // 80046DD8
L_80046DDC:;
  c->r[23]=R32(c->r[25]+0x00000184u); // 80046DDC
  c->r[22]=R32(c->r[25]+0x00000188u); // 80046DE0
  c->lr=0x80046DE8u; f_800DB3E0(c); // 80046DE4
  cmps(c,0,(int32_t)c->r[3],0); // 80046DE8
  c->r[31]=c->r[3]|c->r[3]; // 80046DEC
  if (crb(c,2)) { goto L_80046E0C; } // 80046DF0
  c->r[4]=c->r[31]|c->r[31]; // 80046DF4
  c->r[3]=c->r[30]+0x00000084u; // 80046DF8
  c->r[5]=0u+0x0000040Du; // 80046DFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046E00
  c->lr=0x80046E08u; f_80045C80(c); // 80046E04
  c->lr=0x80046E0Cu; f_8004B870(c); // 80046E08
L_80046E0C:;
  c->r[4]=c->r[22]|c->r[22]; // 80046E0C
  c->r[3]=c->r[23]|c->r[23]; // 80046E10
  c->r[6]=c->r[1]+0x00000014u; // 80046E14
  c->r[5]=0u+0x00000000u; // 80046E18
  c->lr=0x80046E20u; f_800DB530(c); // 80046E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80046E20
  c->r[31]=c->r[3]|c->r[3]; // 80046E24
  cmpu(c,0,c->r[0],0x00000001u); // 80046E28
  if (!crb(c,2)) { goto L_80046E38; } // 80046E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80046E30
  if (crb(c,2)) { goto L_80046E50; } // 80046E34
L_80046E38:;
  c->r[4]=c->r[31]|c->r[31]; // 80046E38
  c->r[3]=c->r[30]+0x00000084u; // 80046E3C
  c->r[5]=0u+0x00000416u; // 80046E40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046E44
  c->lr=0x80046E4Cu; f_80045C80(c); // 80046E48
  c->lr=0x80046E50u; f_8004B870(c); // 80046E4C
L_80046E50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80046E50
  c->r[4]=0u+0x00000020u; // 80046E54
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80046E58
  c->r[0]=c->r[3]+0x0000001Fu; // 80046E5C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80046E60
  c->lr=0x80046E68u; f_80044AC0(c); // 80046E64
  c->r[24]=c->r[3]|c->r[3]; // 80046E68
  c->r[4]=c->r[22]|c->r[22]; // 80046E6C
  c->r[3]=c->r[23]|c->r[23]; // 80046E70
  c->r[6]=c->r[1]+0x00000014u; // 80046E74
  c->r[5]=c->r[24]|c->r[24]; // 80046E78
  c->lr=0x80046E80u; f_800DB530(c); // 80046E7C
  cmps(c,0,(int32_t)c->r[3],0); // 80046E80
  c->r[31]=c->r[3]|c->r[3]; // 80046E84
  if (crb(c,2)) { goto L_80046EA4; } // 80046E88
  c->r[4]=c->r[31]|c->r[31]; // 80046E8C
  c->r[3]=c->r[30]+0x00000084u; // 80046E90
  c->r[5]=0u+0x0000041Fu; // 80046E94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046E98
  c->lr=0x80046EA0u; f_80045C80(c); // 80046E9C
  c->lr=0x80046EA4u; f_8004B870(c); // 80046EA0
L_80046EA4:;
  c->lr=0x80046EA8u; f_80057E00(c); // 80046EA4
  c->r[5]=0u+0x80000000u; // 80046EA8
  c->r[4]=0u+0x00000100u; // 80046EAC
  c->r[28]=R32(c->r[5]+0x0000311Cu); // 80046EB0
  c->r[3]=c->r[5]+0x00003100u; // 80046EB4
  c->r[27]=R32(c->r[5]+0x00003120u); // 80046EB8
  c->lr=0x80046EC0u; f_80045040(c); // 80046EBC
  c->r[4]=c->r[22]|c->r[22]; // 80046EC0
  c->r[3]=c->r[23]|c->r[23]; // 80046EC4
  c->r[5]=c->r[24]|c->r[24]; // 80046EC8
  c->lr=0x80046ED0u; f_800DB490(c); // 80046ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80046ED0
  c->r[31]=c->r[3]|c->r[3]; // 80046ED4
  if (crb(c,2)) { goto L_80046EF4; } // 80046ED8
  c->r[4]=c->r[31]|c->r[31]; // 80046EDC
  c->r[3]=c->r[30]+0x00000084u; // 80046EE0
  c->r[5]=0u+0x0000042Fu; // 80046EE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046EE8
  c->lr=0x80046EF0u; f_80045C80(c); // 80046EEC
  c->lr=0x80046EF4u; f_8004B870(c); // 80046EF0
L_80046EF4:;
  c->lr=0x80046EF8u; f_800DB440(c); // 80046EF4
  c->r[31]=0u+0x80000000u; // 80046EF8
  c->r[4]=0u+0x00000100u; // 80046EFC
  c->r[3]=c->r[31]+0x00003100u; // 80046F00
  c->lr=0x80046F08u; f_80044FE0(c); // 80046F04
  c->r[3]=R32(c->r[31]+0x0000311Cu); // 80046F08
  cmpu(c,0,c->r[28],c->r[3]); // 80046F0C
  if (!crb(c,0)) { goto L_80046F64; } // 80046F10
  c->r[0]=R32(c->r[31]+0x00003120u); // 80046F14
  c->r[0]=c->r[3]-c->r[0]; // 80046F18
  c->r[0]=c->r[28]-c->r[0]; // 80046F1C
  W32(c->r[31]+0x00003120u,c->r[0]); // 80046F20
  c->r[3]=R32(c->r[31]+0x00003128u); // 80046F24
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80046F28
  c->r[0]=c->r[0]-c->r[3]; // 80046F2C
  c->r[0]=c->r[28]-c->r[0]; // 80046F30
  W32(c->r[31]+0x00003128u,c->r[0]); // 80046F34
  c->r[3]=R32(c->r[31]+0x00003130u); // 80046F38
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80046F3C
  c->r[0]=c->r[0]-c->r[3]; // 80046F40
  c->r[0]=c->r[28]-c->r[0]; // 80046F44
  W32(c->r[31]+0x00003130u,c->r[0]); // 80046F48
  c->r[3]=R32(c->r[31]+0x00003134u); // 80046F4C
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80046F50
  c->r[0]=c->r[0]-c->r[3]; // 80046F54
  c->r[0]=c->r[28]-c->r[0]; // 80046F58
  W32(c->r[31]+0x00003134u,c->r[0]); // 80046F5C
  W32(c->r[31]+0x0000311Cu,c->r[28]); // 80046F60
L_80046F64:;
  c->r[3]=0u+0x80000000u; // 80046F64
  c->r[0]=R32(c->r[3]+0x00003120u); // 80046F68
  cmpu(c,0,c->r[27],c->r[0]); // 80046F6C
  if (!crb(c,0)) { goto L_80046F78; } // 80046F70
  c->lr=0x80046F78u; f_8004ABC0(c); // 80046F74
L_80046F78:;
  c->lr=0x80046F7Cu; f_8004E140(c); // 80046F78
  c->lr=0x80046F80u; f_80084850(c); // 80046F7C
  c->lr=0x80046F84u; f_80084E00(c); // 80046F80
  c->lr=0x80046F88u; f_80057E50(c); // 80046F84
  c->r[0]=0u+0x00000000u; // 80046F88
  c->r[3]=0u+0x801A0000u; // 80046F8C
  c->r[4]=0u+0x80040000u; // 80046F90
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80046F94
  c->r[3]=c->r[3]+0xFFFFA720u; // 80046F98
  c->r[4]=c->r[4]+0x000068F0u; // 80046F9C
  c->lr=0x80046FA4u; f_800580C0(c); // 80046FA0
  c->r[0]=c->r[0]|0x00000000u; // 80046FA4
L_80046FA8:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80046FAC
  if (crb(c,2)) { IRQCHK(c); goto L_80046FA8; } // 80046FB0
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80046FB4
  cmps(c,0,(int32_t)c->r[0],2); // 80046FB8
  if (crb(c,2)) { goto L_80046FDC; } // 80046FBC
  if (!crb(c,0)) { goto L_80046FD0; } // 80046FC0
  cmps(c,0,(int32_t)c->r[0],1); // 80046FC4
  if (!crb(c,0)) { goto L_80047014; } // 80046FC8
  goto L_80047004; // 80046FCC
L_80046FD0:;
  cmps(c,0,(int32_t)c->r[0],16); // 80046FD0
  if (crb(c,2)) { goto L_80046FF0; } // 80046FD4
  goto L_80047004; // 80046FD8
L_80046FDC:;
  c->r[3]=c->r[30]+0x00000000u; // 80046FDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046FE0
  c->lr=0x80046FE8u; f_80045C80(c); // 80046FE4
  c->lr=0x80046FECu; f_8004B7C0(c); // 80046FE8
  goto L_80047014; // 80046FEC
L_80046FF0:;
  c->r[3]=c->r[30]+0x00000018u; // 80046FF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80046FF4
  c->lr=0x80046FFCu; f_80045C80(c); // 80046FF8
  c->lr=0x80047000u; f_8004B7C0(c); // 80046FFC
  goto L_80047014; // 80047000
L_80047004:;
  c->r[3]=c->r[30]+0x00000034u; // 80047004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80047008
  c->lr=0x80047010u; f_80045C80(c); // 8004700C
  c->lr=0x80047014u; f_8004B7C0(c); // 80047010
L_80047014:;
  c->r[0]=0u+0x00000000u; // 80047014
  W32(c->r[13]+0xFFFF8B08u,c->r[0]); // 80047018
  c->r[3]=0u+0x80000000u; // 8004701C
  c->r[0]=R8(c->r[3]+0x00003187u); // 80047020
  cmpu(c,0,c->r[0],0x00000080u); // 80047024
  if (!crb(c,2)) { goto L_80047054; } // 80047028
  c->r[9]=0u+0x80040000u; // 8004702C
  c->r[3]=R32(c->r[26]+0x00000000u); // 80047030
  c->r[5]=R32(c->r[1]+0x00000010u); // 80047034
  c->r[4]=c->r[29]|c->r[29]; // 80047038
  c->r[6]=c->r[25]|c->r[25]; // 8004703C
  c->r[9]=c->r[9]+0x000068F0u; // 80047040
  c->r[7]=0u+0x00000000u; // 80047044
  c->r[8]=0u+0x00000000u; // 80047048
  c->lr=0x80047050u; f_800584C0(c); // 8004704C
  goto L_80047078; // 80047050
L_80047054:;
  c->r[8]=0u+0x80040000u; // 80047054
  c->r[3]=R32(c->r[26]+0x00000000u); // 80047058
  c->r[7]=c->r[25]|c->r[25]; // 8004705C
  c->r[4]=0u+0x00000000u; // 80047060
  c->r[8]=c->r[8]+0x000068F0u; // 80047064
  c->r[5]=0u+0x00000000u; // 80047068
  c->r[6]=0u+0x00000000u; // 8004706C
  c->lr=0x80047074u; f_80058250(c); // 80047070
  c->r[0]=c->r[0]|0x00000000u; // 80047074
L_80047078:;
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80047078
  cmps(c,0,(int32_t)c->r[0],0); // 8004707C
  if (crb(c,2)) { IRQCHK(c); goto L_80047078; } // 80047080
  c->r[0]=R32(c->r[13]+0xFFFF8B08u); // 80047084
  cmps(c,0,(int32_t)c->r[0],2); // 80047088
  if (crb(c,2)) { goto L_800470AC; } // 8004708C
  if (!crb(c,0)) { goto L_800470A0; } // 80047090
  cmps(c,0,(int32_t)c->r[0],1); // 80047094
  if (!crb(c,0)) { goto L_800470E4; } // 80047098
  goto L_800470D4; // 8004709C
L_800470A0:;
  cmps(c,0,(int32_t)c->r[0],16); // 800470A0
  if (crb(c,2)) { goto L_800470C0; } // 800470A4
  goto L_800470D4; // 800470A8
L_800470AC:;
  c->r[3]=c->r[30]+0x00000000u; // 800470AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800470B0
  c->lr=0x800470B8u; f_80045C80(c); // 800470B4
  c->lr=0x800470BCu; f_8004B7C0(c); // 800470B8
  goto L_800470E4; // 800470BC
L_800470C0:;
  c->r[3]=c->r[30]+0x00000018u; // 800470C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800470C4
  c->lr=0x800470CCu; f_80045C80(c); // 800470C8
  c->lr=0x800470D0u; f_8004B7C0(c); // 800470CC
  goto L_800470E4; // 800470D0
L_800470D4:;
  c->r[3]=c->r[30]+0x00000034u; // 800470D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800470D8
  c->lr=0x800470E0u; f_80045C80(c); // 800470DC
  c->lr=0x800470E4u; f_8004B7C0(c); // 800470E0
L_800470E4:;
  c->r[11]=c->r[1]+0x00000040u; // 800470E4
  c->lr=0x800470ECu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800470E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800470EC
  c->lr=c->r[0]; // 800470F0
  c->r[1]=c->r[1]+0x00000040u; // 800470F4
  return; // 800470F8
}

// __OSLaunchMenu
void f_80047100(Ctx* __restrict c) {
  trace_call(0x80047100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047100
  c->r[0]=c->lr; // 80047104
  c->r[3]=0u+0x81280000u; // 80047108
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004710C
  c->r[0]=0u+0x00000001u; // 80047110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80047114
  W32(c->r[1]+0x00000008u,c->r[0]); // 80047118
  c->lr=0x80047120u; f_80044AB0(c); // 8004711C
  c->r[3]=0u+0x812F0000u; // 80047120
  c->lr=0x80047128u; f_80044A80(c); // 80047124
  c->lr=0x8004712Cu; f_800DB3E0(c); // 80047128
  cmps(c,0,(int32_t)c->r[3],0); // 8004712C
  if (!crb(c,2)) { goto L_800471B4; } // 80047130
  c->r[6]=c->r[1]+0x00000008u; // 80047134
  c->r[4]=0u+0x00000002u; // 80047138
  c->r[3]=0u+0x00000001u; // 8004713C
  c->r[5]=0u+0x00000000u; // 80047140
  c->lr=0x80047148u; f_800DB530(c); // 80047144
  c->r[0]=R32(c->r[1]+0x00000008u); // 80047148
  cmpu(c,0,c->r[0],0x00000001u); // 8004714C
  if (!crb(c,2)) { goto L_800471B4; } // 80047150
  cmps(c,0,(int32_t)c->r[3],0); // 80047154
  if (crb(c,2)) { goto L_80047160; } // 80047158
  goto L_800471B4; // 8004715C
L_80047160:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80047160
  c->r[4]=0u+0x00000020u; // 80047164
  c->r[0]=c->r[3]+0x0000001Fu; // 80047168
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8004716C
  c->lr=0x80047174u; f_80044AC0(c); // 80047170
  c->r[31]=c->r[3]|c->r[3]; // 80047174
  c->r[6]=c->r[1]+0x00000008u; // 80047178
  c->r[5]=c->r[31]|c->r[31]; // 8004717C
  c->r[4]=0u+0x00000002u; // 80047180
  c->r[3]=0u+0x00000001u; // 80047184
  c->lr=0x8004718Cu; f_800DB530(c); // 80047188
  cmps(c,0,(int32_t)c->r[3],0); // 8004718C
  if (!crb(c,2)) { goto L_800471B4; } // 80047190
  c->r[5]=c->r[31]|c->r[31]; // 80047194
  c->r[4]=0u+0x00000002u; // 80047198
  c->r[3]=0u+0x00000001u; // 8004719C
  c->lr=0x800471A4u; f_800DB490(c); // 800471A0
  cmps(c,0,(int32_t)c->r[3],0); // 800471A4
  if (!crb(c,2)) { goto L_800471B4; } // 800471A8
  c->r[0]=c->r[0]|0x00000000u; // 800471AC
L_800471B0:;
  IRQCHK(c); goto L_800471B0; // 800471B0
L_800471B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800471B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800471B8
  c->lr=c->r[0]; // 800471BC
  c->r[1]=c->r[1]+0x00000020u; // 800471C0
  return; // 800471C4
}

// fn_800471D0
void f_800471D0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800471D0
  c->r[12]=c->r[1]|c->r[1]; // 800471D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFE00u,1); // 800471D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800471DC
  c->r[0]=c->lr; // 800471E0
  c->r[11]=c->r[12]|c->r[12]; // 800471E4
  W32(c->r[12]+0x00000004u,c->r[0]); // 800471E8
  c->lr=0x800471F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800471EC
  c->r[27]=c->r[3]|c->r[3]; // 800471F0
  c->r[24]=c->r[4]|c->r[4]; // 800471F4
  c->r[28]=c->r[5]|c->r[5]; // 800471F8
  c->r[29]=c->r[6]|c->r[6]; // 800471FC
  c->r[25]=c->r[7]|c->r[7]; // 80047200
  c->r[31]=c->r[8]|c->r[8]; // 80047204
  c->r[26]=c->r[9]|c->r[9]; // 80047208
  c->lr=0x80047210u; f_80049A20(c); // 8004720C
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 80047210
  cmps(c,0,(int32_t)c->r[0],0); // 80047214
  if (crb(c,2)) { goto L_80047228; } // 80047218
  c->r[3]=0u+0x80000000u; // 8004721C
  c->r[0]=R32(c->r[3]+0x00003194u); // 80047220
  W32(c->r[13]+0xFFFF8B00u,c->r[0]); // 80047224
L_80047228:;
  c->r[3]=0u+0x000C0000u; // 80047228
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 8004722C
  c->lr=0x80047234u; f_8004AB70(c); // 80047230
  c->r[3]=0u+0x0000001Cu; // 80047234
  c->r[4]=0u+0x00000001u; // 80047238
  c->lr=0x80047240u; f_80044AC0(c); // 8004723C
  c->r[0]=0u+0x00000001u; // 80047240
  W32(c->r[3]+0x00000000u,c->r[0]); // 80047244
  cmps(c,0,(int32_t)c->r[25],0); // 80047248
  c->r[30]=c->r[3]|c->r[3]; // 8004724C
  W32(c->r[3]+0x00000004u,c->r[24]); // 80047250
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 80047254
  W32(c->r[3]+0x00000010u,c->r[29]); // 80047258
  W32(c->r[3]+0x00000014u,c->r[25]); // 8004725C
  if (!crb(c,2)) { goto L_800472B0; } // 80047260
  c->r[3]=0u+0x00002000u; // 80047264
  c->r[4]=0u+0x00000001u; // 80047268
  c->lr=0x80047270u; f_80044AC0(c); // 8004726C
  W32(c->r[30]+0x00000018u,c->r[3]); // 80047270
  c->r[0]=R32(c->r[13]+0xFFFF8B00u); // 80047274
  cmpu(c,0,c->r[0],0x00000002u); // 80047278
  if (!crb(c,2)) { goto L_800472A0; } // 8004727C
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 80047280
  cmps(c,0,(int32_t)c->r[0],0); // 80047284
  if (!crb(c,2)) { goto L_800472A0; } // 80047288
  c->r[3]=R32(c->r[30]+0x00000018u); // 8004728C
  c->r[4]=c->r[31]|c->r[31]; // 80047290
  c->r[5]=c->r[26]|c->r[26]; // 80047294
  c->lr=0x8004729Cu; f_800466A0(c); // 80047298
  goto L_800472B0; // 8004729C
L_800472A0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800472A0
  c->r[4]=c->r[31]|c->r[31]; // 800472A4
  c->r[5]=c->r[26]|c->r[26]; // 800472A8
  c->lr=0x800472B0u; f_800463C0(c); // 800472AC
L_800472B0:;
  c->lr=0x800472B4u; f_80051F90(c); // 800472B0
  c->r[3]=0u+0x00000001u; // 800472B4
  c->lr=0x800472BCu; f_80056260(c); // 800472B8
  c->lr=0x800472C0u; f_80056270(c); // 800472BC
  c->r[0]=0u+0x00000000u; // 800472C0
  c->r[3]=0u+0x80040000u; // 800472C4
  W32(c->r[13]+0xFFFF8B10u,c->r[0]); // 800472C8
  c->r[3]=c->r[3]+0x000068B0u; // 800472CC
  c->lr=0x800472D4u; f_80056840(c); // 800472D0
  c->r[3]=0u+0xFFFFFFF0u; // 800472D4
  c->lr=0x800472DCu; f_80049DF0(c); // 800472D8
  c->r[3]=0u+0x00000010u; // 800472DC
  c->lr=0x800472E4u; f_80049E70(c); // 800472E0
  c->lr=0x800472E8u; f_80049A40(c); // 800472E4
L_800472E8:;
  c->r[0]=R32(c->r[13]+0xFFFF8B10u); // 800472E8
  cmps(c,0,(int32_t)c->r[0],1); // 800472EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800472E8; } // 800472F0
  c->lr=0x800472F8u; f_80046900(c); // 800472F4
  c->r[0]=c->r[24]+0x60000000u; // 800472F8
  cmpu(c,0,c->r[0],0x00000000u); // 800472FC
  if (!crb(c,2)) { goto L_8004735C; } // 80047300
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 80047304
  cmps(c,0,(int32_t)c->r[0],0); // 80047308
  if (!crb(c,2)) { goto L_8004735C; } // 8004730C
  c->lr=0x80047314u; f_800DB3E0(c); // 80047310
  cmps(c,0,(int32_t)c->r[3],0); // 80047314
  if (!crb(c,2)) { goto L_80047908; } // 80047318
  c->r[3]=c->r[1]+0x00000040u; // 8004731C
  c->lr=0x80047324u; f_800DB9A0(c); // 80047320
  cmps(c,0,(int32_t)c->r[3],0); // 80047324
  if (!crb(c,2)) { goto L_80047908; } // 80047328
  c->lr=0x80047330u; f_800DB440(c); // 8004732C
  cmps(c,0,(int32_t)c->r[3],0); // 80047330
  if (!crb(c,2)) { goto L_80047908; } // 80047334
  c->r[3]=R32(c->r[30]+0x00000018u); // 80047338
  c->r[4]=0u+0x00000011u; // 8004733C
  c->r[0]=R32(c->r[26]+0x00000004u); // 80047340
  c->r[5]=c->r[13]+0xFFFF80F8u; // 80047344
  c->r[7]=R32(c->r[1]+0x00000040u); // 80047348
  c->r[8]=R32(c->r[1]+0x00000044u); // 8004734C
  c->r[3]=c->r[3]+c->r[0]; // 80047350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80047354
  c->lr=0x8004735Cu; f_80074E48(c); // 80047358
L_8004735C:;
  c->r[3]=0u+0x00000020u; // 8004735C
  c->r[4]=0u+0x00000020u; // 80047360
  c->lr=0x80047368u; f_80044AC0(c); // 80047364
  c->r[6]=R32(c->r[13]+0xFFFF8B04u); // 80047368
  c->r[31]=c->r[3]|c->r[3]; // 8004736C
  cmps(c,0,(int32_t)c->r[6],0); // 80047370
  if (crb(c,2)) { goto L_8004737C; } // 80047374
  goto L_80047418; // 80047378
L_8004737C:;
  c->r[26]=0u+0x80000000u; // 8004737C
  c->r[0]=R32(c->r[26]+0x000030F4u); // 80047380
  cmps(c,0,(int32_t)c->r[0],0); // 80047384
  if (crb(c,2)) { goto L_80047410; } // 80047388
  c->r[3]=0u+0x00000040u; // 8004738C
  c->r[4]=0u+0x00000020u; // 80047390
  c->lr=0x80047398u; f_80044AC0(c); // 80047394
  c->r[0]=R32(c->r[26]+0x000030F4u); // 80047398
  c->r[26]=c->r[3]|c->r[3]; // 8004739C
  c->r[3]=c->r[1]+0x00000120u; // 800473A0
  c->r[5]=0u+0x00000040u; // 800473A4
  c->r[4]=c->r[26]|c->r[26]; // 800473A8
  c->r[6]=sraw(c,c->r[0],2); // 800473AC
  c->r[7]=0u+0x00000000u; // 800473B0
  c->r[8]=0u+0x00000000u; // 800473B4
  c->lr=0x800473BCu; f_80055F20(c); // 800473B8
  goto L_800473E4; // 800473BC
L_800473C0:;
  c->r[3]=c->r[1]+0x00000120u; // 800473C0
  c->lr=0x800473C8u; f_800560F0(c); // 800473C4
  cmps(c,0,(int32_t)c->r[3],2); // 800473C8
  if (crb(c,1)) { goto L_800473E0; } // 800473CC
  c->r[3]=c->r[1]+0x00000120u; // 800473D0
  c->lr=0x800473D8u; f_800560F0(c); // 800473D4
  cmps(c,0,(int32_t)c->r[3],0); // 800473D8
  if (!crb(c,0)) { goto L_800473E4; } // 800473DC
L_800473E0:;
  c->lr=0x800473E4u; f_8004B7C0(c); // 800473E0
L_800473E4:;
  c->r[3]=c->r[1]+0x00000120u; // 800473E4
  c->lr=0x800473ECu; f_800560F0(c); // 800473E8
  cmps(c,0,(int32_t)c->r[3],0); // 800473EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800473C0; } // 800473F0
  c->r[3]=0u+0x80000000u; // 800473F4
  c->r[4]=R32(c->r[26]+0x00000038u); // 800473F8
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800473FC
  c->r[0]=c->r[0]+c->r[4]; // 80047400
  c->r[6]=sraw(c,c->r[0],2); // 80047404
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047408
  goto L_80047418; // 8004740C
L_80047410:;
  c->r[6]=0u+0x00000910u; // 80047410
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047414
L_80047418:;
  c->r[4]=c->r[31]|c->r[31]; // 80047418
  c->r[3]=c->r[1]+0x00000150u; // 8004741C
  c->r[5]=0u+0x00000020u; // 80047420
  c->r[7]=0u+0x00000000u; // 80047424
  c->r[8]=0u+0x00000000u; // 80047428
  c->lr=0x80047430u; f_80055F20(c); // 8004742C
  goto L_80047458; // 80047430
L_80047434:;
  c->r[3]=c->r[1]+0x00000150u; // 80047434
  c->lr=0x8004743Cu; f_800560F0(c); // 80047438
  cmps(c,0,(int32_t)c->r[3],2); // 8004743C
  if (crb(c,1)) { goto L_80047454; } // 80047440
  c->r[3]=c->r[1]+0x00000150u; // 80047444
  c->lr=0x8004744Cu; f_800560F0(c); // 80047448
  cmps(c,0,(int32_t)c->r[3],0); // 8004744C
  if (!crb(c,0)) { goto L_80047458; } // 80047450
L_80047454:;
  c->lr=0x80047458u; f_8004B7C0(c); // 80047454
L_80047458:;
  c->r[3]=c->r[1]+0x00000150u; // 80047458
  c->lr=0x80047460u; f_800560F0(c); // 8004745C
  cmps(c,0,(int32_t)c->r[3],0); // 80047460
  if (!crb(c,2)) { IRQCHK(c); goto L_80047434; } // 80047464
  c->r[6]=R32(c->r[13]+0xFFFF8B04u); // 80047468
  cmps(c,0,(int32_t)c->r[6],0); // 8004746C
  if (crb(c,2)) { goto L_80047478; } // 80047470
  goto L_80047514; // 80047474
L_80047478:;
  c->r[26]=0u+0x80000000u; // 80047478
  c->r[0]=R32(c->r[26]+0x000030F4u); // 8004747C
  cmps(c,0,(int32_t)c->r[0],0); // 80047480
  if (crb(c,2)) { goto L_8004750C; } // 80047484
  c->r[3]=0u+0x00000040u; // 80047488
  c->r[4]=0u+0x00000020u; // 8004748C
  c->lr=0x80047494u; f_80044AC0(c); // 80047490
  c->r[0]=R32(c->r[26]+0x000030F4u); // 80047494
  c->r[26]=c->r[3]|c->r[3]; // 80047498
  c->r[3]=c->r[1]+0x00000180u; // 8004749C
  c->r[5]=0u+0x00000040u; // 800474A0
  c->r[4]=c->r[26]|c->r[26]; // 800474A4
  c->r[6]=sraw(c,c->r[0],2); // 800474A8
  c->r[7]=0u+0x00000000u; // 800474AC
  c->r[8]=0u+0x00000000u; // 800474B0
  c->lr=0x800474B8u; f_80055F20(c); // 800474B4
  goto L_800474E0; // 800474B8
L_800474BC:;
  c->r[3]=c->r[1]+0x00000180u; // 800474BC
  c->lr=0x800474C4u; f_800560F0(c); // 800474C0
  cmps(c,0,(int32_t)c->r[3],2); // 800474C4
  if (crb(c,1)) { goto L_800474DC; } // 800474C8
  c->r[3]=c->r[1]+0x00000180u; // 800474CC
  c->lr=0x800474D4u; f_800560F0(c); // 800474D0
  cmps(c,0,(int32_t)c->r[3],0); // 800474D4
  if (!crb(c,0)) { goto L_800474E0; } // 800474D8
L_800474DC:;
  c->lr=0x800474E0u; f_8004B7C0(c); // 800474DC
L_800474E0:;
  c->r[3]=c->r[1]+0x00000180u; // 800474E0
  c->lr=0x800474E8u; f_800560F0(c); // 800474E4
  cmps(c,0,(int32_t)c->r[3],0); // 800474E8
  if (!crb(c,2)) { IRQCHK(c); goto L_800474BC; } // 800474EC
  c->r[3]=0u+0x80000000u; // 800474F0
  c->r[4]=R32(c->r[26]+0x00000038u); // 800474F4
  c->r[0]=R32(c->r[3]+0x000030F4u); // 800474F8
  c->r[0]=c->r[0]+c->r[4]; // 800474FC
  c->r[6]=sraw(c,c->r[0],2); // 80047500
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047504
  goto L_80047514; // 80047508
L_8004750C:;
  c->r[6]=0u+0x00000910u; // 8004750C
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047510
L_80047514:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 80047514
  c->r[3]=c->r[1]+0x000001B0u; // 80047518
  c->r[6]=c->r[6]+0x00000008u; // 8004751C
  c->r[4]=0u+0x81200000u; // 80047520
  c->r[0]=c->r[5]+0x0000001Fu; // 80047524
  c->r[7]=0u+0x00000000u; // 80047528
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8004752C
  c->r[8]=0u+0x00000000u; // 80047530
  c->lr=0x80047538u; f_80055F20(c); // 80047534
  goto L_80047560; // 80047538
L_8004753C:;
  c->r[3]=c->r[1]+0x000001B0u; // 8004753C
  c->lr=0x80047544u; f_800560F0(c); // 80047540
  cmps(c,0,(int32_t)c->r[3],2); // 80047544
  if (crb(c,1)) { goto L_8004755C; } // 80047548
  c->r[3]=c->r[1]+0x000001B0u; // 8004754C
  c->lr=0x80047554u; f_800560F0(c); // 80047550
  cmps(c,0,(int32_t)c->r[3],0); // 80047554
  if (!crb(c,0)) { goto L_80047560; } // 80047558
L_8004755C:;
  c->lr=0x80047560u; f_8004B7C0(c); // 8004755C
L_80047560:;
  c->r[3]=c->r[1]+0x000001B0u; // 80047560
  c->lr=0x80047568u; f_800560F0(c); // 80047564
  cmps(c,0,(int32_t)c->r[3],0); // 80047568
  if (!crb(c,2)) { IRQCHK(c); goto L_8004753C; } // 8004756C
  c->r[4]=R32(c->r[31]+0x00000014u); // 80047570
  c->r[3]=0u+0x81200000u; // 80047574
  c->r[0]=c->r[4]+0x0000001Fu; // 80047578
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8004757C
  c->lr=0x80047584u; f_800450D0(c); // 80047580
  c->r[4]=0u+0x80140000u; // 80047584
  c->r[3]=c->r[31]|c->r[31]; // 80047588
  c->r[4]=c->r[4]+0xFFFF8558u; // 8004758C
  c->r[5]=0u+0x0000000Au; // 80047590
  c->lr=0x80047598u; f_8007538C(c); // 80047594
  cmps(c,0,(int32_t)c->r[3],0); // 80047598
  if (!crb(c,1)) { goto L_800475A8; } // 8004759C
  c->r[0]=0u+0x00000001u; // 800475A0
  goto L_800475AC; // 800475A4
L_800475A8:;
  c->r[0]=0u+0x00000000u; // 800475A8
L_800475AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800475AC
  if (crb(c,2)) { goto L_800477BC; } // 800475B0
  c->r[0]=c->r[27]+0x00010000u; // 800475B4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800475B8
  if (!crb(c,2)) { goto L_8004767C; } // 800475BC
  c->r[6]=R32(c->r[13]+0xFFFF8B04u); // 800475C0
  cmps(c,0,(int32_t)c->r[6],0); // 800475C4
  if (crb(c,2)) { goto L_800475D0; } // 800475C8
  goto L_8004766C; // 800475CC
L_800475D0:;
  c->r[27]=0u+0x80000000u; // 800475D0
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800475D4
  cmps(c,0,(int32_t)c->r[0],0); // 800475D8
  if (crb(c,2)) { goto L_80047664; } // 800475DC
  c->r[3]=0u+0x00000040u; // 800475E0
  c->r[4]=0u+0x00000020u; // 800475E4
  c->lr=0x800475ECu; f_80044AC0(c); // 800475E8
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800475EC
  c->r[26]=c->r[3]|c->r[3]; // 800475F0
  c->r[3]=c->r[1]+0x000000F0u; // 800475F4
  c->r[5]=0u+0x00000040u; // 800475F8
  c->r[4]=c->r[26]|c->r[26]; // 800475FC
  c->r[6]=sraw(c,c->r[0],2); // 80047600
  c->r[7]=0u+0x00000000u; // 80047604
  c->r[8]=0u+0x00000000u; // 80047608
  c->lr=0x80047610u; f_80055F20(c); // 8004760C
  goto L_80047638; // 80047610
L_80047614:;
  c->r[3]=c->r[1]+0x000000F0u; // 80047614
  c->lr=0x8004761Cu; f_800560F0(c); // 80047618
  cmps(c,0,(int32_t)c->r[3],2); // 8004761C
  if (crb(c,1)) { goto L_80047634; } // 80047620
  c->r[3]=c->r[1]+0x000000F0u; // 80047624
  c->lr=0x8004762Cu; f_800560F0(c); // 80047628
  cmps(c,0,(int32_t)c->r[3],0); // 8004762C
  if (!crb(c,0)) { goto L_80047638; } // 80047630
L_80047634:;
  c->lr=0x80047638u; f_8004B7C0(c); // 80047634
L_80047638:;
  c->r[3]=c->r[1]+0x000000F0u; // 80047638
  c->lr=0x80047640u; f_800560F0(c); // 8004763C
  cmps(c,0,(int32_t)c->r[3],0); // 80047640
  if (!crb(c,2)) { IRQCHK(c); goto L_80047614; } // 80047644
  c->r[3]=0u+0x80000000u; // 80047648
  c->r[4]=R32(c->r[26]+0x00000038u); // 8004764C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80047650
  c->r[0]=c->r[0]+c->r[4]; // 80047654
  c->r[6]=sraw(c,c->r[0],2); // 80047658
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 8004765C
  goto L_8004766C; // 80047660
L_80047664:;
  c->r[6]=0u+0x00000910u; // 80047664
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047668
L_8004766C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8004766C
  c->r[0]=c->r[3]+0x00000020u; // 80047670
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80047674
  c->r[27]=c->r[0]+c->r[6]; // 80047678
L_8004767C:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 8004767C
  c->r[3]=c->r[1]+0x00000020u; // 80047680
  c->r[4]=c->r[1]+0x00000024u; // 80047684
  c->r[5]=c->r[1]+0x00000028u; // 80047688
  c->r[12]=R32(c->r[31]+0x00000010u); // 8004768C
  c->ctr=c->r[12]; // 80047690
  if (true) { c->lr=0x80047698u; dispatch(c,c->ctr); } // 80047694
  c->r[3]=0u+0x0000001Cu; // 80047698
  c->r[4]=0u+0x00000001u; // 8004769C
  c->lr=0x800476A4u; f_80044AC0(c); // 800476A0
  c->r[26]=c->r[3]|c->r[3]; // 800476A4
  c->r[4]=c->r[30]|c->r[30]; // 800476A8
  c->r[5]=0u+0x0000001Cu; // 800476AC
  c->lr=0x800476B4u; f_800043C4(c); // 800476B0
  c->r[4]=0u+0x80000000u; // 800476B4
  c->r[3]=0u+0x80040000u; // 800476B8
  W32(c->r[4]+0x000030F0u,c->r[26]); // 800476BC
  c->r[3]=c->r[3]+0x00005C80u; // 800476C0
  c->r[12]=R32(c->r[1]+0x00000020u); // 800476C4
  c->ctr=c->r[12]; // 800476C8
  if (true) { c->lr=0x800476D0u; dispatch(c,c->ctr); } // 800476CC
  c->r[3]=c->r[26]|c->r[26]; // 800476D0
  c->lr=0x800476D8u; f_80044AB0(c); // 800476D4
  goto L_80047738; // 800476D8
L_800476DC:;
  c->r[6]=R32(c->r[1]+0x00000034u); // 800476DC
  c->r[3]=c->r[1]+0x000000C0u; // 800476E0
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 800476E4
  c->r[7]=0u+0x00000000u; // 800476E8
  c->r[5]=R32(c->r[1]+0x00000030u); // 800476EC
  c->r[8]=0u+0x00000000u; // 800476F0
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800476F4
  c->r[6]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 800476F8
  c->lr=0x80047700u; f_80055F20(c); // 800476FC
  goto L_80047728; // 80047700
L_80047704:;
  c->r[3]=c->r[1]+0x000000C0u; // 80047704
  c->lr=0x8004770Cu; f_800560F0(c); // 80047708
  cmps(c,0,(int32_t)c->r[3],2); // 8004770C
  if (crb(c,1)) { goto L_80047724; } // 80047710
  c->r[3]=c->r[1]+0x000000C0u; // 80047714
  c->lr=0x8004771Cu; f_800560F0(c); // 80047718
  cmps(c,0,(int32_t)c->r[3],0); // 8004771C
  if (!crb(c,0)) { goto L_80047728; } // 80047720
L_80047724:;
  c->lr=0x80047728u; f_8004B7C0(c); // 80047724
L_80047728:;
  c->r[3]=c->r[1]+0x000000C0u; // 80047728
  c->lr=0x80047730u; f_800560F0(c); // 8004772C
  cmps(c,0,(int32_t)c->r[3],0); // 80047730
  if (!crb(c,2)) { IRQCHK(c); goto L_80047704; } // 80047734
L_80047738:;
  c->r[12]=R32(c->r[1]+0x00000024u); // 80047738
  c->r[3]=c->r[1]+0x0000002Cu; // 8004773C
  c->r[4]=c->r[1]+0x00000030u; // 80047740
  c->r[5]=c->r[1]+0x00000034u; // 80047744
  c->ctr=c->r[12]; // 80047748
  if (true) { c->lr=0x80047750u; dispatch(c,c->ctr); } // 8004774C
  cmps(c,0,(int32_t)c->r[3],0); // 80047750
  if (!crb(c,2)) { IRQCHK(c); goto L_800476DC; } // 80047754
  c->r[12]=R32(c->r[1]+0x00000028u); // 80047758
  c->ctr=c->r[12]; // 8004775C
  if (true) { c->lr=0x80047764u; dispatch(c,c->ctr); } // 80047760
  c->r[5]=0u+0x80000000u; // 80047764
  c->r[27]=c->r[3]|c->r[3]; // 80047768
  c->r[3]=R32(c->r[5]+0x00000000u); // 8004776C
  c->r[0]=0u+0x00000080u; // 80047770
  W32(c->r[5]+0x00003180u,c->r[3]); // 80047774
  c->r[3]=0u+0x0000001Cu; // 80047778
  c->r[4]=0u+0x00000001u; // 8004777C
  W8(c->r[5]+0x00003184u,c->r[0]); // 80047780
  c->lr=0x80047788u; f_80044AC0(c); // 80047784
  c->r[26]=c->r[3]|c->r[3]; // 80047788
  c->r[4]=c->r[30]|c->r[30]; // 8004778C
  c->r[5]=0u+0x0000001Cu; // 80047790
  c->lr=0x80047798u; f_800043C4(c); // 80047794
  c->r[4]=0u+0x80000000u; // 80047798
  c->r[3]=0u+0xCC000000u; // 8004779C
  W32(c->r[4]+0x000030F0u,c->r[26]); // 800477A0
  c->r[0]=0u+0x00000007u; // 800477A4
  W32(c->r[3]+0x00003024u,c->r[0]); // 800477A8
  c->lr=0x800477B0u; f_80049A20(c); // 800477AC
  c->r[3]=c->r[27]|c->r[27]; // 800477B0
  c->lr=0x800477B8u; f_80046870(c); // 800477B4
  goto L_80047908; // 800477B8
L_800477BC:;
  c->r[3]=0u+0x81300000u; // 800477BC
  c->r[27]=0u+0x80000000u; // 800477C0
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 800477C4
  c->r[0]=0u+0x00000001u; // 800477C8
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 800477CC
  W8(c->r[27]+0x000030E2u,c->r[0]); // 800477D0
  c->r[6]=R32(c->r[13]+0xFFFF8B04u); // 800477D4
  cmps(c,0,(int32_t)c->r[6],0); // 800477D8
  if (crb(c,2)) { goto L_800477E4; } // 800477DC
  goto L_8004787C; // 800477E0
L_800477E4:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800477E4
  cmps(c,0,(int32_t)c->r[0],0); // 800477E8
  if (crb(c,2)) { goto L_80047874; } // 800477EC
  c->r[3]=0u+0x00000040u; // 800477F0
  c->r[4]=0u+0x00000020u; // 800477F4
  c->lr=0x800477FCu; f_80044AC0(c); // 800477F8
  c->r[0]=R32(c->r[27]+0x000030F4u); // 800477FC
  c->r[26]=c->r[3]|c->r[3]; // 80047800
  c->r[3]=c->r[1]+0x00000090u; // 80047804
  c->r[5]=0u+0x00000040u; // 80047808
  c->r[4]=c->r[26]|c->r[26]; // 8004780C
  c->r[6]=sraw(c,c->r[0],2); // 80047810
  c->r[7]=0u+0x00000000u; // 80047814
  c->r[8]=0u+0x00000000u; // 80047818
  c->lr=0x80047820u; f_80055F20(c); // 8004781C
  goto L_80047848; // 80047820
L_80047824:;
  c->r[3]=c->r[1]+0x00000090u; // 80047824
  c->lr=0x8004782Cu; f_800560F0(c); // 80047828
  cmps(c,0,(int32_t)c->r[3],2); // 8004782C
  if (crb(c,1)) { goto L_80047844; } // 80047830
  c->r[3]=c->r[1]+0x00000090u; // 80047834
  c->lr=0x8004783Cu; f_800560F0(c); // 80047838
  cmps(c,0,(int32_t)c->r[3],0); // 8004783C
  if (!crb(c,0)) { goto L_80047848; } // 80047840
L_80047844:;
  c->lr=0x80047848u; f_8004B7C0(c); // 80047844
L_80047848:;
  c->r[3]=c->r[1]+0x00000090u; // 80047848
  c->lr=0x80047850u; f_800560F0(c); // 8004784C
  cmps(c,0,(int32_t)c->r[3],0); // 80047850
  if (!crb(c,2)) { IRQCHK(c); goto L_80047824; } // 80047854
  c->r[3]=0u+0x80000000u; // 80047858
  c->r[4]=R32(c->r[26]+0x00000038u); // 8004785C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80047860
  c->r[0]=c->r[0]+c->r[4]; // 80047864
  c->r[6]=sraw(c,c->r[0],2); // 80047868
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 8004786C
  goto L_8004787C; // 80047870
L_80047874:;
  c->r[6]=0u+0x00000910u; // 80047874
  W32(c->r[13]+0xFFFF8B04u,c->r[6]); // 80047878
L_8004787C:;
  c->r[7]=R32(c->r[31]+0x00000014u); // 8004787C
  c->r[3]=c->r[1]+0x00000060u; // 80047880
  c->r[5]=R32(c->r[31]+0x00000018u); // 80047884
  c->r[4]=0u+0x81330000u; // 80047888
  c->r[0]=c->r[7]+0x00000020u; // 8004788C
  c->r[7]=0u+0x00000000u; // 80047890
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80047894
  c->r[0]=c->r[5]+0x0000001Fu; // 80047898
  c->r[6]=c->r[8]+c->r[6]; // 8004789C
  c->r[8]=0u+0x00000000u; // 800478A0
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800478A4
  c->lr=0x800478ACu; f_80055F20(c); // 800478A8
  goto L_800478D4; // 800478AC
L_800478B0:;
  c->r[3]=c->r[1]+0x00000060u; // 800478B0
  c->lr=0x800478B8u; f_800560F0(c); // 800478B4
  cmps(c,0,(int32_t)c->r[3],2); // 800478B8
  if (crb(c,1)) { goto L_800478D0; } // 800478BC
  c->r[3]=c->r[1]+0x00000060u; // 800478C0
  c->lr=0x800478C8u; f_800560F0(c); // 800478C4
  cmps(c,0,(int32_t)c->r[3],0); // 800478C8
  if (!crb(c,0)) { goto L_800478D4; } // 800478CC
L_800478D0:;
  c->lr=0x800478D4u; f_8004B7C0(c); // 800478D0
L_800478D4:;
  c->r[3]=c->r[1]+0x00000060u; // 800478D4
  c->lr=0x800478DCu; f_800560F0(c); // 800478D8
  cmps(c,0,(int32_t)c->r[3],0); // 800478DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800478B0; } // 800478E0
  c->r[4]=R32(c->r[31]+0x00000018u); // 800478E4
  c->r[3]=0u+0x81330000u; // 800478E8
  c->r[0]=c->r[4]+0x0000001Fu; // 800478EC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800478F0
  c->lr=0x800478F8u; f_800450D0(c); // 800478F4
  c->lr=0x800478FCu; f_80049A20(c); // 800478F8
  c->lr=0x80047900u; f_80045110(c); // 800478FC
  c->r[3]=0u+0x81330000u; // 80047900
  c->lr=0x80047908u; f_80046870(c); // 80047904
L_80047908:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80047908
  c->r[11]=c->r[10]|c->r[10]; // 8004790C
  c->lr=0x80047914u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80047910
  c->r[0]=R32(c->r[10]+0x00000004u); // 80047914
  c->lr=c->r[0]; // 80047918
  c->r[1]=c->r[10]|c->r[10]; // 8004791C
  return; // 80047920
}

// __OSBootDol
void f_80047930(Ctx* __restrict c) {
  trace_call(0x80047930u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047930
  c->r[0]=c->lr; // 80047934
  W32(c->r[1]+0x00000044u,c->r[0]); // 80047938
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004793C
  c->r[31]=c->r[3]|c->r[3]; // 80047940
  c->r[3]=c->r[1]+0x0000000Cu; // 80047944
  W32(c->r[1]+0x00000038u,c->r[30]); // 80047948
  c->r[30]=c->r[5]|c->r[5]; // 8004794C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80047950
  c->r[29]=c->r[4]|c->r[4]; // 80047954
  c->r[4]=c->r[1]+0x00000008u; // 80047958
  c->lr=0x80047960u; f_8004AF60(c); // 8004795C
  c->r[5]=c->r[31]|c->r[31]; // 80047960
  c->r[3]=c->r[1]+0x00000010u; // 80047964
  c->r[4]=c->r[13]+0xFFFF8100u; // 80047968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004796C
  c->lr=0x80047974u; f_80074F3C(c); // 80047970
  cmps(c,0,(int32_t)c->r[30],0); // 80047974
  c->r[31]=0u+0x00000000u; // 80047978
  if (crb(c,2)) { goto L_8004799C; } // 8004797C
  c->r[3]=c->r[30]|c->r[30]; // 80047980
  goto L_80047990; // 80047984
L_80047988:;
  c->r[3]=c->r[3]+0x00000004u; // 80047988
  c->r[31]=c->r[31]+0x00000001u; // 8004798C
L_80047990:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80047990
  cmps(c,0,(int32_t)c->r[0],0); // 80047994
  if (!crb(c,2)) { IRQCHK(c); goto L_80047988; } // 80047998
L_8004799C:;
  c->r[0]=c->r[31]+0x00000002u; // 8004799C
  c->r[4]=0u+0x00000001u; // 800479A0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800479A4
  c->lr=0x800479ACu; f_80044AC0(c); // 800479A8
  c->r[6]=c->r[31]+0x00000001u; // 800479AC
  c->r[0]=c->r[1]+0x00000010u; // 800479B0
  cmps(c,1,(int32_t)c->r[6],1); // 800479B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800479B8
  c->r[4]=0u+0x00000001u; // 800479BC
  if (!crb(c,5)) { goto L_80047AD4; } // 800479C0
  cmps(c,0,(int32_t)c->r[31],8); // 800479C4
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 800479C8
  if (!crb(c,1)) { goto L_80047AA0; } // 800479CC
  c->r[8]=0u+0x00000000u; // 800479D0
  c->r[9]=0u+0x00000000u; // 800479D4
  if (crb(c,4)) { goto L_800479F0; } // 800479D8
  c->r[5]=0u+0x80000000u; // 800479DC
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 800479E0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800479E4
  if (crb(c,1)) { goto L_800479F0; } // 800479E8
  c->r[9]=0u+0x00000001u; // 800479EC
L_800479F0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800479F0
  if (crb(c,2)) { goto L_80047A2C; } // 800479F4
  c->r[0]=c->r[31]+0x00000001u; // 800479F8
  c->r[5]=0u+0x00000001u; // 800479FC
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 80047A00
  c->r[0]=c->r[6]+0x80000000u; // 80047A04
  cmpu(c,0,c->r[0],0x00000000u); // 80047A08
  if (!crb(c,2)) { goto L_80047A20; } // 80047A0C
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 80047A10
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80047A14
  if (crb(c,2)) { goto L_80047A20; } // 80047A18
  c->r[5]=0u+0x00000000u; // 80047A1C
L_80047A20:;
  cmps(c,0,(int32_t)c->r[5],0); // 80047A20
  if (crb(c,2)) { goto L_80047A2C; } // 80047A24
  c->r[8]=0u+0x00000001u; // 80047A28
L_80047A2C:;
  cmps(c,0,(int32_t)c->r[8],0); // 80047A2C
  if (crb(c,2)) { goto L_80047AA0; } // 80047A30
  c->r[0]=c->r[7]+0x00000006u; // 80047A34
  c->r[5]=c->r[30]+0x00000004u; // 80047A38
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80047A3C
  c->r[6]=c->r[3]+0x00000004u; // 80047A40
  c->ctr=c->r[0]; // 80047A44
  cmps(c,0,(int32_t)c->r[7],1); // 80047A48
  if (!crb(c,1)) { goto L_80047AA0; } // 80047A4C
L_80047A50:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80047A50
  c->r[4]=c->r[4]+0x00000008u; // 80047A54
  W32(c->r[6]+0x00000000u,c->r[0]); // 80047A58
  c->r[0]=R32(c->r[5]+0x00000000u); // 80047A5C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80047A60
  c->r[0]=R32(c->r[5]+0x00000004u); // 80047A64
  W32(c->r[6]+0x00000008u,c->r[0]); // 80047A68
  c->r[0]=R32(c->r[5]+0x00000008u); // 80047A6C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80047A70
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80047A74
  W32(c->r[6]+0x00000010u,c->r[0]); // 80047A78
  c->r[0]=R32(c->r[5]+0x00000010u); // 80047A7C
  W32(c->r[6]+0x00000014u,c->r[0]); // 80047A80
  c->r[0]=R32(c->r[5]+0x00000014u); // 80047A84
  W32(c->r[6]+0x00000018u,c->r[0]); // 80047A88
  c->r[0]=R32(c->r[5]+0x00000018u); // 80047A8C
  c->r[5]=c->r[5]+0x00000020u; // 80047A90
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 80047A94
  c->r[6]=c->r[6]+0x00000020u; // 80047A98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80047A50; } // 80047A9C
L_80047AA0:;
  c->r[5]=c->r[31]+0x00000001u; // 80047AA0
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80047AA4
  c->r[0]=c->r[5]-c->r[4]; // 80047AA8
  c->r[6]=c->r[30]+c->r[7]; // 80047AAC
  c->r[7]=c->r[3]+c->r[7]; // 80047AB0
  c->ctr=c->r[0]; // 80047AB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 80047AB8
  if (!crb(c,0)) { goto L_80047AD4; } // 80047ABC
L_80047AC0:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80047AC0
  c->r[6]=c->r[6]+0x00000004u; // 80047AC4
  W32(c->r[7]+0x00000000u,c->r[0]); // 80047AC8
  c->r[7]=c->r[7]+0x00000004u; // 80047ACC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80047AC0; } // 80047AD0
L_80047AD4:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80047AD4
  c->r[9]=c->r[3]|c->r[3]; // 80047AD8
  c->r[6]=R32(c->r[1]+0x00000008u); // 80047ADC
  c->r[4]=c->r[29]|c->r[29]; // 80047AE0
  c->r[8]=c->r[31]+0x00000001u; // 80047AE4
  c->r[3]=0u+0xFFFFFFFFu; // 80047AE8
  c->r[7]=0u+0x00000000u; // 80047AEC
  c->lr=0x80047AF4u; f_800471D0(c); // 80047AF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80047AF4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80047AF8
  c->r[30]=R32(c->r[1]+0x00000038u); // 80047AFC
  c->r[29]=R32(c->r[1]+0x00000034u); // 80047B00
  c->lr=c->r[0]; // 80047B04
  c->r[1]=c->r[1]+0x00000040u; // 80047B08
  return; // 80047B0C
}

// ScreenReport
void f_80047B10(Ctx* __restrict c) {
  trace_call(0x80047B10u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047B10
  c->r[0]=c->lr; // 80047B14
  W32(c->r[1]+0x00000184u,c->r[0]); // 80047B18
  c->r[11]=c->r[1]+0x00000180u; // 80047B1C
  c->lr=0x80047B24u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80047B20
  c->r[0]=c->r[5]+0xFFFFFFE8u; // 80047B24
  W32(c->r[1]+0x00000008u,c->r[3]); // 80047B28
  c->r[24]=c->r[4]|c->r[4]; // 80047B2C
  c->r[25]=c->r[6]|c->r[6]; // 80047B30
  W32(c->r[1]+0x00000130u,c->r[0]); // 80047B34
  c->r[26]=c->r[7]|c->r[7]; // 80047B38
  c->r[27]=c->r[8]|c->r[8]; // 80047B3C
  c->r[14]=c->r[9]|c->r[9]; // 80047B40
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 80047B44
  c->r[20]=0u+0x80810000u; // 80047B48
  c->r[21]=0u+0x88890000u; // 80047B4C
  c->r[31]=0u+0x00000000u; // 80047B50
  c->r[23]=0u+0x00000018u; // 80047B54
  c->r[22]=0u+0x00000003u; // 80047B58
L_80047B5C:;
  c->r[0]=R32(c->r[1]+0x00000130u); // 80047B5C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 80047B60
  if (crb(c,0)) { goto L_80047E20; } // 80047B64
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[24]); // 80047B68
  c->r[28]=c->r[26]|c->r[26]; // 80047B6C
  c->r[0]=c->r[26]+c->r[0]; // 80047B70
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80047B74
  c->r[0]=R32(c->r[1]+0x00000008u); // 80047B78
  c->r[29]=c->r[0]+c->r[3]; // 80047B7C
  goto L_80047E14; // 80047B80
L_80047B84:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80047B84
  cmps(c,0,(int32_t)c->r[0],10); // 80047B88
  if (!crb(c,2)) { goto L_80047B9C; } // 80047B8C
  c->r[27]=c->r[27]+c->r[14]; // 80047B90
  c->r[10]=c->r[10]+0x00000001u; // 80047B94
  IRQCHK(c); goto L_80047B5C; // 80047B98
L_80047B9C:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 80047B9C
  if (!crb(c,0)) { goto L_80047BAC; } // 80047BA0
  c->r[27]=c->r[27]+c->r[14]; // 80047BA4
  IRQCHK(c); goto L_80047B5C; // 80047BA8
L_80047BAC:;
  c->r[5]=0u+0x00000000u; // 80047BAC
  c->r[6]=0u+0x00000000u; // 80047BB0
  c->ctr=c->r[22]; // 80047BB4
L_80047BB8:;
  c->r[0]=rotl(c->r[5],0)&0x00000007u; // 80047BB8
  c->r[8]=c->r[5]+0x00000001u; // 80047BBC
  c->r[9]=c->r[0]+c->r[6]; // 80047BC0
  c->r[16]=c->r[5]+0x00000003u; // 80047BC4
  c->r[0]=rotl(c->r[8],29)&0x1FFFFFFFu; // 80047BC8
  c->r[4]=c->r[1]+0x00000010u; // 80047BCC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80047BD0
  c->r[8]=rotl(c->r[8],0)&0x00000007u; // 80047BD4
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80047BD8
  c->r[7]=c->r[5]+0x00000002u; // 80047BDC
  c->r[4]=c->r[4]+c->r[0]; // 80047BE0
  c->r[18]=c->r[5]+0x00000004u; // 80047BE4
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80047BE8
  c->r[8]=c->r[8]+c->r[3]; // 80047BEC
  W32(c->r[4]+0x00000000u,c->r[31]); // 80047BF0
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80047BF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80047BF8
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 80047BFC
  W32(c->r[4]+0x00000020u,c->r[31]); // 80047C00
  c->r[3]=c->r[1]+0x00000010u; // 80047C04
  c->r[17]=rotl(c->r[16],29)&0x1FFFFFFFu; // 80047C08
  W32(c->r[4]+0x00000040u,c->r[31]); // 80047C0C
  c->r[0]=c->r[7]+c->r[0]; // 80047C10
  c->r[12]=c->r[5]+0x00000005u; // 80047C14
  c->r[11]=rotl(c->r[12],29)&0x1FFFFFFFu; // 80047C18
  {uint32_t ea=c->r[3]+c->r[8]; W32(ea,c->r[31]); c->r[3]=ea;} // 80047C1C
  c->r[9]=c->r[5]+0x00000006u; // 80047C20
  c->r[15]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80047C24
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80047C28
  W32(c->r[3]+0x00000020u,c->r[31]); // 80047C2C
  c->r[19]=rotl(c->r[18],29)&0x1FFFFFFFu; // 80047C30
  c->r[4]=c->r[1]+0x00000010u; // 80047C34
  W32(c->r[3]+0x00000040u,c->r[31]); // 80047C38
  c->r[3]=rotl(c->r[16],0)&0x00000007u; // 80047C3C
  c->r[16]=(uint32_t)((int32_t)c->r[17]*(int32_t)24); // 80047C40
  c->r[7]=c->r[5]+0x00000007u; // 80047C44
  {uint32_t ea=c->r[4]+c->r[15]; W32(ea,c->r[31]); c->r[4]=ea;} // 80047C48
  c->r[15]=c->r[1]+0x00000010u; // 80047C4C
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80047C50
  W32(c->r[4]+0x00000020u,c->r[31]); // 80047C54
  c->r[3]=c->r[3]+c->r[16]; // 80047C58
  c->r[17]=rotl(c->r[18],0)&0x00000007u; // 80047C5C
  c->r[16]=(uint32_t)((int32_t)c->r[19]*(int32_t)24); // 80047C60
  W32(c->r[4]+0x00000040u,c->r[31]); // 80047C64
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80047C68
  c->r[3]=c->r[15]|c->r[15]; // 80047C6C
  {uint32_t ea=c->r[15]+c->r[4]; W32(ea,c->r[31]); c->r[15]=ea;} // 80047C70
  c->r[16]=c->r[17]+c->r[16]; // 80047C74
  W32(c->r[15]+0x00000020u,c->r[31]); // 80047C78
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)24); // 80047C7C
  c->r[12]=rotl(c->r[12],0)&0x00000007u; // 80047C80
  c->r[16]=rotl(c->r[16],2)&0xFFFFFFFCu; // 80047C84
  W32(c->r[15]+0x00000040u,c->r[31]); // 80047C88
  c->r[4]=c->r[3]|c->r[3]; // 80047C8C
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 80047C90
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 80047C94
  {uint32_t ea=c->r[3]+c->r[16]; W32(ea,c->r[31]); c->r[3]=ea;} // 80047C98
  c->r[11]=c->r[12]+c->r[11]; // 80047C9C
  W32(c->r[3]+0x00000020u,c->r[31]); // 80047CA0
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 80047CA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80047CA8
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80047CAC
  W32(c->r[3]+0x00000040u,c->r[31]); // 80047CB0
  c->r[8]=c->r[9]+c->r[8]; // 80047CB4
  {uint32_t ea=c->r[4]+c->r[11]; W32(ea,c->r[31]); c->r[4]=ea;} // 80047CB8
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80047CBC
  c->r[8]=c->r[1]+0x00000010u; // 80047CC0
  c->r[0]=c->r[7]+c->r[0]; // 80047CC4
  W32(c->r[4]+0x00000020u,c->r[31]); // 80047CC8
  c->r[8]=c->r[8]+c->r[3]; // 80047CCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80047CD0
  c->r[3]=c->r[1]+0x00000010u; // 80047CD4
  W32(c->r[4]+0x00000040u,c->r[31]); // 80047CD8
  c->r[6]=c->r[6]+0x00000018u; // 80047CDC
  c->r[5]=c->r[5]+0x00000008u; // 80047CE0
  W32(c->r[8]+0x00000000u,c->r[31]); // 80047CE4
  W32(c->r[8]+0x00000020u,c->r[31]); // 80047CE8
  W32(c->r[8]+0x00000040u,c->r[31]); // 80047CEC
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[31]); c->r[3]=ea;} // 80047CF0
  W32(c->r[3]+0x00000020u,c->r[31]); // 80047CF4
  W32(c->r[3]+0x00000040u,c->r[31]); // 80047CF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80047BB8; } // 80047CFC
  c->r[3]=c->r[10]|c->r[10]; // 80047D00
  c->r[4]=c->r[1]+0x00000010u; // 80047D04
  c->r[7]=c->r[1]+0x0000000Cu; // 80047D08
  c->r[5]=0u+0x00000000u; // 80047D0C
  c->r[6]=0u+0x00000006u; // 80047D10
  c->lr=0x80047D18u; f_800491F0(c); // 80047D14
  c->r[10]=c->r[3]|c->r[3]; // 80047D18
  c->r[7]=0u+0x00000000u; // 80047D1C
  c->r[3]=0u+0x00000000u; // 80047D20
L_80047D24:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80047D24
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 80047D28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80047D2C
  c->r[5]=c->r[1]+0x00000010u; // 80047D30
  c->r[4]=c->r[28]|c->r[28]; // 80047D34
  c->r[8]=0u+0x00000000u; // 80047D38
  c->r[0]=c->r[6]+c->r[0]; // 80047D3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80047D40
  c->r[5]=c->r[5]+c->r[0]; // 80047D44
  c->ctr=c->r[23]; // 80047D48
L_80047D4C:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 80047D4C
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 80047D50
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 80047D54
  c->r[6]=R32(c->r[5]+c->r[6]); // 80047D58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80047D5C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 80047D60
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 80047D64
  if (crb(c,2)) { goto L_80047DE8; } // 80047D68
  c->r[6]=R8(c->r[25]+0x00000000u); // 80047D6C
  c->r[0]=c->r[8]+c->r[3]; // 80047D70
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80047D74
  c->r[11]=c->r[20]+0xFFFF8081u; // 80047D78
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 80047D7C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80047D80
  c->r[6]=c->r[29]+c->r[12]; // 80047D84
  c->r[0]=c->r[21]+0xFFFF8889u; // 80047D88
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 80047D8C
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 80047D90
  c->r[9]=c->r[11]+c->r[9]; // 80047D94
  c->r[9]=sraw(c,c->r[9],7); // 80047D98
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 80047D9C
  c->r[9]=c->r[9]+c->r[11]; // 80047DA0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 80047DA4
  c->r[0]=c->r[0]+c->r[9]; // 80047DA8
  c->r[0]=sraw(c,c->r[0],3); // 80047DAC
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 80047DB0
  c->r[9]=c->r[0]+c->r[9]; // 80047DB4
  c->r[0]=c->r[9]+0x00000010u; // 80047DB8
  W8(c->r[29]+c->r[12],c->r[0]); // 80047DBC
  if (crb(c,2)) { goto L_80047DD8; } // 80047DC0
  c->r[0]=R8(c->r[25]+0x00000001u); // 80047DC4
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 80047DC8
  c->r[0]=R8(c->r[25]+0x00000002u); // 80047DCC
  W8(c->r[6]+0x00000001u,c->r[0]); // 80047DD0
  goto L_80047DE8; // 80047DD4
L_80047DD8:;
  c->r[0]=R8(c->r[25]+0x00000002u); // 80047DD8
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 80047DDC
  c->r[0]=R8(c->r[25]+0x00000001u); // 80047DE0
  W8(c->r[6]+0x00000001u,c->r[0]); // 80047DE4
L_80047DE8:;
  c->r[4]=c->r[4]+0x00000001u; // 80047DE8
  c->r[8]=c->r[8]+0x00000001u; // 80047DEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80047D4C; } // 80047DF0
  c->r[7]=c->r[7]+0x00000001u; // 80047DF4
  c->r[3]=c->r[3]+c->r[24]; // 80047DF8
  cmpu(c,0,c->r[7],0x00000018u); // 80047DFC
  if (crb(c,0)) { IRQCHK(c); goto L_80047D24; } // 80047E00
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80047E04
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80047E08
  c->r[28]=c->r[28]+c->r[3]; // 80047E0C
  c->r[29]=c->r[29]+c->r[0]; // 80047E10
L_80047E14:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 80047E14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80047E18
  if (!crb(c,2)) { IRQCHK(c); goto L_80047B84; } // 80047E1C
L_80047E20:;
  c->r[11]=c->r[1]+0x00000180u; // 80047E20
  c->lr=0x80047E28u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80047E24
  c->r[0]=R32(c->r[1]+0x00000184u); // 80047E28
  c->lr=c->r[0]; // 80047E2C
  c->r[1]=c->r[1]+0x00000180u; // 80047E30
  return; // 80047E34
}

// ConfigureVideo
void f_80047E40(Ctx* __restrict c) {
  trace_call(0x80047E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047E40
  c->r[0]=c->lr; // 80047E44
  c->r[6]=0u+0x000001E0u; // 80047E48
  c->r[5]=0u+0x00000028u; // 80047E4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80047E50
  c->r[0]=0u+0x00000280u; // 80047E54
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 80047E58
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 80047E5C
  W16(c->r[1]+0x00000010u,c->r[4]); // 80047E60
  W16(c->r[1]+0x00000012u,c->r[5]); // 80047E64
  W16(c->r[1]+0x00000016u,c->r[0]); // 80047E68
  W16(c->r[1]+0x00000018u,c->r[4]); // 80047E6C
  c->lr=0x80047E74u; f_8005C900(c); // 80047E70
  cmps(c,0,(int32_t)c->r[3],0); // 80047E74
  if (crb(c,2)) { goto L_80047E98; } // 80047E78
  cmpu(c,0,c->r[3],0x00000002u); // 80047E7C
  if (crb(c,2)) { goto L_80047E98; } // 80047E80
  cmpu(c,0,c->r[3],0x00000005u); // 80047E84
  if (crb(c,2)) { goto L_80047ED8; } // 80047E88
  cmpu(c,0,c->r[3],0x00000001u); // 80047E8C
  if (crb(c,2)) { goto L_80047F1C; } // 80047E90
  goto L_80047F34; // 80047E94
L_80047E98:;
  c->r[3]=0u+0xCC000000u; // 80047E98
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 80047E9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80047EA0
  if (crb(c,2)) { goto L_80047EC0; } // 80047EA4
  c->r[0]=0u+0x00000000u; // 80047EA8
  c->r[3]=0u+0x00000002u; // 80047EAC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80047EB0
  W16(c->r[1]+0x00000014u,c->r[0]); // 80047EB4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80047EB8
  goto L_80047F34; // 80047EBC
L_80047EC0:;
  c->r[3]=0u+0x00000000u; // 80047EC0
  c->r[0]=0u+0x00000001u; // 80047EC4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80047EC8
  W16(c->r[1]+0x00000014u,c->r[3]); // 80047ECC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80047ED0
  goto L_80047F34; // 80047ED4
L_80047ED8:;
  c->r[3]=0u+0xCC000000u; // 80047ED8
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 80047EDC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80047EE0
  if (crb(c,2)) { goto L_80047F00; } // 80047EE4
  c->r[0]=0u+0x00000000u; // 80047EE8
  c->r[3]=0u+0x00000016u; // 80047EEC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80047EF0
  W16(c->r[1]+0x00000014u,c->r[0]); // 80047EF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80047EF8
  goto L_80047F34; // 80047EFC
L_80047F00:;
  c->r[4]=0u+0x00000014u; // 80047F00
  c->r[3]=0u+0x00000000u; // 80047F04
  c->r[0]=0u+0x00000001u; // 80047F08
  W32(c->r[1]+0x00000008u,c->r[4]); // 80047F0C
  W16(c->r[1]+0x00000014u,c->r[3]); // 80047F10
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80047F14
  goto L_80047F34; // 80047F18
L_80047F1C:;
  c->r[4]=0u+0x00000004u; // 80047F1C
  c->r[3]=0u+0x0000002Fu; // 80047F20
  c->r[0]=0u+0x00000001u; // 80047F24
  W32(c->r[1]+0x00000008u,c->r[4]); // 80047F28
  W16(c->r[1]+0x00000014u,c->r[3]); // 80047F2C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80047F30
L_80047F34:;
  c->r[3]=c->r[1]+0x00000008u; // 80047F34
  c->lr=0x80047F3Cu; f_8005BB80(c); // 80047F38
  c->r[3]=0u+0x00000000u; // 80047F3C
  c->r[4]=0u+0x00000000u; // 80047F40
  c->r[5]=0u+0x00000280u; // 80047F44
  c->r[6]=0u+0x000001E0u; // 80047F48
  c->lr=0x80047F50u; f_8005C250(c); // 80047F4C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80047F50
  c->lr=c->r[0]; // 80047F54
  c->r[1]=c->r[1]+0x00000050u; // 80047F58
  return; // 80047F5C
}

// fn_80047F60
void f_80047F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047F60
  c->r[0]=c->lr; // 80047F64
  W32(c->r[1]+0x00000034u,c->r[0]); // 80047F68
  c->r[11]=c->r[1]+0x00000030u; // 80047F6C
  c->lr=0x80047F74u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80047F70
  c->r[27]=c->r[3]|c->r[3]; // 80047F74
  c->r[28]=c->r[4]|c->r[4]; // 80047F78
  c->r[29]=c->r[5]|c->r[5]; // 80047F7C
  c->lr=0x80047F84u; f_80049A20(c); // 80047F80
  c->lr=0x80047F88u; f_8004C740(c); // 80047F84
  c->r[24]=0u+0x801A0000u; // 80047F88
  c->r[3]=c->r[24]+0xFFFFA740u; // 80047F8C
  c->lr=0x80047F94u; f_80045860(c); // 80047F90
  c->r[3]=c->r[24]+0xFFFFA740u; // 80047F94
  c->lr=0x80047F9Cu; f_80045620(c); // 80047F98
  c->lr=0x80047FA0u; f_80044EF0(c); // 80047F9C
  c->lr=0x80047FA4u; f_8005B0A0(c); // 80047FA0
  c->r[3]=0u+0x00000080u; // 80047FA4
  c->lr=0x80047FACu; f_80049E70(c); // 80047FA8
  c->r[3]=0u+0x00000001u; // 80047FAC
  c->lr=0x80047FB4u; f_8005C740(c); // 80047FB0
  c->lr=0x80047FB8u; f_8005C5B0(c); // 80047FB4
  c->r[3]=0u+0x00000000u; // 80047FB8
  c->lr=0x80047FC0u; f_8005ACE0(c); // 80047FBC
  c->r[3]=0u+0x00000000u; // 80047FC0
  c->lr=0x80047FC8u; f_8005AD30(c); // 80047FC4
  c->lr=0x80047FCCu; f_80049A40(c); // 80047FC8
  c->lr=0x80047FD0u; f_8005C7C0(c); // 80047FCC
  c->r[24]=c->r[3]|c->r[3]; // 80047FD0
L_80047FD4:;
  c->lr=0x80047FD8u; f_8005C7C0(c); // 80047FD4
  c->r[0]=c->r[3]-c->r[24]; // 80047FD8
  cmps(c,0,(int32_t)c->r[0],1); // 80047FDC
  if (crb(c,0)) { IRQCHK(c); goto L_80047FD4; } // 80047FE0
  c->lr=0x80047FE8u; f_8004DAA0(c); // 80047FE4
  c->r[5]=0u+0x10620000u; // 80047FE8
  c->r[30]=c->r[4]|c->r[4]; // 80047FEC
  c->r[31]=c->r[3]|c->r[3]; // 80047FF0
  c->r[25]=0u+0x80000000u; // 80047FF4
  c->r[24]=c->r[5]+0x00004DD3u; // 80047FF8
  c->r[26]=0u+0x00000000u; // 80047FFC
L_80048000:;
  c->r[3]=0u+0x00000000u; // 80048000
  c->r[4]=0u+0x00000000u; // 80048004
  c->lr=0x8004800Cu; f_8004B010(c); // 80048008
  cmps(c,0,(int32_t)c->r[3],0); // 8004800C
  if (!crb(c,2)) { goto L_80048050; } // 80048010
  c->lr=0x80048018u; f_8004DAA0(c); // 80048014
  c->r[0]=R32(c->r[25]+0x000000F8u); // 80048018
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 8004801C
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 80048020
  c->r[4]=c->r[26]^0x80000000u; // 80048024
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80048028
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 8004802C
  c->r[0]=c->r[5]^0x80000000u; // 80048030
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 80048034
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 80048038
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 8004803C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80048040
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80048044
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80048048
  if (!crb(c,2)) { IRQCHK(c); goto L_80048000; } // 8004804C
L_80048050:;
  c->lr=0x80048054u; f_80049A20(c); // 80048050
  c->r[3]=0u+0x00000001u; // 80048054
  c->r[4]=0u+0x00000000u; // 80048058
  c->lr=0x80048060u; f_8004B010(c); // 8004805C
  c->r[3]=0u+0x00000000u; // 80048060
  c->r[4]=0u+0x00000000u; // 80048064
  c->lr=0x8004806Cu; f_80079830(c); // 80048068
  c->r[3]=0u+0x00000002u; // 8004806C
  c->r[4]=0u+0x00000000u; // 80048070
  c->lr=0x80048078u; f_80079830(c); // 80048074
  goto L_80048094; // 80048078
L_8004807C:;
  c->r[3]=0u+0x00000000u; // 8004807C
  c->lr=0x80048084u; f_800795B0(c); // 80048080
  c->r[3]=0u+0x00000000u; // 80048084
  c->lr=0x8004808Cu; f_80079D50(c); // 80048088
  c->r[3]=0u+0x00000000u; // 8004808C
  c->lr=0x80048094u; f_8007A4D0(c); // 80048090
L_80048094:;
  c->r[3]=0u+0x00000000u; // 80048094
  c->r[4]=0u+0x00000001u; // 80048098
  c->r[5]=0u+0x00000000u; // 8004809C
  c->lr=0x800480A4u; f_8007A3D0(c); // 800480A0
  cmps(c,0,(int32_t)c->r[3],0); // 800480A4
  if (crb(c,2)) { IRQCHK(c); goto L_8004807C; } // 800480A8
  c->r[3]=0u+0x00000000u; // 800480AC
  c->lr=0x800480B4u; f_8007A4D0(c); // 800480B0
  c->r[3]=0u+0xCD000000u; // 800480B4
L_800480B8:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800480B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800480BC
  cmpu(c,0,c->r[0],0x00000001u); // 800480C0
  if (crb(c,2)) { IRQCHK(c); goto L_800480B8; } // 800480C4
  c->r[4]=0u+0x80040000u; // 800480C8
  c->r[3]=0u+0x00000008u; // 800480CC
  c->r[4]=c->r[4]+0x00003C80u; // 800480D0
  c->lr=0x800480D8u; f_80043BB0(c); // 800480D4
  c->lr=0x800480DCu; f_80069A10(c); // 800480D8
  c->r[3]=0u+0x81400000u; // 800480DC
  c->lr=0x800480E4u; f_80044AB0(c); // 800480E0
  c->r[4]=0u+0x80000000u; // 800480E4
  c->r[3]=R32(c->r[4]+0x00000038u); // 800480E8
  cmps(c,0,(int32_t)c->r[3],0); // 800480EC
  if (!crb(c,2)) { goto L_80048100; } // 800480F0
  c->r[3]=R32(c->r[4]+0x00003110u); // 800480F4
  c->lr=0x800480FCu; f_80044A80(c); // 800480F8
  goto L_80048104; // 800480FC
L_80048100:;
  c->lr=0x80048104u; f_80044A80(c); // 80048100
L_80048104:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80048104
  c->r[3]=0u+0x801A0000u; // 80048108
  {uint32_t ea=c->r[3]+0xFFFFAA08u; W32(ea,c->r[0]); c->r[3]=ea;} // 8004810C
  c->r[0]=R32(c->r[28]+0x00000000u); // 80048110
  W32(c->r[3]+0x00000004u,c->r[0]); // 80048114
  W32(c->r[3]+0x00000008u,c->r[29]); // 80048118
  c->lr=0x80048120u; f_80044A20(c); // 8004811C
  c->r[5]=0u+0x80050000u; // 80048120
  c->r[4]=c->r[3]|c->r[3]; // 80048124
  c->r[3]=c->r[5]+0xFFFF8150u; // 80048128
  c->lr=0x80048130u; f_80045800(c); // 8004812C
  c->r[11]=c->r[1]+0x00000030u; // 80048130
  c->lr=0x80048138u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80048134
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048138
  c->lr=c->r[0]; // 8004813C
  c->r[1]=c->r[1]+0x00000030u; // 80048140
  return; // 80048144
}

// Halt
void f_80048150(Ctx* __restrict c) {
  trace_call(0x80048150u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048150
  c->r[0]=c->lr; // 80048154
  W32(c->r[1]+0x00000054u,c->r[0]); // 80048158
  c->r[0]=0u+0x43300000u; // 8004815C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80048160
  W32(c->r[1]+0x00000048u,c->r[30]); // 80048164
  W32(c->r[1]+0x00000044u,c->r[29]); // 80048168
  W32(c->r[1]+0x00000040u,c->r[28]); // 8004816C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80048170
  W32(c->r[1]+0x00000028u,c->r[0]); // 80048174
  c->lr=0x8004817Cu; f_80049A40(c); // 80048178
  c->r[29]=0u+0x801A0000u; // 8004817C
  c->r[29]=c->r[29]+0xFFFFAA08u; // 80048180
  c->r[28]=R32(c->r[29]+0x00000008u); // 80048184
  c->r[3]=c->r[28]|c->r[28]; // 80048188
  c->lr=0x80048190u; f_8006DD10(c); // 8004818C
  c->r[30]=c->r[3]+0x00000001u; // 80048190
  c->r[4]=0u+0x00000020u; // 80048194
  c->r[3]=c->r[30]|c->r[30]; // 80048198
  c->lr=0x800481A0u; f_80044AC0(c); // 8004819C
  c->r[4]=c->r[28]|c->r[28]; // 800481A0
  c->r[5]=c->r[30]|c->r[30]; // 800481A4
  c->lr=0x800481ACu; f_80072734(c); // 800481A8
  W32(c->r[29]+0x00000008u,c->r[3]); // 800481AC
  c->r[3]=0u+0x000A0000u; // 800481B0
  c->r[3]=c->r[3]+0x00001004u; // 800481B4
  c->r[4]=0u+0x00000020u; // 800481B8
  c->lr=0x800481C0u; f_80044AC0(c); // 800481BC
  c->r[31]=c->r[3]|c->r[3]; // 800481C0
  c->lr=0x800481C8u; f_80044A50(c); // 800481C4
  c->r[4]=c->r[3]|c->r[3]; // 800481C8
  c->r[3]=c->r[31]|c->r[31]; // 800481CC
  c->lr=0x800481D4u; f_80048E10(c); // 800481D0
  c->r[3]=0u+0x00090000u; // 800481D4
  c->r[4]=0u+0x00000020u; // 800481D8
  c->r[3]=c->r[3]+0x00006000u; // 800481DC
  c->lr=0x800481E4u; f_80044AC0(c); // 800481E0
  c->r[0]=R32(c->r[29]+0x00000004u); // 800481E4
  c->r[30]=c->r[3]|c->r[3]; // 800481E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800481EC
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[0]=RF64(ea);} // 800481F0
  c->r[4]=R8(c->r[1]+0x0000001Au); // 800481F4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800481F8
  c->r[0]=R8(c->r[1]+0x00000018u); // 800481FC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80048200
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80048204
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80048208
  c->r[3]=R8(c->r[1]+0x00000019u); // 8004820C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 80048210
  W32(c->r[1]+0x00000024u,c->r[3]); // 80048214
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80048218
  {uint32_t ea=c->r[2]+0xFFFF81E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004821C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80048220
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 80048224
  {uint32_t ea=c->r[2]+0xFFFF81E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048228
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8004822C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80048230
  {uint32_t ea=c->r[2]+0xFFFF81E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80048234
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 80048238
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8004823C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80048240
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048244
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80048248
  {uint32_t ea=c->r[2]+0xFFFF81F0u; c->f[9]=c->ps1[9]=RF32(ea);} // 8004824C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80048250
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 80048254
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80048258
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 8004825C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80048260
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 80048264
  {uint32_t ea=c->r[2]+0xFFFF81F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80048268
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004826C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80048270
  {uint32_t ea=c->r[2]+0xFFFF81F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048274
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 80048278
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8004827C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 80048280
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80048284
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80048288
  {uint32_t ea=c->r[2]+0xFFFF81FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004828C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80048290
  W32(c->r[1]+0x00000024u,c->r[4]); // 80048294
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80048298
  {uint32_t ea=c->r[2]+0xFFFF8200u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004829C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800482A0
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 800482A4
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 800482A8
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[9]=c->ps1[9]=RF32(ea);} // 800482AC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800482B0
  {uint32_t ea=c->r[2]+0xFFFF81D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800482B4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800482B8
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 800482BC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 800482C0
  {uint32_t ea=c->r[2]+0xFFFF81ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 800482C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800482C8
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 800482CC
  {uint32_t ea=c->r[2]+0xFFFF8204u; c->f[6]=c->ps1[6]=RF32(ea);} // 800482D0
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 800482D4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800482D8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800482DC
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 800482E0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800482E4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 800482E8
  fcmp(c,0,c->f[5],c->f[6]); // 800482EC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800482F0
  if (!crb(c,1)) { goto L_800482FC; } // 800482F4
  goto L_80048310; // 800482F8
L_800482FC:;
  fcmp(c,0,c->f[5],c->f[9]); // 800482FC
  if (!crb(c,0)) { goto L_80048308; } // 80048300
  goto L_8004830C; // 80048304
L_80048308:;
  c->f[9]=c->f[5]; // 80048308
L_8004830C:;
  c->f[6]=c->f[9]; // 8004830C
L_80048310:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 80048310
  {uint32_t ea=c->r[2]+0xFFFF8208u; c->f[3]=c->ps1[3]=RF32(ea);} // 80048314
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80048318
  fcmp(c,0,c->f[2],c->f[3]); // 8004831C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048320
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80048324
  if (!crb(c,1)) { goto L_80048330; } // 80048328
  goto L_80048344; // 8004832C
L_80048330:;
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80048330
  fcmp(c,0,c->f[2],c->f[3]); // 80048334
  if (!crb(c,0)) { goto L_80048340; } // 80048338
  goto L_80048344; // 8004833C
L_80048340:;
  c->f[3]=c->f[2]; // 80048340
L_80048344:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80048344
  {uint32_t ea=c->r[2]+0xFFFF8208u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048348
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8004834C
  fcmp(c,0,c->f[1],c->f[2]); // 80048350
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048354
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80048358
  if (!crb(c,1)) { goto L_80048364; } // 8004835C
  goto L_80048378; // 80048360
L_80048364:;
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80048364
  fcmp(c,0,c->f[1],c->f[2]); // 80048368
  if (!crb(c,0)) { goto L_80048374; } // 8004836C
  goto L_80048378; // 80048370
L_80048374:;
  c->f[2]=c->f[1]; // 80048374
L_80048378:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80048378
  c->r[0]=0u+0x00000000u; // 8004837C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80048380
  c->r[4]=c->r[30]|c->r[30]; // 80048384
  c->r[5]=0u+0x00000000u; // 80048388
  c->r[0]=0u+0x00000014u; // 8004838C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80048390
  c->r[3]=R32(c->r[1]+0x00000034u); // 80048394
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80048398
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8004839C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800483A0
  c->r[6]=R8(c->r[1]+0x0000001Du); // 800483A4
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 800483A8
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 800483AC
L_800483B0:;
  c->ctr=c->r[0]; // 800483B0
L_800483B4:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800483B4
  W8(c->r[4]+0x00000001u,c->r[6]); // 800483B8
  W8(c->r[4]+0x00000002u,c->r[3]); // 800483BC
  W8(c->r[4]+0x00000003u,c->r[7]); // 800483C0
  W8(c->r[4]+0x00000004u,c->r[3]); // 800483C4
  W8(c->r[4]+0x00000005u,c->r[6]); // 800483C8
  W8(c->r[4]+0x00000006u,c->r[3]); // 800483CC
  W8(c->r[4]+0x00000007u,c->r[7]); // 800483D0
  W8(c->r[4]+0x00000008u,c->r[3]); // 800483D4
  W8(c->r[4]+0x00000009u,c->r[6]); // 800483D8
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800483DC
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 800483E0
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800483E4
  W8(c->r[4]+0x0000000Du,c->r[6]); // 800483E8
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800483EC
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 800483F0
  W8(c->r[4]+0x00000010u,c->r[3]); // 800483F4
  W8(c->r[4]+0x00000011u,c->r[6]); // 800483F8
  W8(c->r[4]+0x00000012u,c->r[3]); // 800483FC
  W8(c->r[4]+0x00000013u,c->r[7]); // 80048400
  W8(c->r[4]+0x00000014u,c->r[3]); // 80048404
  W8(c->r[4]+0x00000015u,c->r[6]); // 80048408
  W8(c->r[4]+0x00000016u,c->r[3]); // 8004840C
  W8(c->r[4]+0x00000017u,c->r[7]); // 80048410
  W8(c->r[4]+0x00000018u,c->r[3]); // 80048414
  W8(c->r[4]+0x00000019u,c->r[6]); // 80048418
  W8(c->r[4]+0x0000001Au,c->r[3]); // 8004841C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 80048420
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 80048424
  W8(c->r[4]+0x0000001Du,c->r[6]); // 80048428
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 8004842C
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 80048430
  W8(c->r[4]+0x00000020u,c->r[3]); // 80048434
  W8(c->r[4]+0x00000021u,c->r[6]); // 80048438
  W8(c->r[4]+0x00000022u,c->r[3]); // 8004843C
  W8(c->r[4]+0x00000023u,c->r[7]); // 80048440
  W8(c->r[4]+0x00000024u,c->r[3]); // 80048444
  W8(c->r[4]+0x00000025u,c->r[6]); // 80048448
  W8(c->r[4]+0x00000026u,c->r[3]); // 8004844C
  W8(c->r[4]+0x00000027u,c->r[7]); // 80048450
  W8(c->r[4]+0x00000028u,c->r[3]); // 80048454
  W8(c->r[4]+0x00000029u,c->r[6]); // 80048458
  W8(c->r[4]+0x0000002Au,c->r[3]); // 8004845C
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 80048460
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 80048464
  W8(c->r[4]+0x0000002Du,c->r[6]); // 80048468
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 8004846C
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 80048470
  W8(c->r[4]+0x00000030u,c->r[3]); // 80048474
  W8(c->r[4]+0x00000031u,c->r[6]); // 80048478
  W8(c->r[4]+0x00000032u,c->r[3]); // 8004847C
  W8(c->r[4]+0x00000033u,c->r[7]); // 80048480
  W8(c->r[4]+0x00000034u,c->r[3]); // 80048484
  W8(c->r[4]+0x00000035u,c->r[6]); // 80048488
  W8(c->r[4]+0x00000036u,c->r[3]); // 8004848C
  W8(c->r[4]+0x00000037u,c->r[7]); // 80048490
  W8(c->r[4]+0x00000038u,c->r[3]); // 80048494
  W8(c->r[4]+0x00000039u,c->r[6]); // 80048498
  W8(c->r[4]+0x0000003Au,c->r[3]); // 8004849C
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 800484A0
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 800484A4
  W8(c->r[4]+0x0000003Du,c->r[6]); // 800484A8
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 800484AC
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 800484B0
  c->r[4]=c->r[4]+0x00000040u; // 800484B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800483B4; } // 800484B8
  c->r[5]=c->r[5]+0x00000001u; // 800484BC
  cmps(c,0,(int32_t)c->r[5],480); // 800484C0
  if (crb(c,0)) { IRQCHK(c); goto L_800483B0; } // 800484C4
  c->r[3]=c->r[30]|c->r[30]; // 800484C8
  c->lr=0x800484D0u; f_8005C6D0(c); // 800484CC
  c->r[3]=0u+0x00000280u; // 800484D0
  c->r[4]=0u+0x000001E0u; // 800484D4
  c->lr=0x800484DCu; f_80047E40(c); // 800484D8
  c->lr=0x800484E0u; f_8005C5B0(c); // 800484DC
  c->lr=0x800484E4u; f_8005C7C0(c); // 800484E0
  c->r[28]=c->r[3]|c->r[3]; // 800484E4
L_800484E8:;
  c->lr=0x800484ECu; f_8005C7C0(c); // 800484E8
  c->r[0]=c->r[3]-c->r[28]; // 800484EC
  cmps(c,0,(int32_t)c->r[0],2); // 800484F0
  if (crb(c,0)) { IRQCHK(c); goto L_800484E8; } // 800484F4
  c->r[0]=R32(c->r[29]+0x00000000u); // 800484F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800484FC
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[0]=RF64(ea);} // 80048500
  c->r[4]=R8(c->r[1]+0x00000012u); // 80048504
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80048508
  c->r[0]=R8(c->r[1]+0x00000010u); // 8004850C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048510
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 80048514
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80048518
  c->r[3]=R8(c->r[1]+0x00000011u); // 8004851C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 80048520
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80048524
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80048528
  {uint32_t ea=c->r[2]+0xFFFF81E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004852C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80048530
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 80048534
  {uint32_t ea=c->r[2]+0xFFFF81E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048538
  W32(c->r[1]+0x00000024u,c->r[4]); // 8004853C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80048540
  {uint32_t ea=c->r[2]+0xFFFF81E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80048544
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 80048548
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8004854C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80048550
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80048554
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80048558
  {uint32_t ea=c->r[2]+0xFFFF81F0u; c->f[9]=c->ps1[9]=RF32(ea);} // 8004855C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80048560
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 80048564
  W32(c->r[1]+0x00000024u,c->r[3]); // 80048568
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 8004856C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80048570
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 80048574
  {uint32_t ea=c->r[2]+0xFFFF81F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80048578
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8004857C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80048580
  {uint32_t ea=c->r[2]+0xFFFF81F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048584
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 80048588
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8004858C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 80048590
  W32(c->r[1]+0x00000024u,c->r[3]); // 80048594
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80048598
  {uint32_t ea=c->r[2]+0xFFFF81FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004859C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800485A0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800485A4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 800485A8
  {uint32_t ea=c->r[2]+0xFFFF8200u; c->f[1]=c->ps1[1]=RF32(ea);} // 800485AC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800485B0
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 800485B4
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 800485B8
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[9]=c->ps1[9]=RF32(ea);} // 800485BC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800485C0
  {uint32_t ea=c->r[2]+0xFFFF81D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800485C4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800485C8
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 800485CC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 800485D0
  {uint32_t ea=c->r[2]+0xFFFF81ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 800485D4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800485D8
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 800485DC
  {uint32_t ea=c->r[2]+0xFFFF8204u; c->f[6]=c->ps1[6]=RF32(ea);} // 800485E0
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 800485E4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800485E8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800485EC
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 800485F0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800485F4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 800485F8
  fcmp(c,0,c->f[5],c->f[6]); // 800485FC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80048600
  if (!crb(c,1)) { goto L_8004860C; } // 80048604
  goto L_80048620; // 80048608
L_8004860C:;
  fcmp(c,0,c->f[5],c->f[9]); // 8004860C
  if (!crb(c,0)) { goto L_80048618; } // 80048610
  goto L_8004861C; // 80048614
L_80048618:;
  c->f[9]=c->f[5]; // 80048618
L_8004861C:;
  c->f[6]=c->f[9]; // 8004861C
L_80048620:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 80048620
  {uint32_t ea=c->r[2]+0xFFFF8208u; c->f[3]=c->ps1[3]=RF32(ea);} // 80048624
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80048628
  fcmp(c,0,c->f[2],c->f[3]); // 8004862C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048630
  W8(c->r[1]+0x00000008u,c->r[0]); // 80048634
  if (!crb(c,1)) { goto L_80048640; } // 80048638
  goto L_80048654; // 8004863C
L_80048640:;
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80048640
  fcmp(c,0,c->f[2],c->f[3]); // 80048644
  if (!crb(c,0)) { goto L_80048650; } // 80048648
  goto L_80048654; // 8004864C
L_80048650:;
  c->f[3]=c->f[2]; // 80048650
L_80048654:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80048654
  {uint32_t ea=c->r[2]+0xFFFF8208u; c->f[2]=c->ps1[2]=RF32(ea);} // 80048658
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8004865C
  fcmp(c,0,c->f[1],c->f[2]); // 80048660
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048664
  W8(c->r[1]+0x00000009u,c->r[0]); // 80048668
  if (!crb(c,1)) { goto L_80048674; } // 8004866C
  goto L_80048688; // 80048670
L_80048674:;
  {uint32_t ea=c->r[2]+0xFFFF81DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80048674
  fcmp(c,0,c->f[1],c->f[2]); // 80048678
  if (!crb(c,0)) { goto L_80048684; } // 8004867C
  goto L_80048688; // 80048680
L_80048684:;
  c->f[2]=c->f[1]; // 80048684
L_80048688:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80048688
  c->r[0]=0u+0x00000000u; // 8004868C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80048690
  c->r[3]=c->r[30]|c->r[30]; // 80048694
  c->r[10]=R32(c->r[29]+0x00000008u); // 80048698
  c->r[6]=c->r[1]+0x00000014u; // 8004869C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800486A0
  c->r[4]=0u+0x00000280u; // 800486A4
  c->r[5]=0u+0x000001E0u; // 800486A8
  c->r[7]=0u+0x00000030u; // 800486AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800486B0
  c->r[8]=0u+0x00000064u; // 800486B4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800486B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800486BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800486C0
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 800486C4
  c->lr=0x800486CCu; f_80047B10(c); // 800486C8
  c->r[4]=0u+0x00090000u; // 800486CC
  c->r[3]=c->r[30]|c->r[30]; // 800486D0
  c->r[4]=c->r[4]+0x00006000u; // 800486D4
  c->lr=0x800486DCu; f_80045010(c); // 800486D8
  c->r[3]=0u+0x00000000u; // 800486DC
  c->lr=0x800486E4u; f_8005C740(c); // 800486E0
  c->lr=0x800486E8u; f_8005C5B0(c); // 800486E4
  c->lr=0x800486ECu; f_8005C7C0(c); // 800486E8
  c->r[30]=c->r[3]|c->r[3]; // 800486EC
L_800486F0:;
  c->lr=0x800486F4u; f_8005C7C0(c); // 800486F0
  c->r[0]=c->r[3]-c->r[30]; // 800486F4
  cmps(c,0,(int32_t)c->r[0],1); // 800486F8
  if (crb(c,0)) { IRQCHK(c); goto L_800486F0; } // 800486FC
  c->lr=0x80048704u; f_80049A20(c); // 80048700
  c->r[4]=R32(c->r[29]+0x00000008u); // 80048704
  c->r[3]=c->r[13]+0xFFFF8108u; // 80048708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004870C
  c->lr=0x80048714u; f_80045C80(c); // 80048710
  c->lr=0x80048718u; f_800427A0(c); // 80048714
  c->r[0]=R32(c->r[1]+0x00000054u); // 80048718
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004871C
  c->r[30]=R32(c->r[1]+0x00000048u); // 80048720
  c->r[29]=R32(c->r[1]+0x00000044u); // 80048724
  c->r[28]=R32(c->r[1]+0x00000040u); // 80048728
  c->lr=c->r[0]; // 8004872C
  c->r[1]=c->r[1]+0x00000050u; // 80048730
  return; // 80048734
}

// GetFontCode
void f_80048740(Ctx* __restrict c) {
  trace_call(0x80048740u);
  cmpu(c,0,c->r[3],0x00000001u); // 80048740
  if (!crb(c,2)) { goto L_80048854; } // 80048744
  cmpu(c,0,c->r[4],0x00000020u); // 80048748
  if (crb(c,0)) { goto L_80048770; } // 8004874C
  cmpu(c,0,c->r[4],0x000000DFu); // 80048750
  if (crb(c,1)) { goto L_80048770; } // 80048754
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 80048758
  c->r[3]=0u+0x80140000u; // 8004875C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80048760
  c->r[3]=c->r[3]+0xFFFF8700u; // 80048764
  c->r[3]=R16(c->r[3]+c->r[0]); // 80048768
  return; // 8004876C
L_80048770:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 80048770
  if (!crb(c,1)) { goto L_800487DC; } // 80048774
  cmpu(c,0,c->r[4],0x00009872u); // 80048778
  if (crb(c,1)) { goto L_800487DC; } // 8004877C
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 80048780
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 80048784
  c->r[3]=c->r[3]+0xFFFFFF78u; // 80048788
  c->r[0]=0u+0x00000000u; // 8004878C
  cmpu(c,0,c->r[4],0x00000040u); // 80048790
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 80048794
  if (crb(c,0)) { goto L_800487B0; } // 80048798
  cmpu(c,0,c->r[4],0x000000FCu); // 8004879C
  if (crb(c,1)) { goto L_800487B0; } // 800487A0
  cmpu(c,0,c->r[4],0x0000007Fu); // 800487A4
  if (crb(c,2)) { goto L_800487B0; } // 800487A8
  c->r[0]=0u+0x00000001u; // 800487AC
L_800487B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800487B0
  if (!crb(c,2)) { goto L_800487C0; } // 800487B4
  c->r[3]=0u+0x00000000u; // 800487B8
  return; // 800487BC
L_800487C0:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800487C0
  cmps(c,0,(int32_t)c->r[4],64); // 800487C4
  if (crb(c,0)) { goto L_800487D0; } // 800487C8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800487CC
L_800487D0:;
  c->r[3]=c->r[3]+c->r[4]; // 800487D0
  c->r[3]=c->r[3]+0x000002BEu; // 800487D4
  return; // 800487D8
L_800487DC:;
  cmpu(c,0,c->r[4],0x00008140u); // 800487DC
  if (crb(c,0)) { goto L_80048870; } // 800487E0
  cmpu(c,0,c->r[4],0x0000879Eu); // 800487E4
  if (!crb(c,0)) { goto L_80048870; } // 800487E8
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 800487EC
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800487F0
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 800487F4
  c->r[0]=0u+0x00000000u; // 800487F8
  cmpu(c,0,c->r[4],0x00000040u); // 800487FC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 80048800
  if (crb(c,0)) { goto L_8004881C; } // 80048804
  cmpu(c,0,c->r[4],0x000000FCu); // 80048808
  if (crb(c,1)) { goto L_8004881C; } // 8004880C
  cmpu(c,0,c->r[4],0x0000007Fu); // 80048810
  if (crb(c,2)) { goto L_8004881C; } // 80048814
  c->r[0]=0u+0x00000001u; // 80048818
L_8004881C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004881C
  if (!crb(c,2)) { goto L_8004882C; } // 80048820
  c->r[3]=0u+0x00000000u; // 80048824
  return; // 80048828
L_8004882C:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 8004882C
  cmps(c,0,(int32_t)c->r[4],64); // 80048830
  if (crb(c,0)) { goto L_8004883C; } // 80048834
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80048838
L_8004883C:;
  c->r[0]=c->r[3]+c->r[4]; // 8004883C
  c->r[3]=0u+0x80140000u; // 80048840
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80048844
  c->r[3]=c->r[3]+0xFFFF8880u; // 80048848
  c->r[3]=R16(c->r[3]+c->r[0]); // 8004884C
  return; // 80048850
L_80048854:;
  c->r[3]=c->r[4]+0x00010000u; // 80048854
  c->r[0]=c->r[3]+0xFFFFFFDFu; // 80048858
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8004885C
  cmpu(c,0,c->r[0],0x000000DEu); // 80048860
  if (crb(c,1)) { goto L_80048870; } // 80048864
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 80048868
  return; // 8004886C
L_80048870:;
  c->r[3]=0u+0x00000000u; // 80048870
  return; // 80048874
}

// fn_80048880
void f_80048880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048880
  c->r[0]=c->lr; // 80048884
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048888
  c->r[11]=c->r[1]+0x00000020u; // 8004888C
  c->lr=0x80048894u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80048890
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80048894
  c->r[30]=c->r[3]+0x00000010u; // 80048898
  c->r[0]=R32(c->r[3]+0x00000004u); // 8004889C
  c->r[8]=0u+0x00000000u; // 800488A0
  c->r[29]=c->r[3]+c->r[5]; // 800488A4
  c->r[9]=R32(c->r[3]+0x00000008u); // 800488A8
  c->r[11]=0u+0x00000000u; // 800488AC
  c->r[5]=0u+0x80000000u; // 800488B0
  c->r[0]=c->r[0]|0x00000000u; // 800488B4
L_800488B8:;
  cmps(c,0,(int32_t)c->r[11],0); // 800488B8
  if (!crb(c,2)) { goto L_800488CC; } // 800488BC
  c->r[12]=R32(c->r[30]+0x00000000u); // 800488C0
  c->r[11]=0u+0x00000020u; // 800488C4
  c->r[30]=c->r[30]+0x00000004u; // 800488C8
L_800488CC:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 800488CC
  if (crb(c,2)) { goto L_800488E8; } // 800488D0
  c->r[6]=R8(c->r[29]+0x00000000u); // 800488D4
  c->r[29]=c->r[29]+0x00000001u; // 800488D8
  W8(c->r[4]+c->r[8],c->r[6]); // 800488DC
  c->r[8]=c->r[8]+0x00000001u; // 800488E0
  goto L_80048A00; // 800488E4
L_800488E8:;
  c->r[7]=c->r[3]+c->r[9]; // 800488E8
  c->r[6]=R8(c->r[3]+c->r[9]); // 800488EC
  c->r[7]=R8(c->r[7]+0x00000001u); // 800488F0
  c->r[9]=c->r[9]+0x00000002u; // 800488F4
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800488F8
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 800488FC
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 80048900
  c->r[7]=c->r[8]-c->r[6]; // 80048904
  if (!crb(c,2)) { goto L_8004891C; } // 80048908
  c->r[6]=R8(c->r[29]+0x00000000u); // 8004890C
  c->r[29]=c->r[29]+0x00000001u; // 80048910
  c->r[10]=c->r[6]+0x00000012u; // 80048914
  goto L_80048920; // 80048918
L_8004891C:;
  c->r[10]=c->r[10]+0x00000002u; // 8004891C
L_80048920:;
  cmps(c,1,(int32_t)c->r[10],0); // 80048920
  c->r[6]=0u+0x00000000u; // 80048924
  if (!crb(c,5)) { goto L_80048A00; } // 80048928
  cmps(c,0,(int32_t)c->r[10],8); // 8004892C
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 80048930
  if (!crb(c,1)) { goto L_800489CC; } // 80048934
  c->r[28]=0u+0x00000000u; // 80048938
  if (crb(c,4)) { goto L_80048950; } // 8004893C
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 80048940
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 80048944
  if (crb(c,1)) { goto L_80048950; } // 80048948
  c->r[28]=0u+0x00000001u; // 8004894C
L_80048950:;
  cmps(c,0,(int32_t)c->r[28],0); // 80048950
  if (crb(c,2)) { goto L_800489CC; } // 80048954
  c->r[31]=c->r[27]+0x00000007u; // 80048958
  c->r[28]=c->r[4]+c->r[8]; // 8004895C
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 80048960
  c->ctr=c->r[31]; // 80048964
  cmps(c,0,(int32_t)c->r[27],0); // 80048968
  if (!crb(c,1)) { goto L_800489CC; } // 8004896C
L_80048970:;
  c->r[26]=c->r[4]+c->r[7]; // 80048970
  c->r[27]=c->r[8]+c->r[4]; // 80048974
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 80048978
  c->r[8]=c->r[8]+0x00000008u; // 8004897C
  W8(c->r[28]+0x00000000u,c->r[31]); // 80048980
  c->r[28]=c->r[28]+0x00000008u; // 80048984
  c->r[6]=c->r[6]+0x00000008u; // 80048988
  c->r[31]=R8(c->r[4]+c->r[7]); // 8004898C
  c->r[7]=c->r[7]+0x00000008u; // 80048990
  W8(c->r[27]+0x00000001u,c->r[31]); // 80048994
  c->r[31]=R8(c->r[26]+0x00000001u); // 80048998
  W8(c->r[27]+0x00000002u,c->r[31]); // 8004899C
  c->r[31]=R8(c->r[26]+0x00000002u); // 800489A0
  W8(c->r[27]+0x00000003u,c->r[31]); // 800489A4
  c->r[31]=R8(c->r[26]+0x00000003u); // 800489A8
  W8(c->r[27]+0x00000004u,c->r[31]); // 800489AC
  c->r[31]=R8(c->r[26]+0x00000004u); // 800489B0
  W8(c->r[27]+0x00000005u,c->r[31]); // 800489B4
  c->r[31]=R8(c->r[26]+0x00000005u); // 800489B8
  W8(c->r[27]+0x00000006u,c->r[31]); // 800489BC
  c->r[31]=R8(c->r[26]+0x00000006u); // 800489C0
  W8(c->r[27]+0x00000007u,c->r[31]); // 800489C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80048970; } // 800489C8
L_800489CC:;
  c->r[31]=c->r[10]-c->r[6]; // 800489CC
  c->r[28]=c->r[4]+c->r[8]; // 800489D0
  c->ctr=c->r[31]; // 800489D4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 800489D8
  if (!crb(c,0)) { goto L_80048A00; } // 800489DC
L_800489E0:;
  c->r[10]=c->r[4]+c->r[7]; // 800489E0
  c->r[7]=c->r[7]+0x00000001u; // 800489E4
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 800489E8
  c->r[6]=c->r[6]+0x00000001u; // 800489EC
  W8(c->r[28]+0x00000000u,c->r[10]); // 800489F0
  c->r[28]=c->r[28]+0x00000001u; // 800489F4
  c->r[8]=c->r[8]+0x00000001u; // 800489F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800489E0; } // 800489FC
L_80048A00:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80048A00
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80048A04
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 80048A08
  if (crb(c,0)) { IRQCHK(c); goto L_800488B8; } // 80048A0C
  c->r[11]=c->r[1]+0x00000020u; // 80048A10
  c->lr=0x80048A18u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80048A14
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048A18
  c->lr=c->r[0]; // 80048A1C
  c->r[1]=c->r[1]+0x00000020u; // 80048A20
  return; // 80048A24
}

// OSGetFontEncode
void f_80048A30(Ctx* __restrict c) {
  trace_call(0x80048A30u);
  c->r[3]=R16(c->r[13]+0xFFFF8110u); // 80048A30
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80048A34
  if (!crb(c,2)) return; // 80048A38
  c->r[3]=0u+0x80000000u; // 80048A3C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80048A40
  cmps(c,0,(int32_t)c->r[0],0); // 80048A44
  if (!crb(c,2)) { goto L_80048A60; } // 80048A48
  c->r[3]=0u+0xCC000000u; // 80048A4C
  c->r[0]=R16(c->r[3]+0x0000206Eu); // 80048A50
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80048A54
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048A58
  goto L_80048A68; // 80048A5C
L_80048A60:;
  c->r[0]=0u+0x00000000u; // 80048A60
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048A64
L_80048A68:;
  c->r[4]=0u+0x80050000u; // 80048A68
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80048A6C
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80048A70
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 80048A74
  return; // 80048A78
}

// OSSetFontEncode
void f_80048A80(Ctx* __restrict c) {
  trace_call(0x80048A80u);
  c->r[0]=R16(c->r[13]+0xFFFF8110u); // 80048A80
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80048A84
  if (crb(c,2)) { goto L_80048A90; } // 80048A88
  goto L_80048ACC; // 80048A8C
L_80048A90:;
  c->r[4]=0u+0x80000000u; // 80048A90
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80048A94
  cmps(c,0,(int32_t)c->r[0],0); // 80048A98
  if (!crb(c,2)) { goto L_80048AB4; } // 80048A9C
  c->r[4]=0u+0xCC000000u; // 80048AA0
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80048AA4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80048AA8
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048AAC
  goto L_80048ABC; // 80048AB0
L_80048AB4:;
  c->r[0]=0u+0x00000000u; // 80048AB4
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048AB8
L_80048ABC:;
  c->r[4]=0u+0x80050000u; // 80048ABC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80048AC0
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80048AC4
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 80048AC8
L_80048ACC:;
  cmpu(c,1,c->r[3],0x00000005u); // 80048ACC
  if (crb(c,5)) { goto L_80048AF0; } // 80048AD0
  cmpu(c,0,c->r[3],0x00000003u); // 80048AD4
  W16(c->r[13]+0xFFFF8110u,c->r[3]); // 80048AD8
  if (crb(c,0)) { goto L_80048AF0; } // 80048ADC
  if (crb(c,5)) { goto L_80048AF0; } // 80048AE0
  c->r[3]=0u+0x80050000u; // 80048AE4
  c->r[3]=c->r[3]+0xFFFF9030u; // 80048AE8
  W32(c->r[13]+0xFFFF8B18u,c->r[3]); // 80048AEC
L_80048AF0:;
  c->r[3]=c->r[0]|c->r[0]; // 80048AF0
  return; // 80048AF4
}

// ReadFont
void f_80048B00(Ctx* __restrict c) {
  trace_call(0x80048B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048B00
  c->r[0]=c->lr; // 80048B04
  W32(c->r[1]+0x00000034u,c->r[0]); // 80048B08
  c->r[11]=c->r[1]+0x00000030u; // 80048B0C
  c->lr=0x80048B14u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80048B10
  cmpu(c,0,c->r[4],0x00000001u); // 80048B14
  c->r[28]=c->r[3]|c->r[3]; // 80048B18
  c->r[29]=c->r[4]|c->r[4]; // 80048B1C
  c->r[30]=c->r[5]|c->r[5]; // 80048B20
  if (!crb(c,2)) { goto L_80048B80; } // 80048B24
  c->r[4]=0u+0x001B0000u; // 80048B28
  c->r[3]=0u+0x00050000u; // 80048B2C
  c->r[31]=c->r[28]|c->r[28]; // 80048B30
  c->r[26]=c->r[4]+0xFFFFFF00u; // 80048B34
  c->r[27]=c->r[3]+0xFFFFD000u; // 80048B38
  goto L_80048B74; // 80048B3C
L_80048B40:;
  cmps(c,0,(int32_t)c->r[27],256); // 80048B40
  c->r[25]=0u+0x00000100u; // 80048B44
  if (crb(c,1)) { goto L_80048B50; } // 80048B48
  c->r[25]=c->r[27]|c->r[27]; // 80048B4C
L_80048B50:;
  c->r[27]=c->r[27]-c->r[25]; // 80048B50
L_80048B54:;
  c->r[3]=c->r[31]|c->r[31]; // 80048B54
  c->r[4]=c->r[25]|c->r[25]; // 80048B58
  c->r[5]=c->r[26]|c->r[26]; // 80048B5C
  c->lr=0x80048B64u; f_8004BF50(c); // 80048B60
  cmps(c,0,(int32_t)c->r[3],0); // 80048B64
  if (crb(c,2)) { IRQCHK(c); goto L_80048B54; } // 80048B68
  c->r[26]=c->r[26]+c->r[25]; // 80048B6C
  c->r[31]=c->r[31]+c->r[25]; // 80048B70
L_80048B74:;
  cmps(c,0,(int32_t)c->r[27],0); // 80048B74
  if (crb(c,1)) { IRQCHK(c); goto L_80048B40; } // 80048B78
  goto L_80048BD0; // 80048B7C
L_80048B80:;
  c->r[3]=0u+0x00200000u; // 80048B80
  c->r[26]=c->r[28]|c->r[28]; // 80048B84
  c->r[31]=c->r[3]+0xFFFFCF00u; // 80048B88
  c->r[27]=0u+0x00003000u; // 80048B8C
  goto L_80048BC8; // 80048B90
L_80048B94:;
  cmps(c,0,(int32_t)c->r[27],256); // 80048B94
  c->r[25]=0u+0x00000100u; // 80048B98
  if (crb(c,1)) { goto L_80048BA4; } // 80048B9C
  c->r[25]=c->r[27]|c->r[27]; // 80048BA0
L_80048BA4:;
  c->r[27]=c->r[27]-c->r[25]; // 80048BA4
L_80048BA8:;
  c->r[3]=c->r[26]|c->r[26]; // 80048BA8
  c->r[4]=c->r[25]|c->r[25]; // 80048BAC
  c->r[5]=c->r[31]|c->r[31]; // 80048BB0
  c->lr=0x80048BB8u; f_8004BF50(c); // 80048BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80048BB8
  if (crb(c,2)) { IRQCHK(c); goto L_80048BA8; } // 80048BBC
  c->r[31]=c->r[31]+c->r[25]; // 80048BC0
  c->r[26]=c->r[26]+c->r[25]; // 80048BC4
L_80048BC8:;
  cmps(c,0,(int32_t)c->r[27],0); // 80048BC8
  if (crb(c,1)) { IRQCHK(c); goto L_80048B94; } // 80048BCC
L_80048BD0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80048BD0
  cmpu(c,0,c->r[0],0x00000059u); // 80048BD4
  if (!crb(c,2)) { goto L_80048BFC; } // 80048BD8
  c->r[0]=R8(c->r[28]+0x00000001u); // 80048BDC
  cmpu(c,0,c->r[0],0x00000061u); // 80048BE0
  if (!crb(c,2)) { goto L_80048BFC; } // 80048BE4
  c->r[0]=R8(c->r[28]+0x00000002u); // 80048BE8
  cmpu(c,0,c->r[0],0x00000079u); // 80048BEC
  if (!crb(c,2)) { goto L_80048BFC; } // 80048BF0
  c->r[31]=R32(c->r[28]+0x00000004u); // 80048BF4
  goto L_80048C00; // 80048BF8
L_80048BFC:;
  c->r[31]=0u+0x00000000u; // 80048BFC
L_80048C00:;
  cmps(c,0,(int32_t)c->r[31],0); // 80048C00
  if (!crb(c,2)) { goto L_80048C10; } // 80048C04
  c->r[3]=0u+0x00000000u; // 80048C08
  goto L_80048DF8; // 80048C0C
L_80048C10:;
  c->r[3]=c->r[28]|c->r[28]; // 80048C10
  c->r[4]=c->r[30]|c->r[30]; // 80048C14
  c->lr=0x80048C1Cu; f_80048880(c); // 80048C18
  cmpu(c,0,c->r[29],0x00000001u); // 80048C1C
  if (!crb(c,2)) { goto L_80048DF4; } // 80048C20
  c->r[5]=R32(c->r[2]+0xFFFF8218u); // 80048C24
  c->r[3]=c->r[29]|c->r[29]; // 80048C28
  c->r[0]=R32(c->r[2]+0xFFFF821Cu); // 80048C2C
  c->r[4]=0u+0x00000054u; // 80048C30
  W32(c->r[1]+0x00000008u,c->r[5]); // 80048C34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80048C38
  c->lr=0x80048C40u; f_80048740(c); // 80048C3C
  c->r[11]=R16(c->r[30]+0x0000001Au); // 80048C40
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 80048C44
  c->r[0]=R16(c->r[30]+0x0000001Eu); // 80048C48
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[4]); // 80048C4C
  c->r[5]=R32(c->r[30]+0x00000024u); // 80048C50
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 80048C54
  c->r[6]=R16(c->r[30]+0x00000012u); // 80048C58
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 80048C5C
  c->r[7]=R16(c->r[30]+0x00000010u); // 80048C60
  c->r[25]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 80048C64
  c->r[0]=c->r[0]+c->r[4]; // 80048C68
  c->r[10]=R32(c->r[30]+0x00000014u); // 80048C6C
  c->r[4]=c->r[30]+c->r[5]; // 80048C70
  c->r[28]=sraw(c,c->r[0],1); // 80048C74
  c->r[8]=R16(c->r[1]+0x00000008u); // 80048C78
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[9]); // 80048C7C
  c->r[9]=R16(c->r[1]+0x0000000Au); // 80048C80
  c->r[3]=c->r[3]-c->r[0]; // 80048C84
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[11]); // 80048C88
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 80048C8C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80048C90
  c->r[26]=c->r[3]-c->r[0]; // 80048C94
  c->r[6]=c->r[5]+0x00000004u; // 80048C98
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[7]); // 80048C9C
  c->r[11]=c->r[5]+0x00000005u; // 80048CA0
  c->r[3]=sraw(c,c->r[6],3); // 80048CA4
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 80048CA8
  c->r[12]=addc(c,c->r[3],0,c->xer_ca); // 80048CAC
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 80048CB0
  c->r[29]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 80048CB4
  c->r[3]=sraw(c,c->r[26],3); // 80048CB8
  c->r[0]=c->r[0]-c->r[7]; // 80048CBC
  c->r[10]=addc(c,c->r[3],0,c->xer_ca); // 80048CC0
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80048CC4
  c->r[0]=rotl(c->r[26],29)&0xE0000000u; // 80048CC8
  c->r[6]=rotl(c->r[26],1)&0x00000001u; // 80048CCC
  c->r[29]=rotl(c->r[29],31)&0x7FFFFFFFu; // 80048CD0
  c->r[12]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[12]); // 80048CD4
  c->r[7]=c->r[3]+c->r[7]; // 80048CD8
  c->r[0]=c->r[0]-c->r[6]; // 80048CDC
  c->r[4]=c->r[4]+c->r[29]; // 80048CE0
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80048CE4
  c->r[0]=rotl(c->r[10],4)&0xFFFFFFF0u; // 80048CE8
  c->r[3]=c->r[3]+c->r[6]; // 80048CEC
  c->r[12]=c->r[4]+c->r[12]; // 80048CF0
  c->r[10]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80048CF4
  c->r[6]=rotl(c->r[11],29)&0xE0000000u; // 80048CF8
  c->r[3]=sraw(c,c->r[3],2); // 80048CFC
  c->r[12]=c->r[12]+c->r[0]; // 80048D00
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80048D04
  c->r[6]=c->r[6]-c->r[7]; // 80048D08
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 80048D0C
  c->r[12]=c->r[12]+c->r[10]; // 80048D10
  W16(c->r[12]+c->r[3],c->r[8]); // 80048D14
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80048D18
  c->r[6]=c->r[6]+c->r[7]; // 80048D1C
  c->r[8]=c->r[5]+0x00000006u; // 80048D20
  c->r[12]=R16(c->r[30]+0x0000001Eu); // 80048D24
  c->r[10]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80048D28
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 80048D2C
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 80048D30
  c->r[28]=rotl(c->r[12],2)&0xFFFFFFE0u; // 80048D34
  c->r[12]=rotl(c->r[12],3)&0x00000001u; // 80048D38
  c->r[12]=c->r[12]+c->r[28]; // 80048D3C
  c->r[6]=c->r[6]-c->r[7]; // 80048D40
  c->r[12]=sraw(c,c->r[12],1); // 80048D44
  c->r[11]=sraw(c,c->r[11],3); // 80048D48
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80048D4C
  c->r[11]=addc(c,c->r[11],0,c->xer_ca); // 80048D50
  c->r[6]=c->r[6]+c->r[7]; // 80048D54
  c->r[11]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 80048D58
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80048D5C
  c->r[7]=c->r[4]+c->r[11]; // 80048D60
  c->r[7]=c->r[7]+c->r[0]; // 80048D64
  c->r[7]=c->r[7]+c->r[10]; // 80048D68
  W16(c->r[7]+c->r[3],c->r[9]); // 80048D6C
  c->r[7]=R16(c->r[30]+0x0000001Eu); // 80048D70
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 80048D74
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 80048D78
  c->r[7]=c->r[7]+c->r[9]; // 80048D7C
  c->r[9]=sraw(c,c->r[7],1); // 80048D80
  c->r[7]=sraw(c,c->r[8],3); // 80048D84
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 80048D88
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 80048D8C
  c->r[7]=c->r[4]+c->r[7]; // 80048D90
  c->r[7]=c->r[7]+c->r[0]; // 80048D94
  c->r[7]=c->r[7]+c->r[6]; // 80048D98
  c->r[6]=R16(c->r[1]+0x0000000Cu); // 80048D9C
  c->r[8]=c->r[5]+0x00000007u; // 80048DA0
  W16(c->r[7]+c->r[3],c->r[6]); // 80048DA4
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 80048DA8
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 80048DAC
  c->r[5]=R16(c->r[1]+0x0000000Eu); // 80048DB0
  c->r[9]=R16(c->r[30]+0x0000001Eu); // 80048DB4
  c->r[6]=c->r[6]-c->r[7]; // 80048DB8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80048DBC
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFE0u; // 80048DC0
  c->r[9]=rotl(c->r[9],3)&0x00000001u; // 80048DC4
  c->r[9]=c->r[9]+c->r[10]; // 80048DC8
  c->r[6]=c->r[6]+c->r[7]; // 80048DCC
  c->r[9]=sraw(c,c->r[9],1); // 80048DD0
  c->r[7]=sraw(c,c->r[8],3); // 80048DD4
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80048DD8
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 80048DDC
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 80048DE0
  c->r[4]=c->r[4]+c->r[7]; // 80048DE4
  c->r[4]=c->r[4]+c->r[0]; // 80048DE8
  c->r[4]=c->r[4]+c->r[6]; // 80048DEC
  W16(c->r[4]+c->r[3],c->r[5]); // 80048DF0
L_80048DF4:;
  c->r[3]=c->r[31]|c->r[31]; // 80048DF4
L_80048DF8:;
  c->r[11]=c->r[1]+0x00000030u; // 80048DF8
  c->lr=0x80048E00u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80048DFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80048E00
  c->lr=c->r[0]; // 80048E04
  c->r[1]=c->r[1]+0x00000030u; // 80048E08
  return; // 80048E0C
}

// OSLoadFont
void f_80048E10(Ctx* __restrict c) {
  trace_call(0x80048E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048E10
  c->r[0]=c->lr; // 80048E14
  c->r[5]=c->r[3]|c->r[3]; // 80048E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80048E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80048E20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80048E24
  c->r[30]=c->r[4]|c->r[4]; // 80048E28
  c->r[0]=R16(c->r[13]+0xFFFF8110u); // 80048E2C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80048E30
  if (crb(c,2)) { goto L_80048E3C; } // 80048E34
  goto L_80048E78; // 80048E38
L_80048E3C:;
  c->r[4]=0u+0x80000000u; // 80048E3C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80048E40
  cmps(c,0,(int32_t)c->r[0],0); // 80048E44
  if (!crb(c,2)) { goto L_80048E60; } // 80048E48
  c->r[4]=0u+0xCC000000u; // 80048E4C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80048E50
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80048E54
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048E58
  goto L_80048E68; // 80048E5C
L_80048E60:;
  c->r[0]=0u+0x00000000u; // 80048E60
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80048E64
L_80048E68:;
  c->r[4]=0u+0x80050000u; // 80048E68
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80048E6C
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80048E70
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 80048E74
L_80048E78:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80048E78
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 80048E7C
  cmpu(c,0,c->r[0],0x00000002u); // 80048E80
  if (!crb(c,1)) { goto L_80048ECC; } // 80048E84
  cmps(c,0,(int32_t)c->r[4],0); // 80048E88
  if (crb(c,2)) { goto L_80048E9C; } // 80048E8C
  cmps(c,0,(int32_t)c->r[4],1); // 80048E90
  if (crb(c,2)) { goto L_80048EB4; } // 80048E94
  goto L_80048F08; // 80048E98
L_80048E9C:;
  W32(c->r[13]+0xFFFF8B24u,c->r[3]); // 80048E9C
  c->r[3]=c->r[30]|c->r[30]; // 80048EA0
  c->r[4]=0u+0x00000000u; // 80048EA4
  c->lr=0x80048EACu; f_80048B00(c); // 80048EA8
  c->r[31]=c->r[3]|c->r[3]; // 80048EAC
  goto L_80048F0C; // 80048EB0
L_80048EB4:;
  W32(c->r[13]+0xFFFF8B20u,c->r[3]); // 80048EB4
  c->r[3]=c->r[30]|c->r[30]; // 80048EB8
  c->r[4]=0u+0x00000001u; // 80048EBC
  c->lr=0x80048EC4u; f_80048B00(c); // 80048EC0
  c->r[31]=c->r[3]|c->r[3]; // 80048EC4
  goto L_80048F0C; // 80048EC8
L_80048ECC:;
  W32(c->r[13]+0xFFFF8B24u,c->r[3]); // 80048ECC
  c->r[3]=c->r[30]|c->r[30]; // 80048ED0
  c->r[4]=0u+0x00000000u; // 80048ED4
  c->lr=0x80048EDCu; f_80048B00(c); // 80048ED8
  cmps(c,0,(int32_t)c->r[3],0); // 80048EDC
  c->r[31]=c->r[3]|c->r[3]; // 80048EE0
  if (crb(c,2)) { goto L_80048F0C; } // 80048EE4
  c->r[0]=R32(c->r[13]+0xFFFF8B24u); // 80048EE8
  c->r[4]=0u+0x00000001u; // 80048EEC
  c->r[5]=c->r[0]+c->r[3]; // 80048EF0
  W32(c->r[13]+0xFFFF8B20u,c->r[5]); // 80048EF4
  c->r[3]=c->r[30]|c->r[30]; // 80048EF8
  c->lr=0x80048F00u; f_80048B00(c); // 80048EFC
  c->r[31]=c->r[31]+c->r[3]; // 80048F00
  goto L_80048F0C; // 80048F04
L_80048F08:;
  c->r[31]=0u+0x00000000u; // 80048F08
L_80048F0C:;
  c->r[3]=c->r[31]|c->r[31]; // 80048F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80048F10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80048F14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80048F18
  c->lr=c->r[0]; // 80048F1C
  c->r[1]=c->r[1]+0x00000010u; // 80048F20
  return; // 80048F24
}

// ParseStringS
void f_80048F30(Ctx* __restrict c) {
  trace_call(0x80048F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048F30
  c->r[0]=c->lr; // 80048F34
  cmps(c,0,(int32_t)c->r[3],0); // 80048F38
  c->r[7]=0u+0x00000000u; // 80048F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80048F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80048F44
  c->r[31]=c->r[6]|c->r[6]; // 80048F48
  W32(c->r[1]+0x00000008u,c->r[30]); // 80048F4C
  c->r[30]=c->r[4]|c->r[4]; // 80048F50
  if (crb(c,2)) { goto L_80048F64; } // 80048F54
  cmps(c,0,(int32_t)c->r[3],1); // 80048F58
  if (crb(c,2)) { goto L_80048F7C; } // 80048F5C
  goto L_80048FFC; // 80048F60
L_80048F64:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 80048F64
  c->r[6]=R32(c->r[13]+0xFFFF8B24u); // 80048F68
  cmps(c,0,(int32_t)c->r[7],0); // 80048F6C
  if (crb(c,2)) { goto L_80048FFC; } // 80048F70
  c->r[30]=c->r[4]+0x00000001u; // 80048F74
  goto L_80048FFC; // 80048F78
L_80048F7C:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 80048F7C
  c->r[6]=R32(c->r[13]+0xFFFF8B20u); // 80048F80
  cmps(c,0,(int32_t)c->r[7],0); // 80048F84
  if (crb(c,2)) { goto L_80048FFC; } // 80048F88
  cmpu(c,0,c->r[7],0x00000081u); // 80048F8C
  c->r[30]=c->r[4]+0x00000001u; // 80048F90
  c->r[0]=0u+0x00000000u; // 80048F94
  if (crb(c,0)) { goto L_80048FA4; } // 80048F98
  cmpu(c,0,c->r[7],0x0000009Fu); // 80048F9C
  if (!crb(c,1)) { goto L_80048FB4; } // 80048FA0
L_80048FA4:;
  cmpu(c,0,c->r[7],0x000000E0u); // 80048FA4
  if (crb(c,0)) { goto L_80048FB8; } // 80048FA8
  cmpu(c,0,c->r[7],0x000000FCu); // 80048FAC
  if (crb(c,1)) { goto L_80048FB8; } // 80048FB0
L_80048FB4:;
  c->r[0]=0u+0x00000001u; // 80048FB4
L_80048FB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80048FB8
  if (crb(c,2)) { goto L_80048FFC; } // 80048FBC
  c->r[4]=R8(c->r[30]+0x00000000u); // 80048FC0
  c->r[0]=0u+0x00000000u; // 80048FC4
  cmpu(c,0,c->r[4],0x00000040u); // 80048FC8
  if (crb(c,0)) { goto L_80048FE4; } // 80048FCC
  cmpu(c,0,c->r[4],0x000000FCu); // 80048FD0
  if (crb(c,1)) { goto L_80048FE4; } // 80048FD4
  cmpu(c,0,c->r[4],0x0000007Fu); // 80048FD8
  if (crb(c,2)) { goto L_80048FE4; } // 80048FDC
  c->r[0]=0u+0x00000001u; // 80048FE0
L_80048FE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80048FE4
  if (crb(c,2)) { goto L_80048FFC; } // 80048FE8
  c->r[0]=R8(c->r[30]+0x00000000u); // 80048FEC
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80048FF0
  c->r[30]=c->r[30]+0x00000001u; // 80048FF4
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 80048FF8
L_80048FFC:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 80048FFC
  c->r[4]=c->r[7]|c->r[7]; // 80049000
  c->lr=0x80049008u; f_80048740(c); // 80049004
  W32(c->r[31]+0x00000000u,c->r[3]); // 80049008
  c->r[3]=c->r[30]|c->r[30]; // 8004900C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80049010
  c->r[30]=R32(c->r[1]+0x00000008u); // 80049014
  c->r[0]=R32(c->r[1]+0x00000014u); // 80049018
  c->lr=c->r[0]; // 8004901C
  c->r[1]=c->r[1]+0x00000010u; // 80049020
  return; // 80049024
}

// fn_80049030
void f_80049030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049030
  c->r[0]=c->lr; // 80049034
  W32(c->r[1]+0x00000034u,c->r[0]); // 80049038
  c->r[11]=c->r[1]+0x00000030u; // 8004903C
  c->lr=0x80049044u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80049040
  cmps(c,0,(int32_t)c->r[3],0); // 80049044
  c->r[30]=0u+0x00000000u; // 80049048
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004904C
  c->r[26]=c->r[3]|c->r[3]; // 80049050
  c->r[27]=c->r[4]|c->r[4]; // 80049054
  c->r[28]=c->r[5]|c->r[5]; // 80049058
  c->r[29]=c->r[6]|c->r[6]; // 8004905C
  if (crb(c,2)) { goto L_80049088; } // 80049060
  cmps(c,0,(int32_t)c->r[3],1); // 80049064
  if (crb(c,2)) { goto L_800490A0; } // 80049068
  cmps(c,0,(int32_t)c->r[3],3); // 8004906C
  if (crb(c,2)) { goto L_80049124; } // 80049070
  cmps(c,0,(int32_t)c->r[3],4); // 80049074
  if (crb(c,2)) { goto L_80049138; } // 80049078
  cmps(c,0,(int32_t)c->r[3],5); // 8004907C
  if (crb(c,2)) { goto L_8004914C; } // 80049080
  goto L_80049160; // 80049084
L_80049088:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 80049088
  c->r[31]=R32(c->r[13]+0xFFFF8B24u); // 8004908C
  cmps(c,0,(int32_t)c->r[30],0); // 80049090
  if (crb(c,2)) { goto L_80049160; } // 80049094
  c->r[27]=c->r[4]+0x00000001u; // 80049098
  goto L_80049160; // 8004909C
L_800490A0:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 800490A0
  c->r[31]=R32(c->r[13]+0xFFFF8B20u); // 800490A4
  cmps(c,0,(int32_t)c->r[30],0); // 800490A8
  if (crb(c,2)) { goto L_80049160; } // 800490AC
  cmpu(c,0,c->r[30],0x00000081u); // 800490B0
  c->r[27]=c->r[4]+0x00000001u; // 800490B4
  c->r[0]=0u+0x00000000u; // 800490B8
  if (crb(c,0)) { goto L_800490C8; } // 800490BC
  cmpu(c,0,c->r[30],0x0000009Fu); // 800490C0
  if (!crb(c,1)) { goto L_800490D8; } // 800490C4
L_800490C8:;
  cmpu(c,0,c->r[30],0x000000E0u); // 800490C8
  if (crb(c,0)) { goto L_800490DC; } // 800490CC
  cmpu(c,0,c->r[30],0x000000FCu); // 800490D0
  if (crb(c,1)) { goto L_800490DC; } // 800490D4
L_800490D8:;
  c->r[0]=0u+0x00000001u; // 800490D8
L_800490DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800490DC
  if (crb(c,2)) { goto L_80049160; } // 800490E0
  c->r[3]=R8(c->r[27]+0x00000000u); // 800490E4
  c->r[0]=0u+0x00000000u; // 800490E8
  cmpu(c,0,c->r[3],0x00000040u); // 800490EC
  if (crb(c,0)) { goto L_80049108; } // 800490F0
  cmpu(c,0,c->r[3],0x000000FCu); // 800490F4
  if (crb(c,1)) { goto L_80049108; } // 800490F8
  cmpu(c,0,c->r[3],0x0000007Fu); // 800490FC
  if (crb(c,2)) { goto L_80049108; } // 80049100
  c->r[0]=0u+0x00000001u; // 80049104
L_80049108:;
  cmps(c,0,(int32_t)c->r[0],0); // 80049108
  if (crb(c,2)) { goto L_80049160; } // 8004910C
  c->r[0]=R8(c->r[27]+0x00000000u); // 80049110
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80049114
  c->r[27]=c->r[27]+0x00000001u; // 80049118
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 8004911C
  goto L_80049160; // 80049120
L_80049124:;
  c->r[3]=c->r[27]|c->r[27]; // 80049124
  c->r[4]=c->r[1]+0x00000008u; // 80049128
  c->lr=0x80049130u; f_8004DED0(c); // 8004912C
  c->r[27]=c->r[3]|c->r[3]; // 80049130
  goto L_80049160; // 80049134
L_80049138:;
  c->r[3]=c->r[27]|c->r[27]; // 80049138
  c->r[4]=c->r[1]+0x00000008u; // 8004913C
  c->lr=0x80049144u; f_8004DFF0(c); // 80049140
  c->r[27]=c->r[3]|c->r[3]; // 80049144
  goto L_80049160; // 80049148
L_8004914C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004914C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80049150
  cmps(c,0,(int32_t)c->r[0],0); // 80049154
  if (crb(c,2)) { goto L_80049160; } // 80049158
  c->r[27]=c->r[4]+0x00000004u; // 8004915C
L_80049160:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80049160
  cmps(c,0,(int32_t)c->r[3],0); // 80049164
  if (crb(c,2)) { goto L_800491B4; } // 80049168
  c->r[31]=R32(c->r[13]+0xFFFF8B24u); // 8004916C
  c->r[26]=0u+0x00000000u; // 80049170
  c->lr=0x80049178u; f_8004E060(c); // 80049174
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 80049178
  if (crb(c,2)) { goto L_80049198; } // 8004917C
  c->r[0]=R32(c->r[13]+0xFFFF8B1Cu); // 80049180
  cmps(c,0,(int32_t)c->r[0],0); // 80049184
  if (crb(c,2)) { goto L_800491B4; } // 80049188
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004918C
  cmpu(c,0,c->r[0],0x0000007Fu); // 80049190
  if (crb(c,1)) { goto L_800491B4; } // 80049194
L_80049198:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80049198
  c->lr=0x800491A0u; f_8004E0E0(c); // 8004919C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800491A0
  c->r[30]=c->r[3]|c->r[3]; // 800491A4
  if (crb(c,2)) { goto L_800491B4; } // 800491A8
  c->r[26]=0u+0x00000001u; // 800491AC
  c->r[31]=R32(c->r[13]+0xFFFF8B20u); // 800491B0
L_800491B4:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 800491B4
  c->r[3]=c->r[26]|c->r[26]; // 800491B8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800491BC
  c->lr=0x800491C4u; f_80048740(c); // 800491C0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800491C4
  c->r[11]=c->r[1]+0x00000030u; // 800491C8
  c->r[3]=c->r[27]|c->r[27]; // 800491CC
  c->lr=0x800491D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800491D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800491D4
  c->lr=c->r[0]; // 800491D8
  c->r[1]=c->r[1]+0x00000030u; // 800491DC
  return; // 800491E0
}

// fn_800491F0
void f_800491F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800491F0
  c->r[0]=c->lr; // 800491F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800491F8
  c->r[11]=c->r[1]+0x00000050u; // 800491FC
  c->lr=0x80049204u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80049200
  c->r[0]=R16(c->r[13]+0xFFFF8110u); // 80049204
  c->r[29]=c->r[4]|c->r[4]; // 80049208
  c->r[30]=c->r[5]|c->r[5]; // 8004920C
  c->r[17]=c->r[6]|c->r[6]; // 80049210
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80049214
  c->r[31]=c->r[7]|c->r[7]; // 80049218
  if (crb(c,2)) { goto L_80049224; } // 8004921C
  goto L_80049260; // 80049220
L_80049224:;
  c->r[4]=0u+0x80000000u; // 80049224
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80049228
  cmps(c,0,(int32_t)c->r[0],0); // 8004922C
  if (!crb(c,2)) { goto L_80049248; } // 80049230
  c->r[4]=0u+0xCC000000u; // 80049234
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80049238
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8004923C
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80049240
  goto L_80049250; // 80049244
L_80049248:;
  c->r[0]=0u+0x00000000u; // 80049248
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 8004924C
L_80049250:;
  c->r[4]=0u+0x80050000u; // 80049250
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80049254
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80049258
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 8004925C
L_80049260:;
  c->r[12]=R32(c->r[13]+0xFFFF8B18u); // 80049260
  c->r[4]=c->r[3]|c->r[3]; // 80049264
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80049268
  c->r[5]=c->r[1]+0x0000000Cu; // 8004926C
  c->r[6]=c->r[1]+0x00000008u; // 80049270
  c->ctr=c->r[12]; // 80049274
  if (true) { c->lr=0x8004927Cu; dispatch(c,c->ctr); } // 80049278
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8004927C
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 80049280
  c->r[0]=sraw(c,c->r[0],3); // 80049284
  c->r[11]=R32(c->r[1]+0x00000008u); // 80049288
  c->r[9]=R16(c->r[4]+0x0000001Au); // 8004928C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80049290
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 80049294
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80049298
  c->r[6]=R32(c->r[4]+0x00000024u); // 8004929C
  c->r[23]=c->r[4]+0x0000002Cu; // 800492A0
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 800492A4
  c->r[5]=R32(c->r[4]+0x00000014u); // 800492A8
  c->r[22]=c->r[4]+c->r[6]; // 800492AC
  c->r[7]=R16(c->r[4]+0x00000012u); // 800492B0
  c->r[6]=R16(c->r[4]+0x00000010u); // 800492B4
  c->r[24]=0u+0x00000000u; // 800492B8
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 800492BC
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 800492C0
  c->r[11]=c->r[11]-c->r[0]; // 800492C4
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 800492C8
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 800492CC
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 800492D0
  c->r[26]=c->r[11]-c->r[9]; // 800492D4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800492D8
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 800492DC
  c->r[22]=c->r[22]+c->r[0]; // 800492E0
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 800492E4
  goto L_80049434; // 800492E8
L_800492EC:;
  c->r[7]=c->r[27]+c->r[24]; // 800492EC
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 800492F0
  c->r[5]=sraw(c,c->r[7],3); // 800492F4
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 800492F8
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 800492FC
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 80049300
  c->r[5]=sraw(c,c->r[24],3); // 80049304
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 80049308
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 8004930C
  c->r[0]=c->r[0]-c->r[4]; // 80049310
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 80049314
  c->r[6]=c->r[6]-c->r[7]; // 80049318
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8004931C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80049320
  c->r[0]=c->r[0]+c->r[4]; // 80049324
  c->r[4]=c->r[6]+c->r[7]; // 80049328
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8004932C
  c->r[11]=c->r[29]+c->r[5]; // 80049330
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80049334
  c->r[25]=0u+0x00000000u; // 80049338
  goto L_80049420; // 8004933C
L_80049340:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 80049340
  c->r[28]=c->r[30]+c->r[25]; // 80049344
  c->r[5]=c->r[26]+c->r[25]; // 80049348
  c->r[0]=0u+0x000000F0u; // 8004934C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 80049350
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 80049354
  c->r[4]=c->r[4]+c->r[6]; // 80049358
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 8004935C
  c->r[7]=sraw(c,c->r[4],1); // 80049360
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 80049364
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 80049368
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 8004936C
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 80049370
  c->r[18]=sraw(c,c->r[5],3); // 80049374
  c->r[6]=c->r[6]-c->r[4]; // 80049378
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 8004937C
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80049380
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 80049384
  c->r[17]=c->r[17]+c->r[4]; // 80049388
  c->r[20]=c->r[20]-c->r[19]; // 8004938C
  c->r[21]=c->r[21]^c->r[19]; // 80049390
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 80049394
  c->r[18]=sraw(c,c->r[17],2); // 80049398
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 8004939C
  c->r[17]=c->r[5]-c->r[4]; // 800493A0
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 800493A4
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 800493A8
  c->r[20]=c->r[20]+c->r[19]; // 800493AC
  c->r[18]=sraw(c,c->r[28],3); // 800493B0
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 800493B4
  c->r[7]=c->r[22]+c->r[7]; // 800493B8
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800493BC
  c->r[7]=c->r[7]+c->r[6]; // 800493C0
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 800493C4
  c->r[7]=c->r[7]+c->r[10]; // 800493C8
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 800493CC
  c->r[28]=c->r[17]+c->r[4]; // 800493D0
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 800493D4
  c->r[4]=c->r[21]+c->r[20]; // 800493D8
  c->r[7]=R8(c->r[7]+c->r[5]); // 800493DC
  c->r[6]=c->r[11]+c->r[6]; // 800493E0
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800493E4
  c->r[4]=sraw(c,c->r[4],1); // 800493E8
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 800493EC
  c->r[6]=c->r[6]+c->r[12]; // 800493F0
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 800493F4
  c->r[7]=R8(c->r[6]+c->r[4]); // 800493F8
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 800493FC
  c->r[5]=R8(c->r[23]+c->r[5]); // 80049400
  if (crb(c,2)) { goto L_8004940C; } // 80049404
  c->r[0]=0u+0x0000000Fu; // 80049408
L_8004940C:;
  c->r[0]=c->r[5]&c->r[0]; // 8004940C
  c->r[25]=c->r[25]+0x00000001u; // 80049410
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80049414
  c->r[0]=c->r[7]|c->r[0]; // 80049418
  W8(c->r[6]+c->r[4],c->r[0]); // 8004941C
L_80049420:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80049420
  c->r[0]=R16(c->r[4]+0x00000010u); // 80049424
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80049428
  if (crb(c,0)) { IRQCHK(c); goto L_80049340; } // 8004942C
  c->r[24]=c->r[24]+0x00000001u; // 80049430
L_80049434:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 80049434
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80049438
  if (crb(c,0)) { IRQCHK(c); goto L_800492EC; } // 8004943C
  cmps(c,0,(int32_t)c->r[31],0); // 80049440
  if (crb(c,2)) { goto L_80049460; } // 80049444
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80049448
  c->r[4]=R32(c->r[1]+0x00000008u); // 8004944C
  c->r[0]=R16(c->r[5]+0x00000022u); // 80049450
  c->r[0]=c->r[5]+c->r[0]; // 80049454
  c->r[0]=R8(c->r[4]+c->r[0]); // 80049458
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004945C
L_80049460:;
  c->r[11]=c->r[1]+0x00000050u; // 80049460
  c->lr=0x80049468u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80049464
  c->r[0]=R32(c->r[1]+0x00000054u); // 80049468
  c->lr=c->r[0]; // 8004946C
  c->r[1]=c->r[1]+0x00000050u; // 80049470
  return; // 80049474
}

// ExpandFontSheet
void f_80049480(Ctx* __restrict c) {
  trace_call(0x80049480u);
  c->r[0]=R16(c->r[3]+0x00000018u); // 80049480
  c->r[6]=c->r[3]+0x0000002Cu; // 80049484
  cmps(c,0,(int32_t)c->r[0],0); // 80049488
  if (!crb(c,2)) { goto L_800495B8; } // 8004948C
  c->r[7]=R32(c->r[3]+0x00000028u); // 80049490
  c->r[0]=rotl(c->r[7],1)&0x00000001u; // 80049494
  c->r[0]=c->r[0]+c->r[7]; // 80049498
  c->r[7]=sraw(c,c->r[0],1); // 8004949C
  c->r[8]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800494A0
  c->r[7]=c->r[4]+c->r[8]; // 800494A4
  c->r[9]=rotl(c->r[8],1)&0xFFFFFFFEu; // 800494A8
  c->r[4]=c->r[8]+0x00000001u; // 800494AC
  if (crb(c,0)) { goto L_800496E0; } // 800494B0
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 800494B4
  c->ctr=c->r[0]; // 800494B8
  if (crb(c,2)) { goto L_80049560; } // 800494BC
L_800494C0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800494C0
  c->r[10]=c->r[5]+c->r[9]; // 800494C4
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 800494C8
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800494CC
  c->r[0]=R8(c->r[6]+c->r[0]); // 800494D0
  c->r[8]=R8(c->r[6]+c->r[8]); // 800494D4
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800494D8
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800494DC
  W8(c->r[5]+c->r[9],c->r[0]); // 800494E0
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 800494E4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800494E8
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 800494EC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800494F0
  c->r[0]=R8(c->r[6]+c->r[0]); // 800494F4
  c->r[8]=R8(c->r[6]+c->r[8]); // 800494F8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800494FC
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80049500
  W8(c->r[10]+0x00000001u,c->r[0]); // 80049504
  c->r[10]=c->r[5]+c->r[9]; // 80049508
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8004950C
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 80049510
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80049514
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049518
  c->r[8]=R8(c->r[6]+c->r[8]); // 8004951C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80049520
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80049524
  W8(c->r[5]+c->r[9],c->r[0]); // 80049528
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 8004952C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80049530
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 80049534
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 80049538
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8004953C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049540
  c->r[8]=R8(c->r[6]+c->r[8]); // 80049544
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80049548
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8004954C
  W8(c->r[10]+0x00000001u,c->r[0]); // 80049550
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800494C0; } // 80049554
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 80049558
  if (crb(c,2)) { goto L_800496E0; } // 8004955C
L_80049560:;
  c->ctr=c->r[4]; // 80049560
L_80049564:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80049564
  c->r[10]=c->r[5]+c->r[9]; // 80049568
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 8004956C
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80049570
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049574
  c->r[8]=R8(c->r[6]+c->r[8]); // 80049578
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8004957C
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80049580
  W8(c->r[5]+c->r[9],c->r[0]); // 80049584
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 80049588
  c->r[0]=R8(c->r[7]+0x00000000u); // 8004958C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80049590
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 80049594
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80049598
  c->r[0]=R8(c->r[6]+c->r[0]); // 8004959C
  c->r[8]=R8(c->r[6]+c->r[8]); // 800495A0
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800495A4
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800495A8
  W8(c->r[10]+0x00000001u,c->r[0]); // 800495AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80049564; } // 800495B0
  goto L_800496E0; // 800495B4
L_800495B8:;
  cmpu(c,0,c->r[0],0x00000002u); // 800495B8
  if (!crb(c,2)) { goto L_800496E0; } // 800495BC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800495C0
  c->r[0]=sraw(c,c->r[0],2); // 800495C4
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 800495C8
  c->r[9]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800495CC
  c->r[7]=c->r[4]+c->r[9]; // 800495D0
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800495D4
  c->r[4]=c->r[9]+0x00000001u; // 800495D8
  if (crb(c,0)) { goto L_800496E0; } // 800495DC
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 800495E0
  c->ctr=c->r[0]; // 800495E4
  if (crb(c,2)) { goto L_8004968C; } // 800495E8
L_800495EC:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800495EC
  c->r[9]=c->r[5]+c->r[8]; // 800495F0
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 800495F4
  c->r[0]=R8(c->r[6]+c->r[0]); // 800495F8
  W8(c->r[5]+c->r[8],c->r[0]); // 800495FC
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80049600
  c->r[0]=R8(c->r[7]+0x00000000u); // 80049604
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80049608
  c->r[0]=R8(c->r[6]+c->r[0]); // 8004960C
  W8(c->r[9]+0x00000001u,c->r[0]); // 80049610
  c->r[0]=R8(c->r[7]+0x00000000u); // 80049614
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 80049618
  c->r[0]=R8(c->r[6]+c->r[0]); // 8004961C
  W8(c->r[9]+0x00000002u,c->r[0]); // 80049620
  c->r[0]=R8(c->r[7]+0x00000000u); // 80049624
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80049628
  c->r[0]=R8(c->r[6]+c->r[0]); // 8004962C
  W8(c->r[9]+0x00000003u,c->r[0]); // 80049630
  c->r[9]=c->r[5]+c->r[8]; // 80049634
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80049638
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 8004963C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049640
  W8(c->r[5]+c->r[8],c->r[0]); // 80049644
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80049648
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8004964C
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80049650
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049654
  W8(c->r[9]+0x00000001u,c->r[0]); // 80049658
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8004965C
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 80049660
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049664
  W8(c->r[9]+0x00000002u,c->r[0]); // 80049668
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8004966C
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 80049670
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80049674
  c->r[0]=R8(c->r[6]+c->r[0]); // 80049678
  W8(c->r[9]+0x00000003u,c->r[0]); // 8004967C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800495EC; } // 80049680
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 80049684
  if (crb(c,2)) { goto L_800496E0; } // 80049688
L_8004968C:;
  c->ctr=c->r[4]; // 8004968C
L_80049690:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80049690
  c->r[9]=c->r[5]+c->r[8]; // 80049694
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 80049698
  c->r[0]=R8(c->r[6]+c->r[0]); // 8004969C
  W8(c->r[5]+c->r[8],c->r[0]); // 800496A0
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 800496A4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800496A8
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 800496AC
  c->r[0]=R8(c->r[6]+c->r[0]); // 800496B0
  W8(c->r[9]+0x00000001u,c->r[0]); // 800496B4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800496B8
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 800496BC
  c->r[0]=R8(c->r[6]+c->r[0]); // 800496C0
  W8(c->r[9]+0x00000002u,c->r[0]); // 800496C4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800496C8
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800496CC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800496D0
  c->r[0]=R8(c->r[6]+c->r[0]); // 800496D4
  W8(c->r[9]+0x00000003u,c->r[0]); // 800496D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80049690; } // 800496DC
L_800496E0:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 800496E0
  c->r[3]=c->r[5]|c->r[5]; // 800496E4
  f_80045040(c); return; // 800496E8
}

// OSInitFont
void f_800496F0(Ctx* __restrict c) {
  trace_call(0x800496F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800496F0
  c->r[0]=c->lr; // 800496F4
  c->r[5]=c->r[3]|c->r[3]; // 800496F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800496FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80049700
  c->r[0]=R16(c->r[13]+0xFFFF8110u); // 80049704
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80049708
  if (crb(c,2)) { goto L_80049714; } // 8004970C
  goto L_80049750; // 80049710
L_80049714:;
  c->r[4]=0u+0x80000000u; // 80049714
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80049718
  cmps(c,0,(int32_t)c->r[0],0); // 8004971C
  if (!crb(c,2)) { goto L_80049738; } // 80049720
  c->r[4]=0u+0xCC000000u; // 80049724
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80049728
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8004972C
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80049730
  goto L_80049740; // 80049734
L_80049738:;
  c->r[0]=0u+0x00000000u; // 80049738
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 8004973C
L_80049740:;
  c->r[4]=0u+0x80050000u; // 80049740
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80049744
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80049748
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 8004974C
L_80049750:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80049750
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 80049754
  cmpu(c,0,c->r[0],0x00000002u); // 80049758
  if (!crb(c,1)) { goto L_80049814; } // 8004975C
  cmps(c,0,(int32_t)c->r[4],0); // 80049760
  if (crb(c,2)) { goto L_80049774; } // 80049764
  cmps(c,0,(int32_t)c->r[4],1); // 80049768
  if (crb(c,2)) { goto L_800497C4; } // 8004976C
  goto L_800498B8; // 80049770
L_80049774:;
  W32(c->r[13]+0xFFFF8B24u,c->r[3]); // 80049774
  c->r[3]=c->r[3]+0x00020000u; // 80049778
  c->r[4]=0u+0x00000000u; // 8004977C
  c->r[3]=c->r[3]+0xFFFFD120u; // 80049780
  c->lr=0x80049788u; f_80048B00(c); // 80049784
  cmps(c,0,(int32_t)c->r[3],0); // 80049788
  if (!crb(c,2)) { goto L_80049798; } // 8004978C
  c->r[3]=0u+0x00000000u; // 80049790
  goto L_800498BC; // 80049794
L_80049798:;
  c->r[5]=R32(c->r[13]+0xFFFF8B24u); // 80049798
  c->r[3]=R32(c->r[5]+0x00000024u); // 8004979C
  c->r[0]=c->r[3]+0x0000001Fu; // 800497A0
  c->r[4]=c->r[5]+c->r[3]; // 800497A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800497A8
  W32(c->r[5]+0x00000024u,c->r[0]); // 800497AC
  c->r[3]=R32(c->r[13]+0xFFFF8B24u); // 800497B0
  c->r[0]=R32(c->r[3]+0x00000024u); // 800497B4
  c->r[5]=c->r[3]+c->r[0]; // 800497B8
  c->lr=0x800497C0u; f_80049480(c); // 800497BC
  goto L_800498B8; // 800497C0
L_800497C4:;
  W32(c->r[13]+0xFFFF8B20u,c->r[3]); // 800497C4
  c->r[3]=c->r[3]+0x000D0000u; // 800497C8
  c->r[4]=0u+0x00000001u; // 800497CC
  c->r[3]=c->r[3]+0x00003F00u; // 800497D0
  c->lr=0x800497D8u; f_80048B00(c); // 800497D4
  cmps(c,0,(int32_t)c->r[3],0); // 800497D8
  if (!crb(c,2)) { goto L_800497E8; } // 800497DC
  c->r[3]=0u+0x00000000u; // 800497E0
  goto L_800498BC; // 800497E4
L_800497E8:;
  c->r[5]=R32(c->r[13]+0xFFFF8B20u); // 800497E8
  c->r[3]=R32(c->r[5]+0x00000024u); // 800497EC
  c->r[0]=c->r[3]+0x0000001Fu; // 800497F0
  c->r[4]=c->r[5]+c->r[3]; // 800497F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800497F8
  W32(c->r[5]+0x00000024u,c->r[0]); // 800497FC
  c->r[3]=R32(c->r[13]+0xFFFF8B20u); // 80049800
  c->r[0]=R32(c->r[3]+0x00000024u); // 80049804
  c->r[5]=c->r[3]+c->r[0]; // 80049808
  c->lr=0x80049810u; f_80049480(c); // 8004980C
  goto L_800498B8; // 80049810
L_80049814:;
  c->r[31]=c->r[3]+0x000F0000u; // 80049814
  W32(c->r[13]+0xFFFF8B24u,c->r[3]); // 80049818
  c->r[31]=c->r[31]+0x00004020u; // 8004981C
  c->r[4]=0u+0x00000000u; // 80049820
  c->r[3]=c->r[31]|c->r[31]; // 80049824
  c->lr=0x8004982Cu; f_80048B00(c); // 80049828
  cmps(c,0,(int32_t)c->r[3],0); // 8004982C
  if (!crb(c,2)) { goto L_8004983C; } // 80049830
  c->r[3]=0u+0x00000000u; // 80049834
  goto L_800498BC; // 80049838
L_8004983C:;
  c->r[5]=R32(c->r[13]+0xFFFF8B24u); // 8004983C
  c->r[3]=R32(c->r[5]+0x00000024u); // 80049840
  c->r[0]=c->r[3]+0x0000001Fu; // 80049844
  c->r[4]=c->r[5]+c->r[3]; // 80049848
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8004984C
  W32(c->r[5]+0x00000024u,c->r[0]); // 80049850
  c->r[3]=R32(c->r[13]+0xFFFF8B24u); // 80049854
  c->r[0]=R32(c->r[3]+0x00000024u); // 80049858
  c->r[5]=c->r[3]+c->r[0]; // 8004985C
  c->lr=0x80049864u; f_80049480(c); // 80049860
  c->r[5]=R32(c->r[13]+0xFFFF8B24u); // 80049864
  c->r[3]=c->r[31]|c->r[31]; // 80049868
  c->r[4]=0u+0x00000001u; // 8004986C
  c->r[5]=c->r[5]+0x00020000u; // 80049870
  c->r[5]=c->r[5]+0x00000120u; // 80049874
  W32(c->r[13]+0xFFFF8B20u,c->r[5]); // 80049878
  c->lr=0x80049880u; f_80048B00(c); // 8004987C
  cmps(c,0,(int32_t)c->r[3],0); // 80049880
  if (!crb(c,2)) { goto L_80049890; } // 80049884
  c->r[3]=0u+0x00000000u; // 80049888
  goto L_800498BC; // 8004988C
L_80049890:;
  c->r[5]=R32(c->r[13]+0xFFFF8B20u); // 80049890
  c->r[3]=R32(c->r[5]+0x00000024u); // 80049894
  c->r[0]=c->r[3]+0x0000001Fu; // 80049898
  c->r[4]=c->r[5]+c->r[3]; // 8004989C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800498A0
  W32(c->r[5]+0x00000024u,c->r[0]); // 800498A4
  c->r[3]=R32(c->r[13]+0xFFFF8B20u); // 800498A8
  c->r[0]=R32(c->r[3]+0x00000024u); // 800498AC
  c->r[5]=c->r[3]+c->r[0]; // 800498B0
  c->lr=0x800498B8u; f_80049480(c); // 800498B4
L_800498B8:;
  c->r[3]=0u+0x00000001u; // 800498B8
L_800498BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800498BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800498C0
  c->lr=c->r[0]; // 800498C4
  c->r[1]=c->r[1]+0x00000010u; // 800498C8
  return; // 800498CC
}

// OSGetFontTexture
void f_800498D0(Ctx* __restrict c) {
  trace_call(0x800498D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800498D0
  c->r[0]=c->lr; // 800498D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800498D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800498DC
  c->r[31]=c->r[7]|c->r[7]; // 800498E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800498E4
  c->r[30]=c->r[6]|c->r[6]; // 800498E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800498EC
  c->r[29]=c->r[5]|c->r[5]; // 800498F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800498F4
  c->r[28]=c->r[4]|c->r[4]; // 800498F8
  c->r[0]=R16(c->r[13]+0xFFFF8110u); // 800498FC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80049900
  if (crb(c,2)) { goto L_8004990C; } // 80049904
  goto L_80049948; // 80049908
L_8004990C:;
  c->r[4]=0u+0x80000000u; // 8004990C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80049910
  cmps(c,0,(int32_t)c->r[0],0); // 80049914
  if (!crb(c,2)) { goto L_80049930; } // 80049918
  c->r[4]=0u+0xCC000000u; // 8004991C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80049920
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80049924
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80049928
  goto L_80049938; // 8004992C
L_80049930:;
  c->r[0]=0u+0x00000000u; // 80049930
  W16(c->r[13]+0xFFFF8110u,c->r[0]); // 80049934
L_80049938:;
  c->r[4]=0u+0x80050000u; // 80049938
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8004993C
  c->r[4]=c->r[4]+0xFFFF8F30u; // 80049940
  W32(c->r[13]+0xFFFF8B18u,c->r[4]); // 80049944
L_80049948:;
  c->r[12]=R32(c->r[13]+0xFFFF8B18u); // 80049948
  c->r[4]=c->r[3]|c->r[3]; // 8004994C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80049950
  c->r[5]=c->r[1]+0x0000000Cu; // 80049954
  c->r[6]=c->r[1]+0x00000008u; // 80049958
  c->ctr=c->r[12]; // 8004995C
  if (true) { c->lr=0x80049964u; dispatch(c,c->ctr); } // 80049960
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80049964
  cmps(c,0,(int32_t)c->r[31],0); // 80049968
  c->r[6]=R32(c->r[1]+0x00000008u); // 8004996C
  c->r[5]=R16(c->r[7]+0x0000001Au); // 80049970
  c->r[4]=R16(c->r[7]+0x0000001Cu); // 80049974
  c->r[0]=R32(c->r[7]+0x00000024u); // 80049978
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8004997C
  c->r[4]=R32(c->r[7]+0x00000014u); // 80049980
  c->r[0]=c->r[7]+c->r[0]; // 80049984
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 80049988
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 8004998C
  c->r[0]=c->r[4]+c->r[0]; // 80049990
  W32(c->r[28]+0x00000000u,c->r[0]); // 80049994
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 80049998
  c->r[4]=R32(c->r[1]+0x00000008u); // 8004999C
  c->r[7]=R16(c->r[8]+0x0000001Au); // 800499A0
  c->r[5]=R16(c->r[8]+0x0000001Cu); // 800499A4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800499A8
  c->r[0]=R16(c->r[8]+0x00000010u); // 800499AC
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 800499B0
  c->r[5]=c->r[4]-c->r[5]; // 800499B4
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 800499B8
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800499BC
  c->r[4]=c->r[5]-c->r[4]; // 800499C0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800499C4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800499C8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800499CC
  c->r[0]=R16(c->r[4]+0x00000012u); // 800499D0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800499D4
  W32(c->r[30]+0x00000000u,c->r[0]); // 800499D8
  if (crb(c,2)) { goto L_800499F8; } // 800499DC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800499E0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800499E4
  c->r[0]=R16(c->r[5]+0x00000022u); // 800499E8
  c->r[0]=c->r[5]+c->r[0]; // 800499EC
  c->r[0]=R8(c->r[4]+c->r[0]); // 800499F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800499F4
L_800499F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800499F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800499FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80049A00
  c->r[29]=R32(c->r[1]+0x00000014u); // 80049A04
  c->r[28]=R32(c->r[1]+0x00000010u); // 80049A08
  c->lr=c->r[0]; // 80049A0C
  c->r[1]=c->r[1]+0x00000020u; // 80049A10
  return; // 80049A14
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_80049A20(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_80049A40(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_80049A60(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_80049A90(Ctx* __restrict c) {
  trace_call(0x80049A90u);
  c->r[5]=R32(c->r[13]+0xFFFF8B38u); // 80049A90
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80049A94
  c->r[3]=R32(c->r[5]+c->r[0]); // 80049A98
  W32(c->r[5]+c->r[0],c->r[4]); // 80049A9C
  return; // 80049AA0
}

// __OSGetInterruptHandler
void f_80049AB0(Ctx* __restrict c) {
  trace_call(0x80049AB0u);
  c->r[4]=R32(c->r[13]+0xFFFF8B38u); // 80049AB0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80049AB4
  c->r[3]=R32(c->r[4]+c->r[0]); // 80049AB8
  return; // 80049ABC
}

// __OSInterruptInit
void f_80049AC0(Ctx* __restrict c) {
  trace_call(0x80049AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049AC0
  c->r[0]=c->lr; // 80049AC4
  c->r[4]=0u+0x00000000u; // 80049AC8
  c->r[5]=0u+0x00000080u; // 80049ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80049AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80049AD4
  c->r[31]=0u+0x80000000u; // 80049AD8
  c->r[3]=c->r[31]+0x00003040u; // 80049ADC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80049AE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80049AE4
  W32(c->r[13]+0xFFFF8B38u,c->r[3]); // 80049AE8
  c->lr=0x80049AF0u; f_80004714(c); // 80049AEC
  c->r[0]=0u+0x00000000u; // 80049AF0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80049AF4
  c->r[4]=0u+0xCC000000u; // 80049AF8
  c->r[5]=0u+0x000000F0u; // 80049AFC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80049B00
  c->r[3]=0u+0xCD000000u; // 80049B04
  c->r[0]=0u+0x40000000u; // 80049B08
  c->r[30]=0u+0xFFFFFFF0u; // 80049B0C
  W32(c->r[4]+0x00003004u,c->r[5]); // 80049B10
  W32(c->r[3]+0x00000034u,c->r[0]); // 80049B14
  c->lr=0x80049B1Cu; f_80049A20(c); // 80049B18
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80049B1C
  c->r[29]=c->r[3]|c->r[3]; // 80049B20
  c->r[4]=R32(c->r[31]+0x000000C8u); // 80049B24
  c->r[30]=c->r[30]|c->r[0]; // 80049B28
  c->r[0]=~(c->r[0]|c->r[4]); // 80049B2C
  W32(c->r[31]+0x000000C4u,c->r[30]); // 80049B30
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 80049B34
  c->r[30]=c->r[30]|c->r[4]; // 80049B38
  goto L_80049B48; // 80049B3C
L_80049B40:;
  c->r[4]=c->r[30]|c->r[30]; // 80049B40
  c->lr=0x80049B48u; f_80049B90(c); // 80049B44
L_80049B48:;
  cmps(c,0,(int32_t)c->r[3],0); // 80049B48
  if (!crb(c,2)) { IRQCHK(c); goto L_80049B40; } // 80049B4C
  c->r[3]=c->r[29]|c->r[29]; // 80049B50
  c->lr=0x80049B58u; f_80049A60(c); // 80049B54
  c->r[4]=0u+0x80050000u; // 80049B58
  c->r[3]=0u+0x00000004u; // 80049B5C
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 80049B60
  c->lr=0x80049B68u; f_80043BB0(c); // 80049B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80049B68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80049B6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80049B70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80049B74
  c->lr=c->r[0]; // 80049B78
  c->r[1]=c->r[1]+0x00000020u; // 80049B7C
  return; // 80049B80
}

// SetInterruptMask
void f_80049B90(Ctx* __restrict c) {
  trace_call(0x80049B90u);
  c->r[0]=cntlz(c->r[3]); // 80049B90
  cmps(c,0,(int32_t)c->r[0],12); // 80049B94
  if (!crb(c,0)) { goto L_80049BBC; } // 80049B98
  cmps(c,0,(int32_t)c->r[0],8); // 80049B9C
  if (crb(c,2)) { goto L_80049C6C; } // 80049BA0
  if (!crb(c,0)) { goto L_80049C98; } // 80049BA4
  cmps(c,0,(int32_t)c->r[0],5); // 80049BA8
  if (!crb(c,0)) { goto L_80049C2C; } // 80049BAC
  cmps(c,0,(int32_t)c->r[0],0); // 80049BB0
  if (!crb(c,0)) { goto L_80049BDC; } // 80049BB4
  return; // 80049BB8
L_80049BBC:;
  cmps(c,0,(int32_t)c->r[0],17); // 80049BBC
  if (!crb(c,0)) { goto L_80049BD0; } // 80049BC0
  cmps(c,0,(int32_t)c->r[0],15); // 80049BC4
  if (!crb(c,0)) { goto L_80049D20; } // 80049BC8
  goto L_80049CDC; // 80049BCC
L_80049BD0:;
  cmps(c,0,(int32_t)c->r[0],28); // 80049BD0
  if (!crb(c,0)) return; // 80049BD4
  goto L_80049D54; // 80049BD8
L_80049BDC:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 80049BDC
  c->r[5]=0u+0x00000000u; // 80049BE0
  if (!crb(c,2)) { goto L_80049BEC; } // 80049BE4
  c->r[5]=c->r[5]|0x00000001u; // 80049BE8
L_80049BEC:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 80049BEC
  if (!crb(c,2)) { goto L_80049BF8; } // 80049BF0
  c->r[5]=c->r[5]|0x00000002u; // 80049BF4
L_80049BF8:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 80049BF8
  if (!crb(c,2)) { goto L_80049C04; } // 80049BFC
  c->r[5]=c->r[5]|0x00000004u; // 80049C00
L_80049C04:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 80049C04
  if (!crb(c,2)) { goto L_80049C10; } // 80049C08
  c->r[5]=c->r[5]|0x00000008u; // 80049C0C
L_80049C10:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 80049C10
  if (!crb(c,2)) { goto L_80049C1C; } // 80049C14
  c->r[5]=c->r[5]|0x00000010u; // 80049C18
L_80049C1C:;
  c->r[4]=0u+0xCC000000u; // 80049C1C
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 80049C20
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 80049C24
  return; // 80049C28
L_80049C2C:;
  c->r[5]=0u+0xCC000000u; // 80049C2C
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 80049C30
  c->r[5]=R16(c->r[5]+0x0000500Au); // 80049C34
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 80049C38
  if (!crb(c,2)) { goto L_80049C44; } // 80049C3C
  c->r[5]=c->r[5]|0x00000010u; // 80049C40
L_80049C44:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 80049C44
  if (!crb(c,2)) { goto L_80049C50; } // 80049C48
  c->r[5]=c->r[5]|0x00000040u; // 80049C4C
L_80049C50:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 80049C50
  if (!crb(c,2)) { goto L_80049C5C; } // 80049C54
  c->r[5]=c->r[5]|0x00000100u; // 80049C58
L_80049C5C:;
  c->r[4]=0u+0xCC000000u; // 80049C5C
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 80049C60
  W16(c->r[4]+0x0000500Au,c->r[5]); // 80049C64
  return; // 80049C68
L_80049C6C:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 80049C6C
  c->r[4]=0u+0xCD000000u; // 80049C70
  c->r[5]=R32(c->r[4]+0x00006C00u); // 80049C74
  c->r[0]=0u+0xFFFFFFD3u; // 80049C78
  c->r[5]=c->r[5]&c->r[0]; // 80049C7C
  if (!crb(c,2)) { goto L_80049C88; } // 80049C80
  c->r[5]=c->r[5]|0x00000004u; // 80049C84
L_80049C88:;
  c->r[4]=0u+0xCD000000u; // 80049C88
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 80049C8C
  W32(c->r[4]+0x00006C00u,c->r[5]); // 80049C90
  return; // 80049C94
L_80049C98:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 80049C98
  c->r[5]=0u+0xCD000000u; // 80049C9C
  c->r[5]=R32(c->r[5]+0x00006800u); // 80049CA0
  c->r[0]=0u+0xFFFFD3F0u; // 80049CA4
  c->r[5]=c->r[5]&c->r[0]; // 80049CA8
  if (!crb(c,2)) { goto L_80049CB4; } // 80049CAC
  c->r[5]=c->r[5]|0x00000001u; // 80049CB0
L_80049CB4:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 80049CB4
  if (!crb(c,2)) { goto L_80049CC0; } // 80049CB8
  c->r[5]=c->r[5]|0x00000004u; // 80049CBC
L_80049CC0:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 80049CC0
  if (!crb(c,2)) { goto L_80049CCC; } // 80049CC4
  c->r[5]=c->r[5]|0x00000400u; // 80049CC8
L_80049CCC:;
  c->r[4]=0u+0xCD000000u; // 80049CCC
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 80049CD0
  W32(c->r[4]+0x00006800u,c->r[5]); // 80049CD4
  return; // 80049CD8
L_80049CDC:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 80049CDC
  c->r[5]=0u+0xCD000000u; // 80049CE0
  c->r[5]=R32(c->r[5]+0x00006814u); // 80049CE4
  c->r[0]=0u+0xFFFFF3F0u; // 80049CE8
  c->r[5]=c->r[5]&c->r[0]; // 80049CEC
  if (!crb(c,2)) { goto L_80049CF8; } // 80049CF0
  c->r[5]=c->r[5]|0x00000001u; // 80049CF4
L_80049CF8:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 80049CF8
  if (!crb(c,2)) { goto L_80049D04; } // 80049CFC
  c->r[5]=c->r[5]|0x00000004u; // 80049D00
L_80049D04:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 80049D04
  if (!crb(c,2)) { goto L_80049D10; } // 80049D08
  c->r[5]=c->r[5]|0x00000400u; // 80049D0C
L_80049D10:;
  c->r[4]=0u+0xCD000000u; // 80049D10
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 80049D14
  W32(c->r[4]+0x00006814u,c->r[5]); // 80049D18
  return; // 80049D1C
L_80049D20:;
  c->r[5]=0u+0xCD000000u; // 80049D20
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 80049D24
  c->r[5]=R32(c->r[5]+0x00006828u); // 80049D28
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 80049D2C
  if (!crb(c,2)) { goto L_80049D38; } // 80049D30
  c->r[5]=c->r[5]|0x00000001u; // 80049D34
L_80049D38:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 80049D38
  if (!crb(c,2)) { goto L_80049D44; } // 80049D3C
  c->r[5]=c->r[5]|0x00000004u; // 80049D40
L_80049D44:;
  c->r[4]=0u+0xCD000000u; // 80049D44
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 80049D48
  W32(c->r[4]+0x00006828u,c->r[5]); // 80049D4C
  return; // 80049D50
L_80049D54:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 80049D54
  c->r[5]=0u+0x000000F0u; // 80049D58
  if (!crb(c,2)) { goto L_80049D64; } // 80049D5C
  c->r[5]=c->r[5]|0x00000800u; // 80049D60
L_80049D64:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80049D64
  if (!crb(c,2)) { goto L_80049D70; } // 80049D68
  c->r[5]=c->r[5]|0x00000008u; // 80049D6C
L_80049D70:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80049D70
  if (!crb(c,2)) { goto L_80049D7C; } // 80049D74
  c->r[5]=c->r[5]|0x00000004u; // 80049D78
L_80049D7C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 80049D7C
  if (!crb(c,2)) { goto L_80049D88; } // 80049D80
  c->r[5]=c->r[5]|0x00000002u; // 80049D84
L_80049D88:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 80049D88
  if (!crb(c,2)) { goto L_80049D94; } // 80049D8C
  c->r[5]=c->r[5]|0x00000001u; // 80049D90
L_80049D94:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 80049D94
  if (!crb(c,2)) { goto L_80049DA0; } // 80049D98
  c->r[5]=c->r[5]|0x00000100u; // 80049D9C
L_80049DA0:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 80049DA0
  if (!crb(c,2)) { goto L_80049DAC; } // 80049DA4
  c->r[5]=c->r[5]|0x00001000u; // 80049DA8
L_80049DAC:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 80049DAC
  if (!crb(c,2)) { goto L_80049DB8; } // 80049DB0
  c->r[5]=c->r[5]|0x00000200u; // 80049DB4
L_80049DB8:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 80049DB8
  if (!crb(c,2)) { goto L_80049DC4; } // 80049DBC
  c->r[5]=c->r[5]|0x00000400u; // 80049DC0
L_80049DC4:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 80049DC4
  if (!crb(c,2)) { goto L_80049DD0; } // 80049DC8
  c->r[5]=c->r[5]|0x00002000u; // 80049DCC
L_80049DD0:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80049DD0
  if (!crb(c,2)) { goto L_80049DDC; } // 80049DD4
  c->r[5]=c->r[5]|0x00004000u; // 80049DD8
L_80049DDC:;
  c->r[4]=0u+0xCC000000u; // 80049DDC
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 80049DE0
  W32(c->r[4]+0x00003004u,c->r[5]); // 80049DE4
  return; // 80049DE8
}

// __OSMaskInterrupts
void f_80049DF0(Ctx* __restrict c) {
  trace_call(0x80049DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049DF0
  c->r[0]=c->lr; // 80049DF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80049DF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80049DFC
  c->r[31]=c->r[3]|c->r[3]; // 80049E00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80049E04
  W32(c->r[1]+0x00000014u,c->r[29]); // 80049E08
  c->lr=0x80049E10u; f_80049A20(c); // 80049E0C
  c->r[4]=0u+0x80000000u; // 80049E10
  c->r[30]=c->r[3]|c->r[3]; // 80049E14
  c->r[29]=R32(c->r[4]+0x000000C4u); // 80049E18
  c->r[5]=R32(c->r[4]+0x000000C8u); // 80049E1C
  c->r[0]=c->r[29]|c->r[5]; // 80049E20
  c->r[3]=c->r[31]&~c->r[0]; // 80049E24
  c->r[31]=c->r[31]|c->r[29]; // 80049E28
  W32(c->r[4]+0x000000C4u,c->r[31]); // 80049E2C
  c->r[31]=c->r[31]|c->r[5]; // 80049E30
  goto L_80049E40; // 80049E34
L_80049E38:;
  c->r[4]=c->r[31]|c->r[31]; // 80049E38
  c->lr=0x80049E40u; f_80049B90(c); // 80049E3C
L_80049E40:;
  cmps(c,0,(int32_t)c->r[3],0); // 80049E40
  if (!crb(c,2)) { IRQCHK(c); goto L_80049E38; } // 80049E44
  c->r[3]=c->r[30]|c->r[30]; // 80049E48
  c->lr=0x80049E50u; f_80049A60(c); // 80049E4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80049E50
  c->r[3]=c->r[29]|c->r[29]; // 80049E54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80049E58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80049E5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80049E60
  c->lr=c->r[0]; // 80049E64
  c->r[1]=c->r[1]+0x00000020u; // 80049E68
  return; // 80049E6C
}

// __OSUnmaskInterrupts
void f_80049E70(Ctx* __restrict c) {
  trace_call(0x80049E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049E70
  c->r[0]=c->lr; // 80049E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80049E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80049E7C
  c->r[31]=c->r[3]|c->r[3]; // 80049E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 80049E84
  W32(c->r[1]+0x00000014u,c->r[29]); // 80049E88
  c->lr=0x80049E90u; f_80049A20(c); // 80049E8C
  c->r[4]=0u+0x80000000u; // 80049E90
  c->r[30]=c->r[3]|c->r[3]; // 80049E94
  c->r[29]=R32(c->r[4]+0x000000C4u); // 80049E98
  c->r[5]=R32(c->r[4]+0x000000C8u); // 80049E9C
  c->r[0]=c->r[29]|c->r[5]; // 80049EA0
  c->r[3]=c->r[31]&c->r[0]; // 80049EA4
  c->r[31]=c->r[29]&~c->r[31]; // 80049EA8
  W32(c->r[4]+0x000000C4u,c->r[31]); // 80049EAC
  c->r[31]=c->r[31]|c->r[5]; // 80049EB0
  goto L_80049EC0; // 80049EB4
L_80049EB8:;
  c->r[4]=c->r[31]|c->r[31]; // 80049EB8
  c->lr=0x80049EC0u; f_80049B90(c); // 80049EBC
L_80049EC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80049EC0
  if (!crb(c,2)) { IRQCHK(c); goto L_80049EB8; } // 80049EC4
  c->r[3]=c->r[30]|c->r[30]; // 80049EC8
  c->lr=0x80049ED0u; f_80049A60(c); // 80049ECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80049ED0
  c->r[3]=c->r[29]|c->r[29]; // 80049ED4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80049ED8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80049EDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80049EE0
  c->lr=c->r[0]; // 80049EE4
  c->r[1]=c->r[1]+0x00000020u; // 80049EE8
  return; // 80049EEC
}

// __OSDispatchInterrupt
void f_80049EF0(Ctx* __restrict c) {
  trace_call(0x80049EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049EF0
  c->r[0]=c->lr; // 80049EF4
  c->r[3]=0u+0xCC000000u; // 80049EF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80049EFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80049F00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80049F04
  c->r[30]=c->r[4]|c->r[4]; // 80049F08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80049F0C
  c->r[31]=R32(c->r[3]+0x00003000u); // 80049F10
  c->r[0]=R32(c->r[3]+0x00003004u); // 80049F14
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 80049F18
  if (crb(c,2)) { goto L_80049F28; } // 80049F1C
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 80049F20
  if (!crb(c,2)) { goto L_80049F30; } // 80049F24
L_80049F28:;
  c->r[3]=c->r[30]|c->r[30]; // 80049F28
  c->lr=0x80049F30u; f_80045710(c); // 80049F2C
L_80049F30:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 80049F30
  c->r[0]=0u+0x00000000u; // 80049F34
  if (crb(c,2)) { goto L_80049F80; } // 80049F38
  c->r[3]=0u+0xCC000000u; // 80049F3C
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 80049F40
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 80049F44
  if (crb(c,2)) { goto L_80049F50; } // 80049F48
  c->r[0]=c->r[0]|0x80000000u; // 80049F4C
L_80049F50:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80049F50
  if (crb(c,2)) { goto L_80049F5C; } // 80049F54
  c->r[0]=c->r[0]|0x40000000u; // 80049F58
L_80049F5C:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 80049F5C
  if (crb(c,2)) { goto L_80049F68; } // 80049F60
  c->r[0]=c->r[0]|0x20000000u; // 80049F64
L_80049F68:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80049F68
  if (crb(c,2)) { goto L_80049F74; } // 80049F6C
  c->r[0]=c->r[0]|0x10000000u; // 80049F70
L_80049F74:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 80049F74
  if (crb(c,2)) { goto L_80049F80; } // 80049F78
  c->r[0]=c->r[0]|0x08000000u; // 80049F7C
L_80049F80:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 80049F80
  if (crb(c,2)) { goto L_80049FB4; } // 80049F84
  c->r[3]=0u+0xCC000000u; // 80049F88
  c->r[4]=R16(c->r[3]+0x0000500Au); // 80049F8C
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80049F90
  if (crb(c,2)) { goto L_80049F9C; } // 80049F94
  c->r[0]=c->r[0]|0x04000000u; // 80049F98
L_80049F9C:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 80049F9C
  if (crb(c,2)) { goto L_80049FA8; } // 80049FA0
  c->r[0]=c->r[0]|0x02000000u; // 80049FA4
L_80049FA8:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 80049FA8
  if (crb(c,2)) { goto L_80049FB4; } // 80049FAC
  c->r[0]=c->r[0]|0x01000000u; // 80049FB0
L_80049FB4:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 80049FB4
  if (crb(c,2)) { goto L_80049FD0; } // 80049FB8
  c->r[3]=0u+0xCD000000u; // 80049FBC
  c->r[3]=R32(c->r[3]+0x00006C00u); // 80049FC0
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 80049FC4
  if (crb(c,2)) { goto L_80049FD0; } // 80049FC8
  c->r[0]=c->r[0]|0x00800000u; // 80049FCC
L_80049FD0:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 80049FD0
  if (crb(c,2)) { goto L_8004A050; } // 80049FD4
  c->r[3]=0u+0xCD000000u; // 80049FD8
  c->r[4]=R32(c->r[3]+0x00006800u); // 80049FDC
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80049FE0
  if (crb(c,2)) { goto L_80049FEC; } // 80049FE4
  c->r[0]=c->r[0]|0x00400000u; // 80049FE8
L_80049FEC:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80049FEC
  if (crb(c,2)) { goto L_80049FF8; } // 80049FF0
  c->r[0]=c->r[0]|0x00200000u; // 80049FF4
L_80049FF8:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 80049FF8
  if (crb(c,2)) { goto L_8004A004; } // 80049FFC
  c->r[0]=c->r[0]|0x00100000u; // 8004A000
L_8004A004:;
  c->r[3]=0u+0xCD000000u; // 8004A004
  c->r[4]=R32(c->r[3]+0x00006814u); // 8004A008
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8004A00C
  if (crb(c,2)) { goto L_8004A018; } // 8004A010
  c->r[0]=c->r[0]|0x00080000u; // 8004A014
L_8004A018:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8004A018
  if (crb(c,2)) { goto L_8004A024; } // 8004A01C
  c->r[0]=c->r[0]|0x00040000u; // 8004A020
L_8004A024:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 8004A024
  if (crb(c,2)) { goto L_8004A030; } // 8004A028
  c->r[0]=c->r[0]|0x00020000u; // 8004A02C
L_8004A030:;
  c->r[3]=0u+0xCD000000u; // 8004A030
  c->r[4]=R32(c->r[3]+0x00006828u); // 8004A034
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8004A038
  if (crb(c,2)) { goto L_8004A044; } // 8004A03C
  c->r[0]=c->r[0]|0x00010000u; // 8004A040
L_8004A044:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8004A044
  if (crb(c,2)) { goto L_8004A050; } // 8004A048
  c->r[0]=c->r[0]|0x00008000u; // 8004A04C
L_8004A050:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 8004A050
  if (crb(c,2)) { goto L_8004A05C; } // 8004A054
  c->r[0]=c->r[0]|0x00000020u; // 8004A058
L_8004A05C:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 8004A05C
  if (crb(c,2)) { goto L_8004A068; } // 8004A060
  c->r[0]=c->r[0]|0x00000040u; // 8004A064
L_8004A068:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 8004A068
  if (crb(c,2)) { goto L_8004A074; } // 8004A06C
  c->r[0]=c->r[0]|0x00001000u; // 8004A070
L_8004A074:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 8004A074
  if (crb(c,2)) { goto L_8004A080; } // 8004A078
  c->r[0]=c->r[0]|0x00002000u; // 8004A07C
L_8004A080:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 8004A080
  if (crb(c,2)) { goto L_8004A08C; } // 8004A084
  c->r[0]=c->r[0]|0x00000080u; // 8004A088
L_8004A08C:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 8004A08C
  if (crb(c,2)) { goto L_8004A098; } // 8004A090
  c->r[0]=c->r[0]|0x00000800u; // 8004A094
L_8004A098:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 8004A098
  if (crb(c,2)) { goto L_8004A0A4; } // 8004A09C
  c->r[0]=c->r[0]|0x00000400u; // 8004A0A0
L_8004A0A4:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 8004A0A4
  if (crb(c,2)) { goto L_8004A0B0; } // 8004A0A8
  c->r[0]=c->r[0]|0x00000200u; // 8004A0AC
L_8004A0B0:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 8004A0B0
  if (crb(c,2)) { goto L_8004A0BC; } // 8004A0B4
  c->r[0]=c->r[0]|0x00004000u; // 8004A0B8
L_8004A0BC:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 8004A0BC
  if (crb(c,2)) { goto L_8004A0C8; } // 8004A0C0
  c->r[0]=c->r[0]|0x00000100u; // 8004A0C4
L_8004A0C8:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 8004A0C8
  if (crb(c,2)) { goto L_8004A0D4; } // 8004A0CC
  c->r[0]=c->r[0]|0x00000010u; // 8004A0D0
L_8004A0D4:;
  c->r[3]=0u+0x80000000u; // 8004A0D4
  c->r[4]=R32(c->r[3]+0x000000C4u); // 8004A0D8
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8004A0DC
  c->r[3]=c->r[4]|c->r[3]; // 8004A0E0
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 8004A0E4
  if (crb(c,2)) { goto L_8004A174; } // 8004A0E8
  c->r[4]=0u+0x80140000u; // 8004A0EC
  c->r[4]=c->r[4]+0xFFFF9210u; // 8004A0F0
  c->r[0]=c->r[0]|0x00000000u; // 8004A0F4
L_8004A0F8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004A0F8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8004A0FC
  if (crb(c,2)) { goto L_8004A110; } // 8004A100
  c->r[0]=cntlz(c->r[0]); // 8004A104
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8004A108
  goto L_8004A118; // 8004A10C
L_8004A110:;
  c->r[4]=c->r[4]+0x00000004u; // 8004A110
  IRQCHK(c); goto L_8004A0F8; // 8004A114
L_8004A118:;
  c->r[3]=R32(c->r[13]+0xFFFF8B38u); // 8004A118
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8004A11C
  c->r[31]=R32(c->r[3]+c->r[0]); // 8004A120
  cmps(c,0,(int32_t)c->r[31],0); // 8004A124
  if (crb(c,2)) { goto L_8004A174; } // 8004A128
  cmps(c,0,(int32_t)c->r[29],4); // 8004A12C
  if (!crb(c,1)) { goto L_8004A14C; } // 8004A130
  W16(c->r[13]+0xFFFF8B2Cu,c->r[29]); // 8004A134
  c->lr=0x8004A13Cu; f_8004DAA0(c); // 8004A138
  W32(c->r[13]+0xFFFF8B34u,c->r[4]); // 8004A13C
  W32(c->r[13]+0xFFFF8B30u,c->r[3]); // 8004A140
  c->r[0]=R32(c->r[30]+0x00000198u); // 8004A144
  W32(c->r[13]+0xFFFF8B28u,c->r[0]); // 8004A148
L_8004A14C:;
  c->lr=0x8004A150u; f_8004C740(c); // 8004A14C
  c->r[12]=c->r[31]|c->r[31]; // 8004A150
  c->r[3]=c->r[29]|c->r[29]; // 8004A154
  c->r[4]=c->r[30]|c->r[30]; // 8004A158
  c->ctr=c->r[12]; // 8004A15C
  if (true) { c->lr=0x8004A164u; dispatch(c,c->ctr); } // 8004A160
  c->lr=0x8004A168u; f_8004C780(c); // 8004A164
  c->lr=0x8004A16Cu; f_8004CCA0(c); // 8004A168
  c->r[3]=c->r[30]|c->r[30]; // 8004A16C
  c->lr=0x8004A174u; f_80045710(c); // 8004A170
L_8004A174:;
  c->r[3]=c->r[30]|c->r[30]; // 8004A174
  c->lr=0x8004A17Cu; f_80045710(c); // 8004A178
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A17C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004A180
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004A184
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004A188
  c->lr=c->r[0]; // 8004A18C
  c->r[1]=c->r[1]+0x00000020u; // 8004A190
  return; // 8004A194
}

// fn_8004A1A0
void f_8004A1A0(Ctx* __restrict c) {
  W32(c->r[4]+0x00000000u,c->r[0]); // 8004A1A0
  W32(c->r[4]+0x00000004u,c->r[1]); // 8004A1A4
  W32(c->r[4]+0x00000008u,c->r[2]); // 8004A1A8
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004A1AC
  c->r[0]=mfspr(c,913); // 8004A1B0
  W32(c->r[4]+0x000001A8u,c->r[0]); // 8004A1B4
  c->r[0]=mfspr(c,914); // 8004A1B8
  W32(c->r[4]+0x000001ACu,c->r[0]); // 8004A1BC
  c->r[0]=mfspr(c,915); // 8004A1C0
  W32(c->r[4]+0x000001B0u,c->r[0]); // 8004A1C4
  c->r[0]=mfspr(c,916); // 8004A1C8
  W32(c->r[4]+0x000001B4u,c->r[0]); // 8004A1CC
  c->r[0]=mfspr(c,917); // 8004A1D0
  W32(c->r[4]+0x000001B8u,c->r[0]); // 8004A1D4
  c->r[0]=mfspr(c,918); // 8004A1D8
  W32(c->r[4]+0x000001BCu,c->r[0]); // 8004A1DC
  c->r[0]=mfspr(c,919); // 8004A1E0
  W32(c->r[4]+0x000001C0u,c->r[0]); // 8004A1E4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A1E8
  f_80049EF0(c); return; // 8004A1EC
}

// __OSModuleInit
void f_8004A1F0(Ctx* __restrict c) {
  trace_call(0x8004A1F0u);
  c->r[3]=0u+0x80000000u; // 8004A1F0
  c->r[0]=0u+0x00000000u; // 8004A1F4
  W32(c->r[3]+0x000030CCu,c->r[0]); // 8004A1F8
  W32(c->r[3]+0x000030C8u,c->r[0]); // 8004A1FC
  W32(c->r[3]+0x000030D0u,c->r[0]); // 8004A200
  return; // 8004A204
}

// OSInitMessageQueue
void f_8004A210(Ctx* __restrict c) {
  trace_call(0x8004A210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A210
  c->r[0]=c->lr; // 8004A214
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004A218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004A21C
  c->r[31]=c->r[5]|c->r[5]; // 8004A220
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004A224
  c->r[30]=c->r[4]|c->r[4]; // 8004A228
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004A22C
  c->r[29]=c->r[3]|c->r[3]; // 8004A230
  c->lr=0x8004A238u; f_8004C6F0(c); // 8004A234
  c->r[3]=c->r[29]+0x00000008u; // 8004A238
  c->lr=0x8004A240u; f_8004C6F0(c); // 8004A23C
  c->r[0]=0u+0x00000000u; // 8004A240
  W32(c->r[29]+0x00000010u,c->r[30]); // 8004A244
  W32(c->r[29]+0x00000014u,c->r[31]); // 8004A248
  W32(c->r[29]+0x00000018u,c->r[0]); // 8004A24C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8004A250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004A254
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004A258
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004A25C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A260
  c->lr=c->r[0]; // 8004A264
  c->r[1]=c->r[1]+0x00000020u; // 8004A268
  return; // 8004A26C
}

// OSSendMessage
void f_8004A270(Ctx* __restrict c) {
  trace_call(0x8004A270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A270
  c->r[0]=c->lr; // 8004A274
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004A278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004A27C
  c->r[31]=c->r[5]|c->r[5]; // 8004A280
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004A284
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004A288
  c->r[29]=c->r[4]|c->r[4]; // 8004A28C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004A290
  c->r[28]=c->r[3]|c->r[3]; // 8004A294
  c->lr=0x8004A29Cu; f_80049A20(c); // 8004A298
  c->r[30]=c->r[3]|c->r[3]; // 8004A29C
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 8004A2A0
  goto L_8004A2C8; // 8004A2A4
L_8004A2A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004A2A8
  if (!crb(c,2)) { goto L_8004A2C0; } // 8004A2AC
  c->r[3]=c->r[30]|c->r[30]; // 8004A2B0
  c->lr=0x8004A2B8u; f_80049A60(c); // 8004A2B4
  c->r[3]=0u+0x00000000u; // 8004A2B8
  goto L_8004A318; // 8004A2BC
L_8004A2C0:;
  c->r[3]=c->r[28]|c->r[28]; // 8004A2C0
  c->lr=0x8004A2C8u; f_8004D780(c); // 8004A2C4
L_8004A2C8:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8004A2C8
  c->r[6]=R32(c->r[28]+0x00000014u); // 8004A2CC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8004A2D0
  if (!crb(c,1)) { IRQCHK(c); goto L_8004A2A8; } // 8004A2D4
  c->r[0]=R32(c->r[28]+0x00000018u); // 8004A2D8
  c->r[3]=c->r[28]+0x00000008u; // 8004A2DC
  c->r[5]=R32(c->r[28]+0x00000010u); // 8004A2E0
  c->r[4]=c->r[0]+c->r[4]; // 8004A2E4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 8004A2E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8004A2EC
  c->r[0]=c->r[4]-c->r[0]; // 8004A2F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004A2F4
  W32(c->r[5]+c->r[0],c->r[29]); // 8004A2F8
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8004A2FC
  c->r[0]=c->r[4]+0x00000001u; // 8004A300
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8004A304
  c->lr=0x8004A30Cu; f_8004D870(c); // 8004A308
  c->r[3]=c->r[30]|c->r[30]; // 8004A30C
  c->lr=0x8004A314u; f_80049A60(c); // 8004A310
  c->r[3]=0u+0x00000001u; // 8004A314
L_8004A318:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A318
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004A31C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004A320
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004A324
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004A328
  c->lr=c->r[0]; // 8004A32C
  c->r[1]=c->r[1]+0x00000020u; // 8004A330
  return; // 8004A334
}

// OSReceiveMessage
void f_8004A340(Ctx* __restrict c) {
  trace_call(0x8004A340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A340
  c->r[0]=c->lr; // 8004A344
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004A348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004A34C
  c->r[31]=c->r[3]|c->r[3]; // 8004A350
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004A354
  c->r[30]=c->r[5]|c->r[5]; // 8004A358
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004A35C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004A360
  c->r[28]=c->r[4]|c->r[4]; // 8004A364
  c->lr=0x8004A36Cu; f_80049A20(c); // 8004A368
  c->r[29]=c->r[3]|c->r[3]; // 8004A36C
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 8004A370
  goto L_8004A398; // 8004A374
L_8004A378:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004A378
  if (!crb(c,2)) { goto L_8004A390; } // 8004A37C
  c->r[3]=c->r[29]|c->r[29]; // 8004A380
  c->lr=0x8004A388u; f_80049A60(c); // 8004A384
  c->r[3]=0u+0x00000000u; // 8004A388
  goto L_8004A3FC; // 8004A38C
L_8004A390:;
  c->r[3]=c->r[31]+0x00000008u; // 8004A390
  c->lr=0x8004A398u; f_8004D780(c); // 8004A394
L_8004A398:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8004A398
  cmps(c,0,(int32_t)c->r[0],0); // 8004A39C
  if (crb(c,2)) { IRQCHK(c); goto L_8004A378; } // 8004A3A0
  cmps(c,0,(int32_t)c->r[28],0); // 8004A3A4
  if (crb(c,2)) { goto L_8004A3C0; } // 8004A3A8
  c->r[0]=R32(c->r[31]+0x00000018u); // 8004A3AC
  c->r[3]=R32(c->r[31]+0x00000010u); // 8004A3B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004A3B4
  c->r[0]=R32(c->r[3]+c->r[0]); // 8004A3B8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8004A3BC
L_8004A3C0:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8004A3C0
  c->r[3]=c->r[31]|c->r[31]; // 8004A3C4
  c->r[6]=R32(c->r[31]+0x00000014u); // 8004A3C8
  c->r[7]=c->r[4]+0x00000001u; // 8004A3CC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8004A3D0
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 8004A3D4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8004A3D8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8004A3DC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8004A3E0
  c->r[0]=c->r[7]-c->r[0]; // 8004A3E4
  W32(c->r[31]+0x00000018u,c->r[0]); // 8004A3E8
  c->lr=0x8004A3F0u; f_8004D870(c); // 8004A3EC
  c->r[3]=c->r[29]|c->r[29]; // 8004A3F0
  c->lr=0x8004A3F8u; f_80049A60(c); // 8004A3F4
  c->r[3]=0u+0x00000001u; // 8004A3F8
L_8004A3FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A3FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004A400
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004A404
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004A408
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004A40C
  c->lr=c->r[0]; // 8004A410
  c->r[1]=c->r[1]+0x00000020u; // 8004A414
  return; // 8004A418
}

// OSJamMessage
void f_8004A420(Ctx* __restrict c) {
  trace_call(0x8004A420u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A420
  c->r[0]=c->lr; // 8004A424
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004A428
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004A42C
  c->r[31]=c->r[5]|c->r[5]; // 8004A430
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004A434
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004A438
  c->r[29]=c->r[4]|c->r[4]; // 8004A43C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004A440
  c->r[28]=c->r[3]|c->r[3]; // 8004A444
  c->lr=0x8004A44Cu; f_80049A20(c); // 8004A448
  c->r[30]=c->r[3]|c->r[3]; // 8004A44C
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 8004A450
  goto L_8004A478; // 8004A454
L_8004A458:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004A458
  if (!crb(c,2)) { goto L_8004A470; } // 8004A45C
  c->r[3]=c->r[30]|c->r[30]; // 8004A460
  c->lr=0x8004A468u; f_80049A60(c); // 8004A464
  c->r[3]=0u+0x00000000u; // 8004A468
  goto L_8004A4D0; // 8004A46C
L_8004A470:;
  c->r[3]=c->r[28]|c->r[28]; // 8004A470
  c->lr=0x8004A478u; f_8004D780(c); // 8004A474
L_8004A478:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 8004A478
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8004A47C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8004A480
  if (!crb(c,1)) { IRQCHK(c); goto L_8004A458; } // 8004A484
  c->r[0]=R32(c->r[28]+0x00000018u); // 8004A488
  c->r[3]=c->r[28]+0x00000008u; // 8004A48C
  c->r[4]=R32(c->r[28]+0x00000010u); // 8004A490
  c->r[5]=c->r[6]+c->r[0]; // 8004A494
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8004A498
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 8004A49C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8004A4A0
  c->r[0]=c->r[5]-c->r[0]; // 8004A4A4
  W32(c->r[28]+0x00000018u,c->r[0]); // 8004A4A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004A4AC
  W32(c->r[4]+c->r[0],c->r[29]); // 8004A4B0
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8004A4B4
  c->r[0]=c->r[4]+0x00000001u; // 8004A4B8
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8004A4BC
  c->lr=0x8004A4C4u; f_8004D870(c); // 8004A4C0
  c->r[3]=c->r[30]|c->r[30]; // 8004A4C4
  c->lr=0x8004A4CCu; f_80049A60(c); // 8004A4C8
  c->r[3]=0u+0x00000001u; // 8004A4CC
L_8004A4D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A4D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004A4D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004A4D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004A4DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004A4E0
  c->lr=c->r[0]; // 8004A4E4
  c->r[1]=c->r[1]+0x00000020u; // 8004A4E8
  return; // 8004A4EC
}

// OSGetPhysicalMem2Size
void f_8004A4F0(Ctx* __restrict c) {
  trace_call(0x8004A4F0u);
  c->r[3]=0u+0x80000000u; // 8004A4F0
  c->r[3]=R32(c->r[3]+0x00003118u); // 8004A4F4
  return; // 8004A4F8
}

// OSGetConsoleSimulatedMem1Size
void f_8004A500(Ctx* __restrict c) {
  trace_call(0x8004A500u);
  c->r[3]=0u+0x80000000u; // 8004A500
  c->r[3]=R32(c->r[3]+0x00003104u); // 8004A504
  return; // 8004A508
}

// OSGetConsoleSimulatedMem2Size
void f_8004A510(Ctx* __restrict c) {
  trace_call(0x8004A510u);
  c->r[3]=0u+0x80000000u; // 8004A510
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 8004A514
  return; // 8004A518
}

// OnShutdown
void f_8004A520(Ctx* __restrict c) {
  trace_call(0x8004A520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A520
  c->r[0]=c->lr; // 8004A524
  cmps(c,0,(int32_t)c->r[3],0); // 8004A528
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A52C
  if (crb(c,2)) { goto L_8004A548; } // 8004A530
  c->r[3]=0u+0xCC000000u; // 8004A534
  c->r[0]=0u+0x000000FFu; // 8004A538
  W16(c->r[3]+0x00004010u,c->r[0]); // 8004A53C
  c->r[3]=0u+0xF0000000u; // 8004A540
  c->lr=0x8004A548u; f_80049DF0(c); // 8004A544
L_8004A548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A548
  c->r[3]=0u+0x00000001u; // 8004A54C
  c->lr=c->r[0]; // 8004A550
  c->r[1]=c->r[1]+0x00000010u; // 8004A554
  return; // 8004A558
}

// MEMIntrruptHandler
void f_8004A560(Ctx* __restrict c) {
  trace_call(0x8004A560u);
  c->r[8]=0u+0xCC000000u; // 8004A560
  c->r[3]=0u+0x801A0000u; // 8004A564
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 8004A568
  c->r[0]=0u+0x00000000u; // 8004A56C
  c->r[7]=R16(c->r[8]+0x00004024u); // 8004A570
  c->r[3]=c->r[3]+0xFFFFA6D0u; // 8004A574
  c->r[6]=R16(c->r[8]+0x00004022u); // 8004A578
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 8004A57C
  W16(c->r[8]+0x00004020u,c->r[0]); // 8004A580
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8004A584
  cmps(c,0,(int32_t)c->r[12],0); // 8004A588
  if (crb(c,2)) { goto L_8004A5A0; } // 8004A58C
  c->r[3]=0u+0x0000000Fu; // 8004A590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004A594
  c->ctr=c->r[12]; // 8004A598
  if (true) { dispatch(c,c->ctr); return; } // 8004A59C
L_8004A5A0:;
  c->r[3]=0u+0x0000000Fu; // 8004A5A0
  f_800460C0(c); return; // 8004A5A4
}

// ConfigMEM1_24MB
void f_8004A5B0(Ctx* __restrict c) {
  trace_call(0x8004A5B0u);
  c->r[7]=0u+0x00000000u; // 8004A5B0
  c->r[4]=0u+0x00000000u; // 8004A5B4
  c->r[4]=c->r[4]+0x00000002u; // 8004A5B8
  c->r[3]=0u+0x80000000u; // 8004A5BC
  c->r[3]=c->r[3]+0x000001FFu; // 8004A5C0
  c->r[6]=0u+0x01000000u; // 8004A5C4
  c->r[6]=c->r[6]+0x00000002u; // 8004A5C8
  c->r[5]=0u+0x81000000u; // 8004A5CC
  c->r[5]=c->r[5]+0x000000FFu; // 8004A5D0
  /* isync */ // 8004A5D4
  mtspr(c,536,c->r[7]); // 8004A5D8
  mtspr(c,537,c->r[4]); // 8004A5DC
  mtspr(c,536,c->r[3]); // 8004A5E0
  /* isync */ // 8004A5E4
  mtspr(c,528,c->r[7]); // 8004A5E8
  mtspr(c,529,c->r[4]); // 8004A5EC
  mtspr(c,528,c->r[3]); // 8004A5F0
  /* isync */ // 8004A5F4
  mtspr(c,540,c->r[7]); // 8004A5F8
  mtspr(c,541,c->r[6]); // 8004A5FC
  mtspr(c,540,c->r[5]); // 8004A600
  /* isync */ // 8004A604
  mtspr(c,532,c->r[7]); // 8004A608
  mtspr(c,533,c->r[6]); // 8004A60C
  mtspr(c,532,c->r[5]); // 8004A610
  /* isync */ // 8004A614
  c->r[3]=c->msr; // 8004A618
  c->r[3]=c->r[3]|0x00000030u; // 8004A61C
  mtspr(c,27,c->r[3]); // 8004A620
  c->r[3]=c->lr; // 8004A624
  mtspr(c,26,c->r[3]); // 8004A628
  return; /* rfi */ // 8004A62C
}

// ConfigMEM2_52MB
void f_8004A630(Ctx* __restrict c) {
  trace_call(0x8004A630u);
  c->r[7]=0u+0x00000000u; // 8004A630
  c->r[4]=0u+0x10000000u; // 8004A634
  c->r[4]=c->r[4]+0x00000002u; // 8004A638
  c->r[3]=0u+0x90000000u; // 8004A63C
  c->r[3]=c->r[3]+0x000003FFu; // 8004A640
  c->r[6]=0u+0x10000000u; // 8004A644
  c->r[6]=c->r[6]+0x0000002Au; // 8004A648
  c->r[5]=0u+0xD0000000u; // 8004A64C
  c->r[5]=c->r[5]+0x000007FFu; // 8004A650
  /* isync */ // 8004A654
  mtspr(c,568,c->r[7]); // 8004A658
  mtspr(c,569,c->r[4]); // 8004A65C
  mtspr(c,568,c->r[3]); // 8004A660
  /* isync */ // 8004A664
  mtspr(c,560,c->r[7]); // 8004A668
  mtspr(c,561,c->r[7]); // 8004A66C
  /* isync */ // 8004A670
  mtspr(c,570,c->r[7]); // 8004A674
  mtspr(c,571,c->r[6]); // 8004A678
  mtspr(c,570,c->r[5]); // 8004A67C
  /* isync */ // 8004A680
  mtspr(c,562,c->r[7]); // 8004A684
  mtspr(c,563,c->r[7]); // 8004A688
  /* isync */ // 8004A68C
  c->r[4]=0u+0x12000000u; // 8004A690
  c->r[4]=c->r[4]+0x00000002u; // 8004A694
  c->r[3]=0u+0x92000000u; // 8004A698
  c->r[3]=c->r[3]+0x000001FFu; // 8004A69C
  c->r[6]=0u+0x13000000u; // 8004A6A0
  c->r[6]=c->r[6]+0x00000002u; // 8004A6A4
  c->r[5]=0u+0x93000000u; // 8004A6A8
  c->r[5]=c->r[5]+0x0000007Fu; // 8004A6AC
  /* isync */ // 8004A6B0
  mtspr(c,572,c->r[7]); // 8004A6B4
  mtspr(c,573,c->r[4]); // 8004A6B8
  mtspr(c,572,c->r[3]); // 8004A6BC
  /* isync */ // 8004A6C0
  mtspr(c,564,c->r[7]); // 8004A6C4
  mtspr(c,565,c->r[7]); // 8004A6C8
  /* isync */ // 8004A6CC
  mtspr(c,574,c->r[7]); // 8004A6D0
  mtspr(c,575,c->r[6]); // 8004A6D4
  mtspr(c,574,c->r[5]); // 8004A6D8
  /* isync */ // 8004A6DC
  mtspr(c,566,c->r[7]); // 8004A6E0
  mtspr(c,567,c->r[7]); // 8004A6E4
  /* isync */ // 8004A6E8
  c->r[3]=c->msr; // 8004A6EC
  c->r[3]=c->r[3]|0x00000030u; // 8004A6F0
  mtspr(c,27,c->r[3]); // 8004A6F4
  c->r[3]=c->lr; // 8004A6F8
  mtspr(c,26,c->r[3]); // 8004A6FC
  return; /* rfi */ // 8004A700
}

// ConfigMEM2_56MB
void f_8004A710(Ctx* __restrict c) {
  trace_call(0x8004A710u);
  c->r[7]=0u+0x00000000u; // 8004A710
  c->r[4]=0u+0x10000000u; // 8004A714
  c->r[4]=c->r[4]+0x00000002u; // 8004A718
  c->r[3]=0u+0x90000000u; // 8004A71C
  c->r[3]=c->r[3]+0x000003FFu; // 8004A720
  c->r[6]=0u+0x10000000u; // 8004A724
  c->r[6]=c->r[6]+0x0000002Au; // 8004A728
  c->r[5]=0u+0xD0000000u; // 8004A72C
  c->r[5]=c->r[5]+0x000007FFu; // 8004A730
  /* isync */ // 8004A734
  mtspr(c,568,c->r[7]); // 8004A738
  mtspr(c,569,c->r[4]); // 8004A73C
  mtspr(c,568,c->r[3]); // 8004A740
  /* isync */ // 8004A744
  mtspr(c,560,c->r[7]); // 8004A748
  mtspr(c,561,c->r[7]); // 8004A74C
  /* isync */ // 8004A750
  mtspr(c,570,c->r[7]); // 8004A754
  mtspr(c,571,c->r[6]); // 8004A758
  mtspr(c,570,c->r[5]); // 8004A75C
  /* isync */ // 8004A760
  mtspr(c,562,c->r[7]); // 8004A764
  mtspr(c,563,c->r[7]); // 8004A768
  /* isync */ // 8004A76C
  c->r[4]=0u+0x12000000u; // 8004A770
  c->r[4]=c->r[4]+0x00000002u; // 8004A774
  c->r[3]=0u+0x92000000u; // 8004A778
  c->r[3]=c->r[3]+0x000001FFu; // 8004A77C
  c->r[6]=0u+0x13000000u; // 8004A780
  c->r[6]=c->r[6]+0x00000002u; // 8004A784
  c->r[5]=0u+0x93000000u; // 8004A788
  c->r[5]=c->r[5]+0x000000FFu; // 8004A78C
  /* isync */ // 8004A790
  mtspr(c,572,c->r[7]); // 8004A794
  mtspr(c,573,c->r[4]); // 8004A798
  mtspr(c,572,c->r[3]); // 8004A79C
  /* isync */ // 8004A7A0
  mtspr(c,564,c->r[7]); // 8004A7A4
  mtspr(c,565,c->r[7]); // 8004A7A8
  /* isync */ // 8004A7AC
  mtspr(c,574,c->r[7]); // 8004A7B0
  mtspr(c,575,c->r[6]); // 8004A7B4
  mtspr(c,574,c->r[5]); // 8004A7B8
  /* isync */ // 8004A7BC
  mtspr(c,566,c->r[7]); // 8004A7C0
  mtspr(c,567,c->r[7]); // 8004A7C4
  /* isync */ // 8004A7C8
  c->r[3]=c->msr; // 8004A7CC
  c->r[3]=c->r[3]|0x00000030u; // 8004A7D0
  mtspr(c,27,c->r[3]); // 8004A7D4
  c->r[3]=c->lr; // 8004A7D8
  mtspr(c,26,c->r[3]); // 8004A7DC
  return; /* rfi */ // 8004A7E0
}

// ConfigMEM2_64MB
void f_8004A7F0(Ctx* __restrict c) {
  trace_call(0x8004A7F0u);
  c->r[7]=0u+0x00000000u; // 8004A7F0
  c->r[4]=0u+0x10000000u; // 8004A7F4
  c->r[4]=c->r[4]+0x00000002u; // 8004A7F8
  c->r[3]=0u+0x90000000u; // 8004A7FC
  c->r[3]=c->r[3]+0x000007FFu; // 8004A800
  c->r[6]=0u+0x10000000u; // 8004A804
  c->r[6]=c->r[6]+0x0000002Au; // 8004A808
  c->r[5]=0u+0xD0000000u; // 8004A80C
  c->r[5]=c->r[5]+0x000007FFu; // 8004A810
  /* isync */ // 8004A814
  mtspr(c,568,c->r[7]); // 8004A818
  mtspr(c,569,c->r[4]); // 8004A81C
  mtspr(c,568,c->r[3]); // 8004A820
  /* isync */ // 8004A824
  mtspr(c,560,c->r[7]); // 8004A828
  mtspr(c,561,c->r[7]); // 8004A82C
  /* isync */ // 8004A830
  mtspr(c,570,c->r[7]); // 8004A834
  mtspr(c,571,c->r[6]); // 8004A838
  mtspr(c,570,c->r[5]); // 8004A83C
  /* isync */ // 8004A840
  mtspr(c,562,c->r[7]); // 8004A844
  mtspr(c,563,c->r[7]); // 8004A848
  /* isync */ // 8004A84C
  mtspr(c,564,c->r[7]); // 8004A850
  mtspr(c,565,c->r[7]); // 8004A854
  /* isync */ // 8004A858
  mtspr(c,566,c->r[7]); // 8004A85C
  mtspr(c,567,c->r[7]); // 8004A860
  /* isync */ // 8004A864
  mtspr(c,572,c->r[7]); // 8004A868
  mtspr(c,573,c->r[7]); // 8004A86C
  /* isync */ // 8004A870
  mtspr(c,574,c->r[7]); // 8004A874
  mtspr(c,575,c->r[7]); // 8004A878
  /* isync */ // 8004A87C
  c->r[3]=c->msr; // 8004A880
  c->r[3]=c->r[3]|0x00000030u; // 8004A884
  mtspr(c,27,c->r[3]); // 8004A888
  c->r[3]=c->lr; // 8004A88C
  mtspr(c,26,c->r[3]); // 8004A890
  return; /* rfi */ // 8004A894
}

// ConfigMEM2_112MB
void f_8004A8A0(Ctx* __restrict c) {
  trace_call(0x8004A8A0u);
  c->r[7]=0u+0x00000000u; // 8004A8A0
  c->r[4]=0u+0x10000000u; // 8004A8A4
  c->r[4]=c->r[4]+0x00000002u; // 8004A8A8
  c->r[3]=0u+0x90000000u; // 8004A8AC
  c->r[3]=c->r[3]+0x000007FFu; // 8004A8B0
  c->r[6]=0u+0x10000000u; // 8004A8B4
  c->r[6]=c->r[6]+0x0000002Au; // 8004A8B8
  c->r[5]=0u+0xD0000000u; // 8004A8BC
  c->r[5]=c->r[5]+0x00000FFFu; // 8004A8C0
  /* isync */ // 8004A8C4
  mtspr(c,568,c->r[7]); // 8004A8C8
  mtspr(c,569,c->r[4]); // 8004A8CC
  mtspr(c,568,c->r[3]); // 8004A8D0
  /* isync */ // 8004A8D4
  mtspr(c,560,c->r[7]); // 8004A8D8
  mtspr(c,561,c->r[7]); // 8004A8DC
  /* isync */ // 8004A8E0
  mtspr(c,570,c->r[7]); // 8004A8E4
  mtspr(c,571,c->r[6]); // 8004A8E8
  mtspr(c,570,c->r[5]); // 8004A8EC
  /* isync */ // 8004A8F0
  mtspr(c,562,c->r[7]); // 8004A8F4
  mtspr(c,563,c->r[7]); // 8004A8F8
  /* isync */ // 8004A8FC
  c->r[4]=0u+0x14000000u; // 8004A900
  c->r[4]=c->r[4]+0x00000002u; // 8004A904
  c->r[3]=0u+0x94000000u; // 8004A908
  c->r[3]=c->r[3]+0x000003FFu; // 8004A90C
  c->r[6]=0u+0x16000000u; // 8004A910
  c->r[6]=c->r[6]+0x00000002u; // 8004A914
  c->r[5]=0u+0x96000000u; // 8004A918
  c->r[5]=c->r[5]+0x000001FFu; // 8004A91C
  /* isync */ // 8004A920
  mtspr(c,572,c->r[7]); // 8004A924
  mtspr(c,573,c->r[4]); // 8004A928
  mtspr(c,572,c->r[3]); // 8004A92C
  /* isync */ // 8004A930
  mtspr(c,564,c->r[7]); // 8004A934
  mtspr(c,565,c->r[7]); // 8004A938
  /* isync */ // 8004A93C
  mtspr(c,574,c->r[7]); // 8004A940
  mtspr(c,575,c->r[6]); // 8004A944
  mtspr(c,574,c->r[5]); // 8004A948
  /* isync */ // 8004A94C
  mtspr(c,566,c->r[7]); // 8004A950
  mtspr(c,567,c->r[7]); // 8004A954
  /* isync */ // 8004A958
  c->r[3]=c->msr; // 8004A95C
  c->r[3]=c->r[3]|0x00000030u; // 8004A960
  mtspr(c,27,c->r[3]); // 8004A964
  c->r[3]=c->lr; // 8004A968
  mtspr(c,26,c->r[3]); // 8004A96C
  return; /* rfi */ // 8004A970
}

// ConfigMEM2_128MB
void f_8004A980(Ctx* __restrict c) {
  trace_call(0x8004A980u);
  c->r[7]=0u+0x00000000u; // 8004A980
  c->r[4]=0u+0x10000000u; // 8004A984
  c->r[4]=c->r[4]+0x00000002u; // 8004A988
  c->r[3]=0u+0x90000000u; // 8004A98C
  c->r[3]=c->r[3]+0x00000FFFu; // 8004A990
  c->r[6]=0u+0x10000000u; // 8004A994
  c->r[6]=c->r[6]+0x0000002Au; // 8004A998
  c->r[5]=0u+0xD0000000u; // 8004A99C
  c->r[5]=c->r[5]+0x00000FFFu; // 8004A9A0
  /* isync */ // 8004A9A4
  mtspr(c,568,c->r[7]); // 8004A9A8
  mtspr(c,569,c->r[4]); // 8004A9AC
  mtspr(c,568,c->r[3]); // 8004A9B0
  /* isync */ // 8004A9B4
  mtspr(c,560,c->r[7]); // 8004A9B8
  mtspr(c,561,c->r[7]); // 8004A9BC
  /* isync */ // 8004A9C0
  mtspr(c,570,c->r[7]); // 8004A9C4
  mtspr(c,571,c->r[6]); // 8004A9C8
  mtspr(c,570,c->r[5]); // 8004A9CC
  /* isync */ // 8004A9D0
  mtspr(c,562,c->r[7]); // 8004A9D4
  mtspr(c,563,c->r[7]); // 8004A9D8
  /* isync */ // 8004A9DC
  mtspr(c,564,c->r[7]); // 8004A9E0
  mtspr(c,565,c->r[7]); // 8004A9E4
  /* isync */ // 8004A9E8
  mtspr(c,566,c->r[7]); // 8004A9EC
  mtspr(c,567,c->r[7]); // 8004A9F0
  /* isync */ // 8004A9F4
  mtspr(c,572,c->r[7]); // 8004A9F8
  mtspr(c,573,c->r[7]); // 8004A9FC
  /* isync */ // 8004AA00
  mtspr(c,574,c->r[7]); // 8004AA04
  mtspr(c,575,c->r[7]); // 8004AA08
  /* isync */ // 8004AA0C
  c->r[3]=c->msr; // 8004AA10
  c->r[3]=c->r[3]|0x00000030u; // 8004AA14
  mtspr(c,27,c->r[3]); // 8004AA18
  c->r[3]=c->lr; // 8004AA1C
  mtspr(c,26,c->r[3]); // 8004AA20
  return; /* rfi */ // 8004AA24
}

// RealMode
void f_8004AA30(Ctx* __restrict c) {
  trace_call(0x8004AA30u);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8004AA30
  mtspr(c,26,c->r[3]); // 8004AA34
  c->r[3]=c->msr; // 8004AA38
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 8004AA3C
  mtspr(c,27,c->r[3]); // 8004AA40
  return; /* rfi */ // 8004AA44
}

// BATConfig
void f_8004AA50(Ctx* __restrict c) {
  trace_call(0x8004AA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AA50
  c->r[0]=c->lr; // 8004AA54
  c->r[4]=0u+0x80000000u; // 8004AA58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AA5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AA60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004AA64
  c->r[30]=c->r[3]|c->r[3]; // 8004AA68
  c->r[31]=R32(c->r[4]+0x00003104u); // 8004AA6C
  c->r[0]=R32(c->r[4]+0x00003100u); // 8004AA70
  cmpu(c,0,c->r[31],c->r[0]); // 8004AA74
  if (!crb(c,0)) { goto L_8004AAA0; } // 8004AA78
  c->r[0]=c->r[31]+0xFE800000u; // 8004AA7C
  cmpu(c,0,c->r[0],0x00000000u); // 8004AA80
  if (!crb(c,2)) { goto L_8004AAA0; } // 8004AA84
  c->r[3]=0u+0x81800000u; // 8004AA88
  c->r[4]=0u+0x01800000u; // 8004AA8C
  c->lr=0x8004AA94u; f_80044FE0(c); // 8004AA90
  c->r[3]=0u+0xCC000000u; // 8004AA94
  c->r[0]=0u+0x00000002u; // 8004AA98
  W16(c->r[3]+0x00004028u,c->r[0]); // 8004AA9C
L_8004AAA0:;
  c->r[0]=0u+0x01800000u; // 8004AAA0
  cmpu(c,0,c->r[31],c->r[0]); // 8004AAA4
  if (crb(c,1)) { goto L_8004AAB8; } // 8004AAA8
  c->r[3]=0u+0x80050000u; // 8004AAAC
  c->r[3]=c->r[3]+0xFFFFA5B0u; // 8004AAB0
  c->lr=0x8004AAB8u; f_8004AA30(c); // 8004AAB4
L_8004AAB8:;
  c->r[3]=0u+0x80000000u; // 8004AAB8
  c->r[0]=0u+0x04000000u; // 8004AABC
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 8004AAC0
  c->r[3]=R32(c->r[3]+0x00003120u); // 8004AAC4
  cmpu(c,0,c->r[4],c->r[0]); // 8004AAC8
  if (crb(c,1)) { goto L_8004AB18; } // 8004AACC
  c->r[0]=0u+0x93400000u; // 8004AAD0
  cmpu(c,0,c->r[3],c->r[0]); // 8004AAD4
  if (crb(c,1)) { goto L_8004AAEC; } // 8004AAD8
  c->r[3]=0u+0x80050000u; // 8004AADC
  c->r[3]=c->r[3]+0xFFFFA630u; // 8004AAE0
  c->lr=0x8004AAE8u; f_8004AA30(c); // 8004AAE4
  goto L_8004AB4C; // 8004AAE8
L_8004AAEC:;
  c->r[0]=0u+0x93800000u; // 8004AAEC
  cmpu(c,0,c->r[3],c->r[0]); // 8004AAF0
  if (crb(c,1)) { goto L_8004AB08; } // 8004AAF4
  c->r[3]=0u+0x80050000u; // 8004AAF8
  c->r[3]=c->r[3]+0xFFFFA710u; // 8004AAFC
  c->lr=0x8004AB04u; f_8004AA30(c); // 8004AB00
  goto L_8004AB4C; // 8004AB04
L_8004AB08:;
  c->r[3]=0u+0x80050000u; // 8004AB08
  c->r[3]=c->r[3]+0xFFFFA7F0u; // 8004AB0C
  c->lr=0x8004AB14u; f_8004AA30(c); // 8004AB10
  goto L_8004AB4C; // 8004AB14
L_8004AB18:;
  c->r[0]=0u+0x08000000u; // 8004AB18
  cmpu(c,0,c->r[4],c->r[0]); // 8004AB1C
  if (crb(c,1)) { goto L_8004AB4C; } // 8004AB20
  c->r[0]=0u+0x97000000u; // 8004AB24
  cmpu(c,0,c->r[3],c->r[0]); // 8004AB28
  if (crb(c,1)) { goto L_8004AB40; } // 8004AB2C
  c->r[3]=0u+0x80050000u; // 8004AB30
  c->r[3]=c->r[3]+0xFFFFA8A0u; // 8004AB34
  c->lr=0x8004AB3Cu; f_8004AA30(c); // 8004AB38
  goto L_8004AB4C; // 8004AB3C
L_8004AB40:;
  c->r[3]=0u+0x80050000u; // 8004AB40
  c->r[3]=c->r[3]+0xFFFFA980u; // 8004AB44
  c->lr=0x8004AB4Cu; f_8004AA30(c); // 8004AB48
L_8004AB4C:;
  c->r[0]=c->r[30]+0xFFF50000u; // 8004AB4C
L_8004AB50:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 8004AB50
  if (!crb(c,2)) { IRQCHK(c); goto L_8004AB50; } // 8004AB54
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AB58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AB5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004AB60
  c->lr=c->r[0]; // 8004AB64
  c->r[1]=c->r[1]+0x00000010u; // 8004AB68
  return; // 8004AB6C
}

// __OSRestoreCodeExecOnMEM1
void f_8004AB70(Ctx* __restrict c) {
  trace_call(0x8004AB70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AB70
  c->r[0]=c->lr; // 8004AB74
  c->r[4]=0u+0x80050000u; // 8004AB78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AB7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AB80
  c->r[31]=c->r[3]|c->r[3]; // 8004AB84
  c->r[3]=c->r[4]+0xFFFFA5B0u; // 8004AB88
  c->lr=0x8004AB90u; f_8004AA30(c); // 8004AB8C
  c->r[0]=c->r[31]+0xFFF50000u; // 8004AB90
  c->r[0]=c->r[0]|0x00000000u; // 8004AB94
L_8004AB98:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 8004AB98
  if (!crb(c,2)) { IRQCHK(c); goto L_8004AB98; } // 8004AB9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ABA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004ABA4
  c->lr=c->r[0]; // 8004ABA8
  c->r[1]=c->r[1]+0x00000010u; // 8004ABAC
  return; // 8004ABB0
}

// __OSInitMemoryProtection
void f_8004ABC0(Ctx* __restrict c) {
  trace_call(0x8004ABC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ABC0
  c->r[0]=c->lr; // 8004ABC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ABC8
  c->r[0]=R32(c->r[13]+0xFFFF8B40u); // 8004ABCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004ABD0
  cmps(c,0,(int32_t)c->r[0],0); // 8004ABD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004ABD8
  if (!crb(c,2)) { goto L_8004AC74; } // 8004ABDC
  c->lr=0x8004ABE4u; f_80049A20(c); // 8004ABE0
  c->r[4]=0u+0xCC000000u; // 8004ABE4
  c->r[0]=0u+0x00000000u; // 8004ABE8
  W16(c->r[4]+0x00004020u,c->r[0]); // 8004ABEC
  c->r[0]=0u+0x000000FFu; // 8004ABF0
  c->r[30]=c->r[3]|c->r[3]; // 8004ABF4
  c->r[3]=0u+0xF0000000u; // 8004ABF8
  W16(c->r[4]+0x00004010u,c->r[0]); // 8004ABFC
  c->lr=0x8004AC04u; f_80049DF0(c); // 8004AC00
  c->r[31]=0u+0x80050000u; // 8004AC04
  c->r[3]=0u+0x00000000u; // 8004AC08
  c->r[4]=c->r[31]+0xFFFFA560u; // 8004AC0C
  c->lr=0x8004AC14u; f_80049A90(c); // 8004AC10
  c->r[4]=c->r[31]+0xFFFFA560u; // 8004AC14
  c->r[3]=0u+0x00000001u; // 8004AC18
  c->lr=0x8004AC20u; f_80049A90(c); // 8004AC1C
  c->r[4]=c->r[31]+0xFFFFA560u; // 8004AC20
  c->r[3]=0u+0x00000002u; // 8004AC24
  c->lr=0x8004AC2Cu; f_80049A90(c); // 8004AC28
  c->r[4]=c->r[31]+0xFFFFA560u; // 8004AC2C
  c->r[3]=0u+0x00000003u; // 8004AC30
  c->lr=0x8004AC38u; f_80049A90(c); // 8004AC34
  c->r[4]=c->r[31]+0xFFFFA560u; // 8004AC38
  c->r[3]=0u+0x00000004u; // 8004AC3C
  c->lr=0x8004AC44u; f_80049A90(c); // 8004AC40
  c->r[3]=0u+0x80140000u; // 8004AC44
  c->r[3]=c->r[3]+0xFFFF9240u; // 8004AC48
  c->lr=0x8004AC50u; f_8004AF80(c); // 8004AC4C
  c->r[3]=0u+0x000C0000u; // 8004AC50
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 8004AC54
  c->lr=0x8004AC5Cu; f_8004AA50(c); // 8004AC58
  c->r[3]=0u+0x08000000u; // 8004AC5C
  c->lr=0x8004AC64u; f_80049E70(c); // 8004AC60
  c->r[0]=0u+0x00000001u; // 8004AC64
  W32(c->r[13]+0xFFFF8B40u,c->r[0]); // 8004AC68
  c->r[3]=c->r[30]|c->r[30]; // 8004AC6C
  c->lr=0x8004AC74u; f_80049A60(c); // 8004AC70
L_8004AC74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AC78
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004AC7C
  c->lr=c->r[0]; // 8004AC80
  c->r[1]=c->r[1]+0x00000010u; // 8004AC84
  return; // 8004AC88
}

// OSInitMutex
void f_8004AC90(Ctx* __restrict c) {
  trace_call(0x8004AC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AC90
  c->r[0]=c->lr; // 8004AC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AC98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AC9C
  c->r[31]=c->r[3]|c->r[3]; // 8004ACA0
  c->lr=0x8004ACA8u; f_8004C6F0(c); // 8004ACA4
  c->r[0]=0u+0x00000000u; // 8004ACA8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004ACAC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8004ACB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004ACB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ACB8
  c->lr=c->r[0]; // 8004ACBC
  c->r[1]=c->r[1]+0x00000010u; // 8004ACC0
  return; // 8004ACC4
}

// OSLockMutex
void f_8004ACD0(Ctx* __restrict c) {
  trace_call(0x8004ACD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ACD0
  c->r[0]=c->lr; // 8004ACD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004ACD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004ACDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004ACE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004ACE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004ACE8
  c->r[28]=c->r[3]|c->r[3]; // 8004ACEC
  c->lr=0x8004ACF4u; f_80049A20(c); // 8004ACF0
  c->r[29]=c->r[3]|c->r[3]; // 8004ACF4
  c->lr=0x8004ACFCu; f_8004C700(c); // 8004ACF8
  c->r[30]=c->r[3]|c->r[3]; // 8004ACFC
  c->r[31]=0u+0x00000000u; // 8004AD00
L_8004AD04:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8004AD04
  cmps(c,0,(int32_t)c->r[0],0); // 8004AD08
  if (!crb(c,2)) { goto L_8004AD4C; } // 8004AD0C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8004AD10
  W32(c->r[28]+0x00000008u,c->r[30]); // 8004AD14
  c->r[0]=c->r[3]+0x00000001u; // 8004AD18
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8004AD1C
  c->r[3]=R32(c->r[30]+0x000002F8u); // 8004AD20
  cmps(c,0,(int32_t)c->r[3],0); // 8004AD24
  if (!crb(c,2)) { goto L_8004AD34; } // 8004AD28
  W32(c->r[30]+0x000002F4u,c->r[28]); // 8004AD2C
  goto L_8004AD38; // 8004AD30
L_8004AD34:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 8004AD34
L_8004AD38:;
  c->r[0]=0u+0x00000000u; // 8004AD38
  W32(c->r[28]+0x00000014u,c->r[3]); // 8004AD3C
  W32(c->r[28]+0x00000010u,c->r[0]); // 8004AD40
  W32(c->r[30]+0x000002F8u,c->r[28]); // 8004AD44
  goto L_8004AD84; // 8004AD48
L_8004AD4C:;
  cmpu(c,0,c->r[0],c->r[30]); // 8004AD4C
  if (!crb(c,2)) { goto L_8004AD64; } // 8004AD50
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8004AD54
  c->r[0]=c->r[3]+0x00000001u; // 8004AD58
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8004AD5C
  goto L_8004AD84; // 8004AD60
L_8004AD64:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 8004AD64
  c->r[3]=R32(c->r[28]+0x00000008u); // 8004AD68
  c->r[4]=R32(c->r[30]+0x000002D0u); // 8004AD6C
  c->lr=0x8004AD74u; f_8004CA20(c); // 8004AD70
  c->r[3]=c->r[28]|c->r[28]; // 8004AD74
  c->lr=0x8004AD7Cu; f_8004D780(c); // 8004AD78
  W32(c->r[30]+0x000002F0u,c->r[31]); // 8004AD7C
  IRQCHK(c); goto L_8004AD04; // 8004AD80
L_8004AD84:;
  c->r[3]=c->r[29]|c->r[29]; // 8004AD84
  c->lr=0x8004AD8Cu; f_80049A60(c); // 8004AD88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004AD8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004AD90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004AD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004AD98
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004AD9C
  c->lr=c->r[0]; // 8004ADA0
  c->r[1]=c->r[1]+0x00000020u; // 8004ADA4
  return; // 8004ADA8
}

// OSUnlockMutex
void f_8004ADB0(Ctx* __restrict c) {
  trace_call(0x8004ADB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ADB0
  c->r[0]=c->lr; // 8004ADB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004ADB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004ADBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004ADC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004ADC4
  c->r[29]=c->r[3]|c->r[3]; // 8004ADC8
  c->lr=0x8004ADD0u; f_80049A20(c); // 8004ADCC
  c->r[31]=c->r[3]|c->r[3]; // 8004ADD0
  c->lr=0x8004ADD8u; f_8004C700(c); // 8004ADD4
  c->r[0]=R32(c->r[29]+0x00000008u); // 8004ADD8
  c->r[30]=c->r[3]|c->r[3]; // 8004ADDC
  cmpu(c,0,c->r[0],c->r[3]); // 8004ADE0
  if (!crb(c,2)) { goto L_8004AE54; } // 8004ADE4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8004ADE8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004ADEC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8004ADF0
  if (!crb(c,2)) { goto L_8004AE54; } // 8004ADF4
  c->r[4]=R32(c->r[29]+0x00000010u); // 8004ADF8
  c->r[5]=R32(c->r[29]+0x00000014u); // 8004ADFC
  cmps(c,0,(int32_t)c->r[4],0); // 8004AE00
  if (!crb(c,2)) { goto L_8004AE10; } // 8004AE04
  W32(c->r[3]+0x000002F8u,c->r[5]); // 8004AE08
  goto L_8004AE14; // 8004AE0C
L_8004AE10:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 8004AE10
L_8004AE14:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004AE14
  if (!crb(c,2)) { goto L_8004AE24; } // 8004AE18
  W32(c->r[3]+0x000002F4u,c->r[4]); // 8004AE1C
  goto L_8004AE28; // 8004AE20
L_8004AE24:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 8004AE24
L_8004AE28:;
  c->r[0]=0u+0x00000000u; // 8004AE28
  W32(c->r[29]+0x00000008u,c->r[0]); // 8004AE2C
  c->r[4]=R32(c->r[3]+0x000002D0u); // 8004AE30
  c->r[0]=R32(c->r[3]+0x000002D4u); // 8004AE34
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8004AE38
  if (!crb(c,0)) { goto L_8004AE4C; } // 8004AE3C
  c->r[3]=c->r[30]|c->r[30]; // 8004AE40
  c->lr=0x8004AE48u; f_8004C830(c); // 8004AE44
  W32(c->r[30]+0x000002D0u,c->r[3]); // 8004AE48
L_8004AE4C:;
  c->r[3]=c->r[29]|c->r[29]; // 8004AE4C
  c->lr=0x8004AE54u; f_8004D870(c); // 8004AE50
L_8004AE54:;
  c->r[3]=c->r[31]|c->r[31]; // 8004AE54
  c->lr=0x8004AE5Cu; f_80049A60(c); // 8004AE58
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004AE5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004AE60
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004AE64
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004AE68
  c->lr=c->r[0]; // 8004AE6C
  c->r[1]=c->r[1]+0x00000020u; // 8004AE70
  return; // 8004AE74
}

// __OSUnlockAllMutex
void f_8004AE80(Ctx* __restrict c) {
  trace_call(0x8004AE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AE80
  c->r[0]=c->lr; // 8004AE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AE88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AE8C
  c->r[31]=0u+0x00000000u; // 8004AE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004AE94
  c->r[30]=c->r[3]|c->r[3]; // 8004AE98
  goto L_8004AEC8; // 8004AE9C
L_8004AEA0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8004AEA0
  cmps(c,0,(int32_t)c->r[4],0); // 8004AEA4
  if (!crb(c,2)) { goto L_8004AEB4; } // 8004AEA8
  W32(c->r[30]+0x000002F8u,c->r[31]); // 8004AEAC
  goto L_8004AEB8; // 8004AEB0
L_8004AEB4:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 8004AEB4
L_8004AEB8:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8004AEB8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8004AEBC
  W32(c->r[3]+0x00000008u,c->r[31]); // 8004AEC0
  c->lr=0x8004AEC8u; f_8004D870(c); // 8004AEC4
L_8004AEC8:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 8004AEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8004AECC
  if (!crb(c,2)) { IRQCHK(c); goto L_8004AEA0; } // 8004AED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004AEDC
  c->lr=c->r[0]; // 8004AEE0
  c->r[1]=c->r[1]+0x00000010u; // 8004AEE4
  return; // 8004AEE8
}

// __OSReboot
void f_8004AEF0(Ctx* __restrict c) {
  trace_call(0x8004AEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AEF0
  c->r[0]=c->lr; // 8004AEF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004AEF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004AEFC
  c->r[31]=c->r[4]|c->r[4]; // 8004AF00
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004AF04
  c->r[30]=c->r[3]|c->r[3]; // 8004AF08
  c->lr=0x8004AF10u; f_80049A20(c); // 8004AF0C
  c->r[3]=0u+0x81280000u; // 8004AF10
  c->lr=0x8004AF18u; f_80044AB0(c); // 8004AF14
  c->r[3]=0u+0x812F0000u; // 8004AF18
  c->lr=0x8004AF20u; f_80044A80(c); // 8004AF1C
  c->r[0]=0u+0x00000000u; // 8004AF20
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004AF24
  c->r[4]=0u+0x80000000u; // 8004AF28
  c->r[3]=c->r[31]|c->r[31]; // 8004AF2C
  c->r[0]=R32(c->r[4]+0x00003194u); // 8004AF30
  c->r[4]=c->r[30]|0x80000000u; // 8004AF34
  W32(c->r[13]+0xFFFF8B00u,c->r[0]); // 8004AF38
  c->r[5]=c->r[1]+0x00000008u; // 8004AF3C
  c->lr=0x8004AF44u; f_80047930(c); // 8004AF40
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004AF44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004AF48
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004AF4C
  c->lr=c->r[0]; // 8004AF50
  c->r[1]=c->r[1]+0x00000020u; // 8004AF54
  return; // 8004AF58
}

// fn_8004AF60
void f_8004AF60(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF8B48u); // 8004AF60
  W32(c->r[3]+0x00000000u,c->r[0]); // 8004AF64
  c->r[0]=R32(c->r[13]+0xFFFF8B4Cu); // 8004AF68
  W32(c->r[4]+0x00000000u,c->r[0]); // 8004AF6C
  return; // 8004AF70
}

// OSRegisterShutdownFunction
void f_8004AF80(Ctx* __restrict c) {
  trace_call(0x8004AF80u);
  c->r[5]=R32(c->r[13]+0xFFFF8B58u); // 8004AF80
  goto L_8004AF8C; // 8004AF84
L_8004AF88:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 8004AF88
L_8004AF8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004AF8C
  if (crb(c,2)) { goto L_8004AFA4; } // 8004AF90
  c->r[4]=R32(c->r[5]+0x00000004u); // 8004AF94
  c->r[0]=R32(c->r[3]+0x00000004u); // 8004AF98
  cmpu(c,0,c->r[4],c->r[0]); // 8004AF9C
  if (!crb(c,1)) { IRQCHK(c); goto L_8004AF88; } // 8004AFA0
L_8004AFA4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004AFA4
  if (!crb(c,2)) { goto L_8004AFE0; } // 8004AFA8
  c->r[4]=c->r[13]+0xFFFF8B58u; // 8004AFAC
  c->r[4]=R32(c->r[4]+0x00000004u); // 8004AFB0
  cmps(c,0,(int32_t)c->r[4],0); // 8004AFB4
  if (!crb(c,2)) { goto L_8004AFC4; } // 8004AFB8
  W32(c->r[13]+0xFFFF8B58u,c->r[3]); // 8004AFBC
  goto L_8004AFC8; // 8004AFC0
L_8004AFC4:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8004AFC4
L_8004AFC8:;
  c->r[0]=0u+0x00000000u; // 8004AFC8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8004AFCC
  c->r[4]=c->r[13]+0xFFFF8B58u; // 8004AFD0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8004AFD4
  W32(c->r[4]+0x00000004u,c->r[3]); // 8004AFD8
  return; // 8004AFDC
L_8004AFE0:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 8004AFE0
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8004AFE4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8004AFE8
  cmps(c,0,(int32_t)c->r[4],0); // 8004AFEC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8004AFF0
  if (!crb(c,2)) { goto L_8004B000; } // 8004AFF4
  W32(c->r[13]+0xFFFF8B58u,c->r[3]); // 8004AFF8
  return; // 8004AFFC
L_8004B000:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8004B000
  return; // 8004B004
}

// __OSCallShutdownFunctions
void f_8004B010(Ctx* __restrict c) {
  trace_call(0x8004B010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B010
  c->r[0]=c->lr; // 8004B014
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004B01C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004B020
  c->r[30]=0u+0x00000000u; // 8004B024
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004B028
  c->r[29]=c->r[4]|c->r[4]; // 8004B02C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004B030
  c->r[28]=c->r[3]|c->r[3]; // 8004B034
  c->r[3]=0u+0x00000000u; // 8004B038
  c->r[31]=R32(c->r[13]+0xFFFF8B58u); // 8004B03C
  goto L_8004B080; // 8004B040
L_8004B044:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004B044
  if (crb(c,2)) { goto L_8004B058; } // 8004B048
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004B04C
  cmpu(c,0,c->r[3],c->r[0]); // 8004B050
  if (!crb(c,2)) { goto L_8004B088; } // 8004B054
L_8004B058:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8004B058
  c->r[3]=c->r[28]|c->r[28]; // 8004B05C
  c->r[4]=c->r[29]|c->r[29]; // 8004B060
  c->ctr=c->r[12]; // 8004B064
  if (true) { c->lr=0x8004B06Cu; dispatch(c,c->ctr); } // 8004B068
  c->r[0]=cntlz(c->r[3]); // 8004B06C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8004B070
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B074
  c->r[31]=R32(c->r[31]+0x00000008u); // 8004B078
  c->r[30]=c->r[30]|c->r[0]; // 8004B07C
L_8004B080:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004B080
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B044; } // 8004B084
L_8004B088:;
  c->lr=0x8004B08Cu; f_8004BF40(c); // 8004B088
  c->r[0]=cntlz(c->r[3]); // 8004B08C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004B090
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B094
  c->r[30]=c->r[30]|c->r[0]; // 8004B098
  c->r[0]=cntlz(c->r[30]); // 8004B09C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004B0A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004B0A4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B0A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004B0AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B0B0
  c->lr=c->r[0]; // 8004B0B4
  c->r[1]=c->r[1]+0x00000020u; // 8004B0B8
  return; // 8004B0BC
}

// fn_8004B0C0
void f_8004B0C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B0C0
  c->r[0]=c->lr; // 8004B0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B0C8
  c->r[11]=c->r[1]+0x00000020u; // 8004B0CC
  c->lr=0x8004B0D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004B0D0
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 8004B0D4
  c->r[31]=c->r[3]|c->r[3]; // 8004B0D8
  cmpu(c,0,c->r[0],0x00000001u); // 8004B0DC
  if (!crb(c,1)) { goto L_8004B0EC; } // 8004B0E0
  cmps(c,0,(int32_t)c->r[3],0); // 8004B0E4
  if (!crb(c,2)) { goto L_8004B0F4; } // 8004B0E8
L_8004B0EC:;
  c->r[27]=0u+0x00000000u; // 8004B0EC
  goto L_8004B0F8; // 8004B0F0
L_8004B0F4:;
  c->r[27]=0u+0x00000001u; // 8004B0F4
L_8004B0F8:;
  c->lr=0x8004B0FCu; f_80044EF0(c); // 8004B0F8
  cmps(c,0,(int32_t)c->r[27],0); // 8004B0FC
  if (!crb(c,2)) { goto L_8004B110; } // 8004B100
  c->r[3]=0u+0x00000001u; // 8004B104
  c->lr=0x8004B10Cu; f_80061010(c); // 8004B108
  c->r[28]=c->r[3]|c->r[3]; // 8004B10C
L_8004B110:;
  c->r[29]=R32(c->r[13]+0xFFFF8B58u); // 8004B110
  c->r[3]=0u+0x00000000u; // 8004B114
  c->r[30]=0u+0x00000000u; // 8004B118
  goto L_8004B15C; // 8004B11C
L_8004B120:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004B120
  if (crb(c,2)) { goto L_8004B134; } // 8004B124
  c->r[0]=R32(c->r[29]+0x00000004u); // 8004B128
  cmpu(c,0,c->r[3],c->r[0]); // 8004B12C
  if (!crb(c,2)) { goto L_8004B164; } // 8004B130
L_8004B134:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004B134
  c->r[4]=c->r[31]|c->r[31]; // 8004B138
  c->r[3]=0u+0x00000000u; // 8004B13C
  c->ctr=c->r[12]; // 8004B140
  if (true) { c->lr=0x8004B148u; dispatch(c,c->ctr); } // 8004B144
  c->r[0]=cntlz(c->r[3]); // 8004B148
  c->r[3]=R32(c->r[29]+0x00000004u); // 8004B14C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B150
  c->r[29]=R32(c->r[29]+0x00000008u); // 8004B154
  c->r[30]=c->r[30]|c->r[0]; // 8004B158
L_8004B15C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8004B15C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B120; } // 8004B160
L_8004B164:;
  c->lr=0x8004B168u; f_8004BF40(c); // 8004B164
  c->r[0]=cntlz(c->r[3]); // 8004B168
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B16C
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 8004B170
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B110; } // 8004B174
L_8004B178:;
  c->lr=0x8004B17Cu; f_8004BF40(c); // 8004B178
  cmps(c,0,(int32_t)c->r[3],0); // 8004B17C
  if (crb(c,2)) { IRQCHK(c); goto L_8004B178; } // 8004B180
  c->lr=0x8004B188u; f_80049A20(c); // 8004B184
  c->r[30]=R32(c->r[13]+0xFFFF8B58u); // 8004B188
  c->r[3]=0u+0x00000000u; // 8004B18C
  c->r[29]=0u+0x00000000u; // 8004B190
  goto L_8004B1D4; // 8004B194
L_8004B198:;
  cmps(c,0,(int32_t)c->r[29],0); // 8004B198
  if (crb(c,2)) { goto L_8004B1AC; } // 8004B19C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8004B1A0
  cmpu(c,0,c->r[3],c->r[0]); // 8004B1A4
  if (!crb(c,2)) { goto L_8004B1DC; } // 8004B1A8
L_8004B1AC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004B1AC
  c->r[4]=c->r[31]|c->r[31]; // 8004B1B0
  c->r[3]=0u+0x00000001u; // 8004B1B4
  c->ctr=c->r[12]; // 8004B1B8
  if (true) { c->lr=0x8004B1C0u; dispatch(c,c->ctr); } // 8004B1BC
  c->r[0]=cntlz(c->r[3]); // 8004B1C0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8004B1C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B1C8
  c->r[30]=R32(c->r[30]+0x00000008u); // 8004B1CC
  c->r[29]=c->r[29]|c->r[0]; // 8004B1D0
L_8004B1D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004B1D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B198; } // 8004B1D8
L_8004B1DC:;
  c->lr=0x8004B1E0u; f_8004BF40(c); // 8004B1DC
  c->lr=0x8004B1E4u; f_80045140(c); // 8004B1E0
  cmps(c,0,(int32_t)c->r[27],0); // 8004B1E4
  if (!crb(c,2)) { goto L_8004B1F4; } // 8004B1E8
  c->r[3]=c->r[28]|c->r[28]; // 8004B1EC
  c->lr=0x8004B1F4u; f_80061010(c); // 8004B1F0
L_8004B1F4:;
  c->r[3]=0u+0x80000000u; // 8004B1F4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8004B1F8
  goto L_8004B220; // 8004B1FC
L_8004B200:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8004B200
  c->r[29]=R32(c->r[3]+0x000002FCu); // 8004B204
  cmps(c,0,(int32_t)c->r[0],1); // 8004B208
  if (crb(c,2)) { goto L_8004B218; } // 8004B20C
  cmps(c,0,(int32_t)c->r[0],4); // 8004B210
  if (!crb(c,2)) { goto L_8004B21C; } // 8004B214
L_8004B218:;
  c->lr=0x8004B21Cu; f_8004D020(c); // 8004B218
L_8004B21C:;
  c->r[3]=c->r[29]|c->r[29]; // 8004B21C
L_8004B220:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004B220
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B200; } // 8004B224
  c->r[11]=c->r[1]+0x00000020u; // 8004B228
  c->lr=0x8004B230u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004B22C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B230
  c->lr=c->r[0]; // 8004B234
  c->r[1]=c->r[1]+0x00000020u; // 8004B238
  return; // 8004B23C
}

// __OSGetDiscState
void f_8004B240(Ctx* __restrict c) {
  trace_call(0x8004B240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B240
  c->r[0]=c->lr; // 8004B244
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004B24C
  c->r[31]=c->r[3]|c->r[3]; // 8004B250
  c->lr=0x8004B258u; f_80056720(c); // 8004B254
  cmpu(c,0,c->r[3],0x00000002u); // 8004B258
  if (crb(c,2)) { goto L_8004B268; } // 8004B25C
  c->r[3]=0u+0x00000003u; // 8004B260
  goto L_8004B298; // 8004B264
L_8004B268:;
  cmpu(c,0,c->r[31],0x00000001u); // 8004B268
  if (!crb(c,2)) { goto L_8004B294; } // 8004B26C
  c->r[3]=c->r[1]+0x00000008u; // 8004B270
  c->lr=0x8004B278u; f_8004C1A0(c); // 8004B274
  cmps(c,0,(int32_t)c->r[3],0); // 8004B278
  if (crb(c,2)) { goto L_8004B294; } // 8004B27C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004B280
  cmps(c,0,(int32_t)c->r[0],0); // 8004B284
  if (!crb(c,2)) { goto L_8004B294; } // 8004B288
  c->r[3]=0u+0x00000001u; // 8004B28C
  goto L_8004B298; // 8004B290
L_8004B294:;
  c->r[3]=0u+0x00000002u; // 8004B294
L_8004B298:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B298
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004B29C
  c->lr=c->r[0]; // 8004B2A0
  c->r[1]=c->r[1]+0x00000020u; // 8004B2A4
  return; // 8004B2A8
}

// OSShutdownSystem
void f_8004B2B0(Ctx* __restrict c) {
  trace_call(0x8004B2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B2B0
  c->r[0]=c->lr; // 8004B2B4
  c->r[4]=0u+0x00000000u; // 8004B2B8
  c->r[5]=0u+0x00000002u; // 8004B2BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004B2C0
  c->r[3]=c->r[1]+0x00000008u; // 8004B2C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004B2C8
  c->lr=0x8004B2D0u; f_80004714(c); // 8004B2CC
  c->lr=0x8004B2D4u; f_8008A000(c); // 8004B2D0
L_8004B2D4:;
  c->lr=0x8004B2D8u; f_8008A0A0(c); // 8004B2D4
  cmpu(c,0,c->r[3],0x00000001u); // 8004B2D8
  if (crb(c,2)) { IRQCHK(c); goto L_8004B2D4; } // 8004B2DC
  c->r[3]=c->r[1]+0x00000008u; // 8004B2E0
  c->lr=0x8004B2E8u; f_8008BA70(c); // 8004B2E4
  c->lr=0x8004B2ECu; f_8004EDA0(c); // 8004B2E8
  c->lr=0x8004B2F0u; f_8004E660(c); // 8004B2EC
  c->lr=0x8004B2F4u; f_80056970(c); // 8004B2F0
  c->r[3]=c->r[1]+0x00000018u; // 8004B2F4
  c->lr=0x8004B2FCu; f_8004F080(c); // 8004B2F8
  c->r[31]=R8(c->r[1]+0x0000001Eu); // 8004B2FC
  c->lr=0x8004B304u; f_80056720(c); // 8004B300
  cmpu(c,0,c->r[3],0x00000002u); // 8004B304
  if (crb(c,2)) { goto L_8004B314; } // 8004B308
  c->r[3]=0u+0x00000003u; // 8004B30C
  goto L_8004B344; // 8004B310
L_8004B314:;
  cmpu(c,0,c->r[31],0x00000001u); // 8004B314
  if (!crb(c,2)) { goto L_8004B340; } // 8004B318
  c->r[3]=c->r[1]+0x0000000Cu; // 8004B31C
  c->lr=0x8004B324u; f_8004C1A0(c); // 8004B320
  cmps(c,0,(int32_t)c->r[3],0); // 8004B324
  if (crb(c,2)) { goto L_8004B340; } // 8004B328
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8004B32C
  cmps(c,0,(int32_t)c->r[0],0); // 8004B330
  if (!crb(c,2)) { goto L_8004B340; } // 8004B334
  c->r[3]=0u+0x00000001u; // 8004B338
  goto L_8004B344; // 8004B33C
L_8004B340:;
  c->r[3]=0u+0x00000002u; // 8004B340
L_8004B344:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8004B344
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 8004B348
  cmpu(c,0,c->r[0],0x00000001u); // 8004B34C
  if (!crb(c,2)) { goto L_8004B360; } // 8004B350
  c->r[0]=0u+0x00000005u; // 8004B354
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8004B358
  goto L_8004B368; // 8004B35C
L_8004B360:;
  c->r[0]=0u+0x00000001u; // 8004B360
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8004B364
L_8004B368:;
  c->lr=0x8004B36Cu; f_8004C2C0(c); // 8004B368
  c->r[3]=c->r[1]+0x00000018u; // 8004B36C
  c->lr=0x8004B374u; f_8004EF90(c); // 8004B370
  c->r[3]=c->r[1]+0x00000010u; // 8004B374
  c->lr=0x8004B37Cu; f_80042A60(c); // 8004B378
  c->r[0]=R8(c->r[1]+0x00000008u); // 8004B37C
  cmpu(c,0,c->r[0],0x00000001u); // 8004B380
  if (!crb(c,2)) { goto L_8004B3A8; } // 8004B384
  c->r[0]=0u+0x00000001u; // 8004B388
  W32(c->r[13]+0xFFFF8B54u,c->r[0]); // 8004B38C
  c->lr=0x8004B394u; f_8004C740(c); // 8004B390
  c->r[3]=0u+0x00000005u; // 8004B394
  c->lr=0x8004B39Cu; f_8004B0C0(c); // 8004B398
  c->lr=0x8004B3A0u; f_8004C780(c); // 8004B39C
  c->lr=0x8004B3A4u; f_80047100(c); // 8004B3A0
  goto L_8004B3B8; // 8004B3A4
L_8004B3A8:;
  c->lr=0x8004B3ACu; f_8004C740(c); // 8004B3A8
  c->r[3]=0u+0x00000002u; // 8004B3AC
  c->lr=0x8004B3B4u; f_8004B0C0(c); // 8004B3B0
  c->lr=0x8004B3B8u; f_8004E460(c); // 8004B3B4
L_8004B3B8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004B3B8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8004B3BC
  c->lr=c->r[0]; // 8004B3C0
  c->r[1]=c->r[1]+0x00000040u; // 8004B3C4
  return; // 8004B3C8
}

// OSRestart
void f_8004B3D0(Ctx* __restrict c) {
  trace_call(0x8004B3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B3D0
  c->r[0]=c->lr; // 8004B3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B3D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B3DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004B3E0
  c->r[30]=c->r[3]|c->r[3]; // 8004B3E4
  c->lr=0x8004B3ECu; f_80043DF0(c); // 8004B3E8
  c->r[31]=c->r[3]|c->r[3]; // 8004B3EC
  c->lr=0x8004B3F4u; f_8004EDA0(c); // 8004B3F0
  c->lr=0x8004B3F8u; f_8004E660(c); // 8004B3F4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8004B3F8
  cmpu(c,0,c->r[0],0x00000081u); // 8004B3FC
  if (!crb(c,2)) { goto L_8004B420; } // 8004B400
  c->lr=0x8004B408u; f_8004C740(c); // 8004B404
  c->r[3]=0u+0x00000004u; // 8004B408
  c->lr=0x8004B410u; f_8004B0C0(c); // 8004B40C
  c->lr=0x8004B414u; f_8004C780(c); // 8004B410
  c->r[3]=c->r[30]|c->r[30]; // 8004B414
  c->lr=0x8004B41Cu; f_800507E0(c); // 8004B418
  goto L_8004B444; // 8004B41C
L_8004B420:;
  cmpu(c,0,c->r[0],0x00000080u); // 8004B420
  if (!crb(c,2)) { goto L_8004B444; } // 8004B424
  c->lr=0x8004B42Cu; f_8004C740(c); // 8004B428
  c->r[3]=0u+0x00000004u; // 8004B42C
  c->lr=0x8004B434u; f_8004B0C0(c); // 8004B430
  c->lr=0x8004B438u; f_8004C780(c); // 8004B434
  c->r[4]=R32(c->r[13]+0xFFFF8B50u); // 8004B438
  c->r[3]=c->r[30]|c->r[30]; // 8004B43C
  c->lr=0x8004B444u; f_8004AEF0(c); // 8004B440
L_8004B444:;
  c->lr=0x8004B448u; f_8004C740(c); // 8004B444
  c->r[3]=0u+0x00000001u; // 8004B448
  c->lr=0x8004B450u; f_8004B0C0(c); // 8004B44C
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B450
  cmps(c,0,(int32_t)c->r[0],0); // 8004B454
  if (!crb(c,2)) { goto L_8004B468; } // 8004B458
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B45C
  cmps(c,0,(int32_t)c->r[0],0); // 8004B460
  if (crb(c,2)) { goto L_8004B46C; } // 8004B464
L_8004B468:;
  c->lr=0x8004B46Cu; f_8004E340(c); // 8004B468
L_8004B46C:;
  c->lr=0x8004B470u; f_8004E4E0(c); // 8004B46C
  c->r[3]=0u+0x80140000u; // 8004B470
  c->r[5]=0u+0x80140000u; // 8004B474
  c->r[3]=c->r[3]+0xFFFF9250u; // 8004B478
  c->r[4]=0u+0x0000040Au; // 8004B47C
  c->r[5]=c->r[5]+0xFFFF925Cu; // 8004B480
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B484
  c->lr=0x8004B48Cu; f_80045D00(c); // 8004B488
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B48C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B490
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004B494
  c->lr=c->r[0]; // 8004B498
  c->r[1]=c->r[1]+0x00000010u; // 8004B49C
  return; // 8004B4A0
}

// __OSReturnToMenu
void f_8004B4B0(Ctx* __restrict c) {
  trace_call(0x8004B4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B4B0
  c->r[0]=c->lr; // 8004B4B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004B4B8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8004B4BC
  W32(c->r[1]+0x00000088u,c->r[30]); // 8004B4C0
  c->r[30]=0u+0x80140000u; // 8004B4C4
  c->r[30]=c->r[30]+0xFFFF9250u; // 8004B4C8
  W32(c->r[1]+0x00000084u,c->r[29]); // 8004B4CC
  c->r[29]=c->r[3]|c->r[3]; // 8004B4D0
  c->lr=0x8004B4D8u; f_8004EDA0(c); // 8004B4D4
  c->lr=0x8004B4DCu; f_8004E660(c); // 8004B4D8
  c->lr=0x8004B4E0u; f_80056970(c); // 8004B4DC
  c->r[3]=c->r[1]+0x00000058u; // 8004B4E0
  c->lr=0x8004B4E8u; f_8004F080(c); // 8004B4E4
  c->r[31]=R8(c->r[1]+0x0000005Eu); // 8004B4E8
  c->lr=0x8004B4F0u; f_80056720(c); // 8004B4EC
  cmpu(c,0,c->r[3],0x00000002u); // 8004B4F0
  if (crb(c,2)) { goto L_8004B500; } // 8004B4F4
  c->r[0]=0u+0x00000003u; // 8004B4F8
  goto L_8004B530; // 8004B4FC
L_8004B500:;
  cmpu(c,0,c->r[31],0x00000001u); // 8004B500
  if (!crb(c,2)) { goto L_8004B52C; } // 8004B504
  c->r[3]=c->r[1]+0x00000008u; // 8004B508
  c->lr=0x8004B510u; f_8004C1A0(c); // 8004B50C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B510
  if (crb(c,2)) { goto L_8004B52C; } // 8004B514
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004B518
  cmps(c,0,(int32_t)c->r[0],0); // 8004B51C
  if (!crb(c,2)) { goto L_8004B52C; } // 8004B520
  c->r[0]=0u+0x00000001u; // 8004B524
  goto L_8004B530; // 8004B528
L_8004B52C:;
  c->r[0]=0u+0x00000002u; // 8004B52C
L_8004B530:;
  c->r[31]=0u+0x00000003u; // 8004B530
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 8004B534
  W8(c->r[1]+0x0000005Du,c->r[31]); // 8004B538
  W8(c->r[1]+0x0000005Fu,c->r[29]); // 8004B53C
  c->lr=0x8004B544u; f_8004C2C0(c); // 8004B540
  c->r[3]=c->r[1]+0x00000058u; // 8004B544
  c->lr=0x8004B54Cu; f_8004EF90(c); // 8004B548
  c->r[3]=0u+0x81280000u; // 8004B54C
  c->lr=0x8004B554u; f_80044AB0(c); // 8004B550
  c->r[3]=0u+0x812F0000u; // 8004B554
  c->lr=0x8004B55Cu; f_80044A80(c); // 8004B558
  c->lr=0x8004B560u; f_800DB3E0(c); // 8004B55C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B560
  if (crb(c,2)) { goto L_8004B5DC; } // 8004B564
  c->r[3]=c->r[1]+0x00000038u; // 8004B568
  c->lr=0x8004B570u; f_8004F080(c); // 8004B56C
  c->r[0]=0u+0x00000002u; // 8004B570
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 8004B574
  W8(c->r[1]+0x0000003Du,c->r[31]); // 8004B578
  c->lr=0x8004B580u; f_8004C2C0(c); // 8004B57C
  c->r[3]=c->r[1]+0x00000038u; // 8004B580
  c->lr=0x8004B588u; f_8004EF90(c); // 8004B584
  c->lr=0x8004B58Cu; f_80047100(c); // 8004B588
  c->lr=0x8004B590u; f_8004C740(c); // 8004B58C
  c->lr=0x8004B594u; f_8005E950(c); // 8004B590
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B594
  cmps(c,0,(int32_t)c->r[0],0); // 8004B598
  if (!crb(c,2)) { goto L_8004B5AC; } // 8004B59C
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B5A0
  cmps(c,0,(int32_t)c->r[0],0); // 8004B5A4
  if (crb(c,2)) { goto L_8004B5B0; } // 8004B5A8
L_8004B5AC:;
  c->lr=0x8004B5B0u; f_8004E340(c); // 8004B5AC
L_8004B5B0:;
  c->lr=0x8004B5B4u; f_8004E4E0(c); // 8004B5B0
  c->r[3]=c->r[30]+0x00000000u; // 8004B5B4
  c->r[5]=c->r[30]+0x0000000Cu; // 8004B5B8
  c->r[4]=0u+0x0000040Au; // 8004B5BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B5C0
  c->lr=0x8004B5C8u; f_80045D00(c); // 8004B5C4
  c->r[3]=c->r[30]+0x00000000u; // 8004B5C8
  c->r[5]=c->r[30]+0x00000038u; // 8004B5CC
  c->r[4]=0u+0x000003F2u; // 8004B5D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B5D4
  c->lr=0x8004B5DCu; f_80045D00(c); // 8004B5D8
L_8004B5DC:;
  c->r[3]=0u+0x000000E0u; // 8004B5DC
  c->r[4]=0u+0x00000020u; // 8004B5E0
  c->lr=0x8004B5E8u; f_80044AC0(c); // 8004B5E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004B5E8
  c->r[31]=c->r[3]|c->r[3]; // 8004B5EC
  if (!crb(c,2)) { goto L_8004B66C; } // 8004B5F0
  c->r[3]=c->r[1]+0x00000018u; // 8004B5F4
  c->lr=0x8004B5FCu; f_8004F080(c); // 8004B5F8
  c->r[3]=0u+0x00000002u; // 8004B5FC
  c->r[0]=0u+0x00000003u; // 8004B600
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 8004B604
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8004B608
  c->lr=0x8004B610u; f_8004C2C0(c); // 8004B60C
  c->r[3]=c->r[1]+0x00000018u; // 8004B610
  c->lr=0x8004B618u; f_8004EF90(c); // 8004B614
  c->lr=0x8004B61Cu; f_80047100(c); // 8004B618
  c->lr=0x8004B620u; f_8004C740(c); // 8004B61C
  c->lr=0x8004B624u; f_8005E950(c); // 8004B620
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B624
  cmps(c,0,(int32_t)c->r[0],0); // 8004B628
  if (!crb(c,2)) { goto L_8004B63C; } // 8004B62C
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B630
  cmps(c,0,(int32_t)c->r[0],0); // 8004B634
  if (crb(c,2)) { goto L_8004B640; } // 8004B638
L_8004B63C:;
  c->lr=0x8004B640u; f_8004E340(c); // 8004B63C
L_8004B640:;
  c->lr=0x8004B644u; f_8004E4E0(c); // 8004B640
  c->r[3]=c->r[30]+0x00000000u; // 8004B644
  c->r[5]=c->r[30]+0x0000000Cu; // 8004B648
  c->r[4]=0u+0x0000040Au; // 8004B64C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B650
  c->lr=0x8004B658u; f_80045D00(c); // 8004B654
  c->r[3]=c->r[30]+0x00000000u; // 8004B658
  c->r[5]=c->r[30]+0x00000038u; // 8004B65C
  c->r[4]=0u+0x000003F2u; // 8004B660
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B664
  c->lr=0x8004B66Cu; f_80045D00(c); // 8004B668
L_8004B66C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004B66C
  c->r[4]=0u+0x00000000u; // 8004B670
  c->r[5]=0u+0x000000E0u; // 8004B674
  c->lr=0x8004B67Cu; f_80004714(c); // 8004B678
  c->r[4]=c->r[31]|c->r[31]; // 8004B67C
  c->r[3]=0u+0x00000000u; // 8004B680
  c->lr=0x8004B688u; f_800DB650(c); // 8004B684
  cmps(c,0,(int32_t)c->r[3],0); // 8004B688
  if (!crb(c,2)) { goto L_8004B6CC; } // 8004B68C
  c->lr=0x8004B694u; f_8004F960(c); // 8004B690
  cmps(c,0,(int32_t)c->r[3],0); // 8004B694
  if (crb(c,2)) { goto L_8004B6CC; } // 8004B698
  c->r[3]=0u+0x00000000u; // 8004B69C
  c->r[0]=0u+0xFFFFFFFFu; // 8004B6A0
  W32(c->r[1]+0x00000010u,c->r[3]); // 8004B6A4
  c->r[3]=c->r[31]|c->r[31]; // 8004B6A8
  c->r[4]=c->r[1]+0x00000010u; // 8004B6AC
  c->r[5]=c->r[1]+0x0000000Cu; // 8004B6B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8004B6B4
  c->lr=0x8004B6BCu; f_8004FE10(c); // 8004B6B8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8004B6BC
  cmps(c,0,(int32_t)c->r[0],0); // 8004B6C0
  if (!crb(c,2)) { goto L_8004B6CC; } // 8004B6C4
  c->lr=0x8004B6CCu; f_8004FC60(c); // 8004B6C8
L_8004B6CC:;
  c->lr=0x8004B6D0u; f_8004C740(c); // 8004B6CC
  c->r[3]=0u+0x00000005u; // 8004B6D0
  c->lr=0x8004B6D8u; f_8004B0C0(c); // 8004B6D4
  c->lr=0x8004B6DCu; f_8004C780(c); // 8004B6D8
  c->lr=0x8004B6E0u; f_80047100(c); // 8004B6DC
  c->lr=0x8004B6E4u; f_8004C740(c); // 8004B6E0
  c->lr=0x8004B6E8u; f_8005E950(c); // 8004B6E4
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B6E8
  cmps(c,0,(int32_t)c->r[0],0); // 8004B6EC
  if (!crb(c,2)) { goto L_8004B700; } // 8004B6F0
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B6F4
  cmps(c,0,(int32_t)c->r[0],0); // 8004B6F8
  if (crb(c,2)) { goto L_8004B704; } // 8004B6FC
L_8004B700:;
  c->lr=0x8004B704u; f_8004E340(c); // 8004B700
L_8004B704:;
  c->lr=0x8004B708u; f_8004E4E0(c); // 8004B704
  c->r[3]=c->r[30]+0x00000000u; // 8004B708
  c->r[5]=c->r[30]+0x0000000Cu; // 8004B70C
  c->r[4]=0u+0x0000040Au; // 8004B710
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B714
  c->lr=0x8004B71Cu; f_80045D00(c); // 8004B718
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004B71C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8004B720
  c->r[30]=R32(c->r[1]+0x00000088u); // 8004B724
  c->r[29]=R32(c->r[1]+0x00000084u); // 8004B728
  c->lr=c->r[0]; // 8004B72C
  c->r[1]=c->r[1]+0x00000090u; // 8004B730
  return; // 8004B734
}

// OSReturnToMenu
void f_8004B740(Ctx* __restrict c) {
  trace_call(0x8004B740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B740
  c->r[0]=c->lr; // 8004B744
  c->r[3]=0u+0x00000000u; // 8004B748
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B74C
  c->lr=0x8004B754u; f_8004B4B0(c); // 8004B750
  c->r[3]=0u+0x80140000u; // 8004B754
  c->r[5]=0u+0x80140000u; // 8004B758
  c->r[3]=c->r[3]+0xFFFF9250u; // 8004B75C
  c->r[4]=0u+0x0000037Fu; // 8004B760
  c->r[5]=c->r[5]+0xFFFF92BCu; // 8004B764
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B768
  c->lr=0x8004B770u; f_80045D00(c); // 8004B76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B770
  c->lr=c->r[0]; // 8004B774
  c->r[1]=c->r[1]+0x00000010u; // 8004B778
  return; // 8004B77C
}

// fn_8004B780
void f_8004B780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B780
  c->r[0]=c->lr; // 8004B784
  c->r[3]=0u+0x00000001u; // 8004B788
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B78C
  c->lr=0x8004B794u; f_8004B4B0(c); // 8004B790
  c->r[3]=0u+0x80140000u; // 8004B794
  c->r[5]=0u+0x80140000u; // 8004B798
  c->r[3]=c->r[3]+0xFFFF9250u; // 8004B79C
  c->r[4]=0u+0x00000391u; // 8004B7A0
  c->r[5]=c->r[5]+0xFFFF92ECu; // 8004B7A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B7A8
  c->lr=0x8004B7B0u; f_80045D00(c); // 8004B7AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B7B0
  c->lr=c->r[0]; // 8004B7B4
  c->r[1]=c->r[1]+0x00000010u; // 8004B7B8
  return; // 8004B7BC
}

// __OSReturnToMenuForError
void f_8004B7C0(Ctx* __restrict c) {
  trace_call(0x8004B7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B7C0
  c->r[0]=c->lr; // 8004B7C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004B7C8
  c->r[3]=c->r[1]+0x00000008u; // 8004B7CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004B7D0
  c->r[31]=0u+0x80140000u; // 8004B7D4
  c->r[31]=c->r[31]+0xFFFF9250u; // 8004B7D8
  c->lr=0x8004B7E0u; f_8004F080(c); // 8004B7DC
  c->r[3]=0u+0x00000002u; // 8004B7E0
  c->r[0]=0u+0x00000003u; // 8004B7E4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 8004B7E8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8004B7EC
  c->lr=0x8004B7F4u; f_8004C2C0(c); // 8004B7F0
  c->r[3]=c->r[1]+0x00000008u; // 8004B7F4
  c->lr=0x8004B7FCu; f_8004EF90(c); // 8004B7F8
  c->lr=0x8004B800u; f_80047100(c); // 8004B7FC
  c->lr=0x8004B804u; f_8004C740(c); // 8004B800
  c->lr=0x8004B808u; f_8005E950(c); // 8004B804
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B808
  cmps(c,0,(int32_t)c->r[0],0); // 8004B80C
  if (!crb(c,2)) { goto L_8004B820; } // 8004B810
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B814
  cmps(c,0,(int32_t)c->r[0],0); // 8004B818
  if (crb(c,2)) { goto L_8004B824; } // 8004B81C
L_8004B820:;
  c->lr=0x8004B824u; f_8004E340(c); // 8004B820
L_8004B824:;
  c->lr=0x8004B828u; f_8004E4E0(c); // 8004B824
  c->r[3]=c->r[31]+0x00000000u; // 8004B828
  c->r[5]=c->r[31]+0x0000000Cu; // 8004B82C
  c->r[4]=0u+0x0000040Au; // 8004B830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B834
  c->lr=0x8004B83Cu; f_80045D00(c); // 8004B838
  c->r[3]=c->r[31]+0x00000000u; // 8004B83C
  c->r[5]=c->r[31]+0x00000038u; // 8004B840
  c->r[4]=0u+0x000003F2u; // 8004B844
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B848
  c->lr=0x8004B850u; f_80045D00(c); // 8004B84C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004B850
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004B854
  c->lr=c->r[0]; // 8004B858
  c->r[1]=c->r[1]+0x00000030u; // 8004B85C
  return; // 8004B860
}

// __OSHotResetForError
void f_8004B870(Ctx* __restrict c) {
  trace_call(0x8004B870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B870
  c->r[0]=c->lr; // 8004B874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B878
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 8004B87C
  cmps(c,0,(int32_t)c->r[0],0); // 8004B880
  if (!crb(c,2)) { goto L_8004B894; } // 8004B884
  c->r[0]=R32(c->r[13]+0xFFFF8B0Cu); // 8004B888
  cmps(c,0,(int32_t)c->r[0],0); // 8004B88C
  if (crb(c,2)) { goto L_8004B898; } // 8004B890
L_8004B894:;
  c->lr=0x8004B898u; f_8004E340(c); // 8004B894
L_8004B898:;
  c->lr=0x8004B89Cu; f_8004E4E0(c); // 8004B898
  c->r[3]=0u+0x80140000u; // 8004B89C
  c->r[5]=0u+0x80140000u; // 8004B8A0
  c->r[3]=c->r[3]+0xFFFF9250u; // 8004B8A4
  c->r[4]=0u+0x0000040Au; // 8004B8A8
  c->r[5]=c->r[5]+0xFFFF925Cu; // 8004B8AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B8B0
  c->lr=0x8004B8B8u; f_80045D00(c); // 8004B8B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B8B8
  c->lr=c->r[0]; // 8004B8BC
  c->r[1]=c->r[1]+0x00000010u; // 8004B8C0
  return; // 8004B8C4
}

// OSGetResetCode
void f_8004B8D0(Ctx* __restrict c) {
  trace_call(0x8004B8D0u);
  c->r[3]=0u+0x801A0000u; // 8004B8D0
  c->r[0]=R32(c->r[3]+0xFFFFA660u); // 8004B8D4
  cmps(c,0,(int32_t)c->r[0],0); // 8004B8D8
  if (crb(c,2)) { goto L_8004B8F0; } // 8004B8DC
  c->r[3]=c->r[3]+0xFFFFA660u; // 8004B8E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8004B8E4
  c->r[3]=c->r[0]|0x80000000u; // 8004B8E8
  return; // 8004B8EC
L_8004B8F0:;
  c->r[3]=0u+0xCC000000u; // 8004B8F0
  c->r[0]=R32(c->r[3]+0x00003024u); // 8004B8F4
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8004B8F8
  return; // 8004B8FC
}

// OSResetSystem
void f_8004B900(Ctx* __restrict c) {
  trace_call(0x8004B900u);
  c->r[3]=0u+0x80140000u; // 8004B900
  c->r[5]=0u+0x80140000u; // 8004B904
  c->r[3]=c->r[3]+0xFFFF9250u; // 8004B908
  c->r[4]=0u+0x000004A1u; // 8004B90C
  c->r[5]=c->r[5]+0xFFFF943Cu; // 8004B910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B914
  f_80045D00(c); return; // 8004B918
}

// WriteSramCallback
void f_8004B920(Ctx* __restrict c) {
  trace_call(0x8004B920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B920
  c->r[0]=c->lr; // 8004B924
  c->r[6]=0u+0x801A0000u; // 8004B928
  c->r[5]=0u+0x80050000u; // 8004B92C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B930
  c->r[6]=c->r[6]+0xFFFFAA20u; // 8004B934
  c->r[3]=0u+0x00000000u; // 8004B938
  c->r[5]=c->r[5]+0xFFFFB920u; // 8004B93C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004B940
  c->r[4]=0u+0x00000001u; // 8004B944
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004B948
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004B94C
  c->r[31]=R32(c->r[6]+0x00000040u); // 8004B950
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 8004B954
  c->r[30]=c->r[6]+c->r[31]; // 8004B958
  c->lr=0x8004B960u; f_8007A3D0(c); // 8004B95C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B960
  if (!crb(c,2)) { goto L_8004B970; } // 8004B964
  c->r[0]=0u+0x00000000u; // 8004B968
  goto L_8004BA20; // 8004B96C
L_8004B970:;
  c->r[3]=0u+0x00000000u; // 8004B970
  c->r[4]=0u+0x00000001u; // 8004B974
  c->r[5]=0u+0x00000003u; // 8004B978
  c->lr=0x8004B980u; f_80079C20(c); // 8004B97C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B980
  if (!crb(c,2)) { goto L_8004B998; } // 8004B984
  c->r[3]=0u+0x00000000u; // 8004B988
  c->lr=0x8004B990u; f_8007A4D0(c); // 8004B98C
  c->r[0]=0u+0x00000000u; // 8004B990
  goto L_8004BA20; // 8004B994
L_8004B998:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8004B998
  c->r[4]=c->r[1]+0x00000008u; // 8004B99C
  c->r[0]=c->r[3]+0x00000100u; // 8004B9A0
  c->r[5]=0u+0x00000004u; // 8004B9A4
  c->r[0]=c->r[0]|0xA0000000u; // 8004B9A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004B9AC
  c->r[3]=0u+0x00000000u; // 8004B9B0
  c->r[6]=0u+0x00000001u; // 8004B9B4
  c->r[7]=0u+0x00000000u; // 8004B9B8
  c->lr=0x8004B9C0u; f_80079180(c); // 8004B9BC
  c->r[0]=cntlz(c->r[3]); // 8004B9C0
  c->r[3]=0u+0x00000000u; // 8004B9C4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B9C8
  c->lr=0x8004B9D0u; f_800795B0(c); // 8004B9CC
  c->r[0]=cntlz(c->r[3]); // 8004B9D0
  c->r[4]=c->r[30]|c->r[30]; // 8004B9D4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B9D8
  c->r[5]=c->r[29]|c->r[29]; // 8004B9DC
  c->r[29]=c->r[31]|c->r[0]; // 8004B9E0
  c->r[3]=0u+0x00000000u; // 8004B9E4
  c->r[6]=0u+0x00000001u; // 8004B9E8
  c->lr=0x8004B9F0u; f_80079400(c); // 8004B9EC
  c->r[0]=cntlz(c->r[3]); // 8004B9F0
  c->r[3]=0u+0x00000000u; // 8004B9F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B9F8
  c->r[29]=c->r[29]|c->r[0]; // 8004B9FC
  c->lr=0x8004BA04u; f_80079D50(c); // 8004BA00
  c->r[0]=cntlz(c->r[3]); // 8004BA04
  c->r[3]=0u+0x00000000u; // 8004BA08
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BA0C
  c->r[29]=c->r[29]|c->r[0]; // 8004BA10
  c->lr=0x8004BA18u; f_8007A4D0(c); // 8004BA14
  c->r[0]=cntlz(c->r[29]); // 8004BA18
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BA1C
L_8004BA20:;
  c->r[3]=0u+0x801A0000u; // 8004BA20
  cmps(c,0,(int32_t)c->r[0],0); // 8004BA24
  c->r[3]=c->r[3]+0xFFFFAA20u; // 8004BA28
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8004BA2C
  if (crb(c,2)) { goto L_8004BA3C; } // 8004BA30
  c->r[0]=0u+0x00000040u; // 8004BA34
  W32(c->r[3]+0x00000040u,c->r[0]); // 8004BA38
L_8004BA3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BA3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004BA40
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004BA44
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004BA48
  c->lr=c->r[0]; // 8004BA4C
  c->r[1]=c->r[1]+0x00000020u; // 8004BA50
  return; // 8004BA54
}

// __OSInitSram
void f_8004BA60(Ctx* __restrict c) {
  trace_call(0x8004BA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BA60
  c->r[0]=c->lr; // 8004BA64
  c->r[4]=0u+0x00000040u; // 8004BA68
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004BA6C
  c->r[0]=0u+0x00000000u; // 8004BA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004BA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004BA78
  c->r[30]=0u+0x801A0000u; // 8004BA7C
  c->r[30]=c->r[30]+0xFFFFAA20u; // 8004BA80
  W32(c->r[30]+0x00000044u,c->r[0]); // 8004BA84
  c->r[3]=c->r[30]|c->r[30]; // 8004BA88
  W32(c->r[30]+0x00000048u,c->r[0]); // 8004BA8C
  c->lr=0x8004BA94u; f_80044FE0(c); // 8004BA90
  c->r[3]=0u+0x00000000u; // 8004BA94
  c->r[4]=0u+0x00000001u; // 8004BA98
  c->r[5]=0u+0x00000000u; // 8004BA9C
  c->lr=0x8004BAA4u; f_8007A3D0(c); // 8004BAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8004BAA4
  if (!crb(c,2)) { goto L_8004BAB4; } // 8004BAA8
  c->r[3]=0u+0x00000000u; // 8004BAAC
  goto L_8004BB78; // 8004BAB0
L_8004BAB4:;
  c->r[3]=0u+0x00000000u; // 8004BAB4
  c->r[4]=0u+0x00000001u; // 8004BAB8
  c->r[5]=0u+0x00000003u; // 8004BABC
  c->lr=0x8004BAC4u; f_80079C20(c); // 8004BAC0
  cmps(c,0,(int32_t)c->r[3],0); // 8004BAC4
  if (!crb(c,2)) { goto L_8004BADC; } // 8004BAC8
  c->r[3]=0u+0x00000000u; // 8004BACC
  c->lr=0x8004BAD4u; f_8007A4D0(c); // 8004BAD0
  c->r[3]=0u+0x00000000u; // 8004BAD4
  goto L_8004BB78; // 8004BAD8
L_8004BADC:;
  c->r[3]=0u+0x20000000u; // 8004BADC
  c->r[4]=c->r[1]+0x00000008u; // 8004BAE0
  c->r[0]=c->r[3]+0x00000100u; // 8004BAE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004BAE8
  c->r[3]=0u+0x00000000u; // 8004BAEC
  c->r[5]=0u+0x00000004u; // 8004BAF0
  c->r[6]=0u+0x00000001u; // 8004BAF4
  c->r[7]=0u+0x00000000u; // 8004BAF8
  c->lr=0x8004BB00u; f_80079180(c); // 8004BAFC
  c->r[0]=cntlz(c->r[3]); // 8004BB00
  c->r[3]=0u+0x00000000u; // 8004BB04
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB08
  c->lr=0x8004BB10u; f_800795B0(c); // 8004BB0C
  c->r[0]=cntlz(c->r[3]); // 8004BB10
  c->r[4]=c->r[30]|c->r[30]; // 8004BB14
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB18
  c->r[3]=0u+0x00000000u; // 8004BB1C
  c->r[30]=c->r[31]|c->r[0]; // 8004BB20
  c->r[5]=0u+0x00000040u; // 8004BB24
  c->r[6]=0u+0x00000000u; // 8004BB28
  c->r[7]=0u+0x00000000u; // 8004BB2C
  c->lr=0x8004BB34u; f_800794B0(c); // 8004BB30
  c->r[0]=cntlz(c->r[3]); // 8004BB34
  c->r[3]=0u+0x00000000u; // 8004BB38
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB3C
  c->r[30]=c->r[30]|c->r[0]; // 8004BB40
  c->lr=0x8004BB48u; f_800795B0(c); // 8004BB44
  c->r[0]=cntlz(c->r[3]); // 8004BB48
  c->r[3]=0u+0x00000000u; // 8004BB4C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB50
  c->r[30]=c->r[30]|c->r[0]; // 8004BB54
  c->lr=0x8004BB5Cu; f_80079D50(c); // 8004BB58
  c->r[0]=cntlz(c->r[3]); // 8004BB5C
  c->r[3]=0u+0x00000000u; // 8004BB60
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB64
  c->r[30]=c->r[30]|c->r[0]; // 8004BB68
  c->lr=0x8004BB70u; f_8007A4D0(c); // 8004BB6C
  c->r[0]=cntlz(c->r[30]); // 8004BB70
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BB74
L_8004BB78:;
  c->r[31]=0u+0x801A0000u; // 8004BB78
  c->r[0]=0u+0x00000040u; // 8004BB7C
  c->r[31]=c->r[31]+0xFFFFAA20u; // 8004BB80
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8004BB84
  W32(c->r[31]+0x00000040u,c->r[0]); // 8004BB88
  c->lr=0x8004BB90u; f_80049A20(c); // 8004BB8C
  c->r[0]=R32(c->r[31]+0x00000048u); // 8004BB90
  cmps(c,0,(int32_t)c->r[0],0); // 8004BB94
  if (crb(c,2)) { goto L_8004BBA8; } // 8004BB98
  c->lr=0x8004BBA0u; f_80049A60(c); // 8004BB9C
  c->r[3]=0u+0x00000000u; // 8004BBA0
  goto L_8004BBB8; // 8004BBA4
L_8004BBA8:;
  c->r[0]=0u+0x00000001u; // 8004BBA8
  W32(c->r[31]+0x00000044u,c->r[3]); // 8004BBAC
  c->r[3]=c->r[31]+0x00000014u; // 8004BBB0
  W32(c->r[31]+0x00000048u,c->r[0]); // 8004BBB4
L_8004BBB8:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 8004BBB8
  c->r[3]=0u+0x00000000u; // 8004BBBC
  c->r[4]=0u+0x00000014u; // 8004BBC0
  c->lr=0x8004BBC8u; f_8004BC60(c); // 8004BBC4
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 8004BBC8
  cmpu(c,0,c->r[0],0x00005000u); // 8004BBCC
  if (crb(c,2)) { goto L_8004BBE0; } // 8004BBD0
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 8004BBD4
  cmpu(c,0,c->r[0],0x000000C0u); // 8004BBD8
  if (!crb(c,2)) { goto L_8004BBE4; } // 8004BBDC
L_8004BBE0:;
  c->r[30]=0u+0x00000000u; // 8004BBE0
L_8004BBE4:;
  c->lr=0x8004BBE8u; f_80049A20(c); // 8004BBE4
  c->r[4]=0u+0x801A0000u; // 8004BBE8
  c->r[4]=c->r[4]+0xFFFFAA20u; // 8004BBEC
  c->r[0]=R32(c->r[4]+0x00000048u); // 8004BBF0
  cmps(c,0,(int32_t)c->r[0],0); // 8004BBF4
  if (crb(c,2)) { goto L_8004BC08; } // 8004BBF8
  c->lr=0x8004BC00u; f_80049A60(c); // 8004BBFC
  c->r[5]=0u+0x00000000u; // 8004BC00
  goto L_8004BC18; // 8004BC04
L_8004BC08:;
  c->r[0]=0u+0x00000001u; // 8004BC08
  W32(c->r[4]+0x00000044u,c->r[3]); // 8004BC0C
  c->r[5]=c->r[4]+0x00000014u; // 8004BC10
  W32(c->r[4]+0x00000048u,c->r[0]); // 8004BC14
L_8004BC18:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 8004BC18
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8004BC1C
  cmpu(c,0,c->r[3],c->r[0]); // 8004BC20
  if (!crb(c,2)) { goto L_8004BC38; } // 8004BC24
  c->r[3]=0u+0x00000000u; // 8004BC28
  c->r[4]=0u+0x00000014u; // 8004BC2C
  c->lr=0x8004BC34u; f_8004BC60(c); // 8004BC30
  goto L_8004BC48; // 8004BC34
L_8004BC38:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 8004BC38
  c->r[3]=0u+0x00000001u; // 8004BC3C
  c->r[4]=0u+0x00000014u; // 8004BC40
  c->lr=0x8004BC48u; f_8004BC60(c); // 8004BC44
L_8004BC48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BC48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004BC4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004BC50
  c->lr=c->r[0]; // 8004BC54
  c->r[1]=c->r[1]+0x00000020u; // 8004BC58
  return; // 8004BC5C
}

// UnlockSram
void f_8004BC60(Ctx* __restrict c) {
  trace_call(0x8004BC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BC60
  c->r[0]=c->lr; // 8004BC64
  cmps(c,0,(int32_t)c->r[3],0); // 8004BC68
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004BC6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004BC70
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004BC74
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004BC78
  if (crb(c,2)) { goto L_8004BF08; } // 8004BC7C
  cmps(c,0,(int32_t)c->r[4],0); // 8004BC80
  if (!crb(c,2)) { goto L_8004BDB4; } // 8004BC84
  c->r[8]=0u+0x801A0000u; // 8004BC88
  c->r[8]=c->r[8]+0xFFFFAA20u; // 8004BC8C
  c->r[3]=R8(c->r[8]+0x00000013u); // 8004BC90
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 8004BC94
  cmpu(c,0,c->r[0],0x00000002u); // 8004BC98
  if (!crb(c,1)) { goto L_8004BCA8; } // 8004BC9C
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 8004BCA0
  W8(c->r[8]+0x00000013u,c->r[0]); // 8004BCA4
L_8004BCA8:;
  c->r[3]=0u+0x801A0000u; // 8004BCA8
  c->r[0]=0u+0x00000000u; // 8004BCAC
  c->r[3]=c->r[3]+0xFFFFAA20u; // 8004BCB0
  c->r[7]=c->r[8]+0x0000000Cu; // 8004BCB4
  c->r[5]=c->r[3]+0x00000014u; // 8004BCB8
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BCBC
  c->r[3]=c->r[5]+0x00000001u; // 8004BCC0
  c->r[3]=c->r[3]-c->r[7]; // 8004BCC4
  cmpu(c,0,c->r[7],c->r[5]); // 8004BCC8
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BCCC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8004BCD0
  if (!crb(c,0)) { goto L_8004BDB4; } // 8004BCD4
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8004BCD8
  c->ctr=c->r[0]; // 8004BCDC
  if (crb(c,2)) { goto L_8004BD84; } // 8004BCE0
L_8004BCE4:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 8004BCE4
  c->r[0]=R16(c->r[7]+0x00000000u); // 8004BCE8
  c->r[5]=R16(c->r[8]+0x00000002u); // 8004BCEC
  c->r[0]=c->r[6]+c->r[0]; // 8004BCF0
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BCF4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BCF8
  c->r[0]=R16(c->r[7]+0x00000000u); // 8004BCFC
  c->r[0]=~(c->r[0]|c->r[0]); // 8004BD00
  c->r[0]=c->r[5]+c->r[0]; // 8004BD04
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BD08
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BD0C
  c->r[0]=R16(c->r[7]+0x00000002u); // 8004BD10
  c->r[0]=c->r[6]+c->r[0]; // 8004BD14
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BD18
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BD1C
  c->r[0]=R16(c->r[7]+0x00000002u); // 8004BD20
  c->r[0]=~(c->r[0]|c->r[0]); // 8004BD24
  c->r[0]=c->r[5]+c->r[0]; // 8004BD28
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BD2C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BD30
  c->r[0]=R16(c->r[7]+0x00000004u); // 8004BD34
  c->r[0]=c->r[6]+c->r[0]; // 8004BD38
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BD3C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BD40
  c->r[0]=R16(c->r[7]+0x00000004u); // 8004BD44
  c->r[0]=~(c->r[0]|c->r[0]); // 8004BD48
  c->r[0]=c->r[5]+c->r[0]; // 8004BD4C
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BD50
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8004BD54
  c->r[0]=R16(c->r[7]+0x00000006u); // 8004BD58
  c->r[0]=c->r[6]+c->r[0]; // 8004BD5C
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BD60
  c->r[0]=R16(c->r[7]+0x00000006u); // 8004BD64
  c->r[7]=c->r[7]+0x00000008u; // 8004BD68
  c->r[0]=~(c->r[0]|c->r[0]); // 8004BD6C
  c->r[0]=c->r[5]+c->r[0]; // 8004BD70
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BD74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004BCE4; } // 8004BD78
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8004BD7C
  if (crb(c,2)) { goto L_8004BDB4; } // 8004BD80
L_8004BD84:;
  c->ctr=c->r[3]; // 8004BD84
L_8004BD88:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 8004BD88
  c->r[0]=R16(c->r[7]+0x00000000u); // 8004BD8C
  c->r[5]=R16(c->r[8]+0x00000002u); // 8004BD90
  c->r[0]=c->r[6]+c->r[0]; // 8004BD94
  W16(c->r[8]+0x00000000u,c->r[0]); // 8004BD98
  c->r[0]=R16(c->r[7]+0x00000000u); // 8004BD9C
  c->r[7]=c->r[7]+0x00000002u; // 8004BDA0
  c->r[0]=~(c->r[0]|c->r[0]); // 8004BDA4
  c->r[0]=c->r[5]+c->r[0]; // 8004BDA8
  W16(c->r[8]+0x00000002u,c->r[0]); // 8004BDAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004BD88; } // 8004BDB0
L_8004BDB4:;
  c->r[3]=0u+0x801A0000u; // 8004BDB4
  c->r[3]=c->r[3]+0xFFFFAA20u; // 8004BDB8
  c->r[0]=R32(c->r[3]+0x00000040u); // 8004BDBC
  cmpu(c,0,c->r[4],c->r[0]); // 8004BDC0
  if (!crb(c,0)) { goto L_8004BDCC; } // 8004BDC4
  W32(c->r[3]+0x00000040u,c->r[4]); // 8004BDC8
L_8004BDCC:;
  c->r[4]=0u+0x801A0000u; // 8004BDCC
  c->r[4]=c->r[4]+0xFFFFAA20u; // 8004BDD0
  c->r[0]=R32(c->r[4]+0x00000040u); // 8004BDD4
  cmpu(c,0,c->r[0],0x00000014u); // 8004BDD8
  if (crb(c,1)) { goto L_8004BE04; } // 8004BDDC
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 8004BDE0
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 8004BDE4
  cmpu(c,0,c->r[0],0x00005000u); // 8004BDE8
  if (crb(c,2)) { goto L_8004BDFC; } // 8004BDEC
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 8004BDF0
  cmpu(c,0,c->r[0],0x000000C0u); // 8004BDF4
  if (!crb(c,2)) { goto L_8004BE04; } // 8004BDF8
L_8004BDFC:;
  c->r[0]=0u+0x00000000u; // 8004BDFC
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 8004BE00
L_8004BE04:;
  c->r[6]=0u+0x801A0000u; // 8004BE04
  c->r[5]=0u+0x80050000u; // 8004BE08
  c->r[6]=c->r[6]+0xFFFFAA20u; // 8004BE0C
  c->r[3]=0u+0x00000000u; // 8004BE10
  c->r[31]=R32(c->r[6]+0x00000040u); // 8004BE14
  c->r[5]=c->r[5]+0xFFFFB920u; // 8004BE18
  c->r[4]=0u+0x00000001u; // 8004BE1C
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 8004BE20
  c->r[30]=c->r[6]+c->r[31]; // 8004BE24
  c->lr=0x8004BE2Cu; f_8007A3D0(c); // 8004BE28
  cmps(c,0,(int32_t)c->r[3],0); // 8004BE2C
  if (!crb(c,2)) { goto L_8004BE3C; } // 8004BE30
  c->r[0]=0u+0x00000000u; // 8004BE34
  goto L_8004BEEC; // 8004BE38
L_8004BE3C:;
  c->r[3]=0u+0x00000000u; // 8004BE3C
  c->r[4]=0u+0x00000001u; // 8004BE40
  c->r[5]=0u+0x00000003u; // 8004BE44
  c->lr=0x8004BE4Cu; f_80079C20(c); // 8004BE48
  cmps(c,0,(int32_t)c->r[3],0); // 8004BE4C
  if (!crb(c,2)) { goto L_8004BE64; } // 8004BE50
  c->r[3]=0u+0x00000000u; // 8004BE54
  c->lr=0x8004BE5Cu; f_8007A4D0(c); // 8004BE58
  c->r[0]=0u+0x00000000u; // 8004BE5C
  goto L_8004BEEC; // 8004BE60
L_8004BE64:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8004BE64
  c->r[4]=c->r[1]+0x00000008u; // 8004BE68
  c->r[0]=c->r[3]+0x00000100u; // 8004BE6C
  c->r[5]=0u+0x00000004u; // 8004BE70
  c->r[0]=c->r[0]|0xA0000000u; // 8004BE74
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004BE78
  c->r[3]=0u+0x00000000u; // 8004BE7C
  c->r[6]=0u+0x00000001u; // 8004BE80
  c->r[7]=0u+0x00000000u; // 8004BE84
  c->lr=0x8004BE8Cu; f_80079180(c); // 8004BE88
  c->r[0]=cntlz(c->r[3]); // 8004BE8C
  c->r[3]=0u+0x00000000u; // 8004BE90
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BE94
  c->lr=0x8004BE9Cu; f_800795B0(c); // 8004BE98
  c->r[0]=cntlz(c->r[3]); // 8004BE9C
  c->r[4]=c->r[30]|c->r[30]; // 8004BEA0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BEA4
  c->r[5]=c->r[29]|c->r[29]; // 8004BEA8
  c->r[29]=c->r[31]|c->r[0]; // 8004BEAC
  c->r[3]=0u+0x00000000u; // 8004BEB0
  c->r[6]=0u+0x00000001u; // 8004BEB4
  c->lr=0x8004BEBCu; f_80079400(c); // 8004BEB8
  c->r[0]=cntlz(c->r[3]); // 8004BEBC
  c->r[3]=0u+0x00000000u; // 8004BEC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BEC4
  c->r[29]=c->r[29]|c->r[0]; // 8004BEC8
  c->lr=0x8004BED0u; f_80079D50(c); // 8004BECC
  c->r[0]=cntlz(c->r[3]); // 8004BED0
  c->r[3]=0u+0x00000000u; // 8004BED4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BED8
  c->r[29]=c->r[29]|c->r[0]; // 8004BEDC
  c->lr=0x8004BEE4u; f_8007A4D0(c); // 8004BEE0
  c->r[0]=cntlz(c->r[29]); // 8004BEE4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BEE8
L_8004BEEC:;
  c->r[3]=0u+0x801A0000u; // 8004BEEC
  cmps(c,0,(int32_t)c->r[0],0); // 8004BEF0
  c->r[3]=c->r[3]+0xFFFFAA20u; // 8004BEF4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8004BEF8
  if (crb(c,2)) { goto L_8004BF08; } // 8004BEFC
  c->r[0]=0u+0x00000040u; // 8004BF00
  W32(c->r[3]+0x00000040u,c->r[0]); // 8004BF04
L_8004BF08:;
  c->r[31]=0u+0x801A0000u; // 8004BF08
  c->r[0]=0u+0x00000000u; // 8004BF0C
  c->r[31]=c->r[31]+0xFFFFAA20u; // 8004BF10
  W32(c->r[31]+0x00000048u,c->r[0]); // 8004BF14
  c->r[3]=R32(c->r[31]+0x00000044u); // 8004BF18
  c->lr=0x8004BF20u; f_80049A60(c); // 8004BF1C
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 8004BF20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004BF24
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004BF28
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004BF2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BF30
  c->lr=c->r[0]; // 8004BF34
  c->r[1]=c->r[1]+0x00000020u; // 8004BF38
  return; // 8004BF3C
}

// __OSSyncSram
void f_8004BF40(Ctx* __restrict c) {
  trace_call(0x8004BF40u);
  c->r[3]=0u+0x801A0000u; // 8004BF40
  c->r[3]=c->r[3]+0xFFFFAA20u; // 8004BF44
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8004BF48
  return; // 8004BF4C
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_8004BF50(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_8004C080(Ctx* __restrict c) {
  trace_call(0x8004C080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C080
  c->r[0]=c->lr; // 8004C084
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C08C
  c->r[31]=c->r[3]|c->r[3]; // 8004C090
  c->lr=0x8004C098u; f_80049A20(c); // 8004C094
  c->r[4]=0u+0x801A0000u; // 8004C098
  c->r[4]=c->r[4]+0xFFFFAA20u; // 8004C09C
  c->r[0]=R32(c->r[4]+0x00000048u); // 8004C0A0
  cmps(c,0,(int32_t)c->r[0],0); // 8004C0A4
  if (crb(c,2)) { goto L_8004C0B8; } // 8004C0A8
  c->lr=0x8004C0B0u; f_80049A60(c); // 8004C0AC
  c->r[5]=0u+0x00000000u; // 8004C0B0
  goto L_8004C0C8; // 8004C0B4
L_8004C0B8:;
  c->r[0]=0u+0x00000001u; // 8004C0B8
  W32(c->r[4]+0x00000044u,c->r[3]); // 8004C0BC
  c->r[5]=c->r[4]+0x00000014u; // 8004C0C0
  W32(c->r[4]+0x00000048u,c->r[0]); // 8004C0C4
L_8004C0C8:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 8004C0C8
  c->r[3]=0u+0x00000000u; // 8004C0CC
  c->r[5]=c->r[5]+c->r[0]; // 8004C0D0
  c->r[4]=0u+0x00000014u; // 8004C0D4
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 8004C0D8
  c->lr=0x8004C0E0u; f_8004BC60(c); // 8004C0DC
  c->r[3]=c->r[31]|c->r[31]; // 8004C0E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C0E8
  c->lr=c->r[0]; // 8004C0EC
  c->r[1]=c->r[1]+0x00000010u; // 8004C0F0
  return; // 8004C0F4
}

// OSSetWirelessID
void f_8004C100(Ctx* __restrict c) {
  trace_call(0x8004C100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C100
  c->r[0]=c->lr; // 8004C104
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C10C
  c->r[31]=c->r[4]|c->r[4]; // 8004C110
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004C114
  c->r[30]=c->r[3]|c->r[3]; // 8004C118
  c->lr=0x8004C120u; f_80049A20(c); // 8004C11C
  c->r[4]=0u+0x801A0000u; // 8004C120
  c->r[4]=c->r[4]+0xFFFFAA20u; // 8004C124
  c->r[0]=R32(c->r[4]+0x00000048u); // 8004C128
  cmps(c,0,(int32_t)c->r[0],0); // 8004C12C
  if (crb(c,2)) { goto L_8004C140; } // 8004C130
  c->lr=0x8004C138u; f_80049A60(c); // 8004C134
  c->r[3]=0u+0x00000000u; // 8004C138
  goto L_8004C150; // 8004C13C
L_8004C140:;
  c->r[0]=0u+0x00000001u; // 8004C140
  W32(c->r[4]+0x00000044u,c->r[3]); // 8004C144
  c->r[3]=c->r[4]+0x00000014u; // 8004C148
  W32(c->r[4]+0x00000048u,c->r[0]); // 8004C14C
L_8004C150:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 8004C150
  c->r[3]=c->r[3]+c->r[0]; // 8004C154
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 8004C158
  cmpu(c,0,c->r[31],c->r[0]); // 8004C15C
  if (crb(c,2)) { goto L_8004C178; } // 8004C160
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 8004C164
  c->r[3]=0u+0x00000001u; // 8004C168
  c->r[4]=0u+0x00000014u; // 8004C16C
  c->lr=0x8004C174u; f_8004BC60(c); // 8004C170
  goto L_8004C184; // 8004C174
L_8004C178:;
  c->r[3]=0u+0x00000000u; // 8004C178
  c->r[4]=0u+0x00000014u; // 8004C17C
  c->lr=0x8004C184u; f_8004BC60(c); // 8004C180
L_8004C184:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C188
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004C18C
  c->lr=c->r[0]; // 8004C190
  c->r[1]=c->r[1]+0x00000010u; // 8004C194
  return; // 8004C198
}

// __OSGetRTCFlags
void f_8004C1A0(Ctx* __restrict c) {
  trace_call(0x8004C1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C1A0
  c->r[0]=c->lr; // 8004C1A4
  c->r[4]=0u+0x00000001u; // 8004C1A8
  c->r[5]=0u+0x00000000u; // 8004C1AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C1B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004C1B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004C1B8
  c->r[30]=c->r[3]|c->r[3]; // 8004C1BC
  c->r[3]=0u+0x00000000u; // 8004C1C0
  c->lr=0x8004C1C8u; f_8007A3D0(c); // 8004C1C4
  cmps(c,0,(int32_t)c->r[3],0); // 8004C1C8
  if (!crb(c,2)) { goto L_8004C1D8; } // 8004C1CC
  c->r[3]=0u+0x00000000u; // 8004C1D0
  goto L_8004C2A4; // 8004C1D4
L_8004C1D8:;
  c->r[3]=0u+0x00000000u; // 8004C1D8
  c->r[4]=0u+0x00000001u; // 8004C1DC
  c->r[5]=0u+0x00000003u; // 8004C1E0
  c->lr=0x8004C1E8u; f_80079C20(c); // 8004C1E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004C1E8
  if (!crb(c,2)) { goto L_8004C200; } // 8004C1EC
  c->r[3]=0u+0x00000000u; // 8004C1F0
  c->lr=0x8004C1F8u; f_8007A4D0(c); // 8004C1F4
  c->r[3]=0u+0x00000000u; // 8004C1F8
  goto L_8004C2A4; // 8004C1FC
L_8004C200:;
  c->r[3]=0u+0x21000000u; // 8004C200
  c->r[4]=c->r[1]+0x00000008u; // 8004C204
  c->r[0]=c->r[3]+0x00000800u; // 8004C208
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004C20C
  c->r[3]=0u+0x00000000u; // 8004C210
  c->r[5]=0u+0x00000004u; // 8004C214
  c->r[6]=0u+0x00000001u; // 8004C218
  c->r[7]=0u+0x00000000u; // 8004C21C
  c->lr=0x8004C224u; f_80079180(c); // 8004C220
  c->r[0]=cntlz(c->r[3]); // 8004C224
  c->r[3]=0u+0x00000000u; // 8004C228
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C22C
  c->lr=0x8004C234u; f_800795B0(c); // 8004C230
  c->r[0]=cntlz(c->r[3]); // 8004C234
  c->r[4]=c->r[1]+0x00000008u; // 8004C238
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C23C
  c->r[3]=0u+0x00000000u; // 8004C240
  c->r[31]=c->r[31]|c->r[0]; // 8004C244
  c->r[5]=0u+0x00000004u; // 8004C248
  c->r[6]=0u+0x00000000u; // 8004C24C
  c->r[7]=0u+0x00000000u; // 8004C250
  c->lr=0x8004C258u; f_80079180(c); // 8004C254
  c->r[0]=cntlz(c->r[3]); // 8004C258
  c->r[3]=0u+0x00000000u; // 8004C25C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C260
  c->r[31]=c->r[31]|c->r[0]; // 8004C264
  c->lr=0x8004C26Cu; f_800795B0(c); // 8004C268
  c->r[0]=cntlz(c->r[3]); // 8004C26C
  c->r[3]=0u+0x00000000u; // 8004C270
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C274
  c->r[31]=c->r[31]|c->r[0]; // 8004C278
  c->lr=0x8004C280u; f_80079D50(c); // 8004C27C
  c->r[0]=cntlz(c->r[3]); // 8004C280
  c->r[3]=0u+0x00000000u; // 8004C284
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C288
  c->r[31]=c->r[31]|c->r[0]; // 8004C28C
  c->lr=0x8004C294u; f_8007A4D0(c); // 8004C290
  c->r[3]=R32(c->r[1]+0x00000008u); // 8004C294
  c->r[0]=cntlz(c->r[31]); // 8004C298
  W32(c->r[30]+0x00000000u,c->r[3]); // 8004C29C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C2A0
L_8004C2A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004C2A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004C2A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004C2AC
  c->lr=c->r[0]; // 8004C2B0
  c->r[1]=c->r[1]+0x00000020u; // 8004C2B4
  return; // 8004C2B8
}

// __OSClearRTCFlags
void f_8004C2C0(Ctx* __restrict c) {
  trace_call(0x8004C2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C2C0
  c->r[0]=c->lr; // 8004C2C4
  c->r[3]=0u+0x00000000u; // 8004C2C8
  c->r[4]=0u+0x00000001u; // 8004C2CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C2D0
  c->r[0]=0u+0x00000000u; // 8004C2D4
  c->r[5]=0u+0x00000000u; // 8004C2D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004C2DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004C2E0
  c->lr=0x8004C2E8u; f_8007A3D0(c); // 8004C2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004C2E8
  if (!crb(c,2)) { goto L_8004C2F8; } // 8004C2EC
  c->r[3]=0u+0x00000000u; // 8004C2F0
  goto L_8004C3BC; // 8004C2F4
L_8004C2F8:;
  c->r[3]=0u+0x00000000u; // 8004C2F8
  c->r[4]=0u+0x00000001u; // 8004C2FC
  c->r[5]=0u+0x00000003u; // 8004C300
  c->lr=0x8004C308u; f_80079C20(c); // 8004C304
  cmps(c,0,(int32_t)c->r[3],0); // 8004C308
  if (!crb(c,2)) { goto L_8004C320; } // 8004C30C
  c->r[3]=0u+0x00000000u; // 8004C310
  c->lr=0x8004C318u; f_8007A4D0(c); // 8004C314
  c->r[3]=0u+0x00000000u; // 8004C318
  goto L_8004C3BC; // 8004C31C
L_8004C320:;
  c->r[3]=0u+0xA1000000u; // 8004C320
  c->r[4]=c->r[1]+0x0000000Cu; // 8004C324
  c->r[0]=c->r[3]+0x00000800u; // 8004C328
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8004C32C
  c->r[3]=0u+0x00000000u; // 8004C330
  c->r[5]=0u+0x00000004u; // 8004C334
  c->r[6]=0u+0x00000001u; // 8004C338
  c->r[7]=0u+0x00000000u; // 8004C33C
  c->lr=0x8004C344u; f_80079180(c); // 8004C340
  c->r[0]=cntlz(c->r[3]); // 8004C344
  c->r[3]=0u+0x00000000u; // 8004C348
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C34C
  c->lr=0x8004C354u; f_800795B0(c); // 8004C350
  c->r[0]=cntlz(c->r[3]); // 8004C354
  c->r[4]=c->r[1]+0x00000008u; // 8004C358
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C35C
  c->r[3]=0u+0x00000000u; // 8004C360
  c->r[31]=c->r[31]|c->r[0]; // 8004C364
  c->r[5]=0u+0x00000004u; // 8004C368
  c->r[6]=0u+0x00000001u; // 8004C36C
  c->r[7]=0u+0x00000000u; // 8004C370
  c->lr=0x8004C378u; f_80079180(c); // 8004C374
  c->r[0]=cntlz(c->r[3]); // 8004C378
  c->r[3]=0u+0x00000000u; // 8004C37C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C380
  c->r[31]=c->r[31]|c->r[0]; // 8004C384
  c->lr=0x8004C38Cu; f_800795B0(c); // 8004C388
  c->r[0]=cntlz(c->r[3]); // 8004C38C
  c->r[3]=0u+0x00000000u; // 8004C390
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C394
  c->r[31]=c->r[31]|c->r[0]; // 8004C398
  c->lr=0x8004C3A0u; f_80079D50(c); // 8004C39C
  c->r[0]=cntlz(c->r[3]); // 8004C3A0
  c->r[3]=0u+0x00000000u; // 8004C3A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C3A8
  c->r[31]=c->r[31]|c->r[0]; // 8004C3AC
  c->lr=0x8004C3B4u; f_8007A4D0(c); // 8004C3B0
  c->r[0]=cntlz(c->r[31]); // 8004C3B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C3B8
L_8004C3BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004C3BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004C3C0
  c->lr=c->r[0]; // 8004C3C4
  c->r[1]=c->r[1]+0x00000020u; // 8004C3C8
  return; // 8004C3CC
}

// fn_8004C3D0
void f_8004C3D0(Ctx* __restrict c) {
  c->r[9]=mfspr(c,1008); // 8004C3D0
  c->r[10]=c->r[9]|0x00000008u; // 8004C3D4
  mtspr(c,1008,c->r[10]); // 8004C3D8
  /* isync */ // 8004C3DC
  /* sync */ // 8004C3E0
  mtspr(c,1008,c->r[9]); // 8004C3E4
  return; /* rfi */ // 8004C3E8
}

// fn_8004C3EC
void f_8004C3EC(Ctx* __restrict c) {
  c->r[0]=c->r[0]|0x00000000u; // 8004C3EC
  f_8004C3F0(c); return; // fall through
}

// __OSInitSystemCall
void f_8004C3F0(Ctx* __restrict c) {
  trace_call(0x8004C3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C3F0
  c->r[0]=c->lr; // 8004C3F4
  c->r[4]=0u+0x80050000u; // 8004C3F8
  c->r[5]=0u+0x80050000u; // 8004C3FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C400
  c->r[4]=c->r[4]+0xFFFFC3D0u; // 8004C404
  c->r[5]=c->r[5]+0xFFFFC3ECu; // 8004C408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C40C
  c->r[31]=0u+0x80000000u; // 8004C410
  c->r[3]=c->r[31]+0x00000C00u; // 8004C414
  c->r[5]=c->r[5]-c->r[4]; // 8004C418
  c->lr=0x8004C420u; f_800043C4(c); // 8004C41C
  c->r[3]=c->r[31]+0x00000C00u; // 8004C420
  c->r[4]=0u+0x00000100u; // 8004C424
  c->lr=0x8004C42Cu; f_80045070(c); // 8004C428
  /* sync */ // 8004C42C
  c->r[3]=c->r[31]+0x00000C00u; // 8004C430
  c->r[4]=0u+0x00000100u; // 8004C434
  c->lr=0x8004C43Cu; f_800450D0(c); // 8004C438
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C43C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C440
  c->lr=c->r[0]; // 8004C444
  c->r[1]=c->r[1]+0x00000010u; // 8004C448
  return; // 8004C44C
}

// fn_8004C450
void f_8004C450(Ctx* __restrict c) {
  return; // 8004C450
}

// __OSThreadInit
void f_8004C460(Ctx* __restrict c) {
  trace_call(0x8004C460u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C460
  c->r[0]=c->lr; // 8004C464
  c->r[3]=0u+0x00000002u; // 8004C468
  c->r[6]=0u+0x00000001u; // 8004C46C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C470
  c->r[4]=0u+0x00000000u; // 8004C474
  c->r[5]=0u+0x00000010u; // 8004C478
  c->r[0]=0u+0xFFFFFFFFu; // 8004C47C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004C480
  c->r[31]=0u+0x801A0000u; // 8004C484
  c->r[31]=c->r[31]+0xFFFFAA78u; // 8004C488
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004C48C
  c->r[30]=c->r[31]+0x00000000u; // 8004C490
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004C494
  c->r[29]=0u+0x80000000u; // 8004C498
  W16(c->r[30]+0x000002C8u,c->r[3]); // 8004C49C
  c->r[3]=c->r[30]|c->r[30]; // 8004C4A0
  W16(c->r[30]+0x000002CAu,c->r[6]); // 8004C4A4
  W32(c->r[30]+0x000002D4u,c->r[5]); // 8004C4A8
  W32(c->r[30]+0x000002D0u,c->r[5]); // 8004C4AC
  W32(c->r[30]+0x000002CCu,c->r[4]); // 8004C4B0
  W32(c->r[30]+0x000002D8u,c->r[0]); // 8004C4B4
  W32(c->r[30]+0x000002F0u,c->r[4]); // 8004C4B8
  W32(c->r[30]+0x000002ECu,c->r[4]); // 8004C4BC
  W32(c->r[30]+0x000002E8u,c->r[4]); // 8004C4C0
  W32(c->r[30]+0x000002F8u,c->r[4]); // 8004C4C4
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8004C4C8
  W32(c->r[29]+0x000000D8u,c->r[30]); // 8004C4CC
  c->lr=0x8004C4D4u; f_80045860(c); // 8004C4D0
  c->r[3]=c->r[30]|c->r[30]; // 8004C4D4
  c->lr=0x8004C4DCu; f_80045620(c); // 8004C4D8
  c->r[3]=0u+0x80210000u; // 8004C4DC
  c->r[5]=0u+0x80200000u; // 8004C4E0
  c->r[3]=c->r[3]+0x00005058u; // 8004C4E4
  W32(c->r[30]+0x00000304u,c->r[3]); // 8004C4E8
  c->r[5]=c->r[5]+0x00005054u; // 8004C4EC
  c->r[4]=c->r[30]|c->r[30]; // 8004C4F0
  c->r[3]=0u+0xDEAE0000u; // 8004C4F4
  W32(c->r[30]+0x00000308u,c->r[5]); // 8004C4F8
  c->r[0]=c->r[3]+0xFFFFBABEu; // 8004C4FC
  W32(c->r[5]+0x00000000u,c->r[0]); // 8004C500
  c->r[12]=R32(c->r[13]+0xFFFF8118u); // 8004C504
  c->r[3]=R32(c->r[29]+0x000000E4u); // 8004C508
  c->ctr=c->r[12]; // 8004C50C
  if (true) { c->lr=0x8004C514u; dispatch(c,c->ctr); } // 8004C510
  W32(c->r[29]+0x000000E4u,c->r[30]); // 8004C514
  c->lr=0x8004C51Cu; f_800457F0(c); // 8004C518
  c->r[4]=R32(c->r[29]+0x000000E4u); // 8004C51C
  c->r[4]=R32(c->r[4]+0x00000308u); // 8004C520
  c->r[8]=c->r[4]+0x00000004u; // 8004C524
  cmpu(c,1,c->r[8],c->r[3]); // 8004C528
  if (!crb(c,4)) { goto L_8004C5EC; } // 8004C52C
  c->r[5]=c->r[3]-c->r[8]; // 8004C530
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 8004C534
  c->r[4]=c->r[5]+0x00000003u; // 8004C538
  c->r[0]=sraw(c,c->r[4],2); // 8004C53C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8004C540
  cmps(c,0,(int32_t)c->r[0],8); // 8004C544
  if (!crb(c,1)) { goto L_8004C5C4; } // 8004C548
  c->r[7]=0u+0x00000000u; // 8004C54C
  if (crb(c,5)) { goto L_8004C578; } // 8004C550
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 8004C554
  c->r[5]=0u+0x00000001u; // 8004C558
  if (!crb(c,2)) { goto L_8004C56C; } // 8004C55C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 8004C560
  if (crb(c,2)) { goto L_8004C56C; } // 8004C564
  c->r[5]=0u+0x00000000u; // 8004C568
L_8004C56C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004C56C
  if (crb(c,2)) { goto L_8004C578; } // 8004C570
  c->r[7]=0u+0x00000001u; // 8004C574
L_8004C578:;
  cmps(c,0,(int32_t)c->r[7],0); // 8004C578
  if (crb(c,2)) { goto L_8004C5C4; } // 8004C57C
  c->r[0]=c->r[6]+0x0000001Fu; // 8004C580
  c->r[4]=0u+0x00000000u; // 8004C584
  c->r[0]=c->r[0]-c->r[8]; // 8004C588
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C58C
  c->ctr=c->r[0]; // 8004C590
  cmpu(c,0,c->r[8],c->r[6]); // 8004C594
  if (!crb(c,0)) { goto L_8004C5C4; } // 8004C598
L_8004C59C:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 8004C59C
  W32(c->r[8]+0x00000004u,c->r[4]); // 8004C5A0
  W32(c->r[8]+0x00000008u,c->r[4]); // 8004C5A4
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 8004C5A8
  W32(c->r[8]+0x00000010u,c->r[4]); // 8004C5AC
  W32(c->r[8]+0x00000014u,c->r[4]); // 8004C5B0
  W32(c->r[8]+0x00000018u,c->r[4]); // 8004C5B4
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 8004C5B8
  c->r[8]=c->r[8]+0x00000020u; // 8004C5BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004C59C; } // 8004C5C0
L_8004C5C4:;
  c->r[0]=c->r[3]+0x00000003u; // 8004C5C4
  c->r[4]=0u+0x00000000u; // 8004C5C8
  c->r[0]=c->r[0]-c->r[8]; // 8004C5CC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004C5D0
  c->ctr=c->r[0]; // 8004C5D4
  cmpu(c,0,c->r[8],c->r[3]); // 8004C5D8
  if (!crb(c,0)) { goto L_8004C5EC; } // 8004C5DC
L_8004C5E0:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 8004C5E0
  c->r[8]=c->r[8]+0x00000004u; // 8004C5E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004C5E0; } // 8004C5E8
L_8004C5EC:;
  c->r[0]=0u+0x00000002u; // 8004C5EC
  c->r[3]=0u+0x00000000u; // 8004C5F0
  W32(c->r[13]+0xFFFF8B68u,c->r[3]); // 8004C5F4
  c->r[4]=c->r[31]+0x00000318u; // 8004C5F8
  W32(c->r[13]+0xFFFF8B64u,c->r[3]); // 8004C5FC
  c->ctr=c->r[0]; // 8004C600
L_8004C604:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 8004C604
  W32(c->r[4]+0x00000000u,c->r[3]); // 8004C608
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8004C60C
  W32(c->r[4]+0x00000008u,c->r[3]); // 8004C610
  W32(c->r[4]+0x00000014u,c->r[3]); // 8004C614
  W32(c->r[4]+0x00000010u,c->r[3]); // 8004C618
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 8004C61C
  W32(c->r[4]+0x00000018u,c->r[3]); // 8004C620
  W32(c->r[4]+0x00000024u,c->r[3]); // 8004C624
  W32(c->r[4]+0x00000020u,c->r[3]); // 8004C628
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8004C62C
  W32(c->r[4]+0x00000028u,c->r[3]); // 8004C630
  W32(c->r[4]+0x00000034u,c->r[3]); // 8004C634
  W32(c->r[4]+0x00000030u,c->r[3]); // 8004C638
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 8004C63C
  W32(c->r[4]+0x00000038u,c->r[3]); // 8004C640
  W32(c->r[4]+0x00000044u,c->r[3]); // 8004C644
  W32(c->r[4]+0x00000040u,c->r[3]); // 8004C648
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 8004C64C
  W32(c->r[4]+0x00000048u,c->r[3]); // 8004C650
  W32(c->r[4]+0x00000054u,c->r[3]); // 8004C654
  W32(c->r[4]+0x00000050u,c->r[3]); // 8004C658
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 8004C65C
  W32(c->r[4]+0x00000058u,c->r[3]); // 8004C660
  W32(c->r[4]+0x00000064u,c->r[3]); // 8004C664
  W32(c->r[4]+0x00000060u,c->r[3]); // 8004C668
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 8004C66C
  W32(c->r[4]+0x00000068u,c->r[3]); // 8004C670
  W32(c->r[4]+0x00000074u,c->r[3]); // 8004C674
  W32(c->r[4]+0x00000070u,c->r[3]); // 8004C678
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 8004C67C
  W32(c->r[4]+0x00000078u,c->r[3]); // 8004C680
  c->r[4]=c->r[4]+0x00000080u; // 8004C684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004C604; } // 8004C688
  c->r[3]=0u+0x80000000u; // 8004C68C
  c->r[4]=0u+0x00000000u; // 8004C690
  W32(c->r[3]+0x000000E0u,c->r[4]); // 8004C694
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8004C698
  W32(c->r[3]+0x000000DCu,c->r[30]); // 8004C69C
  goto L_8004C6A8; // 8004C6A0
  W32(c->r[4]+0x000002FCu,c->r[30]); // 8004C6A4
L_8004C6A8:;
  c->r[29]=0u+0x00000000u; // 8004C6A8
  W32(c->r[30]+0x00000300u,c->r[4]); // 8004C6AC
  c->r[4]=0u+0x80000000u; // 8004C6B0
  c->r[3]=c->r[31]+0x00000418u; // 8004C6B4
  W32(c->r[30]+0x000002FCu,c->r[29]); // 8004C6B8
  W32(c->r[4]+0x000000E0u,c->r[30]); // 8004C6BC
  c->lr=0x8004C6C4u; f_80045860(c); // 8004C6C0
  W32(c->r[13]+0xFFFF8B60u,c->r[29]); // 8004C6C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004C6C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004C6CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004C6D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004C6D4
  c->lr=c->r[0]; // 8004C6D8
  c->r[1]=c->r[1]+0x00000020u; // 8004C6DC
  return; // 8004C6E0
}

// OSInitThreadQueue
void f_8004C6F0(Ctx* __restrict c) {
  trace_call(0x8004C6F0u);
  c->r[0]=0u+0x00000000u; // 8004C6F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8004C6F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8004C6F8
  return; // 8004C6FC
}

// OSGetCurrentThread
void f_8004C700(Ctx* __restrict c) {
  trace_call(0x8004C700u);
  c->r[3]=0u+0x80000000u; // 8004C700
  c->r[3]=R32(c->r[3]+0x000000E4u); // 8004C704
  return; // 8004C708
}

// OSIsThreadTerminated
void f_8004C710(Ctx* __restrict c) {
  trace_call(0x8004C710u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8004C710
  c->r[3]=0u+0x00000001u; // 8004C714
  cmpu(c,0,c->r[0],0x00000008u); // 8004C718
  if (crb(c,2)) { goto L_8004C72C; } // 8004C71C
  cmps(c,0,(int32_t)c->r[0],0); // 8004C720
  if (crb(c,2)) { goto L_8004C72C; } // 8004C724
  c->r[3]=0u+0x00000000u; // 8004C728
L_8004C72C:;
  c->r[0]=0u-c->r[3]; // 8004C72C
  c->r[0]=c->r[0]|c->r[3]; // 8004C730
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004C734
  return; // 8004C738
}

// OSDisableScheduler
void f_8004C740(Ctx* __restrict c) {
  trace_call(0x8004C740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C740
  c->r[0]=c->lr; // 8004C744
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C74C
  c->lr=0x8004C754u; f_80049A20(c); // 8004C750
  c->r[31]=R32(c->r[13]+0xFFFF8B60u); // 8004C754
  c->r[0]=c->r[31]+0x00000001u; // 8004C758
  W32(c->r[13]+0xFFFF8B60u,c->r[0]); // 8004C75C
  c->lr=0x8004C764u; f_80049A60(c); // 8004C760
  c->r[3]=c->r[31]|c->r[31]; // 8004C764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C768
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C76C
  c->lr=c->r[0]; // 8004C770
  c->r[1]=c->r[1]+0x00000010u; // 8004C774
  return; // 8004C778
}

// OSEnableScheduler
void f_8004C780(Ctx* __restrict c) {
  trace_call(0x8004C780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C780
  c->r[0]=c->lr; // 8004C784
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C78C
  c->lr=0x8004C794u; f_80049A20(c); // 8004C790
  c->r[31]=R32(c->r[13]+0xFFFF8B60u); // 8004C794
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8004C798
  W32(c->r[13]+0xFFFF8B60u,c->r[0]); // 8004C79C
  c->lr=0x8004C7A4u; f_80049A60(c); // 8004C7A0
  c->r[3]=c->r[31]|c->r[31]; // 8004C7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C7AC
  c->lr=c->r[0]; // 8004C7B0
  c->r[1]=c->r[1]+0x00000010u; // 8004C7B4
  return; // 8004C7B8
}

// UnsetRun
void f_8004C7C0(Ctx* __restrict c) {
  trace_call(0x8004C7C0u);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 8004C7C0
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8004C7C4
  cmps(c,0,(int32_t)c->r[5],0); // 8004C7C8
  c->r[6]=R32(c->r[3]+0x000002E4u); // 8004C7CC
  if (!crb(c,2)) { goto L_8004C7DC; } // 8004C7D0
  W32(c->r[4]+0x00000004u,c->r[6]); // 8004C7D4
  goto L_8004C7E0; // 8004C7D8
L_8004C7DC:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 8004C7DC
L_8004C7E0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8004C7E0
  if (!crb(c,2)) { goto L_8004C7F0; } // 8004C7E4
  W32(c->r[4]+0x00000000u,c->r[5]); // 8004C7E8
  goto L_8004C7F4; // 8004C7EC
L_8004C7F0:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 8004C7F0
L_8004C7F4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7F4
  cmps(c,0,(int32_t)c->r[0],0); // 8004C7F8
  if (!crb(c,2)) { goto L_8004C81C; } // 8004C7FC
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004C800
  c->r[4]=0u+0x00000001u; // 8004C804
  c->r[5]=R32(c->r[13]+0xFFFF8B68u); // 8004C808
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8004C80C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8004C810
  c->r[0]=c->r[5]&~c->r[0]; // 8004C814
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004C818
L_8004C81C:;
  c->r[0]=0u+0x00000000u; // 8004C81C
  W32(c->r[3]+0x000002DCu,c->r[0]); // 8004C820
  return; // 8004C824
}

// __OSGetEffectivePriority
void f_8004C830(Ctx* __restrict c) {
  trace_call(0x8004C830u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8004C830
  c->r[3]=R32(c->r[3]+0x000002F4u); // 8004C834
  goto L_8004C860; // 8004C838
  c->r[0]=c->r[0]|0x00000000u; // 8004C83C
L_8004C840:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8004C840
  cmps(c,0,(int32_t)c->r[5],0); // 8004C844
  if (crb(c,2)) { goto L_8004C85C; } // 8004C848
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8004C84C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004C850
  if (!crb(c,0)) { goto L_8004C85C; } // 8004C854
  c->r[4]=c->r[0]|c->r[0]; // 8004C858
L_8004C85C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 8004C85C
L_8004C860:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004C860
  if (!crb(c,2)) { IRQCHK(c); goto L_8004C840; } // 8004C864
  c->r[3]=c->r[4]|c->r[4]; // 8004C868
  return; // 8004C86C
}

// SetEffectivePriority
void f_8004C870(Ctx* __restrict c) {
  trace_call(0x8004C870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C870
  c->r[0]=c->lr; // 8004C874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C87C
  c->r[31]=c->r[4]|c->r[4]; // 8004C880
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004C884
  c->r[30]=c->r[3]|c->r[3]; // 8004C888
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8004C88C
  cmps(c,0,(int32_t)c->r[0],1); // 8004C890
  if (crb(c,2)) { goto L_8004C8AC; } // 8004C894
  cmps(c,0,(int32_t)c->r[0],4); // 8004C898
  if (crb(c,2)) { goto L_8004C918; } // 8004C89C
  cmps(c,0,(int32_t)c->r[0],2); // 8004C8A0
  if (crb(c,2)) { goto L_8004C9F0; } // 8004C8A4
  goto L_8004C9FC; // 8004C8A8
L_8004C8AC:;
  c->lr=0x8004C8B0u; f_8004C7C0(c); // 8004C8AC
  c->r[3]=0u+0x801A0000u; // 8004C8B0
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8004C8B4
  c->r[3]=c->r[3]+0xFFFFAD90u; // 8004C8B8
  W32(c->r[30]+0x000002D0u,c->r[31]); // 8004C8BC
  c->r[3]=c->r[3]+c->r[0]; // 8004C8C0
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8004C8C4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8004C8C8
  cmps(c,0,(int32_t)c->r[4],0); // 8004C8CC
  if (!crb(c,2)) { goto L_8004C8DC; } // 8004C8D0
  W32(c->r[3]+0x00000000u,c->r[30]); // 8004C8D4
  goto L_8004C8E0; // 8004C8D8
L_8004C8DC:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 8004C8DC
L_8004C8E0:;
  c->r[0]=0u+0x00000000u; // 8004C8E0
  W32(c->r[30]+0x000002E4u,c->r[4]); // 8004C8E4
  c->r[4]=R32(c->r[30]+0x000002DCu); // 8004C8E8
  c->r[3]=0u+0x00000001u; // 8004C8EC
  W32(c->r[30]+0x000002E0u,c->r[0]); // 8004C8F0
  W32(c->r[4]+0x00000004u,c->r[30]); // 8004C8F4
  c->r[0]=R32(c->r[30]+0x000002D0u); // 8004C8F8
  c->r[4]=R32(c->r[13]+0xFFFF8B68u); // 8004C8FC
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8004C900
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8004C904
  c->r[0]=c->r[4]|c->r[0]; // 8004C908
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004C90C
  W32(c->r[13]+0xFFFF8B64u,c->r[3]); // 8004C910
  goto L_8004C9FC; // 8004C914
L_8004C918:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 8004C918
  c->r[7]=R32(c->r[3]+0x000002E4u); // 8004C91C
  cmps(c,0,(int32_t)c->r[6],0); // 8004C920
  if (!crb(c,2)) { goto L_8004C934; } // 8004C924
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8004C928
  W32(c->r[5]+0x00000004u,c->r[7]); // 8004C92C
  goto L_8004C938; // 8004C930
L_8004C934:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 8004C934
L_8004C938:;
  cmps(c,0,(int32_t)c->r[7],0); // 8004C938
  if (!crb(c,2)) { goto L_8004C94C; } // 8004C93C
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8004C940
  W32(c->r[5]+0x00000000u,c->r[6]); // 8004C944
  goto L_8004C950; // 8004C948
L_8004C94C:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 8004C94C
L_8004C950:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 8004C950
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8004C954
  c->r[6]=R32(c->r[5]+0x00000000u); // 8004C958
  goto L_8004C964; // 8004C95C
L_8004C960:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 8004C960
L_8004C964:;
  cmps(c,0,(int32_t)c->r[6],0); // 8004C964
  if (crb(c,2)) { goto L_8004C97C; } // 8004C968
  c->r[4]=R32(c->r[6]+0x000002D0u); // 8004C96C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004C970
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8004C974
  if (!crb(c,1)) { IRQCHK(c); goto L_8004C960; } // 8004C978
L_8004C97C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8004C97C
  if (!crb(c,2)) { goto L_8004C9B4; } // 8004C980
  c->r[4]=R32(c->r[5]+0x00000004u); // 8004C984
  cmps(c,0,(int32_t)c->r[4],0); // 8004C988
  if (!crb(c,2)) { goto L_8004C998; } // 8004C98C
  W32(c->r[5]+0x00000000u,c->r[3]); // 8004C990
  goto L_8004C99C; // 8004C994
L_8004C998:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 8004C998
L_8004C99C:;
  c->r[0]=0u+0x00000000u; // 8004C99C
  W32(c->r[3]+0x000002E4u,c->r[4]); // 8004C9A0
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8004C9A4
  W32(c->r[3]+0x000002E0u,c->r[0]); // 8004C9A8
  W32(c->r[4]+0x00000004u,c->r[3]); // 8004C9AC
  goto L_8004C9DC; // 8004C9B0
L_8004C9B4:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 8004C9B4
  c->r[4]=R32(c->r[6]+0x000002E4u); // 8004C9B8
  W32(c->r[6]+0x000002E4u,c->r[3]); // 8004C9BC
  cmps(c,0,(int32_t)c->r[4],0); // 8004C9C0
  W32(c->r[3]+0x000002E4u,c->r[4]); // 8004C9C4
  if (!crb(c,2)) { goto L_8004C9D8; } // 8004C9C8
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8004C9CC
  W32(c->r[4]+0x00000000u,c->r[3]); // 8004C9D0
  goto L_8004C9DC; // 8004C9D4
L_8004C9D8:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 8004C9D8
L_8004C9DC:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 8004C9DC
  cmps(c,0,(int32_t)c->r[3],0); // 8004C9E0
  if (crb(c,2)) { goto L_8004C9FC; } // 8004C9E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8004C9E8
  goto L_8004CA00; // 8004C9EC
L_8004C9F0:;
  c->r[0]=0u+0x00000001u; // 8004C9F0
  W32(c->r[13]+0xFFFF8B64u,c->r[0]); // 8004C9F4
  W32(c->r[3]+0x000002D0u,c->r[4]); // 8004C9F8
L_8004C9FC:;
  c->r[3]=0u+0x00000000u; // 8004C9FC
L_8004CA00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004CA08
  c->lr=c->r[0]; // 8004CA0C
  c->r[1]=c->r[1]+0x00000010u; // 8004CA10
  return; // 8004CA14
}

// __OSPromoteThread
void f_8004CA20(Ctx* __restrict c) {
  trace_call(0x8004CA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CA20
  c->r[0]=c->lr; // 8004CA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004CA2C
  c->r[31]=c->r[4]|c->r[4]; // 8004CA30
L_8004CA34:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8004CA34
  cmps(c,0,(int32_t)c->r[0],0); // 8004CA38
  if (crb(c,1)) { goto L_8004CA5C; } // 8004CA3C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004CA40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8004CA44
  if (!crb(c,1)) { goto L_8004CA5C; } // 8004CA48
  c->r[4]=c->r[31]|c->r[31]; // 8004CA4C
  c->lr=0x8004CA54u; f_8004C870(c); // 8004CA50
  cmps(c,0,(int32_t)c->r[3],0); // 8004CA54
  if (!crb(c,2)) { IRQCHK(c); goto L_8004CA34; } // 8004CA58
L_8004CA5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CA5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CA60
  c->lr=c->r[0]; // 8004CA64
  c->r[1]=c->r[1]+0x00000010u; // 8004CA68
  return; // 8004CA6C
}

// fn_8004CA70
void f_8004CA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CA70
  c->r[0]=c->lr; // 8004CA74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CA78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004CA7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004CA80
  c->r[30]=c->r[3]|c->r[3]; // 8004CA84
  c->r[0]=R32(c->r[13]+0xFFFF8B60u); // 8004CA88
  cmps(c,0,(int32_t)c->r[0],0); // 8004CA8C
  if (!crb(c,1)) { goto L_8004CA9C; } // 8004CA90
  c->r[3]=0u+0x00000000u; // 8004CA94
  goto L_8004CC84; // 8004CA98
L_8004CA9C:;
  c->lr=0x8004CAA0u; f_80045680(c); // 8004CA9C
  c->r[4]=0u+0x80000000u; // 8004CAA0
  c->r[5]=R32(c->r[4]+0x000000E4u); // 8004CAA4
  cmpu(c,0,c->r[3],c->r[5]); // 8004CAA8
  if (crb(c,2)) { goto L_8004CAB8; } // 8004CAAC
  c->r[3]=0u+0x00000000u; // 8004CAB0
  goto L_8004CC84; // 8004CAB4
L_8004CAB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004CAB8
  if (crb(c,2)) { goto L_8004CB80; } // 8004CABC
  c->r[0]=R16(c->r[5]+0x000002C8u); // 8004CAC0
  cmpu(c,0,c->r[0],0x00000002u); // 8004CAC4
  if (!crb(c,2)) { goto L_8004CB5C; } // 8004CAC8
  cmps(c,0,(int32_t)c->r[30],0); // 8004CACC
  if (!crb(c,2)) { goto L_8004CAF0; } // 8004CAD0
  c->r[3]=R32(c->r[13]+0xFFFF8B68u); // 8004CAD4
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8004CAD8
  c->r[3]=cntlz(c->r[3]); // 8004CADC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8004CAE0
  if (crb(c,1)) { goto L_8004CAF0; } // 8004CAE4
  c->r[3]=0u+0x00000000u; // 8004CAE8
  goto L_8004CC84; // 8004CAEC
L_8004CAF0:;
  c->r[0]=0u+0x00000001u; // 8004CAF0
  W16(c->r[5]+0x000002C8u,c->r[0]); // 8004CAF4
  c->r[3]=0u+0x801A0000u; // 8004CAF8
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8004CAFC
  c->r[3]=c->r[3]+0xFFFFAD90u; // 8004CB00
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8004CB04
  c->r[3]=c->r[3]+c->r[0]; // 8004CB08
  W32(c->r[5]+0x000002DCu,c->r[3]); // 8004CB0C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8004CB10
  cmps(c,0,(int32_t)c->r[4],0); // 8004CB14
  if (!crb(c,2)) { goto L_8004CB24; } // 8004CB18
  W32(c->r[3]+0x00000000u,c->r[5]); // 8004CB1C
  goto L_8004CB28; // 8004CB20
L_8004CB24:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 8004CB24
L_8004CB28:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8004CB28
  c->r[0]=0u+0x00000000u; // 8004CB2C
  c->r[3]=0u+0x00000001u; // 8004CB30
  W32(c->r[5]+0x000002E0u,c->r[0]); // 8004CB34
  c->r[4]=R32(c->r[5]+0x000002DCu); // 8004CB38
  W32(c->r[4]+0x00000004u,c->r[5]); // 8004CB3C
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8004CB40
  c->r[4]=R32(c->r[13]+0xFFFF8B68u); // 8004CB44
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8004CB48
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8004CB4C
  c->r[0]=c->r[4]|c->r[0]; // 8004CB50
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004CB54
  W32(c->r[13]+0xFFFF8B64u,c->r[3]); // 8004CB58
L_8004CB5C:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 8004CB5C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8004CB60
  if (!crb(c,2)) { goto L_8004CB80; } // 8004CB64
  c->r[3]=c->r[5]|c->r[5]; // 8004CB68
  c->lr=0x8004CB70u; f_80045690(c); // 8004CB6C
  cmps(c,0,(int32_t)c->r[3],0); // 8004CB70
  if (crb(c,2)) { goto L_8004CB80; } // 8004CB74
  c->r[3]=0u+0x00000000u; // 8004CB78
  goto L_8004CC84; // 8004CB7C
L_8004CB80:;
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 8004CB80
  cmps(c,0,(int32_t)c->r[0],0); // 8004CB84
  if (!crb(c,2)) { goto L_8004CBE8; } // 8004CB88
  c->r[12]=R32(c->r[13]+0xFFFF8118u); // 8004CB8C
  c->r[31]=0u+0x80000000u; // 8004CB90
  c->r[3]=R32(c->r[31]+0x000000E4u); // 8004CB94
  c->r[4]=0u+0x00000000u; // 8004CB98
  c->ctr=c->r[12]; // 8004CB9C
  if (true) { c->lr=0x8004CBA4u; dispatch(c,c->ctr); } // 8004CBA0
  c->r[0]=0u+0x00000000u; // 8004CBA4
  c->r[3]=0u+0x801A0000u; // 8004CBA8
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8004CBAC
  c->r[3]=c->r[3]+0xFFFFAE90u; // 8004CBB0
  c->lr=0x8004CBB8u; f_80045620(c); // 8004CBB4
L_8004CBB8:;
  c->lr=0x8004CBBCu; f_80049A40(c); // 8004CBB8
  c->r[0]=c->r[0]|0x00000000u; // 8004CBBC
L_8004CBC0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 8004CBC0
  cmps(c,0,(int32_t)c->r[0],0); // 8004CBC4
  if (crb(c,2)) { IDLEWAIT(c); goto L_8004CBC0; } // 8004CBC8
  c->lr=0x8004CBD0u; f_80049A20(c); // 8004CBCC
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 8004CBD0
  cmps(c,0,(int32_t)c->r[0],0); // 8004CBD4
  if (crb(c,2)) { IRQCHK(c); goto L_8004CBB8; } // 8004CBD8
  c->r[3]=0u+0x801A0000u; // 8004CBDC
  c->r[3]=c->r[3]+0xFFFFAE90u; // 8004CBE0
  c->lr=0x8004CBE8u; f_80045860(c); // 8004CBE4
L_8004CBE8:;
  c->r[4]=0u+0x00000000u; // 8004CBE8
  W32(c->r[13]+0xFFFF8B64u,c->r[4]); // 8004CBEC
  c->r[0]=R32(c->r[13]+0xFFFF8B68u); // 8004CBF0
  c->r[3]=0u+0x801A0000u; // 8004CBF4
  c->r[3]=c->r[3]+0xFFFFAD90u; // 8004CBF8
  c->r[5]=cntlz(c->r[0]); // 8004CBFC
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8004CC00
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 8004CC04
  c->r[6]=R32(c->r[30]+0x000002E0u); // 8004CC08
  cmps(c,0,(int32_t)c->r[6],0); // 8004CC0C
  if (!crb(c,2)) { goto L_8004CC1C; } // 8004CC10
  W32(c->r[3]+0x00000004u,c->r[4]); // 8004CC14
  goto L_8004CC20; // 8004CC18
L_8004CC1C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 8004CC1C
L_8004CC20:;
  cmps(c,0,(int32_t)c->r[6],0); // 8004CC20
  W32(c->r[3]+0x00000000u,c->r[6]); // 8004CC24
  if (!crb(c,2)) { goto L_8004CC44; } // 8004CC28
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 8004CC2C
  c->r[3]=0u+0x00000001u; // 8004CC30
  c->r[4]=R32(c->r[13]+0xFFFF8B68u); // 8004CC34
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8004CC38
  c->r[0]=c->r[4]&~c->r[0]; // 8004CC3C
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004CC40
L_8004CC44:;
  c->r[0]=0u+0x00000000u; // 8004CC44
  W32(c->r[30]+0x000002DCu,c->r[0]); // 8004CC48
  c->r[0]=0u+0x00000002u; // 8004CC4C
  c->r[31]=0u+0x80000000u; // 8004CC50
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8004CC54
  c->r[4]=c->r[30]|c->r[30]; // 8004CC58
  c->r[12]=R32(c->r[13]+0xFFFF8118u); // 8004CC5C
  c->r[3]=R32(c->r[31]+0x000000E4u); // 8004CC60
  c->ctr=c->r[12]; // 8004CC64
  if (true) { c->lr=0x8004CC6Cu; dispatch(c,c->ctr); } // 8004CC68
  W32(c->r[31]+0x000000E4u,c->r[30]); // 8004CC6C
  c->r[3]=c->r[30]|c->r[30]; // 8004CC70
  c->lr=0x8004CC78u; f_80045620(c); // 8004CC74
  c->r[3]=c->r[30]|c->r[30]; // 8004CC78
  c->lr=0x8004CC80u; f_80045710(c); // 8004CC7C
  c->r[3]=c->r[30]|c->r[30]; // 8004CC80
L_8004CC84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CC84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CC88
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004CC8C
  c->lr=c->r[0]; // 8004CC90
  c->r[1]=c->r[1]+0x00000010u; // 8004CC94
  return; // 8004CC98
}

// fn_8004CCA0
void f_8004CCA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004CCA0
  cmps(c,0,(int32_t)c->r[0],0); // 8004CCA4
  if (crb(c,2)) return; // 8004CCA8
  c->r[3]=0u+0x00000000u; // 8004CCAC
  f_8004CA70(c); return; // 8004CCB0
}

// fn_8004CCB4
void f_8004CCB4(Ctx* __restrict c) {
  return; // 8004CCB4
}

// fn_8004CCC0
void f_8004CCC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CCC0
  c->r[0]=c->lr; // 8004CCC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004CCC8
  c->r[11]=c->r[1]+0x00000020u; // 8004CCCC
  c->lr=0x8004CCD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004CCD0
  cmps(c,0,(int32_t)c->r[8],0); // 8004CCD4
  c->r[31]=c->r[3]|c->r[3]; // 8004CCD8
  c->r[26]=c->r[5]|c->r[5]; // 8004CCDC
  c->r[27]=c->r[6]|c->r[6]; // 8004CCE0
  c->r[28]=c->r[7]|c->r[7]; // 8004CCE4
  if (crb(c,0)) { goto L_8004CCF4; } // 8004CCE8
  cmps(c,0,(int32_t)c->r[8],31); // 8004CCEC
  if (!crb(c,1)) { goto L_8004CCFC; } // 8004CCF0
L_8004CCF4:;
  c->r[3]=0u+0x00000000u; // 8004CCF4
  goto L_8004CF14; // 8004CCF8
L_8004CCFC:;
  c->r[7]=0u+0x00000001u; // 8004CCFC
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 8004CD00
  c->r[30]=0u+0x00000000u; // 8004CD04
  c->r[29]=0u+0xFFFFFFFFu; // 8004CD08
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 8004CD0C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 8004CD10
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 8004CD14
  W16(c->r[3]+0x000002CAu,c->r[0]); // 8004CD18
  W32(c->r[3]+0x000002D4u,c->r[8]); // 8004CD1C
  W32(c->r[3]+0x000002D0u,c->r[8]); // 8004CD20
  W32(c->r[3]+0x000002CCu,c->r[7]); // 8004CD24
  W32(c->r[3]+0x000002D8u,c->r[29]); // 8004CD28
  W32(c->r[3]+0x000002F0u,c->r[30]); // 8004CD2C
  W32(c->r[3]+0x000002ECu,c->r[30]); // 8004CD30
  W32(c->r[3]+0x000002E8u,c->r[30]); // 8004CD34
  W32(c->r[3]+0x000002F8u,c->r[30]); // 8004CD38
  W32(c->r[3]+0x000002F4u,c->r[30]); // 8004CD3C
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 8004CD40
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 8004CD44
  c->lr=0x8004CD4Cu; f_80045890(c); // 8004CD48
  c->r[3]=0u+0x80050000u; // 8004CD4C
  c->r[4]=c->r[27]-c->r[28]; // 8004CD50
  c->r[3]=c->r[3]+0xFFFFCF30u; // 8004CD54
  W32(c->r[31]+0x00000084u,c->r[3]); // 8004CD58
  c->r[3]=0u+0xDEAE0000u; // 8004CD5C
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 8004CD60
  c->r[0]=c->r[3]+0xFFFFBABEu; // 8004CD64
  W32(c->r[31]+0x00000304u,c->r[27]); // 8004CD68
  W32(c->r[31]+0x00000308u,c->r[4]); // 8004CD6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8004CD70
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 8004CD74
  W32(c->r[31]+0x00000310u,c->r[30]); // 8004CD78
  W32(c->r[31]+0x00000314u,c->r[30]); // 8004CD7C
  c->lr=0x8004CD84u; f_80049A20(c); // 8004CD80
  c->r[4]=0u+0x801A0000u; // 8004CD84
  c->r[4]=c->r[4]+0xFFFFA6D0u; // 8004CD88
  c->r[0]=R32(c->r[4]+0x00000040u); // 8004CD8C
  cmps(c,0,(int32_t)c->r[0],0); // 8004CD90
  if (crb(c,2)) { goto L_8004CEDC; } // 8004CD94
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 8004CD98
  c->r[0]=0u+0x00000002u; // 8004CD9C
  c->r[4]=R16(c->r[31]+0x000001A2u); // 8004CDA0
  c->r[6]=c->r[31]+0x00000090u; // 8004CDA4
  c->r[5]=c->r[5]|0x00000900u; // 8004CDA8
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 8004CDAC
  c->r[4]=c->r[4]|0x00000001u; // 8004CDB0
  W16(c->r[31]+0x000001A2u,c->r[4]); // 8004CDB4
  c->r[5]=c->r[31]+0x000001C8u; // 8004CDB8
  c->r[4]=R32(c->r[13]+0xFFFF80F0u); // 8004CDBC
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 8004CDC0
  c->r[4]=c->r[4]|0x00000004u; // 8004CDC4
  W32(c->r[31]+0x00000194u,c->r[4]); // 8004CDC8
  c->ctr=c->r[0]; // 8004CDCC
L_8004CDD0:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 8004CDD0
  W32(c->r[6]+0x00000000u,c->r[29]); // 8004CDD4
  W32(c->r[5]+0x00000004u,c->r[29]); // 8004CDD8
  W32(c->r[5]+0x00000000u,c->r[29]); // 8004CDDC
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 8004CDE0
  W32(c->r[6]+0x00000008u,c->r[29]); // 8004CDE4
  W32(c->r[5]+0x0000000Cu,c->r[29]); // 8004CDE8
  W32(c->r[5]+0x00000008u,c->r[29]); // 8004CDEC
  W32(c->r[6]+0x00000014u,c->r[29]); // 8004CDF0
  W32(c->r[6]+0x00000010u,c->r[29]); // 8004CDF4
  W32(c->r[5]+0x00000014u,c->r[29]); // 8004CDF8
  W32(c->r[5]+0x00000010u,c->r[29]); // 8004CDFC
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 8004CE00
  W32(c->r[6]+0x00000018u,c->r[29]); // 8004CE04
  W32(c->r[5]+0x0000001Cu,c->r[29]); // 8004CE08
  W32(c->r[5]+0x00000018u,c->r[29]); // 8004CE0C
  W32(c->r[6]+0x00000024u,c->r[29]); // 8004CE10
  W32(c->r[6]+0x00000020u,c->r[29]); // 8004CE14
  W32(c->r[5]+0x00000024u,c->r[29]); // 8004CE18
  W32(c->r[5]+0x00000020u,c->r[29]); // 8004CE1C
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 8004CE20
  W32(c->r[6]+0x00000028u,c->r[29]); // 8004CE24
  W32(c->r[5]+0x0000002Cu,c->r[29]); // 8004CE28
  W32(c->r[5]+0x00000028u,c->r[29]); // 8004CE2C
  W32(c->r[6]+0x00000034u,c->r[29]); // 8004CE30
  W32(c->r[6]+0x00000030u,c->r[29]); // 8004CE34
  W32(c->r[5]+0x00000034u,c->r[29]); // 8004CE38
  W32(c->r[5]+0x00000030u,c->r[29]); // 8004CE3C
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 8004CE40
  W32(c->r[6]+0x00000038u,c->r[29]); // 8004CE44
  W32(c->r[5]+0x0000003Cu,c->r[29]); // 8004CE48
  W32(c->r[5]+0x00000038u,c->r[29]); // 8004CE4C
  W32(c->r[6]+0x00000044u,c->r[29]); // 8004CE50
  W32(c->r[6]+0x00000040u,c->r[29]); // 8004CE54
  W32(c->r[5]+0x00000044u,c->r[29]); // 8004CE58
  W32(c->r[5]+0x00000040u,c->r[29]); // 8004CE5C
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 8004CE60
  W32(c->r[6]+0x00000048u,c->r[29]); // 8004CE64
  W32(c->r[5]+0x0000004Cu,c->r[29]); // 8004CE68
  W32(c->r[5]+0x00000048u,c->r[29]); // 8004CE6C
  W32(c->r[6]+0x00000054u,c->r[29]); // 8004CE70
  W32(c->r[6]+0x00000050u,c->r[29]); // 8004CE74
  W32(c->r[5]+0x00000054u,c->r[29]); // 8004CE78
  W32(c->r[5]+0x00000050u,c->r[29]); // 8004CE7C
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 8004CE80
  W32(c->r[6]+0x00000058u,c->r[29]); // 8004CE84
  W32(c->r[5]+0x0000005Cu,c->r[29]); // 8004CE88
  W32(c->r[5]+0x00000058u,c->r[29]); // 8004CE8C
  W32(c->r[6]+0x00000064u,c->r[29]); // 8004CE90
  W32(c->r[6]+0x00000060u,c->r[29]); // 8004CE94
  W32(c->r[5]+0x00000064u,c->r[29]); // 8004CE98
  W32(c->r[5]+0x00000060u,c->r[29]); // 8004CE9C
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 8004CEA0
  W32(c->r[6]+0x00000068u,c->r[29]); // 8004CEA4
  W32(c->r[5]+0x0000006Cu,c->r[29]); // 8004CEA8
  W32(c->r[5]+0x00000068u,c->r[29]); // 8004CEAC
  W32(c->r[6]+0x00000074u,c->r[29]); // 8004CEB0
  W32(c->r[6]+0x00000070u,c->r[29]); // 8004CEB4
  W32(c->r[5]+0x00000074u,c->r[29]); // 8004CEB8
  W32(c->r[5]+0x00000070u,c->r[29]); // 8004CEBC
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 8004CEC0
  W32(c->r[6]+0x00000078u,c->r[29]); // 8004CEC4
  c->r[6]=c->r[6]+0x00000080u; // 8004CEC8
  W32(c->r[5]+0x0000007Cu,c->r[29]); // 8004CECC
  W32(c->r[5]+0x00000078u,c->r[29]); // 8004CED0
  c->r[5]=c->r[5]+0x00000080u; // 8004CED4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004CDD0; } // 8004CED8
L_8004CEDC:;
  c->r[4]=0u+0x80000000u; // 8004CEDC
  c->r[5]=R32(c->r[4]+0x000000E0u); // 8004CEE0
  cmps(c,0,(int32_t)c->r[5],0); // 8004CEE4
  if (!crb(c,2)) { goto L_8004CEF4; } // 8004CEE8
  W32(c->r[4]+0x000000DCu,c->r[31]); // 8004CEEC
  goto L_8004CEF8; // 8004CEF0
L_8004CEF4:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 8004CEF4
L_8004CEF8:;
  c->r[0]=0u+0x00000000u; // 8004CEF8
  W32(c->r[31]+0x00000300u,c->r[5]); // 8004CEFC
  c->r[4]=0u+0x80000000u; // 8004CF00
  W32(c->r[31]+0x000002FCu,c->r[0]); // 8004CF04
  W32(c->r[4]+0x000000E0u,c->r[31]); // 8004CF08
  c->lr=0x8004CF10u; f_80049A60(c); // 8004CF0C
  c->r[3]=0u+0x00000001u; // 8004CF10
L_8004CF14:;
  c->r[11]=c->r[1]+0x00000020u; // 8004CF14
  c->lr=0x8004CF1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004CF18
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004CF1C
  c->lr=c->r[0]; // 8004CF20
  c->r[1]=c->r[1]+0x00000020u; // 8004CF24
  return; // 8004CF28
}

// OSExitThread
void f_8004CF30(Ctx* __restrict c) {
  trace_call(0x8004CF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CF30
  c->r[0]=c->lr; // 8004CF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004CF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004CF3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004CF40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004CF44
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004CF48
  c->r[28]=c->r[3]|c->r[3]; // 8004CF4C
  c->lr=0x8004CF54u; f_80049A20(c); // 8004CF50
  c->r[31]=0u+0x80000000u; // 8004CF54
  c->r[29]=c->r[3]|c->r[3]; // 8004CF58
  c->r[30]=R32(c->r[31]+0x000000E4u); // 8004CF5C
  c->r[3]=c->r[30]|c->r[30]; // 8004CF60
  c->lr=0x8004CF68u; f_80045860(c); // 8004CF64
  c->r[0]=R16(c->r[30]+0x000002CAu); // 8004CF68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8004CF6C
  if (crb(c,2)) { goto L_8004CFB4; } // 8004CF70
  c->r[4]=R32(c->r[30]+0x000002FCu); // 8004CF74
  c->r[3]=R32(c->r[30]+0x00000300u); // 8004CF78
  cmps(c,0,(int32_t)c->r[4],0); // 8004CF7C
  if (!crb(c,2)) { goto L_8004CF8C; } // 8004CF80
  W32(c->r[31]+0x000000E0u,c->r[3]); // 8004CF84
  goto L_8004CF90; // 8004CF88
L_8004CF8C:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 8004CF8C
L_8004CF90:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004CF90
  if (!crb(c,2)) { goto L_8004CFA4; } // 8004CF94
  c->r[3]=0u+0x80000000u; // 8004CF98
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8004CF9C
  goto L_8004CFA8; // 8004CFA0
L_8004CFA4:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 8004CFA4
L_8004CFA8:;
  c->r[0]=0u+0x00000000u; // 8004CFA8
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8004CFAC
  goto L_8004CFC0; // 8004CFB0
L_8004CFB4:;
  c->r[0]=0u+0x00000008u; // 8004CFB4
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8004CFB8
  W32(c->r[30]+0x000002D8u,c->r[28]); // 8004CFBC
L_8004CFC0:;
  c->r[3]=c->r[30]|c->r[30]; // 8004CFC0
  c->lr=0x8004CFC8u; f_8004AE80(c); // 8004CFC4
  c->r[3]=c->r[30]+0x000002E8u; // 8004CFC8
  c->lr=0x8004CFD0u; f_8004D870(c); // 8004CFCC
  c->r[0]=0u+0x00000001u; // 8004CFD0
  W32(c->r[13]+0xFFFF8B64u,c->r[0]); // 8004CFD4
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004CFD8
  cmps(c,0,(int32_t)c->r[0],0); // 8004CFDC
  if (crb(c,2)) { goto L_8004CFEC; } // 8004CFE0
  c->r[3]=0u+0x00000000u; // 8004CFE4
  c->lr=0x8004CFECu; f_8004CA70(c); // 8004CFE8
L_8004CFEC:;
  c->r[3]=c->r[29]|c->r[29]; // 8004CFEC
  c->lr=0x8004CFF4u; f_80049A60(c); // 8004CFF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004CFF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004CFF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004CFFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004D000
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004D004
  c->lr=c->r[0]; // 8004D008
  c->r[1]=c->r[1]+0x00000020u; // 8004D00C
  return; // 8004D010
}

// OSCancelThread
void f_8004D020(Ctx* __restrict c) {
  trace_call(0x8004D020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D020
  c->r[0]=c->lr; // 8004D024
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D02C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004D030
  c->r[30]=c->r[3]|c->r[3]; // 8004D034
  c->lr=0x8004D03Cu; f_80049A20(c); // 8004D038
  c->r[31]=c->r[3]|c->r[3]; // 8004D03C
  c->r[3]=c->r[30]|c->r[30]; // 8004D040
  c->lr=0x8004D048u; f_80044630(c); // 8004D044
  c->r[0]=R16(c->r[30]+0x000002C8u); // 8004D048
  cmps(c,0,(int32_t)c->r[0],1); // 8004D04C
  if (crb(c,2)) { goto L_8004D068; } // 8004D050
  cmps(c,0,(int32_t)c->r[0],2); // 8004D054
  if (crb(c,2)) { goto L_8004D080; } // 8004D058
  cmps(c,0,(int32_t)c->r[0],4); // 8004D05C
  if (crb(c,2)) { goto L_8004D08C; } // 8004D060
  goto L_8004D144; // 8004D064
L_8004D068:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 8004D068
  cmps(c,0,(int32_t)c->r[0],0); // 8004D06C
  if (crb(c,1)) { goto L_8004D150; } // 8004D070
  c->r[3]=c->r[30]|c->r[30]; // 8004D074
  c->lr=0x8004D07Cu; f_8004C7C0(c); // 8004D078
  goto L_8004D150; // 8004D07C
L_8004D080:;
  c->r[0]=0u+0x00000001u; // 8004D080
  W32(c->r[13]+0xFFFF8B64u,c->r[0]); // 8004D084
  goto L_8004D150; // 8004D088
L_8004D08C:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 8004D08C
  c->r[5]=R32(c->r[30]+0x000002E4u); // 8004D090
  cmps(c,0,(int32_t)c->r[4],0); // 8004D094
  if (!crb(c,2)) { goto L_8004D0A8; } // 8004D098
  c->r[3]=R32(c->r[30]+0x000002DCu); // 8004D09C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8004D0A0
  goto L_8004D0AC; // 8004D0A4
L_8004D0A8:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8004D0A8
L_8004D0AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D0AC
  if (!crb(c,2)) { goto L_8004D0C0; } // 8004D0B0
  c->r[3]=R32(c->r[30]+0x000002DCu); // 8004D0B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 8004D0B8
  goto L_8004D0C4; // 8004D0BC
L_8004D0C0:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8004D0C0
L_8004D0C4:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 8004D0C4
  c->r[3]=0u+0x00000000u; // 8004D0C8
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8004D0CC
  cmps(c,0,(int32_t)c->r[0],0); // 8004D0D0
  if (crb(c,1)) { goto L_8004D150; } // 8004D0D4
  c->r[3]=R32(c->r[30]+0x000002F0u); // 8004D0D8
  cmps(c,0,(int32_t)c->r[3],0); // 8004D0DC
  if (crb(c,2)) { goto L_8004D150; } // 8004D0E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8004D0E4
L_8004D0E8:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8004D0E8
  cmps(c,0,(int32_t)c->r[0],0); // 8004D0EC
  if (crb(c,1)) { goto L_8004D150; } // 8004D0F0
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8004D0F4
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8004D0F8
  goto L_8004D120; // 8004D0FC
L_8004D100:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8004D100
  cmps(c,0,(int32_t)c->r[6],0); // 8004D104
  if (crb(c,2)) { goto L_8004D11C; } // 8004D108
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8004D10C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D110
  if (!crb(c,0)) { goto L_8004D11C; } // 8004D114
  c->r[4]=c->r[0]|c->r[0]; // 8004D118
L_8004D11C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8004D11C
L_8004D120:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D120
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D100; } // 8004D124
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004D128
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D12C
  if (crb(c,2)) { goto L_8004D150; } // 8004D130
  c->lr=0x8004D138u; f_8004C870(c); // 8004D134
  cmps(c,0,(int32_t)c->r[3],0); // 8004D138
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D0E8; } // 8004D13C
  goto L_8004D150; // 8004D140
L_8004D144:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D144
  c->lr=0x8004D14Cu; f_80049A60(c); // 8004D148
  goto L_8004D1DC; // 8004D14C
L_8004D150:;
  c->r[3]=c->r[30]|c->r[30]; // 8004D150
  c->lr=0x8004D158u; f_80045860(c); // 8004D154
  c->r[0]=R16(c->r[30]+0x000002CAu); // 8004D158
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8004D15C
  if (crb(c,2)) { goto L_8004D1A8; } // 8004D160
  c->r[4]=R32(c->r[30]+0x000002FCu); // 8004D164
  c->r[5]=R32(c->r[30]+0x00000300u); // 8004D168
  cmps(c,0,(int32_t)c->r[4],0); // 8004D16C
  if (!crb(c,2)) { goto L_8004D180; } // 8004D170
  c->r[3]=0u+0x80000000u; // 8004D174
  W32(c->r[3]+0x000000E0u,c->r[5]); // 8004D178
  goto L_8004D184; // 8004D17C
L_8004D180:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 8004D180
L_8004D184:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D184
  if (!crb(c,2)) { goto L_8004D198; } // 8004D188
  c->r[3]=0u+0x80000000u; // 8004D18C
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8004D190
  goto L_8004D19C; // 8004D194
L_8004D198:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 8004D198
L_8004D19C:;
  c->r[0]=0u+0x00000000u; // 8004D19C
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8004D1A0
  goto L_8004D1B0; // 8004D1A4
L_8004D1A8:;
  c->r[0]=0u+0x00000008u; // 8004D1A8
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8004D1AC
L_8004D1B0:;
  c->r[3]=c->r[30]|c->r[30]; // 8004D1B0
  c->lr=0x8004D1B8u; f_8004AE80(c); // 8004D1B4
  c->r[3]=c->r[30]+0x000002E8u; // 8004D1B8
  c->lr=0x8004D1C0u; f_8004D870(c); // 8004D1BC
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004D1C0
  cmps(c,0,(int32_t)c->r[0],0); // 8004D1C4
  if (crb(c,2)) { goto L_8004D1D4; } // 8004D1C8
  c->r[3]=0u+0x00000000u; // 8004D1CC
  c->lr=0x8004D1D4u; f_8004CA70(c); // 8004D1D0
L_8004D1D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D1D4
  c->lr=0x8004D1DCu; f_80049A60(c); // 8004D1D8
L_8004D1DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D1DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D1E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004D1E4
  c->lr=c->r[0]; // 8004D1E8
  c->r[1]=c->r[1]+0x00000010u; // 8004D1EC
  return; // 8004D1F0
}

// OSJoinThread
void f_8004D200(Ctx* __restrict c) {
  trace_call(0x8004D200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D200
  c->r[0]=c->lr; // 8004D204
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D208
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004D20C
  c->r[31]=c->r[3]|c->r[3]; // 8004D210
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004D214
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004D218
  c->r[29]=c->r[4]|c->r[4]; // 8004D21C
  c->lr=0x8004D224u; f_80049A20(c); // 8004D220
  c->r[0]=R16(c->r[31]+0x000002CAu); // 8004D224
  c->r[30]=c->r[3]|c->r[3]; // 8004D228
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8004D22C
  if (!crb(c,2)) { goto L_8004D2B0; } // 8004D230
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8004D234
  cmpu(c,0,c->r[0],0x00000008u); // 8004D238
  if (crb(c,2)) { goto L_8004D2B0; } // 8004D23C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 8004D240
  cmps(c,0,(int32_t)c->r[0],0); // 8004D244
  if (!crb(c,2)) { goto L_8004D2B0; } // 8004D248
  c->r[3]=c->r[31]+0x000002E8u; // 8004D24C
  c->lr=0x8004D254u; f_8004D780(c); // 8004D250
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8004D254
  cmps(c,0,(int32_t)c->r[0],0); // 8004D258
  if (!crb(c,2)) { goto L_8004D268; } // 8004D25C
  c->r[0]=0u+0x00000000u; // 8004D260
  goto L_8004D298; // 8004D264
L_8004D268:;
  c->r[3]=0u+0x80000000u; // 8004D268
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8004D26C
  goto L_8004D28C; // 8004D270
  c->r[0]=c->r[0]|0x00000000u; // 8004D274
L_8004D278:;
  cmpu(c,0,c->r[31],c->r[3]); // 8004D278
  if (!crb(c,2)) { goto L_8004D288; } // 8004D27C
  c->r[0]=0u+0x00000001u; // 8004D280
  goto L_8004D298; // 8004D284
L_8004D288:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 8004D288
L_8004D28C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004D28C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D278; } // 8004D290
  c->r[0]=0u+0x00000000u; // 8004D294
L_8004D298:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004D298
  if (!crb(c,2)) { goto L_8004D2B0; } // 8004D29C
  c->r[3]=c->r[30]|c->r[30]; // 8004D2A0
  c->lr=0x8004D2A8u; f_80049A60(c); // 8004D2A4
  c->r[3]=0u+0x00000000u; // 8004D2A8
  goto L_8004D328; // 8004D2AC
L_8004D2B0:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8004D2B0
  cmpu(c,0,c->r[0],0x00000008u); // 8004D2B4
  if (!crb(c,2)) { goto L_8004D31C; } // 8004D2B8
  cmps(c,0,(int32_t)c->r[29],0); // 8004D2BC
  if (crb(c,2)) { goto L_8004D2CC; } // 8004D2C0
  c->r[0]=R32(c->r[31]+0x000002D8u); // 8004D2C4
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004D2C8
L_8004D2CC:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 8004D2CC
  c->r[5]=R32(c->r[31]+0x00000300u); // 8004D2D0
  cmps(c,0,(int32_t)c->r[4],0); // 8004D2D4
  if (!crb(c,2)) { goto L_8004D2E8; } // 8004D2D8
  c->r[3]=0u+0x80000000u; // 8004D2DC
  W32(c->r[3]+0x000000E0u,c->r[5]); // 8004D2E0
  goto L_8004D2EC; // 8004D2E4
L_8004D2E8:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 8004D2E8
L_8004D2EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D2EC
  if (!crb(c,2)) { goto L_8004D300; } // 8004D2F0
  c->r[3]=0u+0x80000000u; // 8004D2F4
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8004D2F8
  goto L_8004D304; // 8004D2FC
L_8004D300:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 8004D300
L_8004D304:;
  c->r[0]=0u+0x00000000u; // 8004D304
  W16(c->r[31]+0x000002C8u,c->r[0]); // 8004D308
  c->r[3]=c->r[30]|c->r[30]; // 8004D30C
  c->lr=0x8004D314u; f_80049A60(c); // 8004D310
  c->r[3]=0u+0x00000001u; // 8004D314
  goto L_8004D328; // 8004D318
L_8004D31C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004D31C
  c->lr=0x8004D324u; f_80049A60(c); // 8004D320
  c->r[3]=0u+0x00000000u; // 8004D324
L_8004D328:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D328
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004D32C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004D330
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004D334
  c->lr=c->r[0]; // 8004D338
  c->r[1]=c->r[1]+0x00000020u; // 8004D33C
  return; // 8004D340
}

// OSResumeThread
void f_8004D350(Ctx* __restrict c) {
  trace_call(0x8004D350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D350
  c->r[0]=c->lr; // 8004D354
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D358
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004D35C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004D360
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004D364
  c->r[29]=c->r[3]|c->r[3]; // 8004D368
  c->lr=0x8004D370u; f_80049A20(c); // 8004D36C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 8004D370
  c->r[31]=c->r[3]|c->r[3]; // 8004D374
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004D378
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8004D37C
  if (!crb(c,0)) { goto L_8004D390; } // 8004D380
  c->r[0]=0u+0x00000000u; // 8004D384
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8004D388
  goto L_8004D5C4; // 8004D38C
L_8004D390:;
  if (!crb(c,2)) { goto L_8004D5C4; } // 8004D390
  c->r[0]=R16(c->r[29]+0x000002C8u); // 8004D394
  cmps(c,0,(int32_t)c->r[0],1); // 8004D398
  if (crb(c,2)) { goto L_8004D3AC; } // 8004D39C
  cmps(c,0,(int32_t)c->r[0],4); // 8004D3A0
  if (crb(c,2)) { goto L_8004D448; } // 8004D3A4
  goto L_8004D5B0; // 8004D3A8
L_8004D3AC:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 8004D3AC
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8004D3B0
  goto L_8004D3D8; // 8004D3B4
L_8004D3B8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8004D3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8004D3BC
  if (crb(c,2)) { goto L_8004D3D4; } // 8004D3C0
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004D3C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8004D3C8
  if (!crb(c,0)) { goto L_8004D3D4; } // 8004D3CC
  c->r[5]=c->r[0]|c->r[0]; // 8004D3D0
L_8004D3D4:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8004D3D4
L_8004D3D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8004D3D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D3B8; } // 8004D3DC
  c->r[3]=0u+0x801A0000u; // 8004D3E0
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8004D3E4
  c->r[3]=c->r[3]+0xFFFFAD90u; // 8004D3E8
  W32(c->r[29]+0x000002D0u,c->r[5]); // 8004D3EC
  c->r[3]=c->r[3]+c->r[0]; // 8004D3F0
  W32(c->r[29]+0x000002DCu,c->r[3]); // 8004D3F4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8004D3F8
  cmps(c,0,(int32_t)c->r[4],0); // 8004D3FC
  if (!crb(c,2)) { goto L_8004D40C; } // 8004D400
  W32(c->r[3]+0x00000000u,c->r[29]); // 8004D404
  goto L_8004D410; // 8004D408
L_8004D40C:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 8004D40C
L_8004D410:;
  c->r[0]=0u+0x00000000u; // 8004D410
  W32(c->r[29]+0x000002E4u,c->r[4]); // 8004D414
  c->r[4]=R32(c->r[29]+0x000002DCu); // 8004D418
  c->r[3]=0u+0x00000001u; // 8004D41C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8004D420
  W32(c->r[4]+0x00000004u,c->r[29]); // 8004D424
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8004D428
  c->r[4]=R32(c->r[13]+0xFFFF8B68u); // 8004D42C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8004D430
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8004D434
  c->r[0]=c->r[4]|c->r[0]; // 8004D438
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004D43C
  W32(c->r[13]+0xFFFF8B64u,c->r[3]); // 8004D440
  goto L_8004D5B0; // 8004D444
L_8004D448:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 8004D448
  c->r[5]=R32(c->r[29]+0x000002E4u); // 8004D44C
  cmps(c,0,(int32_t)c->r[4],0); // 8004D450
  if (!crb(c,2)) { goto L_8004D464; } // 8004D454
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D458
  W32(c->r[3]+0x00000004u,c->r[5]); // 8004D45C
  goto L_8004D468; // 8004D460
L_8004D464:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8004D464
L_8004D468:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D468
  if (!crb(c,2)) { goto L_8004D47C; } // 8004D46C
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D470
  W32(c->r[3]+0x00000000u,c->r[4]); // 8004D474
  goto L_8004D480; // 8004D478
L_8004D47C:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8004D47C
L_8004D480:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 8004D480
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8004D484
  goto L_8004D4B0; // 8004D488
  c->r[0]=c->r[0]|0x00000000u; // 8004D48C
L_8004D490:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8004D490
  cmps(c,0,(int32_t)c->r[3],0); // 8004D494
  if (crb(c,2)) { goto L_8004D4AC; } // 8004D498
  c->r[3]=R32(c->r[3]+0x000002D0u); // 8004D49C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004D4A0
  if (!crb(c,0)) { goto L_8004D4AC; } // 8004D4A4
  c->r[0]=c->r[3]|c->r[3]; // 8004D4A8
L_8004D4AC:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8004D4AC
L_8004D4B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8004D4B0
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D490; } // 8004D4B4
  W32(c->r[29]+0x000002D0u,c->r[0]); // 8004D4B8
  c->r[4]=R32(c->r[29]+0x000002DCu); // 8004D4BC
  c->r[5]=R32(c->r[4]+0x00000000u); // 8004D4C0
  goto L_8004D4CC; // 8004D4C4
L_8004D4C8:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 8004D4C8
L_8004D4CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D4CC
  if (crb(c,2)) { goto L_8004D4E4; } // 8004D4D0
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8004D4D4
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8004D4D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004D4DC
  if (!crb(c,1)) { IRQCHK(c); goto L_8004D4C8; } // 8004D4E0
L_8004D4E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D4E4
  if (!crb(c,2)) { goto L_8004D51C; } // 8004D4E8
  c->r[3]=R32(c->r[4]+0x00000004u); // 8004D4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8004D4F0
  if (!crb(c,2)) { goto L_8004D500; } // 8004D4F4
  W32(c->r[4]+0x00000000u,c->r[29]); // 8004D4F8
  goto L_8004D504; // 8004D4FC
L_8004D500:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 8004D500
L_8004D504:;
  c->r[0]=0u+0x00000000u; // 8004D504
  W32(c->r[29]+0x000002E4u,c->r[3]); // 8004D508
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D50C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8004D510
  W32(c->r[3]+0x00000004u,c->r[29]); // 8004D514
  goto L_8004D544; // 8004D518
L_8004D51C:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 8004D51C
  c->r[3]=R32(c->r[5]+0x000002E4u); // 8004D520
  W32(c->r[5]+0x000002E4u,c->r[29]); // 8004D524
  cmps(c,0,(int32_t)c->r[3],0); // 8004D528
  W32(c->r[29]+0x000002E4u,c->r[3]); // 8004D52C
  if (!crb(c,2)) { goto L_8004D540; } // 8004D530
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D534
  W32(c->r[3]+0x00000000u,c->r[29]); // 8004D538
  goto L_8004D544; // 8004D53C
L_8004D540:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 8004D540
L_8004D544:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 8004D544
  cmps(c,0,(int32_t)c->r[3],0); // 8004D548
  if (crb(c,2)) { goto L_8004D5B0; } // 8004D54C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8004D550
L_8004D554:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8004D554
  cmps(c,0,(int32_t)c->r[0],0); // 8004D558
  if (crb(c,1)) { goto L_8004D5B0; } // 8004D55C
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8004D560
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8004D564
  goto L_8004D590; // 8004D568
  c->r[0]=c->r[0]|0x00000000u; // 8004D56C
L_8004D570:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8004D570
  cmps(c,0,(int32_t)c->r[6],0); // 8004D574
  if (crb(c,2)) { goto L_8004D58C; } // 8004D578
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8004D57C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D580
  if (!crb(c,0)) { goto L_8004D58C; } // 8004D584
  c->r[4]=c->r[0]|c->r[0]; // 8004D588
L_8004D58C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8004D58C
L_8004D590:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D590
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D570; } // 8004D594
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004D598
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D59C
  if (crb(c,2)) { goto L_8004D5B0; } // 8004D5A0
  c->lr=0x8004D5A8u; f_8004C870(c); // 8004D5A4
  cmps(c,0,(int32_t)c->r[3],0); // 8004D5A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D554; } // 8004D5AC
L_8004D5B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004D5B0
  cmps(c,0,(int32_t)c->r[0],0); // 8004D5B4
  if (crb(c,2)) { goto L_8004D5C4; } // 8004D5B8
  c->r[3]=0u+0x00000000u; // 8004D5BC
  c->lr=0x8004D5C4u; f_8004CA70(c); // 8004D5C0
L_8004D5C4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D5C4
  c->lr=0x8004D5CCu; f_80049A60(c); // 8004D5C8
  c->r[3]=c->r[30]|c->r[30]; // 8004D5CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004D5D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004D5D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004D5D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D5DC
  c->lr=c->r[0]; // 8004D5E0
  c->r[1]=c->r[1]+0x00000020u; // 8004D5E4
  return; // 8004D5E8
}

// OSSuspendThread
void f_8004D5F0(Ctx* __restrict c) {
  trace_call(0x8004D5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D5F0
  c->r[0]=c->lr; // 8004D5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D5F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004D5FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004D600
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004D604
  c->r[29]=c->r[3]|c->r[3]; // 8004D608
  c->lr=0x8004D610u; f_80049A20(c); // 8004D60C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 8004D610
  c->r[31]=c->r[3]|c->r[3]; // 8004D614
  cmps(c,0,(int32_t)c->r[30],0); // 8004D618
  c->r[0]=c->r[30]+0x00000001u; // 8004D61C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8004D620
  if (!crb(c,2)) { goto L_8004D754; } // 8004D624
  c->r[0]=R16(c->r[29]+0x000002C8u); // 8004D628
  cmps(c,0,(int32_t)c->r[0],2); // 8004D62C
  if (crb(c,2)) { goto L_8004D648; } // 8004D630
  cmps(c,0,(int32_t)c->r[0],1); // 8004D634
  if (crb(c,2)) { goto L_8004D658; } // 8004D638
  cmps(c,0,(int32_t)c->r[0],4); // 8004D63C
  if (crb(c,2)) { goto L_8004D664; } // 8004D640
  goto L_8004D740; // 8004D644
L_8004D648:;
  c->r[0]=0u+0x00000001u; // 8004D648
  W32(c->r[13]+0xFFFF8B64u,c->r[0]); // 8004D64C
  W16(c->r[29]+0x000002C8u,c->r[0]); // 8004D650
  goto L_8004D740; // 8004D654
L_8004D658:;
  c->r[3]=c->r[29]|c->r[29]; // 8004D658
  c->lr=0x8004D660u; f_8004C7C0(c); // 8004D65C
  goto L_8004D740; // 8004D660
L_8004D664:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 8004D664
  c->r[5]=R32(c->r[29]+0x000002E4u); // 8004D668
  cmps(c,0,(int32_t)c->r[4],0); // 8004D66C
  if (!crb(c,2)) { goto L_8004D680; } // 8004D670
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D674
  W32(c->r[3]+0x00000004u,c->r[5]); // 8004D678
  goto L_8004D684; // 8004D67C
L_8004D680:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8004D680
L_8004D684:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D684
  if (!crb(c,2)) { goto L_8004D698; } // 8004D688
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D68C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8004D690
  goto L_8004D69C; // 8004D694
L_8004D698:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8004D698
L_8004D69C:;
  c->r[0]=0u+0x00000020u; // 8004D69C
  W32(c->r[29]+0x000002D0u,c->r[0]); // 8004D6A0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D6A4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8004D6A8
  cmps(c,0,(int32_t)c->r[4],0); // 8004D6AC
  if (!crb(c,2)) { goto L_8004D6BC; } // 8004D6B0
  W32(c->r[3]+0x00000000u,c->r[29]); // 8004D6B4
  goto L_8004D6C0; // 8004D6B8
L_8004D6BC:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 8004D6BC
L_8004D6C0:;
  c->r[0]=0u+0x00000000u; // 8004D6C0
  W32(c->r[29]+0x000002E4u,c->r[4]); // 8004D6C4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8004D6C8
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8004D6CC
  W32(c->r[3]+0x00000004u,c->r[29]); // 8004D6D0
  c->r[3]=R32(c->r[29]+0x000002F0u); // 8004D6D4
  cmps(c,0,(int32_t)c->r[3],0); // 8004D6D8
  if (crb(c,2)) { goto L_8004D740; } // 8004D6DC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8004D6E0
L_8004D6E4:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8004D6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8004D6E8
  if (crb(c,1)) { goto L_8004D740; } // 8004D6EC
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8004D6F0
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8004D6F4
  goto L_8004D720; // 8004D6F8
  c->r[0]=c->r[0]|0x00000000u; // 8004D6FC
L_8004D700:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8004D700
  cmps(c,0,(int32_t)c->r[6],0); // 8004D704
  if (crb(c,2)) { goto L_8004D71C; } // 8004D708
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8004D70C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D710
  if (!crb(c,0)) { goto L_8004D71C; } // 8004D714
  c->r[4]=c->r[0]|c->r[0]; // 8004D718
L_8004D71C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8004D71C
L_8004D720:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D720
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D700; } // 8004D724
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8004D728
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8004D72C
  if (crb(c,2)) { goto L_8004D740; } // 8004D730
  c->lr=0x8004D738u; f_8004C870(c); // 8004D734
  cmps(c,0,(int32_t)c->r[3],0); // 8004D738
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D6E4; } // 8004D73C
L_8004D740:;
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004D740
  cmps(c,0,(int32_t)c->r[0],0); // 8004D744
  if (crb(c,2)) { goto L_8004D754; } // 8004D748
  c->r[3]=0u+0x00000000u; // 8004D74C
  c->lr=0x8004D754u; f_8004CA70(c); // 8004D750
L_8004D754:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D754
  c->lr=0x8004D75Cu; f_80049A60(c); // 8004D758
  c->r[3]=c->r[30]|c->r[30]; // 8004D75C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004D760
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004D764
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004D768
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D76C
  c->lr=c->r[0]; // 8004D770
  c->r[1]=c->r[1]+0x00000020u; // 8004D774
  return; // 8004D778
}

// OSSleepThread
void f_8004D780(Ctx* __restrict c) {
  trace_call(0x8004D780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D780
  c->r[0]=c->lr; // 8004D784
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D78C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004D790
  c->r[30]=c->r[3]|c->r[3]; // 8004D794
  c->lr=0x8004D79Cu; f_80049A20(c); // 8004D798
  c->r[4]=0u+0x80000000u; // 8004D79C
  c->r[0]=0u+0x00000004u; // 8004D7A0
  c->r[4]=R32(c->r[4]+0x000000E4u); // 8004D7A4
  c->r[31]=c->r[3]|c->r[3]; // 8004D7A8
  W16(c->r[4]+0x000002C8u,c->r[0]); // 8004D7AC
  W32(c->r[4]+0x000002DCu,c->r[30]); // 8004D7B0
  c->r[5]=R32(c->r[30]+0x00000000u); // 8004D7B4
  goto L_8004D7C4; // 8004D7B8
  c->r[0]=c->r[0]|0x00000000u; // 8004D7BC
L_8004D7C0:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 8004D7C0
L_8004D7C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D7C4
  if (crb(c,2)) { goto L_8004D7DC; } // 8004D7C8
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8004D7CC
  c->r[0]=R32(c->r[4]+0x000002D0u); // 8004D7D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004D7D4
  if (!crb(c,1)) { IRQCHK(c); goto L_8004D7C0; } // 8004D7D8
L_8004D7DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004D7DC
  if (!crb(c,2)) { goto L_8004D810; } // 8004D7E0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8004D7E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004D7E8
  if (!crb(c,2)) { goto L_8004D7F8; } // 8004D7EC
  W32(c->r[30]+0x00000000u,c->r[4]); // 8004D7F0
  goto L_8004D7FC; // 8004D7F4
L_8004D7F8:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 8004D7F8
L_8004D7FC:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8004D7FC
  c->r[0]=0u+0x00000000u; // 8004D800
  W32(c->r[4]+0x000002E0u,c->r[0]); // 8004D804
  W32(c->r[30]+0x00000004u,c->r[4]); // 8004D808
  goto L_8004D834; // 8004D80C
L_8004D810:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 8004D810
  c->r[3]=R32(c->r[5]+0x000002E4u); // 8004D814
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8004D818
  cmps(c,0,(int32_t)c->r[3],0); // 8004D81C
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8004D820
  if (!crb(c,2)) { goto L_8004D830; } // 8004D824
  W32(c->r[30]+0x00000000u,c->r[4]); // 8004D828
  goto L_8004D834; // 8004D82C
L_8004D830:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 8004D830
L_8004D834:;
  c->r[0]=0u+0x00000001u; // 8004D834
  W32(c->r[13]+0xFFFF8B64u,c->r[0]); // 8004D838
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004D83C
  cmps(c,0,(int32_t)c->r[0],0); // 8004D840
  if (crb(c,2)) { goto L_8004D850; } // 8004D844
  c->r[3]=0u+0x00000000u; // 8004D848
  c->lr=0x8004D850u; f_8004CA70(c); // 8004D84C
L_8004D850:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D850
  c->lr=0x8004D858u; f_80049A60(c); // 8004D854
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D85C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004D860
  c->lr=c->r[0]; // 8004D864
  c->r[1]=c->r[1]+0x00000010u; // 8004D868
  return; // 8004D86C
}

// OSWakeupThread
void f_8004D870(Ctx* __restrict c) {
  trace_call(0x8004D870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D870
  c->r[0]=c->lr; // 8004D874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D87C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004D880
  c->r[30]=c->r[3]|c->r[3]; // 8004D884
  c->lr=0x8004D88Cu; f_80049A20(c); // 8004D888
  c->r[5]=0u+0x801A0000u; // 8004D88C
  c->r[31]=c->r[3]|c->r[3]; // 8004D890
  c->r[5]=c->r[5]+0xFFFFAD90u; // 8004D894
  c->r[6]=0u+0x00000000u; // 8004D898
  c->r[3]=0u+0x00000001u; // 8004D89C
  goto L_8004D928; // 8004D8A0
  c->r[0]=c->r[0]|0x00000000u; // 8004D8A4
L_8004D8A8:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 8004D8A8
  cmps(c,0,(int32_t)c->r[4],0); // 8004D8AC
  if (!crb(c,2)) { goto L_8004D8BC; } // 8004D8B0
  W32(c->r[30]+0x00000004u,c->r[6]); // 8004D8B4
  goto L_8004D8C0; // 8004D8B8
L_8004D8BC:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 8004D8BC
L_8004D8C0:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 8004D8C0
  W16(c->r[8]+0x000002C8u,c->r[3]); // 8004D8C4
  c->r[0]=R32(c->r[8]+0x000002CCu); // 8004D8C8
  cmps(c,0,(int32_t)c->r[0],0); // 8004D8CC
  if (crb(c,1)) { goto L_8004D928; } // 8004D8D0
  c->r[0]=R32(c->r[8]+0x000002D0u); // 8004D8D4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8004D8D8
  c->r[4]=c->r[5]+c->r[0]; // 8004D8DC
  W32(c->r[8]+0x000002DCu,c->r[4]); // 8004D8E0
  c->r[7]=R32(c->r[4]+0x00000004u); // 8004D8E4
  cmps(c,0,(int32_t)c->r[7],0); // 8004D8E8
  if (!crb(c,2)) { goto L_8004D8F8; } // 8004D8EC
  W32(c->r[4]+0x00000000u,c->r[8]); // 8004D8F0
  goto L_8004D8FC; // 8004D8F4
L_8004D8F8:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 8004D8F8
L_8004D8FC:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 8004D8FC
  W32(c->r[8]+0x000002E0u,c->r[6]); // 8004D900
  c->r[4]=R32(c->r[8]+0x000002DCu); // 8004D904
  W32(c->r[4]+0x00000004u,c->r[8]); // 8004D908
  c->r[0]=R32(c->r[8]+0x000002D0u); // 8004D90C
  c->r[4]=R32(c->r[13]+0xFFFF8B68u); // 8004D910
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8004D914
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8004D918
  c->r[0]=c->r[4]|c->r[0]; // 8004D91C
  W32(c->r[13]+0xFFFF8B68u,c->r[0]); // 8004D920
  W32(c->r[13]+0xFFFF8B64u,c->r[3]); // 8004D924
L_8004D928:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 8004D928
  cmps(c,0,(int32_t)c->r[8],0); // 8004D92C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D8A8; } // 8004D930
  c->r[0]=R32(c->r[13]+0xFFFF8B64u); // 8004D934
  cmps(c,0,(int32_t)c->r[0],0); // 8004D938
  if (crb(c,2)) { goto L_8004D948; } // 8004D93C
  c->r[3]=0u+0x00000000u; // 8004D940
  c->lr=0x8004D948u; f_8004CA70(c); // 8004D944
L_8004D948:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D948
  c->lr=0x8004D950u; f_80049A60(c); // 8004D94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D954
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004D958
  c->lr=c->r[0]; // 8004D95C
  c->r[1]=c->r[1]+0x00000010u; // 8004D960
  return; // 8004D964
}

// fn_8004D970
void f_8004D970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D970
  c->r[0]=c->lr; // 8004D974
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D97C
  c->r[31]=c->r[3]|c->r[3]; // 8004D980
  c->lr=0x8004D988u; f_80044610(c); // 8004D984
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8004D988
  cmps(c,0,(int32_t)c->r[0],0); // 8004D98C
  if (!crb(c,2)) { goto L_8004D99C; } // 8004D990
  c->r[0]=0u+0x00000000u; // 8004D994
  goto L_8004D9C8; // 8004D998
L_8004D99C:;
  c->r[4]=0u+0x80000000u; // 8004D99C
  c->r[4]=R32(c->r[4]+0x000000DCu); // 8004D9A0
  goto L_8004D9BC; // 8004D9A4
L_8004D9A8:;
  cmpu(c,0,c->r[3],c->r[4]); // 8004D9A8
  if (!crb(c,2)) { goto L_8004D9B8; } // 8004D9AC
  c->r[0]=0u+0x00000001u; // 8004D9B0
  goto L_8004D9C8; // 8004D9B4
L_8004D9B8:;
  c->r[4]=R32(c->r[4]+0x000002FCu); // 8004D9B8
L_8004D9BC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8004D9BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8004D9A8; } // 8004D9C0
  c->r[0]=0u+0x00000000u; // 8004D9C4
L_8004D9C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004D9C8
  if (crb(c,2)) { goto L_8004D9DC; } // 8004D9CC
  c->r[3]=c->r[31]|c->r[31]; // 8004D9D0
  c->lr=0x8004D9D8u; f_80044610(c); // 8004D9D4
  c->lr=0x8004D9DCu; f_8004D350(c); // 8004D9D8
L_8004D9DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D9DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D9E0
  c->lr=c->r[0]; // 8004D9E4
  c->r[1]=c->r[1]+0x00000010u; // 8004D9E8
  return; // 8004D9EC
}

// fn_8004D9F0
void f_8004D9F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D9F0
  c->r[0]=c->lr; // 8004D9F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004D9F8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004D9FC
  W32(c->r[1]+0x00000048u,c->r[30]); // 8004DA00
  W32(c->r[1]+0x00000044u,c->r[29]); // 8004DA04
  c->r[29]=c->r[3]|c->r[3]; // 8004DA08
  W32(c->r[1]+0x00000040u,c->r[28]); // 8004DA0C
  c->r[28]=c->r[4]|c->r[4]; // 8004DA10
  c->lr=0x8004DA18u; f_80049A20(c); // 8004DA14
  c->r[4]=0u+0x80000000u; // 8004DA18
  c->r[30]=c->r[3]|c->r[3]; // 8004DA1C
  c->r[31]=R32(c->r[4]+0x000000E4u); // 8004DA20
  cmps(c,0,(int32_t)c->r[31],0); // 8004DA24
  if (!crb(c,2)) { goto L_8004DA34; } // 8004DA28
  c->lr=0x8004DA30u; f_80049A60(c); // 8004DA2C
  goto L_8004DA78; // 8004DA30
L_8004DA34:;
  c->r[3]=c->r[1]+0x00000008u; // 8004DA34
  c->lr=0x8004DA3Cu; f_80043E70(c); // 8004DA38
  c->r[4]=c->r[31]|c->r[31]; // 8004DA3C
  c->r[3]=c->r[1]+0x00000008u; // 8004DA40
  c->lr=0x8004DA48u; f_80044620(c); // 8004DA44
  c->r[7]=0u+0x80050000u; // 8004DA48
  c->r[6]=c->r[28]|c->r[28]; // 8004DA4C
  c->r[5]=c->r[29]|c->r[29]; // 8004DA50
  c->r[3]=c->r[1]+0x00000008u; // 8004DA54
  c->r[7]=c->r[7]+0xFFFFD970u; // 8004DA58
  c->lr=0x8004DA60u; f_800440D0(c); // 8004DA5C
  c->r[3]=c->r[31]|c->r[31]; // 8004DA60
  c->lr=0x8004DA68u; f_8004D5F0(c); // 8004DA64
  c->r[3]=c->r[1]+0x00000008u; // 8004DA68
  c->lr=0x8004DA70u; f_800441D0(c); // 8004DA6C
  c->r[3]=c->r[30]|c->r[30]; // 8004DA70
  c->lr=0x8004DA78u; f_80049A60(c); // 8004DA74
L_8004DA78:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004DA78
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004DA7C
  c->r[30]=R32(c->r[1]+0x00000048u); // 8004DA80
  c->r[29]=R32(c->r[1]+0x00000044u); // 8004DA84
  c->r[28]=R32(c->r[1]+0x00000040u); // 8004DA88
  c->lr=c->r[0]; // 8004DA8C
  c->r[1]=c->r[1]+0x00000050u; // 8004DA90
  return; // 8004DA94
}

// OSGetTime
void f_8004DAA0(Ctx* __restrict c) {
  trace_call(0x8004DAA0u);
L_8004DAA0:;
  c->r[3]=mftb(c,269); // 8004DAA0
  c->r[4]=mftb(c,268); // 8004DAA4
  c->r[5]=mftb(c,269); // 8004DAA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 8004DAAC
  if (!crb(c,2)) { IRQCHK(c); goto L_8004DAA0; } // 8004DAB0
  return; // 8004DAB4
}

// OSGetTick
void f_8004DAC0(Ctx* __restrict c) {
  trace_call(0x8004DAC0u);
  c->r[3]=mftb(c,268); // 8004DAC0
  return; // 8004DAC4
}

// __OSGetSystemTime
void f_8004DAD0(Ctx* __restrict c) {
  trace_call(0x8004DAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DAD0
  c->r[0]=c->lr; // 8004DAD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DAD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004DADC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004DAE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004DAE4
  c->lr=0x8004DAECu; f_80049A20(c); // 8004DAE8
  c->r[31]=c->r[3]|c->r[3]; // 8004DAEC
  c->lr=0x8004DAF4u; f_8004DAA0(c); // 8004DAF0
  c->r[6]=0u+0x80000000u; // 8004DAF4
  c->r[5]=R32(c->r[6]+0x000030DCu); // 8004DAF8
  c->r[0]=R32(c->r[6]+0x000030D8u); // 8004DAFC
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 8004DB00
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 8004DB04
  c->r[3]=c->r[31]|c->r[31]; // 8004DB08
  c->lr=0x8004DB10u; f_80049A60(c); // 8004DB0C
  c->r[4]=c->r[29]|c->r[29]; // 8004DB10
  c->r[3]=c->r[30]|c->r[30]; // 8004DB14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004DB18
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004DB1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004DB20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004DB24
  c->lr=c->r[0]; // 8004DB28
  c->r[1]=c->r[1]+0x00000020u; // 8004DB2C
  return; // 8004DB30
}

// __OSTimeToSystemTime
void f_8004DB40(Ctx* __restrict c) {
  trace_call(0x8004DB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DB40
  c->r[0]=c->lr; // 8004DB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004DB4C
  c->r[31]=c->r[3]|c->r[3]; // 8004DB50
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004DB54
  c->r[30]=c->r[4]|c->r[4]; // 8004DB58
  c->lr=0x8004DB60u; f_80049A20(c); // 8004DB5C
  c->r[5]=0u+0x80000000u; // 8004DB60
  c->r[4]=R32(c->r[5]+0x000030DCu); // 8004DB64
  c->r[0]=R32(c->r[5]+0x000030D8u); // 8004DB68
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 8004DB6C
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 8004DB70
  c->lr=0x8004DB78u; f_80049A60(c); // 8004DB74
  c->r[3]=c->r[31]|c->r[31]; // 8004DB78
  c->r[4]=c->r[30]|c->r[30]; // 8004DB7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004DB80
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004DB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DB88
  c->lr=c->r[0]; // 8004DB8C
  c->r[1]=c->r[1]+0x00000010u; // 8004DB90
  return; // 8004DB94
}

// fn_8004DBA0
void f_8004DBA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DBA0
  c->r[0]=c->lr; // 8004DBA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DBA8
  c->r[11]=c->r[1]+0x00000020u; // 8004DBAC
  c->lr=0x8004DBB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004DBB0
  c->r[6]=0u+0x80000000u; // 8004DBB4
  c->r[29]=c->r[5]|c->r[5]; // 8004DBB8
  c->r[0]=R32(c->r[6]+0x000000F8u); // 8004DBBC
  c->r[28]=c->r[3]|c->r[3]; // 8004DBC0
  c->r[27]=c->r[4]|c->r[4]; // 8004DBC4
  c->r[5]=0u+0x00000000u; // 8004DBC8
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004DBCC
  c->r[6]=c->r[26]|c->r[26]; // 8004DBD0
  c->lr=0x8004DBD8u; f_8006E894(c); // 8004DBD4
  c->r[7]=0u+0x00000000u; // 8004DBD8
  c->r[0]=c->r[3]^0x80000000u; // 8004DBDC
  c->r[6]=c->r[7]^0x80000000u; // 8004DBE0
  c->r[30]=c->r[4]|c->r[4]; // 8004DBE4
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 8004DBE8
  c->r[31]=c->r[3]|c->r[3]; // 8004DBEC
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8004DBF0
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8004DBF4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8004DBF8
  if (crb(c,2)) { goto L_8004DC08; } // 8004DBFC
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 8004DC00
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 8004DC04
L_8004DC08:;
  c->r[4]=0u+0x431C0000u; // 8004DC08
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8004DC0C
  c->r[0]=c->r[4]+0xFFFFDE83u; // 8004DC10
  c->r[5]=0u+0x00000000u; // 8004DC14
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 8004DC18
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8004DC1C
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 8004DC20
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 8004DC24
  c->lr=0x8004DC2Cu; f_8006E678(c); // 8004DC28
  c->r[6]=0u+0x000003E8u; // 8004DC2C
  c->r[5]=0u+0x00000000u; // 8004DC30
  c->lr=0x8004DC38u; f_8006E894(c); // 8004DC34
  W32(c->r[29]+0x00000024u,c->r[4]); // 8004DC38
  c->r[26]=0u+0x80000000u; // 8004DC3C
  c->r[4]=0u+0x10620000u; // 8004DC40
  c->r[3]=c->r[31]|c->r[31]; // 8004DC44
  c->r[0]=R32(c->r[26]+0x000000F8u); // 8004DC48
  c->r[6]=c->r[4]+0x00004DD3u; // 8004DC4C
  c->r[4]=c->r[30]|c->r[30]; // 8004DC50
  c->r[5]=0u+0x00000000u; // 8004DC54
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004DC58
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 8004DC5C
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 8004DC60
  c->lr=0x8004DC68u; f_8006E678(c); // 8004DC64
  c->r[6]=0u+0x000003E8u; // 8004DC68
  c->r[5]=0u+0x00000000u; // 8004DC6C
  c->lr=0x8004DC74u; f_8006E894(c); // 8004DC70
  W32(c->r[29]+0x00000020u,c->r[4]); // 8004DC74
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 8004DC78
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 8004DC7C
  c->r[5]=0u+0x00000000u; // 8004DC80
  c->r[0]=R32(c->r[26]+0x000000F8u); // 8004DC84
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004DC88
  c->lr=0x8004DC90u; f_8006E678(c); // 8004DC8C
  c->r[27]=0u+0x00010000u; // 8004DC90
  c->r[28]=c->r[4]|c->r[4]; // 8004DC94
  c->r[26]=c->r[3]|c->r[3]; // 8004DC98
  c->r[5]=0u+0x00000000u; // 8004DC9C
  c->r[6]=c->r[27]+0x00005180u; // 8004DCA0
  c->lr=0x8004DCA8u; f_8006E678(c); // 8004DCA4
  c->r[3]=0u+0x000B0000u; // 8004DCA8
  c->r[6]=c->r[27]+0x00005180u; // 8004DCAC
  c->r[0]=c->r[3]+0x00002575u; // 8004DCB0
  c->r[5]=0u+0x00000000u; // 8004DCB4
  c->r[31]=addc(c,c->r[4],c->r[0],0); // 8004DCB8
  c->r[3]=c->r[26]|c->r[26]; // 8004DCBC
  c->r[4]=c->r[28]|c->r[28]; // 8004DCC0
  c->lr=0x8004DCC8u; f_8006E894(c); // 8004DCC4
  cmps(c,0,(int32_t)c->r[4],0); // 8004DCC8
  if (!crb(c,0)) { goto L_8004DCDC; } // 8004DCCC
  c->r[4]=c->r[4]+0x00010000u; // 8004DCD0
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8004DCD4
  c->r[4]=c->r[4]+0x00005180u; // 8004DCD8
L_8004DCDC:;
  c->r[6]=0u+0x92490000u; // 8004DCDC
  c->r[5]=0u+0xB38D0000u; // 8004DCE0
  c->r[7]=c->r[31]+0x00000006u; // 8004DCE4
  c->r[3]=0u+0x51EC0000u; // 8004DCE8
  c->r[0]=c->r[5]+0xFFFFF9B1u; // 8004DCEC
  c->r[6]=c->r[6]+0x00002493u; // 8004DCF0
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[7])>>32); // 8004DCF4
  c->r[9]=c->r[3]+0xFFFF851Fu; // 8004DCF8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 8004DCFC
  c->r[3]=c->r[5]+c->r[7]; // 8004DD00
  c->r[3]=sraw(c,c->r[3],2); // 8004DD04
  c->r[5]=rotl(c->r[3],1)&0x00000001u; // 8004DD08
  c->r[0]=c->r[0]+c->r[31]; // 8004DD0C
  c->r[3]=c->r[3]+c->r[5]; // 8004DD10
  c->r[0]=sraw(c,c->r[0],8); // 8004DD14
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)7); // 8004DD18
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004DD1C
  c->r[3]=c->r[0]+c->r[3]; // 8004DD20
  c->r[0]=c->r[7]-c->r[5]; // 8004DD24
  W32(c->r[29]+0x00000018u,c->r[0]); // 8004DD28
  c->r[10]=(uint32_t)((int32_t)c->r[3]*(int32_t)365); // 8004DD2C
  goto L_8004DD40; // 8004DD30
  c->r[0]=c->r[0]|0x00000000u; // 8004DD34
L_8004DD38:;
  c->r[10]=c->r[10]+0xFFFFFE93u; // 8004DD38
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8004DD3C
L_8004DD40:;
  cmps(c,0,(int32_t)c->r[3],1); // 8004DD40
  if (crb(c,0)) { goto L_8004DD80; } // 8004DD44
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8004DD48
  c->r[0]=c->r[3]+0x00000003u; // 8004DD4C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[5])>>32); // 8004DD50
  c->r[7]=sraw(c,c->r[5],7); // 8004DD54
  c->r[5]=sraw(c,c->r[5],5); // 8004DD58
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8004DD5C
  c->r[0]=sraw(c,c->r[0],2); // 8004DD60
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8004DD64
  c->r[5]=c->r[5]+c->r[6]; // 8004DD68
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8004DD6C
  c->r[6]=c->r[7]+c->r[8]; // 8004DD70
  c->r[0]=c->r[0]-c->r[5]; // 8004DD74
  c->r[0]=c->r[6]+c->r[0]; // 8004DD78
  goto L_8004DD84; // 8004DD7C
L_8004DD80:;
  c->r[0]=0u+0x00000000u; // 8004DD80
L_8004DD84:;
  c->r[7]=c->r[10]+c->r[0]; // 8004DD84
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 8004DD88
  if (crb(c,0)) { IRQCHK(c); goto L_8004DD38; } // 8004DD8C
  c->r[0]=rotl(c->r[3],30)&0xC0000000u; // 8004DD90
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 8004DD94
  c->r[5]=c->r[0]-c->r[6]; // 8004DD98
  W32(c->r[29]+0x00000014u,c->r[3]); // 8004DD9C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFFu; // 8004DDA0
  c->r[0]=c->r[31]-c->r[7]; // 8004DDA4
  c->r[5]=c->r[5]+c->r[6]; cr0(c,c->r[5]); // 8004DDA8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8004DDAC
  c->r[7]=0u+0x00000000u; // 8004DDB0
  if (!crb(c,2)) { goto L_8004DDDC; } // 8004DDB4
  c->r[5]=0u+0x51EC0000u; // 8004DDB8
  c->r[5]=c->r[5]+0xFFFF851Fu; // 8004DDBC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 8004DDC0
  c->r[5]=sraw(c,c->r[5],5); // 8004DDC4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8004DDC8
  c->r[5]=c->r[5]+c->r[6]; // 8004DDCC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 8004DDD0
  c->r[5]=c->r[3]-c->r[5]; cr0(c,c->r[5]); // 8004DDD4
  if (!crb(c,2)) { goto L_8004DE00; } // 8004DDD8
L_8004DDDC:;
  c->r[5]=0u+0x51EC0000u; // 8004DDDC
  c->r[5]=c->r[5]+0xFFFF851Fu; // 8004DDE0
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 8004DDE4
  c->r[5]=sraw(c,c->r[5],7); // 8004DDE8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8004DDEC
  c->r[5]=c->r[5]+c->r[6]; // 8004DDF0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)400); // 8004DDF4
  c->r[3]=c->r[3]-c->r[5]; cr0(c,c->r[3]); // 8004DDF8
  if (!crb(c,2)) { goto L_8004DE04; } // 8004DDFC
L_8004DE00:;
  c->r[7]=0u+0x00000001u; // 8004DE00
L_8004DE04:;
  cmps(c,0,(int32_t)c->r[7],0); // 8004DE04
  c->r[7]=0u+0x80140000u; // 8004DE08
  c->r[7]=c->r[7]+0xFFFF94B8u; // 8004DE0C
  if (crb(c,2)) { goto L_8004DE1C; } // 8004DE10
  c->r[7]=0u+0x80140000u; // 8004DE14
  c->r[7]=c->r[7]+0xFFFF94E8u; // 8004DE18
L_8004DE1C:;
  c->r[6]=0u+0x0000000Cu; // 8004DE1C
  c->r[3]=0u+0x00000030u; // 8004DE20
  c->r[0]=c->r[0]|0x00000000u; // 8004DE24
L_8004DE28:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8004DE28
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8004DE2C
  c->r[5]=R32(c->r[7]+c->r[3]); // 8004DE30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8004DE34
  if (crb(c,0)) { IRQCHK(c); goto L_8004DE28; } // 8004DE38
  c->r[5]=0u+0x88890000u; // 8004DE3C
  W32(c->r[29]+0x00000010u,c->r[6]); // 8004DE40
  c->r[6]=c->r[5]+0xFFFF8889u; // 8004DE44
  c->r[11]=c->r[1]+0x00000020u; // 8004DE48
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[4])>>32); // 8004DE4C
  c->r[3]=R32(c->r[7]+c->r[3]); // 8004DE50
  c->r[3]=c->r[0]-c->r[3]; // 8004DE54
  c->r[0]=c->r[3]+0x00000001u; // 8004DE58
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8004DE5C
  c->r[3]=c->r[5]+c->r[4]; // 8004DE60
  c->r[0]=sraw(c,c->r[3],5); // 8004DE64
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8004DE68
  c->r[9]=c->r[0]+c->r[5]; // 8004DE6C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[9])>>32); // 8004DE70
  c->r[0]=c->r[0]+c->r[9]; // 8004DE74
  c->r[7]=sraw(c,c->r[0],5); // 8004DE78
  c->r[5]=sraw(c,c->r[0],5); // 8004DE7C
  c->r[0]=sraw(c,c->r[3],5); // 8004DE80
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8004DE84
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8004DE88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004DE8C
  c->r[7]=c->r[7]+c->r[8]; // 8004DE90
  c->r[0]=c->r[0]+c->r[3]; // 8004DE94
  c->r[5]=c->r[5]+c->r[6]; // 8004DE98
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 8004DE9C
  W32(c->r[29]+0x00000008u,c->r[7]); // 8004DEA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 8004DEA4
  c->r[3]=c->r[9]-c->r[3]; // 8004DEA8
  W32(c->r[29]+0x00000004u,c->r[3]); // 8004DEAC
  c->r[0]=c->r[4]-c->r[0]; // 8004DEB0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004DEB4
  c->lr=0x8004DEBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004DEB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004DEBC
  c->lr=c->r[0]; // 8004DEC0
  c->r[1]=c->r[1]+0x00000020u; // 8004DEC4
  return; // 8004DEC8
}

// OSUTF8to32
void f_8004DED0(Ctx* __restrict c) {
  trace_call(0x8004DED0u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 8004DED0
  cmps(c,0,(int32_t)c->r[6],0); // 8004DED4
  if (crb(c,2)) { goto L_8004DEE0; } // 8004DED8
  c->r[3]=c->r[3]+0x00000001u; // 8004DEDC
L_8004DEE0:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 8004DEE0
  if (!crb(c,2)) { goto L_8004DEF0; } // 8004DEE4
  c->r[7]=0u+0x00000000u; // 8004DEE8
  goto L_8004DF40; // 8004DEEC
L_8004DEF0:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 8004DEF0
  cmpu(c,0,c->r[0],0x000000C0u); // 8004DEF4
  if (!crb(c,2)) { goto L_8004DF08; } // 8004DEF8
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 8004DEFC
  c->r[7]=0u+0x00000001u; // 8004DF00
  goto L_8004DF40; // 8004DF04
L_8004DF08:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 8004DF08
  cmpu(c,0,c->r[0],0x000000E0u); // 8004DF0C
  if (!crb(c,2)) { goto L_8004DF20; } // 8004DF10
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 8004DF14
  c->r[7]=0u+0x00000002u; // 8004DF18
  goto L_8004DF40; // 8004DF1C
L_8004DF20:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 8004DF20
  cmpu(c,0,c->r[0],0x000000F0u); // 8004DF24
  if (!crb(c,2)) { goto L_8004DF38; } // 8004DF28
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8004DF2C
  c->r[7]=0u+0x00000003u; // 8004DF30
  goto L_8004DF40; // 8004DF34
L_8004DF38:;
  c->r[3]=0u+0x00000000u; // 8004DF38
  return; // 8004DF3C
L_8004DF40:;
  c->ctr=c->r[7]; // 8004DF40
  cmpu(c,0,c->r[7],0x00000000u); // 8004DF44
  if (!crb(c,1)) { goto L_8004DF7C; } // 8004DF48
  c->r[0]=c->r[0]|0x00000000u; // 8004DF4C
L_8004DF50:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 8004DF50
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 8004DF54
  c->r[3]=c->r[3]+0x00000001u; // 8004DF58
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 8004DF5C
  cmpu(c,0,c->r[0],0x00000080u); // 8004DF60
  if (crb(c,2)) { goto L_8004DF70; } // 8004DF64
  c->r[3]=0u+0x00000000u; // 8004DF68
  return; // 8004DF6C
L_8004DF70:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 8004DF70
  c->r[6]=c->r[6]|c->r[0]; // 8004DF74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004DF50; } // 8004DF78
L_8004DF7C:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 8004DF7C
  if (crb(c,1)) { goto L_8004DF94; } // 8004DF80
  cmps(c,0,(int32_t)c->r[7],0); // 8004DF84
  if (crb(c,2)) { goto L_8004DFC4; } // 8004DF88
  c->r[3]=0u+0x00000000u; // 8004DF8C
  return; // 8004DF90
L_8004DF94:;
  cmpu(c,0,c->r[6],0x000007FFu); // 8004DF94
  if (crb(c,1)) { goto L_8004DFAC; } // 8004DF98
  cmpu(c,0,c->r[7],0x00000001u); // 8004DF9C
  if (crb(c,2)) { goto L_8004DFC4; } // 8004DFA0
  c->r[3]=0u+0x00000000u; // 8004DFA4
  return; // 8004DFA8
L_8004DFAC:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 8004DFAC
  if (crb(c,1)) { goto L_8004DFC4; } // 8004DFB0
  cmpu(c,0,c->r[7],0x00000002u); // 8004DFB4
  if (crb(c,2)) { goto L_8004DFC4; } // 8004DFB8
  c->r[3]=0u+0x00000000u; // 8004DFBC
  return; // 8004DFC0
L_8004DFC4:;
  cmpu(c,0,c->r[6],0x0000D800u); // 8004DFC4
  if (crb(c,0)) { goto L_8004DFDC; } // 8004DFC8
  cmpu(c,0,c->r[6],0x0000DFFFu); // 8004DFCC
  if (crb(c,1)) { goto L_8004DFDC; } // 8004DFD0
  c->r[3]=0u+0x00000000u; // 8004DFD4
  return; // 8004DFD8
L_8004DFDC:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 8004DFDC
  return; // 8004DFE0
}

// OSUTF16to32
void f_8004DFF0(Ctx* __restrict c) {
  trace_call(0x8004DFF0u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 8004DFF0
  cmps(c,0,(int32_t)c->r[5],0); // 8004DFF4
  if (crb(c,2)) { goto L_8004E000; } // 8004DFF8
  c->r[3]=c->r[3]+0x00000002u; // 8004DFFC
L_8004E000:;
  cmpu(c,0,c->r[5],0x0000D800u); // 8004E000
  if (crb(c,0)) { goto L_8004E010; } // 8004E004
  cmpu(c,0,c->r[5],0x0000DFFFu); // 8004E008
  if (!crb(c,1)) { goto L_8004E018; } // 8004E00C
L_8004E010:;
  c->r[6]=c->r[5]|c->r[5]; // 8004E010
  goto L_8004E058; // 8004E014
L_8004E018:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 8004E018
  if (crb(c,1)) { goto L_8004E050; } // 8004E01C
  c->r[0]=R16(c->r[3]+0x00000000u); // 8004E020
  c->r[3]=c->r[3]+0x00000002u; // 8004E024
  cmpu(c,0,c->r[0],0x0000DC00u); // 8004E028
  if (crb(c,0)) { goto L_8004E048; } // 8004E02C
  cmpu(c,0,c->r[0],0x0000DFFFu); // 8004E030
  if (crb(c,1)) { goto L_8004E048; } // 8004E034
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 8004E038
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 8004E03C
  c->r[6]=c->r[6]+0x00010000u; // 8004E040
  goto L_8004E058; // 8004E044
L_8004E048:;
  c->r[3]=0u+0x00000000u; // 8004E048
  return; // 8004E04C
L_8004E050:;
  c->r[3]=0u+0x00000000u; // 8004E050
  return; // 8004E054
L_8004E058:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 8004E058
  return; // 8004E05C
}

// OSUTF32toANSI
void f_8004E060(Ctx* __restrict c) {
  trace_call(0x8004E060u);
  cmpu(c,0,c->r[3],0x000000FFu); // 8004E060
  if (!crb(c,1)) { goto L_8004E070; } // 8004E064
  c->r[3]=0u+0x00000000u; // 8004E068
  return; // 8004E06C
L_8004E070:;
  cmpu(c,0,c->r[3],0x00000080u); // 8004E070
  if (crb(c,0)) { goto L_8004E080; } // 8004E074
  cmpu(c,0,c->r[3],0x0000009Fu); // 8004E078
  if (!crb(c,1)) { goto L_8004E088; } // 8004E07C
L_8004E080:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8004E080
  return; // 8004E084
L_8004E088:;
  cmpu(c,0,c->r[3],0x00000152u); // 8004E088
  if (crb(c,0)) { goto L_8004E0D4; } // 8004E08C
  cmpu(c,0,c->r[3],0x00002122u); // 8004E090
  if (crb(c,1)) { goto L_8004E0D4; } // 8004E094
  c->r[4]=0u+0x80140000u; // 8004E098
  c->r[0]=0u+0x00000020u; // 8004E09C
  c->r[4]=c->r[4]+0xFFFF9518u; // 8004E0A0
  c->r[5]=0u+0x00000000u; // 8004E0A4
  c->ctr=c->r[0]; // 8004E0A8
  c->r[0]=c->r[0]|0x00000000u; // 8004E0AC
L_8004E0B0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8004E0B0
  cmpu(c,0,c->r[3],c->r[0]); // 8004E0B4
  if (!crb(c,2)) { goto L_8004E0C8; } // 8004E0B8
  c->r[0]=c->r[5]+0x00000080u; // 8004E0BC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8004E0C0
  return; // 8004E0C4
L_8004E0C8:;
  c->r[4]=c->r[4]+0x00000002u; // 8004E0C8
  c->r[5]=c->r[5]+0x00000001u; // 8004E0CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004E0B0; } // 8004E0D0
L_8004E0D4:;
  c->r[3]=0u+0x00000000u; // 8004E0D4
  return; // 8004E0D8
}

// OSUTF32toSJIS
void f_8004E0E0(Ctx* __restrict c) {
  trace_call(0x8004E0E0u);
  c->r[0]=0u+0x00010000u; // 8004E0E0
  cmpu(c,0,c->r[3],c->r[0]); // 8004E0E4
  if (crb(c,0)) { goto L_8004E0F4; } // 8004E0E8
  c->r[3]=0u+0x00000000u; // 8004E0EC
  return; // 8004E0F0
L_8004E0F4:;
  c->r[4]=0u+0x80140000u; // 8004E0F4
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 8004E0F8
  c->r[4]=c->r[4]+0x00004F58u; // 8004E0FC
  c->r[4]=R32(c->r[4]+c->r[0]); // 8004E100
  cmps(c,0,(int32_t)c->r[4],0); // 8004E104
  if (crb(c,2)) { goto L_8004E118; } // 8004E108
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 8004E10C
  c->r[3]=R16(c->r[4]+c->r[0]); // 8004E110
  return; // 8004E114
L_8004E118:;
  c->r[3]=0u+0x00000000u; // 8004E118
  return; // 8004E11C
}

// __OSGetIPCBufferHi
void f_8004E120(Ctx* __restrict c) {
  trace_call(0x8004E120u);
  c->r[3]=R32(c->r[13]+0xFFFF8B70u); // 8004E120
  return; // 8004E124
}

// __OSGetIPCBufferLo
void f_8004E130(Ctx* __restrict c) {
  trace_call(0x8004E130u);
  c->r[3]=R32(c->r[13]+0xFFFF8120u); // 8004E130
  return; // 8004E134
}

// __OSInitIPCBuffer
void f_8004E140(Ctx* __restrict c) {
  trace_call(0x8004E140u);
  c->r[3]=0u+0x80000000u; // 8004E140
  c->r[0]=R32(c->r[3]+0x00003130u); // 8004E144
  W32(c->r[13]+0xFFFF8120u,c->r[0]); // 8004E148
  c->r[0]=R32(c->r[3]+0x00003134u); // 8004E14C
  W32(c->r[13]+0xFFFF8B70u,c->r[0]); // 8004E150
  return; // 8004E154
}

// fn_8004E160
void f_8004E160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E160
  c->r[0]=c->lr; // 8004E164
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E16C
  c->r[31]=c->r[3]|c->r[3]; // 8004E170
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004E174
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004E178
  c->lr=0x8004E180u; f_80049A20(c); // 8004E17C
  cmps(c,0,(int32_t)c->r[31],0); // 8004E180
  c->r[29]=R32(c->r[13]+0xFFFF8B94u); // 8004E184
  c->r[30]=c->r[3]|c->r[3]; // 8004E188
  if (crb(c,2)) { goto L_8004E198; } // 8004E18C
  W32(c->r[13]+0xFFFF8B94u,c->r[31]); // 8004E190
  goto L_8004E1A4; // 8004E194
L_8004E198:;
  c->r[3]=0u+0x80050000u; // 8004E198
  c->r[3]=c->r[3]+0xFFFFE6F0u; // 8004E19C
  W32(c->r[13]+0xFFFF8B94u,c->r[3]); // 8004E1A0
L_8004E1A4:;
  c->r[0]=R32(c->r[13]+0xFFFF8B88u); // 8004E1A4
  cmps(c,0,(int32_t)c->r[0],0); // 8004E1A8
  if (!crb(c,2)) { goto L_8004E20C; } // 8004E1AC
  c->lr=0x8004E1B4u; f_80049A20(c); // 8004E1B0
  c->r[31]=c->r[3]|c->r[3]; // 8004E1B4
  c->r[5]=0u+0x801A0000u; // 8004E1B8
  c->r[7]=0u+0x801A0000u; // 8004E1BC
  c->r[9]=0u+0x80050000u; // 8004E1C0
  c->r[3]=R32(c->r[13]+0xFFFF8B84u); // 8004E1C4
  c->r[5]=c->r[5]+0xFFFFB480u; // 8004E1C8
  c->r[7]=c->r[7]+0xFFFFB4A0u; // 8004E1CC
  c->r[9]=c->r[9]+0xFFFFE710u; // 8004E1D0
  c->r[4]=0u+0x00001000u; // 8004E1D4
  c->r[6]=0u+0x00000020u; // 8004E1D8
  c->r[8]=0u+0x00000020u; // 8004E1DC
  c->r[10]=0u+0x00000000u; // 8004E1E0
  c->lr=0x8004E1E8u; f_80085AA0(c); // 8004E1E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004E1E8
  if (!crb(c,2)) { goto L_8004E1FC; } // 8004E1EC
  c->r[0]=0u+0x00000001u; // 8004E1F0
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E1F4
  goto L_8004E204; // 8004E1F8
L_8004E1FC:;
  c->r[0]=0u+0x00000000u; // 8004E1FC
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E200
L_8004E204:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E204
  c->lr=0x8004E20Cu; f_80049A60(c); // 8004E208
L_8004E20C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004E20C
  c->lr=0x8004E214u; f_80049A60(c); // 8004E210
  c->r[3]=0u+0x80050000u; // 8004E214
  c->r[3]=c->r[3]+0xFFFFE6F0u; // 8004E218
  cmpu(c,0,c->r[29],c->r[3]); // 8004E21C
  if (!crb(c,2)) { goto L_8004E22C; } // 8004E220
  c->r[3]=0u+0x00000000u; // 8004E224
  goto L_8004E230; // 8004E228
L_8004E22C:;
  c->r[3]=c->r[29]|c->r[29]; // 8004E22C
L_8004E230:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E230
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E234
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004E238
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004E23C
  c->lr=c->r[0]; // 8004E240
  c->r[1]=c->r[1]+0x00000020u; // 8004E244
  return; // 8004E248
}

// fn_8004E250
void f_8004E250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E250
  c->r[0]=c->lr; // 8004E254
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E25C
  c->r[31]=c->r[3]|c->r[3]; // 8004E260
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004E264
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004E268
  c->lr=0x8004E270u; f_80049A20(c); // 8004E26C
  cmps(c,0,(int32_t)c->r[31],0); // 8004E270
  c->r[29]=R32(c->r[13]+0xFFFF8B90u); // 8004E274
  c->r[30]=c->r[3]|c->r[3]; // 8004E278
  if (crb(c,2)) { goto L_8004E288; } // 8004E27C
  W32(c->r[13]+0xFFFF8B90u,c->r[31]); // 8004E280
  goto L_8004E294; // 8004E284
L_8004E288:;
  c->r[3]=0u+0x80050000u; // 8004E288
  c->r[3]=c->r[3]+0xFFFFE700u; // 8004E28C
  W32(c->r[13]+0xFFFF8B90u,c->r[3]); // 8004E290
L_8004E294:;
  c->r[0]=R32(c->r[13]+0xFFFF8B88u); // 8004E294
  cmps(c,0,(int32_t)c->r[0],0); // 8004E298
  if (!crb(c,2)) { goto L_8004E2FC; } // 8004E29C
  c->lr=0x8004E2A4u; f_80049A20(c); // 8004E2A0
  c->r[31]=c->r[3]|c->r[3]; // 8004E2A4
  c->r[5]=0u+0x801A0000u; // 8004E2A8
  c->r[7]=0u+0x801A0000u; // 8004E2AC
  c->r[9]=0u+0x80050000u; // 8004E2B0
  c->r[3]=R32(c->r[13]+0xFFFF8B84u); // 8004E2B4
  c->r[5]=c->r[5]+0xFFFFB480u; // 8004E2B8
  c->r[7]=c->r[7]+0xFFFFB4A0u; // 8004E2BC
  c->r[9]=c->r[9]+0xFFFFE710u; // 8004E2C0
  c->r[4]=0u+0x00001000u; // 8004E2C4
  c->r[6]=0u+0x00000020u; // 8004E2C8
  c->r[8]=0u+0x00000020u; // 8004E2CC
  c->r[10]=0u+0x00000000u; // 8004E2D0
  c->lr=0x8004E2D8u; f_80085AA0(c); // 8004E2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8004E2D8
  if (!crb(c,2)) { goto L_8004E2EC; } // 8004E2DC
  c->r[0]=0u+0x00000001u; // 8004E2E0
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E2E4
  goto L_8004E2F4; // 8004E2E8
L_8004E2EC:;
  c->r[0]=0u+0x00000000u; // 8004E2EC
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E2F0
L_8004E2F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E2F4
  c->lr=0x8004E2FCu; f_80049A60(c); // 8004E2F8
L_8004E2FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8004E2FC
  c->lr=0x8004E304u; f_80049A60(c); // 8004E300
  c->r[3]=0u+0x80050000u; // 8004E304
  c->r[3]=c->r[3]+0xFFFFE700u; // 8004E308
  cmpu(c,0,c->r[29],c->r[3]); // 8004E30C
  if (!crb(c,2)) { goto L_8004E31C; } // 8004E310
  c->r[3]=0u+0x00000000u; // 8004E314
  goto L_8004E320; // 8004E318
L_8004E31C:;
  c->r[3]=c->r[29]|c->r[29]; // 8004E31C
L_8004E320:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E320
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E324
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004E328
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004E32C
  c->lr=c->r[0]; // 8004E330
  c->r[1]=c->r[1]+0x00000020u; // 8004E334
  return; // 8004E338
}

// __OSInitSTM
void f_8004E340(Ctx* __restrict c) {
  trace_call(0x8004E340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E340
  c->r[0]=c->lr; // 8004E344
  c->r[4]=0u+0x80050000u; // 8004E348
  c->r[3]=0u+0x80050000u; // 8004E34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E350
  c->r[4]=c->r[4]+0xFFFFE700u; // 8004E354
  c->r[3]=c->r[3]+0xFFFFE6F0u; // 8004E358
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004E35C
  c->r[31]=0u+0x00000000u; // 8004E360
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004E364
  c->r[0]=R32(c->r[13]+0xFFFF8B7Cu); // 8004E368
  W32(c->r[13]+0xFFFF8B90u,c->r[4]); // 8004E36C
  cmps(c,0,(int32_t)c->r[0],0); // 8004E370
  W32(c->r[13]+0xFFFF8B94u,c->r[3]); // 8004E374
  W32(c->r[13]+0xFFFF8B78u,c->r[31]); // 8004E378
  if (crb(c,2)) { goto L_8004E388; } // 8004E37C
  c->r[3]=0u+0x00000001u; // 8004E380
  goto L_8004E440; // 8004E384
L_8004E388:;
  c->r[3]=0u+0x80140000u; // 8004E388
  W32(c->r[13]+0xFFFF8B8Cu,c->r[31]); // 8004E38C
  c->r[4]=0u+0x00000000u; // 8004E390
  c->r[3]=c->r[3]+0x00005358u; // 8004E394
  c->lr=0x8004E39Cu; f_80085210(c); // 8004E398
  cmps(c,0,(int32_t)c->r[3],0); // 8004E39C
  W32(c->r[13]+0xFFFF8B80u,c->r[3]); // 8004E3A0
  if (!crb(c,0)) { goto L_8004E3B4; } // 8004E3A4
  W32(c->r[13]+0xFFFF8B7Cu,c->r[31]); // 8004E3A8
  c->r[3]=0u+0x00000000u; // 8004E3AC
  goto L_8004E440; // 8004E3B0
L_8004E3B4:;
  c->r[3]=0u+0x80140000u; // 8004E3B4
  c->r[4]=0u+0x00000000u; // 8004E3B8
  c->r[3]=c->r[3]+0x0000536Cu; // 8004E3BC
  c->lr=0x8004E3C4u; f_80085210(c); // 8004E3C0
  cmps(c,0,(int32_t)c->r[3],0); // 8004E3C4
  W32(c->r[13]+0xFFFF8B84u,c->r[3]); // 8004E3C8
  if (!crb(c,0)) { goto L_8004E3DC; } // 8004E3CC
  W32(c->r[13]+0xFFFF8B7Cu,c->r[31]); // 8004E3D0
  c->r[3]=0u+0x00000000u; // 8004E3D4
  goto L_8004E440; // 8004E3D8
L_8004E3DC:;
  c->lr=0x8004E3E0u; f_80049A20(c); // 8004E3DC
  c->r[30]=c->r[3]|c->r[3]; // 8004E3E0
  c->r[5]=0u+0x801A0000u; // 8004E3E4
  c->r[7]=0u+0x801A0000u; // 8004E3E8
  c->r[9]=0u+0x80050000u; // 8004E3EC
  c->r[3]=R32(c->r[13]+0xFFFF8B84u); // 8004E3F0
  c->r[5]=c->r[5]+0xFFFFB480u; // 8004E3F4
  c->r[7]=c->r[7]+0xFFFFB4A0u; // 8004E3F8
  c->r[9]=c->r[9]+0xFFFFE710u; // 8004E3FC
  c->r[4]=0u+0x00001000u; // 8004E400
  c->r[6]=0u+0x00000020u; // 8004E404
  c->r[8]=0u+0x00000020u; // 8004E408
  c->r[10]=0u+0x00000000u; // 8004E40C
  c->lr=0x8004E414u; f_80085AA0(c); // 8004E410
  cmps(c,0,(int32_t)c->r[3],0); // 8004E414
  if (!crb(c,2)) { goto L_8004E428; } // 8004E418
  c->r[0]=0u+0x00000001u; // 8004E41C
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E420
  goto L_8004E42C; // 8004E424
L_8004E428:;
  W32(c->r[13]+0xFFFF8B88u,c->r[31]); // 8004E428
L_8004E42C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004E42C
  c->lr=0x8004E434u; f_80049A60(c); // 8004E430
  c->r[0]=0u+0x00000001u; // 8004E434
  W32(c->r[13]+0xFFFF8B7Cu,c->r[0]); // 8004E438
  c->r[3]=0u+0x00000001u; // 8004E43C
L_8004E440:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004E440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004E444
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004E448
  c->lr=c->r[0]; // 8004E44C
  c->r[1]=c->r[1]+0x00000010u; // 8004E450
  return; // 8004E454
}

// __OSShutdownToSBY
void f_8004E460(Ctx* __restrict c) {
  trace_call(0x8004E460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E460
  c->r[0]=c->lr; // 8004E464
  c->r[3]=0u+0xCC000000u; // 8004E468
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E46C
  c->r[0]=0u+0x00000000u; // 8004E470
  W16(c->r[3]+0x00002002u,c->r[0]); // 8004E474
  c->r[0]=R32(c->r[13]+0xFFFF8B7Cu); // 8004E478
  cmps(c,0,(int32_t)c->r[0],0); // 8004E47C
  if (!crb(c,2)) { goto L_8004E4A0; } // 8004E480
  c->r[3]=0u+0x80140000u; // 8004E484
  c->r[5]=0u+0x80140000u; // 8004E488
  c->r[3]=c->r[3]+0x00005380u; // 8004E48C
  c->r[4]=0u+0x0000015Cu; // 8004E490
  c->r[5]=c->r[5]+0x0000538Cu; // 8004E494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004E498
  c->lr=0x8004E4A0u; f_80045D00(c); // 8004E49C
L_8004E4A0:;
  c->r[4]=0u+0x801A0000u; // 8004E4A0
  c->r[0]=0u+0x00000000u; // 8004E4A4
  c->r[7]=0u+0x801A0000u; // 8004E4A8
  W32(c->r[4]+0xFFFFB4C0u,c->r[0]); // 8004E4AC
  c->r[5]=c->r[4]+0xFFFFB4C0u; // 8004E4B0
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8004E4B4
  c->r[7]=c->r[7]+0xFFFFB4E0u; // 8004E4B8
  c->r[4]=0u+0x00002003u; // 8004E4BC
  c->r[6]=0u+0x00000020u; // 8004E4C0
  c->r[8]=0u+0x00000020u; // 8004E4C4
  c->lr=0x8004E4CCu; f_80085BE0(c); // 8004E4C8
  c->lr=0x8004E4D0u; f_80049A20(c); // 8004E4CC
  c->lr=0x8004E4D4u; f_80045110(c); // 8004E4D0
  c->r[0]=c->r[0]|0x00000000u; // 8004E4D4
L_8004E4D8:;
  IRQCHK(c); goto L_8004E4D8; // 8004E4D8
}

// __OSHotReset
void f_8004E4E0(Ctx* __restrict c) {
  trace_call(0x8004E4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E4E0
  c->r[0]=c->lr; // 8004E4E4
  c->r[3]=0u+0xCC000000u; // 8004E4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E4EC
  c->r[0]=0u+0x00000000u; // 8004E4F0
  W16(c->r[3]+0x00002002u,c->r[0]); // 8004E4F4
  c->r[0]=R32(c->r[13]+0xFFFF8B7Cu); // 8004E4F8
  cmps(c,0,(int32_t)c->r[0],0); // 8004E4FC
  if (!crb(c,2)) { goto L_8004E520; } // 8004E500
  c->r[3]=0u+0x80140000u; // 8004E504
  c->r[5]=0u+0x80140000u; // 8004E508
  c->r[3]=c->r[3]+0x00005380u; // 8004E50C
  c->r[4]=0u+0x0000019Cu; // 8004E510
  c->r[5]=c->r[5]+0x000053C4u; // 8004E514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004E518
  c->lr=0x8004E520u; f_80045D00(c); // 8004E51C
L_8004E520:;
  c->r[5]=0u+0x801A0000u; // 8004E520
  c->r[7]=0u+0x801A0000u; // 8004E524
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8004E528
  c->r[5]=c->r[5]+0xFFFFB4C0u; // 8004E52C
  c->r[7]=c->r[7]+0xFFFFB4E0u; // 8004E530
  c->r[4]=0u+0x00002001u; // 8004E534
  c->r[6]=0u+0x00000020u; // 8004E538
  c->r[8]=0u+0x00000020u; // 8004E53C
  c->lr=0x8004E544u; f_80085BE0(c); // 8004E540
  c->lr=0x8004E548u; f_80049A20(c); // 8004E544
  c->lr=0x8004E54Cu; f_80045110(c); // 8004E548
  c->r[0]=c->r[0]|0x00000000u; // 8004E54C
L_8004E550:;
  IRQCHK(c); goto L_8004E550; // 8004E550
}

// __OSSetVIForceDimming
void f_8004E560(Ctx* __restrict c) {
  trace_call(0x8004E560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E560
  c->r[0]=c->lr; // 8004E564
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E56C
  c->r[31]=c->r[5]|c->r[5]; // 8004E570
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004E574
  c->r[30]=c->r[4]|c->r[4]; // 8004E578
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004E57C
  c->r[29]=c->r[3]|c->r[3]; // 8004E580
  c->r[0]=R32(c->r[13]+0xFFFF8B7Cu); // 8004E584
  cmps(c,0,(int32_t)c->r[0],0); // 8004E588
  if (!crb(c,2)) { goto L_8004E598; } // 8004E58C
  c->r[3]=0u+0xFFFFFFF6u; // 8004E590
  goto L_8004E63C; // 8004E594
L_8004E598:;
  c->lr=0x8004E59Cu; f_80049A20(c); // 8004E598
  c->r[0]=R32(c->r[13]+0xFFFF8B8Cu); // 8004E59C
  cmps(c,0,(int32_t)c->r[0],0); // 8004E5A0
  if (crb(c,2)) { goto L_8004E5B4; } // 8004E5A4
  c->lr=0x8004E5ACu; f_80049A60(c); // 8004E5A8
  c->r[3]=0u+0x00000000u; // 8004E5AC
  goto L_8004E63C; // 8004E5B0
L_8004E5B4:;
  c->r[0]=0u+0x00000001u; // 8004E5B4
  W32(c->r[13]+0xFFFF8B8Cu,c->r[0]); // 8004E5B8
  c->lr=0x8004E5C0u; f_80049A60(c); // 8004E5BC
  c->r[4]=rotl(c->r[29],7)&0xFFFFFF80u; // 8004E5C0
  c->r[3]=0u+0x801A0000u; // 8004E5C4
  c->r[5]=c->r[3]+0xFFFFB500u; // 8004E5C8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8004E5CC
  c->r[12]=0u+0x00000000u; // 8004E5D0
  c->r[4]=c->r[4]|c->r[31]; // 8004E5D4
  c->r[4]=c->r[4]|c->r[0]; // 8004E5D8
  W32(c->r[3]+0xFFFFB500u,c->r[4]); // 8004E5DC
  c->r[11]=0u+0xFFFFFFFFu; // 8004E5E0
  c->r[0]=0u+0xFFFF0000u; // 8004E5E4
  c->r[7]=0u+0x801A0000u; // 8004E5E8
  c->r[9]=0u+0x80050000u; // 8004E5EC
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8004E5F0
  c->r[7]=c->r[7]+0xFFFFB520u; // 8004E5F4
  W32(c->r[5]+0x00000004u,c->r[12]); // 8004E5F8
  c->r[9]=c->r[9]+0xFFFFE6E0u; // 8004E5FC
  c->r[4]=0u+0x00005001u; // 8004E600
  c->r[6]=0u+0x00000020u; // 8004E604
  W32(c->r[5]+0x00000008u,c->r[12]); // 8004E608
  c->r[8]=0u+0x00000020u; // 8004E60C
  c->r[10]=0u+0x00000000u; // 8004E610
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 8004E614
  W32(c->r[5]+0x00000010u,c->r[12]); // 8004E618
  W32(c->r[5]+0x00000014u,c->r[11]); // 8004E61C
  W32(c->r[5]+0x00000018u,c->r[0]); // 8004E620
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 8004E624
  c->lr=0x8004E62Cu; f_80085AA0(c); // 8004E628
  cmps(c,0,(int32_t)c->r[3],0); // 8004E62C
  if (crb(c,2)) { goto L_8004E638; } // 8004E630
  goto L_8004E63C; // 8004E634
L_8004E638:;
  c->r[3]=0u+0x00000001u; // 8004E638
L_8004E63C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E63C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E640
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004E644
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004E648
  c->lr=c->r[0]; // 8004E64C
  c->r[1]=c->r[1]+0x00000020u; // 8004E650
  return; // 8004E654
}

// __OSUnRegisterStateEvent
void f_8004E660(Ctx* __restrict c) {
  trace_call(0x8004E660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E660
  c->r[0]=c->lr; // 8004E664
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E668
  c->r[0]=R32(c->r[13]+0xFFFF8B88u); // 8004E66C
  cmps(c,0,(int32_t)c->r[0],0); // 8004E670
  if (!crb(c,2)) { goto L_8004E680; } // 8004E674
  c->r[3]=0u+0x00000000u; // 8004E678
  goto L_8004E6C8; // 8004E67C
L_8004E680:;
  c->r[0]=R32(c->r[13]+0xFFFF8B7Cu); // 8004E680
  cmps(c,0,(int32_t)c->r[0],0); // 8004E684
  if (!crb(c,2)) { goto L_8004E694; } // 8004E688
  c->r[3]=0u+0xFFFFFFFAu; // 8004E68C
  goto L_8004E6C8; // 8004E690
L_8004E694:;
  c->r[5]=0u+0x801A0000u; // 8004E694
  c->r[7]=0u+0x801A0000u; // 8004E698
  c->r[3]=R32(c->r[13]+0xFFFF8B80u); // 8004E69C
  c->r[5]=c->r[5]+0xFFFFB4C0u; // 8004E6A0
  c->r[7]=c->r[7]+0xFFFFB4E0u; // 8004E6A4
  c->r[4]=0u+0x00003002u; // 8004E6A8
  c->r[6]=0u+0x00000020u; // 8004E6AC
  c->r[8]=0u+0x00000020u; // 8004E6B0
  c->lr=0x8004E6B8u; f_80085BE0(c); // 8004E6B4
  cmps(c,0,(int32_t)c->r[3],0); // 8004E6B8
  if (!crb(c,2)) { goto L_8004E6C8; } // 8004E6BC
  c->r[0]=0u+0x00000000u; // 8004E6C0
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E6C4
L_8004E6C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004E6C8
  c->lr=c->r[0]; // 8004E6CC
  c->r[1]=c->r[1]+0x00000010u; // 8004E6D0
  return; // 8004E6D4
}

// fn_8004E6E0
void f_8004E6E0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8004E6E0
  W32(c->r[13]+0xFFFF8B8Cu,c->r[0]); // 8004E6E4
  c->r[3]=0u+0x00000000u; // 8004E6E8
  return; // 8004E6EC
}

// fn_8004E6F0
void f_8004E6F0(Ctx* __restrict c) {
  return; // 8004E6F0
}

// fn_8004E700
void f_8004E700(Ctx* __restrict c) {
  return; // 8004E700
}

// __OSStateEventHandler
void f_8004E710(Ctx* __restrict c) {
  trace_call(0x8004E710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E710
  c->r[0]=c->lr; // 8004E714
  cmps(c,0,(int32_t)c->r[3],0); // 8004E718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004E720
  if (crb(c,2)) { goto L_8004E744; } // 8004E724
  c->r[3]=0u+0x80140000u; // 8004E728
  c->r[5]=0u+0x80140000u; // 8004E72C
  c->r[3]=c->r[3]+0x00005380u; // 8004E730
  c->r[4]=0u+0x00000334u; // 8004E734
  c->r[5]=c->r[5]+0x000053FCu; // 8004E738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004E73C
  c->lr=0x8004E744u; f_80045D00(c); // 8004E740
L_8004E744:;
  c->r[3]=0u+0x801A0000u; // 8004E744
  c->r[0]=0u+0x00000000u; // 8004E748
  c->r[3]=R32(c->r[3]+0xFFFFB4A0u); // 8004E74C
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E750
  c->r[0]=c->r[3]+0xFFFE0000u; // 8004E754
  cmpu(c,0,c->r[0],0x00000000u); // 8004E758
  if (!crb(c,2)) { goto L_8004E814; } // 8004E75C
  c->r[3]=0u+0xCC000000u; // 8004E760
  c->r[0]=R32(c->r[3]+0x00003000u); // 8004E764
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 8004E768
  if (!crb(c,2)) { goto L_8004E778; } // 8004E76C
  c->r[0]=0u+0x00000001u; // 8004E770
  goto L_8004E77C; // 8004E774
L_8004E778:;
  c->r[0]=0u+0x00000000u; // 8004E778
L_8004E77C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004E77C
  if (crb(c,2)) { goto L_8004E7B8; } // 8004E780
  c->lr=0x8004E788u; f_80049A20(c); // 8004E784
  c->r[12]=R32(c->r[13]+0xFFFF8B94u); // 8004E788
  c->r[4]=0u+0x80050000u; // 8004E78C
  c->r[4]=c->r[4]+0xFFFFE6F0u; // 8004E790
  c->r[0]=0u+0x00000001u; // 8004E794
  c->r[31]=c->r[3]|c->r[3]; // 8004E798
  W32(c->r[13]+0xFFFF8B78u,c->r[0]); // 8004E79C
  W32(c->r[13]+0xFFFF8B94u,c->r[4]); // 8004E7A0
  c->ctr=c->r[12]; // 8004E7A4
  if (true) { c->lr=0x8004E7ACu; dispatch(c,c->ctr); } // 8004E7A8
  c->r[3]=c->r[31]|c->r[31]; // 8004E7AC
  c->lr=0x8004E7B4u; f_80049A60(c); // 8004E7B0
  c->lr=0x8004E7B8u; f_8005CDD0(c); // 8004E7B4
L_8004E7B8:;
  c->lr=0x8004E7BCu; f_80049A20(c); // 8004E7B8
  c->r[31]=c->r[3]|c->r[3]; // 8004E7BC
  c->r[5]=0u+0x801A0000u; // 8004E7C0
  c->r[7]=0u+0x801A0000u; // 8004E7C4
  c->r[9]=0u+0x80050000u; // 8004E7C8
  c->r[3]=R32(c->r[13]+0xFFFF8B84u); // 8004E7CC
  c->r[5]=c->r[5]+0xFFFFB480u; // 8004E7D0
  c->r[7]=c->r[7]+0xFFFFB4A0u; // 8004E7D4
  c->r[9]=c->r[9]+0xFFFFE710u; // 8004E7D8
  c->r[4]=0u+0x00001000u; // 8004E7DC
  c->r[6]=0u+0x00000020u; // 8004E7E0
  c->r[8]=0u+0x00000020u; // 8004E7E4
  c->r[10]=0u+0x00000000u; // 8004E7E8
  c->lr=0x8004E7F0u; f_80085AA0(c); // 8004E7EC
  cmps(c,0,(int32_t)c->r[3],0); // 8004E7F0
  if (!crb(c,2)) { goto L_8004E804; } // 8004E7F4
  c->r[0]=0u+0x00000001u; // 8004E7F8
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E7FC
  goto L_8004E80C; // 8004E800
L_8004E804:;
  c->r[0]=0u+0x00000000u; // 8004E804
  W32(c->r[13]+0xFFFF8B88u,c->r[0]); // 8004E808
L_8004E80C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E80C
  c->lr=0x8004E814u; f_80049A60(c); // 8004E810
L_8004E814:;
  c->r[3]=0u+0x801A0000u; // 8004E814
  c->r[0]=R32(c->r[3]+0xFFFFB4A0u); // 8004E818
  cmpu(c,0,c->r[0],0x00000800u); // 8004E81C
  if (!crb(c,2)) { goto L_8004E84C; } // 8004E820
  c->lr=0x8004E828u; f_80049A20(c); // 8004E824
  c->r[12]=R32(c->r[13]+0xFFFF8B90u); // 8004E828
  c->r[4]=0u+0x80050000u; // 8004E82C
  c->r[4]=c->r[4]+0xFFFFE700u; // 8004E830
  c->r[31]=c->r[3]|c->r[3]; // 8004E834
  W32(c->r[13]+0xFFFF8B90u,c->r[4]); // 8004E838
  c->ctr=c->r[12]; // 8004E83C
  if (true) { c->lr=0x8004E844u; dispatch(c,c->ctr); } // 8004E840
  c->r[3]=c->r[31]|c->r[31]; // 8004E844
  c->lr=0x8004E84Cu; f_80049A60(c); // 8004E848
L_8004E84C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004E84C
  c->r[3]=0u+0x00000000u; // 8004E850
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004E854
  c->lr=c->r[0]; // 8004E858
  c->r[1]=c->r[1]+0x00000010u; // 8004E85C
  return; // 8004E860
}

// fn_8004E870
void f_8004E870(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E870
  c->r[4]=0u+0x00000000u; // 8004E874
  f_8004E880(c); return; // 8004E878
}

// PlayRecordCallback
void f_8004E880(Ctx* __restrict c) {
  trace_call(0x8004E880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E880
  c->r[0]=c->lr; // 8004E884
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E88C
  c->r[31]=0u+0x801A0000u; // 8004E890
  c->r[31]=c->r[31]+0xFFFFB540u; // 8004E894
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004E898
  c->r[30]=0u+0x00000000u; // 8004E89C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004E8A0
  c->r[0]=R32(c->r[13]+0xFFFF8BA8u); // 8004E8A4
  W32(c->r[13]+0xFFFF8BB4u,c->r[3]); // 8004E8A8
  cmps(c,0,(int32_t)c->r[0],0); // 8004E8AC
  if (crb(c,2)) { goto L_8004E8C0; } // 8004E8B0
  c->r[0]=0u+0x00000001u; // 8004E8B4
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 8004E8B8
  goto L_8004ED18; // 8004E8BC
L_8004E8C0:;
  c->r[0]=R32(c->r[13]+0xFFFF8BB0u); // 8004E8C0
  cmps(c,0,(int32_t)c->r[0],0); // 8004E8C4
  if (!crb(c,2)) { goto L_8004EAE0; } // 8004E8C8
  c->r[0]=R32(c->r[13]+0xFFFF8128u); // 8004E8CC
  cmpu(c,0,c->r[0],0x00000006u); // 8004E8D0
  if (crb(c,1)) { goto L_8004EACC; } // 8004E8D4
  c->r[4]=0u+0x80140000u; // 8004E8D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004E8DC
  c->r[4]=c->r[4]+0x0000544Cu; // 8004E8E0
  c->r[4]=R32(c->r[4]+c->r[0]); // 8004E8E4
  c->ctr=c->r[4]; // 8004E8E8
  if (true) { switch (c->ctr) { case 0x8004E8F0u: goto L_8004E8F0; case 0x8004E8FCu: goto L_8004E8FC; case 0x8004E978u: goto L_8004E978; case 0x8004E9BCu: goto L_8004E9BC; case 0x8004E9E4u: goto L_8004E9E4; case 0x8004E9F0u: goto L_8004E9F0; case 0x8004EA78u: goto L_8004EA78; default: break; } dispatch(c,c->ctr); return; } // 8004E8EC
L_8004E8F0:;
  c->r[0]=0u+0x00000001u; // 8004E8F0
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E8F4
  goto L_8004EAE0; // 8004E8F8
L_8004E8FC:;
  cmps(c,0,(int32_t)c->r[3],-10); // 8004E8FC
  if (!crb(c,2)) { goto L_8004E938; } // 8004E900
  c->r[0]=0u+0x00000001u; // 8004E904
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8004E908
  c->r[3]=c->r[31]+0x00000080u; // 8004E90C
  c->lr=0x8004E914u; f_80043E70(c); // 8004E910
  c->r[3]=0u+0x80000000u; // 8004E914
  c->r[7]=0u+0x80050000u; // 8004E918
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8004E91C
  c->r[3]=c->r[31]+0x00000080u; // 8004E920
  c->r[7]=c->r[7]+0xFFFFE870u; // 8004E924
  c->r[5]=0u+0x00000000u; // 8004E928
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004E92C
  c->lr=0x8004E934u; f_800440D0(c); // 8004E930
  goto L_8004ED18; // 8004E934
L_8004E938:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004E938
  if (!crb(c,2)) { goto L_8004E964; } // 8004E93C
  c->r[0]=R32(c->r[13]+0xFFFF8BA0u); // 8004E940
  cmps(c,0,(int32_t)c->r[0],0); // 8004E944
  if (!crb(c,2)) { goto L_8004E958; } // 8004E948
  c->r[0]=0u+0x00000002u; // 8004E94C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E950
  goto L_8004EAE0; // 8004E954
L_8004E958:;
  c->r[0]=0u+0x00000004u; // 8004E958
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E95C
  goto L_8004EAE0; // 8004E960
L_8004E964:;
  c->r[3]=0u+0x00000001u; // 8004E964
  c->r[0]=0u+0x00000007u; // 8004E968
  W32(c->r[13]+0xFFFF8BA4u,c->r[3]); // 8004E96C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E970
  goto L_8004ED18; // 8004E974
L_8004E978:;
  cmpu(c,0,c->r[3],0x00000080u); // 8004E978
  if (!crb(c,2)) { goto L_8004E9A8; } // 8004E97C
  c->r[4]=c->r[31]+0x00000000u; // 8004E980
  c->r[5]=0u+0x00000001u; // 8004E984
  c->r[3]=R32(c->r[4]+0x00000060u); // 8004E988
  c->r[0]=0u+0x00000003u; // 8004E98C
  c->r[4]=R32(c->r[4]+0x00000064u); // 8004E990
  W32(c->r[13]+0xFFFF8BA0u,c->r[5]); // 8004E994
  W32(c->r[13]+0xFFFF8BBCu,c->r[4]); // 8004E998
  W32(c->r[13]+0xFFFF8BB8u,c->r[3]); // 8004E99C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E9A0
  goto L_8004EAE0; // 8004E9A4
L_8004E9A8:;
  c->r[3]=0u+0x00000001u; // 8004E9A8
  c->r[0]=0u+0x00000006u; // 8004E9AC
  W32(c->r[13]+0xFFFF8BA4u,c->r[3]); // 8004E9B0
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E9B4
  goto L_8004EAE0; // 8004E9B8
L_8004E9BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004E9BC
  if (!crb(c,2)) { goto L_8004E9D0; } // 8004E9C0
  c->r[0]=0u+0x00000004u; // 8004E9C4
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E9C8
  goto L_8004EAE0; // 8004E9CC
L_8004E9D0:;
  c->r[3]=0u+0x00000001u; // 8004E9D0
  c->r[0]=0u+0x00000006u; // 8004E9D4
  W32(c->r[13]+0xFFFF8BA4u,c->r[3]); // 8004E9D8
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E9DC
  goto L_8004EAE0; // 8004E9E0
L_8004E9E4:;
  c->r[0]=0u+0x00000005u; // 8004E9E4
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004E9E8
  goto L_8004EAE0; // 8004E9EC
L_8004E9F0:;
  cmpu(c,0,c->r[3],0x00000080u); // 8004E9F0
  if (!crb(c,2)) { goto L_8004EA64; } // 8004E9F4
  c->lr=0x8004E9FCu; f_8004DAA0(c); // 8004E9F8
  c->r[5]=0u+0x80000000u; // 8004E9FC
  c->r[8]=R32(c->r[13]+0xFFFF8BBCu); // 8004EA00
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8004EA04
  c->r[5]=0u+0x0000012Cu; // 8004EA08
  c->r[9]=R32(c->r[13]+0xFFFF8BB8u); // 8004EA0C
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 8004EA10
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004EA14
  c->r[6]=0u+0x00000000u; // 8004EA18
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 8004EA1C
  c->r[4]=c->r[3]^0x80000000u; // 8004EA20
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 8004EA24
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 8004EA28
  c->r[0]=c->r[0]+c->r[3]; // 8004EA2C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 8004EA30
  c->r[0]=c->r[0]^0x80000000u; // 8004EA34
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 8004EA38
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8004EA3C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8004EA40
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8004EA44
  if (crb(c,2)) { goto L_8004EA58; } // 8004EA48
  c->r[0]=0u+0x00000006u; // 8004EA4C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EA50
  goto L_8004EAE0; // 8004EA54
L_8004EA58:;
  c->r[0]=0u+0x00000003u; // 8004EA58
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EA5C
  goto L_8004EAE0; // 8004EA60
L_8004EA64:;
  c->r[3]=0u+0x00000001u; // 8004EA64
  c->r[0]=0u+0x00000006u; // 8004EA68
  W32(c->r[13]+0xFFFF8BA4u,c->r[3]); // 8004EA6C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EA70
  goto L_8004EAE0; // 8004EA74
L_8004EA78:;
  c->r[0]=R32(c->r[13]+0xFFFF8BA4u); // 8004EA78
  cmps(c,0,(int32_t)c->r[0],0); // 8004EA7C
  if (crb(c,2)) { goto L_8004EA90; } // 8004EA80
  c->r[0]=0u+0x00000007u; // 8004EA84
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EA88
  goto L_8004ED18; // 8004EA8C
L_8004EA90:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004EA90
  if (!crb(c,2)) { goto L_8004EAB8; } // 8004EA94
  c->r[4]=c->r[31]+0x00000000u; // 8004EA98
  c->r[0]=0u+0x00000001u; // 8004EA9C
  c->r[3]=R32(c->r[4]+0x00000060u); // 8004EAA0
  c->r[4]=R32(c->r[4]+0x00000064u); // 8004EAA4
  W32(c->r[13]+0xFFFF8BBCu,c->r[4]); // 8004EAA8
  W32(c->r[13]+0xFFFF8BB8u,c->r[3]); // 8004EAAC
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EAB0
  goto L_8004EAE0; // 8004EAB4
L_8004EAB8:;
  c->r[3]=0u+0x00000007u; // 8004EAB8
  c->r[0]=0u+0x00000001u; // 8004EABC
  W32(c->r[13]+0xFFFF8128u,c->r[3]); // 8004EAC0
  W32(c->r[13]+0xFFFF8BA4u,c->r[0]); // 8004EAC4
  goto L_8004ED18; // 8004EAC8
L_8004EACC:;
  c->r[3]=0u+0x00000007u; // 8004EACC
  c->r[0]=0u+0x00000001u; // 8004EAD0
  W32(c->r[13]+0xFFFF8128u,c->r[3]); // 8004EAD4
  W32(c->r[13]+0xFFFF8BA4u,c->r[0]); // 8004EAD8
  goto L_8004ED18; // 8004EADC
L_8004EAE0:;
  c->r[0]=R32(c->r[13]+0xFFFF8128u); // 8004EAE0
  c->r[29]=0u+0x00000000u; // 8004EAE4
  W32(c->r[13]+0xFFFF8BB0u,c->r[29]); // 8004EAE8
  cmps(c,0,(int32_t)c->r[0],4); // 8004EAEC
  if (crb(c,2)) { goto L_8004EB90; } // 8004EAF0
  if (!crb(c,0)) { goto L_8004EB10; } // 8004EAF4
  cmps(c,0,(int32_t)c->r[0],2); // 8004EAF8
  if (crb(c,2)) { goto L_8004EB48; } // 8004EAFC
  if (!crb(c,0)) { goto L_8004EB6C; } // 8004EB00
  cmps(c,0,(int32_t)c->r[0],1); // 8004EB04
  if (!crb(c,0)) { goto L_8004EB20; } // 8004EB08
  goto L_8004EC40; // 8004EB0C
L_8004EB10:;
  cmps(c,0,(int32_t)c->r[0],6); // 8004EB10
  if (crb(c,2)) { goto L_8004EC28; } // 8004EB14
  if (!crb(c,0)) { goto L_8004EC40; } // 8004EB18
  goto L_8004EBCC; // 8004EB1C
L_8004EB20:;
  c->r[3]=0u+0x80140000u; // 8004EB20
  c->r[6]=0u+0x80050000u; // 8004EB24
  c->r[3]=c->r[3]+0x00005420u; // 8004EB28
  c->r[4]=c->r[31]+0x000000B0u; // 8004EB2C
  c->r[6]=c->r[6]+0xFFFFE880u; // 8004EB30
  c->r[7]=c->r[31]+0x0000013Cu; // 8004EB34
  c->r[5]=0u+0x00000003u; // 8004EB38
  c->lr=0x8004EB40u; f_800882C0(c); // 8004EB3C
  c->r[30]=c->r[3]|c->r[3]; // 8004EB40
  goto L_8004EC40; // 8004EB44
L_8004EB48:;
  c->r[6]=0u+0x80050000u; // 8004EB48
  c->r[3]=c->r[31]+0x000000B0u; // 8004EB4C
  c->r[4]=c->r[31]+0x00000000u; // 8004EB50
  c->r[7]=c->r[31]+0x0000013Cu; // 8004EB54
  c->r[6]=c->r[6]+0xFFFFE880u; // 8004EB58
  c->r[5]=0u+0x00000080u; // 8004EB5C
  c->lr=0x8004EB64u; f_800871D0(c); // 8004EB60
  c->r[30]=c->r[3]|c->r[3]; // 8004EB64
  goto L_8004EC40; // 8004EB68
L_8004EB6C:;
  c->r[6]=0u+0x80050000u; // 8004EB6C
  c->r[3]=c->r[31]+0x000000B0u; // 8004EB70
  c->r[6]=c->r[6]+0xFFFFE880u; // 8004EB74
  c->r[7]=c->r[31]+0x0000013Cu; // 8004EB78
  c->r[4]=0u+0x00000000u; // 8004EB7C
  c->r[5]=0u+0x00000000u; // 8004EB80
  c->lr=0x8004EB88u; f_800873E0(c); // 8004EB84
  c->r[30]=c->r[3]|c->r[3]; // 8004EB88
  goto L_8004EC40; // 8004EB8C
L_8004EB90:;
  c->r[3]=c->r[31]+0x00000080u; // 8004EB90
  c->lr=0x8004EB98u; f_80043E70(c); // 8004EB94
  c->r[3]=0u+0x80000000u; // 8004EB98
  c->r[0]=0u+0x0000003Cu; // 8004EB9C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 8004EBA0
  c->r[7]=0u+0x80050000u; // 8004EBA4
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 8004EBA8
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8004EBAC
  c->r[3]=c->r[31]+0x00000080u; // 8004EBB0
  c->r[7]=c->r[7]+0xFFFFE870u; // 8004EBB4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8004EBB8
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 8004EBBC
  c->r[5]=c->r[0]+c->r[4]; // 8004EBC0
  c->lr=0x8004EBC8u; f_800440D0(c); // 8004EBC4
  goto L_8004EC40; // 8004EBC8
L_8004EBCC:;
  c->lr=0x8004EBD0u; f_8004DAA0(c); // 8004EBCC
  c->r[5]=c->r[31]+0x00000000u; // 8004EBD0
  c->r[0]=0u+0x0000001Fu; // 8004EBD4
  W32(c->r[5]+0x00000064u,c->r[4]); // 8004EBD8
  c->r[6]=c->r[5]+0x00000004u; // 8004EBDC
  c->r[4]=0u+0x00000000u; // 8004EBE0
  W32(c->r[5]+0x00000060u,c->r[3]); // 8004EBE4
  c->ctr=c->r[0]; // 8004EBE8
  c->r[0]=c->r[0]|0x00000000u; // 8004EBEC
L_8004EBF0:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8004EBF0
  c->r[6]=c->r[6]+0x00000004u; // 8004EBF4
  c->r[4]=c->r[4]+c->r[0]; // 8004EBF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004EBF0; } // 8004EBFC
  c->r[6]=0u+0x80050000u; // 8004EC00
  W32(c->r[31]+0x00000000u,c->r[4]); // 8004EC04
  c->r[3]=c->r[31]+0x000000B0u; // 8004EC08
  c->r[4]=c->r[31]+0x00000000u; // 8004EC0C
  c->r[6]=c->r[6]+0xFFFFE880u; // 8004EC10
  c->r[7]=c->r[31]+0x0000013Cu; // 8004EC14
  c->r[5]=0u+0x00000080u; // 8004EC18
  c->lr=0x8004EC20u; f_800872C0(c); // 8004EC1C
  c->r[30]=c->r[3]|c->r[3]; // 8004EC20
  goto L_8004EC40; // 8004EC24
L_8004EC28:;
  c->r[4]=0u+0x80050000u; // 8004EC28
  c->r[3]=c->r[31]+0x000000B0u; // 8004EC2C
  c->r[4]=c->r[4]+0xFFFFE880u; // 8004EC30
  c->r[5]=c->r[31]+0x0000013Cu; // 8004EC34
  c->lr=0x8004EC3Cu; f_800884B0(c); // 8004EC38
  c->r[30]=c->r[3]|c->r[3]; // 8004EC3C
L_8004EC40:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004EC40
  if (crb(c,2)) { goto L_8004ED14; } // 8004EC44
  cmps(c,0,(int32_t)c->r[30],-3); // 8004EC48
  if (!crb(c,2)) { goto L_8004EC84; } // 8004EC4C
  c->r[3]=c->r[31]+0x00000080u; // 8004EC50
  c->lr=0x8004EC58u; f_80043E70(c); // 8004EC54
  c->r[3]=0u+0x80000000u; // 8004EC58
  c->r[7]=0u+0x80050000u; // 8004EC5C
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8004EC60
  c->r[3]=c->r[31]+0x00000080u; // 8004EC64
  c->r[7]=c->r[7]+0xFFFFE870u; // 8004EC68
  c->r[5]=0u+0x00000000u; // 8004EC6C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004EC70
  c->lr=0x8004EC78u; f_800440D0(c); // 8004EC74
  c->r[0]=0u+0x00000001u; // 8004EC78
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8004EC7C
  goto L_8004ED14; // 8004EC80
L_8004EC84:;
  c->r[0]=R32(c->r[13]+0xFFFF8128u); // 8004EC84
  c->r[3]=0u+0x00000001u; // 8004EC88
  W32(c->r[13]+0xFFFF8BA4u,c->r[3]); // 8004EC8C
  cmps(c,0,(int32_t)c->r[0],4); // 8004EC90
  if (crb(c,2)) { goto L_8004ED0C; } // 8004EC94
  if (!crb(c,0)) { goto L_8004ECA8; } // 8004EC98
  cmps(c,0,(int32_t)c->r[0],2); // 8004EC9C
  if (!crb(c,0)) { goto L_8004ECB0; } // 8004ECA0
  goto L_8004ED0C; // 8004ECA4
L_8004ECA8:;
  cmps(c,0,(int32_t)c->r[0],6); // 8004ECA8
  if (!crb(c,0)) { goto L_8004ED0C; } // 8004ECAC
L_8004ECB0:;
  c->r[0]=0u+0x00000006u; // 8004ECB0
  c->r[4]=0u+0x80050000u; // 8004ECB4
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004ECB8
  c->r[3]=c->r[31]+0x000000B0u; // 8004ECBC
  c->r[4]=c->r[4]+0xFFFFE880u; // 8004ECC0
  c->r[5]=c->r[31]+0x0000013Cu; // 8004ECC4
  c->lr=0x8004ECCCu; f_800884B0(c); // 8004ECC8
  cmps(c,0,(int32_t)c->r[3],-3); // 8004ECCC
  c->r[30]=c->r[3]|c->r[3]; // 8004ECD0
  if (!crb(c,2)) { goto L_8004ED14; } // 8004ECD4
  c->r[0]=0u+0x00000001u; // 8004ECD8
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8004ECDC
  c->r[3]=c->r[31]+0x00000080u; // 8004ECE0
  c->lr=0x8004ECE8u; f_80043E70(c); // 8004ECE4
  c->r[3]=0u+0x80000000u; // 8004ECE8
  c->r[7]=0u+0x80050000u; // 8004ECEC
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8004ECF0
  c->r[3]=c->r[31]+0x00000080u; // 8004ECF4
  c->r[7]=c->r[7]+0xFFFFE870u; // 8004ECF8
  c->r[5]=0u+0x00000000u; // 8004ECFC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004ED00
  c->lr=0x8004ED08u; f_800440D0(c); // 8004ED04
  goto L_8004ED14; // 8004ED08
L_8004ED0C:;
  c->r[0]=0u+0x00000007u; // 8004ED0C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004ED10
L_8004ED14:;
  W32(c->r[13]+0xFFFF8BB4u,c->r[30]); // 8004ED14
L_8004ED18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004ED18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004ED1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004ED20
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004ED24
  c->lr=c->r[0]; // 8004ED28
  c->r[1]=c->r[1]+0x00000020u; // 8004ED2C
  return; // 8004ED30
}

// __OSStartPlayRecord
void f_8004ED40(Ctx* __restrict c) {
  trace_call(0x8004ED40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ED40
  c->r[0]=c->lr; // 8004ED44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ED48
  c->lr=0x8004ED50u; f_80088CC0(c); // 8004ED4C
  cmps(c,0,(int32_t)c->r[3],0); // 8004ED50
  if (!crb(c,2)) { goto L_8004ED84; } // 8004ED54
  c->r[0]=0u+0x00000000u; // 8004ED58
  W32(c->r[13]+0xFFFF8BA8u,c->r[0]); // 8004ED5C
  c->r[3]=0u+0x00000000u; // 8004ED60
  c->r[4]=0u+0x00000000u; // 8004ED64
  W32(c->r[13]+0xFFFF8BA0u,c->r[0]); // 8004ED68
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004ED6C
  W32(c->r[13]+0xFFFF8BA4u,c->r[0]); // 8004ED70
  W32(c->r[13]+0xFFFF8BB0u,c->r[0]); // 8004ED74
  W32(c->r[13]+0xFFFF8BACu,c->r[0]); // 8004ED78
  W32(c->r[13]+0xFFFF8BB4u,c->r[0]); // 8004ED7C
  c->lr=0x8004ED84u; f_8004E880(c); // 8004ED80
L_8004ED84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ED84
  c->lr=c->r[0]; // 8004ED88
  c->r[1]=c->r[1]+0x00000010u; // 8004ED8C
  return; // 8004ED90
}

// fn_8004EDA0
void f_8004EDA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EDA0
  c->r[0]=c->lr; // 8004EDA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EDA8
  c->r[11]=c->r[1]+0x00000020u; // 8004EDAC
  c->lr=0x8004EDB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004EDB0
  c->r[29]=0u+0x801A0000u; // 8004EDB4
  c->r[29]=c->r[29]+0xFFFFB540u; // 8004EDB8
  c->lr=0x8004EDC0u; f_80049A20(c); // 8004EDBC
  c->r[0]=R32(c->r[13]+0xFFFF8128u); // 8004EDC0
  c->r[4]=0u+0x00000001u; // 8004EDC4
  W32(c->r[13]+0xFFFF8BA8u,c->r[4]); // 8004EDC8
  c->r[26]=c->r[3]|c->r[3]; // 8004EDCC
  cmps(c,0,(int32_t)c->r[0],7); // 8004EDD0
  if (crb(c,2)) { goto L_8004EDF0; } // 8004EDD4
  cmps(c,0,(int32_t)c->r[0],0); // 8004EDD8
  if (crb(c,2)) { goto L_8004EDF0; } // 8004EDDC
  cmps(c,0,(int32_t)c->r[0],9); // 8004EDE0
  if (crb(c,2)) { goto L_8004EDF0; } // 8004EDE4
  cmps(c,0,(int32_t)c->r[0],8); // 8004EDE8
  if (!crb(c,2)) { goto L_8004EDFC; } // 8004EDEC
L_8004EDF0:;
  c->r[3]=c->r[26]|c->r[26]; // 8004EDF0
  c->lr=0x8004EDF8u; f_80049A60(c); // 8004EDF4
  goto L_8004EF6C; // 8004EDF8
L_8004EDFC:;
  cmps(c,0,(int32_t)c->r[0],4); // 8004EDFC
  if (!crb(c,2)) { goto L_8004EE68; } // 8004EE00
  c->r[3]=c->r[29]+0x00000080u; // 8004EE04
  c->lr=0x8004EE0Cu; f_800441D0(c); // 8004EE08
  c->r[3]=c->r[26]|c->r[26]; // 8004EE0C
  c->lr=0x8004EE14u; f_80049A60(c); // 8004EE10
  c->lr=0x8004EE18u; f_8004DAA0(c); // 8004EE14
  c->r[5]=c->r[29]+0x00000000u; // 8004EE18
  c->r[0]=0u+0x0000001Fu; // 8004EE1C
  W32(c->r[5]+0x00000064u,c->r[4]); // 8004EE20
  c->r[6]=c->r[5]+0x00000004u; // 8004EE24
  c->r[4]=0u+0x00000000u; // 8004EE28
  W32(c->r[5]+0x00000060u,c->r[3]); // 8004EE2C
  c->ctr=c->r[0]; // 8004EE30
  c->r[0]=c->r[0]|0x00000000u; // 8004EE34
L_8004EE38:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8004EE38
  c->r[6]=c->r[6]+0x00000004u; // 8004EE3C
  c->r[4]=c->r[4]+c->r[0]; // 8004EE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004EE38; } // 8004EE44
  W32(c->r[29]+0x00000000u,c->r[4]); // 8004EE48
  c->r[3]=c->r[29]+0x000000B0u; // 8004EE4C
  c->r[4]=c->r[29]+0x00000000u; // 8004EE50
  c->r[5]=0u+0x00000080u; // 8004EE54
  c->lr=0x8004EE5Cu; f_80087250(c); // 8004EE58
  c->r[3]=c->r[29]+0x000000B0u; // 8004EE5C
  c->lr=0x8004EE64u; f_80088440(c); // 8004EE60
  goto L_8004EF6C; // 8004EE64
L_8004EE68:;
  c->r[0]=R32(c->r[13]+0xFFFF8BB0u); // 8004EE68
  cmps(c,0,(int32_t)c->r[0],0); // 8004EE6C
  if (crb(c,2)) { goto L_8004EE88; } // 8004EE70
  c->r[3]=c->r[29]+0x00000080u; // 8004EE74
  c->lr=0x8004EE7Cu; f_800441D0(c); // 8004EE78
  c->r[3]=c->r[26]|c->r[26]; // 8004EE7C
  c->lr=0x8004EE84u; f_80049A60(c); // 8004EE80
  goto L_8004EEFC; // 8004EE84
L_8004EE88:;
  c->lr=0x8004EE8Cu; f_80049A60(c); // 8004EE88
  c->lr=0x8004EE90u; f_8004DAA0(c); // 8004EE8C
  c->r[5]=0u+0x10620000u; // 8004EE90
  c->r[0]=0u+0x00000000u; // 8004EE94
  c->r[30]=c->r[4]|c->r[4]; // 8004EE98
  c->r[31]=c->r[3]|c->r[3]; // 8004EE9C
  c->r[26]=c->r[5]+0x00004DD3u; // 8004EEA0
  c->r[28]=c->r[0]^0x80000000u; // 8004EEA4
  c->r[27]=0u+0x80000000u; // 8004EEA8
L_8004EEAC:;
  c->r[0]=R32(c->r[13]+0xFFFF8BACu); // 8004EEAC
  cmps(c,0,(int32_t)c->r[0],0); // 8004EEB0
  if (!crb(c,2)) { goto L_8004EEFC; } // 8004EEB4
  c->lr=0x8004EEBCu; f_8004DAA0(c); // 8004EEB8
  c->r[0]=R32(c->r[27]+0x000000F8u); // 8004EEBC
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 8004EEC0
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 8004EEC4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004EEC8
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 8004EECC
  c->r[3]=c->r[3]^0x80000000u; // 8004EED0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8004EED4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 8004EED8
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 8004EEDC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 8004EEE0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 8004EEE4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8004EEE8
  if (crb(c,2)) { IRQCHK(c); goto L_8004EEAC; } // 8004EEEC
  c->r[0]=0u+0x00000008u; // 8004EEF0
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EEF4
  goto L_8004EF74; // 8004EEF8
L_8004EEFC:;
  c->r[0]=R32(c->r[13]+0xFFFF8128u); // 8004EEFC
  cmps(c,0,(int32_t)c->r[0],4); // 8004EF00
  if (crb(c,2)) { goto L_8004EF6C; } // 8004EF04
  if (!crb(c,0)) { goto L_8004EF1C; } // 8004EF08
  cmps(c,0,(int32_t)c->r[0],1); // 8004EF0C
  if (crb(c,2)) { goto L_8004EF34; } // 8004EF10
  if (!crb(c,0)) { goto L_8004EF28; } // 8004EF14
  goto L_8004EF6C; // 8004EF18
L_8004EF1C:;
  cmps(c,0,(int32_t)c->r[0],6); // 8004EF1C
  if (crb(c,2)) { goto L_8004EF58; } // 8004EF20
  if (!crb(c,0)) { goto L_8004EF6C; } // 8004EF24
L_8004EF28:;
  c->r[3]=c->r[29]+0x000000B0u; // 8004EF28
  c->lr=0x8004EF30u; f_80088440(c); // 8004EF2C
  goto L_8004EF6C; // 8004EF30
L_8004EF34:;
  c->r[0]=R32(c->r[13]+0xFFFF8BB4u); // 8004EF34
  cmps(c,0,(int32_t)c->r[0],0); // 8004EF38
  if (!crb(c,2)) { goto L_8004EF6C; } // 8004EF3C
  c->r[0]=R32(c->r[13]+0xFFFF8BB0u); // 8004EF40
  cmps(c,0,(int32_t)c->r[0],0); // 8004EF44
  if (!crb(c,2)) { goto L_8004EF6C; } // 8004EF48
  c->r[3]=c->r[29]+0x000000B0u; // 8004EF4C
  c->lr=0x8004EF54u; f_80088440(c); // 8004EF50
  goto L_8004EF6C; // 8004EF54
L_8004EF58:;
  c->r[0]=R32(c->r[13]+0xFFFF8BB0u); // 8004EF58
  cmps(c,0,(int32_t)c->r[0],0); // 8004EF5C
  if (crb(c,2)) { goto L_8004EF6C; } // 8004EF60
  c->r[3]=c->r[29]+0x000000B0u; // 8004EF64
  c->lr=0x8004EF6Cu; f_80088440(c); // 8004EF68
L_8004EF6C:;
  c->r[0]=0u+0x00000009u; // 8004EF6C
  W32(c->r[13]+0xFFFF8128u,c->r[0]); // 8004EF70
L_8004EF74:;
  c->r[11]=c->r[1]+0x00000020u; // 8004EF74
  c->lr=0x8004EF7Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004EF78
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004EF7C
  c->lr=c->r[0]; // 8004EF80
  c->r[1]=c->r[1]+0x00000020u; // 8004EF84
  return; // 8004EF88
}

// __OSWriteStateFlags
void f_8004EF90(Ctx* __restrict c) {
  trace_call(0x8004EF90u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EF90
  c->r[0]=c->lr; // 8004EF94
  c->r[4]=c->r[3]|c->r[3]; // 8004EF98
  c->r[5]=0u+0x00000020u; // 8004EF9C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8004EFA0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8004EFA4
  W32(c->r[1]+0x00000098u,c->r[30]); // 8004EFA8
  c->r[30]=0u+0x801A0000u; // 8004EFAC
  c->r[3]=c->r[30]+0xFFFFB740u; // 8004EFB0
  c->lr=0x8004EFB8u; f_800043C4(c); // 8004EFB4
  c->r[31]=c->r[30]+0xFFFFB740u; // 8004EFB8
  c->r[3]=0u+0x80140000u; // 8004EFBC
  c->r[6]=R32(c->r[31]+0x00000004u); // 8004EFC0
  c->r[3]=c->r[3]+0x00005468u; // 8004EFC4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004EFC8
  c->r[4]=c->r[1]+0x00000008u; // 8004EFCC
  c->r[5]=0u+0x00000002u; // 8004EFD0
  c->r[6]=c->r[6]+c->r[0]; // 8004EFD4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8004EFD8
  c->r[6]=c->r[6]+c->r[0]; // 8004EFDC
  c->r[0]=R32(c->r[31]+0x00000010u); // 8004EFE0
  c->r[6]=c->r[6]+c->r[0]; // 8004EFE4
  c->r[0]=R32(c->r[31]+0x00000014u); // 8004EFE8
  c->r[6]=c->r[6]+c->r[0]; // 8004EFEC
  c->r[0]=R32(c->r[31]+0x00000018u); // 8004EFF0
  c->r[6]=c->r[6]+c->r[0]; // 8004EFF4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8004EFF8
  c->r[6]=c->r[6]+c->r[0]; // 8004EFFC
  W32(c->r[30]+0xFFFFB740u,c->r[6]); // 8004F000
  c->lr=0x8004F008u; f_800881A0(c); // 8004F004
  cmps(c,0,(int32_t)c->r[3],0); // 8004F008
  if (!crb(c,2)) { goto L_8004F050; } // 8004F00C
  c->r[4]=c->r[31]|c->r[31]; // 8004F010
  c->r[3]=c->r[1]+0x00000008u; // 8004F014
  c->r[5]=0u+0x00000020u; // 8004F018
  c->lr=0x8004F020u; f_80087250(c); // 8004F01C
  cmpu(c,0,c->r[3],0x00000020u); // 8004F020
  if (crb(c,2)) { goto L_8004F038; } // 8004F024
  c->r[3]=c->r[1]+0x00000008u; // 8004F028
  c->lr=0x8004F030u; f_80088440(c); // 8004F02C
  c->r[3]=0u+0x00000000u; // 8004F030
  goto L_8004F05C; // 8004F034
L_8004F038:;
  c->r[3]=c->r[1]+0x00000008u; // 8004F038
  c->lr=0x8004F040u; f_80088440(c); // 8004F03C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F040
  if (crb(c,2)) { goto L_8004F058; } // 8004F044
  c->r[3]=0u+0x00000000u; // 8004F048
  goto L_8004F05C; // 8004F04C
L_8004F050:;
  c->r[3]=0u+0x00000000u; // 8004F050
  goto L_8004F05C; // 8004F054
L_8004F058:;
  c->r[3]=0u+0x00000001u; // 8004F058
L_8004F05C:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8004F05C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8004F060
  c->r[30]=R32(c->r[1]+0x00000098u); // 8004F064
  c->lr=c->r[0]; // 8004F068
  c->r[1]=c->r[1]+0x000000A0u; // 8004F06C
  return; // 8004F070
}

// __OSReadStateFlags
void f_8004F080(Ctx* __restrict c) {
  trace_call(0x8004F080u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F080
  c->r[0]=c->lr; // 8004F084
  c->r[5]=0u+0x00000001u; // 8004F088
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8004F08C
  c->r[4]=c->r[1]+0x00000008u; // 8004F090
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8004F094
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8004F098
  W32(c->r[1]+0x000000A4u,c->r[29]); // 8004F09C
  c->r[29]=0u+0x80140000u; // 8004F0A0
  W32(c->r[1]+0x000000A0u,c->r[28]); // 8004F0A4
  c->r[28]=c->r[3]|c->r[3]; // 8004F0A8
  c->r[3]=c->r[29]+0x00005468u; // 8004F0AC
  c->lr=0x8004F0B4u; f_800881A0(c); // 8004F0B0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F0B4
  if (!crb(c,2)) { goto L_8004F104; } // 8004F0B8
  c->r[30]=0u+0x801A0000u; // 8004F0BC
  c->r[3]=c->r[1]+0x00000008u; // 8004F0C0
  c->r[4]=c->r[30]+0xFFFFB740u; // 8004F0C4
  c->r[5]=0u+0x00000020u; // 8004F0C8
  c->lr=0x8004F0D0u; f_80087160(c); // 8004F0CC
  c->r[31]=c->r[3]|c->r[3]; // 8004F0D0
  c->r[3]=c->r[1]+0x00000008u; // 8004F0D4
  c->lr=0x8004F0DCu; f_80088440(c); // 8004F0D8
  cmpu(c,0,c->r[31],0x00000020u); // 8004F0DC
  if (crb(c,2)) { goto L_8004F11C; } // 8004F0E0
  c->r[3]=c->r[29]+0x00005468u; // 8004F0E4
  c->lr=0x8004F0ECu; f_80086F50(c); // 8004F0E8
  c->r[3]=c->r[28]|c->r[28]; // 8004F0EC
  c->r[4]=0u+0x00000000u; // 8004F0F0
  c->r[5]=0u+0x00000020u; // 8004F0F4
  c->lr=0x8004F0FCu; f_80004714(c); // 8004F0F8
  c->r[3]=0u+0x00000000u; // 8004F0FC
  goto L_8004F188; // 8004F100
L_8004F104:;
  c->r[3]=c->r[28]|c->r[28]; // 8004F104
  c->r[4]=0u+0x00000000u; // 8004F108
  c->r[5]=0u+0x00000020u; // 8004F10C
  c->lr=0x8004F114u; f_80004714(c); // 8004F110
  c->r[3]=0u+0x00000000u; // 8004F114
  goto L_8004F188; // 8004F118
L_8004F11C:;
  c->r[4]=c->r[30]+0xFFFFB740u; // 8004F11C
  c->r[0]=R32(c->r[30]+0xFFFFB740u); // 8004F120
  c->r[5]=R32(c->r[4]+0x00000004u); // 8004F124
  c->r[3]=R32(c->r[4]+0x00000008u); // 8004F128
  c->r[5]=c->r[5]+c->r[3]; // 8004F12C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8004F130
  c->r[5]=c->r[5]+c->r[3]; // 8004F134
  c->r[3]=R32(c->r[4]+0x00000010u); // 8004F138
  c->r[5]=c->r[5]+c->r[3]; // 8004F13C
  c->r[3]=R32(c->r[4]+0x00000014u); // 8004F140
  c->r[5]=c->r[5]+c->r[3]; // 8004F144
  c->r[3]=R32(c->r[4]+0x00000018u); // 8004F148
  c->r[5]=c->r[5]+c->r[3]; // 8004F14C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 8004F150
  c->r[5]=c->r[5]+c->r[3]; // 8004F154
  cmpu(c,0,c->r[0],c->r[5]); // 8004F158
  if (crb(c,2)) { goto L_8004F178; } // 8004F15C
  c->r[3]=c->r[28]|c->r[28]; // 8004F160
  c->r[4]=0u+0x00000000u; // 8004F164
  c->r[5]=0u+0x00000020u; // 8004F168
  c->lr=0x8004F170u; f_80004714(c); // 8004F16C
  c->r[3]=0u+0x00000000u; // 8004F170
  goto L_8004F188; // 8004F174
L_8004F178:;
  c->r[3]=c->r[28]|c->r[28]; // 8004F178
  c->r[5]=0u+0x00000020u; // 8004F17C
  c->lr=0x8004F184u; f_800043C4(c); // 8004F180
  c->r[3]=0u+0x00000001u; // 8004F184
L_8004F188:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8004F188
  c->r[31]=R32(c->r[1]+0x000000ACu); // 8004F18C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8004F190
  c->r[29]=R32(c->r[1]+0x000000A4u); // 8004F194
  c->r[28]=R32(c->r[1]+0x000000A0u); // 8004F198
  c->lr=c->r[0]; // 8004F19C
  c->r[1]=c->r[1]+0x000000B0u; // 8004F1A0
  return; // 8004F1A4
}

// __OSInitNet
void f_8004F1B0(Ctx* __restrict c) {
  trace_call(0x8004F1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F1B0
  c->r[0]=c->lr; // 8004F1B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F1B8
  c->r[3]=c->r[1]+0x00000008u; // 8004F1BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F1C0
  c->r[31]=0u+0x80140000u; // 8004F1C4
  c->r[31]=c->r[31]+0x00005490u; // 8004F1C8
  c->lr=0x8004F1D0u; f_80042A60(c); // 8004F1CC
  c->r[0]=R8(c->r[1]+0x00000009u); // 8004F1D0
  cmpu(c,0,c->r[0],0x00000004u); // 8004F1D4
  if (!crb(c,1)) { goto L_8004F250; } // 8004F1D8
  cmpu(c,0,c->r[0],0x00000009u); // 8004F1DC
  if (!crb(c,2)) { goto L_8004F1E8; } // 8004F1E0
  goto L_8004F250; // 8004F1E4
L_8004F1E8:;
  c->lr=0x8004F1ECu; f_8004F270(c); // 8004F1E8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F1EC
  if (crb(c,2)) { goto L_8004F224; } // 8004F1F0
  if (!crb(c,0)) { goto L_8004F208; } // 8004F1F4
  c->r[4]=c->r[3]|c->r[3]; // 8004F1F8
  c->r[3]=c->r[31]+0x00000000u; // 8004F1FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F200
  c->lr=0x8004F208u; f_80045C80(c); // 8004F204
L_8004F208:;
  c->lr=0x8004F20Cu; f_8004F3D0(c); // 8004F208
  cmps(c,0,(int32_t)c->r[3],0); // 8004F20C
  if (!crb(c,0)) { goto L_8004F224; } // 8004F210
  c->r[4]=c->r[3]|c->r[3]; // 8004F214
  c->r[3]=c->r[31]+0x00000034u; // 8004F218
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F21C
  c->lr=0x8004F224u; f_80045C80(c); // 8004F220
L_8004F224:;
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 8004F224
  cmps(c,0,(int32_t)c->r[0],0); // 8004F228
  if (!crb(c,2)) { goto L_8004F250; } // 8004F22C
  c->r[3]=0u+0x00000000u; // 8004F230
  c->lr=0x8004F238u; f_8004F330(c); // 8004F234
  cmps(c,0,(int32_t)c->r[3],0); // 8004F238
  if (crb(c,2)) { goto L_8004F250; } // 8004F23C
  c->r[4]=c->r[3]|c->r[3]; // 8004F240
  c->r[3]=c->r[31]+0x00000068u; // 8004F244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F248
  c->lr=0x8004F250u; f_80045C80(c); // 8004F24C
L_8004F250:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004F254
  c->lr=c->r[0]; // 8004F258
  c->r[1]=c->r[1]+0x00000020u; // 8004F25C
  return; // 8004F260
}

// NWC24iPrepareShutdown
void f_8004F270(Ctx* __restrict c) {
  trace_call(0x8004F270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F270
  c->r[0]=c->lr; // 8004F274
  c->r[4]=0u+0x801A0000u; // 8004F278
  c->r[5]=0u+0x80050000u; // 8004F27C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F280
  c->r[3]=c->r[4]+0xFFFFB760u; // 8004F284
  c->r[0]=0u+0x0000006Eu; // 8004F288
  c->r[5]=c->r[5]+0xFFFFF540u; // 8004F28C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F290
  c->r[31]=0u+0x00000000u; // 8004F294
  W32(c->r[4]+0xFFFFB760u,c->r[5]); // 8004F298
  W32(c->r[3]+0x00000004u,c->r[0]); // 8004F29C
  c->lr=0x8004F2A4u; f_8004AF80(c); // 8004F2A0
  c->r[0]=R32(c->r[13]+0xFFFF8130u); // 8004F2A4
  cmps(c,0,(int32_t)c->r[0],0); // 8004F2A8
  if (!crb(c,0)) { goto L_8004F2FC; } // 8004F2AC
  c->r[0]=c->r[13]+0xFFFF8130u; // 8004F2B0
  c->r[3]=0u+0x80140000u; // 8004F2B4
  cmps(c,0,(int32_t)c->r[0],0); // 8004F2B8
  c->r[3]=c->r[3]+0x00005550u; // 8004F2BC
  if (!crb(c,2)) { goto L_8004F2CC; } // 8004F2C0
  c->r[31]=0u+0xFFFFFFFDu; // 8004F2C4
  goto L_8004F2FC; // 8004F2C8
L_8004F2CC:;
  c->r[4]=0u+0x00000001u; // 8004F2CC
  c->lr=0x8004F2D4u; f_80085210(c); // 8004F2D0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F2D4
  W32(c->r[13]+0xFFFF8130u,c->r[3]); // 8004F2D8
  if (!crb(c,0)) { goto L_8004F2F8; } // 8004F2DC
  cmps(c,0,(int32_t)c->r[3],-6); // 8004F2E0
  if (!crb(c,2)) { goto L_8004F2F0; } // 8004F2E4
  c->r[31]=0u+0xFFFFFFE3u; // 8004F2E8
  goto L_8004F2FC; // 8004F2EC
L_8004F2F0:;
  c->r[31]=0u+0xFFFFFFD6u; // 8004F2F0
  goto L_8004F2FC; // 8004F2F4
L_8004F2F8:;
  c->r[31]=0u+0x00000000u; // 8004F2F8
L_8004F2FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F2FC
  c->r[0]=0u+0x00000005u; // 8004F300
  W32(c->r[13]+0xFFFF8BC0u,c->r[0]); // 8004F304
  if (!crb(c,2)) { goto L_8004F310; } // 8004F308
  c->r[31]=0u+0x00000001u; // 8004F30C
L_8004F310:;
  c->r[3]=c->r[31]|c->r[31]; // 8004F310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F314
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F318
  c->lr=c->r[0]; // 8004F31C
  c->r[1]=c->r[1]+0x00000010u; // 8004F320
  return; // 8004F324
}

// NWC24iSynchronizeRtcCounter
void f_8004F330(Ctx* __restrict c) {
  trace_call(0x8004F330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F330
  c->r[0]=c->lr; // 8004F334
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F33C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004F340
  c->r[30]=c->r[3]|c->r[3]; // 8004F344
L_8004F348:;
  c->lr=0x8004F34Cu; f_8008A0A0(c); // 8004F348
  cmpu(c,0,c->r[3],0x00000002u); // 8004F34C
  if (!crb(c,2)) { goto L_8004F35C; } // 8004F350
  c->r[3]=0u+0xFFFFFFFFu; // 8004F354
  goto L_8004F38C; // 8004F358
L_8004F35C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004F35C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004F348; } // 8004F360
  c->lr=0x8004F368u; f_8008BC10(c); // 8004F364
  c->r[31]=c->r[3]|c->r[3]; // 8004F368
  c->lr=0x8004F370u; f_8004DAA0(c); // 8004F36C
  c->r[6]=0u+0x80000000u; // 8004F370
  c->r[5]=0u+0x00000000u; // 8004F374
  c->r[0]=R32(c->r[6]+0x000000F8u); // 8004F378
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004F37C
  c->lr=0x8004F384u; f_8006E678(c); // 8004F380
  c->r[31]=addc(c,~c->r[31],c->r[4],1); // 8004F384
  c->r[3]=0u+0x00000000u; // 8004F388
L_8004F38C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004F38C
  if (crb(c,2)) { goto L_8004F398; } // 8004F390
  goto L_8004F3AC; // 8004F394
L_8004F398:;
  c->r[0]=0u-c->r[30]; // 8004F398
  c->r[3]=c->r[31]|c->r[31]; // 8004F39C
  c->r[0]=c->r[0]|c->r[30]; // 8004F3A0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8004F3A4
  c->lr=0x8004F3ACu; f_8004F600(c); // 8004F3A8
L_8004F3AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F3AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F3B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004F3B4
  c->lr=c->r[0]; // 8004F3B8
  c->r[1]=c->r[1]+0x00000010u; // 8004F3BC
  return; // 8004F3C0
}

// NWC24SuspendScheduler
void f_8004F3D0(Ctx* __restrict c) {
  trace_call(0x8004F3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F3D0
  c->r[0]=c->lr; // 8004F3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F3D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F3DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004F3E0
  c->lr=0x8004F3E8u; f_8004C700(c); // 8004F3E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004F3E8
  if (!crb(c,2)) { goto L_8004F3F8; } // 8004F3EC
  c->r[3]=0u+0xFFFFFFFFu; // 8004F3F0
  goto L_8004F3FC; // 8004F3F4
L_8004F3F8:;
  c->r[3]=0u+0x00000000u; // 8004F3F8
L_8004F3FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004F3FC
  if (!crb(c,0)) { goto L_8004F408; } // 8004F400
  goto L_8004F4B8; // 8004F404
L_8004F408:;
  c->r[3]=0u+0x80140000u; // 8004F408
  c->r[4]=0u+0x00000000u; // 8004F40C
  c->r[3]=c->r[3]+0x00005550u; // 8004F410
  c->lr=0x8004F418u; f_80085210(c); // 8004F414
  cmps(c,0,(int32_t)c->r[3],0); // 8004F418
  c->r[30]=c->r[3]|c->r[3]; // 8004F41C
  if (!crb(c,0)) { goto L_8004F43C; } // 8004F420
  cmps(c,0,(int32_t)c->r[3],-6); // 8004F424
  if (!crb(c,2)) { goto L_8004F434; } // 8004F428
  c->r[31]=0u+0xFFFFFFE3u; // 8004F42C
  goto L_8004F440; // 8004F430
L_8004F434:;
  c->r[31]=0u+0xFFFFFFD6u; // 8004F434
  goto L_8004F440; // 8004F438
L_8004F43C:;
  c->r[31]=0u+0x00000000u; // 8004F43C
L_8004F440:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F440
  if (crb(c,0)) { goto L_8004F4B4; } // 8004F444
  c->r[7]=0u+0x801A0000u; // 8004F448
  c->r[3]=c->r[30]|c->r[30]; // 8004F44C
  c->r[7]=c->r[7]+0xFFFFB780u; // 8004F450
  c->r[4]=0u+0x00000001u; // 8004F454
  c->r[5]=0u+0x00000000u; // 8004F458
  c->r[6]=0u+0x00000000u; // 8004F45C
  c->r[8]=0u+0x00000020u; // 8004F460
  c->lr=0x8004F468u; f_80085BE0(c); // 8004F464
  cmps(c,0,(int32_t)c->r[3],0); // 8004F468
  if (!crb(c,0)) { goto L_8004F478; } // 8004F46C
  c->r[31]=0u+0xFFFFFFD6u; // 8004F470
  goto L_8004F47C; // 8004F474
L_8004F478:;
  c->r[31]=0u+0x00000000u; // 8004F478
L_8004F47C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F47C
  if (crb(c,0)) { goto L_8004F48C; } // 8004F480
  c->r[3]=0u+0x801A0000u; // 8004F484
  c->r[31]=R32(c->r[3]+0xFFFFB780u); // 8004F488
L_8004F48C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004F48C
  c->lr=0x8004F494u; f_80085400(c); // 8004F490
  cmps(c,0,(int32_t)c->r[3],0); // 8004F494
  if (!crb(c,0)) { goto L_8004F4A4; } // 8004F498
  c->r[0]=0u+0xFFFFFFD6u; // 8004F49C
  goto L_8004F4A8; // 8004F4A0
L_8004F4A4:;
  c->r[0]=0u+0x00000000u; // 8004F4A4
L_8004F4A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004F4A8
  if (!crb(c,0)) { goto L_8004F4B4; } // 8004F4AC
  c->r[31]=c->r[0]|c->r[0]; // 8004F4B0
L_8004F4B4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004F4B4
L_8004F4B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F4B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F4BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004F4C0
  c->lr=c->r[0]; // 8004F4C4
  c->r[1]=c->r[1]+0x00000010u; // 8004F4C8
  return; // 8004F4CC
}

// NWC24iRequestShutdown
void f_8004F4D0(Ctx* __restrict c) {
  trace_call(0x8004F4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F4D0
  c->r[0]=c->lr; // 8004F4D4
  c->r[7]=0u+0x801A0000u; // 8004F4D8
  c->r[9]=0u+0x80050000u; // 8004F4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F4E0
  c->r[5]=0u+0x801A0000u; // 8004F4E4
  c->r[10]=c->r[4]|c->r[4]; // 8004F4E8
  c->r[7]=c->r[7]+0xFFFFB7C0u; // 8004F4EC
  W32(c->r[5]+0xFFFFB7A0u,c->r[3]); // 8004F4F0
  c->r[5]=c->r[5]+0xFFFFB7A0u; // 8004F4F4
  c->r[3]=R32(c->r[13]+0xFFFF8130u); // 8004F4F8
  c->r[9]=c->r[9]+0xFFFFF730u; // 8004F4FC
  c->r[4]=0u+0x00000028u; // 8004F500
  c->r[6]=0u+0x00000020u; // 8004F504
  c->r[8]=0u+0x00000020u; // 8004F508
  c->lr=0x8004F510u; f_80085AA0(c); // 8004F50C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F510
  if (!crb(c,0)) { goto L_8004F520; } // 8004F514
  c->r[3]=0u+0xFFFFFFD6u; // 8004F518
  goto L_8004F52C; // 8004F51C
L_8004F520:;
  c->r[0]=0u+0x00000001u; // 8004F520
  W32(c->r[13]+0xFFFF8BC4u,c->r[0]); // 8004F524
  c->r[3]=0u+0x00000000u; // 8004F528
L_8004F52C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F52C
  c->lr=c->r[0]; // 8004F530
  c->r[1]=c->r[1]+0x00000010u; // 8004F534
  return; // 8004F538
}

// NWC24Shutdown_
void f_8004F540(Ctx* __restrict c) {
  trace_call(0x8004F540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F540
  c->r[0]=c->lr; // 8004F544
  cmps(c,0,(int32_t)c->r[3],0); // 8004F548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F54C
  if (crb(c,2)) { goto L_8004F55C; } // 8004F550
  c->r[3]=0u+0x00000001u; // 8004F554
  goto L_8004F5E8; // 8004F558
L_8004F55C:;
  c->r[0]=R32(c->r[13]+0xFFFF8BC8u); // 8004F55C
  cmps(c,0,(int32_t)c->r[0],0); // 8004F560
  if (crb(c,2)) { goto L_8004F5C8; } // 8004F564
  c->r[0]=R32(c->r[13]+0xFFFF8BC4u); // 8004F568
  cmps(c,0,(int32_t)c->r[0],0); // 8004F56C
  if (crb(c,2)) { goto L_8004F57C; } // 8004F570
  c->r[3]=0u+0x00000000u; // 8004F574
  goto L_8004F5E8; // 8004F578
L_8004F57C:;
  c->r[0]=R32(c->r[13]+0xFFFF8BCCu); // 8004F57C
  cmps(c,0,(int32_t)c->r[0],0); // 8004F580
  if (crb(c,0)) { goto L_8004F590; } // 8004F584
  c->r[3]=0u+0x00000001u; // 8004F588
  goto L_8004F5E8; // 8004F58C
L_8004F590:;
  c->r[3]=R32(c->r[13]+0xFFFF8BC0u); // 8004F590
  cmps(c,0,(int32_t)c->r[3],0); // 8004F594
  if (!crb(c,1)) { goto L_8004F5B0; } // 8004F598
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004F59C
  c->r[3]=0u+0x00000000u; // 8004F5A0
  W32(c->r[13]+0xFFFF8BC8u,c->r[3]); // 8004F5A4
  W32(c->r[13]+0xFFFF8BC0u,c->r[0]); // 8004F5A8
  goto L_8004F5E4; // 8004F5AC
L_8004F5B0:;
  c->r[3]=0u+0x80140000u; // 8004F5B0
  c->r[3]=c->r[3]+0x000055ACu; // 8004F5B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F5B8
  c->lr=0x8004F5C0u; f_80045C80(c); // 8004F5BC
  c->r[3]=0u+0x00000001u; // 8004F5C0
  goto L_8004F5E8; // 8004F5C4
L_8004F5C8:;
  c->r[3]=c->r[4]|c->r[4]; // 8004F5C8
  c->r[4]=c->r[13]+0xFFFF8BCCu; // 8004F5CC
  c->lr=0x8004F5D4u; f_8004F4D0(c); // 8004F5D0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F5D4
  if (crb(c,0)) { goto L_8004F5E4; } // 8004F5D8
  c->r[0]=0u+0x00000001u; // 8004F5DC
  W32(c->r[13]+0xFFFF8BC8u,c->r[0]); // 8004F5E0
L_8004F5E4:;
  c->r[3]=0u+0x00000000u; // 8004F5E4
L_8004F5E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F5E8
  c->lr=c->r[0]; // 8004F5EC
  c->r[1]=c->r[1]+0x00000010u; // 8004F5F0
  return; // 8004F5F4
}

// NWC24iSetRtcCounter_
void f_8004F600(Ctx* __restrict c) {
  trace_call(0x8004F600u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F600
  c->r[0]=c->lr; // 8004F604
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F60C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004F610
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004F614
  c->r[29]=c->r[4]|c->r[4]; // 8004F618
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004F61C
  c->r[28]=c->r[3]|c->r[3]; // 8004F620
  c->lr=0x8004F628u; f_8004C700(c); // 8004F624
  cmps(c,0,(int32_t)c->r[3],0); // 8004F628
  if (!crb(c,2)) { goto L_8004F638; } // 8004F62C
  c->r[3]=0u+0xFFFFFFFFu; // 8004F630
  goto L_8004F63C; // 8004F634
L_8004F638:;
  c->r[3]=0u+0x00000000u; // 8004F638
L_8004F63C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004F63C
  if (!crb(c,0)) { goto L_8004F648; } // 8004F640
  goto L_8004F704; // 8004F644
L_8004F648:;
  c->r[3]=0u+0x80140000u; // 8004F648
  c->r[4]=0u+0x00000000u; // 8004F64C
  c->r[3]=c->r[3]+0x000055E0u; // 8004F650
  c->lr=0x8004F658u; f_80085210(c); // 8004F654
  cmps(c,0,(int32_t)c->r[3],0); // 8004F658
  c->r[30]=c->r[3]|c->r[3]; // 8004F65C
  if (!crb(c,0)) { goto L_8004F67C; } // 8004F660
  cmps(c,0,(int32_t)c->r[3],-6); // 8004F664
  if (!crb(c,2)) { goto L_8004F674; } // 8004F668
  c->r[31]=0u+0xFFFFFFE3u; // 8004F66C
  goto L_8004F680; // 8004F670
L_8004F674:;
  c->r[31]=0u+0xFFFFFFD6u; // 8004F674
  goto L_8004F680; // 8004F678
L_8004F67C:;
  c->r[31]=0u+0x00000000u; // 8004F67C
L_8004F680:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F680
  if (crb(c,0)) { goto L_8004F700; } // 8004F684
  c->r[3]=0u+0x801A0000u; // 8004F688
  c->r[7]=0u+0x801A0000u; // 8004F68C
  c->r[5]=c->r[3]+0xFFFFB7E0u; // 8004F690
  W32(c->r[3]+0xFFFFB7E0u,c->r[28]); // 8004F694
  c->r[3]=c->r[30]|c->r[30]; // 8004F698
  c->r[7]=c->r[7]+0xFFFFB800u; // 8004F69C
  W32(c->r[5]+0x00000004u,c->r[29]); // 8004F6A0
  c->r[4]=0u+0x00000017u; // 8004F6A4
  c->r[6]=0u+0x00000020u; // 8004F6A8
  c->r[8]=0u+0x00000020u; // 8004F6AC
  c->lr=0x8004F6B4u; f_80085BE0(c); // 8004F6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F6B4
  if (!crb(c,0)) { goto L_8004F6C4; } // 8004F6B8
  c->r[31]=0u+0xFFFFFFD6u; // 8004F6BC
  goto L_8004F6C8; // 8004F6C0
L_8004F6C4:;
  c->r[31]=0u+0x00000000u; // 8004F6C4
L_8004F6C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F6C8
  if (crb(c,0)) { goto L_8004F6D8; } // 8004F6CC
  c->r[3]=0u+0x801A0000u; // 8004F6D0
  c->r[31]=R32(c->r[3]+0xFFFFB800u); // 8004F6D4
L_8004F6D8:;
  c->r[3]=c->r[30]|c->r[30]; // 8004F6D8
  c->lr=0x8004F6E0u; f_80085400(c); // 8004F6DC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F6E0
  if (!crb(c,0)) { goto L_8004F6F0; } // 8004F6E4
  c->r[0]=0u+0xFFFFFFD6u; // 8004F6E8
  goto L_8004F6F4; // 8004F6EC
L_8004F6F0:;
  c->r[0]=0u+0x00000000u; // 8004F6F0
L_8004F6F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F6F4
  if (crb(c,0)) { goto L_8004F700; } // 8004F6F8
  c->r[31]=c->r[0]|c->r[0]; // 8004F6FC
L_8004F700:;
  c->r[3]=c->r[31]|c->r[31]; // 8004F700
L_8004F704:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F704
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004F708
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004F70C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004F710
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004F714
  c->lr=c->r[0]; // 8004F718
  c->r[1]=c->r[1]+0x00000020u; // 8004F71C
  return; // 8004F720
}

// CallbackAsyncIpc
void f_8004F730(Ctx* __restrict c) {
  trace_call(0x8004F730u);
  cmps(c,0,(int32_t)c->r[4],0); // 8004F730
  if (crb(c,2)) { goto L_8004F73C; } // 8004F734
  W32(c->r[4]+0x00000000u,c->r[3]); // 8004F738
L_8004F73C:;
  c->r[0]=0u+0x00000000u; // 8004F73C
  W32(c->r[13]+0xFFFF8BC4u,c->r[0]); // 8004F740
  c->r[3]=0u+0x00000000u; // 8004F744
  return; // 8004F748
}

// __OSCreateNandbootInfo
void f_8004F750(Ctx* __restrict c) {
  trace_call(0x8004F750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F750
  c->r[0]=c->lr; // 8004F754
  c->r[3]=0u+0x80140000u; // 8004F758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F75C
  c->r[4]=c->r[1]+0x00000008u; // 8004F760
  c->r[3]=c->r[3]+0x000055F8u; // 8004F764
  c->lr=0x8004F76Cu; f_80087C50(c); // 8004F768
  cmps(c,0,(int32_t)c->r[3],0); // 8004F76C
  if (!crb(c,2)) { goto L_8004F788; } // 8004F770
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8004F774
  cmpu(c,0,c->r[0],0x0000003Fu); // 8004F778
  if (!crb(c,2)) { goto L_8004F788; } // 8004F77C
  c->r[3]=0u+0x00000001u; // 8004F780
  goto L_8004F7F0; // 8004F784
L_8004F788:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004F788
  if (!crb(c,2)) { goto L_8004F7B8; } // 8004F78C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8004F790
  cmpu(c,0,c->r[0],0x0000003Fu); // 8004F794
  if (crb(c,2)) { goto L_8004F7B8; } // 8004F798
  c->r[3]=0u+0x80140000u; // 8004F79C
  c->r[3]=c->r[3]+0x000055F8u; // 8004F7A0
  c->lr=0x8004F7A8u; f_80087000(c); // 8004F7A4
  cmps(c,0,(int32_t)c->r[3],0); // 8004F7A8
  if (crb(c,2)) { goto L_8004F7C8; } // 8004F7AC
  c->r[3]=0u+0x00000000u; // 8004F7B0
  goto L_8004F7F0; // 8004F7B4
L_8004F7B8:;
  cmps(c,0,(int32_t)c->r[3],-12); // 8004F7B8
  if (crb(c,2)) { goto L_8004F7C8; } // 8004F7BC
  c->r[3]=0u+0x00000000u; // 8004F7C0
  goto L_8004F7F0; // 8004F7C4
L_8004F7C8:;
  c->r[3]=0u+0x80140000u; // 8004F7C8
  c->r[4]=0u+0x0000003Fu; // 8004F7CC
  c->r[3]=c->r[3]+0x000055F8u; // 8004F7D0
  c->r[5]=0u+0x00000000u; // 8004F7D4
  c->lr=0x8004F7DCu; f_80086E50(c); // 8004F7D8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F7DC
  if (crb(c,2)) { goto L_8004F7EC; } // 8004F7E0
  c->r[3]=0u+0x00000000u; // 8004F7E4
  goto L_8004F7F0; // 8004F7E8
L_8004F7EC:;
  c->r[3]=0u+0x00000001u; // 8004F7EC
L_8004F7F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F7F0
  c->lr=c->r[0]; // 8004F7F4
  c->r[1]=c->r[1]+0x00000010u; // 8004F7F8
  return; // 8004F7FC
}

// __OSWriteNandbootInfo
void f_8004F800(Ctx* __restrict c) {
  trace_call(0x8004F800u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F800
  c->r[0]=c->lr; // 8004F804
  c->r[8]=c->r[3]+0x00000004u; // 8004F808
  c->r[7]=0u+0x00000000u; // 8004F80C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8004F810
  c->r[0]=0u+0x00000040u; // 8004F814
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8004F818
  c->r[31]=c->r[3]|c->r[3]; // 8004F81C
  c->ctr=c->r[0]; // 8004F820
L_8004F824:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 8004F824
  c->r[0]=R32(c->r[8]+0x00000004u); // 8004F828
  c->r[7]=c->r[7]+c->r[4]; // 8004F82C
  c->r[4]=R32(c->r[8]+0x00000008u); // 8004F830
  c->r[7]=c->r[7]+c->r[0]; // 8004F834
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 8004F838
  c->r[7]=c->r[7]+c->r[4]; // 8004F83C
  c->r[4]=R32(c->r[8]+0x00000010u); // 8004F840
  c->r[7]=c->r[7]+c->r[0]; // 8004F844
  c->r[0]=R32(c->r[8]+0x00000014u); // 8004F848
  c->r[7]=c->r[7]+c->r[4]; // 8004F84C
  c->r[4]=R32(c->r[8]+0x00000018u); // 8004F850
  c->r[7]=c->r[7]+c->r[0]; // 8004F854
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8004F858
  c->r[7]=c->r[7]+c->r[4]; // 8004F85C
  c->r[4]=R32(c->r[8]+0x00000020u); // 8004F860
  c->r[7]=c->r[7]+c->r[0]; // 8004F864
  c->r[0]=R32(c->r[8]+0x00000024u); // 8004F868
  c->r[7]=c->r[7]+c->r[4]; // 8004F86C
  c->r[4]=R32(c->r[8]+0x00000028u); // 8004F870
  c->r[7]=c->r[7]+c->r[0]; // 8004F874
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 8004F878
  c->r[7]=c->r[7]+c->r[4]; // 8004F87C
  c->r[4]=R32(c->r[8]+0x00000030u); // 8004F880
  c->r[7]=c->r[7]+c->r[0]; // 8004F884
  c->r[0]=R32(c->r[8]+0x00000034u); // 8004F888
  c->r[7]=c->r[7]+c->r[4]; // 8004F88C
  c->r[4]=R32(c->r[8]+0x00000038u); // 8004F890
  c->r[7]=c->r[7]+c->r[0]; // 8004F894
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8004F898
  c->r[7]=c->r[7]+c->r[4]; // 8004F89C
  c->r[8]=c->r[8]+0x00000040u; // 8004F8A0
  c->r[7]=c->r[7]+c->r[0]; // 8004F8A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004F824; } // 8004F8A8
  c->r[0]=R32(c->r[8]+0x00000000u); // 8004F8AC
  c->r[6]=0u+0x80140000u; // 8004F8B0
  c->r[5]=R32(c->r[8]+0x00000004u); // 8004F8B4
  c->r[4]=c->r[1]+0x00000008u; // 8004F8B8
  c->r[7]=c->r[7]+c->r[0]; // 8004F8BC
  c->r[0]=R32(c->r[8]+0x00000008u); // 8004F8C0
  c->r[7]=c->r[7]+c->r[5]; // 8004F8C4
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 8004F8C8
  c->r[7]=c->r[7]+c->r[0]; // 8004F8CC
  c->r[0]=R32(c->r[8]+0x00000010u); // 8004F8D0
  c->r[7]=c->r[7]+c->r[5]; // 8004F8D4
  c->r[5]=R32(c->r[8]+0x00000014u); // 8004F8D8
  c->r[7]=c->r[7]+c->r[0]; // 8004F8DC
  c->r[0]=R32(c->r[8]+0x00000018u); // 8004F8E0
  c->r[7]=c->r[7]+c->r[5]; // 8004F8E4
  c->r[5]=0u+0x00000002u; // 8004F8E8
  c->r[7]=c->r[7]+c->r[0]; // 8004F8EC
  W32(c->r[3]+0x00000000u,c->r[7]); // 8004F8F0
  c->r[3]=c->r[6]+0x000055F8u; // 8004F8F4
  c->lr=0x8004F8FCu; f_80088230(c); // 8004F8F8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F8FC
  if (!crb(c,2)) { goto L_8004F940; } // 8004F900
  c->r[4]=c->r[31]|c->r[31]; // 8004F904
  c->r[3]=c->r[1]+0x00000008u; // 8004F908
  c->r[5]=0u+0x00001020u; // 8004F90C
  c->lr=0x8004F914u; f_80087250(c); // 8004F910
  cmpu(c,0,c->r[3],0x00001020u); // 8004F914
  if (crb(c,2)) { goto L_8004F92C; } // 8004F918
  c->r[3]=c->r[1]+0x00000008u; // 8004F91C
  c->lr=0x8004F924u; f_80088440(c); // 8004F920
  c->r[3]=0u+0x00000000u; // 8004F924
  goto L_8004F944; // 8004F928
L_8004F92C:;
  c->r[3]=c->r[1]+0x00000008u; // 8004F92C
  c->lr=0x8004F934u; f_80088440(c); // 8004F930
  c->r[0]=cntlz(c->r[3]); // 8004F934
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004F938
  goto L_8004F944; // 8004F93C
L_8004F940:;
  c->r[3]=0u+0x00000000u; // 8004F940
L_8004F944:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8004F944
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8004F948
  c->lr=c->r[0]; // 8004F94C
  c->r[1]=c->r[1]+0x000000A0u; // 8004F950
  return; // 8004F954
}

// OSPlayTimeIsLimited
void f_8004F960(Ctx* __restrict c) {
  trace_call(0x8004F960u);
  c->r[0]=R32(c->r[13]+0xFFFF8BE0u); // 8004F960
  c->r[3]=R32(c->r[13]+0xFFFF8BE4u); // 8004F964
  c->r[0]=c->r[3]|c->r[0]; // 8004F968
  c->r[3]=addc(c,c->r[0],0xFFFFFFFFu,0); // 8004F96C
  c->r[3]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8004F970
  return; // 8004F974
}

// __OSPlayTimeFadeLastAIDCallback
void f_8004F980(Ctx* __restrict c) {
  trace_call(0x8004F980u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F980
  c->r[0]=c->lr; // 8004F984
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004F988
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004F98C
  W32(c->r[1]+0x00000038u,c->r[30]); // 8004F990
  W32(c->r[1]+0x00000034u,c->r[29]); // 8004F994
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004F998
  c->r[12]=R32(c->r[3]+0x00000490u); // 8004F99C
  cmps(c,0,(int32_t)c->r[12],0); // 8004F9A0
  if (crb(c,2)) { goto L_8004F9B0; } // 8004F9A4
  c->ctr=c->r[12]; // 8004F9A8
  if (true) { c->lr=0x8004F9B0u; dispatch(c,c->ctr); } // 8004F9AC
L_8004F9B0:;
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004F9B0
  c->r[0]=R32(c->r[3]+0x00000488u); // 8004F9B4
  cmps(c,0,(int32_t)c->r[0],0); // 8004F9B8
  if (!crb(c,2)) { goto L_8004F9D0; } // 8004F9BC
  c->lr=0x8004F9C4u; f_80061190(c); // 8004F9C0
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 8004F9C4
  c->r[0]=c->r[3]+0x80000000u; // 8004F9C8
  W32(c->r[4]+0x00000484u,c->r[0]); // 8004F9CC
L_8004F9D0:;
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004F9D0
  c->r[0]=R32(c->r[3]+0x00000488u); // 8004F9D4
  cmpu(c,0,c->r[0],0x00000001u); // 8004F9D8
  if (!crb(c,2)) { goto L_8004FA14; } // 8004F9DC
  c->r[3]=R32(c->r[3]+0x00000484u); // 8004F9E0
  c->r[4]=0u+0x00000004u; // 8004F9E4
  c->lr=0x8004F9ECu; f_80044FE0(c); // 8004F9E8
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 8004F9EC
  c->r[3]=R32(c->r[4]+0x00000484u); // 8004F9F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8004F9F4
  c->r[3]=c->r[3]+0x00000002u; // 8004F9F8
  W16(c->r[4]+0x0000048Cu,c->r[0]); // 8004F9FC
  W32(c->r[4]+0x00000484u,c->r[3]); // 8004FA00
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 8004FA04
  c->r[3]=R32(c->r[4]+0x00000484u); // 8004FA08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8004FA0C
  W16(c->r[4]+0x0000048Eu,c->r[0]); // 8004FA10
L_8004FA14:;
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FA14
  c->r[0]=R32(c->r[3]+0x00000488u); // 8004FA18
  cmpu(c,0,c->r[0],0x00000001u); // 8004FA1C
  if (crb(c,0)) { goto L_8004FB10; } // 8004FA20
  c->r[0]=R32(c->r[3]+0x00000480u); // 8004FA24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)576); // 8004FA28
  c->r[31]=c->r[3]+c->r[0]; // 8004FA2C
  c->r[30]=c->r[31]|c->r[31]; // 8004FA30
  c->lr=0x8004FA38u; f_800611B0(c); // 8004FA34
  c->r[29]=c->r[3]|c->r[3]; // 8004FA38
  {uint32_t ea=c->r[2]+0xFFFF8220u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FA3C
  {uint32_t ea=c->r[2]+0xFFFF8228u; c->f[1]=RF64(ea);} // 8004FA40
  c->r[5]=c->r[29]|c->r[29]; // 8004FA44
  c->r[4]=0u+0x43300000u; // 8004FA48
  goto L_8004FAD0; // 8004FA4C
L_8004FA50:;
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FA50
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 8004FA54
  W32(c->r[1]+0x00000008u,c->r[4]); // 8004FA58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 8004FA5C
  W16(c->r[30]+0x00000000u,c->r[0]); // 8004FA60
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FA64
  W32(c->r[1]+0x00000018u,c->r[4]); // 8004FA68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 8004FA6C
  W16(c->r[30]+0x00000002u,c->r[0]); // 8004FA70
  c->r[30]=c->r[30]+0x00000004u; // 8004FA74
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FA78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 8004FA7C
  c->r[0]=c->r[0]^0x80000000u; // 8004FA80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8004FA84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8004FA88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004FA8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8004FA90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004FA94
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8004FA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FA9C
  W16(c->r[3]+0x0000048Cu,c->r[0]); // 8004FAA0
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FAA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 8004FAA8
  c->r[0]=c->r[0]^0x80000000u; // 8004FAAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8004FAB0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8004FAB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004FAB8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8004FABC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004FAC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8004FAC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004FAC8
  W16(c->r[3]+0x0000048Eu,c->r[0]); // 8004FACC
L_8004FAD0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004FAD0
  if (!crb(c,2)) { IRQCHK(c); goto L_8004FA50; } // 8004FAD4
  c->r[3]=c->r[31]|c->r[31]; // 8004FAD8
  c->r[4]=c->r[29]|c->r[29]; // 8004FADC
  c->lr=0x8004FAE4u; f_80045010(c); // 8004FAE0
  c->r[3]=c->r[31]|c->r[31]; // 8004FAE4
  c->r[4]=c->r[29]|c->r[29]; // 8004FAE8
  c->lr=0x8004FAF0u; f_800610C0(c); // 8004FAEC
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 8004FAF0
  c->r[3]=R32(c->r[4]+0x00000480u); // 8004FAF4
  c->r[0]=c->r[3]+0x00000001u; // 8004FAF8
  W32(c->r[4]+0x00000480u,c->r[0]); // 8004FAFC
  c->r[3]=R32(c->r[13]+0xFFFF8BD0u); // 8004FB00
  c->r[0]=R32(c->r[3]+0x00000480u); // 8004FB04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8004FB08
  W32(c->r[3]+0x00000480u,c->r[0]); // 8004FB0C
L_8004FB10:;
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 8004FB10
  c->r[3]=R32(c->r[4]+0x00000488u); // 8004FB14
  c->r[0]=c->r[3]+0x00000001u; // 8004FB18
  W32(c->r[4]+0x00000488u,c->r[0]); // 8004FB1C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8004FB20
  c->r[30]=R32(c->r[1]+0x00000038u); // 8004FB24
  c->r[29]=R32(c->r[1]+0x00000034u); // 8004FB28
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004FB2C
  c->lr=c->r[0]; // 8004FB30
  c->r[1]=c->r[1]+0x00000040u; // 8004FB34
  return; // 8004FB38
}

// __OSWriteExpiredFlag
void f_8004FB40(Ctx* __restrict c) {
  trace_call(0x8004FB40u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8004FB40
  c->r[12]=c->r[1]|c->r[1]; // 8004FB44
  c->r[11]=addc(c,~c->r[11],0xFFFFFF00u,1); // 8004FB48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FB4C
  c->r[0]=c->lr; // 8004FB50
  c->r[3]=0u+0x80140000u; // 8004FB54
  c->r[5]=0u+0x00000000u; // 8004FB58
  W32(c->r[12]+0x00000004u,c->r[0]); // 8004FB5C
  c->r[3]=c->r[3]+0x00005618u; // 8004FB60
  c->r[4]=0u+0x0000003Fu; // 8004FB64
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8004FB68
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8004FB6C
  c->r[30]=0u+0x00000000u; // 8004FB70
  c->lr=0x8004FB78u; f_80086E50(c); // 8004FB74
  cmps(c,0,(int32_t)c->r[3],0); // 8004FB78
  c->r[31]=c->r[3]|c->r[3]; // 8004FB7C
  if (crb(c,2)) { goto L_8004FB8C; } // 8004FB80
  cmps(c,0,(int32_t)c->r[3],-6); // 8004FB84
  if (!crb(c,2)) { goto L_8004FC14; } // 8004FB88
L_8004FB8C:;
  c->r[3]=0u+0x80140000u; // 8004FB8C
  c->r[4]=c->r[1]+0x00000040u; // 8004FB90
  c->r[3]=c->r[3]+0x00005618u; // 8004FB94
  c->r[5]=0u+0x00000002u; // 8004FB98
  c->lr=0x8004FBA0u; f_80088230(c); // 8004FB9C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FBA0
  c->r[31]=c->r[3]|c->r[3]; // 8004FBA4
  if (!crb(c,2)) { goto L_8004FC14; } // 8004FBA8
  c->r[30]=0u+0x00000001u; // 8004FBAC
  c->lr=0x8004FBB4u; f_800DB3E0(c); // 8004FBB0
  cmps(c,0,(int32_t)c->r[3],0); // 8004FBB4
  c->r[31]=c->r[3]|c->r[3]; // 8004FBB8
  if (!crb(c,2)) { goto L_8004FC14; } // 8004FBBC
  c->r[3]=c->r[1]+0x00000020u; // 8004FBC0
  c->r[4]=0u+0x00000000u; // 8004FBC4
  c->r[5]=0u+0x00000020u; // 8004FBC8
  c->lr=0x8004FBD0u; f_80004714(c); // 8004FBCC
  c->r[3]=c->r[1]+0x00000020u; // 8004FBD0
  c->lr=0x8004FBD8u; f_800DB9A0(c); // 8004FBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8004FBD8
  c->r[31]=c->r[3]|c->r[3]; // 8004FBDC
  if (!crb(c,2)) { goto L_8004FC14; } // 8004FBE0
  c->r[3]=c->r[1]+0x00000040u; // 8004FBE4
  c->r[4]=c->r[1]+0x00000020u; // 8004FBE8
  c->r[5]=0u+0x00000020u; // 8004FBEC
  c->lr=0x8004FBF4u; f_80087250(c); // 8004FBF0
  cmps(c,0,(int32_t)c->r[3],0); // 8004FBF4
  c->r[31]=c->r[3]|c->r[3]; // 8004FBF8
  if (crb(c,0)) { goto L_8004FC14; } // 8004FBFC
  cmps(c,0,(int32_t)c->r[3],32); // 8004FC00
  if (crb(c,2)) { goto L_8004FC10; } // 8004FC04
  c->r[31]=0u+0xFFFFFFF8u; // 8004FC08
  goto L_8004FC14; // 8004FC0C
L_8004FC10:;
  c->r[31]=0u+0x00000000u; // 8004FC10
L_8004FC14:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004FC14
  if (crb(c,2)) { goto L_8004FC24; } // 8004FC18
  c->r[3]=c->r[1]+0x00000040u; // 8004FC1C
  c->lr=0x8004FC24u; f_80088440(c); // 8004FC20
L_8004FC24:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004FC24
  if (!crb(c,2)) { goto L_8004FC34; } // 8004FC28
  c->r[3]=0u+0x00000001u; // 8004FC2C
  goto L_8004FC38; // 8004FC30
L_8004FC34:;
  c->r[3]=0u+0x00000000u; // 8004FC34
L_8004FC38:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004FC38
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004FC3C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8004FC40
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8004FC44
  c->lr=c->r[0]; // 8004FC48
  c->r[1]=c->r[10]|c->r[10]; // 8004FC4C
  return; // 8004FC50
}

// __OSWriteExpiredFlagIfSet
void f_8004FC60(Ctx* __restrict c) {
  trace_call(0x8004FC60u);
  c->r[0]=R32(c->r[13]+0xFFFF8BD4u); // 8004FC60
  cmps(c,0,(int32_t)c->r[0],0); // 8004FC64
  if (crb(c,2)) { goto L_8004FC70; } // 8004FC68
  f_8004FB40(c); return; // 8004FC6C
L_8004FC70:;
  c->r[3]=0u+0x00000000u; // 8004FC70
  return; // 8004FC74
}

// __OSPlayTimeRebootThread
void f_8004FC80(Ctx* __restrict c) {
  trace_call(0x8004FC80u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8004FC80
  c->r[12]=c->r[1]|c->r[1]; // 8004FC84
  c->r[11]=addc(c,~c->r[11],0xFFFFFB20u,1); // 8004FC88
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FC8C
  c->r[0]=c->lr; // 8004FC90
  c->r[4]=0u+0x00000000u; // 8004FC94
  c->r[5]=0u+0x00000494u; // 8004FC98
  W32(c->r[12]+0x00000004u,c->r[0]); // 8004FC9C
  c->r[3]=c->r[1]+0x00000020u; // 8004FCA0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8004FCA4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8004FCA8
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8004FCAC
  W32(c->r[13]+0xFFFF8BD0u,c->r[3]); // 8004FCB0
  c->lr=0x8004FCB8u; f_80004714(c); // 8004FCB4
  c->r[3]=0u+0x80050000u; // 8004FCB8
  c->r[3]=c->r[3]+0xFFFFF980u; // 8004FCBC
  c->lr=0x8004FCC4u; f_80061070(c); // 8004FCC0
  c->r[5]=R32(c->r[13]+0xFFFF8BD0u); // 8004FCC4
  c->r[4]=0u+0xCCCD0000u; // 8004FCC8
  c->r[31]=c->r[4]+0xFFFFCCCDu; // 8004FCCC
  c->r[30]=0u+0x00000000u; // 8004FCD0
  W32(c->r[5]+0x00000490u,c->r[3]); // 8004FCD4
L_8004FCD8:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[30])>>32); // 8004FCD8
  c->r[3]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004FCDC
  c->r[29]=c->r[3]+0x00000001u; // 8004FCE0
  cmpu(c,0,c->r[29],0x00000007u); // 8004FCE4
  if (!crb(c,1)) { goto L_8004FCF0; } // 8004FCE8
  c->r[29]=0u+0x00000007u; // 8004FCEC
L_8004FCF0:;
  c->lr=0x8004FCF4u; f_8005B5F0(c); // 8004FCF0
  c->r[4]=c->r[29]|c->r[29]; // 8004FCF4
  c->r[5]=c->r[29]|c->r[29]; // 8004FCF8
  c->r[3]=0u+0x00000001u; // 8004FCFC
  c->lr=0x8004FD04u; f_8004E560(c); // 8004FD00
  c->r[30]=c->r[30]+0x00000001u; // 8004FD04
  cmpu(c,0,c->r[30],0x00000014u); // 8004FD08
  if (crb(c,0)) { IRQCHK(c); goto L_8004FCD8; } // 8004FD0C
  c->r[3]=0u+0x00000000u; // 8004FD10
  c->lr=0x8004FD18u; f_80061070(c); // 8004FD14
  c->r[3]=0u+0x00000001u; // 8004FD18
  c->lr=0x8004FD20u; f_8005C740(c); // 8004FD1C
  c->lr=0x8004FD24u; f_8005C5B0(c); // 8004FD20
  c->lr=0x8004FD28u; f_80049A20(c); // 8004FD24
  c->r[0]=R32(c->r[13]+0xFFFF8BD4u); // 8004FD28
  c->r[31]=c->r[3]|c->r[3]; // 8004FD2C
  cmps(c,0,(int32_t)c->r[0],0); // 8004FD30
  if (crb(c,2)) { goto L_8004FD3C; } // 8004FD34
  c->lr=0x8004FD3Cu; f_8004FB40(c); // 8004FD38
L_8004FD3C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004FD3C
  c->lr=0x8004FD44u; f_80049A60(c); // 8004FD40
  c->lr=0x8004FD48u; f_8004B740(c); // 8004FD44
  c->r[3]=0u+0x00000000u; // 8004FD48
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004FD4C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8004FD50
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8004FD54
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8004FD58
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004FD5C
  c->lr=c->r[0]; // 8004FD60
  c->r[1]=c->r[10]|c->r[10]; // 8004FD64
  return; // 8004FD68
}

// __OSPlayTimeAlarmExpired
void f_8004FD70(Ctx* __restrict c) {
  trace_call(0x8004FD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FD70
  c->r[0]=c->lr; // 8004FD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FD78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FD7C
  c->r[12]=R32(c->r[13]+0xFFFF8BD8u); // 8004FD80
  cmps(c,0,(int32_t)c->r[12],0); // 8004FD84
  if (crb(c,2)) { goto L_8004FD98; } // 8004FD88
  c->ctr=c->r[12]; // 8004FD8C
  if (true) { c->lr=0x8004FD94u; dispatch(c,c->ctr); } // 8004FD90
  goto L_8004FDFC; // 8004FD94
L_8004FD98:;
  c->r[3]=0u+0x80000000u; // 8004FD98
  c->r[31]=R32(c->r[3]+0x000000DCu); // 8004FD9C
  goto L_8004FDB0; // 8004FDA0
L_8004FDA4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004FDA4
  c->lr=0x8004FDACu; f_8004D5F0(c); // 8004FDA8
  c->r[31]=R32(c->r[31]+0x000002FCu); // 8004FDAC
L_8004FDB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004FDB0
  if (!crb(c,2)) { IRQCHK(c); goto L_8004FDA4; } // 8004FDB4
  c->r[3]=0u+0x80000000u; // 8004FDB8
  c->r[4]=0u+0x80050000u; // 8004FDBC
  c->r[3]=R32(c->r[3]+0x00003128u); // 8004FDC0
  c->r[4]=c->r[4]+0xFFFFFC80u; // 8004FDC4
  c->r[5]=0u+0x00000000u; // 8004FDC8
  c->r[7]=0u+0x00001000u; // 8004FDCC
  c->r[31]=c->r[3]+0xFFFFECE0u; // 8004FDD0
  c->r[8]=0u+0x00000000u; // 8004FDD4
  c->r[9]=0u+0x00000000u; // 8004FDD8
  c->r[3]=c->r[31]|c->r[31]; // 8004FDDC
  c->r[6]=c->r[31]+0x00001320u; // 8004FDE0
  c->lr=0x8004FDE8u; f_8004CCC0(c); // 8004FDE4
  cmps(c,0,(int32_t)c->r[3],0); // 8004FDE8
  if (!crb(c,2)) { goto L_8004FDF4; } // 8004FDEC
  c->lr=0x8004FDF4u; f_8004B870(c); // 8004FDF0
L_8004FDF4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004FDF4
  c->lr=0x8004FDFCu; f_8004D350(c); // 8004FDF8
L_8004FDFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FDFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FE00
  c->lr=c->r[0]; // 8004FE04
  c->r[1]=c->r[1]+0x00000010u; // 8004FE08
  return; // 8004FE0C
}

// __OSGetPlayTime
void f_8004FE10(Ctx* __restrict c) {
  trace_call(0x8004FE10u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8004FE10
  c->r[12]=c->r[1]|c->r[1]; // 8004FE14
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 8004FE18
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FE1C
  c->r[0]=c->lr; // 8004FE20
  W32(c->r[12]+0x00000004u,c->r[0]); // 8004FE24
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 8004FE28
  c->r[0]=0u+0x00000000u; // 8004FE2C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8004FE30
  c->r[31]=c->r[5]|c->r[5]; // 8004FE34
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8004FE38
  c->r[30]=0u+0x00000000u; // 8004FE3C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8004FE40
  c->r[29]=c->r[4]|c->r[4]; // 8004FE44
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8004FE48
  c->r[28]=c->r[3]|c->r[3]; // 8004FE4C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8004FE50
  if (crb(c,2)) { goto L_8004FE6C; } // 8004FE54
  c->r[4]=c->r[28]|c->r[28]; // 8004FE58
  c->r[3]=c->r[1]+0x00000080u; // 8004FE5C
  c->r[5]=0u+0x000000D8u; // 8004FE60
  c->lr=0x8004FE68u; f_800043C4(c); // 8004FE64
  c->r[28]=c->r[1]+0x00000080u; // 8004FE68
L_8004FE6C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8004FE6C
  c->r[6]=c->r[1]+0x00000020u; // 8004FE70
  c->r[4]=R32(c->r[28]+0x00000008u); // 8004FE74
  c->r[5]=0u+0x00000000u; // 8004FE78
  c->lr=0x8004FE80u; f_800DBA40(c); // 8004FE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FE80
  if (crb(c,1)) { goto L_8004FEB4; } // 8004FE84
  if (crb(c,2)) { goto L_8004FE90; } // 8004FE88
  goto L_8004FEB4; // 8004FE8C
L_8004FE90:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 8004FE90
  cmps(c,0,(int32_t)c->r[0],0); // 8004FE94
  if (crb(c,2)) { goto L_8004FEB4; } // 8004FE98
  c->r[3]=R32(c->r[28]+0x00000004u); // 8004FE9C
  c->r[5]=c->r[1]+0x00000040u; // 8004FEA0
  c->r[4]=R32(c->r[28]+0x00000008u); // 8004FEA4
  c->r[6]=c->r[1]+0x00000020u; // 8004FEA8
  c->lr=0x8004FEB0u; f_800DBA40(c); // 8004FEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8004FEB0
L_8004FEB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8004FEB4
  if (!crb(c,2)) { goto L_8004FFB8; } // 8004FEB8
  c->r[0]=0u+0x00000008u; // 8004FEBC
  c->r[5]=0u+0x00000000u; // 8004FEC0
  c->r[4]=0u+0x00000000u; // 8004FEC4
  c->ctr=c->r[0]; // 8004FEC8
  c->r[0]=c->r[0]|0x00000000u; // 8004FECC
L_8004FED0:;
  c->r[6]=c->r[28]+c->r[4]; // 8004FED0
  c->r[0]=R32(c->r[6]+0x00000098u); // 8004FED4
  cmpu(c,0,c->r[0],0x00000001u); // 8004FED8
  if (!crb(c,2)) { goto L_8004FF30; } // 8004FEDC
  c->r[0]=0u+0x00000001u; // 8004FEE0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004FEE4
  c->r[0]=R32(c->r[1]+0x00000020u); // 8004FEE8
  cmps(c,0,(int32_t)c->r[0],0); // 8004FEEC
  if (!crb(c,2)) { goto L_8004FF00; } // 8004FEF0
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 8004FEF4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004FEF8
  goto L_8004FFB8; // 8004FEFC
L_8004FF00:;
  c->r[5]=c->r[1]+0x00000040u; // 8004FF00
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 8004FF04
  c->r[4]=c->r[5]+c->r[4]; // 8004FF08
  c->r[4]=R32(c->r[4]+0x00000004u); // 8004FF0C
  cmpu(c,0,c->r[4],c->r[0]); // 8004FF10
  if (crb(c,0)) { goto L_8004FF24; } // 8004FF14
  c->r[0]=0u+0x00000000u; // 8004FF18
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004FF1C
  goto L_8004FFB8; // 8004FF20
L_8004FF24:;
  c->r[0]=c->r[0]-c->r[4]; // 8004FF24
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004FF28
  goto L_8004FFB8; // 8004FF2C
L_8004FF30:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004FF30
  if (crb(c,2)) { goto L_8004FF3C; } // 8004FF34
  c->r[30]=c->r[5]+0x00000001u; // 8004FF38
L_8004FF3C:;
  c->r[5]=c->r[5]+0x00000001u; // 8004FF3C
  c->r[4]=c->r[4]+0x00000008u; // 8004FF40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004FED0; } // 8004FF44
  cmps(c,0,(int32_t)c->r[30],0); // 8004FF48
  if (!crb(c,2)) { goto L_8004FF64; } // 8004FF4C
  c->r[0]=0u+0x00000000u; // 8004FF50
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004FF54
  c->r[0]=0u+0xFFFFFFFFu; // 8004FF58
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004FF5C
  goto L_8004FFB8; // 8004FF60
L_8004FF64:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8004FF64
  c->r[6]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8004FF68
  c->r[4]=c->r[28]+c->r[6]; // 8004FF6C
  c->r[0]=R32(c->r[4]+0x00000098u); // 8004FF70
  cmpu(c,0,c->r[0],0x00000004u); // 8004FF74
  if (!crb(c,2)) { goto L_8004FFB0; } // 8004FF78
  c->r[0]=0u+0x00000004u; // 8004FF7C
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004FF80
  c->r[5]=R32(c->r[4]+0x0000009Cu); // 8004FF84
  W32(c->r[31]+0x00000000u,c->r[5]); // 8004FF88
  c->r[0]=R32(c->r[1]+0x00000020u); // 8004FF8C
  cmps(c,0,(int32_t)c->r[0],0); // 8004FF90
  if (crb(c,2)) { goto L_8004FFB8; } // 8004FF94
  c->r[0]=c->r[1]+0x00000040u; // 8004FF98
  c->r[4]=c->r[0]+c->r[6]; // 8004FF9C
  c->r[0]=R32(c->r[4]+0x00000004u); // 8004FFA0
  c->r[0]=c->r[5]-c->r[0]; // 8004FFA4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004FFA8
  goto L_8004FFB8; // 8004FFAC
L_8004FFB0:;
  c->r[0]=0u+0x00000009u; // 8004FFB0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8004FFB4
L_8004FFB8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004FFB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004FFBC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8004FFC0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8004FFC4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8004FFC8
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8004FFCC
  c->lr=c->r[0]; // 8004FFD0
  c->r[1]=c->r[10]|c->r[10]; // 8004FFD4
  return; // 8004FFD8
}

// __OSInitPlayTime
void f_8004FFE0(Ctx* __restrict c) {
  trace_call(0x8004FFE0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8004FFE0
  c->r[12]=c->r[1]|c->r[1]; // 8004FFE4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8004FFE8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FFEC
  c->r[0]=c->lr; // 8004FFF0
  c->r[3]=0u+0x00000000u; // 8004FFF4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8004FFF8
  c->r[0]=0u+0x00000001u; // 8004FFFC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80050000
  W32(c->r[13]+0xFFFF8BE4u,c->r[3]); // 80050004
  W32(c->r[13]+0xFFFF8BE0u,c->r[3]); // 80050008
  W32(c->r[13]+0xFFFF8BD8u,c->r[3]); // 8005000C
  W32(c->r[13]+0xFFFF8BD4u,c->r[0]); // 80050010
  c->lr=0x80050018u; f_800DB3E0(c); // 80050014
  cmps(c,0,(int32_t)c->r[3],0); // 80050018
  if (crb(c,2)) { goto L_80050024; } // 8005001C
  goto L_8005011C; // 80050020
L_80050024:;
  c->r[4]=c->r[1]+0x00000040u; // 80050024
  c->r[3]=0u+0x00000000u; // 80050028
  c->lr=0x80050030u; f_800DB650(c); // 8005002C
  cmps(c,0,(int32_t)c->r[3],-1017); // 80050030
  if (crb(c,2)) { goto L_80050054; } // 80050034
  cmps(c,0,(int32_t)c->r[3],0); // 80050038
  if (crb(c,2)) { goto L_80050044; } // 8005003C
  goto L_80050054; // 80050040
L_80050044:;
  c->r[3]=c->r[1]+0x00000040u; // 80050044
  c->r[4]=c->r[1]+0x00000020u; // 80050048
  c->r[5]=c->r[1]+0x00000024u; // 8005004C
  c->lr=0x80050054u; f_8004FE10(c); // 80050050
L_80050054:;
  cmps(c,0,(int32_t)c->r[3],0); // 80050054
  if (crb(c,2)) { goto L_80050068; } // 80050058
  cmps(c,0,(int32_t)c->r[3],-1017); // 8005005C
  if (crb(c,2)) { goto L_8005011C; } // 80050060
  goto L_8005011C; // 80050064
L_80050068:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 80050068
  cmps(c,0,(int32_t)c->r[0],0); // 8005006C
  if (crb(c,2)) { goto L_8005011C; } // 80050070
  cmps(c,0,(int32_t)c->r[0],1); // 80050074
  if (!crb(c,2)) { goto L_8005011C; } // 80050078
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005007C
  cmps(c,0,(int32_t)c->r[0],0); // 80050080
  if (!crb(c,2)) { goto L_800500A0; } // 80050084
  c->r[3]=0u+0x80140000u; // 80050088
  c->r[4]=0u+0x000002E1u; // 8005008C
  c->r[3]=c->r[3]+0x0000562Cu; // 80050090
  c->r[5]=c->r[13]+0xFFFF8138u; // 80050094
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050098
  c->lr=0x800500A0u; f_80045D00(c); // 8005009C
L_800500A0:;
  c->r[31]=0u+0x801A0000u; // 800500A0
  c->r[3]=c->r[31]+0xFFFFB820u; // 800500A4
  c->lr=0x800500ACu; f_80043E70(c); // 800500A8
  c->r[3]=0u+0x80000000u; // 800500AC
  c->r[7]=0u+0x80050000u; // 800500B0
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800500B4
  c->r[4]=0u+0x00000014u; // 800500B8
  c->r[5]=R32(c->r[1]+0x00000024u); // 800500BC
  c->r[9]=0u+0x00000000u; // 800500C0
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800500C4
  c->r[3]=c->r[31]+0xFFFFB820u; // 800500C8
  c->r[8]=addc(c,c->r[5],c->r[4],0); // 800500CC
  c->r[7]=c->r[7]+0xFFFFFD70u; // 800500D0
  c->r[0]=addc(c,c->r[9],c->r[9],c->xer_ca); // 800500D4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800500D8
  c->r[4]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[6])>>32); // 800500DC
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 800500E0
  c->r[4]=c->r[4]+c->r[5]; // 800500E4
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 800500E8
  c->r[5]=c->r[4]+c->r[0]; // 800500EC
  c->lr=0x800500F4u; f_800440D0(c); // 800500F0
  c->r[4]=c->r[31]+0xFFFFB820u; // 800500F4
  c->r[3]=0u+0x80140000u; // 800500F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800500FC
  c->r[3]=c->r[3]+0x0000563Cu; // 80050100
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80050104
  W32(c->r[13]+0xFFFF8BE4u,c->r[4]); // 80050108
  c->r[4]=R32(c->r[1]+0x00000024u); // 8005010C
  W32(c->r[13]+0xFFFF8BE0u,c->r[0]); // 80050110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050114
  c->lr=0x8005011Cu; f_80045C80(c); // 80050118
L_8005011C:;
  c->lr=0x80050120u; f_800DB440(c); // 8005011C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80050120
  c->r[0]=R32(c->r[10]+0x00000004u); // 80050124
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80050128
  c->lr=c->r[0]; // 8005012C
  c->r[1]=c->r[10]|c->r[10]; // 80050130
  return; // 80050134
}

// fn_80050140
void f_80050140(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80050140
  c->r[7]=0u+0x80130000u; // 80050144
  c->r[8]=0u+0xFFFFFFFFu; // 80050148
  c->r[7]=c->r[7]+0xFFFF8AA0u; // 8005014C
  if (crb(c,2)) { goto L_8005026C; } // 80050150
  c->r[0]=rotl(c->r[4],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80050154
  c->ctr=c->r[0]; // 80050158
  if (crb(c,2)) { goto L_80050230; } // 8005015C
L_80050160:;
  c->r[9]=R8(c->r[3]+0x00000000u); // 80050160
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80050164
  c->r[0]=c->r[8]^c->r[9]; // 80050168
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 8005016C
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050170
  c->r[9]=R8(c->r[3]+0x00000001u); // 80050174
  c->r[0]=R32(c->r[7]+c->r[0]); // 80050178
  c->r[6]=c->r[6]^c->r[0]; // 8005017C
  c->r[0]=c->r[6]^c->r[5]; // 80050180
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 80050184
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050188
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 8005018C
  c->r[0]=R32(c->r[7]+c->r[0]); // 80050190
  c->r[8]=c->r[6]^c->r[0]; // 80050194
  c->r[0]=c->r[8]^c->r[9]; // 80050198
  c->r[9]=R8(c->r[3]+0x00000002u); // 8005019C
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 800501A0
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 800501A4
  c->r[0]=R32(c->r[7]+c->r[0]); // 800501A8
  c->r[6]=c->r[6]^c->r[0]; // 800501AC
  c->r[0]=c->r[6]^c->r[5]; // 800501B0
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 800501B4
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 800501B8
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 800501BC
  c->r[0]=R32(c->r[7]+c->r[0]); // 800501C0
  c->r[8]=c->r[6]^c->r[0]; // 800501C4
  c->r[0]=c->r[8]^c->r[9]; // 800501C8
  c->r[9]=R8(c->r[3]+0x00000003u); // 800501CC
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 800501D0
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 800501D4
  c->r[0]=R32(c->r[7]+c->r[0]); // 800501D8
  c->r[3]=c->r[3]+0x00000004u; // 800501DC
  c->r[6]=c->r[6]^c->r[0]; // 800501E0
  c->r[0]=c->r[6]^c->r[5]; // 800501E4
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 800501E8
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 800501EC
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 800501F0
  c->r[0]=R32(c->r[7]+c->r[0]); // 800501F4
  c->r[8]=c->r[6]^c->r[0]; // 800501F8
  c->r[0]=c->r[8]^c->r[9]; // 800501FC
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050200
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80050204
  c->r[0]=R32(c->r[7]+c->r[0]); // 80050208
  c->r[6]=c->r[6]^c->r[0]; // 8005020C
  c->r[0]=c->r[6]^c->r[5]; // 80050210
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050214
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 80050218
  c->r[0]=R32(c->r[7]+c->r[0]); // 8005021C
  c->r[8]=c->r[6]^c->r[0]; // 80050220
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80050160; } // 80050224
  c->r[4]=c->r[4]&0x00000003u; cr0(c,c->r[4]); // 80050228
  if (crb(c,2)) { goto L_8005026C; } // 8005022C
L_80050230:;
  c->ctr=c->r[4]; // 80050230
L_80050234:;
  c->r[9]=R8(c->r[3]+0x00000000u); // 80050234
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80050238
  c->r[3]=c->r[3]+0x00000001u; // 8005023C
  c->r[0]=c->r[8]^c->r[9]; // 80050240
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 80050244
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050248
  c->r[0]=R32(c->r[7]+c->r[0]); // 8005024C
  c->r[6]=c->r[6]^c->r[0]; // 80050250
  c->r[0]=c->r[6]^c->r[5]; // 80050254
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80050258
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 8005025C
  c->r[0]=R32(c->r[7]+c->r[0]); // 80050260
  c->r[8]=c->r[6]^c->r[0]; // 80050264
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80050234; } // 80050268
L_8005026C:;
  c->r[3]=~(c->r[8]|c->r[8]); // 8005026C
  return; // 80050270
}

// fn_80050280
void f_80050280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050280
  c->r[0]=c->lr; // 80050284
  W32(c->r[1]+0x00000034u,c->r[0]); // 80050288
  c->r[11]=c->r[1]+0x00000030u; // 8005028C
  c->lr=0x80050294u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80050290
  c->r[25]=c->r[4]|c->r[4]; // 80050294
  c->r[29]=c->r[5]|c->r[5]; // 80050298
  c->r[30]=c->r[3]|c->r[3]; // 8005029C
  c->r[4]=0u+0x00000000u; // 800502A0
  c->r[5]=0u+0x00002000u; // 800502A4
  c->lr=0x800502ACu; f_80004714(c); // 800502A8
  cmps(c,0,(int32_t)c->r[25],0); // 800502AC
  if (!crb(c,2)) { goto L_800502C0; } // 800502B0
  c->r[0]=0u+0x00000000u; // 800502B4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800502B8
  goto L_800503E4; // 800502BC
L_800502C0:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800502C0
  c->r[31]=c->r[25]|c->r[25]; // 800502C4
  c->r[26]=c->r[30]+0x00002000u; // 800502C8
  c->r[28]=c->r[29]+c->r[0]; // 800502CC
  goto L_800502FC; // 800502D0
L_800502D4:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 800502D4
  c->r[3]=c->r[27]|c->r[27]; // 800502D8
  c->lr=0x800502E0u; f_8006DD10(c); // 800502DC
  c->r[0]=c->r[3]+0x00000001u; // 800502E0
  c->r[4]=c->r[27]|c->r[27]; // 800502E4
  c->r[26]=c->r[26]-c->r[0]; // 800502E8
  c->r[3]=c->r[26]|c->r[26]; // 800502EC
  c->lr=0x800502F4u; f_80075140(c); // 800502F0
  c->r[0]=c->r[26]-c->r[30]; // 800502F4
  W32(c->r[28]+0x00000000u,c->r[0]); // 800502F8
L_800502FC:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 800502FC
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80050300
  if (!crb(c,0)) { IRQCHK(c); goto L_800502D4; } // 80050304
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80050308
  c->r[0]=c->r[26]-c->r[30]; // 8005030C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80050310
  c->r[7]=0u+0x00000000u; // 80050314
  c->r[6]=c->r[30]+c->r[4]; // 80050318
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8005031C
  c->r[6]=c->r[6]-c->r[0]; // 80050320
  if (crb(c,2)) { goto L_800503D4; } // 80050324
  cmpu(c,0,c->r[3],0x00000008u); // 80050328
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 8005032C
  if (!crb(c,1)) { goto L_800503A0; } // 80050330
  c->r[0]=c->r[3]+0x00000007u; // 80050334
  c->r[4]=c->r[29]|c->r[29]; // 80050338
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8005033C
  c->r[5]=c->r[6]|c->r[6]; // 80050340
  c->ctr=c->r[0]; // 80050344
  cmpu(c,0,c->r[3],0x00000000u); // 80050348
  if (!crb(c,1)) { goto L_800503A0; } // 8005034C
L_80050350:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80050350
  c->r[7]=c->r[7]+0x00000008u; // 80050354
  W32(c->r[5]+0x00000000u,c->r[0]); // 80050358
  c->r[0]=R32(c->r[4]+0x00000004u); // 8005035C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80050360
  c->r[0]=R32(c->r[4]+0x00000008u); // 80050364
  W32(c->r[5]+0x00000008u,c->r[0]); // 80050368
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8005036C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80050370
  c->r[0]=R32(c->r[4]+0x00000010u); // 80050374
  W32(c->r[5]+0x00000010u,c->r[0]); // 80050378
  c->r[0]=R32(c->r[4]+0x00000014u); // 8005037C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80050380
  c->r[0]=R32(c->r[4]+0x00000018u); // 80050384
  W32(c->r[5]+0x00000018u,c->r[0]); // 80050388
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8005038C
  c->r[4]=c->r[4]+0x00000020u; // 80050390
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80050394
  c->r[5]=c->r[5]+0x00000020u; // 80050398
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80050350; } // 8005039C
L_800503A0:;
  c->r[3]=c->r[31]+0x00000001u; // 800503A0
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800503A4
  c->r[0]=c->r[3]-c->r[7]; // 800503A8
  c->r[4]=c->r[29]+c->r[5]; // 800503AC
  c->r[5]=c->r[6]+c->r[5]; // 800503B0
  c->ctr=c->r[0]; // 800503B4
  cmpu(c,0,c->r[7],c->r[3]); // 800503B8
  if (!crb(c,0)) { goto L_800503D4; } // 800503BC
L_800503C0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800503C0
  c->r[4]=c->r[4]+0x00000004u; // 800503C4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800503C8
  c->r[5]=c->r[5]+0x00000004u; // 800503CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800503C0; } // 800503D0
L_800503D4:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 800503D4
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 800503D8
  c->r[0]=c->r[0]-c->r[30]; // 800503DC
  W32(c->r[30]+0x00000008u,c->r[0]); // 800503E0
L_800503E4:;
  c->r[11]=c->r[1]+0x00000030u; // 800503E4
  c->r[3]=0u+0x00000001u; // 800503E8
  c->lr=0x800503F0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800503EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800503F0
  c->lr=c->r[0]; // 800503F4
  c->r[1]=c->r[1]+0x00000030u; // 800503F8
  return; // 800503FC
}

// __OSCheckCompanyCode
void f_80050400(Ctx* __restrict c) {
  trace_call(0x80050400u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050400
  c->r[0]=c->lr; // 80050404
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80050408
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8005040C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80050410
  c->r[30]=c->r[5]|c->r[5]; // 80050414
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80050418
  c->r[29]=c->r[3]|c->r[3]; // 8005041C
  c->r[3]=c->r[1]+0x00000054u; // 80050420
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80050424
  c->r[28]=c->r[4]|c->r[4]; // 80050428
  c->lr=0x80050430u; f_80088EE0(c); // 8005042C
  cmps(c,0,(int32_t)c->r[3],0); // 80050430
  if (crb(c,2)) { goto L_80050440; } // 80050434
  c->r[3]=0u+0x00000000u; // 80050438
  goto L_800504F4; // 8005043C
L_80050440:;
  c->r[3]=c->r[1]+0x00000054u; // 80050440
  c->r[4]=c->r[1]+0x00000008u; // 80050444
  c->lr=0x8005044Cu; f_80087BE0(c); // 80050448
  cmps(c,0,(int32_t)c->r[3],0); // 8005044C
  if (crb(c,2)) { goto L_8005045C; } // 80050450
  c->r[3]=0u+0x00000000u; // 80050454
  goto L_800504F4; // 80050458
L_8005045C:;
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 8005045C
  cmpu(c,0,c->r[31],0x00000002u); // 80050460
  if (!crb(c,2)) { goto L_80050494; } // 80050464
  c->lr=0x8005046Cu; f_80043DF0(c); // 80050468
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8005046C
  cmpu(c,0,c->r[0],0x00000080u); // 80050470
  if (!crb(c,2)) { goto L_80050494; } // 80050474
  c->lr=0x8005047Cu; f_80042AD0(c); // 80050478
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 8005047C
  c->r[0]=c->r[3]+0xF0000000u; // 80050480
  cmpu(c,0,c->r[0],0x00000000u); // 80050484
  if (!crb(c,2)) { goto L_80050494; } // 80050488
  c->lr=0x80050490u; f_80056700(c); // 8005048C
  c->r[31]=R16(c->r[3]+0x00000004u); // 80050490
L_80050494:;
  cmps(c,0,(int32_t)c->r[30],0); // 80050494
  if (crb(c,2)) { goto L_800504A8; } // 80050498
  c->lr=0x800504A0u; f_80056700(c); // 8005049C
  c->r[0]=R16(c->r[3]+0x00000004u); // 800504A0
  goto L_800504E8; // 800504A4
L_800504A8:;
  c->r[0]=0u+0xFFFFFFFFu; // 800504A8
  c->r[4]=0u+0x80140000u; // 800504AC
  c->r[3]=c->r[1]+0x00000010u; // 800504B0
  c->r[4]=c->r[4]+0x00005658u; // 800504B4
  c->r[5]=c->r[29]&c->r[0]; // 800504B8
  c->r[6]=c->r[28]&c->r[0]; // 800504BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800504C0
  c->lr=0x800504C8u; f_80074F3C(c); // 800504C4
  c->r[3]=c->r[1]+0x00000010u; // 800504C8
  c->r[4]=c->r[1]+0x00000008u; // 800504CC
  c->lr=0x800504D4u; f_80087BE0(c); // 800504D0
  cmps(c,0,(int32_t)c->r[3],0); // 800504D4
  if (crb(c,2)) { goto L_800504E4; } // 800504D8
  c->r[3]=0u+0x00000000u; // 800504DC
  goto L_800504F4; // 800504E0
L_800504E4:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 800504E4
L_800504E8:;
  c->r[0]=c->r[0]-c->r[31]; // 800504E8
  c->r[0]=cntlz(c->r[0]); // 800504EC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800504F0
L_800504F4:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800504F4
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800504F8
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800504FC
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80050500
  c->r[28]=R32(c->r[1]+0x000000A0u); // 80050504
  c->lr=c->r[0]; // 80050508
  c->r[1]=c->r[1]+0x000000B0u; // 8005050C
  return; // 80050510
}

// __OSCheckTmdSysVersion
void f_80050520(Ctx* __restrict c) {
  trace_call(0x80050520u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80050520
  c->r[12]=c->r[1]|c->r[1]; // 80050524
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80050528
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8005052C
  c->r[0]=c->lr; // 80050530
  c->r[5]=0u+0x00000000u; // 80050534
  W32(c->r[12]+0x00000004u,c->r[0]); // 80050538
  c->r[0]=0u+0x00000000u; // 8005053C
  c->r[6]=c->r[1]+0x00000028u; // 80050540
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80050544
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80050548
  W32(c->r[1]+0x00000028u,c->r[0]); // 8005054C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80050550
  W32(c->r[1]+0x00000020u,c->r[0]); // 80050554
  c->r[30]=R32(c->r[3]+0x00000008u); // 80050558
  c->r[31]=R32(c->r[3]+0x00000004u); // 8005055C
  c->r[4]=c->r[30]|c->r[30]; // 80050560
  c->r[3]=c->r[31]|c->r[31]; // 80050564
  c->lr=0x8005056Cu; f_800DB530(c); // 80050568
  cmps(c,0,(int32_t)c->r[3],0); // 8005056C
  if (!crb(c,2)) { goto L_80050580; } // 80050570
  c->r[0]=R32(c->r[1]+0x00000028u); // 80050574
  cmpu(c,0,c->r[0],0x00000001u); // 80050578
  if (crb(c,2)) { goto L_80050588; } // 8005057C
L_80050580:;
  c->r[3]=0u+0x00000000u; // 80050580
  goto L_800505D8; // 80050584
L_80050588:;
  c->r[0]=0u+0xFFFFFFFFu; // 80050588
  c->r[4]=0u+0x80140000u; // 8005058C
  c->r[3]=c->r[1]+0x00000040u; // 80050590
  c->r[4]=c->r[4]+0x00005670u; // 80050594
  c->r[5]=c->r[31]&c->r[0]; // 80050598
  c->r[6]=c->r[30]&c->r[0]; // 8005059C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800505A0
  c->lr=0x800505A8u; f_80074F3C(c); // 800505A4
  c->r[3]=c->r[1]+0x00000040u; // 800505A8
  c->r[4]=c->r[1]+0x00000024u; // 800505AC
  c->r[5]=c->r[1]+0x00000020u; // 800505B0
  c->lr=0x800505B8u; f_80089420(c); // 800505B4
  cmps(c,0,(int32_t)c->r[3],0); // 800505B8
  if (!crb(c,2)) { goto L_800505CC; } // 800505BC
  c->r[0]=R32(c->r[1]+0x00000020u); // 800505C0
  cmpu(c,0,c->r[0],0x00000002u); // 800505C4
  if (crb(c,1)) { goto L_800505D4; } // 800505C8
L_800505CC:;
  c->r[3]=0u+0x00000000u; // 800505CC
  goto L_800505D8; // 800505D0
L_800505D4:;
  c->r[3]=0u+0x00000001u; // 800505D4
L_800505D8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800505D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800505DC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800505E0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800505E4
  c->lr=c->r[0]; // 800505E8
  c->r[1]=c->r[10]|c->r[10]; // 800505EC
  return; // 800505F0
}

// fn_80050600
void f_80050600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050600
  c->r[0]=c->lr; // 80050604
  W32(c->r[1]+0x00000044u,c->r[0]); // 80050608
  c->r[11]=c->r[1]+0x00000040u; // 8005060C
  c->lr=0x80050614u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80050610
  cmps(c,0,(int32_t)c->r[3],0); // 80050614
  c->r[23]=c->r[4]|c->r[4]; // 80050618
  c->r[27]=0u+0x00000000u; // 8005061C
  c->r[26]=0u+0x00000000u; // 80050620
  c->r[25]=0u+0x00000000u; // 80050624
  c->r[24]=0u+0x00000000u; // 80050628
  if (!crb(c,2)) { goto L_80050654; } // 8005062C
  c->r[3]=0u+0x80140000u; // 80050630
  c->r[5]=0u+0x80140000u; // 80050634
  c->r[3]=c->r[3]+0x0000568Cu; // 80050638
  c->r[4]=0u+0x0000019Eu; // 8005063C
  c->r[5]=c->r[5]+0x000056B4u; // 80050640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050644
  c->lr=0x8005064Cu; f_80045C80(c); // 80050648
  c->r[3]=0u+0xFFFFFC07u; // 8005064C
  goto L_800507C8; // 80050650
L_80050654:;
  c->r[29]=c->r[3]|c->r[3]; // 80050654
  c->r[28]=0u+0x00000000u; // 80050658
  c->r[30]=0u+0x00000001u; // 8005065C
  c->r[31]=0u+0x00000002u; // 80050660
  goto L_800507A4; // 80050664
L_80050668:;
  c->r[3]=c->r[29]|c->r[29]; // 80050668
  c->r[4]=c->r[1]+0x00000008u; // 8005066C
  c->r[5]=c->r[1]+0x0000000Cu; // 80050670
  c->lr=0x80050678u; f_8004FE10(c); // 80050674
  cmps(c,0,(int32_t)c->r[3],0); // 80050678
  if (crb(c,1)) { goto L_8005079C; } // 8005067C
  if (crb(c,2)) { goto L_80050688; } // 80050680
  goto L_800507C8; // 80050684
L_80050688:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80050688
  cmps(c,0,(int32_t)c->r[0],0); // 8005068C
  if (crb(c,2)) { goto L_800506A0; } // 80050690
  cmps(c,0,(int32_t)c->r[0],1); // 80050694
  if (crb(c,2)) { goto L_80050780; } // 80050698
  goto L_8005079C; // 8005069C
L_800506A0:;
  cmps(c,0,(int32_t)c->r[26],0); // 800506A0
  c->r[5]=0u+0x00000000u; // 800506A4
  if (!crb(c,2)) { goto L_800506B4; } // 800506A8
  c->r[27]=c->r[28]|c->r[28]; // 800506AC
  c->r[26]=0u+0x00000001u; // 800506B0
L_800506B4:;
  c->r[0]=R8(c->r[29]+0x00000019u); // 800506B4
  c->r[4]=0u+0x00000000u; // 800506B8
  c->r[3]=R8(c->r[29]+0x00000018u); // 800506BC
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 800506C0
  c->ctr=c->r[31]; // 800506C4
L_800506C8:;
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800506C8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800506CC
  if (crb(c,2)) { goto L_800506D8; } // 800506D0
  c->r[5]=c->r[5]+0x00000001u; // 800506D4
L_800506D8:;
  c->r[4]=c->r[4]+0x00000001u; // 800506D8
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800506DC
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800506E0
  if (crb(c,2)) { goto L_800506EC; } // 800506E4
  c->r[5]=c->r[5]+0x00000001u; // 800506E8
L_800506EC:;
  c->r[4]=c->r[4]+0x00000001u; // 800506EC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 800506F0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800506F4
  if (crb(c,2)) { goto L_80050700; } // 800506F8
  c->r[5]=c->r[5]+0x00000001u; // 800506FC
L_80050700:;
  c->r[4]=c->r[4]+0x00000001u; // 80050700
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80050704
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80050708
  if (crb(c,2)) { goto L_80050714; } // 8005070C
  c->r[5]=c->r[5]+0x00000001u; // 80050710
L_80050714:;
  c->r[4]=c->r[4]+0x00000001u; // 80050714
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80050718
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8005071C
  if (crb(c,2)) { goto L_80050728; } // 80050720
  c->r[5]=c->r[5]+0x00000001u; // 80050724
L_80050728:;
  c->r[4]=c->r[4]+0x00000001u; // 80050728
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8005072C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80050730
  if (crb(c,2)) { goto L_8005073C; } // 80050734
  c->r[5]=c->r[5]+0x00000001u; // 80050738
L_8005073C:;
  c->r[4]=c->r[4]+0x00000001u; // 8005073C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80050740
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80050744
  if (crb(c,2)) { goto L_80050750; } // 80050748
  c->r[5]=c->r[5]+0x00000001u; // 8005074C
L_80050750:;
  c->r[4]=c->r[4]+0x00000001u; // 80050750
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80050754
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80050758
  if (crb(c,2)) { goto L_80050764; } // 8005075C
  c->r[5]=c->r[5]+0x00000001u; // 80050760
L_80050764:;
  c->r[4]=c->r[4]+0x00000001u; // 80050764
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800506C8; } // 80050768
  cmpu(c,0,c->r[5],c->r[25]); // 8005076C
  if (!crb(c,1)) { goto L_8005079C; } // 80050770
  c->r[27]=c->r[28]|c->r[28]; // 80050774
  c->r[25]=c->r[5]|c->r[5]; // 80050778
  goto L_8005079C; // 8005077C
L_80050780:;
  cmps(c,0,(int32_t)c->r[26],0); // 80050780
  if (!crb(c,2)) { goto L_8005079C; } // 80050784
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80050788
  cmpu(c,0,c->r[0],c->r[24]); // 8005078C
  if (!crb(c,1)) { goto L_8005079C; } // 80050790
  c->r[27]=c->r[28]|c->r[28]; // 80050794
  c->r[24]=c->r[0]|c->r[0]; // 80050798
L_8005079C:;
  c->r[29]=c->r[29]+0x000000D8u; // 8005079C
  c->r[28]=c->r[28]+0x00000001u; // 800507A0
L_800507A4:;
  cmpu(c,0,c->r[28],c->r[23]); // 800507A4
  if (crb(c,0)) { IRQCHK(c); goto L_80050668; } // 800507A8
  cmps(c,0,(int32_t)c->r[26],0); // 800507AC
  if (!crb(c,2)) { goto L_800507C4; } // 800507B0
  cmps(c,0,(int32_t)c->r[24],0); // 800507B4
  if (!crb(c,2)) { goto L_800507C4; } // 800507B8
  c->r[3]=0u+0xFFFFFFFFu; // 800507BC
  goto L_800507C8; // 800507C0
L_800507C4:;
  c->r[3]=c->r[27]|c->r[27]; // 800507C4
L_800507C8:;
  c->r[11]=c->r[1]+0x00000040u; // 800507C8
  c->lr=0x800507D0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800507CC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800507D0
  c->lr=c->r[0]; // 800507D4
  c->r[1]=c->r[1]+0x00000040u; // 800507D8
  return; // 800507DC
}

// fn_800507E0
void f_800507E0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800507E0
  c->r[12]=c->r[1]|c->r[1]; // 800507E4
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 800507E8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800507EC
  c->r[0]=c->lr; // 800507F0
  W32(c->r[12]+0x00000004u,c->r[0]); // 800507F4
  c->r[0]=0u+0x00000001u; // 800507F8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800507FC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80050800
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80050804
  c->r[29]=c->r[3]|c->r[3]; // 80050808
  c->r[3]=0u+0x81280000u; // 8005080C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80050810
  c->lr=0x80050818u; f_80044AB0(c); // 80050814
  c->r[3]=0u+0x812F0000u; // 80050818
  c->lr=0x80050820u; f_80044A80(c); // 8005081C
  c->lr=0x80050824u; f_800DB3E0(c); // 80050820
  cmps(c,0,(int32_t)c->r[3],0); // 80050824
  if (crb(c,2)) { goto L_80050830; } // 80050828
  c->lr=0x80050830u; f_8004B7C0(c); // 8005082C
L_80050830:;
  c->r[3]=c->r[1]+0x00000040u; // 80050830
  c->lr=0x80050838u; f_800DB9A0(c); // 80050834
  cmps(c,0,(int32_t)c->r[3],0); // 80050838
  if (crb(c,2)) { goto L_80050844; } // 8005083C
  c->lr=0x80050844u; f_8004B7C0(c); // 80050840
L_80050844:;
  c->r[3]=0u+0x000000E0u; // 80050844
  c->r[4]=0u+0x00000020u; // 80050848
  c->lr=0x80050850u; f_80044AC0(c); // 8005084C
  c->r[0]=0u+0x00000000u; // 80050850
  c->r[31]=c->r[3]|c->r[3]; // 80050854
  cmpu(c,0,c->r[3],c->r[0]); // 80050858
  if (!crb(c,2)) { goto L_80050864; } // 8005085C
  c->lr=0x80050864u; f_8004B7C0(c); // 80050860
L_80050864:;
  c->r[3]=c->r[31]|c->r[31]; // 80050864
  c->r[4]=0u+0x00000000u; // 80050868
  c->r[5]=0u+0x000000E0u; // 8005086C
  c->lr=0x80050874u; f_80004714(c); // 80050870
  c->r[4]=c->r[31]|c->r[31]; // 80050874
  c->r[3]=0u+0x00000000u; // 80050878
  c->lr=0x80050880u; f_800DB650(c); // 8005087C
  cmps(c,0,(int32_t)c->r[3],-1017); // 80050880
  if (!crb(c,2)) { goto L_80050908; } // 80050884
  c->r[3]=R32(c->r[1]+0x00000040u); // 80050888
  c->r[6]=c->r[1]+0x00000028u; // 8005088C
  c->r[4]=R32(c->r[1]+0x00000044u); // 80050890
  c->r[5]=0u+0x00000000u; // 80050894
  c->lr=0x8005089Cu; f_800DB530(c); // 80050898
  cmps(c,0,(int32_t)c->r[3],0); // 8005089C
  if (crb(c,2)) { goto L_800508A8; } // 800508A0
  c->lr=0x800508A8u; f_8004B7C0(c); // 800508A4
L_800508A8:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 800508A8
  c->r[4]=0u+0x00000020u; // 800508AC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 800508B0
  c->r[0]=c->r[3]+0x0000001Fu; // 800508B4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800508B8
  c->lr=0x800508C0u; f_80044AC0(c); // 800508BC
  c->r[0]=0u+0x00000000u; // 800508C0
  c->r[30]=c->r[3]|c->r[3]; // 800508C4
  cmpu(c,0,c->r[3],c->r[0]); // 800508C8
  if (!crb(c,2)) { goto L_800508D4; } // 800508CC
  c->lr=0x800508D4u; f_8004B7C0(c); // 800508D0
L_800508D4:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 800508D4
  c->r[5]=c->r[30]|c->r[30]; // 800508D8
  c->r[4]=R32(c->r[1]+0x00000044u); // 800508DC
  c->r[6]=c->r[1]+0x00000028u; // 800508E0
  c->lr=0x800508E8u; f_800DB530(c); // 800508E4
  cmps(c,0,(int32_t)c->r[3],0); // 800508E8
  if (crb(c,2)) { goto L_800508F4; } // 800508EC
  c->lr=0x800508F4u; f_8004B7C0(c); // 800508F0
L_800508F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800508F4
  c->r[4]=c->r[30]|c->r[30]; // 800508F8
  c->r[5]=0u+0x000000D8u; // 800508FC
  c->lr=0x80050904u; f_800043C4(c); // 80050900
  goto L_80050958; // 80050904
L_80050908:;
  cmps(c,0,(int32_t)c->r[3],0); // 80050908
  if (crb(c,2)) { goto L_80050918; } // 8005090C
  c->lr=0x80050914u; f_8004B7C0(c); // 80050910
  goto L_80050958; // 80050914
L_80050918:;
  c->lr=0x8005091Cu; f_8004F960(c); // 80050918
  cmps(c,0,(int32_t)c->r[3],0); // 8005091C
  if (crb(c,2)) { goto L_80050958; } // 80050920
  c->r[3]=0u+0x00000000u; // 80050924
  c->r[0]=0u+0xFFFFFFFFu; // 80050928
  W32(c->r[1]+0x00000024u,c->r[3]); // 8005092C
  c->r[3]=c->r[31]|c->r[31]; // 80050930
  c->r[4]=c->r[1]+0x00000024u; // 80050934
  c->r[5]=c->r[1]+0x00000020u; // 80050938
  W32(c->r[1]+0x00000020u,c->r[0]); // 8005093C
  c->lr=0x80050944u; f_8004FE10(c); // 80050940
  c->r[0]=R32(c->r[1]+0x00000020u); // 80050944
  cmps(c,0,(int32_t)c->r[0],0); // 80050948
  if (!crb(c,2)) { goto L_80050958; } // 8005094C
  c->lr=0x80050954u; f_8004FB40(c); // 80050950
  c->lr=0x80050958u; f_8004B7C0(c); // 80050954
L_80050958:;
  c->r[3]=0u+0x00002000u; // 80050958
  c->r[4]=0u+0x00000040u; // 8005095C
  c->lr=0x80050964u; f_80044AC0(c); // 80050960
  c->r[30]=c->r[3]+0x00000FE0u; // 80050964
  c->r[4]=0u+0x00000000u; // 80050968
  c->r[5]=0u+0x00002000u; // 8005096C
  c->lr=0x80050974u; f_80004714(c); // 80050970
  c->r[0]=R32(c->r[1]+0x00000040u); // 80050974
  c->r[3]=R32(c->r[1]+0x00000044u); // 80050978
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8005097C
  W32(c->r[30]+0x00000018u,c->r[0]); // 80050980
  c->lr=0x80050988u; f_80043DF0(c); // 80050984
  W8(c->r[30]+0x0000000Au,c->r[3]); // 80050988
  c->r[3]=0u+0x00000001u; // 8005098C
  c->r[0]=c->r[29]|0x80000000u; // 80050990
  W8(c->r[30]+0x0000000Bu,c->r[3]); // 80050994
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80050998
  c->lr=0x800509A0u; f_8004F750(c); // 8005099C
  c->r[3]=c->r[30]|c->r[30]; // 800509A0
  c->lr=0x800509A8u; f_8004F800(c); // 800509A4
  c->r[3]=c->r[1]+0x00000060u; // 800509A8
  c->lr=0x800509B0u; f_8004F080(c); // 800509AC
  c->r[0]=0u+0x00000003u; // 800509B0
  W8(c->r[1]+0x00000065u,c->r[0]); // 800509B4
  c->r[3]=c->r[1]+0x00000060u; // 800509B8
  c->lr=0x800509C0u; f_8004EF90(c); // 800509BC
  c->r[3]=R32(c->r[1]+0x00000040u); // 800509C0
  c->r[5]=c->r[31]|c->r[31]; // 800509C4
  c->r[4]=R32(c->r[1]+0x00000044u); // 800509C8
  c->lr=0x800509D0u; f_800DB490(c); // 800509CC
  cmps(c,0,(int32_t)c->r[3],0); // 800509D0
  if (crb(c,2)) { goto L_800509E0; } // 800509D4
  c->lr=0x800509DCu; f_8004B7C0(c); // 800509D8
  c->r[0]=c->r[0]|0x00000000u; // 800509DC
L_800509E0:;
  IRQCHK(c); goto L_800509E0; // 800509E0
}

// __OSLaunchTitle
void f_800509F0(Ctx* __restrict c) {
  trace_call(0x800509F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800509F0
  c->r[0]=c->lr; // 800509F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800509F8
  c->r[0]=0u+0x00000001u; // 800509FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80050A00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80050A04
  W32(c->r[1]+0x00000014u,c->r[29]); // 80050A08
  c->r[29]=c->r[3]|c->r[3]; // 80050A0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80050A10
  c->r[28]=c->r[4]|c->r[4]; // 80050A14
  W32(c->r[1]+0x00000008u,c->r[0]); // 80050A18
  c->lr=0x80050A20u; f_800DB3E0(c); // 80050A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80050A20
  if (!crb(c,2)) { goto L_80050AEC; } // 80050A24
  c->r[3]=0u+0x000000E0u; // 80050A28
  c->r[4]=0u+0x00000020u; // 80050A2C
  c->lr=0x80050A34u; f_80044AC0(c); // 80050A30
  cmps(c,0,(int32_t)c->r[3],0); // 80050A34
  c->r[31]=c->r[3]|c->r[3]; // 80050A38
  if (crb(c,2)) { goto L_80050AEC; } // 80050A3C
  c->r[4]=0u+0x00000000u; // 80050A40
  c->r[5]=0u+0x000000E0u; // 80050A44
  c->lr=0x80050A4Cu; f_80004714(c); // 80050A48
  c->r[4]=c->r[28]|c->r[28]; // 80050A4C
  c->r[3]=c->r[29]|c->r[29]; // 80050A50
  c->r[6]=c->r[1]+0x00000008u; // 80050A54
  c->r[5]=0u+0x00000000u; // 80050A58
  c->lr=0x80050A60u; f_800DB530(c); // 80050A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80050A60
  if (!crb(c,2)) { goto L_80050AEC; } // 80050A64
  c->r[0]=R32(c->r[1]+0x00000008u); // 80050A68
  c->r[4]=0u+0x00000020u; // 80050A6C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80050A70
  c->r[0]=c->r[3]+0x0000001Fu; // 80050A74
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80050A78
  c->lr=0x80050A80u; f_80044AC0(c); // 80050A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80050A80
  c->r[30]=c->r[3]|c->r[3]; // 80050A84
  if (crb(c,2)) { goto L_80050AEC; } // 80050A88
  c->r[4]=c->r[28]|c->r[28]; // 80050A8C
  c->r[3]=c->r[29]|c->r[29]; // 80050A90
  c->r[5]=c->r[30]|c->r[30]; // 80050A94
  c->r[6]=c->r[1]+0x00000008u; // 80050A98
  c->lr=0x80050AA0u; f_800DB530(c); // 80050A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80050AA0
  if (!crb(c,2)) { goto L_80050AEC; } // 80050AA4
  c->r[4]=R32(c->r[1]+0x00000008u); // 80050AA8
  c->r[3]=c->r[30]|c->r[30]; // 80050AAC
  c->lr=0x80050AB4u; f_80050600(c); // 80050AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80050AB4
  if (crb(c,0)) { goto L_80050AEC; } // 80050AB8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 80050ABC
  c->r[3]=c->r[31]|c->r[31]; // 80050AC0
  c->r[5]=0u+0x000000D8u; // 80050AC4
  c->r[4]=c->r[30]+c->r[0]; // 80050AC8
  c->lr=0x80050AD0u; f_800043C4(c); // 80050ACC
  c->r[4]=c->r[28]|c->r[28]; // 80050AD0
  c->r[3]=c->r[29]|c->r[29]; // 80050AD4
  c->r[5]=c->r[31]|c->r[31]; // 80050AD8
  c->lr=0x80050AE0u; f_800DB490(c); // 80050ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80050AE0
  if (!crb(c,2)) { goto L_80050AEC; } // 80050AE4
L_80050AE8:;
  IRQCHK(c); goto L_80050AE8; // 80050AE8
L_80050AEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050AEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80050AF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80050AF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80050AF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80050AFC
  c->lr=c->r[0]; // 80050B00
  c->r[1]=c->r[1]+0x00000020u; // 80050B04
  return; // 80050B08
}

// fn_80050B10
void f_80050B10(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80050B10
  c->r[12]=c->r[1]|c->r[1]; // 80050B14
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80050B18
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80050B1C
  c->r[0]=c->lr; // 80050B20
  c->r[11]=c->r[12]|c->r[12]; // 80050B24
  W32(c->r[12]+0x00000004u,c->r[0]); // 80050B28
  c->lr=0x80050B30u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80050B2C
  c->r[31]=0u+0x80140000u; // 80050B30
  c->r[29]=0u+0x00000000u; // 80050B34
  W32(c->r[1]+0x00000020u,c->r[29]); // 80050B38
  c->r[25]=c->r[3]|c->r[3]; // 80050B3C
  c->r[24]=c->r[4]|c->r[4]; // 80050B40
  c->r[26]=c->r[5]|c->r[5]; // 80050B44
  c->r[27]=c->r[6]|c->r[6]; // 80050B48
  c->r[28]=c->r[7]|c->r[7]; // 80050B4C
  c->r[31]=c->r[31]+0x00005658u; // 80050B50
  c->lr=0x80050B58u; f_80049A40(c); // 80050B54
  c->lr=0x80050B5Cu; f_800DB3E0(c); // 80050B58
  cmps(c,0,(int32_t)c->r[3],0); // 80050B5C
  if (crb(c,2)) { goto L_80050B68; } // 80050B60
  c->lr=0x80050B68u; f_8004B7C0(c); // 80050B64
L_80050B68:;
  c->r[4]=c->r[24]|c->r[24]; // 80050B68
  c->r[3]=c->r[25]|c->r[25]; // 80050B6C
  c->r[6]=c->r[1]+0x00000020u; // 80050B70
  c->r[5]=0u+0x00000000u; // 80050B74
  c->lr=0x80050B7Cu; f_800DB7F0(c); // 80050B78
  cmps(c,0,(int32_t)c->r[3],0); // 80050B7C
  if (crb(c,2)) { goto L_80050B88; } // 80050B80
  c->lr=0x80050B88u; f_8004B7C0(c); // 80050B84
L_80050B88:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 80050B88
  c->r[4]=0u+0x00000040u; // 80050B8C
  c->r[0]=c->r[3]+0x0000001Fu; // 80050B90
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80050B94
  c->lr=0x80050B9Cu; f_80044AC0(c); // 80050B98
  c->r[0]=0u+0x00000000u; // 80050B9C
  c->r[29]=c->r[3]|c->r[3]; // 80050BA0
  cmpu(c,0,c->r[3],c->r[0]); // 80050BA4
  if (!crb(c,2)) { goto L_80050BB0; } // 80050BA8
  c->lr=0x80050BB0u; f_8004B7C0(c); // 80050BAC
L_80050BB0:;
  c->r[4]=c->r[24]|c->r[24]; // 80050BB0
  c->r[3]=c->r[25]|c->r[25]; // 80050BB4
  c->r[5]=c->r[29]|c->r[29]; // 80050BB8
  c->r[6]=c->r[1]+0x00000020u; // 80050BBC
  c->lr=0x80050BC4u; f_800DB7F0(c); // 80050BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80050BC4
  if (crb(c,2)) { goto L_80050BD0; } // 80050BC8
  c->lr=0x80050BD0u; f_8004B7C0(c); // 80050BCC
L_80050BD0:;
  c->r[3]=c->r[29]|c->r[29]; // 80050BD0
  c->lr=0x80050BD8u; f_80050520(c); // 80050BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80050BD8
  if (!crb(c,2)) { goto L_80050BF0; } // 80050BDC
  c->r[3]=c->r[31]+0x00000068u; // 80050BE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050BE4
  c->lr=0x80050BECu; f_80045C80(c); // 80050BE8
  c->lr=0x80050BF0u; f_8004B7C0(c); // 80050BEC
L_80050BF0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80050BF0
  if (crb(c,2)) { goto L_80050C68; } // 80050BF4
  c->r[4]=c->r[24]|c->r[24]; // 80050BF8
  c->r[3]=c->r[25]|c->r[25]; // 80050BFC
  c->r[5]=0u+0x00000000u; // 80050C00
  c->lr=0x80050C08u; f_80050400(c); // 80050C04
  cmps(c,0,(int32_t)c->r[3],0); // 80050C08
  if (!crb(c,2)) { goto L_80050C20; } // 80050C0C
  c->r[3]=c->r[31]+0x00000094u; // 80050C10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050C14
  c->lr=0x80050C1Cu; f_80045C80(c); // 80050C18
  c->lr=0x80050C20u; f_8004B7C0(c); // 80050C1C
L_80050C20:;
  c->r[28]=R32(c->r[29]+0x0000001Au); // 80050C20
  cmpu(c,0,c->r[28],0x00000003u); // 80050C24
  if (!crb(c,2)) { goto L_80050C34; } // 80050C28
  c->r[0]=0u+0x00000001u; // 80050C2C
  goto L_80050C50; // 80050C30
L_80050C34:;
  c->lr=0x80050C38u; f_8008C040(c); // 80050C34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80050C38
  cmpu(c,0,c->r[28],c->r[0]); // 80050C3C
  if (!crb(c,2)) { goto L_80050C4C; } // 80050C40
  c->r[0]=0u+0x00000001u; // 80050C44
  goto L_80050C50; // 80050C48
L_80050C4C:;
  c->r[0]=0u+0x00000000u; // 80050C4C
L_80050C50:;
  cmps(c,0,(int32_t)c->r[0],0); // 80050C50
  if (!crb(c,2)) { goto L_80050C68; } // 80050C54
  c->r[3]=c->r[31]+0x000000C4u; // 80050C58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050C5C
  c->lr=0x80050C64u; f_80045C80(c); // 80050C60
  c->lr=0x80050C68u; f_8004B7C0(c); // 80050C64
L_80050C68:;
  c->r[0]=R8(c->r[29]+0x00000032u); // 80050C68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80050C6C
  if (crb(c,2)) { goto L_80050C7C; } // 80050C70
  c->r[0]=0u+0x00000001u; // 80050C74
  goto L_80050C80; // 80050C78
L_80050C7C:;
  c->r[0]=0u+0x00000000u; // 80050C7C
L_80050C80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80050C80
  if (!crb(c,2)) { goto L_80050C98; } // 80050C84
  c->lr=0x80050C8Cu; f_80056720(c); // 80050C88
  cmpu(c,0,c->r[3],0x00000002u); // 80050C8C
  if (!crb(c,2)) { goto L_80050C98; } // 80050C90
  c->lr=0x80050C98u; f_800567F0(c); // 80050C94
L_80050C98:;
  cmps(c,0,(int32_t)c->r[27],0); // 80050C98
  if (!crb(c,2)) { goto L_80050CA8; } // 80050C9C
  cmps(c,0,(int32_t)c->r[26],0); // 80050CA0
  if (crb(c,2)) { goto L_80050F20; } // 80050CA4
L_80050CA8:;
  c->r[3]=0u+0x00002000u; // 80050CA8
  c->r[4]=0u+0x00000040u; // 80050CAC
  c->lr=0x80050CB4u; f_80044AC0(c); // 80050CB0
  c->r[29]=c->r[3]|c->r[3]; // 80050CB4
  c->r[30]=c->r[3]+0x00000FE0u; // 80050CB8
  c->r[6]=c->r[24]|c->r[24]; // 80050CBC
  c->r[5]=c->r[25]|c->r[25]; // 80050CC0
  c->r[3]=c->r[1]+0x00000060u; // 80050CC4
  c->r[4]=c->r[13]+0xFFFF8140u; // 80050CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050CCC
  c->lr=0x80050CD4u; f_80074F3C(c); // 80050CD0
  cmps(c,0,(int32_t)c->r[27],0); // 80050CD4
  c->r[28]=0u+0x00000000u; // 80050CD8
  c->r[3]=0u+0x00000000u; // 80050CDC
  if (crb(c,2)) { goto L_80050CFC; } // 80050CE0
  goto L_80050CF0; // 80050CE4
L_80050CE8:;
  c->r[28]=c->r[28]+0x00000001u; // 80050CE8
  c->r[3]=c->r[3]+0x00000004u; // 80050CEC
L_80050CF0:;
  c->r[0]=R32(c->r[27]+c->r[3]); // 80050CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80050CF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80050CE8; } // 80050CF8
L_80050CFC:;
  c->r[0]=c->r[28]+0x00000002u; // 80050CFC
  c->r[4]=0u+0x00000001u; // 80050D00
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80050D04
  c->r[28]=c->r[28]+0x00000001u; // 80050D08
  c->lr=0x80050D10u; f_80044AC0(c); // 80050D0C
  cmps(c,0,(int32_t)c->r[28],1); // 80050D10
  c->r[0]=c->r[1]+0x00000060u; // 80050D14
  W32(c->r[3]+0x00000000u,c->r[0]); // 80050D18
  c->r[5]=c->r[3]|c->r[3]; // 80050D1C
  c->r[4]=c->r[28]+0xFFFFFFFFu; // 80050D20
  c->r[9]=0u+0x00000001u; // 80050D24
  c->r[6]=0u+0x00000004u; // 80050D28
  if (!crb(c,1)) { goto L_80050E0C; } // 80050D2C
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80050D30
  c->ctr=c->r[0]; // 80050D34
  if (crb(c,2)) { goto L_80050DE8; } // 80050D38
L_80050D3C:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 80050D3C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050D40
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050D44
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80050D48
  W32(c->r[3]+c->r[6],c->r[0]); // 80050D4C
  c->r[8]=c->r[9]+0x00000001u; // 80050D50
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050D54
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050D58
  c->r[6]=c->r[6]+0x00000004u; // 80050D5C
  c->r[8]=c->r[9]+0x00000002u; // 80050D60
  W32(c->r[3]+c->r[6],c->r[0]); // 80050D64
  c->r[6]=c->r[6]+0x00000004u; // 80050D68
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050D6C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050D70
  W32(c->r[3]+c->r[6],c->r[0]); // 80050D74
  c->r[8]=c->r[9]+0x00000003u; // 80050D78
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050D7C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050D80
  c->r[6]=c->r[6]+0x00000004u; // 80050D84
  c->r[8]=c->r[9]+0x00000004u; // 80050D88
  W32(c->r[3]+c->r[6],c->r[0]); // 80050D8C
  c->r[6]=c->r[6]+0x00000004u; // 80050D90
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050D94
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050D98
  W32(c->r[3]+c->r[6],c->r[0]); // 80050D9C
  c->r[8]=c->r[9]+0x00000005u; // 80050DA0
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050DA4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050DA8
  c->r[6]=c->r[6]+0x00000004u; // 80050DAC
  c->r[8]=c->r[9]+0x00000006u; // 80050DB0
  W32(c->r[3]+c->r[6],c->r[0]); // 80050DB4
  c->r[6]=c->r[6]+0x00000004u; // 80050DB8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050DBC
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050DC0
  W32(c->r[3]+c->r[6],c->r[0]); // 80050DC4
  c->r[6]=c->r[6]+0x00000004u; // 80050DC8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050DCC
  c->r[9]=c->r[9]+0x00000008u; // 80050DD0
  W32(c->r[3]+c->r[6],c->r[0]); // 80050DD4
  c->r[6]=c->r[6]+0x00000004u; // 80050DD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80050D3C; } // 80050DDC
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 80050DE0
  if (crb(c,2)) { goto L_80050E0C; } // 80050DE4
L_80050DE8:;
  c->ctr=c->r[4]; // 80050DE8
  c->r[0]=c->r[0]|0x00000000u; // 80050DEC
L_80050DF0:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 80050DF0
  c->r[9]=c->r[9]+0x00000001u; // 80050DF4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80050DF8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80050DFC
  W32(c->r[3]+c->r[6],c->r[0]); // 80050E00
  c->r[6]=c->r[6]+0x00000004u; // 80050E04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80050DF0; } // 80050E08
L_80050E0C:;
  c->r[3]=c->r[29]|c->r[29]; // 80050E0C
  c->r[4]=c->r[28]|c->r[28]; // 80050E10
  c->lr=0x80050E18u; f_80050280(c); // 80050E14
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 80050E18
  cmps(c,0,(int32_t)c->r[0],0); // 80050E1C
  if (!crb(c,2)) { goto L_80050E30; } // 80050E20
  c->r[0]=R32(c->r[13]+0xFFFF8BE8u); // 80050E24
  cmps(c,0,(int32_t)c->r[0],0); // 80050E28
  if (crb(c,2)) { goto L_80050E44; } // 80050E2C
L_80050E30:;
  c->r[3]=0u+0x00000002u; // 80050E30
  c->r[0]=0u+0x00000001u; // 80050E34
  W32(c->r[1]+0x00000044u,c->r[3]); // 80050E38
  W32(c->r[1]+0x00000040u,c->r[0]); // 80050E3C
  goto L_80050E90; // 80050E40
L_80050E44:;
  c->lr=0x80050E48u; f_800DB3E0(c); // 80050E44
  cmps(c,0,(int32_t)c->r[3],0); // 80050E48
  if (crb(c,2)) { goto L_80050E68; } // 80050E4C
  c->r[4]=c->r[3]|c->r[3]; // 80050E50
  c->r[3]=c->r[31]+0x000000F4u; // 80050E54
  c->r[5]=0u+0x0000032Cu; // 80050E58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050E5C
  c->lr=0x80050E64u; f_80045C80(c); // 80050E60
  c->lr=0x80050E68u; f_8004B870(c); // 80050E64
L_80050E68:;
  c->r[3]=c->r[1]+0x00000040u; // 80050E68
  c->lr=0x80050E70u; f_800DB9A0(c); // 80050E6C
  cmps(c,0,(int32_t)c->r[3],0); // 80050E70
  if (crb(c,2)) { goto L_80050E90; } // 80050E74
  c->r[4]=c->r[3]|c->r[3]; // 80050E78
  c->r[3]=c->r[31]+0x000000F4u; // 80050E7C
  c->r[5]=0u+0x00000334u; // 80050E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050E84
  c->lr=0x80050E8Cu; f_80045C80(c); // 80050E88
  c->lr=0x80050E90u; f_8004B870(c); // 80050E8C
L_80050E90:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 80050E90
  c->r[3]=R32(c->r[1]+0x00000044u); // 80050E94
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80050E98
  W32(c->r[30]+0x00000018u,c->r[0]); // 80050E9C
  c->r[0]=R32(c->r[29]+0x00000008u); // 80050EA0
  W32(c->r[30]+0x00000004u,c->r[0]); // 80050EA4
  c->lr=0x80050EACu; f_80043DF0(c); // 80050EA8
  c->r[4]=c->r[24]^0x00000002u; // 80050EAC
  c->r[0]=c->r[25]^0x00000001u; // 80050EB0
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 80050EB4
  W8(c->r[30]+0x0000000Au,c->r[3]); // 80050EB8
  if (!crb(c,2)) { goto L_80050ECC; } // 80050EBC
  c->r[0]=0u+0x00000004u; // 80050EC0
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 80050EC4
  goto L_80050ED4; // 80050EC8
L_80050ECC:;
  c->r[0]=0u+0x00000002u; // 80050ECC
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 80050ED0
L_80050ED4:;
  W32(c->r[30]+0x0000000Cu,c->r[26]); // 80050ED4
  c->lr=0x80050EDCu; f_8004F750(c); // 80050ED8
  c->r[3]=c->r[30]|c->r[30]; // 80050EDC
  c->lr=0x80050EE4u; f_8004F800(c); // 80050EE0
  c->r[3]=c->r[1]+0x00000078u; // 80050EE4
  c->lr=0x80050EECu; f_8004F080(c); // 80050EE8
  c->r[3]=c->r[24]^0x00000002u; // 80050EEC
  c->r[0]=c->r[25]^0x00000001u; // 80050EF0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80050EF4
  c->r[0]=0u+0x00000003u; // 80050EF8
  W8(c->r[1]+0x0000007Du,c->r[0]); // 80050EFC
  if (!crb(c,2)) { goto L_80050F18; } // 80050F00
  c->r[3]=R8(c->r[1]+0x0000007Eu); // 80050F04
  c->lr=0x80050F0Cu; f_8004B240(c); // 80050F08
  c->r[0]=0u+0x00000002u; // 80050F0C
  W8(c->r[1]+0x0000007Eu,c->r[3]); // 80050F10
  W8(c->r[1]+0x0000007Fu,c->r[0]); // 80050F14
L_80050F18:;
  c->r[3]=c->r[1]+0x00000078u; // 80050F18
  c->lr=0x80050F20u; f_8004EF90(c); // 80050F1C
L_80050F20:;
  c->r[4]=c->r[24]|c->r[24]; // 80050F20
  c->r[3]=c->r[25]|c->r[25]; // 80050F24
  c->lr=0x80050F2Cu; f_800509F0(c); // 80050F28
  c->lr=0x80050F30u; f_80047100(c); // 80050F2C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80050F30
  c->r[11]=c->r[10]|c->r[10]; // 80050F34
  c->lr=0x80050F3Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80050F38
  c->r[0]=R32(c->r[10]+0x00000004u); // 80050F3C
  c->lr=c->r[0]; // 80050F40
  c->r[1]=c->r[10]|c->r[10]; // 80050F44
  return; // 80050F48
}

// fn_80050F50
void f_80050F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050F50
  c->r[0]=c->lr; // 80050F54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80050F58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80050F5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80050F60
  W32(c->r[1]+0x00000014u,c->r[29]); // 80050F64
  c->r[29]=0u+0x00000000u; // 80050F68
  W32(c->r[1]+0x00000010u,c->r[28]); // 80050F6C
  c->r[28]=c->r[3]|c->r[3]; // 80050F70
  c->lr=0x80050F78u; f_80043DF0(c); // 80050F74
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80050F78
  cmpu(c,0,c->r[0],0x00000080u); // 80050F7C
  if (!crb(c,2)) { goto L_80050FAC; } // 80050F80
  c->r[3]=0u+0x80140000u; // 80050F84
  c->r[3]=c->r[3]+0x0000582Cu; // 80050F88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050F8C
  c->lr=0x80050F94u; f_80045C80(c); // 80050F90
  c->r[3]=0u+0x80140000u; // 80050F94
  c->r[4]=0u+0x0000060Bu; // 80050F98
  c->r[3]=c->r[3]+0x000056B4u; // 80050F9C
  c->r[5]=c->r[13]+0xFFFF8148u; // 80050FA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050FA4
  c->lr=0x80050FACu; f_80045D00(c); // 80050FA8
L_80050FAC:;
  c->lr=0x80050FB0u; f_8008C040(c); // 80050FAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80050FB0
  cmpu(c,0,c->r[0],0x00000002u); // 80050FB4
  if (!crb(c,1)) { goto L_80050FD0; } // 80050FB8
  cmps(c,0,(int32_t)c->r[0],4); // 80050FBC
  if (crb(c,2)) { goto L_80050FE4; } // 80050FC0
  cmps(c,0,(int32_t)c->r[0],5); // 80050FC4
  if (crb(c,2)) { goto L_80050FF8; } // 80050FC8
  goto L_8005100C; // 80050FCC
L_80050FD0:;
  c->r[4]=0u+0x48410000u; // 80050FD0
  c->r[3]=0u+0x00010000u; // 80050FD4
  c->r[30]=c->r[4]+0x00004241u; // 80050FD8
  c->r[31]=c->r[3]+0x00000002u; // 80050FDC
  goto L_8005101C; // 80050FE0
L_80050FE4:;
  c->r[4]=0u+0x48410000u; // 80050FE4
  c->r[3]=0u+0x00010000u; // 80050FE8
  c->r[30]=c->r[4]+0x0000424Bu; // 80050FEC
  c->r[31]=c->r[3]+0x00000002u; // 80050FF0
  goto L_8005101C; // 80050FF4
L_80050FF8:;
  c->r[4]=0u+0x48410000u; // 80050FF8
  c->r[3]=0u+0x00010000u; // 80050FFC
  c->r[30]=c->r[4]+0x00004243u; // 80051000
  c->r[31]=c->r[3]+0x00000002u; // 80051004
  goto L_8005101C; // 80051008
L_8005100C:;
  c->r[4]=0u+0x48410000u; // 8005100C
  c->r[3]=0u+0x00010000u; // 80051010
  c->r[30]=c->r[4]+0x00004241u; // 80051014
  c->r[31]=c->r[3]+0x00000002u; // 80051018
L_8005101C:;
  c->lr=0x80051020u; f_8004EDA0(c); // 8005101C
  c->lr=0x80051024u; f_8004E660(c); // 80051020
  c->lr=0x80051028u; f_8004C740(c); // 80051024
  c->r[3]=0u+0x00000006u; // 80051028
  c->lr=0x80051030u; f_8004B0C0(c); // 8005102C
  c->lr=0x80051034u; f_8004C780(c); // 80051030
  c->r[3]=0u+0x81280000u; // 80051034
  c->lr=0x8005103Cu; f_80044AB0(c); // 80051038
  c->r[3]=0u+0x812F0000u; // 8005103C
  c->lr=0x80051044u; f_80044A80(c); // 80051040
  cmps(c,0,(int32_t)c->r[28],0); // 80051044
  if (crb(c,2)) { goto L_80051068; } // 80051048
  c->r[3]=0u+0x00000004u; // 8005104C
  c->r[4]=0u+0x00001000u; // 80051050
  c->lr=0x80051058u; f_80044AC0(c); // 80051054
  W32(c->r[3]+0x00000000u,c->r[28]); // 80051058
  c->r[0]=0u+0x00000000u; // 8005105C
  c->r[29]=c->r[3]|c->r[3]; // 80051060
  W32(c->r[3]+0x00000004u,c->r[0]); // 80051064
L_80051068:;
  c->r[4]=c->r[30]|c->r[30]; // 80051068
  c->r[3]=c->r[31]|c->r[31]; // 8005106C
  c->r[6]=c->r[29]|c->r[29]; // 80051070
  c->r[5]=0u+0x00000002u; // 80051074
  c->r[7]=0u+0x00000000u; // 80051078
  c->lr=0x80051080u; f_80050B10(c); // 8005107C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051080
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80051084
  c->r[30]=R32(c->r[1]+0x00000018u); // 80051088
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005108C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80051090
  c->lr=c->r[0]; // 80051094
  c->r[1]=c->r[1]+0x00000020u; // 80051098
  return; // 8005109C
}

// __init_user
void f_800510A0(Ctx* __restrict c) {
  trace_call(0x800510A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800510A0
  c->r[0]=c->lr; // 800510A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800510A8
  c->lr=0x800510B0u; f_800510C0(c); // 800510AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800510B0
  c->lr=c->r[0]; // 800510B4
  c->r[1]=c->r[1]+0x00000010u; // 800510B8
  return; // 800510BC
}

// __init_cpp
void f_800510C0(Ctx* __restrict c) {
  trace_call(0x800510C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800510C0
  c->r[0]=c->lr; // 800510C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800510C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800510CC
  c->r[31]=0u+0x80120000u; // 800510D0
  c->r[31]=c->r[31]+0x000035C0u; // 800510D4
  goto L_800510E8; // 800510D8
L_800510DC:;
  c->ctr=c->r[12]; // 800510DC
  if (true) { c->lr=0x800510E4u; dispatch(c,c->ctr); } // 800510E0
  c->r[31]=c->r[31]+0x00000004u; // 800510E4
L_800510E8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800510E8
  cmps(c,0,(int32_t)c->r[12],0); // 800510EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800510DC; } // 800510F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800510F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800510F8
  c->lr=c->r[0]; // 800510FC
  c->r[1]=c->r[1]+0x00000010u; // 80051100
  return; // 80051104
}

// exit
void f_80051110(Ctx* __restrict c) {
  trace_call(0x80051110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051110
  c->r[0]=c->lr; // 80051114
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005111C
  c->r[31]=0u+0x80120000u; // 80051120
  c->r[31]=c->r[31]+0x000035E0u; // 80051124
  goto L_80051138; // 80051128
L_8005112C:;
  c->ctr=c->r[12]; // 8005112C
  if (true) { c->lr=0x80051134u; dispatch(c,c->ctr); } // 80051130
  c->r[31]=c->r[31]+0x00000004u; // 80051134
L_80051138:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80051138
  cmps(c,0,(int32_t)c->r[12],0); // 8005113C
  if (!crb(c,2)) { IRQCHK(c); goto L_8005112C; } // 80051140
  c->lr=0x80051148u; f_800427A0(c); // 80051144
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051148
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005114C
  c->lr=c->r[0]; // 80051150
  c->r[1]=c->r[1]+0x00000010u; // 80051154
  return; // 80051158
}

// PSMTXIdentity
void f_80051160(Ctx* __restrict c) {
  trace_call(0x80051160u);
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051160
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051164
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80051168
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8005116C
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80051170
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80051174
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80051178
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 8005117C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80051180
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 80051184
  return; // 80051188
}

// PSMTXCopy
void f_80051190(Ctx* __restrict c) {
  trace_call(0x80051190u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80051190
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80051194
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80051198
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 8005119C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 800511A0
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 800511A4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 800511A8
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,3,ea,0,0);} // 800511AC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 800511B0
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,4,ea,0,0);} // 800511B4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 800511B8
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,5,ea,0,0);} // 800511BC
  return; // 800511C0
}

// PSMTXConcat
void f_800511D0(Ctx* __restrict c) {
  trace_call(0x800511D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800511D0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800511D4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[14]);} // 800511D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 800511DC
  c->r[6]=0u+0x80200000u; // 800511E0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 800511E4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[15]);} // 800511E8
  c->r[6]=c->r[6]+0x000033F0u; // 800511EC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800511F0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,8,ea,0,0);} // 800511F4
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 800511F8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 800511FC
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80051200
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,31,ea,0,0);} // 80051204
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[14]=t0; c->ps1[14]=t1;} // 80051208
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,0,0);} // 8005120C
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[15]=t0; c->ps1[15]=t1;} // 80051210
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80051214
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80051218
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 8005121C
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[14])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 80051220
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,10,ea,0,0);} // 80051224
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80051228
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,11,ea,0,0);} // 8005122C
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[15])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80051230
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 80051234
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 80051238
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 8005123C
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80051240
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[14])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 80051244
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[15])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80051248
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,12,ea,0,0);} // 8005124C
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80051250
  {double t0=S(std::fma(c->f[31],c->ps1[1],c->f[13])), t1=S(std::fma(c->ps1[31],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80051254
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 80051258
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,14,ea,0,0);} // 8005125C
  {double t0=S(std::fma(c->f[31],c->ps1[3],c->f[15])), t1=S(std::fma(c->ps1[31],c->ps1[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80051260
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 80051264
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80051268
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[0])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8005126C
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80051270
  {uint32_t ea=c->r[1]+0x00000008u; c->f[14]=RF64(ea);} // 80051274
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,15,ea,0,0);} // 80051278
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[0])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8005127C
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 80051280
  {double t0=S(std::fma(c->f[31],c->ps1[5],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80051284
  {uint32_t ea=c->r[1]+0x00000010u; c->f[15]=RF64(ea);} // 80051288
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,0,ea,0,0);} // 8005128C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 80051290
  c->r[1]=c->r[1]+0x00000040u; // 80051294
  return; // 80051298
}

// fn_800512A0
void f_800512A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 800512A0
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800512A4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,1,0);} // 800512A8
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 800512AC
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,0,0);} // 800512B0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,1,0);} // 800512B4
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 800512B8
  {uint32_t ea=c->r[3]+0x00000024u; psq_load(c,5,ea,0,0);} // 800512BC
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 800512C0
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 800512C4
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 800512C8
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 800512CC
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 800512D0
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 800512D4
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 800512D8
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 800512DC
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 800512E0
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 800512E4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 800512E8
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800512EC
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800512F0
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 800512F4
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 800512F8
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 800512FC
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80051300
  fcmp(c,0,c->f[7],c->f[6]); // 80051304
  if (!crb(c,2)) { goto L_80051314; } // 80051308
  c->r[3]=0u+0x00000000u; // 8005130C
  return; // 80051310
L_80051314:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 80051314
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80051318
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 8005131C
  {double t0=S(-std::fma(c->f[0],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[0],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 80051320
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051324
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80051328
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005132C
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80051330
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80051334
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 80051338
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[5]=t0; c->ps1[5]=t1;} // 8005133C
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 80051340
  {double t0=S(c->f[13]*c->f[1]), t1=S(c->ps1[13]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 80051344
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80051348
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,4,ea,0,0);} // 8005134C
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80051350
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80051354
  {double t0=S(std::fma(c->f[12],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[12],c->ps1[2],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80051358
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,10,ea,1,0);} // 8005135C
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80051360
  {double t0=S(-std::fma(c->f[11],c->f[3],c->f[6])), t1=S(-std::fma(c->ps1[11],c->ps1[3],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80051364
  {uint32_t ea=c->r[4]+0x00000024u; psq_store(c,9,ea,1,0);} // 80051368
  {double t0=S(c->f[10]*c->f[1]), t1=S(c->ps1[10]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 8005136C
  {double t0=S(c->f[11]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 80051370
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,1,0);} // 80051374
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[7])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80051378
  {double t0=S(c->ps1[11]), t1=S(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 8005137C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80051380
  {double t0=S(-std::fma(c->f[8],c->f[3],c->f[7])), t1=S(-std::fma(c->ps1[8],c->ps1[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80051384
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,4,ea,0,0);} // 80051388
  {uint32_t ea=c->r[4]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 8005138C
  c->r[3]=0u+0x00000001u; // 80051390
  return; // 80051394
}

// fn_800513A0
void f_800513A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800513A0
  c->r[0]=c->lr; // 800513A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800513A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800513AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800513B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800513B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800513B8
  c->f[30]=c->f[1]; // 800513BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800513C0
  c->r[31]=c->r[4]|c->r[4]; // 800513C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800513C8
  c->r[30]=c->r[3]|c->r[3]; // 800513CC
  c->lr=0x800513D4u; f_80078C50(c); // 800513D0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 800513D4
  c->f[1]=c->f[30]; // 800513D8
  c->lr=0x800513E0u; f_80078844(c); // 800513DC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800513E0
  c->r[3]=c->r[30]|c->r[30]; // 800513E4
  c->f[1]=c->f[31]; // 800513E8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800513EC
  c->lr=0x800513F4u; f_80051420(c); // 800513F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800513F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800513F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800513FC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80051400
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80051404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051408
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005140C
  c->lr=c->r[0]; // 80051410
  c->r[1]=c->r[1]+0x00000030u; // 80051414
  return; // 80051418
}

// fn_80051420
void f_80051420(Ctx* __restrict c) {
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80051420
  c->r[0]=c->r[4]|0x00000020u; // 80051424
  c->f[4]=c->ps1[4]=S(c->f[2]); // 80051428
  cmpu(c,0,c->r[0],0x00000078u); // 8005142C
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051430
  {double t0=-c->f[5], t1=-c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 80051434
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051438
  if (crb(c,2)) { goto L_80051454; } // 8005143C
  cmpu(c,0,c->r[0],0x00000079u); // 80051440
  if (crb(c,2)) { goto L_8005147C; } // 80051444
  cmpu(c,0,c->r[0],0x0000007Au); // 80051448
  if (crb(c,2)) { goto L_800514A8; } // 8005144C
  return; // 80051450
L_80051454:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 80051454
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,0);} // 80051458
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8005145C
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 80051460
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 80051464
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,0,ea,0,0);} // 80051468
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 8005146C
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,3,ea,0,0);} // 80051470
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,1,ea,0,0);} // 80051474
  return; // 80051478
L_8005147C:;
  {double t0=S(c->f[4]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 8005147C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80051480
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80051484
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80051488
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 8005148C
  {double t0=S(c->f[5]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80051490
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,3,ea,0,0);} // 80051494
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 80051498
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8005149C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 800514A0
  return; // 800514A4
L_800514A8:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800514A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 800514AC
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800514B0
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800514B4
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800514B8
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800514BC
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 800514C0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 800514C4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 800514C8
  return; // 800514CC
}

// PSMTXTrans
void f_800514D0(Ctx* __restrict c) {
  trace_call(0x800514D0u);
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[0]=c->ps1[0]=RF32(ea);} // 800514D0
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[4]=c->ps1[4]=RF32(ea);} // 800514D4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800514D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800514DC
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 800514E0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 800514E4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800514E8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 800514EC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800514F0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[4]);} // 800514F4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 800514F8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 800514FC
  return; // 80051500
}

// PSMTXTransApply
void f_80051510(Ctx* __restrict c) {
  trace_call(0x80051510u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 80051510
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80051514
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 80051518
  c->f[2]=c->ps1[2]=S(c->f[2]); // 8005151C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,0,0);} // 80051520
  c->f[3]=c->ps1[3]=S(c->f[3]); // 80051524
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,8,ea,0,0);} // 80051528
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8005152C
  {double t0=S(c->f[5]), t1=S(c->f[1]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 80051530
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 80051534
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80051538
  {double t0=S(c->f[7]), t1=S(c->f[2]+c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 8005153C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,9,ea,0,0);} // 80051540
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,6,ea,0,0);} // 80051544
  {double t0=S(c->f[8]), t1=S(c->f[3]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 80051548
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,7,ea,0,0);} // 8005154C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,9,ea,0,0);} // 80051550
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,0,0);} // 80051554
  return; // 80051558
}

// PSMTXScale
void f_80051560(Ctx* __restrict c) {
  trace_call(0x80051560u);
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051560
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80051564
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 80051568
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 8005156C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80051570
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80051574
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80051578
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 8005157C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80051580
  return; // 80051584
}

// PSMTXMultVec
void f_80051590(Ctx* __restrict c) {
  trace_call(0x80051590u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80051590
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80051594
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 80051598
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 8005159C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 800515A0
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800515A4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,8,ea,0,0);} // 800515A8
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800515AC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,9,ea,0,0);} // 800515B0
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->ps1[0]); c->f[10]=t0; c->ps1[10]=t1;} // 800515B4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,1,0);} // 800515B8
  {double t0=S(std::fma(c->f[9],c->f[1],c->f[10])), t1=S(std::fma(c->ps1[9],c->ps1[1],c->ps1[10])); c->f[11]=t0; c->ps1[11]=t1;} // 800515BC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,0,0);} // 800515C0
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[12]); c->f[12]=t0; c->ps1[12]=t1;} // 800515C4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,3,ea,0,0);} // 800515C8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 800515CC
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,1,0);} // 800515D0
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800515D4
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800515D8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,1,0);} // 800515DC
  return; // 800515E0
}

// fn_800515F0
void f_800515F0(Ctx* __restrict c) {
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 800515F0
  {uint32_t ea=c->r[2]+0xFFFF8240u; c->f[8]=c->ps1[8]=RF32(ea);} // 800515F4
  {uint32_t ea=c->r[2]+0xFFFF8238u; c->f[10]=c->ps1[10]=RF32(ea);} // 800515F8
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 800515FC
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[5]); // 80051600
  {uint32_t ea=c->r[2]+0xFFFF823Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80051604
  c->f[12]=c->ps1[12]=S(c->f[10]/c->f[11]); // 80051608
  {uint32_t ea=c->r[2]+0xFFFF8244u; c->f[5]=c->ps1[5]=RF32(ea);} // 8005160C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 80051610
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[8]);} // 80051614
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[8]);} // 80051618
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[8]);} // 8005161C
  c->f[11]=c->ps1[11]=S(c->f[10]/c->f[7]); // 80051620
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[8]);} // 80051624
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[8]);} // 80051628
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[8]);} // 8005162C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 80051630
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[8]);} // 80051634
  c->f[7]=c->ps1[7]=S(c->f[10]/c->f[0]); // 80051638
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[10]);} // 8005163C
  c->f[0]=-c->f[6]; // 80051640
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80051644
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80051648
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[12]); // 8005164C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 80051650
  c->f[2]=-c->f[3]; // 80051654
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 80051658
  c->f[3]=c->ps1[3]=S(c->f[9]*c->f[11]); // 8005165C
  c->f[1]=-c->f[1]; // 80051660
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80051664
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[2]); // 80051668
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8005166C
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[1]); // 80051670
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[7]); // 80051674
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 80051678
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 8005167C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80051680
  return; // 80051684
}

// __DVDFSInit
void f_80051690(Ctx* __restrict c) {
  trace_call(0x80051690u);
  c->r[3]=0u+0x80000000u; // 80051690
  W32(c->r[13]+0xFFFF8C0Cu,c->r[3]); // 80051694
  c->r[3]=R32(c->r[3]+0x00000038u); // 80051698
  W32(c->r[13]+0xFFFF8C08u,c->r[3]); // 8005169C
  cmps(c,0,(int32_t)c->r[3],0); // 800516A0
  if (crb(c,2)) return; // 800516A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800516A8
  W32(c->r[13]+0xFFFF8C00u,c->r[0]); // 800516AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800516B0
  c->r[0]=c->r[3]+c->r[0]; // 800516B4
  W32(c->r[13]+0xFFFF8C04u,c->r[0]); // 800516B8
  return; // 800516BC
}

// fn_800516C0
void f_800516C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800516C0
  c->r[0]=c->lr; // 800516C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800516C8
  c->r[11]=c->r[1]+0x00000030u; // 800516CC
  c->lr=0x800516D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800516D0
  c->r[26]=c->r[3]|c->r[3]; // 800516D4
  c->r[31]=0u+0x80150000u; // 800516D8
  c->r[29]=R32(c->r[13]+0xFFFF8BF0u); // 800516DC
  c->r[28]=c->r[26]|c->r[26]; // 800516E0
  c->r[31]=c->r[31]+0xFFFFDBE0u; // 800516E4
  c->r[30]=0u+0x80140000u; // 800516E8
L_800516EC:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 800516EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800516F0
  if (!crb(c,2)) { goto L_80051700; } // 800516F4
  c->r[3]=c->r[29]|c->r[29]; // 800516F8
  goto L_800519B0; // 800516FC
L_80051700:;
  cmps(c,0,(int32_t)c->r[0],47); // 80051700
  if (!crb(c,2)) { goto L_80051714; } // 80051704
  c->r[29]=0u+0x00000000u; // 80051708
  c->r[26]=c->r[26]+0x00000001u; // 8005170C
  IRQCHK(c); goto L_800516EC; // 80051710
L_80051714:;
  cmps(c,0,(int32_t)c->r[0],46); // 80051714
  if (!crb(c,2)) { goto L_80051790; } // 80051718
  c->r[0]=R8(c->r[26]+0x00000001u); // 8005171C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80051720
  cmps(c,0,(int32_t)c->r[0],46); // 80051724
  if (!crb(c,2)) { goto L_80051770; } // 80051728
  c->r[0]=R8(c->r[26]+0x00000002u); // 8005172C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80051730
  cmps(c,0,(int32_t)c->r[0],47); // 80051734
  if (!crb(c,2)) { goto L_80051754; } // 80051738
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8005173C
  c->r[3]=R32(c->r[13]+0xFFFF8C08u); // 80051740
  c->r[26]=c->r[26]+0x00000003u; // 80051744
  c->r[3]=c->r[3]+c->r[0]; // 80051748
  c->r[29]=R32(c->r[3]+0x00000004u); // 8005174C
  IRQCHK(c); goto L_800516EC; // 80051750
L_80051754:;
  cmps(c,0,(int32_t)c->r[0],0); // 80051754
  if (!crb(c,2)) { goto L_80051790; } // 80051758
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8005175C
  c->r[3]=R32(c->r[13]+0xFFFF8C08u); // 80051760
  c->r[3]=c->r[3]+c->r[0]; // 80051764
  c->r[3]=R32(c->r[3]+0x00000004u); // 80051768
  goto L_800519B0; // 8005176C
L_80051770:;
  cmps(c,0,(int32_t)c->r[0],47); // 80051770
  if (!crb(c,2)) { goto L_80051780; } // 80051774
  c->r[26]=c->r[26]+0x00000002u; // 80051778
  IRQCHK(c); goto L_800516EC; // 8005177C
L_80051780:;
  cmps(c,0,(int32_t)c->r[0],0); // 80051780
  if (!crb(c,2)) { goto L_80051790; } // 80051784
  c->r[3]=c->r[29]|c->r[29]; // 80051788
  goto L_800519B0; // 8005178C
L_80051790:;
  c->r[0]=R32(c->r[13]+0xFFFF8158u); // 80051790
  cmps(c,0,(int32_t)c->r[0],0); // 80051794
  if (!crb(c,2)) { goto L_80051844; } // 80051798
  c->r[23]=c->r[26]|c->r[26]; // 8005179C
  c->r[5]=0u+0x00000000u; // 800517A0
  c->r[4]=0u+0x00000000u; // 800517A4
  goto L_800517F4; // 800517A8
  c->r[0]=c->r[0]|0x00000000u; // 800517AC
L_800517B0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800517B0
  cmps(c,0,(int32_t)c->r[0],46); // 800517B4
  if (!crb(c,2)) { goto L_800517E4; } // 800517B8
  c->r[0]=c->r[23]-c->r[26]; // 800517BC
  cmps(c,0,(int32_t)c->r[0],8); // 800517C0
  if (crb(c,1)) { goto L_800517D0; } // 800517C4
  cmps(c,0,(int32_t)c->r[5],1); // 800517C8
  if (!crb(c,2)) { goto L_800517D8; } // 800517CC
L_800517D0:;
  c->r[4]=0u+0x00000001u; // 800517D0
  goto L_80051808; // 800517D4
L_800517D8:;
  c->r[27]=c->r[23]+0x00000001u; // 800517D8
  c->r[5]=0u+0x00000001u; // 800517DC
  goto L_800517F0; // 800517E0
L_800517E4:;
  cmps(c,0,(int32_t)c->r[0],32); // 800517E4
  if (!crb(c,2)) { goto L_800517F0; } // 800517E8
  c->r[4]=0u+0x00000001u; // 800517EC
L_800517F0:;
  c->r[23]=c->r[23]+0x00000001u; // 800517F0
L_800517F4:;
  c->r[3]=R8(c->r[23]+0x00000000u); // 800517F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800517F8
  if (crb(c,2)) { goto L_80051808; } // 800517FC
  cmps(c,0,(int32_t)c->r[0],47); // 80051800
  if (!crb(c,2)) { IRQCHK(c); goto L_800517B0; } // 80051804
L_80051808:;
  cmps(c,0,(int32_t)c->r[5],1); // 80051808
  if (!crb(c,2)) { goto L_80051820; } // 8005180C
  c->r[0]=c->r[23]-c->r[27]; // 80051810
  cmps(c,0,(int32_t)c->r[0],3); // 80051814
  if (!crb(c,1)) { goto L_80051820; } // 80051818
  c->r[4]=0u+0x00000001u; // 8005181C
L_80051820:;
  cmps(c,0,(int32_t)c->r[4],0); // 80051820
  if (crb(c,2)) { goto L_80051868; } // 80051824
  c->r[6]=c->r[28]|c->r[28]; // 80051828
  c->r[5]=c->r[30]+0x000059A8u; // 8005182C
  c->r[3]=c->r[13]+0xFFFF8160u; // 80051830
  c->r[4]=0u+0x000001C4u; // 80051834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051838
  c->lr=0x80051840u; f_80045D00(c); // 8005183C
  goto L_80051868; // 80051840
L_80051844:;
  c->r[23]=c->r[26]|c->r[26]; // 80051844
  goto L_80051854; // 80051848
  c->r[0]=c->r[0]|0x00000000u; // 8005184C
L_80051850:;
  c->r[23]=c->r[23]+0x00000001u; // 80051850
L_80051854:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 80051854
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80051858
  if (crb(c,2)) { goto L_80051868; } // 8005185C
  cmps(c,0,(int32_t)c->r[0],47); // 80051860
  if (!crb(c,2)) { IRQCHK(c); goto L_80051850; } // 80051864
L_80051868:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 80051868
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8005186C
  c->r[7]=R32(c->r[13]+0xFFFF8C08u); // 80051870
  c->r[8]=c->r[23]-c->r[26]; // 80051874
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80051878
  c->r[0]=R32(c->r[13]+0xFFFF8C04u); // 8005187C
  c->r[4]=0u-c->r[5]; // 80051880
  c->r[5]=c->r[4]|c->r[5]; // 80051884
  c->r[3]=c->r[7]+c->r[3]; // 80051888
  c->r[4]=R32(c->r[3]+0x00000008u); // 8005188C
  c->r[25]=rotl(c->r[5],1)&0x00000001u; // 80051890
  c->r[10]=R32(c->r[31]+0x00000038u); // 80051894
  c->r[3]=c->r[29]+0x00000001u; // 80051898
  goto L_80051984; // 8005189C
L_800518A0:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800518A0
  {uint32_t ea=c->r[5]+c->r[7]; c->r[9]=R32(ea); c->r[5]=ea;} // 800518A4
  c->r[6]=rotl(c->r[9],0)&0xFF000000u; cr0(c,c->r[6]); // 800518A8
  if (!crb(c,2)) { goto L_800518B8; } // 800518AC
  cmps(c,0,(int32_t)c->r[25],1); // 800518B0
  if (crb(c,2)) { goto L_80051970; } // 800518B4
L_800518B8:;
  c->r[9]=rotl(c->r[9],0)&0x00FFFFFFu; // 800518B8
  c->r[11]=c->r[26]|c->r[26]; // 800518BC
  c->r[12]=c->r[0]+c->r[9]; // 800518C0
  goto L_80051938; // 800518C4
L_800518C8:;
  c->r[9]=R8(c->r[12]+0x00000000u); // 800518C8
  c->r[29]=0u+0x00000001u; // 800518CC
  c->r[12]=c->r[12]+0x00000001u; // 800518D0
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800518D4
  cmpu(c,0,c->r[24],0x000000FFu); // 800518D8
  if (crb(c,1)) { goto L_800518E4; } // 800518DC
  c->r[29]=0u+0x00000000u; // 800518E0
L_800518E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800518E4
  if (crb(c,2)) { goto L_800518F0; } // 800518E8
  goto L_800518F8; // 800518EC
L_800518F0:;
  c->r[9]=R32(c->r[10]+0x00000010u); // 800518F0
  c->r[24]=R8(c->r[9]+c->r[24]); // 800518F4
L_800518F8:;
  c->r[9]=R8(c->r[11]+0x00000000u); // 800518F8
  c->r[23]=0u+0x00000001u; // 800518FC
  c->r[11]=c->r[11]+0x00000001u; // 80051900
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 80051904
  cmpu(c,0,c->r[29],0x000000FFu); // 80051908
  if (crb(c,1)) { goto L_80051914; } // 8005190C
  c->r[23]=0u+0x00000000u; // 80051910
L_80051914:;
  cmps(c,0,(int32_t)c->r[23],0); // 80051914
  if (crb(c,2)) { goto L_80051920; } // 80051918
  goto L_80051928; // 8005191C
L_80051920:;
  c->r[9]=R32(c->r[10]+0x00000010u); // 80051920
  c->r[29]=R8(c->r[9]+c->r[29]); // 80051924
L_80051928:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[24]); // 80051928
  if (crb(c,2)) { goto L_80051938; } // 8005192C
  c->r[9]=0u+0x00000000u; // 80051930
  goto L_80051968; // 80051934
L_80051938:;
  c->r[9]=R8(c->r[12]+0x00000000u); // 80051938
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 8005193C
  if (!crb(c,2)) { IRQCHK(c); goto L_800518C8; } // 80051940
  c->r[9]=R8(c->r[11]+0x00000000u); // 80051944
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 80051948
  cmps(c,0,(int32_t)c->r[9],47); // 8005194C
  if (crb(c,2)) { goto L_8005195C; } // 80051950
  cmps(c,0,(int32_t)c->r[9],0); // 80051954
  if (!crb(c,2)) { goto L_80051964; } // 80051958
L_8005195C:;
  c->r[9]=0u+0x00000001u; // 8005195C
  goto L_80051968; // 80051960
L_80051964:;
  c->r[9]=0u+0x00000000u; // 80051964
L_80051968:;
  cmps(c,0,(int32_t)c->r[9],1); // 80051968
  if (crb(c,2)) { goto L_80051994; } // 8005196C
L_80051970:;
  cmps(c,0,(int32_t)c->r[6],0); // 80051970
  if (crb(c,2)) { goto L_80051980; } // 80051974
  c->r[3]=R32(c->r[5]+0x00000008u); // 80051978
  goto L_80051984; // 8005197C
L_80051980:;
  c->r[3]=c->r[3]+0x00000001u; // 80051980
L_80051984:;
  cmpu(c,0,c->r[3],c->r[4]); // 80051984
  if (crb(c,0)) { IRQCHK(c); goto L_800518A0; } // 80051988
  c->r[3]=0u+0xFFFFFFFFu; // 8005198C
  goto L_800519B0; // 80051990
L_80051994:;
  cmps(c,0,(int32_t)c->r[25],0); // 80051994
  if (!crb(c,2)) { goto L_800519A0; } // 80051998
  goto L_800519B0; // 8005199C
L_800519A0:;
  c->r[4]=c->r[8]+c->r[26]; // 800519A0
  c->r[29]=c->r[3]|c->r[3]; // 800519A4
  c->r[26]=c->r[4]+0x00000001u; // 800519A8
  IRQCHK(c); goto L_800516EC; // 800519AC
L_800519B0:;
  c->r[11]=c->r[1]+0x00000030u; // 800519B0
  c->lr=0x800519B8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800519B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800519B8
  c->lr=c->r[0]; // 800519BC
  c->r[1]=c->r[1]+0x00000030u; // 800519C0
  return; // 800519C4
}

// fn_800519D0
void f_800519D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800519D0
  c->r[0]=c->lr; // 800519D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800519D8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800519DC
  c->r[31]=c->r[4]|c->r[4]; // 800519E0
  W32(c->r[1]+0x00000088u,c->r[30]); // 800519E4
  c->r[30]=c->r[3]|c->r[3]; // 800519E8
  c->lr=0x800519F0u; f_800516C0(c); // 800519EC
  cmps(c,0,(int32_t)c->r[3],0); // 800519F0
  if (!crb(c,0)) { goto L_80051A88; } // 800519F4
  c->r[31]=R32(c->r[13]+0xFFFF8BF0u); // 800519F8
  c->r[4]=c->r[1]+0x00000008u; // 800519FC
  c->r[5]=0u+0x00000080u; // 80051A00
  c->r[3]=c->r[31]|c->r[31]; // 80051A04
  c->lr=0x80051A0Cu; f_80051B20(c); // 80051A08
  cmpu(c,0,c->r[3],0x00000080u); // 80051A0C
  if (!crb(c,2)) { goto L_80051A20; } // 80051A10
  c->r[0]=0u+0x00000000u; // 80051A14
  W8(c->r[1]+0x00000087u,c->r[0]); // 80051A18
  goto L_80051A68; // 80051A1C
L_80051A20:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 80051A20
  c->r[4]=R32(c->r[13]+0xFFFF8C08u); // 80051A24
  c->r[0]=R32(c->r[4]+c->r[0]); // 80051A28
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80051A2C
  if (crb(c,2)) { goto L_80051A5C; } // 80051A30
  cmpu(c,0,c->r[3],0x0000007Fu); // 80051A34
  if (!crb(c,2)) { goto L_80051A4C; } // 80051A38
  c->r[4]=c->r[1]+0x00000008u; // 80051A3C
  c->r[0]=0u+0x00000000u; // 80051A40
  W8(c->r[4]+c->r[3],c->r[0]); // 80051A44
  goto L_80051A68; // 80051A48
L_80051A4C:;
  c->r[4]=c->r[1]+0x00000008u; // 80051A4C
  c->r[0]=0u+0x0000002Fu; // 80051A50
  W8(c->r[4]+c->r[3],c->r[0]); // 80051A54
  c->r[3]=c->r[3]+0x00000001u; // 80051A58
L_80051A5C:;
  c->r[4]=c->r[1]+0x00000008u; // 80051A5C
  c->r[0]=0u+0x00000000u; // 80051A60
  W8(c->r[4]+c->r[3],c->r[0]); // 80051A64
L_80051A68:;
  c->r[3]=0u+0x80140000u; // 80051A68
  c->r[4]=c->r[30]|c->r[30]; // 80051A6C
  c->r[3]=c->r[3]+0x00005A70u; // 80051A70
  c->r[5]=c->r[1]+0x00000008u; // 80051A74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051A78
  c->lr=0x80051A80u; f_80045C80(c); // 80051A7C
  c->r[3]=0u+0x00000000u; // 80051A80
  goto L_80051AD8; // 80051A84
L_80051A88:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80051A88
  c->r[3]=R32(c->r[13]+0xFFFF8C08u); // 80051A8C
  c->r[0]=R32(c->r[3]+c->r[6]); // 80051A90
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80051A94
  if (crb(c,2)) { goto L_80051AA4; } // 80051A98
  c->r[3]=0u+0x00000000u; // 80051A9C
  goto L_80051AD8; // 80051AA0
L_80051AA4:;
  c->r[3]=c->r[3]+c->r[6]; // 80051AA4
  c->r[4]=R32(c->r[13]+0xFFFF8C58u); // 80051AA8
  c->r[5]=R32(c->r[3]+0x00000004u); // 80051AAC
  c->r[0]=0u+0x00000000u; // 80051AB0
  c->r[3]=0u+0x00000001u; // 80051AB4
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]>>((c->r[4])&31)); // 80051AB8
  W32(c->r[31]+0x00000030u,c->r[4]); // 80051ABC
  c->r[4]=R32(c->r[13]+0xFFFF8C08u); // 80051AC0
  c->r[4]=c->r[4]+c->r[6]; // 80051AC4
  c->r[4]=R32(c->r[4]+0x00000008u); // 80051AC8
  W32(c->r[31]+0x00000034u,c->r[4]); // 80051ACC
  W32(c->r[31]+0x00000038u,c->r[0]); // 80051AD0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80051AD4
L_80051AD8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80051AD8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80051ADC
  c->r[30]=R32(c->r[1]+0x00000088u); // 80051AE0
  c->lr=c->r[0]; // 80051AE4
  c->r[1]=c->r[1]+0x00000090u; // 80051AE8
  return; // 80051AEC
}

// fn_80051AF0
void f_80051AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051AF0
  c->r[0]=c->lr; // 80051AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051AF8
  c->lr=0x80051B00u; f_80056630(c); // 80051AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051B00
  c->r[3]=0u+0x00000001u; // 80051B04
  c->lr=c->r[0]; // 80051B08
  c->r[1]=c->r[1]+0x00000010u; // 80051B0C
  return; // 80051B10
}

// fn_80051B20
void f_80051B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051B20
  c->r[0]=c->lr; // 80051B24
  cmps(c,1,(int32_t)c->r[3],0); // 80051B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80051B2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80051B30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80051B34
  c->r[30]=c->r[5]|c->r[5]; // 80051B38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80051B3C
  c->r[29]=c->r[4]|c->r[4]; // 80051B40
  if (!crb(c,6)) { goto L_80051B50; } // 80051B44
  c->r[3]=0u+0x00000000u; // 80051B48
  goto L_80051C18; // 80051B4C
L_80051B50:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80051B50
  c->r[5]=R32(c->r[13]+0xFFFF8C08u); // 80051B54
  c->r[4]=R32(c->r[13]+0xFFFF8C04u); // 80051B58
  {uint32_t ea=c->r[5]+c->r[0]; c->r[6]=R32(ea); c->r[5]=ea;} // 80051B5C
  c->r[0]=rotl(c->r[6],0)&0xFF000000u; cr0(c,c->r[0]); // 80051B60
  c->r[0]=rotl(c->r[6],0)&0x00FFFFFFu; // 80051B64
  c->r[31]=c->r[4]+c->r[0]; // 80051B68
  if (crb(c,2)) { goto L_80051B78; } // 80051B6C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80051B70
  goto L_80051BAC; // 80051B74
L_80051B78:;
  c->r[4]=c->r[3]|c->r[3]; // 80051B78
  c->ctr=c->r[3]; // 80051B7C
  if (crb(c,6)) { goto L_80051BAC; } // 80051B80
  c->r[0]=c->r[0]|0x00000000u; // 80051B84
L_80051B88:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80051B88
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80051B8C
  if (crb(c,2)) { goto L_80051BA0; } // 80051B90
  c->r[0]=R32(c->r[5]+0x00000008u); // 80051B94
  cmpu(c,0,c->r[0],c->r[3]); // 80051B98
  if (crb(c,1)) { goto L_80051BAC; } // 80051B9C
L_80051BA0:;
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 80051BA0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80051BA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80051B88; } // 80051BA8
L_80051BAC:;
  c->r[3]=c->r[4]|c->r[4]; // 80051BAC
  c->r[4]=c->r[29]|c->r[29]; // 80051BB0
  c->r[5]=c->r[30]|c->r[30]; // 80051BB4
  c->lr=0x80051BBCu; f_80051B20(c); // 80051BB8
  cmpu(c,0,c->r[3],c->r[30]); // 80051BBC
  if (!crb(c,2)) { goto L_80051BC8; } // 80051BC0
  goto L_80051C18; // 80051BC4
L_80051BC8:;
  c->r[6]=c->r[3]+0x00000001u; // 80051BC8
  c->r[0]=0u+0x0000002Fu; // 80051BCC
  c->r[5]=c->r[30]-c->r[6]; // 80051BD0
  W8(c->r[29]+c->r[3],c->r[0]); // 80051BD4
  c->r[3]=c->r[29]+c->r[6]; // 80051BD8
  c->r[4]=c->r[5]|c->r[5]; // 80051BDC
  goto L_80051BFC; // 80051BE0
  c->r[0]=c->r[0]|0x00000000u; // 80051BE4
L_80051BE8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80051BE8
  c->r[31]=c->r[31]+0x00000001u; // 80051BEC
  W8(c->r[3]+0x00000000u,c->r[0]); // 80051BF0
  c->r[3]=c->r[3]+0x00000001u; // 80051BF4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80051BF8
L_80051BFC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80051BFC
  if (crb(c,2)) { goto L_80051C10; } // 80051C00
  c->r[0]=R8(c->r[31]+0x00000000u); // 80051C04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80051C08
  if (!crb(c,2)) { IRQCHK(c); goto L_80051BE8; } // 80051C0C
L_80051C10:;
  c->r[0]=c->r[5]-c->r[4]; // 80051C10
  c->r[3]=c->r[6]+c->r[0]; // 80051C14
L_80051C18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051C18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80051C1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80051C20
  c->r[29]=R32(c->r[1]+0x00000014u); // 80051C24
  c->lr=c->r[0]; // 80051C28
  c->r[1]=c->r[1]+0x00000020u; // 80051C2C
  return; // 80051C30
}

// fn_80051C40
void f_80051C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051C40
  c->r[0]=c->lr; // 80051C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051C48
  c->lr=0x80051C50u; f_800516C0(c); // 80051C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80051C50
  if (crb(c,0)) { goto L_80051C6C; } // 80051C54
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80051C58
  c->r[4]=R32(c->r[13]+0xFFFF8C08u); // 80051C5C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80051C60
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80051C64
  if (!crb(c,2)) { goto L_80051C74; } // 80051C68
L_80051C6C:;
  c->r[3]=0u+0x00000000u; // 80051C6C
  goto L_80051C7C; // 80051C70
L_80051C74:;
  W32(c->r[13]+0xFFFF8BF0u,c->r[3]); // 80051C74
  c->r[3]=0u+0x00000001u; // 80051C78
L_80051C7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051C7C
  c->lr=c->r[0]; // 80051C80
  c->r[1]=c->r[1]+0x00000010u; // 80051C84
  return; // 80051C88
}

// fn_80051C90
void f_80051C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051C90
  c->r[0]=c->lr; // 80051C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80051C98
  c->r[11]=c->r[1]+0x00000020u; // 80051C9C
  c->lr=0x80051CA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80051CA0
  cmps(c,0,(int32_t)c->r[6],0); // 80051CA4
  c->r[26]=c->r[3]|c->r[3]; // 80051CA8
  c->r[27]=c->r[4]|c->r[4]; // 80051CAC
  c->r[28]=c->r[5]|c->r[5]; // 80051CB0
  c->r[29]=c->r[6]|c->r[6]; // 80051CB4
  c->r[30]=c->r[7]|c->r[7]; // 80051CB8
  c->r[31]=c->r[8]|c->r[8]; // 80051CBC
  if (crb(c,0)) { goto L_80051CD0; } // 80051CC0
  c->r[0]=R32(c->r[3]+0x00000034u); // 80051CC4
  cmpu(c,0,c->r[6],c->r[0]); // 80051CC8
  if (!crb(c,1)) { goto L_80051CE8; } // 80051CCC
L_80051CD0:;
  c->r[5]=0u+0x80140000u; // 80051CD0
  c->r[3]=c->r[13]+0xFFFF8160u; // 80051CD4
  c->r[5]=c->r[5]+0x00005AA8u; // 80051CD8
  c->r[4]=0u+0x0000034Du; // 80051CDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051CE0
  c->lr=0x80051CE8u; f_80045D00(c); // 80051CE4
L_80051CE8:;
  c->r[4]=c->r[29]+c->r[28]; cr0(c,c->r[4]); // 80051CE8
  if (crb(c,0)) { goto L_80051D00; } // 80051CEC
  c->r[3]=R32(c->r[26]+0x00000034u); // 80051CF0
  c->r[0]=c->r[3]+0x00000020u; // 80051CF4
  cmpu(c,0,c->r[4],c->r[0]); // 80051CF8
  if (crb(c,0)) { goto L_80051D18; } // 80051CFC
L_80051D00:;
  c->r[5]=0u+0x80140000u; // 80051D00
  c->r[3]=c->r[13]+0xFFFF8160u; // 80051D04
  c->r[5]=c->r[5]+0x00005AA8u; // 80051D08
  c->r[4]=0u+0x00000353u; // 80051D0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051D10
  c->lr=0x80051D18u; f_80045D00(c); // 80051D14
L_80051D18:;
  c->r[6]=R32(c->r[26]+0x00000030u); // 80051D18
  c->r[0]=sraw(c,c->r[29],2); // 80051D1C
  c->r[7]=0u+0x80050000u; // 80051D20
  W32(c->r[26]+0x00000038u,c->r[30]); // 80051D24
  c->r[3]=c->r[26]|c->r[26]; // 80051D28
  c->r[4]=c->r[27]|c->r[27]; // 80051D2C
  c->r[5]=c->r[28]|c->r[28]; // 80051D30
  c->r[8]=c->r[31]|c->r[31]; // 80051D34
  c->r[6]=c->r[6]+c->r[0]; // 80051D38
  c->r[7]=c->r[7]+0x00001D60u; // 80051D3C
  c->lr=0x80051D44u; f_80055F20(c); // 80051D40
  c->r[11]=c->r[1]+0x00000020u; // 80051D44
  c->r[3]=0u+0x00000001u; // 80051D48
  c->lr=0x80051D50u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80051D4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051D50
  c->lr=c->r[0]; // 80051D54
  c->r[1]=c->r[1]+0x00000020u; // 80051D58
  return; // 80051D5C
}

// fn_80051D60
void f_80051D60(Ctx* __restrict c) {
  c->r[12]=R32(c->r[4]+0x00000038u); // 80051D60
  cmps(c,0,(int32_t)c->r[12],0); // 80051D64
  if (crb(c,2)) return; // 80051D68
  c->ctr=c->r[12]; // 80051D6C
  if (true) { dispatch(c,c->ctr); return; } // 80051D70
}

// fn_80051D74
void f_80051D74(Ctx* __restrict c) {
  return; // 80051D74
}

// fn_80051D80
void f_80051D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051D80
  c->r[0]=c->lr; // 80051D84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80051D88
  c->r[11]=c->r[1]+0x00000020u; // 80051D8C
  c->lr=0x80051D94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80051D90
  cmps(c,0,(int32_t)c->r[6],0); // 80051D94
  c->r[27]=c->r[3]|c->r[3]; // 80051D98
  c->r[28]=c->r[4]|c->r[4]; // 80051D9C
  c->r[29]=c->r[5]|c->r[5]; // 80051DA0
  c->r[31]=c->r[6]|c->r[6]; // 80051DA4
  c->r[30]=c->r[7]|c->r[7]; // 80051DA8
  if (crb(c,0)) { goto L_80051DBC; } // 80051DAC
  c->r[0]=R32(c->r[3]+0x00000034u); // 80051DB0
  cmpu(c,0,c->r[6],c->r[0]); // 80051DB4
  if (!crb(c,1)) { goto L_80051DD4; } // 80051DB8
L_80051DBC:;
  c->r[5]=0u+0x80140000u; // 80051DBC
  c->r[3]=c->r[13]+0xFFFF8160u; // 80051DC0
  c->r[5]=c->r[5]+0x00005ADCu; // 80051DC4
  c->r[4]=0u+0x00000393u; // 80051DC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051DCC
  c->lr=0x80051DD4u; f_80045D00(c); // 80051DD0
L_80051DD4:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 80051DD4
  if (crb(c,0)) { goto L_80051DEC; } // 80051DD8
  c->r[3]=R32(c->r[27]+0x00000034u); // 80051DDC
  c->r[0]=c->r[3]+0x00000020u; // 80051DE0
  cmpu(c,0,c->r[4],c->r[0]); // 80051DE4
  if (crb(c,0)) { goto L_80051E04; } // 80051DE8
L_80051DEC:;
  c->r[5]=0u+0x80140000u; // 80051DEC
  c->r[3]=c->r[13]+0xFFFF8160u; // 80051DF0
  c->r[5]=c->r[5]+0x00005ADCu; // 80051DF4
  c->r[4]=0u+0x00000399u; // 80051DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051DFC
  c->lr=0x80051E04u; f_80045D00(c); // 80051E00
L_80051E04:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 80051E04
  c->r[0]=sraw(c,c->r[31],2); // 80051E08
  c->r[7]=0u+0x80050000u; // 80051E0C
  c->r[3]=c->r[27]|c->r[27]; // 80051E10
  c->r[4]=c->r[28]|c->r[28]; // 80051E14
  c->r[5]=c->r[29]|c->r[29]; // 80051E18
  c->r[8]=c->r[30]|c->r[30]; // 80051E1C
  c->r[6]=c->r[6]+c->r[0]; // 80051E20
  c->r[7]=c->r[7]+0x00001EB0u; // 80051E24
  c->lr=0x80051E2Cu; f_80055F20(c); // 80051E28
  cmps(c,0,(int32_t)c->r[3],0); // 80051E2C
  if (!crb(c,2)) { goto L_80051E3C; } // 80051E30
  c->r[3]=0u+0xFFFFFFFFu; // 80051E34
  goto L_80051E90; // 80051E38
L_80051E3C:;
  c->lr=0x80051E40u; f_80049A20(c); // 80051E3C
  c->r[31]=c->r[3]|c->r[3]; // 80051E40
L_80051E44:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80051E44
  cmps(c,0,(int32_t)c->r[0],0); // 80051E48
  if (!crb(c,2)) { goto L_80051E58; } // 80051E4C
  c->r[30]=R32(c->r[27]+0x00000020u); // 80051E50
  goto L_80051E84; // 80051E54
L_80051E58:;
  cmps(c,0,(int32_t)c->r[0],-1); // 80051E58
  if (!crb(c,2)) { goto L_80051E68; } // 80051E5C
  c->r[30]=0u+0xFFFFFFFFu; // 80051E60
  goto L_80051E84; // 80051E64
L_80051E68:;
  cmps(c,0,(int32_t)c->r[0],10); // 80051E68
  if (!crb(c,2)) { goto L_80051E78; } // 80051E6C
  c->r[30]=0u+0xFFFFFFFDu; // 80051E70
  goto L_80051E84; // 80051E74
L_80051E78:;
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 80051E78
  c->lr=0x80051E80u; f_8004D780(c); // 80051E7C
  IRQCHK(c); goto L_80051E44; // 80051E80
L_80051E84:;
  c->r[3]=c->r[31]|c->r[31]; // 80051E84
  c->lr=0x80051E8Cu; f_80049A60(c); // 80051E88
  c->r[3]=c->r[30]|c->r[30]; // 80051E8C
L_80051E90:;
  c->r[11]=c->r[1]+0x00000020u; // 80051E90
  c->lr=0x80051E98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80051E94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051E98
  c->lr=c->r[0]; // 80051E9C
  c->r[1]=c->r[1]+0x00000020u; // 80051EA0
  return; // 80051EA4
}

// fn_80051EB0
void f_80051EB0(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 80051EB0
  f_8004D870(c); return; // 80051EB4
}

// fn_80051EC0
void f_80051EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051EC0
  c->r[0]=c->lr; // 80051EC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80051EC8
  c->r[11]=c->r[1]+0x00000020u; // 80051ECC
  c->lr=0x80051ED4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80051ED0
  c->r[27]=c->r[3]|c->r[3]; // 80051ED4
  c->r[28]=c->r[4]|c->r[4]; // 80051ED8
  c->r[29]=c->r[5]|c->r[5]; // 80051EDC
  c->lr=0x80051EE4u; f_80049A20(c); // 80051EE0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80051EE4
  c->r[31]=c->r[3]|c->r[3]; // 80051EE8
  cmpu(c,0,c->r[0],0x00000005u); // 80051EEC
  if (crb(c,0)) { goto L_80051EFC; } // 80051EF0
  c->r[0]=0u+0x00000000u; // 80051EF4
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80051EF8
L_80051EFC:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80051EFC
  c->r[30]=0u+0x801A0000u; // 80051F00
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80051F04
  c->r[30]=c->r[30]+0x000006C0u; // 80051F08
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80051F0C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80051F10
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80051F14
  c->r[4]=c->r[30]+c->r[4]; // 80051F18
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 80051F1C
  c->r[3]=c->r[30]+c->r[3]; // 80051F20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80051F24
  W32(c->r[3]+0x00000020u,c->r[28]); // 80051F28
  c->r[3]=c->r[30]+c->r[0]; // 80051F2C
  W32(c->r[3]+0x00000024u,c->r[29]); // 80051F30
  c->lr=0x80051F38u; f_8004DAC0(c); // 80051F34
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80051F38
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80051F3C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80051F40
  c->r[0]=c->r[4]+0x00000001u; // 80051F44
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80051F48
  c->r[4]=c->r[30]+c->r[5]; // 80051F4C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80051F50
  c->r[3]=c->r[31]|c->r[31]; // 80051F54
  c->lr=0x80051F5Cu; f_80049A60(c); // 80051F58
  c->r[11]=c->r[1]+0x00000020u; // 80051F5C
  c->lr=0x80051F64u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80051F60
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051F64
  c->lr=c->r[0]; // 80051F68
  c->r[1]=c->r[1]+0x00000020u; // 80051F6C
  return; // 80051F70
}

// fn_80051F80
void f_80051F80(Ctx* __restrict c) {
  return; // 80051F80
}

// DVDInit
void f_80051F90(Ctx* __restrict c) {
  trace_call(0x80051F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051F90
  c->r[0]=c->lr; // 80051F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051F9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80051FA0
  c->r[0]=R32(c->r[13]+0xFFFF8C5Cu); // 80051FA4
  cmps(c,0,(int32_t)c->r[0],0); // 80051FA8
  if (!crb(c,2)) { goto L_800520CC; } // 80051FAC
  c->r[3]=R32(c->r[13]+0xFFFF8168u); // 80051FB0
  c->lr=0x80051FB8u; f_80043D50(c); // 80051FB4
  c->r[0]=0u+0x00000001u; // 80051FB8
  W32(c->r[13]+0xFFFF8C5Cu,c->r[0]); // 80051FBC
  c->lr=0x80051FC4u; f_80057E50(c); // 80051FC0
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 80051FC4
  cmps(c,0,(int32_t)c->r[0],0); // 80051FC8
  if (!crb(c,2)) { goto L_8005202C; } // 80051FCC
  c->r[3]=0u+0x80000000u; // 80051FD0
  c->r[0]=R8(c->r[3]+0x00003187u); // 80051FD4
  cmpu(c,0,c->r[0],0x00000080u); // 80051FD8
  if (!crb(c,2)) { goto L_8005202C; } // 80051FDC
  c->lr=0x80051FE4u; f_800DB3E0(c); // 80051FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80051FE4
  if (!crb(c,2)) { goto L_80051FFC; } // 80051FE8
  c->r[4]=0u+0x801A0000u; // 80051FEC
  c->r[3]=0u+0x00000000u; // 80051FF0
  c->r[4]=c->r[4]+0xFFFFB880u; // 80051FF4
  c->lr=0x80051FFCu; f_800DB650(c); // 80051FF8
L_80051FFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80051FFC
  if (!crb(c,2)) { goto L_80052010; } // 80052000
  c->r[3]=0u+0x00000000u; // 80052004
  c->r[4]=c->r[13]+0xFFFF8C80u; // 80052008
  c->lr=0x80052010u; f_800DB700(c); // 8005200C
L_80052010:;
  cmps(c,0,(int32_t)c->r[3],0); // 80052010
  if (!crb(c,2)) { goto L_80052028; } // 80052014
  c->r[3]=0u+0x801A0000u; // 80052018
  c->r[4]=c->r[13]+0xFFFF8C80u; // 8005201C
  c->r[3]=c->r[3]+0xFFFFB980u; // 80052020
  c->lr=0x80052028u; f_800DB700(c); // 80052024
L_80052028:;
  c->lr=0x8005202Cu; f_800DB440(c); // 80052028
L_8005202C:;
  c->lr=0x80052030u; f_80051690(c); // 8005202C
  c->lr=0x80052034u; f_80056AF0(c); // 80052030
  c->r[0]=0u+0x80000000u; // 80052034
  c->r[3]=0u+0x00000000u; // 80052038
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 8005203C
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 80052040
  W32(c->r[13]+0xFFFF8CA8u,c->r[0]); // 80052044
  W32(c->r[13]+0xFFFF8CACu,c->r[0]); // 80052048
  c->lr=0x80052050u; f_8004C6F0(c); // 8005204C
  c->lr=0x80052054u; f_8005A190(c); // 80052050
  c->lr=0x80052058u; f_8005A1A0(c); // 80052054
  c->r[3]=R32(c->r[13]+0xFFFF8CA8u); // 80052058
  c->r[3]=R32(c->r[3]+0x00000020u); // 8005205C
  c->r[0]=c->r[3]+0x1AE00000u; // 80052060
  cmpu(c,0,c->r[0],0x00007C22u); // 80052064
  if (crb(c,2)) { goto L_80052080; } // 80052068
  c->r[0]=c->r[3]+0xF2EB0000u; // 8005206C
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 80052070
  if (crb(c,2)) { goto L_80052080; } // 80052074
  c->r[0]=0u+0x00000001u; // 80052078
  W32(c->r[13]+0xFFFF8C3Cu,c->r[0]); // 8005207C
L_80052080:;
  c->r[31]=0u+0x801A0000u; // 80052080
  c->r[4]=0u+0x00000000u; // 80052084
  c->r[3]=c->r[31]+0x000006C0u; // 80052088
  c->r[5]=0u+0x00000080u; // 8005208C
  c->lr=0x80052094u; f_80004714(c); // 80052090
  c->r[30]=0u+0x80000000u; // 80052094
  c->r[3]=c->r[31]+0x000006C0u; // 80052098
  c->r[4]=c->r[30]|c->r[30]; // 8005209C
  c->r[5]=0u+0x00000004u; // 800520A0
  c->lr=0x800520A8u; f_800043C4(c); // 800520A4
  c->r[5]=c->r[31]+0x000006C0u; // 800520A8
  c->r[0]=R8(c->r[30]+0x00000006u); // 800520AC
  W8(c->r[5]+0x00000004u,c->r[0]); // 800520B0
  c->r[0]=0u+0x00000000u; // 800520B4
  c->r[3]=0u+0x00000001u; // 800520B8
  c->r[4]=R8(c->r[30]+0x00000007u); // 800520BC
  W8(c->r[5]+0x00000005u,c->r[4]); // 800520C0
  W32(c->r[13]+0xFFFF8C58u,c->r[0]); // 800520C4
  c->lr=0x800520CCu; f_80057950(c); // 800520C8
L_800520CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800520CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800520D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800520D4
  c->lr=c->r[0]; // 800520D8
  c->r[1]=c->r[1]+0x00000010u; // 800520DC
  return; // 800520E0
}

// stateReadingFST
void f_800520F0(Ctx* __restrict c) {
  trace_call(0x800520F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800520F0
  c->r[0]=c->lr; // 800520F4
  c->r[4]=0u+0x80050000u; // 800520F8
  c->r[3]=0u+0x801A0000u; // 800520FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052100
  c->r[4]=c->r[4]+0x000020F0u; // 80052104
  c->r[3]=c->r[3]+0x00000380u; // 80052108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005210C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80052110
  W32(c->r[1]+0x00000014u,c->r[29]); // 80052114
  W32(c->r[1]+0x00000010u,c->r[28]); // 80052118
  W32(c->r[13]+0xFFFF8CB4u,c->r[4]); // 8005211C
  c->r[4]=R32(c->r[13]+0xFFFF8CA8u); // 80052120
  c->r[0]=R32(c->r[3]+0x00000008u); // 80052124
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 80052128
  cmpu(c,0,c->r[3],c->r[0]); // 8005212C
  if (!crb(c,0)) { goto L_8005214C; } // 80052130
  c->r[5]=0u+0x80140000u; // 80052134
  c->r[3]=c->r[13]+0xFFFF8174u; // 80052138
  c->r[5]=c->r[5]+0x00005B58u; // 8005213C
  c->r[4]=0u+0x00000445u; // 80052140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052144
  c->lr=0x8005214Cu; f_80045D00(c); // 80052148
L_8005214C:;
  c->r[3]=0u+0x00000000u; // 8005214C
  c->lr=0x80052154u; f_8005A1B0(c); // 80052150
  c->r[3]=R32(c->r[13]+0xFFFF8C58u); // 80052154
  c->r[6]=0u+0x801A0000u; // 80052158
  c->r[6]=c->r[6]+0x00000380u; // 8005215C
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 80052160
  c->r[3]=~(c->r[3]|c->r[3]); // 80052164
  c->r[5]=R32(c->r[6]+0x00000008u); // 80052168
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 8005216C
  c->r[3]=R32(c->r[6]+0x00000004u); // 80052170
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80052174
  c->r[4]=c->r[4]+0x0000001Fu; // 80052178
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8005217C
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80052180
  c->lr=0x80052188u; f_80049A20(c); // 80052184
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052188
  c->r[31]=c->r[3]|c->r[3]; // 8005218C
  cmpu(c,0,c->r[0],0x00000005u); // 80052190
  if (crb(c,0)) { goto L_800521A0; } // 80052194
  c->r[0]=0u+0x00000000u; // 80052198
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005219C
L_800521A0:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800521A0
  c->r[30]=0u+0x801A0000u; // 800521A4
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800521A8
  c->r[30]=c->r[30]+0x000006C0u; // 800521AC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800521B0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800521B4
  c->r[5]=0u+0x00000001u; // 800521B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800521BC
  c->r[4]=c->r[30]+c->r[4]; // 800521C0
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 800521C4
  c->r[3]=c->r[30]+c->r[3]; // 800521C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800521CC
  W32(c->r[3]+0x00000020u,c->r[29]); // 800521D0
  c->r[3]=c->r[30]+c->r[0]; // 800521D4
  W32(c->r[3]+0x00000024u,c->r[28]); // 800521D8
  c->lr=0x800521E0u; f_8004DAC0(c); // 800521DC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800521E0
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800521E4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800521E8
  c->r[0]=c->r[4]+0x00000001u; // 800521EC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800521F0
  c->r[4]=c->r[30]+c->r[5]; // 800521F4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800521F8
  c->r[3]=c->r[31]|c->r[31]; // 800521FC
  c->lr=0x80052204u; f_80049A60(c); // 80052200
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 80052204
  c->r[4]=0u+0x801A0000u; // 80052208
  c->r[4]=c->r[4]+0x00000380u; // 8005220C
  c->r[6]=0u+0x80050000u; // 80052210
  c->r[0]=~(c->r[0]|c->r[0]); // 80052214
  c->r[3]=R32(c->r[4]+0x00000008u); // 80052218
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8005221C
  c->r[7]=R32(c->r[13]+0xFFFF8CA8u); // 80052220
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80052224
  c->r[5]=R32(c->r[4]+0x00000004u); // 80052228
  c->r[4]=c->r[3]+0x0000001Fu; // 8005222C
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 80052230
  c->r[3]=R32(c->r[7]+0x00000038u); // 80052234
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80052238
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 8005223C
  c->r[6]=c->r[6]+0x00002270u; // 80052240
  c->lr=0x80052248u; f_800599D0(c); // 80052244
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005224C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052250
  c->r[29]=R32(c->r[1]+0x00000014u); // 80052254
  c->r[28]=R32(c->r[1]+0x00000010u); // 80052258
  c->lr=c->r[0]; // 8005225C
  c->r[1]=c->r[1]+0x00000020u; // 80052260
  return; // 80052264
}

// cbForStateReadingFST
void f_80052270(Ctx* __restrict c) {
  trace_call(0x80052270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052270
  c->r[0]=c->lr; // 80052274
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005227C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052280
  c->r[30]=c->r[3]|c->r[3]; // 80052284
  c->lr=0x8005228Cu; f_80049A20(c); // 80052288
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005228C
  cmps(c,0,(int32_t)c->r[0],0); // 80052290
  if (!crb(c,2)) { goto L_800522A8; } // 80052294
  c->r[4]=0u+0x801A0000u; // 80052298
  c->r[4]=c->r[4]+0x000006C0u; // 8005229C
  W32(c->r[4]+0x00000078u,c->r[30]); // 800522A0
  goto L_800522C0; // 800522A4
L_800522A8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800522A8
  c->r[4]=0u+0x801A0000u; // 800522AC
  c->r[4]=c->r[4]+0x000006C0u; // 800522B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800522B4
  c->r[4]=c->r[4]+c->r[0]; // 800522B8
  W32(c->r[4]+0x00000014u,c->r[30]); // 800522BC
L_800522C0:;
  c->lr=0x800522C4u; f_80049A60(c); // 800522C0
  cmpu(c,0,c->r[30],0x00000010u); // 800522C4
  if (!crb(c,2)) { goto L_800522E4; } // 800522C8
  c->r[3]=0u+0x01230000u; // 800522CC
  c->r[4]=0u+0x80050000u; // 800522D0
  c->r[3]=c->r[3]+0x00004568u; // 800522D4
  c->r[4]=c->r[4]+0x00002540u; // 800522D8
  c->lr=0x800522E0u; f_80057720(c); // 800522DC
  goto L_800523DC; // 800522E0
L_800522E4:;
  cmpu(c,0,c->r[30],0x00000020u); // 800522E4
  if (!crb(c,2)) { goto L_80052304; } // 800522E8
  c->r[3]=0u+0x01230000u; // 800522EC
  c->r[4]=0u+0x80050000u; // 800522F0
  c->r[3]=c->r[3]+0x00004569u; // 800522F4
  c->r[4]=c->r[4]+0x00002540u; // 800522F8
  c->lr=0x80052300u; f_80057720(c); // 800522FC
  goto L_800523DC; // 80052300
L_80052304:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80052304
  if (crb(c,2)) { goto L_8005234C; } // 80052308
  c->r[30]=0u+0x00000000u; // 8005230C
  W32(c->r[13]+0xFFFF8C38u,c->r[30]); // 80052310
  c->lr=0x80052318u; f_80051690(c); // 80052314
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80052318
  c->r[3]=0u+0x801A0000u; // 8005231C
  c->r[3]=c->r[3]+0x000003A0u; // 80052320
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80052324
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 80052328
  c->r[12]=R32(c->r[4]+0x00000028u); // 8005232C
  cmps(c,0,(int32_t)c->r[12],0); // 80052330
  if (crb(c,2)) { goto L_80052344; } // 80052334
  c->r[3]=0u+0x00000000u; // 80052338
  c->ctr=c->r[12]; // 8005233C
  if (true) { c->lr=0x80052344u; dispatch(c,c->ctr); } // 80052340
L_80052344:;
  c->lr=0x80052348u; f_80054C70(c); // 80052344
  goto L_800523DC; // 80052348
L_8005234C:;
  c->lr=0x80052350u; f_80049A20(c); // 8005234C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052350
  c->r[31]=c->r[3]|c->r[3]; // 80052354
  cmpu(c,0,c->r[0],0x00000005u); // 80052358
  if (crb(c,0)) { goto L_80052368; } // 8005235C
  c->r[0]=0u+0x00000000u; // 80052360
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052364
L_80052368:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052368
  c->r[30]=0u+0x801A0000u; // 8005236C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80052370
  c->r[30]=c->r[30]+0x000006C0u; // 80052374
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052378
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005237C
  c->r[6]=0u+0x00000027u; // 80052380
  c->r[4]=0u+0x00000000u; // 80052384
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80052388
  c->r[5]=c->r[30]+c->r[5]; // 8005238C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80052390
  c->r[3]=c->r[30]+c->r[3]; // 80052394
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052398
  W32(c->r[3]+0x00000020u,c->r[4]); // 8005239C
  c->r[3]=c->r[30]+c->r[0]; // 800523A0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800523A4
  c->lr=0x800523ACu; f_8004DAC0(c); // 800523A8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800523AC
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800523B0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800523B4
  c->r[0]=c->r[4]+0x00000001u; // 800523B8
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800523BC
  c->r[4]=c->r[30]+c->r[5]; // 800523C0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800523C4
  c->r[3]=c->r[31]|c->r[31]; // 800523C8
  c->lr=0x800523D0u; f_80049A60(c); // 800523CC
  c->r[3]=0u+0x80050000u; // 800523D0
  c->r[3]=c->r[3]+0x00002750u; // 800523D4
  c->lr=0x800523DCu; f_80059200(c); // 800523D8
L_800523DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800523DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800523E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800523E4
  c->lr=c->r[0]; // 800523E8
  c->r[1]=c->r[1]+0x00000010u; // 800523EC
  return; // 800523F0
}

// fn_80052400
void f_80052400(Ctx* __restrict c) {
  f_800579D0(c); return; // 80052400
}

// cbForStateError
void f_80052410(Ctx* __restrict c) {
  trace_call(0x80052410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052410
  c->r[0]=c->lr; // 80052414
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005241C
  c->r[31]=c->r[3]|c->r[3]; // 80052420
  c->lr=0x80052428u; f_800579B0(c); // 80052424
  cmps(c,0,(int32_t)c->r[3],0); // 80052428
  if (crb(c,2)) { goto L_80052458; } // 8005242C
  c->r[31]=0u+0x801A0000u; // 80052430
  c->r[3]=c->r[31]+0x000003D0u; // 80052434
  c->lr=0x8005243Cu; f_80043E70(c); // 80052438
  c->r[7]=0u+0x80050000u; // 8005243C
  c->r[3]=c->r[31]+0x000003D0u; // 80052440
  c->r[7]=c->r[7]+0x00002400u; // 80052444
  c->r[6]=0u+0x00000001u; // 80052448
  c->r[5]=0u+0x00000000u; // 8005244C
  c->lr=0x80052454u; f_800440D0(c); // 80052450
  goto L_8005250C; // 80052454
L_80052458:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80052458
  c->r[0]=0u+0xFFFFFFFFu; // 8005245C
  cmpu(c,0,c->r[31],0x00000010u); // 80052460
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80052464
  if (!crb(c,2)) { goto L_80052484; } // 80052468
  c->r[3]=0u+0x01230000u; // 8005246C
  c->r[4]=0u+0x80050000u; // 80052470
  c->r[3]=c->r[3]+0x00004568u; // 80052474
  c->r[4]=c->r[4]+0x00002540u; // 80052478
  c->lr=0x80052480u; f_80057720(c); // 8005247C
  goto L_8005250C; // 80052480
L_80052484:;
  cmpu(c,0,c->r[31],0x00000020u); // 80052484
  if (!crb(c,2)) { goto L_800524A4; } // 80052488
  c->r[3]=0u+0x01230000u; // 8005248C
  c->r[4]=0u+0x80050000u; // 80052490
  c->r[3]=c->r[3]+0x00004569u; // 80052494
  c->r[4]=c->r[4]+0x00002540u; // 80052498
  c->lr=0x800524A0u; f_80057720(c); // 8005249C
  goto L_8005250C; // 800524A0
L_800524A4:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 800524A4
  c->r[3]=0u+0x801A0000u; // 800524A8
  c->r[3]=c->r[3]+0x000003A0u; // 800524AC
  c->r[0]=0u+0x00000001u; // 800524B0
  W32(c->r[13]+0xFFFF8C2Cu,c->r[0]); // 800524B4
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800524B8
  c->r[12]=R32(c->r[31]+0x00000028u); // 800524BC
  cmps(c,0,(int32_t)c->r[12],0); // 800524C0
  if (crb(c,2)) { goto L_800524D8; } // 800524C4
  c->r[4]=c->r[31]|c->r[31]; // 800524C8
  c->r[3]=0u+0xFFFFFFFFu; // 800524CC
  c->ctr=c->r[12]; // 800524D0
  if (true) { c->lr=0x800524D8u; dispatch(c,c->ctr); } // 800524D4
L_800524D8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 800524D8
  cmps(c,0,(int32_t)c->r[0],0); // 800524DC
  if (crb(c,2)) { goto L_80052508; } // 800524E0
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 800524E4
  c->r[0]=0u+0x00000000u; // 800524E8
  W32(c->r[13]+0xFFFF8C30u,c->r[0]); // 800524EC
  cmps(c,0,(int32_t)c->r[12],0); // 800524F0
  if (crb(c,2)) { goto L_80052508; } // 800524F4
  c->r[4]=c->r[31]|c->r[31]; // 800524F8
  c->r[3]=0u+0x00000000u; // 800524FC
  c->ctr=c->r[12]; // 80052500
  if (true) { c->lr=0x80052508u; dispatch(c,c->ctr); } // 80052504
L_80052508:;
  c->lr=0x8005250Cu; f_80054C70(c); // 80052508
L_8005250C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005250C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052510
  c->lr=c->r[0]; // 80052514
  c->r[1]=c->r[1]+0x00000010u; // 80052518
  return; // 8005251C
}

// cbForStoreErrorCode1
void f_80052520(Ctx* __restrict c) {
  trace_call(0x80052520u);
  c->r[5]=0u+0x80050000u; // 80052520
  c->r[3]=0u+0x00000000u; // 80052524
  c->r[5]=c->r[5]+0x00002410u; // 80052528
  c->r[4]=0u+0x00000000u; // 8005252C
  f_80058EF0(c); return; // 80052530
}

// cbForStoreErrorCode2
void f_80052540(Ctx* __restrict c) {
  trace_call(0x80052540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052540
  c->r[0]=c->lr; // 80052544
  c->r[3]=0u+0x00000000u; // 80052548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005254C
  c->lr=0x80052554u; f_80059370(c); // 80052550
  c->r[3]=0u+0x80050000u; // 80052554
  c->r[3]=c->r[3]+0x00002410u; // 80052558
  c->lr=0x80052560u; f_80059380(c); // 8005255C
  c->r[0]=0u+0x00000000u; // 80052560
  W32(c->r[13]+0xFFFF8C94u,c->r[0]); // 80052564
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80052568
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005256C
  c->lr=c->r[0]; // 80052570
  c->r[1]=c->r[1]+0x00000010u; // 80052574
  return; // 80052578
}

// CategorizeError
void f_80052580(Ctx* __restrict c) {
  trace_call(0x80052580u);
  c->r[0]=c->r[3]+0xFFFE0000u; // 80052580
  cmpu(c,0,c->r[0],0x00000400u); // 80052584
  if (!crb(c,2)) { goto L_80052598; } // 80052588
  W32(c->r[13]+0xFFFF8C98u,c->r[3]); // 8005258C
  c->r[3]=0u+0x00000001u; // 80052590
  return; // 80052594
L_80052598:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 80052598
  c->r[0]=c->r[4]+0xFFFA0000u; // 8005259C
  cmpu(c,0,c->r[0],0x00002800u); // 800525A0
  if (crb(c,2)) { goto L_800525CC; } // 800525A4
  c->r[0]=c->r[4]+0xFFFE0000u; // 800525A8
  cmpu(c,0,c->r[0],0x00003A00u); // 800525AC
  if (crb(c,2)) { goto L_800525CC; } // 800525B0
  c->r[3]=c->r[4]+0xFFFB0000u; // 800525B4
  cmpu(c,0,c->r[3],0x00003000u); // 800525B8
  if (crb(c,2)) { goto L_800525CC; } // 800525BC
  c->r[0]=c->r[4]+0xFFF50000u; // 800525C0
  cmpu(c,0,c->r[0],0x00005A01u); // 800525C4
  if (!crb(c,2)) { goto L_800525D4; } // 800525C8
L_800525CC:;
  c->r[3]=0u+0x00000000u; // 800525CC
  return; // 800525D0
L_800525D4:;
  cmpu(c,0,c->r[3],0x00002000u); // 800525D4
  if (!crb(c,2)) { goto L_80052608; } // 800525D8
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800525DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800525E0
  cmpu(c,0,c->r[0],0x00000025u); // 800525E4
  if (crb(c,2)) { goto L_80052600; } // 800525E8
  c->r[3]=0u+0x80050000u; // 800525EC
  c->r[0]=R32(c->r[13]+0xFFFF8CB4u); // 800525F0
  c->r[3]=c->r[3]+0x00004540u; // 800525F4
  cmpu(c,0,c->r[0],c->r[3]); // 800525F8
  if (!crb(c,2)) { goto L_80052608; } // 800525FC
L_80052600:;
  c->r[3]=0u+0x00000000u; // 80052600
  return; // 80052604
L_80052608:;
  c->r[3]=R32(c->r[13]+0xFFFF8C38u); // 80052608
  c->r[0]=c->r[3]+0x00000001u; // 8005260C
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 80052610
  c->r[0]=R32(c->r[13]+0xFFFF8C38u); // 80052614
  cmps(c,0,(int32_t)c->r[0],2); // 80052618
  if (!crb(c,2)) { goto L_80052644; } // 8005261C
  c->r[0]=R32(c->r[13]+0xFFFF8C98u); // 80052620
  cmpu(c,0,c->r[4],c->r[0]); // 80052624
  if (!crb(c,2)) { goto L_80052638; } // 80052628
  W32(c->r[13]+0xFFFF8C98u,c->r[4]); // 8005262C
  c->r[3]=0u+0x00000001u; // 80052630
  return; // 80052634
L_80052638:;
  W32(c->r[13]+0xFFFF8C98u,c->r[4]); // 80052638
  c->r[3]=0u+0x00000002u; // 8005263C
  return; // 80052640
L_80052644:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 80052644
  W32(c->r[13]+0xFFFF8C98u,c->r[4]); // 80052648
  cmpu(c,0,c->r[0],0x00001100u); // 8005264C
  if (crb(c,2)) { goto L_80052664; } // 80052650
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80052654
  c->r[0]=R32(c->r[3]+0x00000008u); // 80052658
  cmpu(c,0,c->r[0],0x00000005u); // 8005265C
  if (!crb(c,2)) { goto L_8005266C; } // 80052660
L_80052664:;
  c->r[3]=0u+0x00000002u; // 80052664
  return; // 80052668
L_8005266C:;
  c->r[3]=0u+0x00000003u; // 8005266C
  return; // 80052670
}

// cbForStoreErrorCode3
void f_80052680(Ctx* __restrict c) {
  trace_call(0x80052680u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052680
  c->r[0]=c->lr; // 80052684
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005268C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052690
  c->lr=0x80052698u; f_80049A20(c); // 80052694
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052698
  c->r[31]=c->r[3]|c->r[3]; // 8005269C
  cmpu(c,0,c->r[0],0x00000005u); // 800526A0
  if (crb(c,0)) { goto L_800526B0; } // 800526A4
  c->r[0]=0u+0x00000000u; // 800526A8
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800526AC
L_800526B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800526B0
  c->r[30]=0u+0x801A0000u; // 800526B4
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800526B8
  c->r[30]=c->r[30]+0x000006C0u; // 800526BC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800526C0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800526C4
  c->r[6]=0u+0x00000010u; // 800526C8
  c->r[4]=0u+0x00000000u; // 800526CC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800526D0
  c->r[5]=c->r[30]+c->r[5]; // 800526D4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800526D8
  c->r[3]=c->r[30]+c->r[3]; // 800526DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800526E0
  W32(c->r[3]+0x00000020u,c->r[4]); // 800526E4
  c->r[3]=c->r[30]+c->r[0]; // 800526E8
  W32(c->r[3]+0x00000024u,c->r[4]); // 800526EC
  c->lr=0x800526F4u; f_8004DAC0(c); // 800526F0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800526F4
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800526F8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800526FC
  c->r[0]=c->r[4]+0x00000001u; // 80052700
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052704
  c->r[4]=c->r[30]+c->r[5]; // 80052708
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8005270C
  c->r[3]=c->r[31]|c->r[31]; // 80052710
  c->lr=0x80052718u; f_80049A60(c); // 80052714
  c->r[5]=0u+0x80050000u; // 80052718
  c->r[3]=0u+0x00000000u; // 8005271C
  c->r[5]=c->r[5]+0x00002F20u; // 80052720
  c->r[4]=0u+0x00000000u; // 80052724
  c->lr=0x8005272Cu; f_80058EF0(c); // 80052728
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005272C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052730
  c->r[30]=R32(c->r[1]+0x00000008u); // 80052734
  c->lr=c->r[0]; // 80052738
  c->r[1]=c->r[1]+0x00000010u; // 8005273C
  return; // 80052740
}

// cbForStateGettingError
void f_80052750(Ctx* __restrict c) {
  trace_call(0x80052750u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052750
  c->r[0]=c->lr; // 80052754
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052758
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005275C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80052760
  W32(c->r[1]+0x00000014u,c->r[29]); // 80052764
  W32(c->r[1]+0x00000010u,c->r[28]); // 80052768
  c->r[28]=c->r[3]|c->r[3]; // 8005276C
  c->lr=0x80052774u; f_80049A20(c); // 80052770
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052774
  cmps(c,0,(int32_t)c->r[0],0); // 80052778
  if (!crb(c,2)) { goto L_80052790; } // 8005277C
  c->r[4]=0u+0x801A0000u; // 80052780
  c->r[4]=c->r[4]+0x000006C0u; // 80052784
  W32(c->r[4]+0x00000078u,c->r[28]); // 80052788
  goto L_800527A8; // 8005278C
L_80052790:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052790
  c->r[4]=0u+0x801A0000u; // 80052794
  c->r[4]=c->r[4]+0x000006C0u; // 80052798
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005279C
  c->r[4]=c->r[4]+c->r[0]; // 800527A0
  W32(c->r[4]+0x00000014u,c->r[28]); // 800527A4
L_800527A8:;
  c->lr=0x800527ACu; f_80049A60(c); // 800527A8
  cmpu(c,0,c->r[28],0x00000010u); // 800527AC
  if (!crb(c,2)) { goto L_800527CC; } // 800527B0
  c->r[3]=0u+0x01230000u; // 800527B4
  c->r[4]=0u+0x80050000u; // 800527B8
  c->r[3]=c->r[3]+0x00004568u; // 800527BC
  c->r[4]=c->r[4]+0x00002540u; // 800527C0
  c->lr=0x800527C8u; f_80057720(c); // 800527C4
  goto L_80052C34; // 800527C8
L_800527CC:;
  cmpu(c,0,c->r[28],0x00000020u); // 800527CC
  if (!crb(c,2)) { goto L_800527EC; } // 800527D0
  c->r[3]=0u+0x01230000u; // 800527D4
  c->r[4]=0u+0x80050000u; // 800527D8
  c->r[3]=c->r[3]+0x00004569u; // 800527DC
  c->r[4]=c->r[4]+0x00002540u; // 800527E0
  c->lr=0x800527E8u; f_80057720(c); // 800527E4
  goto L_80052C34; // 800527E8
L_800527EC:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 800527EC
  if (crb(c,2)) { goto L_8005280C; } // 800527F0
  c->r[3]=0u+0x01230000u; // 800527F4
  c->r[4]=0u+0x80050000u; // 800527F8
  c->r[3]=c->r[3]+0x00004567u; // 800527FC
  c->r[4]=c->r[4]+0x00002520u; // 80052800
  c->lr=0x80052808u; f_80057720(c); // 80052804
  goto L_80052C34; // 80052808
L_8005280C:;
  c->lr=0x80052810u; f_8005A180(c); // 8005280C
  c->r[29]=c->r[3]|c->r[3]; // 80052810
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 80052814
  c->lr=0x8005281Cu; f_80052580(c); // 80052818
  cmpu(c,0,c->r[3],0x00000001u); // 8005281C
  c->r[30]=c->r[3]|c->r[3]; // 80052820
  if (!crb(c,2)) { goto L_8005283C; } // 80052824
  c->r[4]=0u+0x80050000u; // 80052828
  c->r[3]=c->r[29]|c->r[29]; // 8005282C
  c->r[4]=c->r[4]+0x00002520u; // 80052830
  c->lr=0x80052838u; f_80057720(c); // 80052834
  goto L_80052C34; // 80052838
L_8005283C:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8005283C
  cmpu(c,0,c->r[0],0x00000001u); // 80052840
  if (crb(c,1)) { goto L_80052850; } // 80052844
  c->r[4]=0u+0x00000000u; // 80052848
  goto L_800528B4; // 8005284C
L_80052850:;
  c->r[0]=c->r[28]+0xFF000000u; // 80052850
  cmpu(c,0,c->r[0],0x00000000u); // 80052854
  if (!crb(c,2)) { goto L_80052864; } // 80052858
  c->r[4]=0u+0x00000004u; // 8005285C
  goto L_800528B4; // 80052860
L_80052864:;
  c->r[0]=c->r[28]+0xFE000000u; // 80052864
  cmpu(c,0,c->r[0],0x00000000u); // 80052868
  if (!crb(c,2)) { goto L_80052878; } // 8005286C
  c->r[4]=0u+0x00000006u; // 80052870
  goto L_800528B4; // 80052874
L_80052878:;
  c->r[0]=c->r[28]+0xFD000000u; // 80052878
  cmpu(c,0,c->r[0],0x00000000u); // 8005287C
  if (!crb(c,2)) { goto L_8005288C; } // 80052880
  c->r[4]=0u+0x00000003u; // 80052884
  goto L_800528B4; // 80052888
L_8005288C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8005288C
  if (!crb(c,2)) { goto L_800528B0; } // 80052890
  c->r[0]=c->r[29]+0xFFFB0000u; // 80052894
  cmpu(c,0,c->r[0],0x00003000u); // 80052898
  if (!crb(c,2)) { goto L_800528A8; } // 8005289C
  c->r[4]=0u+0x00000001u; // 800528A0
  goto L_800528B4; // 800528A4
L_800528A8:;
  c->r[4]=0u+0x00000005u; // 800528A8
  goto L_800528B4; // 800528AC
L_800528B0:;
  c->r[4]=0u+0x00000005u; // 800528B0
L_800528B4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 800528B4
  cmps(c,0,(int32_t)c->r[0],0); // 800528B8
  if (crb(c,2)) { goto L_80052928; } // 800528BC
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 800528C0
  c->r[3]=0u+0x801A0000u; // 800528C4
  c->r[3]=c->r[3]+0x000003A0u; // 800528C8
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 800528CC
  c->r[4]=0u+0x00000000u; // 800528D0
  c->r[0]=0u+0x0000000Au; // 800528D4
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 800528D8
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800528DC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800528E0
  c->r[12]=R32(c->r[31]+0x00000028u); // 800528E4
  cmps(c,0,(int32_t)c->r[12],0); // 800528E8
  if (crb(c,2)) { goto L_80052900; } // 800528EC
  c->r[4]=c->r[31]|c->r[31]; // 800528F0
  c->r[3]=0u+0xFFFFFFFDu; // 800528F4
  c->ctr=c->r[12]; // 800528F8
  if (true) { c->lr=0x80052900u; dispatch(c,c->ctr); } // 800528FC
L_80052900:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80052900
  cmps(c,0,(int32_t)c->r[12],0); // 80052904
  if (crb(c,2)) { goto L_8005291C; } // 80052908
  c->r[4]=c->r[31]|c->r[31]; // 8005290C
  c->r[3]=0u+0x00000000u; // 80052910
  c->ctr=c->r[12]; // 80052914
  if (true) { c->lr=0x8005291Cu; dispatch(c,c->ctr); } // 80052918
L_8005291C:;
  c->lr=0x80052920u; f_80054C70(c); // 8005291C
  c->r[0]=0u+0x00000001u; // 80052920
  goto L_8005292C; // 80052924
L_80052928:;
  c->r[0]=0u+0x00000000u; // 80052928
L_8005292C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8005292C
  if (!crb(c,2)) { goto L_80052C34; } // 80052930
  cmpu(c,0,c->r[30],0x00000002u); // 80052934
  if (!crb(c,2)) { goto L_80052950; } // 80052938
  c->r[4]=0u+0x80050000u; // 8005293C
  c->r[3]=c->r[29]|c->r[29]; // 80052940
  c->r[4]=c->r[4]+0x00002680u; // 80052944
  c->lr=0x8005294Cu; f_80057720(c); // 80052948
  goto L_80052C34; // 8005294C
L_80052950:;
  cmpu(c,0,c->r[30],0x00000003u); // 80052950
  if (!crb(c,2)) { goto L_80052A20; } // 80052954
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 80052958
  c->r[0]=c->r[3]+0xFFFD0000u; // 8005295C
  cmpu(c,0,c->r[0],0x00001100u); // 80052960
  if (!crb(c,2)) { goto L_80052A0C; } // 80052964
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80052968
  c->r[29]=R32(c->r[3]+0x00000010u); // 8005296C
  c->lr=0x80052974u; f_80049A20(c); // 80052970
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052974
  c->r[31]=c->r[3]|c->r[3]; // 80052978
  cmpu(c,0,c->r[0],0x00000005u); // 8005297C
  if (crb(c,0)) { goto L_8005298C; } // 80052980
  c->r[0]=0u+0x00000000u; // 80052984
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052988
L_8005298C:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005298C
  c->r[30]=0u+0x801A0000u; // 80052990
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80052994
  c->r[30]=c->r[30]+0x000006C0u; // 80052998
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005299C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800529A0
  c->r[6]=0u+0x00000002u; // 800529A4
  c->r[4]=0u+0x00000000u; // 800529A8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800529AC
  c->r[5]=c->r[30]+c->r[5]; // 800529B0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800529B4
  c->r[3]=c->r[30]+c->r[3]; // 800529B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800529BC
  W32(c->r[3]+0x00000020u,c->r[29]); // 800529C0
  c->r[3]=c->r[30]+c->r[0]; // 800529C4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800529C8
  c->lr=0x800529D0u; f_8004DAC0(c); // 800529CC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800529D0
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800529D4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800529D8
  c->r[0]=c->r[4]+0x00000001u; // 800529DC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800529E0
  c->r[4]=c->r[30]+c->r[5]; // 800529E4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800529E8
  c->r[3]=c->r[31]|c->r[31]; // 800529EC
  c->lr=0x800529F4u; f_80049A60(c); // 800529F0
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800529F4
  c->r[4]=0u+0x80050000u; // 800529F8
  c->r[4]=c->r[4]+0x00002C60u; // 800529FC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80052A00
  c->lr=0x80052A08u; f_80059B80(c); // 80052A04
  goto L_80052C34; // 80052A08
L_80052A0C:;
  c->r[12]=R32(c->r[13]+0xFFFF8CB4u); // 80052A0C
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80052A10
  c->ctr=c->r[12]; // 80052A14
  if (true) { c->lr=0x80052A1Cu; dispatch(c,c->ctr); } // 80052A18
  goto L_80052C34; // 80052A1C
L_80052A20:;
  c->r[0]=c->r[28]+0xFF000000u; // 80052A20
  cmpu(c,0,c->r[0],0x00000000u); // 80052A24
  if (!crb(c,2)) { goto L_80052AAC; } // 80052A28
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80052A2C
  c->r[0]=0u+0x00000005u; // 80052A30
  c->r[3]=0u+0x00000001u; // 80052A34
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80052A38
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80052A3C
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80052A40
  cmps(c,0,(int32_t)c->r[0],0); // 80052A44
  if (!crb(c,2)) { goto L_80052C34; } // 80052A48
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80052A4C
  cmps(c,0,(int32_t)c->r[0],0); // 80052A50
  if (!crb(c,2)) { goto L_80052C34; } // 80052A54
  c->r[30]=0u+0x801A0000u; // 80052A58
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80052A5C
  c->r[3]=c->r[30]+0x00000400u; // 80052A60
  c->lr=0x80052A68u; f_80043E70(c); // 80052A64
  c->lr=0x80052A6Cu; f_8004DAC0(c); // 80052A68
  c->r[5]=0u+0x80000000u; // 80052A6C
  c->r[4]=0u+0x10620000u; // 80052A70
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80052A74
  c->r[9]=0u+0x80050000u; // 80052A78
  c->r[6]=c->r[3]|c->r[3]; // 80052A7C
  c->r[4]=c->r[4]+0x00004DD3u; // 80052A80
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80052A84
  c->r[3]=c->r[30]+0x00000400u; // 80052A88
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80052A8C
  c->r[9]=c->r[9]+0x00004C40u; // 80052A90
  c->r[5]=0u+0x00000000u; // 80052A94
  c->r[7]=0u+0x00000000u; // 80052A98
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80052A9C
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80052AA0
  c->lr=0x80052AA8u; f_80044140(c); // 80052AA4
  goto L_80052C34; // 80052AA8
L_80052AAC:;
  c->r[0]=c->r[28]+0xFE000000u; // 80052AAC
  cmpu(c,0,c->r[0],0x00000000u); // 80052AB0
  if (!crb(c,2)) { goto L_80052ACC; } // 80052AB4
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80052AB8
  c->r[0]=0u+0x00000003u; // 80052ABC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80052AC0
  c->lr=0x80052AC8u; f_80054130(c); // 80052AC4
  goto L_80052C34; // 80052AC8
L_80052ACC:;
  c->r[0]=c->r[28]+0xFD000000u; // 80052ACC
  cmpu(c,0,c->r[0],0x00000000u); // 80052AD0
  if (!crb(c,2)) { goto L_80052B58; } // 80052AD4
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80052AD8
  c->r[0]=0u+0x00000004u; // 80052ADC
  c->r[3]=0u+0x00000001u; // 80052AE0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80052AE4
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80052AE8
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80052AEC
  cmps(c,0,(int32_t)c->r[0],0); // 80052AF0
  if (!crb(c,2)) { goto L_80052C34; } // 80052AF4
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80052AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80052AFC
  if (!crb(c,2)) { goto L_80052C34; } // 80052B00
  c->r[30]=0u+0x801A0000u; // 80052B04
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80052B08
  c->r[3]=c->r[30]+0x00000400u; // 80052B0C
  c->lr=0x80052B14u; f_80043E70(c); // 80052B10
  c->lr=0x80052B18u; f_8004DAC0(c); // 80052B14
  c->r[5]=0u+0x80000000u; // 80052B18
  c->r[4]=0u+0x10620000u; // 80052B1C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80052B20
  c->r[9]=0u+0x80050000u; // 80052B24
  c->r[6]=c->r[3]|c->r[3]; // 80052B28
  c->r[4]=c->r[4]+0x00004DD3u; // 80052B2C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80052B30
  c->r[3]=c->r[30]+0x00000400u; // 80052B34
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80052B38
  c->r[9]=c->r[9]+0x00004C40u; // 80052B3C
  c->r[5]=0u+0x00000000u; // 80052B40
  c->r[7]=0u+0x00000000u; // 80052B44
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80052B48
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80052B4C
  c->lr=0x80052B54u; f_80044140(c); // 80052B50
  goto L_80052C34; // 80052B54
L_80052B58:;
  cmps(c,0,(int32_t)c->r[28],0); // 80052B58
  if (!crb(c,2)) { goto L_80052C20; } // 80052B5C
  c->r[0]=c->r[29]+0xFFFB0000u; // 80052B60
  cmpu(c,0,c->r[0],0x00003000u); // 80052B64
  if (!crb(c,2)) { goto L_80052C08; } // 80052B68
  c->lr=0x80052B70u; f_80049A20(c); // 80052B6C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052B70
  c->r[31]=c->r[3]|c->r[3]; // 80052B74
  cmpu(c,0,c->r[0],0x00000005u); // 80052B78
  if (crb(c,0)) { goto L_80052B88; } // 80052B7C
  c->r[0]=0u+0x00000000u; // 80052B80
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052B84
L_80052B88:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052B88
  c->r[30]=0u+0x801A0000u; // 80052B8C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80052B90
  c->r[30]=c->r[30]+0x000006C0u; // 80052B94
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052B98
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052B9C
  c->r[6]=0u+0x00000010u; // 80052BA0
  c->r[4]=0u+0x00000000u; // 80052BA4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80052BA8
  c->r[5]=c->r[30]+c->r[5]; // 80052BAC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80052BB0
  c->r[3]=c->r[30]+c->r[3]; // 80052BB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052BB8
  W32(c->r[3]+0x00000020u,c->r[4]); // 80052BBC
  c->r[3]=c->r[30]+c->r[0]; // 80052BC0
  W32(c->r[3]+0x00000024u,c->r[4]); // 80052BC4
  c->lr=0x80052BCCu; f_8004DAC0(c); // 80052BC8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052BCC
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80052BD0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052BD4
  c->r[0]=c->r[4]+0x00000001u; // 80052BD8
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052BDC
  c->r[4]=c->r[30]+c->r[5]; // 80052BE0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80052BE4
  c->r[3]=c->r[31]|c->r[31]; // 80052BE8
  c->lr=0x80052BF0u; f_80049A60(c); // 80052BEC
  c->r[5]=0u+0x80050000u; // 80052BF0
  c->r[3]=0u+0x00000000u; // 80052BF4
  c->r[5]=c->r[5]+0x00003DC0u; // 80052BF8
  c->r[4]=0u+0x00000000u; // 80052BFC
  c->lr=0x80052C04u; f_80058EF0(c); // 80052C00
  goto L_80052C34; // 80052C04
L_80052C08:;
  c->r[3]=0u+0x01230000u; // 80052C08
  c->r[4]=0u+0x80050000u; // 80052C0C
  c->r[3]=c->r[3]+0x00004567u; // 80052C10
  c->r[4]=c->r[4]+0x00002520u; // 80052C14
  c->lr=0x80052C1Cu; f_80057720(c); // 80052C18
  goto L_80052C34; // 80052C1C
L_80052C20:;
  c->r[3]=0u+0x01230000u; // 80052C20
  c->r[4]=0u+0x80050000u; // 80052C24
  c->r[3]=c->r[3]+0x00004567u; // 80052C28
  c->r[4]=c->r[4]+0x00002520u; // 80052C2C
  c->lr=0x80052C34u; f_80057720(c); // 80052C30
L_80052C34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052C34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80052C38
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052C3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80052C40
  c->r[28]=R32(c->r[1]+0x00000010u); // 80052C44
  c->lr=c->r[0]; // 80052C48
  c->r[1]=c->r[1]+0x00000020u; // 80052C4C
  return; // 80052C50
}

// cbForUnrecoveredError
void f_80052C60(Ctx* __restrict c) {
  trace_call(0x80052C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052C60
  c->r[0]=c->lr; // 80052C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052C6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052C70
  c->r[30]=c->r[3]|c->r[3]; // 80052C74
  c->lr=0x80052C7Cu; f_80049A20(c); // 80052C78
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052C7C
  cmps(c,0,(int32_t)c->r[0],0); // 80052C80
  if (!crb(c,2)) { goto L_80052C98; } // 80052C84
  c->r[4]=0u+0x801A0000u; // 80052C88
  c->r[4]=c->r[4]+0x000006C0u; // 80052C8C
  W32(c->r[4]+0x00000078u,c->r[30]); // 80052C90
  goto L_80052CB0; // 80052C94
L_80052C98:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052C98
  c->r[4]=0u+0x801A0000u; // 80052C9C
  c->r[4]=c->r[4]+0x000006C0u; // 80052CA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052CA4
  c->r[4]=c->r[4]+c->r[0]; // 80052CA8
  W32(c->r[4]+0x00000014u,c->r[30]); // 80052CAC
L_80052CB0:;
  c->lr=0x80052CB4u; f_80049A60(c); // 80052CB0
  cmpu(c,0,c->r[30],0x00000010u); // 80052CB4
  if (!crb(c,2)) { goto L_80052CD4; } // 80052CB8
  c->r[3]=0u+0x01230000u; // 80052CBC
  c->r[4]=0u+0x80050000u; // 80052CC0
  c->r[3]=c->r[3]+0x00004568u; // 80052CC4
  c->r[4]=c->r[4]+0x00002540u; // 80052CC8
  c->lr=0x80052CD0u; f_80057720(c); // 80052CCC
  goto L_80052E28; // 80052CD0
L_80052CD4:;
  cmpu(c,0,c->r[30],0x00000020u); // 80052CD4
  if (!crb(c,2)) { goto L_80052CF4; } // 80052CD8
  c->r[3]=0u+0x01230000u; // 80052CDC
  c->r[4]=0u+0x80050000u; // 80052CE0
  c->r[3]=c->r[3]+0x00004569u; // 80052CE4
  c->r[4]=c->r[4]+0x00002540u; // 80052CE8
  c->lr=0x80052CF0u; f_80057720(c); // 80052CEC
  goto L_80052E28; // 80052CF0
L_80052CF4:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80052CF4
  if (crb(c,2)) { goto L_80052D98; } // 80052CF8
  c->lr=0x80052D00u; f_80049A20(c); // 80052CFC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052D00
  c->r[31]=c->r[3]|c->r[3]; // 80052D04
  cmpu(c,0,c->r[0],0x00000005u); // 80052D08
  if (crb(c,0)) { goto L_80052D18; } // 80052D0C
  c->r[0]=0u+0x00000000u; // 80052D10
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052D14
L_80052D18:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052D18
  c->r[30]=0u+0x801A0000u; // 80052D1C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80052D20
  c->r[30]=c->r[30]+0x000006C0u; // 80052D24
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052D28
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052D2C
  c->r[6]=0u+0x00000010u; // 80052D30
  c->r[4]=0u+0x00000000u; // 80052D34
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80052D38
  c->r[5]=c->r[30]+c->r[5]; // 80052D3C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80052D40
  c->r[3]=c->r[30]+c->r[3]; // 80052D44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052D48
  W32(c->r[3]+0x00000020u,c->r[4]); // 80052D4C
  c->r[3]=c->r[30]+c->r[0]; // 80052D50
  W32(c->r[3]+0x00000024u,c->r[4]); // 80052D54
  c->lr=0x80052D5Cu; f_8004DAC0(c); // 80052D58
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052D5C
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80052D60
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052D64
  c->r[0]=c->r[4]+0x00000001u; // 80052D68
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052D6C
  c->r[4]=c->r[30]+c->r[5]; // 80052D70
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80052D74
  c->r[3]=c->r[31]|c->r[31]; // 80052D78
  c->lr=0x80052D80u; f_80049A60(c); // 80052D7C
  c->r[5]=0u+0x80050000u; // 80052D80
  c->r[3]=0u+0x00000000u; // 80052D84
  c->r[5]=c->r[5]+0x00002F20u; // 80052D88
  c->r[4]=0u+0x00000000u; // 80052D8C
  c->lr=0x80052D94u; f_80058EF0(c); // 80052D90
  goto L_80052E28; // 80052D94
L_80052D98:;
  c->lr=0x80052D9Cu; f_80049A20(c); // 80052D98
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052D9C
  c->r[31]=c->r[3]|c->r[3]; // 80052DA0
  cmpu(c,0,c->r[0],0x00000005u); // 80052DA4
  if (crb(c,0)) { goto L_80052DB4; } // 80052DA8
  c->r[0]=0u+0x00000000u; // 80052DAC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052DB0
L_80052DB4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052DB4
  c->r[30]=0u+0x801A0000u; // 80052DB8
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80052DBC
  c->r[30]=c->r[30]+0x000006C0u; // 80052DC0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052DC4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052DC8
  c->r[6]=0u+0x00000027u; // 80052DCC
  c->r[4]=0u+0x00000000u; // 80052DD0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80052DD4
  c->r[5]=c->r[30]+c->r[5]; // 80052DD8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80052DDC
  c->r[3]=c->r[30]+c->r[3]; // 80052DE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052DE4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80052DE8
  c->r[3]=c->r[30]+c->r[0]; // 80052DEC
  W32(c->r[3]+0x00000024u,c->r[4]); // 80052DF0
  c->lr=0x80052DF8u; f_8004DAC0(c); // 80052DF4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052DF8
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80052DFC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052E00
  c->r[0]=c->r[4]+0x00000001u; // 80052E04
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80052E08
  c->r[4]=c->r[30]+c->r[5]; // 80052E0C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80052E10
  c->r[3]=c->r[31]|c->r[31]; // 80052E14
  c->lr=0x80052E1Cu; f_80049A60(c); // 80052E18
  c->r[3]=0u+0x80050000u; // 80052E1C
  c->r[3]=c->r[3]+0x00002E40u; // 80052E20
  c->lr=0x80052E28u; f_80059200(c); // 80052E24
L_80052E28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052E28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052E2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80052E30
  c->lr=c->r[0]; // 80052E34
  c->r[1]=c->r[1]+0x00000010u; // 80052E38
  return; // 80052E3C
}

// cbForUnrecoveredErrorRetry
void f_80052E40(Ctx* __restrict c) {
  trace_call(0x80052E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052E40
  c->r[0]=c->lr; // 80052E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052E4C
  c->r[31]=c->r[3]|c->r[3]; // 80052E50
  c->lr=0x80052E58u; f_80049A20(c); // 80052E54
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052E58
  cmps(c,0,(int32_t)c->r[0],0); // 80052E5C
  if (!crb(c,2)) { goto L_80052E74; } // 80052E60
  c->r[4]=0u+0x801A0000u; // 80052E64
  c->r[4]=c->r[4]+0x000006C0u; // 80052E68
  W32(c->r[4]+0x00000078u,c->r[31]); // 80052E6C
  goto L_80052E8C; // 80052E70
L_80052E74:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052E74
  c->r[4]=0u+0x801A0000u; // 80052E78
  c->r[4]=c->r[4]+0x000006C0u; // 80052E7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052E80
  c->r[4]=c->r[4]+c->r[0]; // 80052E84
  W32(c->r[4]+0x00000014u,c->r[31]); // 80052E88
L_80052E8C:;
  c->lr=0x80052E90u; f_80049A60(c); // 80052E8C
  cmpu(c,0,c->r[31],0x00000010u); // 80052E90
  if (!crb(c,2)) { goto L_80052EB0; } // 80052E94
  c->r[3]=0u+0x01230000u; // 80052E98
  c->r[4]=0u+0x80050000u; // 80052E9C
  c->r[3]=c->r[3]+0x00004568u; // 80052EA0
  c->r[4]=c->r[4]+0x00002540u; // 80052EA4
  c->lr=0x80052EACu; f_80057720(c); // 80052EA8
  goto L_80052F00; // 80052EAC
L_80052EB0:;
  cmpu(c,0,c->r[31],0x00000020u); // 80052EB0
  if (!crb(c,2)) { goto L_80052ED0; } // 80052EB4
  c->r[3]=0u+0x01230000u; // 80052EB8
  c->r[4]=0u+0x80050000u; // 80052EBC
  c->r[3]=c->r[3]+0x00004569u; // 80052EC0
  c->r[4]=c->r[4]+0x00002540u; // 80052EC4
  c->lr=0x80052ECCu; f_80057720(c); // 80052EC8
  goto L_80052F00; // 80052ECC
L_80052ED0:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80052ED0
  if (crb(c,2)) { goto L_80052EF0; } // 80052ED4
  c->r[3]=0u+0x01230000u; // 80052ED8
  c->r[4]=0u+0x80050000u; // 80052EDC
  c->r[3]=c->r[3]+0x00004567u; // 80052EE0
  c->r[4]=c->r[4]+0x00002520u; // 80052EE4
  c->lr=0x80052EECu; f_80057720(c); // 80052EE8
  goto L_80052F00; // 80052EEC
L_80052EF0:;
  c->lr=0x80052EF4u; f_8005A180(c); // 80052EF0
  c->r[4]=0u+0x80050000u; // 80052EF4
  c->r[4]=c->r[4]+0x00002520u; // 80052EF8
  c->lr=0x80052F00u; f_80057720(c); // 80052EFC
L_80052F00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052F00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052F04
  c->lr=c->r[0]; // 80052F08
  c->r[1]=c->r[1]+0x00000010u; // 80052F0C
  return; // 80052F10
}

// cbForStateGoToRetry
void f_80052F20(Ctx* __restrict c) {
  trace_call(0x80052F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052F20
  c->r[0]=c->lr; // 80052F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052F28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052F2C
  c->r[31]=c->r[3]|c->r[3]; // 80052F30
  c->lr=0x80052F38u; f_80049A20(c); // 80052F34
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052F38
  cmps(c,0,(int32_t)c->r[0],0); // 80052F3C
  if (!crb(c,2)) { goto L_80052F54; } // 80052F40
  c->r[4]=0u+0x801A0000u; // 80052F44
  c->r[4]=c->r[4]+0x000006C0u; // 80052F48
  W32(c->r[4]+0x00000078u,c->r[31]); // 80052F4C
  goto L_80052F6C; // 80052F50
L_80052F54:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80052F54
  c->r[4]=0u+0x801A0000u; // 80052F58
  c->r[4]=c->r[4]+0x000006C0u; // 80052F5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80052F60
  c->r[4]=c->r[4]+c->r[0]; // 80052F64
  W32(c->r[4]+0x00000014u,c->r[31]); // 80052F68
L_80052F6C:;
  c->lr=0x80052F70u; f_80049A60(c); // 80052F6C
  cmpu(c,0,c->r[31],0x00000010u); // 80052F70
  if (!crb(c,2)) { goto L_80052F90; } // 80052F74
  c->r[3]=0u+0x01230000u; // 80052F78
  c->r[4]=0u+0x80050000u; // 80052F7C
  c->r[3]=c->r[3]+0x00004568u; // 80052F80
  c->r[4]=c->r[4]+0x00002540u; // 80052F84
  c->lr=0x80052F8Cu; f_80057720(c); // 80052F88
  goto L_8005314C; // 80052F8C
L_80052F90:;
  cmpu(c,0,c->r[31],0x00000020u); // 80052F90
  if (!crb(c,2)) { goto L_80052FB0; } // 80052F94
  c->r[3]=0u+0x01230000u; // 80052F98
  c->r[4]=0u+0x80050000u; // 80052F9C
  c->r[3]=c->r[3]+0x00004569u; // 80052FA0
  c->r[4]=c->r[4]+0x00002540u; // 80052FA4
  c->lr=0x80052FACu; f_80057720(c); // 80052FA8
  goto L_8005314C; // 80052FAC
L_80052FB0:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80052FB0
  if (crb(c,2)) { goto L_80052FD0; } // 80052FB4
  c->r[3]=0u+0x01230000u; // 80052FB8
  c->r[4]=0u+0x80050000u; // 80052FBC
  c->r[3]=c->r[3]+0x00004567u; // 80052FC0
  c->r[4]=c->r[4]+0x00002520u; // 80052FC4
  c->lr=0x80052FCCu; f_80057720(c); // 80052FC8
  goto L_8005314C; // 80052FCC
L_80052FD0:;
  c->r[0]=0u+0x00000000u; // 80052FD0
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 80052FD4
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80052FD8
  cmpu(c,0,c->r[0],0x00000004u); // 80052FDC
  if (crb(c,2)) { goto L_80053044; } // 80052FE0
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80052FE4
  cmpu(c,0,c->r[0],0x00000005u); // 80052FE8
  if (crb(c,2)) { goto L_80053044; } // 80052FEC
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80052FF0
  cmpu(c,0,c->r[0],0x0000000Du); // 80052FF4
  if (crb(c,2)) { goto L_80053044; } // 80052FF8
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80052FFC
  cmpu(c,0,c->r[0],0x00000021u); // 80053000
  if (crb(c,2)) { goto L_80053044; } // 80053004
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80053008
  cmpu(c,0,c->r[0],0x00000022u); // 8005300C
  if (crb(c,2)) { goto L_80053044; } // 80053010
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80053014
  cmpu(c,0,c->r[0],0x00000029u); // 80053018
  if (crb(c,2)) { goto L_80053044; } // 8005301C
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80053020
  cmpu(c,0,c->r[0],0x0000002Au); // 80053024
  if (crb(c,2)) { goto L_80053044; } // 80053028
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 8005302C
  cmpu(c,0,c->r[0],0x0000000Fu); // 80053030
  if (crb(c,2)) { goto L_80053044; } // 80053034
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80053038
  cmpu(c,0,c->r[0],0x00000025u); // 8005303C
  if (!crb(c,2)) { goto L_8005304C; } // 80053040
L_80053044:;
  c->r[0]=0u+0x00000001u; // 80053044
  W32(c->r[13]+0xFFFF8C94u,c->r[0]); // 80053048
L_8005304C:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 8005304C
  cmps(c,0,(int32_t)c->r[0],0); // 80053050
  if (crb(c,2)) { goto L_800530C4; } // 80053054
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80053058
  c->r[3]=0u+0x801A0000u; // 8005305C
  c->r[3]=c->r[3]+0x000003A0u; // 80053060
  c->r[0]=0u+0x00000002u; // 80053064
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80053068
  c->r[4]=0u+0x00000000u; // 8005306C
  c->r[0]=0u+0x0000000Au; // 80053070
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80053074
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80053078
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8005307C
  c->r[12]=R32(c->r[31]+0x00000028u); // 80053080
  cmps(c,0,(int32_t)c->r[12],0); // 80053084
  if (crb(c,2)) { goto L_8005309C; } // 80053088
  c->r[4]=c->r[31]|c->r[31]; // 8005308C
  c->r[3]=0u+0xFFFFFFFDu; // 80053090
  c->ctr=c->r[12]; // 80053094
  if (true) { c->lr=0x8005309Cu; dispatch(c,c->ctr); } // 80053098
L_8005309C:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 8005309C
  cmps(c,0,(int32_t)c->r[12],0); // 800530A0
  if (crb(c,2)) { goto L_800530B8; } // 800530A4
  c->r[4]=c->r[31]|c->r[31]; // 800530A8
  c->r[3]=0u+0x00000000u; // 800530AC
  c->ctr=c->r[12]; // 800530B0
  if (true) { c->lr=0x800530B8u; dispatch(c,c->ctr); } // 800530B4
L_800530B8:;
  c->lr=0x800530BCu; f_80054C70(c); // 800530B8
  c->r[0]=0u+0x00000001u; // 800530BC
  goto L_800530C8; // 800530C0
L_800530C4:;
  c->r[0]=0u+0x00000000u; // 800530C4
L_800530C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800530C8
  if (!crb(c,2)) { goto L_8005314C; } // 800530CC
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800530D0
  c->r[0]=0u+0x0000000Bu; // 800530D4
  c->r[3]=0u+0x00000001u; // 800530D8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800530DC
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800530E0
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 800530E4
  cmps(c,0,(int32_t)c->r[0],0); // 800530E8
  if (!crb(c,2)) { goto L_8005314C; } // 800530EC
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 800530F0
  cmps(c,0,(int32_t)c->r[0],0); // 800530F4
  if (!crb(c,2)) { goto L_8005314C; } // 800530F8
  c->r[31]=0u+0x801A0000u; // 800530FC
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80053100
  c->r[3]=c->r[31]+0x00000400u; // 80053104
  c->lr=0x8005310Cu; f_80043E70(c); // 80053108
  c->lr=0x80053110u; f_8004DAC0(c); // 8005310C
  c->r[5]=0u+0x80000000u; // 80053110
  c->r[4]=0u+0x10620000u; // 80053114
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80053118
  c->r[9]=0u+0x80050000u; // 8005311C
  c->r[6]=c->r[3]|c->r[3]; // 80053120
  c->r[4]=c->r[4]+0x00004DD3u; // 80053124
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80053128
  c->r[3]=c->r[31]+0x00000400u; // 8005312C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80053130
  c->r[9]=c->r[9]+0x00004C40u; // 80053134
  c->r[5]=0u+0x00000000u; // 80053138
  c->r[7]=0u+0x00000000u; // 8005313C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80053140
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80053144
  c->lr=0x8005314Cu; f_80044140(c); // 80053148
L_8005314C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005314C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053150
  c->lr=c->r[0]; // 80053154
  c->r[1]=c->r[1]+0x00000010u; // 80053158
  return; // 8005315C
}

// stateCheckID
void f_80053160(Ctx* __restrict c) {
  trace_call(0x80053160u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053160
  c->r[0]=c->lr; // 80053164
  W32(c->r[1]+0x00000024u,c->r[0]); // 80053168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005316C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053170
  c->r[30]=0u+0x801A0000u; // 80053174
  c->r[30]=c->r[30]+0xFFFFB880u; // 80053178
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005317C
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80053180
  cmps(c,0,(int32_t)c->r[0],3); // 80053184
  if (crb(c,2)) { goto L_80053190; } // 80053188
  goto L_8005331C; // 8005318C
L_80053190:;
  c->r[31]=0u+0x00000000u; // 80053190
  W32(c->r[13]+0xFFFF8C50u,c->r[31]); // 80053194
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80053198
  c->r[3]=c->r[30]+0x00004BC0u; // 8005319C
  c->r[4]=R32(c->r[4]+0x00000024u); // 800531A0
  c->lr=0x800531A8u; f_80057790(c); // 800531A4
  cmps(c,0,(int32_t)c->r[3],0); // 800531A8
  if (crb(c,2)) { goto L_80053284; } // 800531AC
  c->r[3]=R32(c->r[13]+0xFFFF8CACu); // 800531B0
  c->r[4]=c->r[30]+0x00004BC0u; // 800531B4
  c->r[5]=0u+0x00000020u; // 800531B8
  c->lr=0x800531C0u; f_800043C4(c); // 800531BC
  c->r[5]=R32(c->r[13]+0xFFFF8CB0u); // 800531C0
  c->r[0]=0u+0x00000001u; // 800531C4
  c->r[3]=c->r[30]+0x00004B00u; // 800531C8
  c->r[4]=0u+0x00000020u; // 800531CC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800531D0
  c->lr=0x800531D8u; f_80044FE0(c); // 800531D4
  W32(c->r[13]+0xFFFF8C38u,c->r[31]); // 800531D8
  c->r[3]=0u+0x00000000u; // 800531DC
  c->lr=0x800531E4u; f_8005A1B0(c); // 800531E0
  c->lr=0x800531E8u; f_80049A20(c); // 800531E4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800531E8
  c->r[29]=c->r[3]|c->r[3]; // 800531EC
  cmpu(c,0,c->r[0],0x00000005u); // 800531F0
  if (crb(c,0)) { goto L_800531FC; } // 800531F4
  W32(c->r[13]+0xFFFF8C20u,c->r[31]); // 800531F8
L_800531FC:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800531FC
  c->r[31]=0u+0x801A0000u; // 80053200
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80053204
  c->r[31]=c->r[31]+0x000006C0u; // 80053208
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005320C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053210
  c->r[7]=0u+0x00000021u; // 80053214
  c->r[5]=0u+0x00010000u; // 80053218
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005321C
  c->r[4]=0u+0x00000020u; // 80053220
  c->r[6]=c->r[31]+c->r[6]; // 80053224
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80053228
  c->r[3]=c->r[31]+c->r[3]; // 8005322C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053230
  W32(c->r[3]+0x00000020u,c->r[5]); // 80053234
  c->r[3]=c->r[31]+c->r[0]; // 80053238
  W32(c->r[3]+0x00000024u,c->r[4]); // 8005323C
  c->lr=0x80053244u; f_8004DAC0(c); // 80053240
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053244
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053248
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005324C
  c->r[0]=c->r[4]+0x00000001u; // 80053250
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80053254
  c->r[4]=c->r[31]+c->r[5]; // 80053258
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8005325C
  c->r[3]=c->r[29]|c->r[29]; // 80053260
  c->lr=0x80053268u; f_80049A60(c); // 80053264
  c->r[6]=0u+0x80050000u; // 80053268
  c->r[3]=c->r[30]+0x00004BE0u; // 8005326C
  c->r[6]=c->r[6]+0x000034A0u; // 80053270
  c->r[4]=0u+0x00000020u; // 80053274
  c->r[5]=0u+0x00010000u; // 80053278
  c->lr=0x80053280u; f_80058D50(c); // 8005327C
  goto L_8005347C; // 80053280
L_80053284:;
  c->lr=0x80053288u; f_80049A20(c); // 80053284
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053288
  c->r[29]=c->r[3]|c->r[3]; // 8005328C
  cmpu(c,0,c->r[0],0x00000005u); // 80053290
  if (crb(c,0)) { goto L_8005329C; } // 80053294
  W32(c->r[13]+0xFFFF8C20u,c->r[31]); // 80053298
L_8005329C:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005329C
  c->r[30]=0u+0x801A0000u; // 800532A0
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800532A4
  c->r[30]=c->r[30]+0x000006C0u; // 800532A8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800532AC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800532B0
  c->r[6]=0u+0x00000010u; // 800532B4
  c->r[4]=0u+0x00000000u; // 800532B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800532BC
  c->r[5]=c->r[30]+c->r[5]; // 800532C0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800532C4
  c->r[3]=c->r[30]+c->r[3]; // 800532C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800532CC
  W32(c->r[3]+0x00000020u,c->r[4]); // 800532D0
  c->r[3]=c->r[30]+c->r[0]; // 800532D4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800532D8
  c->lr=0x800532E0u; f_8004DAC0(c); // 800532DC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800532E0
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800532E4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800532E8
  c->r[0]=c->r[4]+0x00000001u; // 800532EC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800532F0
  c->r[4]=c->r[30]+c->r[5]; // 800532F4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800532F8
  c->r[3]=c->r[29]|c->r[29]; // 800532FC
  c->lr=0x80053304u; f_80049A60(c); // 80053300
  c->r[5]=0u+0x80050000u; // 80053304
  c->r[3]=0u+0x00000000u; // 80053308
  c->r[5]=c->r[5]+0x00003DC0u; // 8005330C
  c->r[4]=0u+0x00000000u; // 80053310
  c->lr=0x80053318u; f_80058EF0(c); // 80053314
  goto L_8005347C; // 80053318
L_8005331C:;
  c->r[4]=R32(c->r[13]+0xFFFF8CACu); // 8005331C
  c->r[3]=c->r[30]+0x00004BC0u; // 80053320
  c->r[5]=0u+0x00000020u; // 80053324
  c->lr=0x8005332Cu; f_80072858(c); // 80053328
  cmps(c,0,(int32_t)c->r[3],0); // 8005332C
  if (crb(c,2)) { goto L_800533D0; } // 80053330
  c->lr=0x80053338u; f_80049A20(c); // 80053334
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053338
  c->r[29]=c->r[3]|c->r[3]; // 8005333C
  cmpu(c,0,c->r[0],0x00000005u); // 80053340
  if (crb(c,0)) { goto L_80053350; } // 80053344
  c->r[0]=0u+0x00000000u; // 80053348
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005334C
L_80053350:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053350
  c->r[30]=0u+0x801A0000u; // 80053354
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80053358
  c->r[30]=c->r[30]+0x000006C0u; // 8005335C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053360
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053364
  c->r[6]=0u+0x00000010u; // 80053368
  c->r[4]=0u+0x00000000u; // 8005336C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80053370
  c->r[5]=c->r[30]+c->r[5]; // 80053374
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80053378
  c->r[3]=c->r[30]+c->r[3]; // 8005337C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053380
  W32(c->r[3]+0x00000020u,c->r[4]); // 80053384
  c->r[3]=c->r[30]+c->r[0]; // 80053388
  W32(c->r[3]+0x00000024u,c->r[4]); // 8005338C
  c->lr=0x80053394u; f_8004DAC0(c); // 80053390
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053394
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053398
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005339C
  c->r[0]=c->r[4]+0x00000001u; // 800533A0
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800533A4
  c->r[4]=c->r[30]+c->r[5]; // 800533A8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800533AC
  c->r[3]=c->r[29]|c->r[29]; // 800533B0
  c->lr=0x800533B8u; f_80049A60(c); // 800533B4
  c->r[5]=0u+0x80050000u; // 800533B8
  c->r[3]=0u+0x00000000u; // 800533BC
  c->r[5]=c->r[5]+0x00003DC0u; // 800533C0
  c->r[4]=0u+0x00000000u; // 800533C4
  c->lr=0x800533CCu; f_80058EF0(c); // 800533C8
  goto L_8005347C; // 800533CC
L_800533D0:;
  c->r[31]=0u+0x00000000u; // 800533D0
  W32(c->r[13]+0xFFFF8C38u,c->r[31]); // 800533D4
  c->r[3]=0u+0x00000000u; // 800533D8
  c->lr=0x800533E0u; f_8005A1B0(c); // 800533DC
  c->lr=0x800533E4u; f_80049A20(c); // 800533E0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800533E4
  c->r[29]=c->r[3]|c->r[3]; // 800533E8
  cmpu(c,0,c->r[0],0x00000005u); // 800533EC
  if (crb(c,0)) { goto L_800533F8; } // 800533F0
  W32(c->r[13]+0xFFFF8C20u,c->r[31]); // 800533F4
L_800533F8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800533F8
  c->r[31]=0u+0x801A0000u; // 800533FC
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80053400
  c->r[31]=c->r[31]+0x000006C0u; // 80053404
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053408
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005340C
  c->r[7]=0u+0x00000021u; // 80053410
  c->r[5]=0u+0x00010000u; // 80053414
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80053418
  c->r[4]=0u+0x00000020u; // 8005341C
  c->r[6]=c->r[31]+c->r[6]; // 80053420
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80053424
  c->r[3]=c->r[31]+c->r[3]; // 80053428
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005342C
  W32(c->r[3]+0x00000020u,c->r[5]); // 80053430
  c->r[3]=c->r[31]+c->r[0]; // 80053434
  W32(c->r[3]+0x00000024u,c->r[4]); // 80053438
  c->lr=0x80053440u; f_8004DAC0(c); // 8005343C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053440
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053444
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053448
  c->r[0]=c->r[4]+0x00000001u; // 8005344C
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80053450
  c->r[4]=c->r[31]+c->r[5]; // 80053454
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80053458
  c->r[3]=c->r[29]|c->r[29]; // 8005345C
  c->lr=0x80053464u; f_80049A60(c); // 80053460
  c->r[6]=0u+0x80050000u; // 80053464
  c->r[3]=c->r[30]+0x00004BE0u; // 80053468
  c->r[6]=c->r[6]+0x000034A0u; // 8005346C
  c->r[4]=0u+0x00000020u; // 80053470
  c->r[5]=0u+0x00010000u; // 80053474
  c->lr=0x8005347Cu; f_80058D50(c); // 80053478
L_8005347C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005347C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053480
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053484
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053488
  c->lr=c->r[0]; // 8005348C
  c->r[1]=c->r[1]+0x00000020u; // 80053490
  return; // 80053494
}

// cbForStateReadingTOC
void f_800534A0(Ctx* __restrict c) {
  trace_call(0x800534A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800534A0
  c->r[0]=c->lr; // 800534A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800534A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800534AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800534B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800534B4
  c->r[29]=c->r[3]|c->r[3]; // 800534B8
  c->lr=0x800534C0u; f_80049A20(c); // 800534BC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800534C0
  cmps(c,0,(int32_t)c->r[0],0); // 800534C4
  if (!crb(c,2)) { goto L_800534DC; } // 800534C8
  c->r[4]=0u+0x801A0000u; // 800534CC
  c->r[4]=c->r[4]+0x000006C0u; // 800534D0
  W32(c->r[4]+0x00000078u,c->r[29]); // 800534D4
  goto L_800534F8; // 800534D8
L_800534DC:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800534DC
  c->r[5]=0u+0x801A0000u; // 800534E0
  c->r[5]=c->r[5]+0x000006C0u; // 800534E4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800534E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800534EC
  c->r[4]=c->r[5]+c->r[0]; // 800534F0
  W32(c->r[4]+0x00000028u,c->r[29]); // 800534F4
L_800534F8:;
  c->lr=0x800534FCu; f_80049A60(c); // 800534F8
  cmpu(c,0,c->r[29],0x00000010u); // 800534FC
  if (!crb(c,2)) { goto L_8005351C; } // 80053500
  c->r[3]=0u+0x01230000u; // 80053504
  c->r[4]=0u+0x80050000u; // 80053508
  c->r[3]=c->r[3]+0x00004568u; // 8005350C
  c->r[4]=c->r[4]+0x00002540u; // 80053510
  c->lr=0x80053518u; f_80057720(c); // 80053514
  goto L_80053624; // 80053518
L_8005351C:;
  cmpu(c,0,c->r[29],0x00000020u); // 8005351C
  if (!crb(c,2)) { goto L_8005353C; } // 80053520
  c->r[3]=0u+0x01230000u; // 80053524
  c->r[4]=0u+0x80050000u; // 80053528
  c->r[3]=c->r[3]+0x00004569u; // 8005352C
  c->r[4]=c->r[4]+0x00002540u; // 80053530
  c->lr=0x80053538u; f_80057720(c); // 80053534
  goto L_80053624; // 80053538
L_8005353C:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8005353C
  if (crb(c,2)) { goto L_80053608; } // 80053540
  c->r[4]=0u+0x801A0000u; // 80053544
  c->r[29]=0u+0x00000000u; // 80053548
  c->r[4]=c->r[4]+0x00000460u; // 8005354C
  W32(c->r[13]+0xFFFF8C38u,c->r[29]); // 80053550
  c->r[3]=0u+0x00000000u; // 80053554
  W32(c->r[13]+0xFFFF8C70u,c->r[4]); // 80053558
  c->lr=0x80053560u; f_8005A1B0(c); // 8005355C
  c->lr=0x80053564u; f_80049A20(c); // 80053560
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053564
  c->r[30]=c->r[3]|c->r[3]; // 80053568
  cmpu(c,0,c->r[0],0x00000005u); // 8005356C
  if (crb(c,0)) { goto L_80053578; } // 80053570
  W32(c->r[13]+0xFFFF8C20u,c->r[29]); // 80053574
L_80053578:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053578
  c->r[31]=0u+0x801A0000u; // 8005357C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80053580
  c->r[29]=0u+0x00010000u; // 80053584
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053588
  c->r[31]=c->r[31]+0x000006C0u; // 8005358C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053590
  c->r[6]=0u+0x00000021u; // 80053594
  c->r[5]=c->r[29]+0x00000008u; // 80053598
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005359C
  c->r[4]=c->r[31]+c->r[4]; // 800535A0
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 800535A4
  c->r[3]=c->r[31]+c->r[3]; // 800535A8
  c->r[4]=0u+0x00000020u; // 800535AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800535B0
  W32(c->r[3]+0x00000020u,c->r[5]); // 800535B4
  c->r[3]=c->r[31]+c->r[0]; // 800535B8
  W32(c->r[3]+0x00000024u,c->r[4]); // 800535BC
  c->lr=0x800535C4u; f_8004DAC0(c); // 800535C0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800535C4
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800535C8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800535CC
  c->r[0]=c->r[4]+0x00000001u; // 800535D0
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800535D4
  c->r[4]=c->r[31]+c->r[5]; // 800535D8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800535DC
  c->r[3]=c->r[30]|c->r[30]; // 800535E0
  c->lr=0x800535E8u; f_80049A60(c); // 800535E4
  c->r[3]=0u+0x801A0000u; // 800535E8
  c->r[6]=0u+0x80050000u; // 800535EC
  c->r[5]=c->r[29]+0x00000008u; // 800535F0
  c->r[4]=0u+0x00000020u; // 800535F4
  c->r[3]=c->r[3]+0x00000480u; // 800535F8
  c->r[6]=c->r[6]+0x00003640u; // 800535FC
  c->lr=0x80053604u; f_80058D50(c); // 80053600
  goto L_80053624; // 80053604
L_80053608:;
  c->r[3]=0u+0x00000027u; // 80053608
  c->r[4]=0u+0x00000000u; // 8005360C
  c->r[5]=0u+0x00000000u; // 80053610
  c->lr=0x80053618u; f_80051EC0(c); // 80053614
  c->r[3]=0u+0x80050000u; // 80053618
  c->r[3]=c->r[3]+0x00002750u; // 8005361C
  c->lr=0x80053624u; f_80059200(c); // 80053620
L_80053624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053628
  c->r[30]=R32(c->r[1]+0x00000018u); // 8005362C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053630
  c->lr=c->r[0]; // 80053634
  c->r[1]=c->r[1]+0x00000020u; // 80053638
  return; // 8005363C
}

// cbForStateReadingPartitionInfo
void f_80053640(Ctx* __restrict c) {
  trace_call(0x80053640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053640
  c->r[0]=c->lr; // 80053644
  W32(c->r[1]+0x00000024u,c->r[0]); // 80053648
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005364C
  c->r[31]=0u+0x801A0000u; // 80053650
  c->r[31]=c->r[31]+0xFFFFB880u; // 80053654
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053658
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005365C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80053660
  c->r[28]=c->r[3]|c->r[3]; // 80053664
  c->lr=0x8005366Cu; f_80049A20(c); // 80053668
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005366C
  cmps(c,0,(int32_t)c->r[0],0); // 80053670
  if (!crb(c,2)) { goto L_80053688; } // 80053674
  c->r[4]=0u+0x801A0000u; // 80053678
  c->r[4]=c->r[4]+0x000006C0u; // 8005367C
  W32(c->r[4]+0x00000078u,c->r[28]); // 80053680
  goto L_800536A4; // 80053684
L_80053688:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053688
  c->r[5]=0u+0x801A0000u; // 8005368C
  c->r[5]=c->r[5]+0x000006C0u; // 80053690
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80053694
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053698
  c->r[4]=c->r[5]+c->r[0]; // 8005369C
  W32(c->r[4]+0x00000028u,c->r[28]); // 800536A0
L_800536A4:;
  c->lr=0x800536A8u; f_80049A60(c); // 800536A4
  cmpu(c,0,c->r[28],0x00000010u); // 800536A8
  if (!crb(c,2)) { goto L_800536C8; } // 800536AC
  c->r[3]=0u+0x01230000u; // 800536B0
  c->r[4]=0u+0x80050000u; // 800536B4
  c->r[3]=c->r[3]+0x00004568u; // 800536B8
  c->r[4]=c->r[4]+0x00002540u; // 800536BC
  c->lr=0x800536C4u; f_80057720(c); // 800536C0
  goto L_80053A9C; // 800536C4
L_800536C8:;
  cmpu(c,0,c->r[28],0x00000020u); // 800536C8
  if (!crb(c,2)) { goto L_800536E8; } // 800536CC
  c->r[3]=0u+0x01230000u; // 800536D0
  c->r[4]=0u+0x80050000u; // 800536D4
  c->r[3]=c->r[3]+0x00004569u; // 800536D8
  c->r[4]=c->r[4]+0x00002540u; // 800536DC
  c->lr=0x800536E4u; f_80057720(c); // 800536E0
  goto L_80053A9C; // 800536E4
L_800536E8:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 800536E8
  if (crb(c,2)) { goto L_80053A80; } // 800536EC
  c->r[0]=0u+0x00000000u; // 800536F0
  c->r[6]=c->r[31]+0x00004C00u; // 800536F4
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 800536F8
  c->r[5]=0u+0x80000000u; // 800536FC
  W32(c->r[13]+0xFFFF8C6Cu,c->r[6]); // 80053700
  W32(c->r[13]+0xFFFF8C68u,c->r[0]); // 80053704
  c->r[0]=R32(c->r[5]+0x00003198u); // 80053708
  cmps(c,0,(int32_t)c->r[0],0); // 8005370C
  if (crb(c,2)) { goto L_80053730; } // 80053710
  W32(c->r[13]+0xFFFF8C68u,c->r[6]); // 80053714
  c->r[0]=R32(c->r[5]+0x00003194u); // 80053718
  W32(c->r[6]+0x00000004u,c->r[0]); // 8005371C
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 80053720
  c->r[0]=R32(c->r[5]+0x00003198u); // 80053724
  W32(c->r[3]+0x00000000u,c->r[0]); // 80053728
  goto L_80053770; // 8005372C
L_80053730:;
  c->r[3]=R32(c->r[13]+0xFFFF8C70u); // 80053730
  c->r[7]=0u+0x00000000u; // 80053734
  goto L_80053760; // 80053738
  c->r[0]=c->r[0]|0x00000000u; // 8005373C
L_80053740:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80053740
  c->r[0]=R32(c->r[5]+0x00003194u); // 80053744
  cmpu(c,0,c->r[4],c->r[0]); // 80053748
  if (!crb(c,2)) { goto L_80053754; } // 8005374C
  W32(c->r[13]+0xFFFF8C68u,c->r[6]); // 80053750
L_80053754:;
  c->r[6]=c->r[6]+0x00000008u; // 80053754
  W32(c->r[13]+0xFFFF8C6Cu,c->r[6]); // 80053758
  c->r[7]=c->r[7]+0x00000001u; // 8005375C
L_80053760:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80053760
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 80053764
  cmpu(c,0,c->r[4],c->r[0]); // 80053768
  if (crb(c,0)) { IRQCHK(c); goto L_80053740; } // 8005376C
L_80053770:;
  c->r[0]=R32(c->r[13]+0xFFFF8C68u); // 80053770
  cmps(c,0,(int32_t)c->r[0],0); // 80053774
  if (crb(c,2)) { goto L_80053984; } // 80053778
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 8005377C
  cmps(c,0,(int32_t)c->r[0],3); // 80053780
  if (crb(c,2)) { goto L_8005378C; } // 80053784
  goto L_80053888; // 80053788
L_8005378C:;
  c->r[29]=0u+0x00000000u; // 8005378C
  W32(c->r[13]+0xFFFF8C38u,c->r[29]); // 80053790
  c->r[3]=0u+0x00000000u; // 80053794
  c->lr=0x8005379Cu; f_8005A1B0(c); // 80053798
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 8005379C
  c->r[28]=R32(c->r[3]+0x00000000u); // 800537A0
  c->lr=0x800537A8u; f_80049A20(c); // 800537A4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800537A8
  c->r[30]=c->r[3]|c->r[3]; // 800537AC
  cmpu(c,0,c->r[0],0x00000005u); // 800537B0
  if (crb(c,0)) { goto L_800537BC; } // 800537B4
  W32(c->r[13]+0xFFFF8C20u,c->r[29]); // 800537B8
L_800537BC:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800537BC
  c->r[29]=0u+0x801A0000u; // 800537C0
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800537C4
  c->r[29]=c->r[29]+0x000006C0u; // 800537C8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800537CC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800537D0
  c->r[6]=0u+0x00000022u; // 800537D4
  c->r[4]=0u+0x00000000u; // 800537D8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800537DC
  c->r[5]=c->r[29]+c->r[5]; // 800537E0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800537E4
  c->r[3]=c->r[29]+c->r[3]; // 800537E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800537EC
  W32(c->r[3]+0x00000020u,c->r[28]); // 800537F0
  c->r[3]=c->r[29]+c->r[0]; // 800537F4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800537F8
  c->lr=0x80053800u; f_8004DAC0(c); // 800537FC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053800
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053804
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053808
  c->r[0]=c->r[4]+0x00000001u; // 8005380C
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80053810
  c->r[4]=c->r[29]+c->r[5]; // 80053814
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80053818
  c->r[3]=c->r[30]|c->r[30]; // 8005381C
  c->lr=0x80053824u; f_80049A60(c); // 80053820
  c->r[3]=0u+0x80000000u; // 80053824
  c->r[0]=R8(c->r[3]+0x00003187u); // 80053828
  cmpu(c,0,c->r[0],0x00000080u); // 8005382C
  if (!crb(c,2)) { goto L_80053860; } // 80053830
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 80053834
  c->r[9]=0u+0x80050000u; // 80053838
  c->r[5]=R32(c->r[13]+0xFFFF8C80u); // 8005383C
  c->r[4]=c->r[31]+0x00000000u; // 80053840
  c->r[3]=R32(c->r[3]+0x00000000u); // 80053844
  c->r[6]=c->r[31]+0x00000100u; // 80053848
  c->r[9]=c->r[9]+0x00003AC0u; // 8005384C
  c->r[7]=0u+0x00000000u; // 80053850
  c->r[8]=0u+0x00000000u; // 80053854
  c->lr=0x8005385Cu; f_800584C0(c); // 80053858
  goto L_80053A9C; // 8005385C
L_80053860:;
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 80053860
  c->r[8]=0u+0x80050000u; // 80053864
  c->r[7]=c->r[31]+0x00000100u; // 80053868
  c->r[4]=0u+0x00000000u; // 8005386C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80053870
  c->r[8]=c->r[8]+0x00003AC0u; // 80053874
  c->r[5]=0u+0x00000000u; // 80053878
  c->r[6]=0u+0x00000000u; // 8005387C
  c->lr=0x80053884u; f_80058250(c); // 80053880
  goto L_80053A9C; // 80053884
L_80053888:;
  c->r[29]=0u+0x00000000u; // 80053888
  W32(c->r[13]+0xFFFF8C38u,c->r[29]); // 8005388C
  c->r[3]=0u+0x00000000u; // 80053890
  c->lr=0x80053898u; f_8005A1B0(c); // 80053894
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 80053898
  c->r[28]=R32(c->r[3]+0x00000000u); // 8005389C
  c->lr=0x800538A4u; f_80049A20(c); // 800538A0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800538A4
  c->r[30]=c->r[3]|c->r[3]; // 800538A8
  cmpu(c,0,c->r[0],0x00000005u); // 800538AC
  if (crb(c,0)) { goto L_800538B8; } // 800538B0
  W32(c->r[13]+0xFFFF8C20u,c->r[29]); // 800538B4
L_800538B8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800538B8
  c->r[29]=0u+0x801A0000u; // 800538BC
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800538C0
  c->r[29]=c->r[29]+0x000006C0u; // 800538C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800538C8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800538CC
  c->r[6]=0u+0x00000022u; // 800538D0
  c->r[4]=0u+0x00000000u; // 800538D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800538D8
  c->r[5]=c->r[29]+c->r[5]; // 800538DC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800538E0
  c->r[3]=c->r[29]+c->r[3]; // 800538E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800538E8
  W32(c->r[3]+0x00000020u,c->r[28]); // 800538EC
  c->r[3]=c->r[29]+c->r[0]; // 800538F0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800538F4
  c->lr=0x800538FCu; f_8004DAC0(c); // 800538F8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800538FC
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053900
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053904
  c->r[0]=c->r[4]+0x00000001u; // 80053908
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005390C
  c->r[4]=c->r[29]+c->r[5]; // 80053910
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80053914
  c->r[3]=c->r[30]|c->r[30]; // 80053918
  c->lr=0x80053920u; f_80049A60(c); // 8005391C
  c->r[3]=0u+0x80000000u; // 80053920
  c->r[0]=R8(c->r[3]+0x00003187u); // 80053924
  cmpu(c,0,c->r[0],0x00000080u); // 80053928
  if (!crb(c,2)) { goto L_8005395C; } // 8005392C
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 80053930
  c->r[9]=0u+0x80050000u; // 80053934
  c->r[5]=R32(c->r[13]+0xFFFF8C80u); // 80053938
  c->r[4]=c->r[31]+0x00000000u; // 8005393C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80053940
  c->r[6]=c->r[31]+0x00000100u; // 80053944
  c->r[9]=c->r[9]+0x00003C50u; // 80053948
  c->r[7]=0u+0x00000000u; // 8005394C
  c->r[8]=0u+0x00000000u; // 80053950
  c->lr=0x80053958u; f_800584C0(c); // 80053954
  goto L_80053A9C; // 80053958
L_8005395C:;
  c->r[3]=R32(c->r[13]+0xFFFF8C68u); // 8005395C
  c->r[8]=0u+0x80050000u; // 80053960
  c->r[7]=c->r[31]+0x00000100u; // 80053964
  c->r[4]=0u+0x00000000u; // 80053968
  c->r[3]=R32(c->r[3]+0x00000000u); // 8005396C
  c->r[8]=c->r[8]+0x00003C50u; // 80053970
  c->r[5]=0u+0x00000000u; // 80053974
  c->r[6]=0u+0x00000000u; // 80053978
  c->lr=0x80053980u; f_80058250(c); // 8005397C
  goto L_80053A9C; // 80053980
L_80053984:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80053984
  cmps(c,0,(int32_t)c->r[0],0); // 80053988
  if (crb(c,2)) { goto L_800539F8; } // 8005398C
  c->r[28]=R32(c->r[13]+0xFFFF8CB0u); // 80053990
  c->r[3]=c->r[31]+0x00004B20u; // 80053994
  c->r[0]=0u+0x00000001u; // 80053998
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 8005399C
  c->r[4]=0u+0x00000000u; // 800539A0
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 800539A4
  c->r[0]=0u+0x0000000Au; // 800539A8
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800539AC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800539B0
  c->r[12]=R32(c->r[28]+0x00000028u); // 800539B4
  cmps(c,0,(int32_t)c->r[12],0); // 800539B8
  if (crb(c,2)) { goto L_800539D0; } // 800539BC
  c->r[4]=c->r[28]|c->r[28]; // 800539C0
  c->r[3]=0u+0xFFFFFFFDu; // 800539C4
  c->ctr=c->r[12]; // 800539C8
  if (true) { c->lr=0x800539D0u; dispatch(c,c->ctr); } // 800539CC
L_800539D0:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 800539D0
  cmps(c,0,(int32_t)c->r[12],0); // 800539D4
  if (crb(c,2)) { goto L_800539EC; } // 800539D8
  c->r[4]=c->r[28]|c->r[28]; // 800539DC
  c->r[3]=0u+0x00000000u; // 800539E0
  c->ctr=c->r[12]; // 800539E4
  if (true) { c->lr=0x800539ECu; dispatch(c,c->ctr); } // 800539E8
L_800539EC:;
  c->lr=0x800539F0u; f_80054C70(c); // 800539EC
  c->r[0]=0u+0x00000001u; // 800539F0
  goto L_800539FC; // 800539F4
L_800539F8:;
  c->r[0]=0u+0x00000000u; // 800539F8
L_800539FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800539FC
  if (!crb(c,2)) { goto L_80053A9C; } // 80053A00
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80053A04
  c->r[0]=0u+0x00000006u; // 80053A08
  c->r[3]=0u+0x00000001u; // 80053A0C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80053A10
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80053A14
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80053A18
  cmps(c,0,(int32_t)c->r[0],0); // 80053A1C
  if (!crb(c,2)) { goto L_80053A9C; } // 80053A20
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80053A24
  cmps(c,0,(int32_t)c->r[0],0); // 80053A28
  if (!crb(c,2)) { goto L_80053A9C; } // 80053A2C
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80053A30
  c->r[3]=c->r[31]+0x00004B80u; // 80053A34
  c->lr=0x80053A3Cu; f_80043E70(c); // 80053A38
  c->lr=0x80053A40u; f_8004DAC0(c); // 80053A3C
  c->r[5]=0u+0x80000000u; // 80053A40
  c->r[4]=0u+0x10620000u; // 80053A44
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80053A48
  c->r[9]=0u+0x80050000u; // 80053A4C
  c->r[6]=c->r[3]|c->r[3]; // 80053A50
  c->r[4]=c->r[4]+0x00004DD3u; // 80053A54
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80053A58
  c->r[3]=c->r[31]+0x00004B80u; // 80053A5C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80053A60
  c->r[9]=c->r[9]+0x00004C40u; // 80053A64
  c->r[5]=0u+0x00000000u; // 80053A68
  c->r[7]=0u+0x00000000u; // 80053A6C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80053A70
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80053A74
  c->lr=0x80053A7Cu; f_80044140(c); // 80053A78
  goto L_80053A9C; // 80053A7C
L_80053A80:;
  c->r[3]=0u+0x00000027u; // 80053A80
  c->r[4]=0u+0x00000000u; // 80053A84
  c->r[5]=0u+0x00000000u; // 80053A88
  c->lr=0x80053A90u; f_80051EC0(c); // 80053A8C
  c->r[3]=0u+0x80050000u; // 80053A90
  c->r[3]=c->r[3]+0x00002750u; // 80053A94
  c->lr=0x80053A9Cu; f_80059200(c); // 80053A98
L_80053A9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053A9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053AA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053AA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053AA8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80053AAC
  c->lr=c->r[0]; // 80053AB0
  c->r[1]=c->r[1]+0x00000020u; // 80053AB4
  return; // 80053AB8
}

// cbForStateOpenPartition
void f_80053AC0(Ctx* __restrict c) {
  trace_call(0x80053AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053AC0
  c->r[0]=c->lr; // 80053AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80053AD0
  c->r[30]=c->r[3]|c->r[3]; // 80053AD4
  c->lr=0x80053ADCu; f_80049A20(c); // 80053AD8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80053AE0
  if (!crb(c,2)) { goto L_80053AF8; } // 80053AE4
  c->r[4]=0u+0x801A0000u; // 80053AE8
  c->r[4]=c->r[4]+0x000006C0u; // 80053AEC
  W32(c->r[4]+0x00000078u,c->r[30]); // 80053AF0
  goto L_80053B14; // 80053AF4
L_80053AF8:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053AF8
  c->r[5]=0u+0x801A0000u; // 80053AFC
  c->r[5]=c->r[5]+0x000006C0u; // 80053B00
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80053B04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053B08
  c->r[4]=c->r[5]+c->r[0]; // 80053B0C
  W32(c->r[4]+0x00000028u,c->r[30]); // 80053B10
L_80053B14:;
  c->lr=0x80053B18u; f_80049A60(c); // 80053B14
  cmpu(c,0,c->r[30],0x00000010u); // 80053B18
  if (!crb(c,2)) { goto L_80053B38; } // 80053B1C
  c->r[3]=0u+0x01230000u; // 80053B20
  c->r[4]=0u+0x80050000u; // 80053B24
  c->r[3]=c->r[3]+0x00004568u; // 80053B28
  c->r[4]=c->r[4]+0x00002540u; // 80053B2C
  c->lr=0x80053B34u; f_80057720(c); // 80053B30
  goto L_80053C30; // 80053B34
L_80053B38:;
  cmpu(c,0,c->r[30],0x00000020u); // 80053B38
  if (!crb(c,2)) { goto L_80053B58; } // 80053B3C
  c->r[3]=0u+0x01230000u; // 80053B40
  c->r[4]=0u+0x80050000u; // 80053B44
  c->r[3]=c->r[3]+0x00004569u; // 80053B48
  c->r[4]=c->r[4]+0x00002540u; // 80053B4C
  c->lr=0x80053B54u; f_80057720(c); // 80053B50
  goto L_80053C30; // 80053B54
L_80053B58:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80053B58
  if (crb(c,2)) { goto L_80053C14; } // 80053B5C
  c->r[30]=0u+0x00000000u; // 80053B60
  W32(c->r[13]+0xFFFF8C38u,c->r[30]); // 80053B64
  c->r[3]=0u+0x00000000u; // 80053B68
  c->lr=0x80053B70u; f_8005A1B0(c); // 80053B6C
  c->lr=0x80053B74u; f_80049A20(c); // 80053B70
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053B74
  c->r[31]=c->r[3]|c->r[3]; // 80053B78
  cmpu(c,0,c->r[0],0x00000005u); // 80053B7C
  if (crb(c,0)) { goto L_80053B88; } // 80053B80
  W32(c->r[13]+0xFFFF8C20u,c->r[30]); // 80053B84
L_80053B88:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053B88
  c->r[30]=0u+0x801A0000u; // 80053B8C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80053B90
  c->r[30]=c->r[30]+0x000006C0u; // 80053B94
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053B98
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053B9C
  c->r[7]=0u+0x00000001u; // 80053BA0
  c->r[5]=0u+0x00000108u; // 80053BA4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80053BA8
  c->r[4]=0u+0x00000020u; // 80053BAC
  c->r[6]=c->r[30]+c->r[6]; // 80053BB0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80053BB4
  c->r[3]=c->r[30]+c->r[3]; // 80053BB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053BBC
  W32(c->r[3]+0x00000020u,c->r[5]); // 80053BC0
  c->r[3]=c->r[30]+c->r[0]; // 80053BC4
  W32(c->r[3]+0x00000024u,c->r[4]); // 80053BC8
  c->lr=0x80053BD0u; f_8004DAC0(c); // 80053BCC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053BD0
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053BD4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053BD8
  c->r[0]=c->r[4]+0x00000001u; // 80053BDC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80053BE0
  c->r[4]=c->r[30]+c->r[5]; // 80053BE4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80053BE8
  c->r[3]=c->r[31]|c->r[31]; // 80053BEC
  c->lr=0x80053BF4u; f_80049A60(c); // 80053BF0
  c->r[3]=0u+0x801A0000u; // 80053BF4
  c->r[6]=0u+0x80050000u; // 80053BF8
  c->r[3]=c->r[3]+0x00000380u; // 80053BFC
  c->r[4]=0u+0x00000020u; // 80053C00
  c->r[6]=c->r[6]+0x00003F90u; // 80053C04
  c->r[5]=0u+0x00000108u; // 80053C08
  c->lr=0x80053C10u; f_800599D0(c); // 80053C0C
  goto L_80053C30; // 80053C10
L_80053C14:;
  c->r[3]=0u+0x00000027u; // 80053C14
  c->r[4]=0u+0x00000000u; // 80053C18
  c->r[5]=0u+0x00000000u; // 80053C1C
  c->lr=0x80053C24u; f_80051EC0(c); // 80053C20
  c->r[3]=0u+0x80050000u; // 80053C24
  c->r[3]=c->r[3]+0x00002750u; // 80053C28
  c->lr=0x80053C30u; f_80059200(c); // 80053C2C
L_80053C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053C34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80053C38
  c->lr=c->r[0]; // 80053C3C
  c->r[1]=c->r[1]+0x00000010u; // 80053C40
  return; // 80053C44
}

// cbForStateOpenPartition2
void f_80053C50(Ctx* __restrict c) {
  trace_call(0x80053C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053C50
  c->r[0]=c->lr; // 80053C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053C5C
  c->r[31]=c->r[3]|c->r[3]; // 80053C60
  c->lr=0x80053C68u; f_80049A20(c); // 80053C64
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053C68
  cmps(c,0,(int32_t)c->r[0],0); // 80053C6C
  if (!crb(c,2)) { goto L_80053C84; } // 80053C70
  c->r[4]=0u+0x801A0000u; // 80053C74
  c->r[4]=c->r[4]+0x000006C0u; // 80053C78
  W32(c->r[4]+0x00000078u,c->r[31]); // 80053C7C
  goto L_80053C9C; // 80053C80
L_80053C84:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053C84
  c->r[4]=0u+0x801A0000u; // 80053C88
  c->r[4]=c->r[4]+0x000006C0u; // 80053C8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053C90
  c->r[4]=c->r[4]+c->r[0]; // 80053C94
  W32(c->r[4]+0x00000014u,c->r[31]); // 80053C98
L_80053C9C:;
  c->lr=0x80053CA0u; f_80049A60(c); // 80053C9C
  cmpu(c,0,c->r[31],0x00000010u); // 80053CA0
  if (!crb(c,2)) { goto L_80053CC0; } // 80053CA4
  c->r[3]=0u+0x01230000u; // 80053CA8
  c->r[4]=0u+0x80050000u; // 80053CAC
  c->r[3]=c->r[3]+0x00004568u; // 80053CB0
  c->r[4]=c->r[4]+0x00002540u; // 80053CB4
  c->lr=0x80053CBCu; f_80057720(c); // 80053CB8
  goto L_80053DA0; // 80053CBC
L_80053CC0:;
  cmpu(c,0,c->r[31],0x00000020u); // 80053CC0
  if (!crb(c,2)) { goto L_80053CE0; } // 80053CC4
  c->r[3]=0u+0x01230000u; // 80053CC8
  c->r[4]=0u+0x80050000u; // 80053CCC
  c->r[3]=c->r[3]+0x00004569u; // 80053CD0
  c->r[4]=c->r[4]+0x00002540u; // 80053CD4
  c->lr=0x80053CDCu; f_80057720(c); // 80053CD8
  goto L_80053DA0; // 80053CDC
L_80053CE0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80053CE0
  if (crb(c,2)) { goto L_80053D84; } // 80053CE4
  c->r[4]=0u+0x00000000u; // 80053CE8
  W32(c->r[13]+0xFFFF8C38u,c->r[4]); // 80053CEC
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80053CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80053CF4
  if (crb(c,2)) { goto L_80053D60; } // 80053CF8
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80053CFC
  c->r[3]=0u+0x801A0000u; // 80053D00
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 80053D04
  c->r[3]=c->r[3]+0x000003A0u; // 80053D08
  c->r[0]=0u+0x0000000Au; // 80053D0C
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80053D10
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80053D14
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80053D18
  c->r[12]=R32(c->r[31]+0x00000028u); // 80053D1C
  cmps(c,0,(int32_t)c->r[12],0); // 80053D20
  if (crb(c,2)) { goto L_80053D38; } // 80053D24
  c->r[4]=c->r[31]|c->r[31]; // 80053D28
  c->r[3]=0u+0xFFFFFFFDu; // 80053D2C
  c->ctr=c->r[12]; // 80053D30
  if (true) { c->lr=0x80053D38u; dispatch(c,c->ctr); } // 80053D34
L_80053D38:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80053D38
  cmps(c,0,(int32_t)c->r[12],0); // 80053D3C
  if (crb(c,2)) { goto L_80053D54; } // 80053D40
  c->r[4]=c->r[31]|c->r[31]; // 80053D44
  c->r[3]=0u+0x00000000u; // 80053D48
  c->ctr=c->r[12]; // 80053D4C
  if (true) { c->lr=0x80053D54u; dispatch(c,c->ctr); } // 80053D50
L_80053D54:;
  c->lr=0x80053D58u; f_80054C70(c); // 80053D54
  c->r[0]=0u+0x00000001u; // 80053D58
  goto L_80053D64; // 80053D5C
L_80053D60:;
  c->r[0]=0u+0x00000000u; // 80053D60
L_80053D64:;
  cmps(c,0,(int32_t)c->r[0],0); // 80053D64
  if (!crb(c,2)) { goto L_80053DA0; } // 80053D68
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80053D6C
  c->r[0]=0u+0x00000001u; // 80053D70
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80053D74
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80053D78
  c->lr=0x80053D80u; f_80054F90(c); // 80053D7C
  goto L_80053DA0; // 80053D80
L_80053D84:;
  c->r[3]=0u+0x00000027u; // 80053D84
  c->r[4]=0u+0x00000000u; // 80053D88
  c->r[5]=0u+0x00000000u; // 80053D8C
  c->lr=0x80053D94u; f_80051EC0(c); // 80053D90
  c->r[3]=0u+0x80050000u; // 80053D94
  c->r[3]=c->r[3]+0x00002750u; // 80053D98
  c->lr=0x80053DA0u; f_80059200(c); // 80053D9C
L_80053DA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053DA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053DA4
  c->lr=c->r[0]; // 80053DA8
  c->r[1]=c->r[1]+0x00000010u; // 80053DAC
  return; // 80053DB0
}

// cbForStateCheckID1
void f_80053DC0(Ctx* __restrict c) {
  trace_call(0x80053DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053DC0
  c->r[0]=c->lr; // 80053DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053DCC
  c->r[31]=c->r[3]|c->r[3]; // 80053DD0
  c->lr=0x80053DD8u; f_80049A20(c); // 80053DD4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053DD8
  cmps(c,0,(int32_t)c->r[0],0); // 80053DDC
  if (!crb(c,2)) { goto L_80053DF4; } // 80053DE0
  c->r[4]=0u+0x801A0000u; // 80053DE4
  c->r[4]=c->r[4]+0x000006C0u; // 80053DE8
  W32(c->r[4]+0x00000078u,c->r[31]); // 80053DEC
  goto L_80053E0C; // 80053DF0
L_80053DF4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053DF4
  c->r[4]=0u+0x801A0000u; // 80053DF8
  c->r[4]=c->r[4]+0x000006C0u; // 80053DFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053E00
  c->r[4]=c->r[4]+c->r[0]; // 80053E04
  W32(c->r[4]+0x00000014u,c->r[31]); // 80053E08
L_80053E0C:;
  c->lr=0x80053E10u; f_80049A60(c); // 80053E0C
  cmpu(c,0,c->r[31],0x00000010u); // 80053E10
  if (!crb(c,2)) { goto L_80053E30; } // 80053E14
  c->r[3]=0u+0x01230000u; // 80053E18
  c->r[4]=0u+0x80050000u; // 80053E1C
  c->r[3]=c->r[3]+0x00004568u; // 80053E20
  c->r[4]=c->r[4]+0x00002540u; // 80053E24
  c->lr=0x80053E2Cu; f_80057720(c); // 80053E28
  goto L_80053F74; // 80053E2C
L_80053E30:;
  cmpu(c,0,c->r[31],0x00000020u); // 80053E30
  if (!crb(c,2)) { goto L_80053E50; } // 80053E34
  c->r[3]=0u+0x01230000u; // 80053E38
  c->r[4]=0u+0x80050000u; // 80053E3C
  c->r[3]=c->r[3]+0x00004569u; // 80053E40
  c->r[4]=c->r[4]+0x00002540u; // 80053E44
  c->lr=0x80053E4Cu; f_80057720(c); // 80053E48
  goto L_80053F74; // 80053E4C
L_80053E50:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80053E50
  if (crb(c,2)) { goto L_80053E70; } // 80053E54
  c->r[3]=0u+0x01230000u; // 80053E58
  c->r[4]=0u+0x80050000u; // 80053E5C
  c->r[3]=c->r[3]+0x00004567u; // 80053E60
  c->r[4]=c->r[4]+0x00002520u; // 80053E64
  c->lr=0x80053E6Cu; f_80057720(c); // 80053E68
  goto L_80053F74; // 80053E6C
L_80053E70:;
  c->r[4]=0u+0x00000000u; // 80053E70
  W32(c->r[13]+0xFFFF8C38u,c->r[4]); // 80053E74
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80053E78
  cmps(c,0,(int32_t)c->r[0],0); // 80053E7C
  if (crb(c,2)) { goto L_80053EEC; } // 80053E80
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80053E84
  c->r[3]=0u+0x801A0000u; // 80053E88
  c->r[3]=c->r[3]+0x000003A0u; // 80053E8C
  c->r[0]=0u+0x00000001u; // 80053E90
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80053E94
  c->r[0]=0u+0x0000000Au; // 80053E98
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80053E9C
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80053EA0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80053EA4
  c->r[12]=R32(c->r[31]+0x00000028u); // 80053EA8
  cmps(c,0,(int32_t)c->r[12],0); // 80053EAC
  if (crb(c,2)) { goto L_80053EC4; } // 80053EB0
  c->r[4]=c->r[31]|c->r[31]; // 80053EB4
  c->r[3]=0u+0xFFFFFFFDu; // 80053EB8
  c->ctr=c->r[12]; // 80053EBC
  if (true) { c->lr=0x80053EC4u; dispatch(c,c->ctr); } // 80053EC0
L_80053EC4:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80053EC4
  cmps(c,0,(int32_t)c->r[12],0); // 80053EC8
  if (crb(c,2)) { goto L_80053EE0; } // 80053ECC
  c->r[4]=c->r[31]|c->r[31]; // 80053ED0
  c->r[3]=0u+0x00000000u; // 80053ED4
  c->ctr=c->r[12]; // 80053ED8
  if (true) { c->lr=0x80053EE0u; dispatch(c,c->ctr); } // 80053EDC
L_80053EE0:;
  c->lr=0x80053EE4u; f_80054C70(c); // 80053EE0
  c->r[0]=0u+0x00000001u; // 80053EE4
  goto L_80053EF0; // 80053EE8
L_80053EEC:;
  c->r[0]=0u+0x00000000u; // 80053EEC
L_80053EF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80053EF0
  if (!crb(c,2)) { goto L_80053F74; } // 80053EF4
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80053EF8
  c->r[0]=0u+0x00000006u; // 80053EFC
  c->r[3]=0u+0x00000001u; // 80053F00
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80053F04
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80053F08
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80053F0C
  cmps(c,0,(int32_t)c->r[0],0); // 80053F10
  if (!crb(c,2)) { goto L_80053F74; } // 80053F14
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80053F18
  cmps(c,0,(int32_t)c->r[0],0); // 80053F1C
  if (!crb(c,2)) { goto L_80053F74; } // 80053F20
  c->r[31]=0u+0x801A0000u; // 80053F24
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80053F28
  c->r[3]=c->r[31]+0x00000400u; // 80053F2C
  c->lr=0x80053F34u; f_80043E70(c); // 80053F30
  c->lr=0x80053F38u; f_8004DAC0(c); // 80053F34
  c->r[5]=0u+0x80000000u; // 80053F38
  c->r[4]=0u+0x10620000u; // 80053F3C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80053F40
  c->r[9]=0u+0x80050000u; // 80053F44
  c->r[6]=c->r[3]|c->r[3]; // 80053F48
  c->r[4]=c->r[4]+0x00004DD3u; // 80053F4C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80053F50
  c->r[3]=c->r[31]+0x00000400u; // 80053F54
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80053F58
  c->r[9]=c->r[9]+0x00004C40u; // 80053F5C
  c->r[5]=0u+0x00000000u; // 80053F60
  c->r[7]=0u+0x00000000u; // 80053F64
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80053F68
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80053F6C
  c->lr=0x80053F74u; f_80044140(c); // 80053F70
L_80053F74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053F78
  c->lr=c->r[0]; // 80053F7C
  c->r[1]=c->r[1]+0x00000010u; // 80053F80
  return; // 80053F84
}

// cbForStateCheckID2
void f_80053F90(Ctx* __restrict c) {
  trace_call(0x80053F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053F90
  c->r[0]=c->lr; // 80053F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053F9C
  c->r[31]=c->r[3]|c->r[3]; // 80053FA0
  c->lr=0x80053FA8u; f_80049A20(c); // 80053FA4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80053FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80053FAC
  if (!crb(c,2)) { goto L_80053FC4; } // 80053FB0
  c->r[4]=0u+0x801A0000u; // 80053FB4
  c->r[4]=c->r[4]+0x000006C0u; // 80053FB8
  W32(c->r[4]+0x00000078u,c->r[31]); // 80053FBC
  goto L_80053FE0; // 80053FC0
L_80053FC4:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80053FC4
  c->r[5]=0u+0x801A0000u; // 80053FC8
  c->r[5]=c->r[5]+0x000006C0u; // 80053FCC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80053FD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80053FD4
  c->r[4]=c->r[5]+c->r[0]; // 80053FD8
  W32(c->r[4]+0x00000028u,c->r[31]); // 80053FDC
L_80053FE0:;
  c->lr=0x80053FE4u; f_80049A60(c); // 80053FE0
  cmpu(c,0,c->r[31],0x00000010u); // 80053FE4
  if (!crb(c,2)) { goto L_80054004; } // 80053FE8
  c->r[3]=0u+0x01230000u; // 80053FEC
  c->r[4]=0u+0x80050000u; // 80053FF0
  c->r[3]=c->r[3]+0x00004568u; // 80053FF4
  c->r[4]=c->r[4]+0x00002540u; // 80053FF8
  c->lr=0x80054000u; f_80057720(c); // 80053FFC
  goto L_80054110; // 80054000
L_80054004:;
  cmpu(c,0,c->r[31],0x00000020u); // 80054004
  if (!crb(c,2)) { goto L_80054024; } // 80054008
  c->r[3]=0u+0x01230000u; // 8005400C
  c->r[4]=0u+0x80050000u; // 80054010
  c->r[3]=c->r[3]+0x00004569u; // 80054014
  c->r[4]=c->r[4]+0x00002540u; // 80054018
  c->lr=0x80054020u; f_80057720(c); // 8005401C
  goto L_80054110; // 80054020
L_80054024:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80054024
  if (crb(c,2)) { goto L_800540F4; } // 80054028
  c->r[5]=0u+0x80050000u; // 8005402C
  c->r[0]=0u+0x00000000u; // 80054030
  c->r[5]=c->r[5]+0x000020F0u; // 80054034
  c->r[3]=0u+0x801A0000u; // 80054038
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 8005403C
  c->r[3]=c->r[3]+0x00000380u; // 80054040
  c->r[4]=R32(c->r[13]+0xFFFF8CA8u); // 80054044
  W32(c->r[13]+0xFFFF8CB4u,c->r[5]); // 80054048
  c->r[0]=R32(c->r[3]+0x00000008u); // 8005404C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 80054050
  cmpu(c,0,c->r[3],c->r[0]); // 80054054
  if (!crb(c,0)) { goto L_80054074; } // 80054058
  c->r[5]=0u+0x80140000u; // 8005405C
  c->r[3]=c->r[13]+0xFFFF8174u; // 80054060
  c->r[5]=c->r[5]+0x00005B58u; // 80054064
  c->r[4]=0u+0x00000445u; // 80054068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005406C
  c->lr=0x80054074u; f_80045D00(c); // 80054070
L_80054074:;
  c->r[3]=0u+0x00000000u; // 80054074
  c->lr=0x8005407Cu; f_8005A1B0(c); // 80054078
  c->r[6]=R32(c->r[13]+0xFFFF8C58u); // 8005407C
  c->r[31]=0u+0x801A0000u; // 80054080
  c->r[31]=c->r[31]+0x00000380u; // 80054084
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 80054088
  c->r[4]=R32(c->r[31]+0x00000008u); // 8005408C
  c->r[3]=0u+0x00000001u; // 80054090
  c->r[0]=~(c->r[0]|c->r[0]); // 80054094
  c->r[7]=R32(c->r[31]+0x00000004u); // 80054098
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8005409C
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800540A0
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 800540A4
  c->r[0]=c->r[5]+0x0000001Fu; // 800540A8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800540AC
  c->lr=0x800540B4u; f_80051EC0(c); // 800540B0
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 800540B4
  c->r[6]=0u+0x80050000u; // 800540B8
  c->r[3]=R32(c->r[31]+0x00000008u); // 800540BC
  c->r[6]=c->r[6]+0x00002270u; // 800540C0
  c->r[0]=~(c->r[0]|c->r[0]); // 800540C4
  c->r[7]=R32(c->r[13]+0xFFFF8CA8u); // 800540C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800540CC
  c->r[5]=R32(c->r[31]+0x00000004u); // 800540D0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800540D4
  c->r[0]=R32(c->r[13]+0xFFFF8C58u); // 800540D8
  c->r[4]=c->r[3]+0x0000001Fu; // 800540DC
  c->r[3]=R32(c->r[7]+0x00000038u); // 800540E0
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 800540E4
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 800540E8
  c->lr=0x800540F0u; f_800599D0(c); // 800540EC
  goto L_80054110; // 800540F0
L_800540F4:;
  c->r[3]=0u+0x00000027u; // 800540F4
  c->r[4]=0u+0x00000000u; // 800540F8
  c->r[5]=0u+0x00000000u; // 800540FC
  c->lr=0x80054104u; f_80051EC0(c); // 80054100
  c->r[3]=0u+0x80050000u; // 80054104
  c->r[3]=c->r[3]+0x00002750u; // 80054108
  c->lr=0x80054110u; f_80059200(c); // 8005410C
L_80054110:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80054114
  c->lr=c->r[0]; // 80054118
  c->r[1]=c->r[1]+0x00000010u; // 8005411C
  return; // 80054120
}

// fn_80054130
void f_80054130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054130
  c->r[0]=c->lr; // 80054134
  c->r[3]=0u+0x00000001u; // 80054138
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005413C
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054140
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80054144
  cmpu(c,0,c->r[0],0x0000002Au); // 80054148
  if (crb(c,1)) { goto L_800541C8; } // 8005414C
  c->r[3]=0u+0x80140000u; // 80054150
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80054154
  c->r[3]=c->r[3]+0x00005B8Cu; // 80054158
  c->r[3]=R32(c->r[3]+c->r[0]); // 8005415C
  c->ctr=c->r[3]; // 80054160
  if (true) { switch (c->ctr) { case 0x80054168u: goto L_80054168; case 0x8005419Cu: goto L_8005419C; case 0x800541A4u: goto L_800541A4; case 0x800541BCu: goto L_800541BC; case 0x800541C8u: goto L_800541C8; default: break; } dispatch(c,c->ctr); return; } // 80054164
L_80054168:;
  c->lr=0x8005416Cu; f_80056AF0(c); // 80054168
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 8005416C
  c->r[3]=0u+0x801A0000u; // 80054170
  c->r[3]=c->r[3]+0x000003A0u; // 80054174
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80054178
  c->r[12]=R32(c->r[4]+0x00000028u); // 8005417C
  cmps(c,0,(int32_t)c->r[12],0); // 80054180
  if (crb(c,2)) { goto L_80054194; } // 80054184
  c->r[3]=0u+0xFFFFFFFCu; // 80054188
  c->ctr=c->r[12]; // 8005418C
  if (true) { c->lr=0x80054194u; dispatch(c,c->ctr); } // 80054190
L_80054194:;
  c->lr=0x80054198u; f_80054C70(c); // 80054194
  goto L_800541E4; // 80054198
L_8005419C:;
  c->r[0]=0u+0x00000000u; // 8005419C
  W32(c->r[13]+0xFFFF8C90u,c->r[0]); // 800541A0
L_800541A4:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800541A4
  c->r[0]=0u+0x00000001u; // 800541A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800541AC
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800541B0
  c->lr=0x800541B8u; f_80054F90(c); // 800541B4
  goto L_800541E4; // 800541B8
L_800541BC:;
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 800541BC
  cmps(c,0,(int32_t)c->r[0],0); // 800541C0
  if (!crb(c,2)) { goto L_800541E4; } // 800541C4
L_800541C8:;
  c->r[0]=0u+0x00000000u; // 800541C8
  W32(c->r[13]+0xFFFF8C90u,c->r[0]); // 800541CC
  c->r[3]=0u+0x00000001u; // 800541D0
  c->lr=0x800541D8u; f_80059370(c); // 800541D4
  c->r[3]=0u+0x80050000u; // 800541D8
  c->r[3]=c->r[3]+0x00004450u; // 800541DC
  c->lr=0x800541E4u; f_80059380(c); // 800541E0
L_800541E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800541E4
  c->lr=c->r[0]; // 800541E8
  c->r[1]=c->r[1]+0x00000010u; // 800541EC
  return; // 800541F0
  unimpl(c,0x800541F4u,"00000000"); // 800541F4
  unimpl(c,0x800541F8u,"00000000"); // 800541F8
  unimpl(c,0x800541FCu,"00000000"); // 800541FC
  f_80054200(c); return; // fall through
}

// ResetAlarmHandler
void f_80054200(Ctx* __restrict c) {
  trace_call(0x80054200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054200
  c->r[0]=c->lr; // 80054204
  c->r[3]=0u+0x80000000u; // 80054208
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005420C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054210
  W32(c->r[1]+0x00000008u,c->r[30]); // 80054214
  c->r[0]=R16(c->r[3]+0x000030E6u); // 80054218
  cmpu(c,0,c->r[0],0x00008003u); // 8005421C
  if (!crb(c,2)) { goto L_800542D0; } // 80054220
  c->r[4]=0u+0x80050000u; // 80054224
  c->r[3]=0u+0x00000000u; // 80054228
  c->r[4]=c->r[4]+0x00004540u; // 8005422C
  W32(c->r[13]+0xFFFF8CB4u,c->r[4]); // 80054230
  c->lr=0x80054238u; f_8005A1B0(c); // 80054234
  c->lr=0x8005423Cu; f_80049A20(c); // 80054238
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005423C
  c->r[31]=c->r[3]|c->r[3]; // 80054240
  cmpu(c,0,c->r[0],0x00000005u); // 80054244
  if (crb(c,0)) { goto L_80054254; } // 80054248
  c->r[0]=0u+0x00000000u; // 8005424C
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054250
L_80054254:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054254
  c->r[30]=0u+0x801A0000u; // 80054258
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 8005425C
  c->r[30]=c->r[30]+0x000006C0u; // 80054260
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054264
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054268
  c->r[6]=0u+0x00000025u; // 8005426C
  c->r[4]=0u+0x00000000u; // 80054270
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80054274
  c->r[5]=c->r[30]+c->r[5]; // 80054278
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8005427C
  c->r[3]=c->r[30]+c->r[3]; // 80054280
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054284
  W32(c->r[3]+0x00000020u,c->r[4]); // 80054288
  c->r[3]=c->r[30]+c->r[0]; // 8005428C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80054290
  c->lr=0x80054298u; f_8004DAC0(c); // 80054294
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054298
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 8005429C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800542A0
  c->r[0]=c->r[4]+0x00000001u; // 800542A4
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800542A8
  c->r[4]=c->r[30]+c->r[5]; // 800542AC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800542B0
  c->r[3]=c->r[31]|c->r[31]; // 800542B4
  c->lr=0x800542BCu; f_80049A60(c); // 800542B8
  c->r[4]=0u+0x80050000u; // 800542BC
  c->r[3]=0u+0x00020000u; // 800542C0
  c->r[4]=c->r[4]+0x00004610u; // 800542C4
  c->lr=0x800542CCu; f_80059840(c); // 800542C8
  goto L_80054438; // 800542CC
L_800542D0:;
  c->r[3]=0u+0x801A0000u; // 800542D0
  c->r[4]=0u+0x00000020u; // 800542D4
  c->r[3]=c->r[3]+0x00000440u; // 800542D8
  c->lr=0x800542E0u; f_80044FE0(c); // 800542DC
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 800542E0
  c->r[3]=0u+0x80050000u; // 800542E4
  c->r[3]=c->r[3]+0x00004850u; // 800542E8
  W32(c->r[13]+0xFFFF8CB4u,c->r[3]); // 800542EC
  cmpu(c,0,c->r[0],0x00000028u); // 800542F0
  if (!crb(c,2)) { goto L_80054394; } // 800542F4
  c->r[4]=0u+0x00000000u; // 800542F8
  W32(c->r[13]+0xFFFF8C38u,c->r[4]); // 800542FC
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80054300
  cmps(c,0,(int32_t)c->r[0],0); // 80054304
  if (crb(c,2)) { goto L_80054370; } // 80054308
  c->r[30]=R32(c->r[13]+0xFFFF8CB0u); // 8005430C
  c->r[3]=0u+0x801A0000u; // 80054310
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 80054314
  c->r[3]=c->r[3]+0x000003A0u; // 80054318
  c->r[0]=0u+0x0000000Au; // 8005431C
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80054320
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80054324
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80054328
  c->r[12]=R32(c->r[30]+0x00000028u); // 8005432C
  cmps(c,0,(int32_t)c->r[12],0); // 80054330
  if (crb(c,2)) { goto L_80054348; } // 80054334
  c->r[4]=c->r[30]|c->r[30]; // 80054338
  c->r[3]=0u+0xFFFFFFFDu; // 8005433C
  c->ctr=c->r[12]; // 80054340
  if (true) { c->lr=0x80054348u; dispatch(c,c->ctr); } // 80054344
L_80054348:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80054348
  cmps(c,0,(int32_t)c->r[12],0); // 8005434C
  if (crb(c,2)) { goto L_80054364; } // 80054350
  c->r[4]=c->r[30]|c->r[30]; // 80054354
  c->r[3]=0u+0x00000000u; // 80054358
  c->ctr=c->r[12]; // 8005435C
  if (true) { c->lr=0x80054364u; dispatch(c,c->ctr); } // 80054360
L_80054364:;
  c->lr=0x80054368u; f_80054C70(c); // 80054364
  c->r[0]=0u+0x00000001u; // 80054368
  goto L_80054374; // 8005436C
L_80054370:;
  c->r[0]=0u+0x00000000u; // 80054370
L_80054374:;
  cmps(c,0,(int32_t)c->r[0],0); // 80054374
  if (!crb(c,2)) { goto L_80054438; } // 80054378
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 8005437C
  c->r[0]=0u+0x00000001u; // 80054380
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054384
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054388
  c->lr=0x80054390u; f_80054F90(c); // 8005438C
  goto L_80054438; // 80054390
L_80054394:;
  c->r[3]=0u+0x00000000u; // 80054394
  c->lr=0x8005439Cu; f_8005A1B0(c); // 80054398
  c->lr=0x800543A0u; f_80049A20(c); // 8005439C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800543A0
  c->r[31]=c->r[3]|c->r[3]; // 800543A4
  cmpu(c,0,c->r[0],0x00000005u); // 800543A8
  if (crb(c,0)) { goto L_800543B8; } // 800543AC
  c->r[0]=0u+0x00000000u; // 800543B0
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800543B4
L_800543B8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800543B8
  c->r[30]=0u+0x801A0000u; // 800543BC
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800543C0
  c->r[30]=c->r[30]+0x000006C0u; // 800543C4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800543C8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800543CC
  c->r[7]=0u+0x00000005u; // 800543D0
  c->r[5]=0u+0x00000000u; // 800543D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800543D8
  c->r[4]=0u+0x00000020u; // 800543DC
  c->r[6]=c->r[30]+c->r[6]; // 800543E0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800543E4
  c->r[3]=c->r[30]+c->r[3]; // 800543E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800543EC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800543F0
  c->r[3]=c->r[30]+c->r[0]; // 800543F4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800543F8
  c->lr=0x80054400u; f_8004DAC0(c); // 800543FC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054400
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80054404
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054408
  c->r[0]=c->r[4]+0x00000001u; // 8005440C
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054410
  c->r[4]=c->r[30]+c->r[5]; // 80054414
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80054418
  c->r[3]=c->r[31]|c->r[31]; // 8005441C
  c->lr=0x80054424u; f_80049A60(c); // 80054420
  c->r[3]=0u+0x801A0000u; // 80054424
  c->r[4]=0u+0x80050000u; // 80054428
  c->r[3]=c->r[3]+0x00000440u; // 8005442C
  c->r[4]=c->r[4]+0x000049D0u; // 80054430
  c->lr=0x80054438u; f_800580C0(c); // 80054434
L_80054438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005443C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80054440
  c->lr=c->r[0]; // 80054444
  c->r[1]=c->r[1]+0x00000010u; // 80054448
  return; // 8005444C
}

// cbForStateReset
void f_80054450(Ctx* __restrict c) {
  trace_call(0x80054450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054450
  c->r[0]=c->lr; // 80054454
  cmpu(c,0,c->r[3],0x00000010u); // 80054458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005445C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054460
  if (!crb(c,2)) { goto L_80054480; } // 80054464
  c->r[3]=0u+0x01230000u; // 80054468
  c->r[4]=0u+0x80050000u; // 8005446C
  c->r[3]=c->r[3]+0x00004568u; // 80054470
  c->r[4]=c->r[4]+0x00002540u; // 80054474
  c->lr=0x8005447Cu; f_80057720(c); // 80054478
  goto L_80054520; // 8005447C
L_80054480:;
  cmpu(c,0,c->r[3],0x00000020u); // 80054480
  if (!crb(c,2)) { goto L_800544A0; } // 80054484
  c->r[3]=0u+0x01230000u; // 80054488
  c->r[4]=0u+0x80050000u; // 8005448C
  c->r[3]=c->r[3]+0x00004569u; // 80054490
  c->r[4]=c->r[4]+0x00002540u; // 80054494
  c->lr=0x8005449Cu; f_80057720(c); // 80054498
  goto L_80054520; // 8005449C
L_800544A0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800544A0
  if (crb(c,2)) { goto L_80054504; } // 800544A4
  c->lr=0x800544ACu; f_8004DAD0(c); // 800544A8
  W32(c->r[13]+0xFFFF8C8Cu,c->r[4]); // 800544AC
  c->r[0]=0u+0x00000000u; // 800544B0
  c->r[31]=0u+0x801A0000u; // 800544B4
  W32(c->r[13]+0xFFFF8C88u,c->r[3]); // 800544B8
  c->r[3]=c->r[31]+0x000004A0u; // 800544BC
  W32(c->r[13]+0xFFFF8C94u,c->r[0]); // 800544C0
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 800544C4
  c->lr=0x800544CCu; f_80043E70(c); // 800544C8
  c->r[4]=0u+0x80000000u; // 800544CC
  c->r[7]=0u+0x80050000u; // 800544D0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800544D4
  c->r[3]=0u+0x10620000u; // 800544D8
  c->r[4]=c->r[3]+0x00004DD3u; // 800544DC
  c->r[7]=c->r[7]+0x00004200u; // 800544E0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800544E4
  c->r[3]=c->r[31]+0x000004A0u; // 800544E8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800544EC
  c->r[5]=0u+0x00000000u; // 800544F0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800544F4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800544F8
  c->lr=0x80054500u; f_800440D0(c); // 800544FC
  goto L_80054520; // 80054500
L_80054504:;
  c->r[3]=0u+0x00000027u; // 80054504
  c->r[4]=0u+0x00000000u; // 80054508
  c->r[5]=0u+0x00000000u; // 8005450C
  c->lr=0x80054514u; f_80051EC0(c); // 80054510
  c->r[3]=0u+0x80050000u; // 80054514
  c->r[3]=c->r[3]+0x00002750u; // 80054518
  c->lr=0x80054520u; f_80059200(c); // 8005451C
L_80054520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80054524
  c->lr=c->r[0]; // 80054528
  c->r[1]=c->r[1]+0x00000010u; // 8005452C
  return; // 80054530
}

// stateDownRotation
void f_80054540(Ctx* __restrict c) {
  trace_call(0x80054540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054540
  c->r[0]=c->lr; // 80054544
  c->r[3]=0u+0x00000000u; // 80054548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005454C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054550
  W32(c->r[1]+0x00000008u,c->r[30]); // 80054554
  c->lr=0x8005455Cu; f_8005A1B0(c); // 80054558
  c->lr=0x80054560u; f_80049A20(c); // 8005455C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054560
  c->r[31]=c->r[3]|c->r[3]; // 80054564
  cmpu(c,0,c->r[0],0x00000005u); // 80054568
  if (crb(c,0)) { goto L_80054578; } // 8005456C
  c->r[0]=0u+0x00000000u; // 80054570
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054574
L_80054578:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054578
  c->r[30]=0u+0x801A0000u; // 8005457C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80054580
  c->r[30]=c->r[30]+0x000006C0u; // 80054584
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054588
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005458C
  c->r[6]=0u+0x00000025u; // 80054590
  c->r[4]=0u+0x00000000u; // 80054594
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80054598
  c->r[5]=c->r[30]+c->r[5]; // 8005459C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 800545A0
  c->r[3]=c->r[30]+c->r[3]; // 800545A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800545A8
  W32(c->r[3]+0x00000020u,c->r[4]); // 800545AC
  c->r[3]=c->r[30]+c->r[0]; // 800545B0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800545B4
  c->lr=0x800545BCu; f_8004DAC0(c); // 800545B8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800545BC
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800545C0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800545C4
  c->r[0]=c->r[4]+0x00000001u; // 800545C8
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800545CC
  c->r[4]=c->r[30]+c->r[5]; // 800545D0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800545D4
  c->r[3]=c->r[31]|c->r[31]; // 800545D8
  c->lr=0x800545E0u; f_80049A60(c); // 800545DC
  c->r[4]=0u+0x80050000u; // 800545E0
  c->r[3]=0u+0x00020000u; // 800545E4
  c->r[4]=c->r[4]+0x00004610u; // 800545E8
  c->lr=0x800545F0u; f_80059840(c); // 800545EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800545F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800545F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800545F8
  c->lr=c->r[0]; // 800545FC
  c->r[1]=c->r[1]+0x00000010u; // 80054600
  return; // 80054604
}

// cbForStateDownRotation
void f_80054610(Ctx* __restrict c) {
  trace_call(0x80054610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054610
  c->r[0]=c->lr; // 80054614
  W32(c->r[1]+0x00000014u,c->r[0]); // 80054618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005461C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80054620
  c->r[30]=c->r[3]|c->r[3]; // 80054624
  c->lr=0x8005462Cu; f_80049A20(c); // 80054628
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005462C
  cmps(c,0,(int32_t)c->r[0],0); // 80054630
  if (!crb(c,2)) { goto L_80054648; } // 80054634
  c->r[4]=0u+0x801A0000u; // 80054638
  c->r[4]=c->r[4]+0x000006C0u; // 8005463C
  W32(c->r[4]+0x00000078u,c->r[30]); // 80054640
  goto L_80054664; // 80054644
L_80054648:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80054648
  c->r[5]=0u+0x801A0000u; // 8005464C
  c->r[5]=c->r[5]+0x000006C0u; // 80054650
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80054654
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054658
  c->r[4]=c->r[5]+c->r[0]; // 8005465C
  W32(c->r[4]+0x00000028u,c->r[30]); // 80054660
L_80054664:;
  c->lr=0x80054668u; f_80049A60(c); // 80054664
  cmpu(c,0,c->r[30],0x00000010u); // 80054668
  if (!crb(c,2)) { goto L_80054688; } // 8005466C
  c->r[3]=0u+0x01230000u; // 80054670
  c->r[4]=0u+0x80050000u; // 80054674
  c->r[3]=c->r[3]+0x00004568u; // 80054678
  c->r[4]=c->r[4]+0x00002540u; // 8005467C
  c->lr=0x80054684u; f_80057720(c); // 80054680
  goto L_80054838; // 80054684
L_80054688:;
  cmpu(c,0,c->r[30],0x00000020u); // 80054688
  if (!crb(c,2)) { goto L_800546A8; } // 8005468C
  c->r[3]=0u+0x01230000u; // 80054690
  c->r[4]=0u+0x80050000u; // 80054694
  c->r[3]=c->r[3]+0x00004569u; // 80054698
  c->r[4]=c->r[4]+0x00002540u; // 8005469C
  c->lr=0x800546A4u; f_80057720(c); // 800546A0
  goto L_80054838; // 800546A4
L_800546A8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800546A8
  if (crb(c,2)) { goto L_8005481C; } // 800546AC
  c->r[3]=0u+0x801A0000u; // 800546B0
  c->r[4]=0u+0x00000020u; // 800546B4
  c->r[3]=c->r[3]+0x00000440u; // 800546B8
  c->lr=0x800546C0u; f_80044FE0(c); // 800546BC
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 800546C0
  c->r[3]=0u+0x80050000u; // 800546C4
  c->r[3]=c->r[3]+0x00004850u; // 800546C8
  W32(c->r[13]+0xFFFF8CB4u,c->r[3]); // 800546CC
  cmpu(c,0,c->r[0],0x00000028u); // 800546D0
  if (!crb(c,2)) { goto L_80054774; } // 800546D4
  c->r[4]=0u+0x00000000u; // 800546D8
  W32(c->r[13]+0xFFFF8C38u,c->r[4]); // 800546DC
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 800546E0
  cmps(c,0,(int32_t)c->r[0],0); // 800546E4
  if (crb(c,2)) { goto L_80054750; } // 800546E8
  c->r[30]=R32(c->r[13]+0xFFFF8CB0u); // 800546EC
  c->r[3]=0u+0x801A0000u; // 800546F0
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 800546F4
  c->r[3]=c->r[3]+0x000003A0u; // 800546F8
  c->r[0]=0u+0x0000000Au; // 800546FC
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80054700
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80054704
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80054708
  c->r[12]=R32(c->r[30]+0x00000028u); // 8005470C
  cmps(c,0,(int32_t)c->r[12],0); // 80054710
  if (crb(c,2)) { goto L_80054728; } // 80054714
  c->r[4]=c->r[30]|c->r[30]; // 80054718
  c->r[3]=0u+0xFFFFFFFDu; // 8005471C
  c->ctr=c->r[12]; // 80054720
  if (true) { c->lr=0x80054728u; dispatch(c,c->ctr); } // 80054724
L_80054728:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80054728
  cmps(c,0,(int32_t)c->r[12],0); // 8005472C
  if (crb(c,2)) { goto L_80054744; } // 80054730
  c->r[4]=c->r[30]|c->r[30]; // 80054734
  c->r[3]=0u+0x00000000u; // 80054738
  c->ctr=c->r[12]; // 8005473C
  if (true) { c->lr=0x80054744u; dispatch(c,c->ctr); } // 80054740
L_80054744:;
  c->lr=0x80054748u; f_80054C70(c); // 80054744
  c->r[0]=0u+0x00000001u; // 80054748
  goto L_80054754; // 8005474C
L_80054750:;
  c->r[0]=0u+0x00000000u; // 80054750
L_80054754:;
  cmps(c,0,(int32_t)c->r[0],0); // 80054754
  if (!crb(c,2)) { goto L_80054838; } // 80054758
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 8005475C
  c->r[0]=0u+0x00000001u; // 80054760
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054764
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054768
  c->lr=0x80054770u; f_80054F90(c); // 8005476C
  goto L_80054838; // 80054770
L_80054774:;
  c->r[3]=0u+0x00000000u; // 80054774
  c->lr=0x8005477Cu; f_8005A1B0(c); // 80054778
  c->lr=0x80054780u; f_80049A20(c); // 8005477C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054780
  c->r[31]=c->r[3]|c->r[3]; // 80054784
  cmpu(c,0,c->r[0],0x00000005u); // 80054788
  if (crb(c,0)) { goto L_80054798; } // 8005478C
  c->r[0]=0u+0x00000000u; // 80054790
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054794
L_80054798:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054798
  c->r[30]=0u+0x801A0000u; // 8005479C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 800547A0
  c->r[30]=c->r[30]+0x000006C0u; // 800547A4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800547A8
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800547AC
  c->r[7]=0u+0x00000005u; // 800547B0
  c->r[5]=0u+0x00000000u; // 800547B4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800547B8
  c->r[4]=0u+0x00000020u; // 800547BC
  c->r[6]=c->r[30]+c->r[6]; // 800547C0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 800547C4
  c->r[3]=c->r[30]+c->r[3]; // 800547C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800547CC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800547D0
  c->r[3]=c->r[30]+c->r[0]; // 800547D4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800547D8
  c->lr=0x800547E0u; f_8004DAC0(c); // 800547DC
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800547E0
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 800547E4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800547E8
  c->r[0]=c->r[4]+0x00000001u; // 800547EC
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 800547F0
  c->r[4]=c->r[30]+c->r[5]; // 800547F4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 800547F8
  c->r[3]=c->r[31]|c->r[31]; // 800547FC
  c->lr=0x80054804u; f_80049A60(c); // 80054800
  c->r[3]=0u+0x801A0000u; // 80054804
  c->r[4]=0u+0x80050000u; // 80054808
  c->r[3]=c->r[3]+0x00000440u; // 8005480C
  c->r[4]=c->r[4]+0x000049D0u; // 80054810
  c->lr=0x80054818u; f_800580C0(c); // 80054814
  goto L_80054838; // 80054818
L_8005481C:;
  c->r[3]=0u+0x00000027u; // 8005481C
  c->r[4]=0u+0x00000000u; // 80054820
  c->r[5]=0u+0x00000000u; // 80054824
  c->lr=0x8005482Cu; f_80051EC0(c); // 80054828
  c->r[3]=0u+0x80050000u; // 8005482C
  c->r[3]=c->r[3]+0x00002750u; // 80054830
  c->lr=0x80054838u; f_80059200(c); // 80054834
L_80054838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005483C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80054840
  c->lr=c->r[0]; // 80054844
  c->r[1]=c->r[1]+0x00000010u; // 80054848
  return; // 8005484C
}

// stateCoverClosed_CMD
void f_80054850(Ctx* __restrict c) {
  trace_call(0x80054850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054850
  c->r[0]=c->lr; // 80054854
  W32(c->r[1]+0x00000014u,c->r[0]); // 80054858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005485C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80054860
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054864
  cmpu(c,0,c->r[0],0x00000028u); // 80054868
  if (!crb(c,2)) { goto L_8005490C; } // 8005486C
  c->r[4]=0u+0x00000000u; // 80054870
  W32(c->r[13]+0xFFFF8C38u,c->r[4]); // 80054874
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80054878
  cmps(c,0,(int32_t)c->r[0],0); // 8005487C
  if (crb(c,2)) { goto L_800548E8; } // 80054880
  c->r[30]=R32(c->r[13]+0xFFFF8CB0u); // 80054884
  c->r[3]=0u+0x801A0000u; // 80054888
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 8005488C
  c->r[3]=c->r[3]+0x000003A0u; // 80054890
  c->r[0]=0u+0x0000000Au; // 80054894
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80054898
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 8005489C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800548A0
  c->r[12]=R32(c->r[30]+0x00000028u); // 800548A4
  cmps(c,0,(int32_t)c->r[12],0); // 800548A8
  if (crb(c,2)) { goto L_800548C0; } // 800548AC
  c->r[4]=c->r[30]|c->r[30]; // 800548B0
  c->r[3]=0u+0xFFFFFFFDu; // 800548B4
  c->ctr=c->r[12]; // 800548B8
  if (true) { c->lr=0x800548C0u; dispatch(c,c->ctr); } // 800548BC
L_800548C0:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 800548C0
  cmps(c,0,(int32_t)c->r[12],0); // 800548C4
  if (crb(c,2)) { goto L_800548DC; } // 800548C8
  c->r[4]=c->r[30]|c->r[30]; // 800548CC
  c->r[3]=0u+0x00000000u; // 800548D0
  c->ctr=c->r[12]; // 800548D4
  if (true) { c->lr=0x800548DCu; dispatch(c,c->ctr); } // 800548D8
L_800548DC:;
  c->lr=0x800548E0u; f_80054C70(c); // 800548DC
  c->r[0]=0u+0x00000001u; // 800548E0
  goto L_800548EC; // 800548E4
L_800548E8:;
  c->r[0]=0u+0x00000000u; // 800548E8
L_800548EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800548EC
  if (!crb(c,2)) { goto L_800549B0; } // 800548F0
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800548F4
  c->r[0]=0u+0x00000001u; // 800548F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800548FC
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054900
  c->lr=0x80054908u; f_80054F90(c); // 80054904
  goto L_800549B0; // 80054908
L_8005490C:;
  c->r[3]=0u+0x00000000u; // 8005490C
  c->lr=0x80054914u; f_8005A1B0(c); // 80054910
  c->lr=0x80054918u; f_80049A20(c); // 80054914
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054918
  c->r[31]=c->r[3]|c->r[3]; // 8005491C
  cmpu(c,0,c->r[0],0x00000005u); // 80054920
  if (crb(c,0)) { goto L_80054930; } // 80054924
  c->r[0]=0u+0x00000000u; // 80054928
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005492C
L_80054930:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054930
  c->r[30]=0u+0x801A0000u; // 80054934
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80054938
  c->r[30]=c->r[30]+0x000006C0u; // 8005493C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054940
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054944
  c->r[7]=0u+0x00000005u; // 80054948
  c->r[5]=0u+0x00000000u; // 8005494C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80054950
  c->r[4]=0u+0x00000020u; // 80054954
  c->r[6]=c->r[30]+c->r[6]; // 80054958
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8005495C
  c->r[3]=c->r[30]+c->r[3]; // 80054960
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054964
  W32(c->r[3]+0x00000020u,c->r[5]); // 80054968
  c->r[3]=c->r[30]+c->r[0]; // 8005496C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80054970
  c->lr=0x80054978u; f_8004DAC0(c); // 80054974
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054978
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 8005497C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054980
  c->r[0]=c->r[4]+0x00000001u; // 80054984
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054988
  c->r[4]=c->r[30]+c->r[5]; // 8005498C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80054990
  c->r[3]=c->r[31]|c->r[31]; // 80054994
  c->lr=0x8005499Cu; f_80049A60(c); // 80054998
  c->r[3]=0u+0x801A0000u; // 8005499C
  c->r[4]=0u+0x80050000u; // 800549A0
  c->r[3]=c->r[3]+0x00000440u; // 800549A4
  c->r[4]=c->r[4]+0x000049D0u; // 800549A8
  c->lr=0x800549B0u; f_800580C0(c); // 800549AC
L_800549B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800549B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800549B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800549B8
  c->lr=c->r[0]; // 800549BC
  c->r[1]=c->r[1]+0x00000010u; // 800549C0
  return; // 800549C4
}

// cbForStateCoverClosed
void f_800549D0(Ctx* __restrict c) {
  trace_call(0x800549D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800549D0
  c->r[0]=c->lr; // 800549D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800549D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800549DC
  c->r[31]=c->r[3]|c->r[3]; // 800549E0
  c->lr=0x800549E8u; f_80049A20(c); // 800549E4
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 800549E8
  cmps(c,0,(int32_t)c->r[0],0); // 800549EC
  if (!crb(c,2)) { goto L_80054A04; } // 800549F0
  c->r[4]=0u+0x801A0000u; // 800549F4
  c->r[4]=c->r[4]+0x000006C0u; // 800549F8
  W32(c->r[4]+0x00000078u,c->r[31]); // 800549FC
  goto L_80054A1C; // 80054A00
L_80054A04:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054A04
  c->r[4]=0u+0x801A0000u; // 80054A08
  c->r[4]=c->r[4]+0x000006C0u; // 80054A0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80054A10
  c->r[4]=c->r[4]+c->r[0]; // 80054A14
  W32(c->r[4]+0x00000014u,c->r[31]); // 80054A18
L_80054A1C:;
  c->lr=0x80054A20u; f_80049A60(c); // 80054A1C
  cmpu(c,0,c->r[31],0x00000010u); // 80054A20
  if (!crb(c,2)) { goto L_80054A40; } // 80054A24
  c->r[3]=0u+0x01230000u; // 80054A28
  c->r[4]=0u+0x80050000u; // 80054A2C
  c->r[3]=c->r[3]+0x00004568u; // 80054A30
  c->r[4]=c->r[4]+0x00002540u; // 80054A34
  c->lr=0x80054A3Cu; f_80057720(c); // 80054A38
  goto L_80054A94; // 80054A3C
L_80054A40:;
  cmpu(c,0,c->r[31],0x00000020u); // 80054A40
  if (!crb(c,2)) { goto L_80054A60; } // 80054A44
  c->r[3]=0u+0x01230000u; // 80054A48
  c->r[4]=0u+0x80050000u; // 80054A4C
  c->r[3]=c->r[3]+0x00004569u; // 80054A50
  c->r[4]=c->r[4]+0x00002540u; // 80054A54
  c->lr=0x80054A5Cu; f_80057720(c); // 80054A58
  goto L_80054A94; // 80054A5C
L_80054A60:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80054A60
  if (crb(c,2)) { goto L_80054A78; } // 80054A64
  c->r[0]=0u+0x00000000u; // 80054A68
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 80054A6C
  c->lr=0x80054A74u; f_80053160(c); // 80054A70
  goto L_80054A94; // 80054A74
L_80054A78:;
  c->r[3]=0u+0x00000027u; // 80054A78
  c->r[4]=0u+0x00000000u; // 80054A7C
  c->r[5]=0u+0x00000000u; // 80054A80
  c->lr=0x80054A88u; f_80051EC0(c); // 80054A84
  c->r[3]=0u+0x80050000u; // 80054A88
  c->r[3]=c->r[3]+0x00002750u; // 80054A8C
  c->lr=0x80054A94u; f_80059200(c); // 80054A90
L_80054A94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054A94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80054A98
  c->lr=c->r[0]; // 80054A9C
  c->r[1]=c->r[1]+0x00000010u; // 80054AA0
  return; // 80054AA4
}

// cbForPrepareCoverRegister
void f_80054AB0(Ctx* __restrict c) {
  trace_call(0x80054AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054AB0
  c->r[0]=c->lr; // 80054AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80054AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054ABC
  c->r[31]=0u+0x00000000u; // 80054AC0
  W32(c->r[13]+0xFFFF8C54u,c->r[31]); // 80054AC4
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80054AC8
  cmps(c,0,(int32_t)c->r[0],0); // 80054ACC
  if (crb(c,2)) { goto L_80054B58; } // 80054AD0
  c->lr=0x80054AD8u; f_80059D00(c); // 80054AD4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80054AD8
  if (!crb(c,2)) { goto L_80054C24; } // 80054ADC
  c->r[3]=0u+0x801A0000u; // 80054AE0
  c->r[3]=c->r[3]+0x00000400u; // 80054AE4
  c->lr=0x80054AECu; f_800441D0(c); // 80054AE8
  W32(c->r[13]+0xFFFF8C48u,c->r[31]); // 80054AEC
  W32(c->r[13]+0xFFFF8C48u,c->r[31]); // 80054AF0
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054AF4
  cmpu(c,0,c->r[0],0x00000003u); // 80054AF8
  if (!crb(c,2)) { goto L_80054B08; } // 80054AFC
  c->r[0]=0u+0x00000001u; // 80054B00
  W32(c->r[13]+0xFFFF8C50u,c->r[0]); // 80054B04
L_80054B08:;
  c->r[0]=R32(c->r[13]+0xFFFF8C90u); // 80054B08
  cmpu(c,0,c->r[0],0x00000002u); // 80054B0C
  if (!crb(c,2)) { goto L_80054B2C; } // 80054B10
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054B14
  cmps(c,0,(int32_t)c->r[3],0); // 80054B18
  if (crb(c,2)) { goto L_80054C24; } // 80054B1C
  c->r[0]=0u+0x0000000Cu; // 80054B20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054B24
  goto L_80054C24; // 80054B28
L_80054B2C:;
  c->lr=0x80054B30u; f_8005A1A0(c); // 80054B2C
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054B30
  cmps(c,0,(int32_t)c->r[3],0); // 80054B34
  if (crb(c,2)) { goto L_80054B4C; } // 80054B38
  c->r[0]=0u+0x00000003u; // 80054B3C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054B40
  c->lr=0x80054B48u; f_80054130(c); // 80054B44
  goto L_80054C24; // 80054B48
L_80054B4C:;
  c->r[0]=0u+0x00000007u; // 80054B4C
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80054B50
  goto L_80054C24; // 80054B54
L_80054B58:;
  c->lr=0x80054B5Cu; f_80059D00(c); // 80054B58
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80054B5C
  if (crb(c,2)) { goto L_80054B9C; } // 80054B60
  c->r[0]=R32(c->r[13]+0xFFFF8C90u); // 80054B64
  c->r[3]=0u+0x00000001u; // 80054B68
  W32(c->r[13]+0xFFFF8C44u,c->r[31]); // 80054B6C
  cmpu(c,0,c->r[0],0x00000002u); // 80054B70
  W32(c->r[13]+0xFFFF8C48u,c->r[3]); // 80054B74
  if (!crb(c,2)) { goto L_80054B8C; } // 80054B78
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054B7C
  c->r[0]=0u+0x0000000Cu; // 80054B80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054B84
  goto L_80054C24; // 80054B88
L_80054B8C:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054B8C
  c->r[0]=0u+0x00000005u; // 80054B90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054B94
  goto L_80054C24; // 80054B98
L_80054B9C:;
  c->lr=0x80054BA0u; f_80059D00(c); // 80054B9C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80054BA0
  if (crb(c,2)) { goto L_80054C24; } // 80054BA4
  c->r[3]=0u+0x801A0000u; // 80054BA8
  c->r[3]=c->r[3]+0x00000400u; // 80054BAC
  c->lr=0x80054BB4u; f_800441D0(c); // 80054BB0
  W32(c->r[13]+0xFFFF8C44u,c->r[31]); // 80054BB4
  c->r[3]=0u+0x00000000u; // 80054BB8
  c->lr=0x80054BC0u; f_8005A1B0(c); // 80054BBC
  W32(c->r[13]+0xFFFF8C48u,c->r[31]); // 80054BC0
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054BC4
  cmpu(c,0,c->r[0],0x00000003u); // 80054BC8
  if (!crb(c,2)) { goto L_80054BD8; } // 80054BCC
  c->r[0]=0u+0x00000001u; // 80054BD0
  W32(c->r[13]+0xFFFF8C50u,c->r[0]); // 80054BD4
L_80054BD8:;
  c->r[0]=R32(c->r[13]+0xFFFF8C90u); // 80054BD8
  cmpu(c,0,c->r[0],0x00000002u); // 80054BDC
  if (!crb(c,2)) { goto L_80054BFC; } // 80054BE0
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80054BE8
  if (crb(c,2)) { goto L_80054C24; } // 80054BEC
  c->r[0]=0u+0x0000000Cu; // 80054BF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054BF4
  goto L_80054C24; // 80054BF8
L_80054BFC:;
  c->lr=0x80054C00u; f_8005A1A0(c); // 80054BFC
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054C00
  cmps(c,0,(int32_t)c->r[3],0); // 80054C04
  if (crb(c,2)) { goto L_80054C1C; } // 80054C08
  c->r[0]=0u+0x00000003u; // 80054C0C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054C10
  c->lr=0x80054C18u; f_80054130(c); // 80054C14
  goto L_80054C24; // 80054C18
L_80054C1C:;
  c->r[0]=0u+0x00000007u; // 80054C1C
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80054C20
L_80054C24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80054C28
  c->lr=c->r[0]; // 80054C2C
  c->r[1]=c->r[1]+0x00000010u; // 80054C30
  return; // 80054C34
}

// fn_80054C40
void f_80054C40(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF8C54u); // 80054C40
  cmps(c,0,(int32_t)c->r[0],0); // 80054C44
  if (!crb(c,2)) return; // 80054C48
  c->r[0]=0u+0x00000001u; // 80054C4C
  c->r[3]=0u+0x80050000u; // 80054C50
  W32(c->r[13]+0xFFFF8C54u,c->r[0]); // 80054C54
  c->r[3]=c->r[3]+0x00004AB0u; // 80054C58
  f_80059D30(c); return; // 80054C5C
}

// fn_80054C60
void f_80054C60(Ctx* __restrict c) {
  return; // 80054C60
}

// stateReady
void f_80054C70(Ctx* __restrict c) {
  trace_call(0x80054C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054C70
  c->r[0]=c->lr; // 80054C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80054C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054C7C
  c->r[0]=R32(c->r[13]+0xFFFF8C24u); // 80054C80
  cmps(c,0,(int32_t)c->r[0],0); // 80054C84
  if (crb(c,2)) { goto L_80054CA0; } // 80054C88
  c->r[3]=0u+0x00000001u; // 80054C8C
  c->r[0]=0u+0x00000000u; // 80054C90
  W32(c->r[13]+0xFFFF8C28u,c->r[3]); // 80054C94
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 80054C98
  goto L_80054F78; // 80054C9C
L_80054CA0:;
  c->lr=0x80054CA4u; f_80056C40(c); // 80054CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80054CA4
  if (!crb(c,2)) { goto L_80054CB8; } // 80054CA8
  c->r[0]=0u+0x00000000u; // 80054CAC
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 80054CB0
  goto L_80054F78; // 80054CB4
L_80054CB8:;
  c->lr=0x80054CBCu; f_80056BA0(c); // 80054CB8
  c->r[0]=R32(c->r[13]+0xFFFF8C2Cu); // 80054CBC
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80054CC0
  cmps(c,0,(int32_t)c->r[0],0); // 80054CC4
  if (crb(c,2)) { goto L_80054D04; } // 80054CC8
  c->r[0]=0u+0xFFFFFFFFu; // 80054CCC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054CD0
  c->r[3]=0u+0x801A0000u; // 80054CD4
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80054CD8
  c->r[3]=c->r[3]+0x000003A0u; // 80054CDC
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80054CE0
  c->r[12]=R32(c->r[4]+0x00000028u); // 80054CE4
  cmps(c,0,(int32_t)c->r[12],0); // 80054CE8
  if (crb(c,2)) { goto L_80054CFC; } // 80054CEC
  c->r[3]=0u+0xFFFFFFFFu; // 80054CF0
  c->ctr=c->r[12]; // 80054CF4
  if (true) { c->lr=0x80054CFCu; dispatch(c,c->ctr); } // 80054CF8
L_80054CFC:;
  c->lr=0x80054D00u; f_80054C70(c); // 80054CFC
  goto L_80054F78; // 80054D00
L_80054D04:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80054D04
  W32(c->r[13]+0xFFFF8CA4u,c->r[0]); // 80054D08
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054D0C
  cmpu(c,0,c->r[0],0x00000020u); // 80054D10
  if (crb(c,2)) { goto L_80054D30; } // 80054D14
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054D18
  cmpu(c,0,c->r[0],0x0000000Eu); // 80054D1C
  if (crb(c,2)) { goto L_80054D30; } // 80054D20
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80054D24
  cmpu(c,0,c->r[0],0x00000023u); // 80054D28
  if (!crb(c,2)) { goto L_80054D38; } // 80054D2C
L_80054D30:;
  c->r[0]=0u+0x00000000u; // 80054D30
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80054D34
L_80054D38:;
  c->r[0]=R32(c->r[13]+0xFFFF8C34u); // 80054D38
  cmps(c,0,(int32_t)c->r[0],0); // 80054D3C
  if (crb(c,2)) { goto L_80054F20; } // 80054D40
  c->r[4]=R32(c->r[13]+0xFFFF8C34u); // 80054D44
  c->r[0]=c->r[4]+0xFFFFFFFAu; // 80054D48
  cmpu(c,0,c->r[0],0x00000001u); // 80054D4C
  if (!crb(c,1)) { goto L_80054EF4; } // 80054D50
  cmpu(c,0,c->r[4],0x00000002u); // 80054D54
  if (crb(c,2)) { goto L_80054D80; } // 80054D58
  cmpu(c,0,c->r[4],0x00000003u); // 80054D5C
  if (crb(c,2)) { goto L_80054DFC; } // 80054D60
  cmpu(c,0,c->r[4],0x00000004u); // 80054D64
  if (crb(c,2)) { goto L_80054E78; } // 80054D68
  cmpu(c,0,c->r[4],0x00000001u); // 80054D6C
  if (crb(c,2)) { goto L_80054EF4; } // 80054D70
  cmpu(c,0,c->r[4],0x00000005u); // 80054D74
  if (crb(c,2)) { goto L_80054F04; } // 80054D78
  goto L_80054F14; // 80054D7C
L_80054D80:;
  c->r[0]=0u+0x0000000Bu; // 80054D80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054D84
  c->r[3]=0u+0x00000001u; // 80054D88
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80054D8C
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80054D90
  cmps(c,0,(int32_t)c->r[0],0); // 80054D94
  if (!crb(c,2)) { goto L_80054F14; } // 80054D98
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80054D9C
  cmps(c,0,(int32_t)c->r[0],0); // 80054DA0
  if (!crb(c,2)) { goto L_80054F14; } // 80054DA4
  c->r[31]=0u+0x801A0000u; // 80054DA8
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80054DAC
  c->r[3]=c->r[31]+0x00000400u; // 80054DB0
  c->lr=0x80054DB8u; f_80043E70(c); // 80054DB4
  c->lr=0x80054DBCu; f_8004DAC0(c); // 80054DB8
  c->r[5]=0u+0x80000000u; // 80054DBC
  c->r[4]=0u+0x10620000u; // 80054DC0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80054DC4
  c->r[9]=0u+0x80050000u; // 80054DC8
  c->r[6]=c->r[3]|c->r[3]; // 80054DCC
  c->r[4]=c->r[4]+0x00004DD3u; // 80054DD0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80054DD4
  c->r[3]=c->r[31]+0x00000400u; // 80054DD8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80054DDC
  c->r[9]=c->r[9]+0x00004C40u; // 80054DE0
  c->r[5]=0u+0x00000000u; // 80054DE4
  c->r[7]=0u+0x00000000u; // 80054DE8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80054DEC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80054DF0
  c->lr=0x80054DF8u; f_80044140(c); // 80054DF4
  goto L_80054F14; // 80054DF8
L_80054DFC:;
  c->r[0]=0u+0x00000004u; // 80054DFC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054E00
  c->r[3]=0u+0x00000001u; // 80054E04
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80054E08
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80054E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80054E10
  if (!crb(c,2)) { goto L_80054F14; } // 80054E14
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80054E18
  cmps(c,0,(int32_t)c->r[0],0); // 80054E1C
  if (!crb(c,2)) { goto L_80054F14; } // 80054E20
  c->r[31]=0u+0x801A0000u; // 80054E24
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80054E28
  c->r[3]=c->r[31]+0x00000400u; // 80054E2C
  c->lr=0x80054E34u; f_80043E70(c); // 80054E30
  c->lr=0x80054E38u; f_8004DAC0(c); // 80054E34
  c->r[5]=0u+0x80000000u; // 80054E38
  c->r[4]=0u+0x10620000u; // 80054E3C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80054E40
  c->r[9]=0u+0x80050000u; // 80054E44
  c->r[6]=c->r[3]|c->r[3]; // 80054E48
  c->r[4]=c->r[4]+0x00004DD3u; // 80054E4C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80054E50
  c->r[3]=c->r[31]+0x00000400u; // 80054E54
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80054E58
  c->r[9]=c->r[9]+0x00004C40u; // 80054E5C
  c->r[5]=0u+0x00000000u; // 80054E60
  c->r[7]=0u+0x00000000u; // 80054E64
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80054E68
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80054E6C
  c->lr=0x80054E74u; f_80044140(c); // 80054E70
  goto L_80054F14; // 80054E74
L_80054E78:;
  c->r[0]=0u+0x00000005u; // 80054E78
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054E7C
  c->r[3]=0u+0x00000001u; // 80054E80
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 80054E84
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 80054E88
  cmps(c,0,(int32_t)c->r[0],0); // 80054E8C
  if (!crb(c,2)) { goto L_80054F14; } // 80054E90
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 80054E94
  cmps(c,0,(int32_t)c->r[0],0); // 80054E98
  if (!crb(c,2)) { goto L_80054F14; } // 80054E9C
  c->r[31]=0u+0x801A0000u; // 80054EA0
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 80054EA4
  c->r[3]=c->r[31]+0x00000400u; // 80054EA8
  c->lr=0x80054EB0u; f_80043E70(c); // 80054EAC
  c->lr=0x80054EB4u; f_8004DAC0(c); // 80054EB0
  c->r[5]=0u+0x80000000u; // 80054EB4
  c->r[4]=0u+0x10620000u; // 80054EB8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80054EBC
  c->r[9]=0u+0x80050000u; // 80054EC0
  c->r[6]=c->r[3]|c->r[3]; // 80054EC4
  c->r[4]=c->r[4]+0x00004DD3u; // 80054EC8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80054ECC
  c->r[3]=c->r[31]+0x00000400u; // 80054ED0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80054ED4
  c->r[9]=c->r[9]+0x00004C40u; // 80054ED8
  c->r[5]=0u+0x00000000u; // 80054EDC
  c->r[7]=0u+0x00000000u; // 80054EE0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80054EE4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80054EE8
  c->lr=0x80054EF0u; f_80044140(c); // 80054EEC
  goto L_80054F14; // 80054EF0
L_80054EF4:;
  c->r[0]=0u+0x00000003u; // 80054EF4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054EF8
  c->lr=0x80054F00u; f_80054130(c); // 80054EFC
  goto L_80054F14; // 80054F00
L_80054F04:;
  c->r[4]=0u+0x80050000u; // 80054F04
  c->r[3]=R32(c->r[13]+0xFFFF8C9Cu); // 80054F08
  c->r[4]=c->r[4]+0x00002520u; // 80054F0C
  c->lr=0x80054F14u; f_80057720(c); // 80054F10
L_80054F14:;
  c->r[0]=0u+0x00000000u; // 80054F14
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80054F18
  goto L_80054F78; // 80054F1C
L_80054F20:;
  c->r[0]=R32(c->r[13]+0xFFFF8C90u); // 80054F20
  cmpu(c,0,c->r[0],0x00000002u); // 80054F24
  if (crb(c,2)) { goto L_80054F38; } // 80054F28
  cmps(c,0,(int32_t)c->r[0],0); // 80054F2C
  if (crb(c,2)) { goto L_80054F60; } // 80054F30
  goto L_80054F74; // 80054F34
L_80054F38:;
  c->r[0]=R32(c->r[13]+0xFFFF8C4Cu); // 80054F38
  cmps(c,0,(int32_t)c->r[0],0); // 80054F3C
  if (crb(c,2)) { goto L_80054F50; } // 80054F40
  c->r[0]=0u+0x0000000Cu; // 80054F44
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054F48
  goto L_80054F78; // 80054F4C
L_80054F50:;
  c->r[0]=0u+0x00000003u; // 80054F50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054F54
  c->lr=0x80054F5Cu; f_80054130(c); // 80054F58
  goto L_80054F78; // 80054F5C
L_80054F60:;
  c->r[0]=0u+0x00000001u; // 80054F60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80054F64
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80054F68
  c->lr=0x80054F70u; f_80054F90(c); // 80054F6C
  goto L_80054F78; // 80054F70
L_80054F74:;
  c->lr=0x80054F78u; f_80054130(c); // 80054F74
L_80054F78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80054F7C
  c->lr=c->r[0]; // 80054F80
  c->r[1]=c->r[1]+0x00000010u; // 80054F84
  return; // 80054F88
}

// fn_80054F90
void f_80054F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054F90
  c->r[0]=c->lr; // 80054F94
  W32(c->r[1]+0x00000034u,c->r[0]); // 80054F98
  c->r[11]=c->r[1]+0x00000030u; // 80054F9C
  c->lr=0x80054FA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054FA0
  c->r[4]=0u+0x80050000u; // 80054FA4
  c->r[29]=c->r[3]|c->r[3]; // 80054FA8
  c->r[4]=c->r[4]+0x00004F90u; // 80054FAC
  W32(c->r[13]+0xFFFF8CB4u,c->r[4]); // 80054FB0
  c->r[30]=R32(c->r[3]+0x00000008u); // 80054FB4
  cmpu(c,0,c->r[30],0x0000002Au); // 80054FB8
  if (crb(c,1)) { goto L_8005505C; } // 80054FBC
  c->r[4]=0u+0x80140000u; // 80054FC0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80054FC4
  c->r[4]=c->r[4]+0x00005CE4u; // 80054FC8
  c->r[4]=R32(c->r[4]+c->r[0]); // 80054FCC
  c->ctr=c->r[4]; // 80054FD0
  if (true) { switch (c->ctr) { case 0x80054FD8u: goto L_80054FD8; case 0x8005505Cu: goto L_8005505C; case 0x80055080u: goto L_80055080; case 0x800550A4u: goto L_800550A4; case 0x800551CCu: goto L_800551CC; case 0x800551E8u: goto L_800551E8; case 0x80055200u: goto L_80055200; case 0x80055218u: goto L_80055218; case 0x80055238u: goto L_80055238; case 0x8005525Cu: goto L_8005525C; case 0x8005527Cu: goto L_8005527C; case 0x80055294u: goto L_80055294; case 0x800553BCu: goto L_800553BC; case 0x800553E8u: goto L_800553E8; case 0x80055400u: goto L_80055400; case 0x80055410u: goto L_80055410; case 0x80055420u: goto L_80055420; case 0x8005543Cu: goto L_8005543C; case 0x80055468u: goto L_80055468; case 0x800554DCu: goto L_800554DC; case 0x80055510u: goto L_80055510; default: break; } dispatch(c,c->ctr); return; } // 80054FD4
L_80054FD8:;
  c->r[26]=R32(c->r[3]+0x00000014u); // 80054FD8
  c->r[27]=R32(c->r[3]+0x00000010u); // 80054FDC
  c->lr=0x80054FE4u; f_80049A20(c); // 80054FE0
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054FE4
  c->r[31]=c->r[3]|c->r[3]; // 80054FE8
  cmpu(c,0,c->r[0],0x00000005u); // 80054FEC
  if (crb(c,0)) { goto L_80054FFC; } // 80054FF0
  c->r[0]=0u+0x00000000u; // 80054FF4
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80054FF8
L_80054FFC:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80054FFC
  c->r[28]=0u+0x801A0000u; // 80055000
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80055004
  c->r[28]=c->r[28]+0x000006C0u; // 80055008
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8005500C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055010
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80055014
  c->r[4]=c->r[28]+c->r[4]; // 80055018
  W32(c->r[4]+0x0000001Cu,c->r[30]); // 8005501C
  c->r[3]=c->r[28]+c->r[3]; // 80055020
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055024
  W32(c->r[3]+0x00000020u,c->r[27]); // 80055028
  c->r[3]=c->r[28]+c->r[0]; // 8005502C
  W32(c->r[3]+0x00000024u,c->r[26]); // 80055030
  c->lr=0x80055038u; f_8004DAC0(c); // 80055034
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055038
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 8005503C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055040
  c->r[0]=c->r[4]+0x00000001u; // 80055044
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80055048
  c->r[4]=c->r[28]+c->r[5]; // 8005504C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80055050
  c->r[3]=c->r[31]|c->r[31]; // 80055054
  c->lr=0x8005505Cu; f_80049A60(c); // 80055058
L_8005505C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8005505C
  cmpu(c,0,c->r[0],0x0000002Au); // 80055060
  if (crb(c,1)) { goto L_80055510; } // 80055064
  c->r[3]=0u+0x80140000u; // 80055068
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8005506C
  c->r[3]=c->r[3]+0x00005C38u; // 80055070
  c->r[3]=R32(c->r[3]+c->r[0]); // 80055074
  c->ctr=c->r[3]; // 80055078
  if (true) { switch (c->ctr) { case 0x80054FD8u: goto L_80054FD8; case 0x8005505Cu: goto L_8005505C; case 0x80055080u: goto L_80055080; case 0x800550A4u: goto L_800550A4; case 0x800551CCu: goto L_800551CC; case 0x800551E8u: goto L_800551E8; case 0x80055200u: goto L_80055200; case 0x80055218u: goto L_80055218; case 0x80055238u: goto L_80055238; case 0x8005525Cu: goto L_8005525C; case 0x8005527Cu: goto L_8005527C; case 0x80055294u: goto L_80055294; case 0x800553BCu: goto L_800553BC; case 0x800553E8u: goto L_800553E8; case 0x80055400u: goto L_80055400; case 0x80055410u: goto L_80055410; case 0x80055420u: goto L_80055420; case 0x8005543Cu: goto L_8005543C; case 0x80055468u: goto L_80055468; case 0x800554DCu: goto L_800554DC; case 0x80055510u: goto L_80055510; default: break; } dispatch(c,c->ctr); return; } // 8005507C
L_80055080:;
  c->r[3]=0u+0x00000000u; // 80055080
  c->lr=0x80055088u; f_8005A1B0(c); // 80055084
  c->r[0]=0u+0x00000020u; // 80055088
  c->r[4]=0u+0x80050000u; // 8005508C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80055090
  c->r[4]=c->r[4]+0x00005540u; // 80055094
  c->r[3]=R32(c->r[29]+0x00000018u); // 80055098
  c->lr=0x800550A0u; f_800580C0(c); // 8005509C
  goto L_80055528; // 800550A0
L_800550A4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 800550A4
  cmps(c,0,(int32_t)c->r[0],0); // 800550A8
  if (!crb(c,2)) { goto L_800550E8; } // 800550AC
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800550B0
  c->r[3]=0u+0x801A0000u; // 800550B4
  c->r[3]=c->r[3]+0x000003A0u; // 800550B8
  c->r[0]=0u+0x00000000u; // 800550BC
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800550C0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800550C4
  c->r[12]=R32(c->r[4]+0x00000028u); // 800550C8
  cmps(c,0,(int32_t)c->r[12],0); // 800550CC
  if (crb(c,2)) { goto L_800550E0; } // 800550D0
  c->r[3]=0u+0x00000000u; // 800550D4
  c->ctr=c->r[12]; // 800550D8
  if (true) { c->lr=0x800550E0u; dispatch(c,c->ctr); } // 800550DC
L_800550E0:;
  c->lr=0x800550E4u; f_80054C70(c); // 800550E0
  goto L_80055528; // 800550E4
L_800550E8:;
  c->r[3]=0u+0x00000000u; // 800550E8
  c->lr=0x800550F0u; f_8005A1B0(c); // 800550EC
  c->r[4]=R32(c->r[29]+0x00000020u); // 800550F0
  c->r[0]=0u+0x00080000u; // 800550F4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800550F8
  c->r[30]=c->r[3]-c->r[4]; // 800550FC
  cmpu(c,0,c->r[30],c->r[0]); // 80055100
  if (!crb(c,1)) { goto L_8005510C; } // 80055104
  c->r[30]=0u+0x00080000u; // 80055108
L_8005510C:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 8005510C
  c->r[3]=R32(c->r[29]+0x00000010u); // 80055110
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80055114
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 80055118
  c->r[26]=R32(c->r[29]+0x00000008u); // 8005511C
  c->r[27]=c->r[3]+c->r[0]; // 80055120
  c->lr=0x80055128u; f_80049A20(c); // 80055124
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055128
  c->r[31]=c->r[3]|c->r[3]; // 8005512C
  cmpu(c,0,c->r[0],0x00000005u); // 80055130
  if (crb(c,0)) { goto L_80055140; } // 80055134
  c->r[0]=0u+0x00000000u; // 80055138
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005513C
L_80055140:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055140
  c->r[28]=0u+0x801A0000u; // 80055144
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80055148
  c->r[28]=c->r[28]+0x000006C0u; // 8005514C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055150
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055154
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80055158
  c->r[4]=c->r[28]+c->r[4]; // 8005515C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 80055160
  c->r[3]=c->r[28]+c->r[3]; // 80055164
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055168
  W32(c->r[3]+0x00000020u,c->r[27]); // 8005516C
  c->r[3]=c->r[28]+c->r[0]; // 80055170
  W32(c->r[3]+0x00000024u,c->r[30]); // 80055174
  c->lr=0x8005517Cu; f_8004DAC0(c); // 80055178
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005517C
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80055180
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055184
  c->r[0]=c->r[4]+0x00000001u; // 80055188
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005518C
  c->r[4]=c->r[28]+c->r[5]; // 80055190
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80055194
  c->r[3]=c->r[31]|c->r[31]; // 80055198
  c->lr=0x800551A0u; f_80049A60(c); // 8005519C
  c->r[3]=R32(c->r[29]+0x00000020u); // 800551A0
  c->r[6]=0u+0x80050000u; // 800551A4
  c->r[7]=R32(c->r[29]+0x00000018u); // 800551A8
  c->r[6]=c->r[6]+0x00005540u; // 800551AC
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800551B0
  c->r[5]=R32(c->r[29]+0x00000010u); // 800551B4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800551B8
  c->r[3]=c->r[7]+c->r[3]; // 800551BC
  c->r[5]=c->r[5]+c->r[0]; // 800551C0
  c->lr=0x800551C8u; f_800599D0(c); // 800551C4
  goto L_80055528; // 800551C8
L_800551CC:;
  c->r[3]=0u+0x00000000u; // 800551CC
  c->lr=0x800551D4u; f_8005A1B0(c); // 800551D0
  c->r[4]=0u+0x80050000u; // 800551D4
  c->r[3]=R32(c->r[29]+0x00000010u); // 800551D8
  c->r[4]=c->r[4]+0x00005540u; // 800551DC
  c->lr=0x800551E4u; f_80059B80(c); // 800551E0
  goto L_80055528; // 800551E4
L_800551E8:;
  c->r[5]=0u+0x80050000u; // 800551E8
  c->r[3]=0u+0x00000000u; // 800551EC
  c->r[5]=c->r[5]+0x00005540u; // 800551F0
  c->r[4]=0u+0x00000000u; // 800551F4
  c->lr=0x800551FCu; f_80058EF0(c); // 800551F8
  goto L_80055528; // 800551FC
L_80055200:;
  c->r[5]=0u+0x80050000u; // 80055200
  c->r[3]=0u+0x00000000u; // 80055204
  c->r[5]=c->r[5]+0x00005540u; // 80055208
  c->r[4]=0u+0x00000000u; // 8005520C
  c->lr=0x80055214u; f_80058EF0(c); // 80055210
  goto L_80055528; // 80055214
L_80055218:;
  c->r[3]=0u+0x00000000u; // 80055218
  c->lr=0x80055220u; f_8005A1B0(c); // 8005521C
  c->r[5]=0u+0x80050000u; // 80055220
  c->r[3]=R32(c->r[29]+0x00000010u); // 80055224
  c->r[4]=R32(c->r[29]+0x00000014u); // 80055228
  c->r[5]=c->r[5]+0x00005540u; // 8005522C
  c->lr=0x80055234u; f_80059500(c); // 80055230
  goto L_80055528; // 80055234
L_80055238:;
  c->r[3]=0u+0x00000000u; // 80055238
  c->lr=0x80055240u; f_8005A1B0(c); // 8005523C
  c->r[0]=0u+0x00000020u; // 80055240
  c->r[4]=0u+0x80050000u; // 80055244
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80055248
  c->r[4]=c->r[4]+0x00005540u; // 8005524C
  c->r[3]=R32(c->r[29]+0x00000018u); // 80055250
  c->lr=0x80055258u; f_80059090(c); // 80055254
  goto L_80055528; // 80055258
L_8005525C:;
  c->r[3]=0u+0x00000000u; // 8005525C
  c->lr=0x80055264u; f_8005A1B0(c); // 80055260
  c->r[5]=0u+0x80050000u; // 80055264
  c->r[3]=0u+0x00000000u; // 80055268
  c->r[5]=c->r[5]+0x00005540u; // 8005526C
  c->r[4]=0u+0x00000000u; // 80055270
  c->lr=0x80055278u; f_80058EF0(c); // 80055274
  goto L_80055528; // 80055278
L_8005527C:;
  c->r[3]=0u+0x00000001u; // 8005527C
  c->lr=0x80055284u; f_80059370(c); // 80055280
  c->r[3]=0u+0x80050000u; // 80055284
  c->r[3]=c->r[3]+0x00005540u; // 80055288
  c->lr=0x80055290u; f_80059380(c); // 8005528C
  goto L_80055528; // 80055290
L_80055294:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80055294
  cmps(c,0,(int32_t)c->r[0],0); // 80055298
  if (!crb(c,2)) { goto L_800552D8; } // 8005529C
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800552A0
  c->r[3]=0u+0x801A0000u; // 800552A4
  c->r[3]=c->r[3]+0x000003A0u; // 800552A8
  c->r[0]=0u+0x00000000u; // 800552AC
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800552B0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800552B4
  c->r[12]=R32(c->r[4]+0x00000028u); // 800552B8
  cmps(c,0,(int32_t)c->r[12],0); // 800552BC
  if (crb(c,2)) { goto L_800552D0; } // 800552C0
  c->r[3]=0u+0x00000000u; // 800552C4
  c->ctr=c->r[12]; // 800552C8
  if (true) { c->lr=0x800552D0u; dispatch(c,c->ctr); } // 800552CC
L_800552D0:;
  c->lr=0x800552D4u; f_80054C70(c); // 800552D0
  goto L_80055528; // 800552D4
L_800552D8:;
  c->r[3]=0u+0x00000000u; // 800552D8
  c->lr=0x800552E0u; f_8005A1B0(c); // 800552DC
  c->r[4]=R32(c->r[29]+0x00000020u); // 800552E0
  c->r[0]=0u+0x00080000u; // 800552E4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800552E8
  c->r[30]=c->r[3]-c->r[4]; // 800552EC
  cmpu(c,0,c->r[30],c->r[0]); // 800552F0
  if (!crb(c,1)) { goto L_800552FC; } // 800552F4
  c->r[30]=0u+0x00080000u; // 800552F8
L_800552FC:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 800552FC
  c->r[3]=R32(c->r[29]+0x00000010u); // 80055300
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80055304
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 80055308
  c->r[26]=R32(c->r[29]+0x00000008u); // 8005530C
  c->r[27]=c->r[3]+c->r[0]; // 80055310
  c->lr=0x80055318u; f_80049A20(c); // 80055314
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055318
  c->r[31]=c->r[3]|c->r[3]; // 8005531C
  cmpu(c,0,c->r[0],0x00000005u); // 80055320
  if (crb(c,0)) { goto L_80055330; } // 80055324
  c->r[0]=0u+0x00000000u; // 80055328
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005532C
L_80055330:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055330
  c->r[28]=0u+0x801A0000u; // 80055334
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80055338
  c->r[28]=c->r[28]+0x000006C0u; // 8005533C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055340
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055344
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80055348
  c->r[4]=c->r[28]+c->r[4]; // 8005534C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 80055350
  c->r[3]=c->r[28]+c->r[3]; // 80055354
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055358
  W32(c->r[3]+0x00000020u,c->r[27]); // 8005535C
  c->r[3]=c->r[28]+c->r[0]; // 80055360
  W32(c->r[3]+0x00000024u,c->r[30]); // 80055364
  c->lr=0x8005536Cu; f_8004DAC0(c); // 80055368
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 8005536C
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80055370
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055374
  c->r[0]=c->r[4]+0x00000001u; // 80055378
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 8005537C
  c->r[4]=c->r[28]+c->r[5]; // 80055380
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80055384
  c->r[3]=c->r[31]|c->r[31]; // 80055388
  c->lr=0x80055390u; f_80049A60(c); // 8005538C
  c->r[3]=R32(c->r[29]+0x00000020u); // 80055390
  c->r[6]=0u+0x80050000u; // 80055394
  c->r[7]=R32(c->r[29]+0x00000018u); // 80055398
  c->r[6]=c->r[6]+0x00005540u; // 8005539C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800553A0
  c->r[5]=R32(c->r[29]+0x00000010u); // 800553A4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800553A8
  c->r[3]=c->r[7]+c->r[3]; // 800553AC
  c->r[5]=c->r[5]+c->r[0]; // 800553B0
  c->lr=0x800553B8u; f_80058D50(c); // 800553B4
  goto L_80055528; // 800553B8
L_800553BC:;
  c->r[3]=0u+0x00000000u; // 800553BC
  c->lr=0x800553C4u; f_8005A1B0(c); // 800553C0
  c->r[8]=0u+0x80050000u; // 800553C4
  c->r[3]=R32(c->r[29]+0x00000010u); // 800553C8
  c->r[7]=R32(c->r[29]+0x00000018u); // 800553CC
  c->r[8]=c->r[8]+0x00005540u; // 800553D0
  c->r[4]=0u+0x00000000u; // 800553D4
  c->r[5]=0u+0x00000000u; // 800553D8
  c->r[6]=0u+0x00000000u; // 800553DC
  c->lr=0x800553E4u; f_80058250(c); // 800553E0
  goto L_80055528; // 800553E4
L_800553E8:;
  c->r[3]=0u+0x00000000u; // 800553E8
  c->lr=0x800553F0u; f_8005A1B0(c); // 800553EC
  c->r[3]=0u+0x80050000u; // 800553F0
  c->r[3]=c->r[3]+0x00005540u; // 800553F4
  c->lr=0x800553FCu; f_80058BE0(c); // 800553F8
  goto L_80055528; // 800553FC
L_80055400:;
  c->r[3]=0u+0x80050000u; // 80055400
  c->r[3]=c->r[3]+0x00005540u; // 80055404
  c->lr=0x8005540Cu; f_80059D30(c); // 80055408
  goto L_80055528; // 8005540C
L_80055410:;
  c->r[3]=0u+0x80050000u; // 80055410
  c->r[3]=c->r[3]+0x00005540u; // 80055414
  c->lr=0x8005541Cu; f_80059D30(c); // 80055418
  goto L_80055528; // 8005541C
L_80055420:;
  c->r[3]=0u+0x00000000u; // 80055420
  c->lr=0x80055428u; f_8005A1B0(c); // 80055424
  c->r[4]=0u+0x80050000u; // 80055428
  c->r[3]=0u+0x00020000u; // 8005542C
  c->r[4]=c->r[4]+0x00005540u; // 80055430
  c->lr=0x80055438u; f_80059840(c); // 80055434
  goto L_80055528; // 80055438
L_8005543C:;
  c->r[3]=0u+0x00000000u; // 8005543C
  c->lr=0x80055444u; f_8005A1B0(c); // 80055440
  c->r[3]=0u+0x801A0000u; // 80055444
  c->r[0]=0u+0x00000020u; // 80055448
  c->r[3]=c->r[3]+0x00000440u; // 8005544C
  c->r[4]=0u+0x80050000u; // 80055450
  W32(c->r[29]+0x00000018u,c->r[3]); // 80055454
  c->r[4]=c->r[4]+0x00005540u; // 80055458
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8005545C
  c->lr=0x80055464u; f_800580C0(c); // 80055460
  goto L_80055528; // 80055464
L_80055468:;
  c->r[3]=0u+0x00000000u; // 80055468
  c->lr=0x80055470u; f_8005A1B0(c); // 8005546C
  c->r[10]=R32(c->r[29]+0x00000018u); // 80055470
  c->r[0]=R32(c->r[10]+0x000003A0u); // 80055474
  cmps(c,0,(int32_t)c->r[0],0); // 80055478
  if (!crb(c,2)) { goto L_800554A8; } // 8005547C
  c->r[0]=R32(c->r[10]+0x00004DC0u); // 80055480
  cmps(c,0,(int32_t)c->r[0],0); // 80055484
  if (!crb(c,2)) { goto L_800554A8; } // 80055488
  c->r[6]=0u+0x80050000u; // 8005548C
  c->r[3]=R32(c->r[29]+0x00000010u); // 80055490
  c->r[4]=c->r[10]+0x000003A0u; // 80055494
  c->r[5]=c->r[10]+0x00004DC0u; // 80055498
  c->r[6]=c->r[6]+0x00005540u; // 8005549C
  c->lr=0x800554A4u; f_80058730(c); // 800554A0
  goto L_80055528; // 800554A4
L_800554A8:;
  c->r[3]=0u+0x80050000u; // 800554A8
  c->r[4]=c->r[10]|c->r[10]; // 800554AC
  c->r[3]=c->r[3]+0x00005540u; // 800554B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800554B4
  c->r[5]=c->r[10]+0x000003A0u; // 800554B8
  c->r[6]=c->r[10]+0x000003C0u; // 800554BC
  c->r[3]=R32(c->r[29]+0x00000010u); // 800554C0
  c->r[7]=c->r[10]+0x00004DC0u; // 800554C4
  c->r[8]=c->r[10]+0x00004DE0u; // 800554C8
  c->r[9]=c->r[10]+0x00005DE0u; // 800554CC
  c->r[10]=c->r[10]+0x00005E00u; // 800554D0
  c->lr=0x800554D8u; f_80058940(c); // 800554D4
  goto L_80055528; // 800554D8
L_800554DC:;
  c->r[3]=0u+0x00000000u; // 800554DC
  c->lr=0x800554E4u; f_8005A1B0(c); // 800554E0
  c->r[8]=R32(c->r[29]+0x00000018u); // 800554E4
  c->r[9]=0u+0x80050000u; // 800554E8
  c->r[3]=R32(c->r[29]+0x00000010u); // 800554EC
  c->r[9]=c->r[9]+0x00005540u; // 800554F0
  c->r[5]=R32(c->r[8]+0x000003A0u); // 800554F4
  c->r[4]=c->r[8]+0x000002C0u; // 800554F8
  c->r[7]=R32(c->r[8]+0x00004DC0u); // 800554FC
  c->r[6]=c->r[8]+0x000003C0u; // 80055500
  c->r[8]=c->r[8]+0x00004DE0u; // 80055504
  c->lr=0x8005550Cu; f_800584C0(c); // 80055508
  goto L_80055528; // 8005550C
L_80055510:;
  c->r[12]=R32(c->r[13]+0xFFFF8170u); // 80055510
  c->r[4]=0u+0x80050000u; // 80055514
  c->r[3]=c->r[29]|c->r[29]; // 80055518
  c->r[4]=c->r[4]+0x00005540u; // 8005551C
  c->ctr=c->r[12]; // 80055520
  if (true) { c->lr=0x80055528u; dispatch(c,c->ctr); } // 80055524
L_80055528:;
  c->r[11]=c->r[1]+0x00000030u; // 80055528
  c->lr=0x80055530u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005552C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80055530
  c->lr=c->r[0]; // 80055534
  c->r[1]=c->r[1]+0x00000030u; // 80055538
  return; // 8005553C
}

// cbForStateBusy
void f_80055540(Ctx* __restrict c) {
  trace_call(0x80055540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055540
  c->r[0]=c->lr; // 80055544
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005554C
  c->r[31]=c->r[3]|c->r[3]; // 80055550
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055554
  c->r[30]=0u+0x801A0000u; // 80055558
  c->r[30]=c->r[30]+0xFFFFB880u; // 8005555C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80055560
  c->lr=0x80055568u; f_80049A20(c); // 80055564
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055568
  cmps(c,0,(int32_t)c->r[0],0); // 8005556C
  if (!crb(c,2)) { goto L_80055584; } // 80055570
  c->r[4]=0u+0x801A0000u; // 80055574
  c->r[4]=c->r[4]+0x000006C0u; // 80055578
  W32(c->r[4]+0x00000078u,c->r[31]); // 8005557C
  goto L_800555A0; // 80055580
L_80055584:;
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80055584
  c->r[5]=0u+0x801A0000u; // 80055588
  c->r[5]=c->r[5]+0x000006C0u; // 8005558C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80055590
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055594
  c->r[4]=c->r[5]+c->r[0]; // 80055598
  W32(c->r[4]+0x00000028u,c->r[31]); // 8005559C
L_800555A0:;
  c->lr=0x800555A4u; f_80049A60(c); // 800555A0
  cmpu(c,0,c->r[31],0x00000010u); // 800555A4
  if (!crb(c,2)) { goto L_800555C4; } // 800555A8
  c->r[3]=0u+0x01230000u; // 800555AC
  c->r[4]=0u+0x80050000u; // 800555B0
  c->r[3]=c->r[3]+0x00004568u; // 800555B4
  c->r[4]=c->r[4]+0x00002540u; // 800555B8
  c->lr=0x800555C0u; f_80057720(c); // 800555BC
  goto L_80055F04; // 800555C0
L_800555C4:;
  cmpu(c,0,c->r[31],0x00000020u); // 800555C4
  if (!crb(c,2)) { goto L_800555E4; } // 800555C8
  c->r[3]=0u+0x01230000u; // 800555CC
  c->r[4]=0u+0x80050000u; // 800555D0
  c->r[3]=c->r[3]+0x00004569u; // 800555D4
  c->r[4]=c->r[4]+0x00002540u; // 800555D8
  c->lr=0x800555E0u; f_80057720(c); // 800555DC
  goto L_80055F04; // 800555E0
L_800555E4:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 800555E4
  cmpu(c,0,c->r[0],0x00000003u); // 800555E8
  if (crb(c,2)) { goto L_800555FC; } // 800555EC
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 800555F0
  cmpu(c,0,c->r[0],0x0000000Fu); // 800555F4
  if (!crb(c,2)) { goto L_80055740; } // 800555F8
L_800555FC:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800555FC
  if (crb(c,2)) { goto L_8005561C; } // 80055600
  c->r[3]=0u+0x01230000u; // 80055604
  c->r[4]=0u+0x80050000u; // 80055608
  c->r[3]=c->r[3]+0x00004567u; // 8005560C
  c->r[4]=c->r[4]+0x00002520u; // 80055610
  c->lr=0x80055618u; f_80057720(c); // 80055614
  goto L_80055F04; // 80055618
L_8005561C:;
  c->r[0]=0u+0x00000000u; // 8005561C
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 80055620
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055624
  cmpu(c,0,c->r[0],0x0000000Fu); // 80055628
  if (!crb(c,2)) { goto L_80055638; } // 8005562C
  c->r[0]=0u+0x00000001u; // 80055630
  W32(c->r[13]+0xFFFF8C94u,c->r[0]); // 80055634
L_80055638:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80055638
  cmps(c,0,(int32_t)c->r[0],0); // 8005563C
  if (crb(c,2)) { goto L_800556AC; } // 80055640
  c->r[29]=R32(c->r[13]+0xFFFF8CB0u); // 80055644
  c->r[3]=c->r[30]+0x00004B20u; // 80055648
  c->r[0]=0u+0x00000007u; // 8005564C
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80055650
  c->r[4]=0u+0x00000000u; // 80055654
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80055658
  c->r[0]=0u+0x0000000Au; // 8005565C
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055660
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80055664
  c->r[12]=R32(c->r[29]+0x00000028u); // 80055668
  cmps(c,0,(int32_t)c->r[12],0); // 8005566C
  if (crb(c,2)) { goto L_80055684; } // 80055670
  c->r[4]=c->r[29]|c->r[29]; // 80055674
  c->r[3]=0u+0xFFFFFFFDu; // 80055678
  c->ctr=c->r[12]; // 8005567C
  if (true) { c->lr=0x80055684u; dispatch(c,c->ctr); } // 80055680
L_80055684:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80055684
  cmps(c,0,(int32_t)c->r[12],0); // 80055688
  if (crb(c,2)) { goto L_800556A0; } // 8005568C
  c->r[4]=c->r[29]|c->r[29]; // 80055690
  c->r[3]=0u+0x00000000u; // 80055694
  c->ctr=c->r[12]; // 80055698
  if (true) { c->lr=0x800556A0u; dispatch(c,c->ctr); } // 8005569C
L_800556A0:;
  c->lr=0x800556A4u; f_80054C70(c); // 800556A0
  c->r[0]=0u+0x00000001u; // 800556A4
  goto L_800556B0; // 800556A8
L_800556AC:;
  c->r[0]=0u+0x00000000u; // 800556AC
L_800556B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800556B0
  if (!crb(c,2)) { goto L_80055F04; } // 800556B4
  c->r[0]=R32(c->r[13]+0xFFFF8C90u); // 800556B8
  cmpu(c,0,c->r[0],0x00000002u); // 800556BC
  if (crb(c,2)) { goto L_80055F04; } // 800556C0
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 800556C4
  c->r[0]=0u+0x00000007u; // 800556C8
  c->r[3]=0u+0x00000001u; // 800556CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800556D0
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800556D4
  W32(c->r[13]+0xFFFF8C90u,c->r[3]); // 800556D8
  cmps(c,0,(int32_t)c->r[0],0); // 800556DC
  if (!crb(c,2)) { goto L_80055F04; } // 800556E0
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 800556E4
  cmps(c,0,(int32_t)c->r[0],0); // 800556E8
  if (!crb(c,2)) { goto L_80055F04; } // 800556EC
  W32(c->r[13]+0xFFFF8C44u,c->r[3]); // 800556F0
  c->r[3]=c->r[30]+0x00004B80u; // 800556F4
  c->lr=0x800556FCu; f_80043E70(c); // 800556F8
  c->lr=0x80055700u; f_8004DAC0(c); // 800556FC
  c->r[5]=0u+0x80000000u; // 80055700
  c->r[4]=0u+0x10620000u; // 80055704
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80055708
  c->r[9]=0u+0x80050000u; // 8005570C
  c->r[6]=c->r[3]|c->r[3]; // 80055710
  c->r[4]=c->r[4]+0x00004DD3u; // 80055714
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80055718
  c->r[3]=c->r[30]+0x00004B80u; // 8005571C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80055720
  c->r[9]=c->r[9]+0x00004C40u; // 80055724
  c->r[5]=0u+0x00000000u; // 80055728
  c->r[7]=0u+0x00000000u; // 8005572C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80055730
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80055734
  c->lr=0x8005573Cu; f_80044140(c); // 80055738
  goto L_80055F04; // 8005573C
L_80055740:;
  c->r[4]=R32(c->r[13]+0xFFFF8CA4u); // 80055740
  cmpu(c,0,c->r[4],0x00000001u); // 80055744
  if (crb(c,2)) { goto L_8005576C; } // 80055748
  cmpu(c,0,c->r[4],0x00000004u); // 8005574C
  if (crb(c,2)) { goto L_8005576C; } // 80055750
  cmpu(c,0,c->r[4],0x00000005u); // 80055754
  if (crb(c,2)) { goto L_8005576C; } // 80055758
  cmpu(c,0,c->r[4],0x00000021u); // 8005575C
  if (crb(c,2)) { goto L_8005576C; } // 80055760
  cmpu(c,0,c->r[4],0x0000000Eu); // 80055764
  if (!crb(c,2)) { goto L_80055774; } // 80055768
L_8005576C:;
  c->r[0]=0u+0x00000001u; // 8005576C
  goto L_8005578C; // 80055770
L_80055774:;
  c->r[0]=R32(c->r[13]+0xFFFF817Cu); // 80055774
  cmpu(c,0,c->r[4],c->r[0]); // 80055778
  if (!crb(c,2)) { goto L_80055788; } // 8005577C
  c->r[0]=0u+0x00000001u; // 80055780
  goto L_8005578C; // 80055784
L_80055788:;
  c->r[0]=0u+0x00000000u; // 80055788
L_8005578C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8005578C
  if (crb(c,2)) { goto L_800557BC; } // 80055790
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 80055794
  if (crb(c,2)) { goto L_800557A8; } // 80055798
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 8005579C
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800557A0
  goto L_800557AC; // 800557A4
L_800557A8:;
  c->r[4]=0u+0x00000000u; // 800557A8
L_800557AC:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800557AC
  c->r[0]=R32(c->r[3]+0x00000020u); // 800557B0
  c->r[0]=c->r[0]+c->r[4]; // 800557B4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800557B8
L_800557BC:;
  c->r[0]=R32(c->r[13]+0xFFFF8C40u); // 800557BC
  cmps(c,0,(int32_t)c->r[0],0); // 800557C0
  if (crb(c,2)) { goto L_80055828; } // 800557C4
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 800557C8
  c->r[4]=0u+0x00000000u; // 800557CC
  W32(c->r[13]+0xFFFF8C40u,c->r[4]); // 800557D0
  c->r[3]=c->r[30]+0x00004B20u; // 800557D4
  c->r[0]=0u+0x0000000Au; // 800557D8
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 800557DC
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800557E0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800557E4
  c->r[12]=R32(c->r[31]+0x00000028u); // 800557E8
  cmps(c,0,(int32_t)c->r[12],0); // 800557EC
  if (crb(c,2)) { goto L_80055804; } // 800557F0
  c->r[4]=c->r[31]|c->r[31]; // 800557F4
  c->r[3]=0u+0xFFFFFFFDu; // 800557F8
  c->ctr=c->r[12]; // 800557FC
  if (true) { c->lr=0x80055804u; dispatch(c,c->ctr); } // 80055800
L_80055804:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80055804
  cmps(c,0,(int32_t)c->r[12],0); // 80055808
  if (crb(c,2)) { goto L_80055820; } // 8005580C
  c->r[4]=c->r[31]|c->r[31]; // 80055810
  c->r[3]=0u+0x00000000u; // 80055814
  c->ctr=c->r[12]; // 80055818
  if (true) { c->lr=0x80055820u; dispatch(c,c->ctr); } // 8005581C
L_80055820:;
  c->lr=0x80055824u; f_80054C70(c); // 80055820
  goto L_80055F04; // 80055824
L_80055828:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80055828
  if (crb(c,2)) { goto L_80055DC4; } // 8005582C
  c->r[29]=0u+0x00000000u; // 80055830
  W32(c->r[13]+0xFFFF8C38u,c->r[29]); // 80055834
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055838
  cmpu(c,0,c->r[0],0x00000010u); // 8005583C
  if (!crb(c,2)) { goto L_800558A0; } // 80055840
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80055844
  c->r[0]=R32(c->r[3]+0x00000010u); // 80055848
  cmps(c,0,(int32_t)c->r[0],0); // 8005584C
  if (crb(c,2)) { goto L_80055860; } // 80055850
  c->r[0]=0u+0x00000002u; // 80055854
  W32(c->r[13]+0xFFFF8C90u,c->r[0]); // 80055858
  goto L_80055868; // 8005585C
L_80055860:;
  c->r[0]=0u+0x00000001u; // 80055860
  W32(c->r[13]+0xFFFF8C90u,c->r[0]); // 80055864
L_80055868:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055868
  c->r[3]=c->r[30]+0x00004B20u; // 8005586C
  c->r[0]=0u+0x00000000u; // 80055870
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055874
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055878
  c->r[12]=R32(c->r[31]+0x00000028u); // 8005587C
  cmps(c,0,(int32_t)c->r[12],0); // 80055880
  if (crb(c,2)) { goto L_80055898; } // 80055884
  c->r[4]=c->r[31]|c->r[31]; // 80055888
  c->r[3]=0u+0x00000000u; // 8005588C
  c->ctr=c->r[12]; // 80055890
  if (true) { c->lr=0x80055898u; dispatch(c,c->ctr); } // 80055894
L_80055898:;
  c->lr=0x8005589Cu; f_80054C70(c); // 80055898
  goto L_80055F04; // 8005589C
L_800558A0:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 800558A0
  cmpu(c,0,c->r[0],0x00000020u); // 800558A4
  if (!crb(c,2)) { goto L_800558F4; } // 800558A8
  c->lr=0x800558B0u; f_8004DAD0(c); // 800558AC
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 800558B0
  c->r[0]=c->r[30]+0x00004B20u; // 800558B4
  W32(c->r[13]+0xFFFF8C8Cu,c->r[4]); // 800558B8
  W32(c->r[13]+0xFFFF8C88u,c->r[3]); // 800558BC
  W32(c->r[13]+0xFFFF8C94u,c->r[29]); // 800558C0
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 800558C4
  W32(c->r[13]+0xFFFF8C34u,c->r[29]); // 800558C8
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 800558CC
  c->r[12]=R32(c->r[31]+0x00000028u); // 800558D0
  cmps(c,0,(int32_t)c->r[12],0); // 800558D4
  if (crb(c,2)) { goto L_800558EC; } // 800558D8
  c->r[4]=c->r[31]|c->r[31]; // 800558DC
  c->r[3]=0u+0x00000000u; // 800558E0
  c->ctr=c->r[12]; // 800558E4
  if (true) { c->lr=0x800558ECu; dispatch(c,c->ctr); } // 800558E8
L_800558EC:;
  c->lr=0x800558F0u; f_80054C70(c); // 800558EC
  goto L_80055F04; // 800558F0
L_800558F4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 800558F4
  cmps(c,0,(int32_t)c->r[0],0); // 800558F8
  if (crb(c,2)) { goto L_80055960; } // 800558FC
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055900
  c->r[3]=c->r[30]+0x00004B20u; // 80055904
  W32(c->r[13]+0xFFFF8C34u,c->r[29]); // 80055908
  c->r[0]=0u+0x0000000Au; // 8005590C
  W32(c->r[13]+0xFFFF8C30u,c->r[29]); // 80055910
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055914
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055918
  c->r[12]=R32(c->r[31]+0x00000028u); // 8005591C
  cmps(c,0,(int32_t)c->r[12],0); // 80055920
  if (crb(c,2)) { goto L_80055938; } // 80055924
  c->r[4]=c->r[31]|c->r[31]; // 80055928
  c->r[3]=0u+0xFFFFFFFDu; // 8005592C
  c->ctr=c->r[12]; // 80055930
  if (true) { c->lr=0x80055938u; dispatch(c,c->ctr); } // 80055934
L_80055938:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80055938
  cmps(c,0,(int32_t)c->r[12],0); // 8005593C
  if (crb(c,2)) { goto L_80055954; } // 80055940
  c->r[4]=c->r[31]|c->r[31]; // 80055944
  c->r[3]=0u+0x00000000u; // 80055948
  c->ctr=c->r[12]; // 8005594C
  if (true) { c->lr=0x80055954u; dispatch(c,c->ctr); } // 80055950
L_80055954:;
  c->lr=0x80055958u; f_80054C70(c); // 80055954
  c->r[0]=0u+0x00000001u; // 80055958
  goto L_80055964; // 8005595C
L_80055960:;
  c->r[0]=0u+0x00000000u; // 80055960
L_80055964:;
  cmps(c,0,(int32_t)c->r[0],0); // 80055964
  if (!crb(c,2)) { goto L_80055F04; } // 80055968
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 8005596C
  cmpu(c,0,c->r[0],0x00000026u); // 80055970
  if (!crb(c,2)) { goto L_80055A28; } // 80055974
  c->lr=0x8005597Cu; f_80059D00(c); // 80055978
  c->r[31]=c->r[3]|c->r[3]; // 8005597C
  c->lr=0x80055984u; f_8004DAD0(c); // 80055980
  c->r[6]=0u+0x80000000u; // 80055984
  c->r[5]=0u+0x10620000u; // 80055988
  c->r[6]=R32(c->r[6]+0x000000F8u); // 8005598C
  c->r[7]=c->r[5]+0x00004DD3u; // 80055990
  c->r[8]=R32(c->r[13]+0xFFFF8C88u); // 80055994
  c->r[0]=0u+0x00000000u; // 80055998
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8005599C
  c->r[9]=R32(c->r[13]+0xFFFF8C8Cu); // 800559A0
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 800559A4
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 800559A8
  c->r[5]=c->r[0]^0x80000000u; // 800559AC
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 800559B0
  c->r[0]=c->r[0]^0x80000000u; // 800559B4
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 800559B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800559BC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800559C0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800559C4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800559C8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800559CC
  if (crb(c,2)) { goto L_800559DC; } // 800559D0
  c->r[3]=0u+0x00000000u; // 800559D4
  goto L_800559F0; // 800559D8
L_800559DC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800559DC
  if (crb(c,2)) { goto L_800559EC; } // 800559E0
  c->r[3]=0u+0x00000001u; // 800559E4
  goto L_800559F0; // 800559E8
L_800559EC:;
  c->r[3]=0u+0x00000002u; // 800559EC
L_800559F0:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 800559F0
  c->r[4]=c->r[30]+0x00004B20u; // 800559F4
  c->r[0]=0u+0x00000000u; // 800559F8
  W32(c->r[13]+0xFFFF8CB0u,c->r[4]); // 800559FC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055A00
  W32(c->r[31]+0x00000010u,c->r[3]); // 80055A04
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055A08
  cmps(c,0,(int32_t)c->r[12],0); // 80055A0C
  if (crb(c,2)) { goto L_80055A20; } // 80055A10
  c->r[4]=c->r[31]|c->r[31]; // 80055A14
  c->ctr=c->r[12]; // 80055A18
  if (true) { c->lr=0x80055A20u; dispatch(c,c->ctr); } // 80055A1C
L_80055A20:;
  c->lr=0x80055A24u; f_80054C70(c); // 80055A20
  goto L_80055F04; // 80055A24
L_80055A28:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055A28
  cmpu(c,0,c->r[0],0x00000024u); // 80055A2C
  if (!crb(c,2)) { goto L_80055AA0; } // 80055A30
  c->lr=0x80055A38u; f_80059D00(c); // 80055A34
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 80055A38
  if (!crb(c,2)) { goto L_80055A48; } // 80055A3C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80055A40
  if (crb(c,2)) { goto L_80055A50; } // 80055A44
L_80055A48:;
  c->r[3]=0u+0x00000000u; // 80055A48
  goto L_80055A68; // 80055A4C
L_80055A50:;
  c->r[0]=R32(c->r[13]+0xFFFF8C34u); // 80055A50
  cmps(c,0,(int32_t)c->r[0],0); // 80055A54
  if (crb(c,2)) { goto L_80055A64; } // 80055A58
  c->r[3]=0u+0x00000000u; // 80055A5C
  goto L_80055A68; // 80055A60
L_80055A64:;
  c->r[3]=0u+0x00000001u; // 80055A64
L_80055A68:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055A68
  c->r[4]=c->r[30]+0x00004B20u; // 80055A6C
  c->r[0]=0u+0x00000000u; // 80055A70
  W32(c->r[13]+0xFFFF8CB0u,c->r[4]); // 80055A74
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055A78
  W32(c->r[31]+0x00000010u,c->r[3]); // 80055A7C
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055A80
  cmps(c,0,(int32_t)c->r[12],0); // 80055A84
  if (crb(c,2)) { goto L_80055A98; } // 80055A88
  c->r[4]=c->r[31]|c->r[31]; // 80055A8C
  c->ctr=c->r[12]; // 80055A90
  if (true) { c->lr=0x80055A98u; dispatch(c,c->ctr); } // 80055A94
L_80055A98:;
  c->lr=0x80055A9Cu; f_80054C70(c); // 80055A98
  goto L_80055F04; // 80055A9C
L_80055AA0:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055AA0
  cmpu(c,0,c->r[0],0x00000028u); // 80055AA4
  if (!crb(c,2)) { goto L_80055BB8; } // 80055AA8
  c->r[4]=R32(c->r[13]+0xFFFF8CB0u); // 80055AAC
  c->r[3]=c->r[30]+0x00004BC0u; // 80055AB0
  c->r[4]=R32(c->r[4]+0x00000024u); // 80055AB4
  c->lr=0x80055ABCu; f_80057790(c); // 80055AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80055ABC
  if (crb(c,2)) { goto L_80055B1C; } // 80055AC0
  c->r[3]=R32(c->r[13]+0xFFFF8CACu); // 80055AC4
  c->r[4]=c->r[30]+0x00004BC0u; // 80055AC8
  c->r[5]=0u+0x00000020u; // 80055ACC
  c->lr=0x80055AD4u; f_800043C4(c); // 80055AD0
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055AD4
  c->r[4]=c->r[30]+0x00004B20u; // 80055AD8
  c->r[3]=0u+0x00000000u; // 80055ADC
  c->r[0]=0u+0x00000001u; // 80055AE0
  W32(c->r[13]+0xFFFF8CB0u,c->r[4]); // 80055AE4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80055AE8
  W32(c->r[31]+0x00000010u,c->r[0]); // 80055AEC
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055AF0
  cmps(c,0,(int32_t)c->r[12],0); // 80055AF4
  if (crb(c,2)) { goto L_80055B0C; } // 80055AF8
  c->r[4]=c->r[31]|c->r[31]; // 80055AFC
  c->r[3]=0u+0x00000001u; // 80055B00
  c->ctr=c->r[12]; // 80055B04
  if (true) { c->lr=0x80055B0Cu; dispatch(c,c->ctr); } // 80055B08
L_80055B0C:;
  c->r[0]=0u+0x00000000u; // 80055B0C
  W32(c->r[13]+0xFFFF8C38u,c->r[0]); // 80055B10
  c->lr=0x80055B18u; f_80054C70(c); // 80055B14
  goto L_80055F04; // 80055B18
L_80055B1C:;
  c->lr=0x80055B20u; f_80049A20(c); // 80055B1C
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055B20
  c->r[30]=c->r[3]|c->r[3]; // 80055B24
  cmpu(c,0,c->r[0],0x00000005u); // 80055B28
  if (crb(c,0)) { goto L_80055B38; } // 80055B2C
  c->r[0]=0u+0x00000000u; // 80055B30
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80055B34
L_80055B38:;
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055B38
  c->r[31]=0u+0x801A0000u; // 80055B3C
  c->r[3]=R32(c->r[13]+0xFFFF8C20u); // 80055B40
  c->r[31]=c->r[31]+0x000006C0u; // 80055B44
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055B48
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055B4C
  c->r[6]=0u+0x00000010u; // 80055B50
  c->r[4]=0u+0x00000000u; // 80055B54
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80055B58
  c->r[5]=c->r[31]+c->r[5]; // 80055B5C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80055B60
  c->r[3]=c->r[31]+c->r[3]; // 80055B64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055B68
  W32(c->r[3]+0x00000020u,c->r[4]); // 80055B6C
  c->r[3]=c->r[31]+c->r[0]; // 80055B70
  W32(c->r[3]+0x00000024u,c->r[4]); // 80055B74
  c->lr=0x80055B7Cu; f_8004DAC0(c); // 80055B78
  c->r[0]=R32(c->r[13]+0xFFFF8C20u); // 80055B7C
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80055B80
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80055B84
  c->r[0]=c->r[4]+0x00000001u; // 80055B88
  W32(c->r[13]+0xFFFF8C20u,c->r[0]); // 80055B8C
  c->r[4]=c->r[31]+c->r[5]; // 80055B90
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80055B94
  c->r[3]=c->r[30]|c->r[30]; // 80055B98
  c->lr=0x80055BA0u; f_80049A60(c); // 80055B9C
  c->r[5]=0u+0x80050000u; // 80055BA0
  c->r[3]=0u+0x00000000u; // 80055BA4
  c->r[5]=c->r[5]+0x00003DC0u; // 80055BA8
  c->r[4]=0u+0x00000000u; // 80055BAC
  c->lr=0x80055BB4u; f_80058EF0(c); // 80055BB0
  goto L_80055F04; // 80055BB4
L_80055BB8:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055BB8
  cmpu(c,0,c->r[0],0x00000029u); // 80055BBC
  if (!crb(c,2)) { goto L_80055C14; } // 80055BC0
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80055BC4
  c->r[4]=R32(c->r[3]+0x00000018u); // 80055BC8
  c->r[0]=R32(c->r[4]+0x00005DE0u); // 80055BCC
  cmps(c,0,(int32_t)c->r[0],0); // 80055BD0
  if (!crb(c,2)) { goto L_80055BE0; } // 80055BD4
  c->lr=0x80055BDCu; f_80054F90(c); // 80055BD8
  goto L_80055F04; // 80055BDC
L_80055BE0:;
  c->r[0]=c->r[30]+0x00004B20u; // 80055BE0
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 80055BE4
  c->r[0]=0u+0x00000000u; // 80055BE8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80055BEC
  c->r[12]=R32(c->r[3]+0x00000028u); // 80055BF0
  cmps(c,0,(int32_t)c->r[12],0); // 80055BF4
  if (crb(c,2)) { goto L_80055C0C; } // 80055BF8
  c->r[4]=c->r[3]|c->r[3]; // 80055BFC
  c->r[3]=0u+0x00000000u; // 80055C00
  c->ctr=c->r[12]; // 80055C04
  if (true) { c->lr=0x80055C0Cu; dispatch(c,c->ctr); } // 80055C08
L_80055C0C:;
  c->lr=0x80055C10u; f_80054C70(c); // 80055C0C
  goto L_80055F04; // 80055C10
L_80055C14:;
  c->r[4]=R32(c->r[13]+0xFFFF8CA4u); // 80055C14
  cmpu(c,0,c->r[4],0x00000001u); // 80055C18
  if (crb(c,2)) { goto L_80055C40; } // 80055C1C
  cmpu(c,0,c->r[4],0x00000004u); // 80055C20
  if (crb(c,2)) { goto L_80055C40; } // 80055C24
  cmpu(c,0,c->r[4],0x00000005u); // 80055C28
  if (crb(c,2)) { goto L_80055C40; } // 80055C2C
  cmpu(c,0,c->r[4],0x00000021u); // 80055C30
  if (crb(c,2)) { goto L_80055C40; } // 80055C34
  cmpu(c,0,c->r[4],0x0000000Eu); // 80055C38
  if (!crb(c,2)) { goto L_80055C48; } // 80055C3C
L_80055C40:;
  c->r[0]=0u+0x00000001u; // 80055C40
  goto L_80055C60; // 80055C44
L_80055C48:;
  c->r[0]=R32(c->r[13]+0xFFFF817Cu); // 80055C48
  cmpu(c,0,c->r[4],c->r[0]); // 80055C4C
  if (!crb(c,2)) { goto L_80055C5C; } // 80055C50
  c->r[0]=0u+0x00000001u; // 80055C54
  goto L_80055C60; // 80055C58
L_80055C5C:;
  c->r[0]=0u+0x00000000u; // 80055C5C
L_80055C60:;
  cmps(c,0,(int32_t)c->r[0],0); // 80055C60
  if (crb(c,2)) { goto L_80055CB8; } // 80055C64
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80055C68
  c->r[4]=R32(c->r[3]+0x00000020u); // 80055C6C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80055C70
  cmpu(c,0,c->r[4],c->r[0]); // 80055C74
  if (crb(c,2)) { goto L_80055C84; } // 80055C78
  c->lr=0x80055C80u; f_80054F90(c); // 80055C7C
  goto L_80055F04; // 80055C80
L_80055C84:;
  c->r[0]=c->r[30]+0x00004B20u; // 80055C84
  W32(c->r[13]+0xFFFF8CB0u,c->r[0]); // 80055C88
  c->r[0]=0u+0x00000000u; // 80055C8C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80055C90
  c->r[12]=R32(c->r[3]+0x00000028u); // 80055C94
  cmps(c,0,(int32_t)c->r[12],0); // 80055C98
  if (crb(c,2)) { goto L_80055CB0; } // 80055C9C
  c->r[4]=c->r[3]|c->r[3]; // 80055CA0
  c->r[3]=R32(c->r[3]+0x00000020u); // 80055CA4
  c->ctr=c->r[12]; // 80055CA8
  if (true) { c->lr=0x80055CB0u; dispatch(c,c->ctr); } // 80055CAC
L_80055CB0:;
  c->lr=0x80055CB4u; f_80054C70(c); // 80055CB0
  goto L_80055F04; // 80055CB4
L_80055CB8:;
  c->r[4]=R32(c->r[13]+0xFFFF8CA4u); // 80055CB8
  cmpu(c,0,c->r[4],0x00000009u); // 80055CBC
  if (crb(c,2)) { goto L_80055CDC; } // 80055CC0
  cmpu(c,0,c->r[4],0x0000000Au); // 80055CC4
  if (crb(c,2)) { goto L_80055CDC; } // 80055CC8
  cmpu(c,0,c->r[4],0x0000000Bu); // 80055CCC
  if (crb(c,2)) { goto L_80055CDC; } // 80055CD0
  cmpu(c,0,c->r[4],0x0000000Cu); // 80055CD4
  if (!crb(c,2)) { goto L_80055CE4; } // 80055CD8
L_80055CDC:;
  c->r[0]=0u+0x00000001u; // 80055CDC
  goto L_80055D28; // 80055CE0
L_80055CE4:;
  c->r[3]=0u+0x80140000u; // 80055CE4
  {uint32_t ea=c->r[3]+0x00005D90u; c->r[0]=R32(ea); c->r[3]=ea;} // 80055CE8
  cmpu(c,0,c->r[4],c->r[0]); // 80055CEC
  if (!crb(c,2)) { goto L_80055CFC; } // 80055CF0
  c->r[0]=0u+0x00000001u; // 80055CF4
  goto L_80055D28; // 80055CF8
L_80055CFC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80055CFC
  cmpu(c,0,c->r[4],c->r[0]); // 80055D00
  if (!crb(c,2)) { goto L_80055D10; } // 80055D04
  c->r[0]=0u+0x00000001u; // 80055D08
  goto L_80055D28; // 80055D0C
L_80055D10:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80055D10
  cmpu(c,0,c->r[4],c->r[0]); // 80055D14
  if (!crb(c,2)) { goto L_80055D24; } // 80055D18
  c->r[0]=0u+0x00000001u; // 80055D1C
  goto L_80055D28; // 80055D20
L_80055D24:;
  c->r[0]=0u+0x00000000u; // 80055D24
L_80055D28:;
  cmps(c,0,(int32_t)c->r[0],0); // 80055D28
  if (crb(c,2)) { goto L_80055D8C; } // 80055D2C
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055D30
  cmpu(c,0,c->r[0],0x0000000Bu); // 80055D34
  if (crb(c,2)) { goto L_80055D48; } // 80055D38
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055D3C
  cmpu(c,0,c->r[0],0x0000000Au); // 80055D40
  if (!crb(c,2)) { goto L_80055D54; } // 80055D44
L_80055D48:;
  c->lr=0x80055D4Cu; f_8005A180(c); // 80055D48
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80055D4C
  goto L_80055D58; // 80055D50
L_80055D54:;
  c->lr=0x80055D58u; f_8005A180(c); // 80055D54
L_80055D58:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055D58
  c->r[4]=c->r[30]+0x00004B20u; // 80055D5C
  c->r[0]=0u+0x00000000u; // 80055D60
  W32(c->r[13]+0xFFFF8CB0u,c->r[4]); // 80055D64
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055D68
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055D6C
  cmps(c,0,(int32_t)c->r[12],0); // 80055D70
  if (crb(c,2)) { goto L_80055D84; } // 80055D74
  c->r[4]=c->r[31]|c->r[31]; // 80055D78
  c->ctr=c->r[12]; // 80055D7C
  if (true) { c->lr=0x80055D84u; dispatch(c,c->ctr); } // 80055D80
L_80055D84:;
  c->lr=0x80055D88u; f_80054C70(c); // 80055D84
  goto L_80055F04; // 80055D88
L_80055D8C:;
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055D8C
  c->r[3]=c->r[30]+0x00004B20u; // 80055D90
  c->r[0]=0u+0x00000000u; // 80055D94
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055D98
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055D9C
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055DA0
  cmps(c,0,(int32_t)c->r[12],0); // 80055DA4
  if (crb(c,2)) { goto L_80055DBC; } // 80055DA8
  c->r[4]=c->r[31]|c->r[31]; // 80055DAC
  c->r[3]=0u+0x00000000u; // 80055DB0
  c->ctr=c->r[12]; // 80055DB4
  if (true) { c->lr=0x80055DBCu; dispatch(c,c->ctr); } // 80055DB8
L_80055DBC:;
  c->lr=0x80055DC0u; f_80054C70(c); // 80055DBC
  goto L_80055F04; // 80055DC0
L_80055DC4:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055DC4
  cmpu(c,0,c->r[0],0x0000000Eu); // 80055DC8
  if (!crb(c,2)) { goto L_80055DE8; } // 80055DCC
  c->r[3]=0u+0x01230000u; // 80055DD0
  c->r[4]=0u+0x80050000u; // 80055DD4
  c->r[3]=c->r[3]+0x00004567u; // 80055DD8
  c->r[4]=c->r[4]+0x00002520u; // 80055DDC
  c->lr=0x80055DE4u; f_80057720(c); // 80055DE0
  goto L_80055F04; // 80055DE4
L_80055DE8:;
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055DE8
  cmpu(c,0,c->r[0],0x00000001u); // 80055DEC
  if (crb(c,2)) { goto L_80055E24; } // 80055DF0
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055DF4
  cmpu(c,0,c->r[0],0x00000004u); // 80055DF8
  if (crb(c,2)) { goto L_80055E24; } // 80055DFC
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055E00
  cmpu(c,0,c->r[0],0x00000005u); // 80055E04
  if (crb(c,2)) { goto L_80055E24; } // 80055E08
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055E0C
  cmpu(c,0,c->r[0],0x00000021u); // 80055E10
  if (crb(c,2)) { goto L_80055E24; } // 80055E14
  c->r[0]=R32(c->r[13]+0xFFFF8CA4u); // 80055E18
  cmpu(c,0,c->r[0],0x0000000Eu); // 80055E1C
  if (!crb(c,2)) { goto L_80055EE8; } // 80055E20
L_80055E24:;
  c->r[29]=R32(c->r[13]+0xFFFF8CB0u); // 80055E24
  c->r[3]=R32(c->r[29]+0x00000020u); // 80055E28
  c->r[0]=R32(c->r[29]+0x00000014u); // 80055E2C
  cmpu(c,0,c->r[3],c->r[0]); // 80055E30
  if (!crb(c,2)) { goto L_80055EE8; } // 80055E34
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80055E38
  cmps(c,0,(int32_t)c->r[0],0); // 80055E3C
  if (crb(c,2)) { goto L_80055EA4; } // 80055E40
  c->r[4]=0u+0x00000000u; // 80055E44
  W32(c->r[13]+0xFFFF8C34u,c->r[4]); // 80055E48
  c->r[3]=c->r[30]+0x00004B20u; // 80055E4C
  c->r[0]=0u+0x0000000Au; // 80055E50
  W32(c->r[13]+0xFFFF8C30u,c->r[4]); // 80055E54
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055E58
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80055E5C
  c->r[12]=R32(c->r[29]+0x00000028u); // 80055E60
  cmps(c,0,(int32_t)c->r[12],0); // 80055E64
  if (crb(c,2)) { goto L_80055E7C; } // 80055E68
  c->r[4]=c->r[29]|c->r[29]; // 80055E6C
  c->r[3]=0u+0xFFFFFFFDu; // 80055E70
  c->ctr=c->r[12]; // 80055E74
  if (true) { c->lr=0x80055E7Cu; dispatch(c,c->ctr); } // 80055E78
L_80055E7C:;
  c->r[12]=R32(c->r[13]+0xFFFF8CA0u); // 80055E7C
  cmps(c,0,(int32_t)c->r[12],0); // 80055E80
  if (crb(c,2)) { goto L_80055E98; } // 80055E84
  c->r[4]=c->r[29]|c->r[29]; // 80055E88
  c->r[3]=0u+0x00000000u; // 80055E8C
  c->ctr=c->r[12]; // 80055E90
  if (true) { c->lr=0x80055E98u; dispatch(c,c->ctr); } // 80055E94
L_80055E98:;
  c->lr=0x80055E9Cu; f_80054C70(c); // 80055E98
  c->r[0]=0u+0x00000001u; // 80055E9C
  goto L_80055EA8; // 80055EA0
L_80055EA4:;
  c->r[0]=0u+0x00000000u; // 80055EA4
L_80055EA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80055EA8
  if (!crb(c,2)) { goto L_80055F04; } // 80055EAC
  c->r[31]=R32(c->r[13]+0xFFFF8CB0u); // 80055EB0
  c->r[3]=c->r[30]+0x00004B20u; // 80055EB4
  c->r[0]=0u+0x00000000u; // 80055EB8
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80055EBC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80055EC0
  c->r[12]=R32(c->r[31]+0x00000028u); // 80055EC4
  cmps(c,0,(int32_t)c->r[12],0); // 80055EC8
  if (crb(c,2)) { goto L_80055EE0; } // 80055ECC
  c->r[4]=c->r[31]|c->r[31]; // 80055ED0
  c->r[3]=R32(c->r[31]+0x00000020u); // 80055ED4
  c->ctr=c->r[12]; // 80055ED8
  if (true) { c->lr=0x80055EE0u; dispatch(c,c->ctr); } // 80055EDC
L_80055EE0:;
  c->lr=0x80055EE4u; f_80054C70(c); // 80055EE0
  goto L_80055F04; // 80055EE4
L_80055EE8:;
  c->r[3]=0u+0x00000027u; // 80055EE8
  c->r[4]=0u+0x00000000u; // 80055EEC
  c->r[5]=0u+0x00000000u; // 80055EF0
  c->lr=0x80055EF8u; f_80051EC0(c); // 80055EF4
  c->r[3]=0u+0x80050000u; // 80055EF8
  c->r[3]=c->r[3]+0x00002750u; // 80055EFC
  c->lr=0x80055F04u; f_80059200(c); // 80055F00
L_80055F04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055F04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055F08
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055F0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80055F10
  c->lr=c->r[0]; // 80055F14
  c->r[1]=c->r[1]+0x00000020u; // 80055F18
  return; // 80055F1C
}

// DVDReadAbsAsyncPrio
void f_80055F20(Ctx* __restrict c) {
  trace_call(0x80055F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055F20
  c->r[0]=c->lr; // 80055F24
  c->r[9]=0u+0x00000001u; // 80055F28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055F2C
  c->r[0]=0u+0x00000000u; // 80055F30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80055F34
  c->r[31]=c->r[8]|c->r[8]; // 80055F38
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055F3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80055F40
  c->r[29]=c->r[3]|c->r[3]; // 80055F44
  W32(c->r[3]+0x00000008u,c->r[9]); // 80055F48
  W32(c->r[3]+0x00000018u,c->r[4]); // 80055F4C
  W32(c->r[3]+0x00000014u,c->r[5]); // 80055F50
  W32(c->r[3]+0x00000010u,c->r[6]); // 80055F54
  W32(c->r[3]+0x00000020u,c->r[0]); // 80055F58
  W32(c->r[3]+0x00000028u,c->r[7]); // 80055F5C
  c->r[0]=R32(c->r[13]+0xFFFF816Cu); // 80055F60
  cmps(c,0,(int32_t)c->r[0],0); // 80055F64
  if (crb(c,2)) { goto L_80055FA0; } // 80055F68
  cmpu(c,0,c->r[9],0x00000001u); // 80055F6C
  if (crb(c,2)) { goto L_80055F94; } // 80055F70
  cmpu(c,0,c->r[9],0x00000004u); // 80055F74
  if (crb(c,2)) { goto L_80055F94; } // 80055F78
  cmpu(c,0,c->r[9],0x00000005u); // 80055F7C
  if (crb(c,2)) { goto L_80055F94; } // 80055F80
  cmpu(c,0,c->r[9],0x00000021u); // 80055F84
  if (crb(c,2)) { goto L_80055F94; } // 80055F88
  cmpu(c,0,c->r[9],0x0000000Eu); // 80055F8C
  if (!crb(c,2)) { goto L_80055FA0; } // 80055F90
L_80055F94:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80055F94
  c->r[4]=R32(c->r[29]+0x00000014u); // 80055F98
  c->lr=0x80055FA0u; f_80044FE0(c); // 80055F9C
L_80055FA0:;
  c->lr=0x80055FA4u; f_80049A20(c); // 80055FA0
  c->r[0]=0u+0x00000002u; // 80055FA4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80055FA8
  c->r[30]=c->r[3]|c->r[3]; // 80055FAC
  c->r[3]=c->r[31]|c->r[31]; // 80055FB0
  c->r[4]=c->r[29]|c->r[29]; // 80055FB4
  c->lr=0x80055FBCu; f_80056B30(c); // 80055FB8
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 80055FBC
  c->r[31]=c->r[3]|c->r[3]; // 80055FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80055FC4
  if (!crb(c,2)) { goto L_80055FDC; } // 80055FC8
  c->r[0]=R32(c->r[13]+0xFFFF8C24u); // 80055FCC
  cmps(c,0,(int32_t)c->r[0],0); // 80055FD0
  if (!crb(c,2)) { goto L_80055FDC; } // 80055FD4
  c->lr=0x80055FDCu; f_80054C70(c); // 80055FD8
L_80055FDC:;
  c->r[3]=c->r[30]|c->r[30]; // 80055FDC
  c->lr=0x80055FE4u; f_80049A60(c); // 80055FE0
  c->r[3]=c->r[31]|c->r[31]; // 80055FE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055FE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055FEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80055FF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055FF4
  c->lr=c->r[0]; // 80055FF8
  c->r[1]=c->r[1]+0x00000020u; // 80055FFC
  return; // 80056000
}

// DVDInquiryAsync
void f_80056010(Ctx* __restrict c) {
  trace_call(0x80056010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056010
  c->r[0]=c->lr; // 80056014
  c->r[7]=0u+0x0000000Eu; // 80056018
  c->r[6]=0u+0x00000020u; // 8005601C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056020
  c->r[0]=0u+0x00000000u; // 80056024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056028
  c->r[31]=c->r[3]|c->r[3]; // 8005602C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80056030
  W32(c->r[3]+0x00000008u,c->r[7]); // 80056034
  W32(c->r[3]+0x00000018u,c->r[4]); // 80056038
  W32(c->r[3]+0x00000014u,c->r[6]); // 8005603C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80056040
  W32(c->r[3]+0x00000028u,c->r[5]); // 80056044
  c->r[0]=R32(c->r[13]+0xFFFF816Cu); // 80056048
  cmps(c,0,(int32_t)c->r[0],0); // 8005604C
  if (crb(c,2)) { goto L_80056088; } // 80056050
  cmpu(c,0,c->r[7],0x00000001u); // 80056054
  if (crb(c,2)) { goto L_8005607C; } // 80056058
  cmpu(c,0,c->r[7],0x00000004u); // 8005605C
  if (crb(c,2)) { goto L_8005607C; } // 80056060
  cmpu(c,0,c->r[7],0x00000005u); // 80056064
  if (crb(c,2)) { goto L_8005607C; } // 80056068
  cmpu(c,0,c->r[7],0x00000021u); // 8005606C
  if (crb(c,2)) { goto L_8005607C; } // 80056070
  cmpu(c,0,c->r[7],0x0000000Eu); // 80056074
  if (!crb(c,2)) { goto L_80056088; } // 80056078
L_8005607C:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8005607C
  c->r[4]=R32(c->r[31]+0x00000014u); // 80056080
  c->lr=0x80056088u; f_80044FE0(c); // 80056084
L_80056088:;
  c->lr=0x8005608Cu; f_80049A20(c); // 80056088
  c->r[0]=0u+0x00000002u; // 8005608C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80056090
  c->r[30]=c->r[3]|c->r[3]; // 80056094
  c->r[4]=c->r[31]|c->r[31]; // 80056098
  c->r[3]=0u+0x00000002u; // 8005609C
  c->lr=0x800560A4u; f_80056B30(c); // 800560A0
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800560A4
  c->r[31]=c->r[3]|c->r[3]; // 800560A8
  cmps(c,0,(int32_t)c->r[0],0); // 800560AC
  if (!crb(c,2)) { goto L_800560C4; } // 800560B0
  c->r[0]=R32(c->r[13]+0xFFFF8C24u); // 800560B4
  cmps(c,0,(int32_t)c->r[0],0); // 800560B8
  if (!crb(c,2)) { goto L_800560C4; } // 800560BC
  c->lr=0x800560C4u; f_80054C70(c); // 800560C0
L_800560C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800560C4
  c->lr=0x800560CCu; f_80049A60(c); // 800560C8
  c->r[3]=c->r[31]|c->r[31]; // 800560CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800560D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800560D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800560D8
  c->lr=c->r[0]; // 800560DC
  c->r[1]=c->r[1]+0x00000010u; // 800560E0
  return; // 800560E4
}

// DVDGetCommandBlockStatus
void f_800560F0(Ctx* __restrict c) {
  trace_call(0x800560F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800560F0
  c->r[0]=c->lr; // 800560F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800560F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800560FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056100
  W32(c->r[1]+0x00000014u,c->r[29]); // 80056104
  c->r[29]=c->r[3]|c->r[3]; // 80056108
  c->lr=0x80056110u; f_80049A20(c); // 8005610C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056110
  c->r[30]=c->r[3]|c->r[3]; // 80056114
  cmps(c,0,(int32_t)c->r[0],3); // 80056118
  if (!crb(c,2)) { goto L_80056128; } // 8005611C
  c->r[31]=0u+0x00000001u; // 80056120
  goto L_80056190; // 80056124
L_80056128:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056128
  cmps(c,0,(int32_t)c->r[0],5); // 8005612C
  if (!crb(c,2)) { goto L_8005613C; } // 80056130
  c->r[31]=0u+0x00000004u; // 80056134
  goto L_80056190; // 80056138
L_8005613C:;
  c->r[31]=0u+0x801A0000u; // 8005613C
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 80056140
  c->r[31]=c->r[31]+0x000004D0u; // 80056144
  cmpu(c,0,c->r[0],c->r[31]); // 80056148
  if (!crb(c,2)) { goto L_8005618C; } // 8005614C
  c->lr=0x80056154u; f_80056CA0(c); // 80056150
  cmps(c,0,(int32_t)c->r[3],0); // 80056154
  if (crb(c,2)) { goto L_80056174; } // 80056158
  cmpu(c,0,c->r[29],c->r[3]); // 8005615C
  if (!crb(c,2)) { goto L_8005616C; } // 80056160
  c->r[31]=0u+0x00000001u; // 80056164
  goto L_80056190; // 80056168
L_8005616C:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 8005616C
  goto L_80056190; // 80056170
L_80056174:;
  cmpu(c,0,c->r[29],c->r[31]); // 80056174
  if (!crb(c,2)) { goto L_80056184; } // 80056178
  c->r[31]=0u+0x00000000u; // 8005617C
  goto L_80056190; // 80056180
L_80056184:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 80056184
  goto L_80056190; // 80056188
L_8005618C:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 8005618C
L_80056190:;
  c->r[3]=c->r[30]|c->r[30]; // 80056190
  c->lr=0x80056198u; f_80049A60(c); // 80056194
  c->r[3]=c->r[31]|c->r[31]; // 80056198
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005619C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800561A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800561A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800561A8
  c->lr=c->r[0]; // 800561AC
  c->r[1]=c->r[1]+0x00000020u; // 800561B0
  return; // 800561B4
}

// DVDGetDriveStatus
void f_800561C0(Ctx* __restrict c) {
  trace_call(0x800561C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800561C0
  c->r[0]=c->lr; // 800561C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800561C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800561CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800561D0
  c->lr=0x800561D8u; f_80049A20(c); // 800561D4
  c->r[0]=R32(c->r[13]+0xFFFF8C2Cu); // 800561D8
  c->r[31]=c->r[3]|c->r[3]; // 800561DC
  cmps(c,0,(int32_t)c->r[0],0); // 800561E0
  if (crb(c,2)) { goto L_800561F0; } // 800561E4
  c->r[30]=0u+0xFFFFFFFFu; // 800561E8
  goto L_80056238; // 800561EC
L_800561F0:;
  c->r[0]=R32(c->r[13]+0xFFFF8C28u); // 800561F0
  cmps(c,0,(int32_t)c->r[0],0); // 800561F4
  if (crb(c,2)) { goto L_80056204; } // 800561F8
  c->r[30]=0u+0x00000008u; // 800561FC
  goto L_80056238; // 80056200
L_80056204:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80056204
  cmps(c,0,(int32_t)c->r[3],0); // 80056208
  if (!crb(c,2)) { goto L_80056218; } // 8005620C
  c->r[30]=0u+0x00000000u; // 80056210
  goto L_80056238; // 80056214
L_80056218:;
  c->r[4]=0u+0x801A0000u; // 80056218
  c->r[4]=c->r[4]+0x000003A0u; // 8005621C
  cmpu(c,0,c->r[3],c->r[4]); // 80056220
  if (!crb(c,2)) { goto L_80056230; } // 80056224
  c->r[3]=0u+0x00000000u; // 80056228
  goto L_80056234; // 8005622C
L_80056230:;
  c->lr=0x80056234u; f_800560F0(c); // 80056230
L_80056234:;
  c->r[30]=c->r[3]|c->r[3]; // 80056234
L_80056238:;
  c->r[3]=c->r[31]|c->r[31]; // 80056238
  c->lr=0x80056240u; f_80049A60(c); // 8005623C
  c->r[3]=c->r[30]|c->r[30]; // 80056240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056244
  c->r[30]=R32(c->r[1]+0x00000008u); // 80056248
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005624C
  c->lr=c->r[0]; // 80056250
  c->r[1]=c->r[1]+0x00000010u; // 80056254
  return; // 80056258
}

// DVDSetAutoInvalidation
void f_80056260(Ctx* __restrict c) {
  trace_call(0x80056260u);
  c->r[0]=c->r[3]|c->r[3]; // 80056260
  c->r[3]=R32(c->r[13]+0xFFFF816Cu); // 80056264
  W32(c->r[13]+0xFFFF816Cu,c->r[0]); // 80056268
  return; // 8005626C
}

// DVDResume
void f_80056270(Ctx* __restrict c) {
  trace_call(0x80056270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056270
  c->r[0]=c->lr; // 80056274
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005627C
  c->lr=0x80056284u; f_80049A20(c); // 80056280
  c->r[4]=0u+0x00000000u; // 80056284
  W32(c->r[13]+0xFFFF8C24u,c->r[4]); // 80056288
  c->r[0]=R32(c->r[13]+0xFFFF8C28u); // 8005628C
  c->r[31]=c->r[3]|c->r[3]; // 80056290
  cmps(c,0,(int32_t)c->r[0],0); // 80056294
  if (crb(c,2)) { goto L_800562A4; } // 80056298
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 8005629C
  c->lr=0x800562A4u; f_80054C70(c); // 800562A0
L_800562A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800562A4
  c->lr=0x800562ACu; f_80049A60(c); // 800562A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800562AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800562B0
  c->lr=c->r[0]; // 800562B4
  c->r[1]=c->r[1]+0x00000010u; // 800562B8
  return; // 800562BC
}

// fn_800562C0
void f_800562C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800562C0
  c->r[0]=c->lr; // 800562C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800562C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800562CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800562D0
  c->r[30]=c->r[4]|c->r[4]; // 800562D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800562D8
  c->r[29]=c->r[3]|c->r[3]; // 800562DC
  c->lr=0x800562E4u; f_80049A20(c); // 800562E0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800562E4
  c->r[31]=c->r[3]|c->r[3]; // 800562E8
  c->r[0]=c->r[4]+0x00000001u; // 800562EC
  cmpu(c,0,c->r[0],0x0000000Du); // 800562F0
  if (crb(c,1)) { goto L_800565FC; } // 800562F4
  c->r[4]=0u+0x80140000u; // 800562F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800562FC
  c->r[4]=c->r[4]+0x00005E48u; // 80056300
  c->r[4]=R32(c->r[4]+c->r[0]); // 80056304
  c->ctr=c->r[4]; // 80056308
  if (true) { switch (c->ctr) { case 0x80056310u: goto L_80056310; case 0x80056330u: goto L_80056330; case 0x80056394u: goto L_80056394; case 0x800563E0u: goto L_800563E0; case 0x80056404u: goto L_80056404; case 0x80056424u: goto L_80056424; case 0x80056484u: goto L_80056484; case 0x800564B0u: goto L_800564B0; case 0x800565ACu: goto L_800565AC; case 0x800565FCu: goto L_800565FC; default: break; } dispatch(c,c->ctr); return; } // 8005630C
L_80056310:;
  cmps(c,0,(int32_t)c->r[30],0); // 80056310
  if (crb(c,2)) { goto L_800565FC; } // 80056314
  c->r[12]=c->r[30]|c->r[30]; // 80056318
  c->r[4]=c->r[29]|c->r[29]; // 8005631C
  c->r[3]=0u+0x00000000u; // 80056320
  c->ctr=c->r[12]; // 80056324
  if (true) { c->lr=0x8005632Cu; dispatch(c,c->ctr); } // 80056328
  goto L_800565FC; // 8005632C
L_80056330:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80056330
  cmps(c,0,(int32_t)c->r[0],0); // 80056334
  if (crb(c,2)) { goto L_80056348; } // 80056338
  c->lr=0x80056340u; f_80049A60(c); // 8005633C
  c->r[3]=0u+0x00000000u; // 80056340
  goto L_80056608; // 80056344
L_80056348:;
  c->r[0]=0u+0x00000001u; // 80056348
  W32(c->r[13]+0xFFFF8C30u,c->r[0]); // 8005634C
  W32(c->r[13]+0xFFFF8CA0u,c->r[30]); // 80056350
  c->r[0]=R32(c->r[29]+0x00000008u); // 80056354
  cmpu(c,0,c->r[0],0x00000004u); // 80056358
  if (crb(c,2)) { goto L_80056388; } // 8005635C
  cmpu(c,0,c->r[0],0x00000021u); // 80056360
  if (crb(c,2)) { goto L_80056388; } // 80056364
  cmpu(c,0,c->r[0],0x00000022u); // 80056368
  if (crb(c,2)) { goto L_80056388; } // 8005636C
  cmpu(c,0,c->r[0],0x00000029u); // 80056370
  if (crb(c,2)) { goto L_80056388; } // 80056374
  cmpu(c,0,c->r[0],0x0000002Au); // 80056378
  if (crb(c,2)) { goto L_80056388; } // 8005637C
  cmpu(c,0,c->r[0],0x00000001u); // 80056380
  if (!crb(c,2)) { goto L_800565FC; } // 80056384
L_80056388:;
  c->r[0]=0u+0x00000001u; // 80056388
  W32(c->r[13]+0xFFFF8C40u,c->r[0]); // 8005638C
  goto L_800565FC; // 80056390
L_80056394:;
  c->r[3]=c->r[29]|c->r[29]; // 80056394
  c->lr=0x8005639Cu; f_80056D10(c); // 80056398
  c->r[12]=R32(c->r[29]+0x00000028u); // 8005639C
  c->r[0]=0u+0x0000000Au; // 800563A0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800563A4
  cmps(c,0,(int32_t)c->r[12],0); // 800563A8
  if (crb(c,2)) { goto L_800563C0; } // 800563AC
  c->r[4]=c->r[29]|c->r[29]; // 800563B0
  c->r[3]=0u+0xFFFFFFFDu; // 800563B4
  c->ctr=c->r[12]; // 800563B8
  if (true) { c->lr=0x800563C0u; dispatch(c,c->ctr); } // 800563BC
L_800563C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800563C0
  if (crb(c,2)) { goto L_800565FC; } // 800563C4
  c->r[12]=c->r[30]|c->r[30]; // 800563C8
  c->r[4]=c->r[29]|c->r[29]; // 800563CC
  c->r[3]=0u+0x00000000u; // 800563D0
  c->ctr=c->r[12]; // 800563D4
  if (true) { c->lr=0x800563DCu; dispatch(c,c->ctr); } // 800563D8
  goto L_800565FC; // 800563DC
L_800563E0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800563E0
  cmpu(c,0,c->r[0],0x0000002Au); // 800563E4
  if (crb(c,1)) { goto L_80056484; } // 800563E8
  c->r[3]=0u+0x80140000u; // 800563EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800563F0
  c->r[3]=c->r[3]+0x00005D9Cu; // 800563F4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800563F8
  c->ctr=c->r[3]; // 800563FC
  if (true) { switch (c->ctr) { case 0x80056310u: goto L_80056310; case 0x80056330u: goto L_80056330; case 0x80056394u: goto L_80056394; case 0x800563E0u: goto L_800563E0; case 0x80056404u: goto L_80056404; case 0x80056424u: goto L_80056424; case 0x80056484u: goto L_80056484; case 0x800564B0u: goto L_800564B0; case 0x800565ACu: goto L_800565AC; case 0x800565FCu: goto L_800565FC; default: break; } dispatch(c,c->ctr); return; } // 80056400
L_80056404:;
  cmps(c,0,(int32_t)c->r[30],0); // 80056404
  if (crb(c,2)) { goto L_800565FC; } // 80056408
  c->r[12]=c->r[30]|c->r[30]; // 8005640C
  c->r[4]=c->r[29]|c->r[29]; // 80056410
  c->r[3]=0u+0x00000000u; // 80056414
  c->ctr=c->r[12]; // 80056418
  if (true) { c->lr=0x80056420u; dispatch(c,c->ctr); } // 8005641C
  goto L_800565FC; // 80056420
L_80056424:;
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 80056424
  cmps(c,0,(int32_t)c->r[0],0); // 80056428
  if (crb(c,2)) { goto L_80056484; } // 8005642C
  c->r[3]=0u+0x801A0000u; // 80056430
  c->r[0]=0u+0x0000000Au; // 80056434
  c->r[3]=c->r[3]+0x000003A0u; // 80056438
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 8005643C
  c->r[12]=R32(c->r[29]+0x00000028u); // 80056440
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80056444
  cmps(c,0,(int32_t)c->r[12],0); // 80056448
  if (crb(c,2)) { goto L_80056460; } // 8005644C
  c->r[4]=c->r[29]|c->r[29]; // 80056450
  c->r[3]=0u+0xFFFFFFFDu; // 80056454
  c->ctr=c->r[12]; // 80056458
  if (true) { c->lr=0x80056460u; dispatch(c,c->ctr); } // 8005645C
L_80056460:;
  cmps(c,0,(int32_t)c->r[30],0); // 80056460
  if (crb(c,2)) { goto L_8005647C; } // 80056464
  c->r[12]=c->r[30]|c->r[30]; // 80056468
  c->r[4]=c->r[29]|c->r[29]; // 8005646C
  c->r[3]=0u+0x00000000u; // 80056470
  c->ctr=c->r[12]; // 80056474
  if (true) { c->lr=0x8005647Cu; dispatch(c,c->ctr); } // 80056478
L_8005647C:;
  c->lr=0x80056480u; f_80054C70(c); // 8005647C
  goto L_800565FC; // 80056480
L_80056484:;
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80056484
  cmps(c,0,(int32_t)c->r[0],0); // 80056488
  if (crb(c,2)) { goto L_800564A0; } // 8005648C
  c->r[3]=c->r[31]|c->r[31]; // 80056490
  c->lr=0x80056498u; f_80049A60(c); // 80056494
  c->r[3]=0u+0x00000000u; // 80056498
  goto L_80056608; // 8005649C
L_800564A0:;
  c->r[0]=0u+0x00000001u; // 800564A0
  W32(c->r[13]+0xFFFF8C30u,c->r[0]); // 800564A4
  W32(c->r[13]+0xFFFF8CA0u,c->r[30]); // 800564A8
  goto L_800565FC; // 800564AC
L_800564B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8C48u); // 800564B0
  cmps(c,0,(int32_t)c->r[0],0); // 800564B4
  if (!crb(c,2)) { goto L_800564D4; } // 800564B8
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800564BC
  cmps(c,0,(int32_t)c->r[0],0); // 800564C0
  if (!crb(c,2)) { goto L_800564D4; } // 800564C4
  c->lr=0x800564CCu; f_80049A60(c); // 800564C8
  c->r[3]=0u+0x00000000u; // 800564CC
  goto L_80056608; // 800564D0
L_800564D4:;
  c->r[0]=R32(c->r[13]+0xFFFF8C44u); // 800564D4
  cmps(c,0,(int32_t)c->r[0],0); // 800564D8
  if (crb(c,2)) { goto L_800564F4; } // 800564DC
  c->r[3]=0u+0x801A0000u; // 800564E0
  c->r[3]=c->r[3]+0x00000400u; // 800564E4
  c->lr=0x800564ECu; f_800441D0(c); // 800564E8
  c->r[0]=0u+0x00000000u; // 800564EC
  W32(c->r[13]+0xFFFF8C44u,c->r[0]); // 800564F0
L_800564F4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800564F4
  cmps(c,0,(int32_t)c->r[0],4); // 800564F8
  if (!crb(c,2)) { goto L_80056508; } // 800564FC
  c->r[0]=0u+0x00000003u; // 80056500
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80056504
L_80056508:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056508
  cmps(c,0,(int32_t)c->r[0],5); // 8005650C
  if (!crb(c,2)) { goto L_8005651C; } // 80056510
  c->r[0]=0u+0x00000004u; // 80056514
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80056518
L_8005651C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8005651C
  cmps(c,0,(int32_t)c->r[0],6); // 80056520
  if (!crb(c,2)) { goto L_80056530; } // 80056524
  c->r[0]=0u+0x00000001u; // 80056528
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 8005652C
L_80056530:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056530
  cmps(c,0,(int32_t)c->r[0],11); // 80056534
  if (!crb(c,2)) { goto L_80056544; } // 80056538
  c->r[0]=0u+0x00000002u; // 8005653C
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80056540
L_80056544:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056544
  cmps(c,0,(int32_t)c->r[0],7); // 80056548
  if (!crb(c,2)) { goto L_80056558; } // 8005654C
  c->r[0]=0u+0x00000007u; // 80056550
  W32(c->r[13]+0xFFFF8C34u,c->r[0]); // 80056554
L_80056558:;
  c->r[3]=0u+0x801A0000u; // 80056558
  c->r[0]=0u+0x0000000Au; // 8005655C
  c->r[3]=c->r[3]+0x000003A0u; // 80056560
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 80056564
  c->r[12]=R32(c->r[29]+0x00000028u); // 80056568
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8005656C
  cmps(c,0,(int32_t)c->r[12],0); // 80056570
  if (crb(c,2)) { goto L_80056588; } // 80056574
  c->r[4]=c->r[29]|c->r[29]; // 80056578
  c->r[3]=0u+0xFFFFFFFDu; // 8005657C
  c->ctr=c->r[12]; // 80056580
  if (true) { c->lr=0x80056588u; dispatch(c,c->ctr); } // 80056584
L_80056588:;
  cmps(c,0,(int32_t)c->r[30],0); // 80056588
  if (crb(c,2)) { goto L_800565A4; } // 8005658C
  c->r[12]=c->r[30]|c->r[30]; // 80056590
  c->r[4]=c->r[29]|c->r[29]; // 80056594
  c->r[3]=0u+0x00000000u; // 80056598
  c->ctr=c->r[12]; // 8005659C
  if (true) { c->lr=0x800565A4u; dispatch(c,c->ctr); } // 800565A0
L_800565A4:;
  c->lr=0x800565A8u; f_80054C70(c); // 800565A4
  goto L_800565FC; // 800565A8
L_800565AC:;
  c->r[3]=0u+0x801A0000u; // 800565AC
  c->r[0]=0u+0x0000000Au; // 800565B0
  c->r[3]=c->r[3]+0x000003A0u; // 800565B4
  W32(c->r[13]+0xFFFF8CB0u,c->r[3]); // 800565B8
  c->r[12]=R32(c->r[29]+0x00000028u); // 800565BC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800565C0
  cmps(c,0,(int32_t)c->r[12],0); // 800565C4
  if (crb(c,2)) { goto L_800565DC; } // 800565C8
  c->r[4]=c->r[29]|c->r[29]; // 800565CC
  c->r[3]=0u+0xFFFFFFFDu; // 800565D0
  c->ctr=c->r[12]; // 800565D4
  if (true) { c->lr=0x800565DCu; dispatch(c,c->ctr); } // 800565D8
L_800565DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800565DC
  if (crb(c,2)) { goto L_800565F8; } // 800565E0
  c->r[12]=c->r[30]|c->r[30]; // 800565E4
  c->r[4]=c->r[29]|c->r[29]; // 800565E8
  c->r[3]=0u+0x00000000u; // 800565EC
  c->ctr=c->r[12]; // 800565F0
  if (true) { c->lr=0x800565F8u; dispatch(c,c->ctr); } // 800565F4
L_800565F8:;
  c->lr=0x800565FCu; f_80054C70(c); // 800565F8
L_800565FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800565FC
  c->lr=0x80056604u; f_80049A60(c); // 80056600
  c->r[3]=0u+0x00000001u; // 80056604
L_80056608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80056608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005660C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056610
  c->r[29]=R32(c->r[1]+0x00000014u); // 80056614
  c->lr=c->r[0]; // 80056618
  c->r[1]=c->r[1]+0x00000020u; // 8005661C
  return; // 80056620
  unimpl(c,0x80056624u,"00000000"); // 80056624
  unimpl(c,0x80056628u,"00000000"); // 80056628
  unimpl(c,0x8005662Cu,"00000000"); // 8005662C
  f_80056630(c); return; // fall through
}

// DVDCancel
void f_80056630(Ctx* __restrict c) {
  trace_call(0x80056630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056630
  c->r[0]=c->lr; // 80056634
  c->r[4]=0u+0x80050000u; // 80056638
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005663C
  c->r[4]=c->r[4]+0x000066F0u; // 80056640
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80056644
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056648
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005664C
  c->r[29]=c->r[3]|c->r[3]; // 80056650
  c->lr=0x80056658u; f_800562C0(c); // 80056654
  cmps(c,0,(int32_t)c->r[3],0); // 80056658
  if (!crb(c,2)) { goto L_80056668; } // 8005665C
  c->r[3]=0u+0xFFFFFFFFu; // 80056660
  goto L_800566D4; // 80056664
L_80056668:;
  c->lr=0x8005666Cu; f_80049A20(c); // 80056668
  c->r[30]=c->r[3]|c->r[3]; // 8005666C
  c->r[31]=0u+0x80140000u; // 80056670
L_80056674:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80056674
  cmps(c,0,(int32_t)c->r[0],0); // 80056678
  if (crb(c,2)) { goto L_800566C8; } // 8005667C
  cmps(c,0,(int32_t)c->r[0],-1); // 80056680
  if (crb(c,2)) { goto L_800566C8; } // 80056684
  cmps(c,0,(int32_t)c->r[0],10); // 80056688
  if (crb(c,2)) { goto L_800566C8; } // 8005668C
  cmps(c,0,(int32_t)c->r[0],3); // 80056690
  if (!crb(c,2)) { goto L_800566BC; } // 80056694
  c->r[3]=R32(c->r[29]+0x00000008u); // 80056698
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8005669C
  cmpu(c,0,c->r[0],0x00000026u); // 800566A0
  if (crb(c,1)) { goto L_800566BC; } // 800566A4
  c->r[3]=c->r[31]+0x00005E80u; // 800566A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800566AC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800566B0
  c->ctr=c->r[3]; // 800566B4
  if (true) { switch (c->ctr) { case 0x800566BCu: goto L_800566BC; case 0x800566C8u: goto L_800566C8; default: break; } dispatch(c,c->ctr); return; } // 800566B8
L_800566BC:;
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 800566BC
  c->lr=0x800566C4u; f_8004D780(c); // 800566C0
  IRQCHK(c); goto L_80056674; // 800566C4
L_800566C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800566C8
  c->lr=0x800566D0u; f_80049A60(c); // 800566CC
  c->r[3]=0u+0x00000000u; // 800566D0
L_800566D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800566D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800566D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800566DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800566E0
  c->lr=c->r[0]; // 800566E4
  c->r[1]=c->r[1]+0x00000020u; // 800566E8
  return; // 800566EC
}

// fn_800566F0
void f_800566F0(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFF8BF8u; // 800566F0
  f_8004D870(c); return; // 800566F4
}

// __BS2DVDLowCallback
void f_80056700(Ctx* __restrict c) {
  trace_call(0x80056700u);
  c->r[3]=0u+0x80000000u; // 80056700
  return; // 80056704
}

// fn_80056710
void f_80056710(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF8C60u,c->r[3]); // 80056710
  return; // 80056714
}

// __DVDGetCoverStatus
void f_80056720(Ctx* __restrict c) {
  trace_call(0x80056720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056720
  c->r[0]=c->lr; // 80056724
  c->r[3]=0u+0x80050000u; // 80056728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005672C
  c->r[0]=0u+0x00000000u; // 80056730
  c->r[3]=c->r[3]+0x00006710u; // 80056734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056738
  W32(c->r[13]+0xFFFF8C60u,c->r[0]); // 8005673C
  c->lr=0x80056744u; f_80059D30(c); // 80056740
  c->r[0]=c->r[0]|0x00000000u; // 80056744
L_80056748:;
  c->r[0]=R32(c->r[13]+0xFFFF8C60u); // 80056748
  cmps(c,0,(int32_t)c->r[0],0); // 8005674C
  if (crb(c,2)) { IRQCHK(c); goto L_80056748; } // 80056750
  c->r[0]=R32(c->r[13]+0xFFFF8C60u); // 80056754
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80056758
  if (!crb(c,2)) { goto L_80056768; } // 8005675C
  c->r[3]=0u+0x00000000u; // 80056760
  goto L_800567D8; // 80056764
L_80056768:;
  c->lr=0x8005676Cu; f_80059D00(c); // 80056768
  c->r[31]=c->r[3]|c->r[3]; // 8005676C
  c->lr=0x80056774u; f_8004DAD0(c); // 80056770
  c->r[6]=0u+0x80000000u; // 80056774
  c->r[5]=0u+0x10620000u; // 80056778
  c->r[6]=R32(c->r[6]+0x000000F8u); // 8005677C
  c->r[7]=c->r[5]+0x00004DD3u; // 80056780
  c->r[8]=R32(c->r[13]+0xFFFF8C88u); // 80056784
  c->r[0]=0u+0x00000000u; // 80056788
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8005678C
  c->r[9]=R32(c->r[13]+0xFFFF8C8Cu); // 80056790
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80056794
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 80056798
  c->r[5]=c->r[0]^0x80000000u; // 8005679C
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 800567A0
  c->r[0]=c->r[0]^0x80000000u; // 800567A4
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 800567A8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800567AC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800567B0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800567B4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800567B8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800567BC
  if (crb(c,2)) { goto L_800567CC; } // 800567C0
  c->r[3]=0u+0x00000000u; // 800567C4
  goto L_800567D8; // 800567C8
L_800567CC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 800567CC
  c->r[3]=0u-c->r[0]; // 800567D0
  c->r[3]=c->r[3]+0x00000002u; // 800567D4
L_800567D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800567D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800567DC
  c->lr=c->r[0]; // 800567E0
  c->r[1]=c->r[1]+0x00000010u; // 800567E4
  return; // 800567E8
}

// __DVDResetWithNoSpinup
void f_800567F0(Ctx* __restrict c) {
  trace_call(0x800567F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800567F0
  c->r[0]=c->lr; // 800567F4
  c->r[3]=0u+0x00000000u; // 800567F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800567FC
  c->r[0]=0u+0x00000000u; // 80056800
  W32(c->r[13]+0xFFFF8C60u,c->r[0]); // 80056804
  c->lr=0x8005680Cu; f_80059370(c); // 80056808
  c->r[3]=0u+0x80050000u; // 8005680C
  c->r[3]=c->r[3]+0x00006710u; // 80056810
  c->lr=0x80056818u; f_80059380(c); // 80056814
L_80056818:;
  c->r[0]=R32(c->r[13]+0xFFFF8C60u); // 80056818
  cmps(c,0,(int32_t)c->r[0],0); // 8005681C
  if (crb(c,2)) { IRQCHK(c); goto L_80056818; } // 80056820
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056824
  c->lr=c->r[0]; // 80056828
  c->r[1]=c->r[1]+0x00000010u; // 8005682C
  return; // 80056830
}

// __DVDPrepareResetAsync
void f_80056840(Ctx* __restrict c) {
  trace_call(0x80056840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056840
  c->r[0]=c->lr; // 80056844
  W32(c->r[1]+0x00000024u,c->r[0]); // 80056848
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005684C
  c->r[31]=c->r[3]|c->r[3]; // 80056850
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056854
  W32(c->r[1]+0x00000014u,c->r[29]); // 80056858
  c->lr=0x80056860u; f_80049A20(c); // 8005685C
  c->r[29]=c->r[3]|c->r[3]; // 80056860
  c->lr=0x80056868u; f_80056AF0(c); // 80056864
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 80056868
  cmps(c,0,(int32_t)c->r[0],0); // 8005686C
  if (crb(c,2)) { goto L_8005687C; } // 80056870
  W32(c->r[13]+0xFFFF8CA0u,c->r[31]); // 80056874
  goto L_80056938; // 80056878
L_8005687C:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 8005687C
  cmps(c,0,(int32_t)c->r[3],0); // 80056880
  if (crb(c,2)) { goto L_80056890; } // 80056884
  c->r[0]=0u+0x00000000u; // 80056888
  W32(c->r[3]+0x00000028u,c->r[0]); // 8005688C
L_80056890:;
  c->lr=0x80056894u; f_80049A20(c); // 80056890
  c->r[30]=c->r[3]|c->r[3]; // 80056894
  c->lr=0x8005689Cu; f_80049A20(c); // 80056898
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 8005689C
  c->r[4]=0u+0x00000001u; // 800568A0
  W32(c->r[13]+0xFFFF8C24u,c->r[4]); // 800568A4
  cmps(c,0,(int32_t)c->r[0],0); // 800568A8
  if (!crb(c,2)) { goto L_800568B4; } // 800568AC
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 800568B0
L_800568B4:;
  c->lr=0x800568B8u; f_80049A60(c); // 800568B4
  goto L_800568C4; // 800568B8
L_800568BC:;
  c->r[4]=0u+0x00000000u; // 800568BC
  c->lr=0x800568C4u; f_800562C0(c); // 800568C0
L_800568C4:;
  c->lr=0x800568C8u; f_80056BA0(c); // 800568C4
  cmps(c,0,(int32_t)c->r[3],0); // 800568C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800568BC; } // 800568CC
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800568D0
  cmps(c,0,(int32_t)c->r[3],0); // 800568D4
  if (crb(c,2)) { goto L_800568E8; } // 800568D8
  c->r[4]=c->r[31]|c->r[31]; // 800568DC
  c->lr=0x800568E4u; f_800562C0(c); // 800568E0
  goto L_80056904; // 800568E4
L_800568E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800568E8
  if (crb(c,2)) { goto L_80056904; } // 800568EC
  c->r[12]=c->r[31]|c->r[31]; // 800568F0
  c->r[3]=0u+0x00000000u; // 800568F4
  c->r[4]=0u+0x00000000u; // 800568F8
  c->ctr=c->r[12]; // 800568FC
  if (true) { c->lr=0x80056904u; dispatch(c,c->ctr); } // 80056900
L_80056904:;
  c->lr=0x80056908u; f_80049A20(c); // 80056904
  c->r[4]=0u+0x00000000u; // 80056908
  W32(c->r[13]+0xFFFF8C24u,c->r[4]); // 8005690C
  c->r[0]=R32(c->r[13]+0xFFFF8C28u); // 80056910
  c->r[31]=c->r[3]|c->r[3]; // 80056914
  cmps(c,0,(int32_t)c->r[0],0); // 80056918
  if (crb(c,2)) { goto L_80056928; } // 8005691C
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 80056920
  c->lr=0x80056928u; f_80054C70(c); // 80056924
L_80056928:;
  c->r[3]=c->r[31]|c->r[31]; // 80056928
  c->lr=0x80056930u; f_80049A60(c); // 8005692C
  c->r[3]=c->r[30]|c->r[30]; // 80056930
  c->lr=0x80056938u; f_80049A60(c); // 80056934
L_80056938:;
  c->r[3]=c->r[29]|c->r[29]; // 80056938
  c->lr=0x80056940u; f_80049A60(c); // 8005693C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80056940
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80056944
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056948
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005694C
  c->lr=c->r[0]; // 80056950
  c->r[1]=c->r[1]+0x00000020u; // 80056954
  return; // 80056958
}

// fn_80056960
void f_80056960(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80056960
  W32(c->r[13]+0xFFFF8C64u,c->r[0]); // 80056964
  return; // 80056968
}

// __DVDPrepareReset
void f_80056970(Ctx* __restrict c) {
  trace_call(0x80056970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056970
  c->r[0]=c->lr; // 80056974
  W32(c->r[1]+0x00000024u,c->r[0]); // 80056978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005697C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056980
  W32(c->r[1]+0x00000014u,c->r[29]); // 80056984
  c->lr=0x8005698Cu; f_80049A20(c); // 80056988
  c->r[31]=0u+0x00000000u; // 8005698C
  W32(c->r[13]+0xFFFF8C64u,c->r[31]); // 80056990
  c->lr=0x80056998u; f_80049A20(c); // 80056994
  c->r[29]=c->r[3]|c->r[3]; // 80056998
  c->lr=0x800569A0u; f_80056AF0(c); // 8005699C
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 800569A0
  cmps(c,0,(int32_t)c->r[0],0); // 800569A4
  if (crb(c,2)) { goto L_800569BC; } // 800569A8
  c->r[3]=0u+0x80050000u; // 800569AC
  c->r[3]=c->r[3]+0x00006960u; // 800569B0
  W32(c->r[13]+0xFFFF8CA0u,c->r[3]); // 800569B4
  goto L_80056A70; // 800569B8
L_800569BC:;
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 800569BC
  cmps(c,0,(int32_t)c->r[3],0); // 800569C0
  if (crb(c,2)) { goto L_800569CC; } // 800569C4
  W32(c->r[3]+0x00000028u,c->r[31]); // 800569C8
L_800569CC:;
  c->lr=0x800569D0u; f_80049A20(c); // 800569CC
  c->r[31]=c->r[3]|c->r[3]; // 800569D0
  c->lr=0x800569D8u; f_80049A20(c); // 800569D4
  c->r[0]=R32(c->r[13]+0xFFFF8CB0u); // 800569D8
  c->r[4]=0u+0x00000001u; // 800569DC
  W32(c->r[13]+0xFFFF8C24u,c->r[4]); // 800569E0
  cmps(c,0,(int32_t)c->r[0],0); // 800569E4
  if (!crb(c,2)) { goto L_800569F0; } // 800569E8
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 800569EC
L_800569F0:;
  c->lr=0x800569F4u; f_80049A60(c); // 800569F0
  goto L_80056A00; // 800569F4
L_800569F8:;
  c->r[4]=0u+0x00000000u; // 800569F8
  c->lr=0x80056A00u; f_800562C0(c); // 800569FC
L_80056A00:;
  c->lr=0x80056A04u; f_80056BA0(c); // 80056A00
  cmps(c,0,(int32_t)c->r[3],0); // 80056A04
  if (!crb(c,2)) { IRQCHK(c); goto L_800569F8; } // 80056A08
  c->r[3]=R32(c->r[13]+0xFFFF8CB0u); // 80056A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80056A10
  if (crb(c,2)) { goto L_80056A28; } // 80056A14
  c->r[4]=0u+0x80050000u; // 80056A18
  c->r[4]=c->r[4]+0x00006960u; // 80056A1C
  c->lr=0x80056A24u; f_800562C0(c); // 80056A20
  goto L_80056A3C; // 80056A24
L_80056A28:;
  c->r[0]=0u+0x80050000u; // 80056A28
  c->r[0]=addc(c,c->r[0],0x00006960u,0); cr0(c,c->r[0]); // 80056A2C
  if (crb(c,2)) { goto L_80056A3C; } // 80056A30
  c->r[0]=0u+0x00000001u; // 80056A34
  W32(c->r[13]+0xFFFF8C64u,c->r[0]); // 80056A38
L_80056A3C:;
  c->lr=0x80056A40u; f_80049A20(c); // 80056A3C
  c->r[4]=0u+0x00000000u; // 80056A40
  W32(c->r[13]+0xFFFF8C24u,c->r[4]); // 80056A44
  c->r[0]=R32(c->r[13]+0xFFFF8C28u); // 80056A48
  c->r[30]=c->r[3]|c->r[3]; // 80056A4C
  cmps(c,0,(int32_t)c->r[0],0); // 80056A50
  if (crb(c,2)) { goto L_80056A60; } // 80056A54
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 80056A58
  c->lr=0x80056A60u; f_80054C70(c); // 80056A5C
L_80056A60:;
  c->r[3]=c->r[30]|c->r[30]; // 80056A60
  c->lr=0x80056A68u; f_80049A60(c); // 80056A64
  c->r[3]=c->r[31]|c->r[31]; // 80056A68
  c->lr=0x80056A70u; f_80049A60(c); // 80056A6C
L_80056A70:;
  c->r[3]=c->r[29]|c->r[29]; // 80056A70
  c->lr=0x80056A78u; f_80049A60(c); // 80056A74
  c->lr=0x80056A7Cu; f_80049A40(c); // 80056A78
  c->r[0]=c->r[0]|0x00000000u; // 80056A7C
L_80056A80:;
  c->r[0]=R32(c->r[13]+0xFFFF8C64u); // 80056A80
  cmps(c,0,(int32_t)c->r[0],1); // 80056A84
  if (!crb(c,2)) { IRQCHK(c); goto L_80056A80; } // 80056A88
  c->r[0]=R32(c->r[1]+0x00000024u); // 80056A8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80056A90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056A94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80056A98
  c->lr=c->r[0]; // 80056A9C
  c->r[1]=c->r[1]+0x00000020u; // 80056AA0
  return; // 80056AA4
}

// fn_80056AB0
void f_80056AB0(Ctx* __restrict c) {
  c->r[4]=0u+0x801A0000u; // 80056AB0
  c->r[4]=c->r[4]+0x000004A0u; // 80056AB4
  cmpu(c,0,c->r[3],c->r[4]); // 80056AB8
  if (!crb(c,2)) { goto L_80056AC8; } // 80056ABC
  c->r[3]=0u+0x00000001u; // 80056AC0
  return; // 80056AC4
L_80056AC8:;
  f_8005A320(c); return; // 80056AC8
}

// fn_80056ACC
void f_80056ACC(Ctx* __restrict c) {
  return; // 80056ACC
}

// fn_80056AD0
void f_80056AD0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80056AD0
  return; // 80056AD4
}

// fn_80056AE0
void f_80056AE0(Ctx* __restrict c) {
  return; // 80056AE0
}

// __DVDClearWaitingQueue
void f_80056AF0(Ctx* __restrict c) {
  trace_call(0x80056AF0u);
  c->r[6]=0u+0x801A0000u; // 80056AF0
  c->r[6]=c->r[6]+0x00000530u; // 80056AF4
  W32(c->r[6]+0x00000000u,c->r[6]); // 80056AF8
  c->r[5]=c->r[6]+0x00000008u; // 80056AFC
  c->r[4]=c->r[6]+0x00000010u; // 80056B00
  c->r[3]=c->r[6]+0x00000018u; // 80056B04
  W32(c->r[6]+0x00000004u,c->r[6]); // 80056B08
  W32(c->r[5]+0x00000000u,c->r[5]); // 80056B0C
  W32(c->r[5]+0x00000004u,c->r[5]); // 80056B10
  W32(c->r[4]+0x00000000u,c->r[4]); // 80056B14
  W32(c->r[4]+0x00000004u,c->r[4]); // 80056B18
  W32(c->r[3]+0x00000000u,c->r[3]); // 80056B1C
  W32(c->r[3]+0x00000004u,c->r[3]); // 80056B20
  return; // 80056B24
}

// __DVDPushWaitingQueue
void f_80056B30(Ctx* __restrict c) {
  trace_call(0x80056B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056B30
  c->r[0]=c->lr; // 80056B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056B3C
  c->r[31]=c->r[4]|c->r[4]; // 80056B40
  W32(c->r[1]+0x00000008u,c->r[30]); // 80056B44
  c->r[30]=c->r[3]|c->r[3]; // 80056B48
  c->lr=0x80056B50u; f_80049A20(c); // 80056B4C
  c->r[4]=0u+0x801A0000u; // 80056B50
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80056B54
  c->r[4]=c->r[4]+0x00000530u; // 80056B58
  c->r[5]=c->r[4]+c->r[0]; // 80056B5C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80056B60
  W32(c->r[4]+0x00000000u,c->r[31]); // 80056B64
  c->r[0]=R32(c->r[5]+0x00000004u); // 80056B68
  W32(c->r[31]+0x00000004u,c->r[0]); // 80056B6C
  W32(c->r[31]+0x00000000u,c->r[5]); // 80056B70
  W32(c->r[5]+0x00000004u,c->r[31]); // 80056B74
  c->lr=0x80056B7Cu; f_80049A60(c); // 80056B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056B7C
  c->r[3]=0u+0x00000001u; // 80056B80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80056B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056B88
  c->lr=c->r[0]; // 80056B8C
  c->r[1]=c->r[1]+0x00000010u; // 80056B90
  return; // 80056B94
}

// __DVDPopWaitingQueue
void f_80056BA0(Ctx* __restrict c) {
  trace_call(0x80056BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056BA0
  c->r[0]=c->lr; // 80056BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056BAC
  c->lr=0x80056BB4u; f_80049A20(c); // 80056BB0
  c->r[4]=0u+0x801A0000u; // 80056BB4
  c->r[0]=0u+0x00000004u; // 80056BB8
  c->r[31]=0u+0x00000000u; // 80056BBC
  c->r[4]=c->r[4]+0x00000530u; // 80056BC0
  c->ctr=c->r[0]; // 80056BC4
L_80056BC8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80056BC8
  cmpu(c,0,c->r[0],c->r[4]); // 80056BCC
  if (crb(c,2)) { goto L_80056C18; } // 80056BD0
  c->lr=0x80056BD8u; f_80049A60(c); // 80056BD4
  c->lr=0x80056BDCu; f_80049A20(c); // 80056BD8
  c->r[4]=0u+0x801A0000u; // 80056BDC
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80056BE0
  c->r[4]=c->r[4]+0x00000530u; // 80056BE4
  c->r[31]=R32(c->r[4]+c->r[0]); // 80056BE8
  c->r[5]=c->r[4]+c->r[0]; // 80056BEC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80056BF0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80056BF4
  c->r[4]=R32(c->r[31]+0x00000000u); // 80056BF8
  W32(c->r[4]+0x00000004u,c->r[5]); // 80056BFC
  c->lr=0x80056C04u; f_80049A60(c); // 80056C00
  c->r[0]=0u+0x00000000u; // 80056C04
  W32(c->r[31]+0x00000000u,c->r[0]); // 80056C08
  c->r[3]=c->r[31]|c->r[31]; // 80056C0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80056C10
  goto L_80056C2C; // 80056C14
L_80056C18:;
  c->r[4]=c->r[4]+0x00000008u; // 80056C18
  c->r[31]=c->r[31]+0x00000001u; // 80056C1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80056BC8; } // 80056C20
  c->lr=0x80056C28u; f_80049A60(c); // 80056C24
  c->r[3]=0u+0x00000000u; // 80056C28
L_80056C2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056C30
  c->lr=c->r[0]; // 80056C34
  c->r[1]=c->r[1]+0x00000010u; // 80056C38
  return; // 80056C3C
}

// __DVDCheckWaitingQueue
void f_80056C40(Ctx* __restrict c) {
  trace_call(0x80056C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056C40
  c->r[0]=c->lr; // 80056C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056C48
  c->lr=0x80056C50u; f_80049A20(c); // 80056C4C
  c->r[4]=0u+0x801A0000u; // 80056C50
  c->r[0]=0u+0x00000004u; // 80056C54
  c->r[4]=c->r[4]+0x00000530u; // 80056C58
  c->ctr=c->r[0]; // 80056C5C
L_80056C60:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80056C60
  cmpu(c,0,c->r[0],c->r[4]); // 80056C64
  if (crb(c,2)) { goto L_80056C78; } // 80056C68
  c->lr=0x80056C70u; f_80049A60(c); // 80056C6C
  c->r[3]=0u+0x00000001u; // 80056C70
  goto L_80056C88; // 80056C74
L_80056C78:;
  c->r[4]=c->r[4]+0x00000008u; // 80056C78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80056C60; } // 80056C7C
  c->lr=0x80056C84u; f_80049A60(c); // 80056C80
  c->r[3]=0u+0x00000000u; // 80056C84
L_80056C88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056C88
  c->lr=c->r[0]; // 80056C8C
  c->r[1]=c->r[1]+0x00000010u; // 80056C90
  return; // 80056C94
}

// __DVDGetNextWaitingQueue
void f_80056CA0(Ctx* __restrict c) {
  trace_call(0x80056CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056CA0
  c->r[0]=c->lr; // 80056CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056CAC
  c->lr=0x80056CB4u; f_80049A20(c); // 80056CB0
  c->r[4]=0u+0x801A0000u; // 80056CB4
  c->r[0]=0u+0x00000004u; // 80056CB8
  c->r[4]=c->r[4]+0x00000530u; // 80056CBC
  c->ctr=c->r[0]; // 80056CC0
  c->r[0]=c->r[0]|0x00000000u; // 80056CC4
L_80056CC8:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 80056CC8
  cmpu(c,0,c->r[31],c->r[4]); // 80056CCC
  if (crb(c,2)) { goto L_80056CE0; } // 80056CD0
  c->lr=0x80056CD8u; f_80049A60(c); // 80056CD4
  c->r[3]=c->r[31]|c->r[31]; // 80056CD8
  goto L_80056CF0; // 80056CDC
L_80056CE0:;
  c->r[4]=c->r[4]+0x00000008u; // 80056CE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80056CC8; } // 80056CE4
  c->lr=0x80056CECu; f_80049A60(c); // 80056CE8
  c->r[3]=0u+0x00000000u; // 80056CEC
L_80056CF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056CF4
  c->lr=c->r[0]; // 80056CF8
  c->r[1]=c->r[1]+0x00000010u; // 80056CFC
  return; // 80056D00
}

// __DVDDequeueWaitingQueue
void f_80056D10(Ctx* __restrict c) {
  trace_call(0x80056D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056D10
  c->r[0]=c->lr; // 80056D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056D18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056D1C
  c->r[31]=c->r[3]|c->r[3]; // 80056D20
  c->lr=0x80056D28u; f_80049A20(c); // 80056D24
  c->r[4]=R32(c->r[31]+0x00000004u); // 80056D28
  c->r[5]=R32(c->r[31]+0x00000000u); // 80056D2C
  cmps(c,0,(int32_t)c->r[4],0); // 80056D30
  if (crb(c,2)) { goto L_80056D40; } // 80056D34
  cmps(c,0,(int32_t)c->r[5],0); // 80056D38
  if (!crb(c,2)) { goto L_80056D4C; } // 80056D3C
L_80056D40:;
  c->lr=0x80056D44u; f_80049A60(c); // 80056D40
  c->r[3]=0u+0x00000000u; // 80056D44
  goto L_80056D5C; // 80056D48
L_80056D4C:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 80056D4C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80056D50
  c->lr=0x80056D58u; f_80049A60(c); // 80056D54
  c->r[3]=0u+0x00000001u; // 80056D58
L_80056D5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056D60
  c->lr=c->r[0]; // 80056D64
  c->r[1]=c->r[1]+0x00000010u; // 80056D68
  return; // 80056D6C
}

// fn_80056D70
void f_80056D70(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF8CC0u); // 80056D70
  cmps(c,0,(int32_t)c->r[12],0); // 80056D74
  if (crb(c,2)) return; // 80056D78
  c->r[0]=cntlz(c->r[3]); // 80056D7C
  c->r[4]=0u+0x00000000u; // 80056D80
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80056D84
  c->r[3]=0u-c->r[0]; // 80056D88
  c->r[3]=c->r[3]+0x00000002u; // 80056D8C
  c->ctr=c->r[12]; // 80056D90
  if (true) { dispatch(c,c->ctr); return; } // 80056D94
}

// fn_80056D98
void f_80056D98(Ctx* __restrict c) {
  return; // 80056D98
}

// cbForNandWrite
void f_80056DA0(Ctx* __restrict c) {
  trace_call(0x80056DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056DA0
  c->r[0]=c->lr; // 80056DA4
  c->r[3]=0u+0x801A0000u; // 80056DA8
  c->r[4]=0u+0x80050000u; // 80056DAC
  c->r[5]=0u+0x801A0000u; // 80056DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056DB4
  c->r[3]=c->r[3]+0x00000560u; // 80056DB8
  c->r[4]=c->r[4]+0x00006D70u; // 80056DBC
  c->r[5]=c->r[5]+0x000005ECu; // 80056DC0
  c->lr=0x80056DC8u; f_800884B0(c); // 80056DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80056DC8
  if (crb(c,2)) { goto L_80056DEC; } // 80056DCC
  c->r[12]=R32(c->r[13]+0xFFFF8CC0u); // 80056DD0
  cmps(c,0,(int32_t)c->r[12],0); // 80056DD4
  if (crb(c,2)) { goto L_80056DEC; } // 80056DD8
  c->r[3]=0u+0x00000002u; // 80056DDC
  c->r[4]=0u+0x00000000u; // 80056DE0
  c->ctr=c->r[12]; // 80056DE4
  if (true) { c->lr=0x80056DECu; dispatch(c,c->ctr); } // 80056DE8
L_80056DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056DEC
  c->lr=c->r[0]; // 80056DF0
  c->r[1]=c->r[1]+0x00000010u; // 80056DF4
  return; // 80056DF8
}

