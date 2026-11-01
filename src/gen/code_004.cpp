#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8007C654
void f_8007C654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C654
  c->r[0]=c->lr; // 8007C658
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C65C
  c->lr=0x8007C664u; f_8008186C(c); // 8007C660
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C664
  c->r[3]=0u+0x00000000u; // 8007C668
  c->lr=c->r[0]; // 8007C66C
  c->r[1]=c->r[1]+0x00000010u; // 8007C670
  return; // 8007C674
}

// gdev_cc_peek
void f_8007C678(Ctx* __restrict c) {
  trace_call(0x8007C678u);
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C678
  c->r[0]=c->lr; // 8007C67C
  W32(c->r[1]+0x00000514u,c->r[0]); // 8007C680
  W32(c->r[1]+0x0000050Cu,c->r[31]); // 8007C684
  c->lr=0x8007C68Cu; f_80081638(c); // 8007C688
  cmps(c,0,(int32_t)c->r[3],0); // 8007C68C
  c->r[31]=c->r[3]|c->r[3]; // 8007C690
  if (crb(c,1)) { goto L_8007C6A0; } // 8007C694
  c->r[3]=0u+0x00000000u; // 8007C698
  goto L_8007C6D8; // 8007C69C
L_8007C6A0:;
  c->r[4]=c->r[31]|c->r[31]; // 8007C6A0
  c->r[3]=c->r[1]+0x00000008u; // 8007C6A4
  c->lr=0x8007C6ACu; f_800816DC(c); // 8007C6A8
  cmps(c,0,(int32_t)c->r[3],0); // 8007C6AC
  if (!crb(c,2)) { goto L_8007C6CC; } // 8007C6B0
  c->r[3]=0u+0x801B0000u; // 8007C6B4
  c->r[5]=c->r[31]|c->r[31]; // 8007C6B8
  c->r[3]=c->r[3]+0x00007960u; // 8007C6BC
  c->r[4]=c->r[1]+0x00000008u; // 8007C6C0
  c->lr=0x8007C6C8u; f_8007C778(c); // 8007C6C4
  goto L_8007C6D4; // 8007C6C8
L_8007C6CC:;
  c->r[3]=0u+0xFFFFD8E7u; // 8007C6CC
  goto L_8007C6D8; // 8007C6D0
L_8007C6D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8007C6D4
L_8007C6D8:;
  c->r[0]=R32(c->r[1]+0x00000514u); // 8007C6D8
  c->r[31]=R32(c->r[1]+0x0000050Cu); // 8007C6DC
  c->lr=c->r[0]; // 8007C6E0
  c->r[1]=c->r[1]+0x00000510u; // 8007C6E4
  return; // 8007C6E8
}

// fn_8007C6EC
void f_8007C6EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C6EC
  c->r[0]=c->lr; // 8007C6F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C6F4
  c->lr=0x8007C6FCu; f_800815E4(c); // 8007C6F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C6FC
  c->r[3]=0u+0x00000000u; // 8007C700
  c->lr=c->r[0]; // 8007C704
  c->r[1]=c->r[1]+0x00000010u; // 8007C708
  return; // 8007C70C
}

// MWInitializeCriticalSection
void f_8007C710(Ctx* __restrict c) {
  trace_call(0x8007C710u);
  return; // 8007C710
}

// MWEnterCriticalSection
void f_8007C714(Ctx* __restrict c) {
  trace_call(0x8007C714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C714
  c->r[0]=c->lr; // 8007C718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C720
  c->r[31]=c->r[3]|c->r[3]; // 8007C724
  c->lr=0x8007C72Cu; f_80049A20(c); // 8007C728
  W32(c->r[31]+0x00000000u,c->r[3]); // 8007C72C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C730
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C734
  c->lr=c->r[0]; // 8007C738
  c->r[1]=c->r[1]+0x00000010u; // 8007C73C
  return; // 8007C740
}

// MWExitCriticalSection
void f_8007C744(Ctx* __restrict c) {
  trace_call(0x8007C744u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8007C744
  f_80049A60(c); return; // 8007C748
}

// CBGetBytesAvailableForRead
void f_8007C74C(Ctx* __restrict c) {
  trace_call(0x8007C74Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007C74C
  return; // 8007C750
}

// CircleBufferInitialize
void f_8007C754(Ctx* __restrict c) {
  trace_call(0x8007C754u);
  c->r[0]=0u+0x00000000u; // 8007C754
  W32(c->r[3]+0x00000008u,c->r[4]); // 8007C758
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8007C75C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8007C760
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007C764
  W32(c->r[3]+0x00000010u,c->r[0]); // 8007C768
  W32(c->r[3]+0x00000014u,c->r[5]); // 8007C76C
  c->r[3]=c->r[3]+0x00000018u; // 8007C770
  f_8007C710(c); return; // 8007C774
}

// CircleBufferWriteBytes
void f_8007C778(Ctx* __restrict c) {
  trace_call(0x8007C778u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C778
  c->r[0]=c->lr; // 8007C77C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C780
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007C784
  c->r[31]=c->r[5]|c->r[5]; // 8007C788
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007C78C
  c->r[30]=c->r[3]|c->r[3]; // 8007C790
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007C794
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007C798
  c->r[28]=c->r[4]|c->r[4]; // 8007C79C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8007C7A0
  cmpu(c,0,c->r[5],c->r[0]); // 8007C7A4
  if (!crb(c,1)) { goto L_8007C7B4; } // 8007C7A8
  c->r[3]=0u+0xFFFFFFFFu; // 8007C7AC
  goto L_8007C860; // 8007C7B0
L_8007C7B4:;
  c->r[3]=c->r[3]+0x00000018u; // 8007C7B4
  c->lr=0x8007C7BCu; f_8007C714(c); // 8007C7B8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8007C7BC
  c->r[4]=R32(c->r[30]+0x00000008u); // 8007C7C0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8007C7C4
  c->r[4]=c->r[3]-c->r[4]; // 8007C7C8
  c->r[29]=c->r[0]-c->r[4]; // 8007C7CC
  cmpu(c,0,c->r[29],c->r[31]); // 8007C7D0
  if (crb(c,0)) { goto L_8007C7F4; } // 8007C7D4
  c->r[4]=c->r[28]|c->r[28]; // 8007C7D8
  c->r[5]=c->r[31]|c->r[31]; // 8007C7DC
  c->lr=0x8007C7E4u; f_800043C4(c); // 8007C7E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 8007C7E4
  c->r[0]=c->r[0]+c->r[31]; // 8007C7E8
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007C7EC
  goto L_8007C820; // 8007C7F0
L_8007C7F4:;
  c->r[4]=c->r[28]|c->r[28]; // 8007C7F4
  c->r[5]=c->r[29]|c->r[29]; // 8007C7F8
  c->lr=0x8007C800u; f_800043C4(c); // 8007C7FC
  c->r[3]=R32(c->r[30]+0x00000008u); // 8007C800
  c->r[4]=c->r[28]+c->r[29]; // 8007C804
  c->r[5]=c->r[31]-c->r[29]; // 8007C808
  c->lr=0x8007C810u; f_800043C4(c); // 8007C80C
  c->r[0]=R32(c->r[30]+0x00000008u); // 8007C810
  c->r[0]=c->r[0]+c->r[31]; // 8007C814
  c->r[0]=c->r[0]-c->r[29]; // 8007C818
  W32(c->r[30]+0x00000004u,c->r[0]); // 8007C81C
L_8007C820:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 8007C820
  c->r[0]=R32(c->r[30]+0x00000004u); // 8007C824
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8007C828
  c->r[0]=c->r[0]-c->r[4]; // 8007C82C
  cmpu(c,0,c->r[3],c->r[0]); // 8007C830
  if (!crb(c,2)) { goto L_8007C83C; } // 8007C834
  W32(c->r[30]+0x00000004u,c->r[4]); // 8007C838
L_8007C83C:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C83C
  c->r[3]=c->r[30]+0x00000018u; // 8007C840
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007C844
  c->r[4]=c->r[4]-c->r[31]; // 8007C848
  W32(c->r[30]+0x00000014u,c->r[4]); // 8007C84C
  c->r[0]=c->r[0]+c->r[31]; // 8007C850
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C854
  c->lr=0x8007C85Cu; f_8007C744(c); // 8007C858
  c->r[3]=0u+0x00000000u; // 8007C85C
L_8007C860:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C860
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C864
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C868
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C86C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007C870
  c->lr=c->r[0]; // 8007C874
  c->r[1]=c->r[1]+0x00000020u; // 8007C878
  return; // 8007C87C
}

// CircleBufferReadBytes
void f_8007C880(Ctx* __restrict c) {
  trace_call(0x8007C880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C880
  c->r[0]=c->lr; // 8007C884
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007C88C
  c->r[31]=c->r[5]|c->r[5]; // 8007C890
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007C894
  c->r[30]=c->r[3]|c->r[3]; // 8007C898
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007C89C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007C8A0
  c->r[28]=c->r[4]|c->r[4]; // 8007C8A4
  c->r[0]=R32(c->r[3]+0x00000010u); // 8007C8A8
  cmpu(c,0,c->r[5],c->r[0]); // 8007C8AC
  if (!crb(c,1)) { goto L_8007C8BC; } // 8007C8B0
  c->r[3]=0u+0xFFFFFFFFu; // 8007C8B4
  goto L_8007C968; // 8007C8B8
L_8007C8BC:;
  c->r[3]=c->r[3]+0x00000018u; // 8007C8BC
  c->lr=0x8007C8C4u; f_8007C714(c); // 8007C8C0
  c->r[4]=R32(c->r[30]+0x00000000u); // 8007C8C4
  c->r[3]=R32(c->r[30]+0x00000008u); // 8007C8C8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8007C8CC
  c->r[3]=c->r[4]-c->r[3]; // 8007C8D0
  c->r[29]=c->r[0]-c->r[3]; // 8007C8D4
  cmpu(c,0,c->r[31],c->r[29]); // 8007C8D8
  if (!crb(c,0)) { goto L_8007C8FC; } // 8007C8DC
  c->r[3]=c->r[28]|c->r[28]; // 8007C8E0
  c->r[5]=c->r[31]|c->r[31]; // 8007C8E4
  c->lr=0x8007C8ECu; f_800043C4(c); // 8007C8E8
  c->r[0]=R32(c->r[30]+0x00000000u); // 8007C8EC
  c->r[0]=c->r[0]+c->r[31]; // 8007C8F0
  W32(c->r[30]+0x00000000u,c->r[0]); // 8007C8F4
  goto L_8007C928; // 8007C8F8
L_8007C8FC:;
  c->r[3]=c->r[28]|c->r[28]; // 8007C8FC
  c->r[5]=c->r[29]|c->r[29]; // 8007C900
  c->lr=0x8007C908u; f_800043C4(c); // 8007C904
  c->r[4]=R32(c->r[30]+0x00000008u); // 8007C908
  c->r[3]=c->r[28]+c->r[29]; // 8007C90C
  c->r[5]=c->r[31]-c->r[29]; // 8007C910
  c->lr=0x8007C918u; f_800043C4(c); // 8007C914
  c->r[0]=R32(c->r[30]+0x00000008u); // 8007C918
  c->r[0]=c->r[0]+c->r[31]; // 8007C91C
  c->r[0]=c->r[0]-c->r[29]; // 8007C920
  W32(c->r[30]+0x00000000u,c->r[0]); // 8007C924
L_8007C928:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 8007C928
  c->r[0]=R32(c->r[30]+0x00000000u); // 8007C92C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8007C930
  c->r[0]=c->r[0]-c->r[4]; // 8007C934
  cmpu(c,0,c->r[3],c->r[0]); // 8007C938
  if (!crb(c,2)) { goto L_8007C944; } // 8007C93C
  W32(c->r[30]+0x00000000u,c->r[4]); // 8007C940
L_8007C944:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8007C944
  c->r[3]=c->r[30]+0x00000018u; // 8007C948
  c->r[0]=R32(c->r[30]+0x00000010u); // 8007C94C
  c->r[4]=c->r[4]+c->r[31]; // 8007C950
  W32(c->r[30]+0x00000014u,c->r[4]); // 8007C954
  c->r[0]=c->r[0]-c->r[31]; // 8007C958
  W32(c->r[30]+0x00000010u,c->r[0]); // 8007C95C
  c->lr=0x8007C964u; f_8007C744(c); // 8007C960
  c->r[3]=0u+0x00000000u; // 8007C964
L_8007C968:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C96C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C970
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C974
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007C978
  c->lr=c->r[0]; // 8007C97C
  c->r[1]=c->r[1]+0x00000020u; // 8007C980
  return; // 8007C984
}

// TRK_flush_cache
void f_8007C988(Ctx* __restrict c) {
  trace_call(0x8007C988u);
  c->r[5]=0u+0xFFFF0000u; // 8007C988
  c->r[5]=c->r[5]|0x0000FFF1u; // 8007C98C
  c->r[5]=c->r[5]&c->r[3]; // 8007C990
  c->r[3]=c->r[3]-c->r[5]; // 8007C994
  c->r[4]=c->r[4]+c->r[3]; // 8007C998
L_8007C99C:;
  /* dcbst */ // 8007C99C
  /* dcbf */ // 8007C9A0
  /* sync */ // 8007C9A4
  /* icbi */ // 8007C9A8
  c->r[5]=addc(c,c->r[5],0x00000008u,0); // 8007C9AC
  c->r[4]=addc(c,c->r[4],0xFFFFFFF8u,0); cr0(c,c->r[4]); // 8007C9B0
  if (!crb(c,0)) { IRQCHK(c); goto L_8007C99C; } // 8007C9B4
  /* isync */ // 8007C9B8
  return; // 8007C9BC
}

// TRK_main
void f_8007C9C0(Ctx* __restrict c) {
  trace_call(0x8007C9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C9C0
  c->r[0]=c->lr; // 8007C9C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C9C8
  c->lr=0x8007C9D0u; f_8007D758(c); // 8007C9CC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C9D0
  W32(c->r[13]+0xFFFF90D0u,c->r[3]); // 8007C9D4
  if (!crb(c,2)) { goto L_8007C9E4; } // 8007C9D8
  c->lr=0x8007C9E0u; f_8007D828(c); // 8007C9DC
  c->lr=0x8007C9E4u; f_8007C9FC(c); // 8007C9E0
L_8007C9E4:;
  c->lr=0x8007C9E8u; f_8007D804(c); // 8007C9E4
  W32(c->r[13]+0xFFFF90D0u,c->r[3]); // 8007C9E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C9EC
  c->lr=c->r[0]; // 8007C9F0
  c->r[1]=c->r[1]+0x00000010u; // 8007C9F4
  return; // 8007C9F8
}

// TRKNubMainLoop
void f_8007C9FC(Ctx* __restrict c) {
  trace_call(0x8007C9FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C9FC
  c->r[0]=c->lr; // 8007CA00
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007CA04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007CA08
  c->r[31]=0u+0x00000000u; // 8007CA0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007CA10
  c->r[30]=0u+0x00000000u; // 8007CA14
  goto L_8007CAC8; // 8007CA18
L_8007CA1C:;
  c->r[3]=c->r[1]+0x00000008u; // 8007CA1C
  c->lr=0x8007CA24u; f_8007D5E0(c); // 8007CA20
  cmps(c,0,(int32_t)c->r[3],0); // 8007CA24
  if (crb(c,2)) { goto L_8007CA90; } // 8007CA28
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007CA2C
  c->r[30]=0u+0x00000000u; // 8007CA30
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8007CA34
  cmpu(c,0,c->r[0],0x00000001u); // 8007CA38
  if (!crb(c,1)) { goto L_8007CA74; } // 8007CA3C
  cmps(c,0,(int32_t)c->r[3],2); // 8007CA40
  if (crb(c,2)) { goto L_8007CA5C; } // 8007CA44
  cmps(c,0,(int32_t)c->r[3],1); // 8007CA48
  if (crb(c,2)) { goto L_8007CA6C; } // 8007CA4C
  cmps(c,0,(int32_t)c->r[3],5); // 8007CA50
  if (crb(c,2)) { goto L_8007CA80; } // 8007CA54
  goto L_8007CA84; // 8007CA58
L_8007CA5C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007CA5C
  c->lr=0x8007CA64u; f_8007E4AC(c); // 8007CA60
  c->lr=0x8007CA68u; f_8007CD4C(c); // 8007CA64
  goto L_8007CA84; // 8007CA68
L_8007CA6C:;
  c->r[31]=0u+0x00000001u; // 8007CA6C
  goto L_8007CA84; // 8007CA70
L_8007CA74:;
  c->r[3]=c->r[1]+0x00000008u; // 8007CA74
  c->lr=0x8007CA7Cu; f_80080938(c); // 8007CA78
  goto L_8007CA84; // 8007CA7C
L_8007CA80:;
  c->lr=0x8007CA84u; f_80080E60(c); // 8007CA80
L_8007CA84:;
  c->r[3]=c->r[1]+0x00000008u; // 8007CA84
  c->lr=0x8007CA8Cu; f_8007D750(c); // 8007CA88
  goto L_8007CAC8; // 8007CA8C
L_8007CA90:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007CA90
  if (crb(c,2)) { goto L_8007CAA8; } // 8007CA94
  c->r[3]=R32(c->r[13]+0xFFFF90F0u); // 8007CA98
  c->r[0]=R8(c->r[3]+0x00000000u); // 8007CA9C
  cmps(c,0,(int32_t)c->r[0],0); // 8007CAA0
  if (crb(c,2)) { goto L_8007CAB4; } // 8007CAA4
L_8007CAA8:;
  c->r[30]=0u+0x00000001u; // 8007CAA8
  c->lr=0x8007CAB0u; f_8007D974(c); // 8007CAAC
  goto L_8007CAC8; // 8007CAB0
L_8007CAB4:;
  c->lr=0x8007CAB8u; f_80081054(c); // 8007CAB4
  cmps(c,0,(int32_t)c->r[3],0); // 8007CAB8
  if (!crb(c,2)) { goto L_8007CAC4; } // 8007CABC
  c->lr=0x8007CAC4u; f_8007E030(c); // 8007CAC0
L_8007CAC4:;
  c->r[30]=0u+0x00000000u; // 8007CAC4
L_8007CAC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007CAC8
  if (crb(c,2)) { IRQCHK(c); goto L_8007CA1C; } // 8007CACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007CAD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007CAD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007CAD8
  c->lr=c->r[0]; // 8007CADC
  c->r[1]=c->r[1]+0x00000020u; // 8007CAE0
  return; // 8007CAE4
}

// TRK_memcpy
void f_8007CAE8(Ctx* __restrict c) {
  trace_call(0x8007CAE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CAE8
  cmps(c,0,(int32_t)c->r[5],0); // 8007CAEC
  c->r[9]=0u+0x000000FFu; // 8007CAF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CAF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CAF8
  c->r[30]=c->r[3]|c->r[3]; // 8007CAFC
  if (crb(c,2)) { goto L_8007CC14; } // 8007CB00
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8007CB04
  c->ctr=c->r[0]; // 8007CB08
  if (crb(c,2)) { goto L_8007CBBC; } // 8007CB0C
L_8007CB10:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8007CB10
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8007CB14
  c->r[0]=c->r[30]-c->r[12]; // 8007CB18
  c->r[7]=R32(c->r[11]+0x00000000u); // 8007CB1C
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8007CB20
  c->r[6]=c->r[4]-c->r[11]; // 8007CB24
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8007CB28
  c->r[4]=c->r[4]+0x00000001u; // 8007CB2C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CB30
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8007CB34
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8007CB38
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8007CB3C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8007CB40
  c->r[8]=R32(c->r[12]+0x00000000u); // 8007CB44
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8007CB48
  c->r[6]=c->r[4]-c->r[11]; // 8007CB4C
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8007CB50
  c->r[30]=c->r[30]+0x00000001u; // 8007CB54
  c->r[7]=c->r[8]&~c->r[10]; // 8007CB58
  c->r[4]=c->r[4]+0x00000001u; // 8007CB5C
  c->r[0]=c->r[10]&c->r[0]; // 8007CB60
  c->r[0]=c->r[7]|c->r[0]; // 8007CB64
  W32(c->r[12]+0x00000000u,c->r[0]); // 8007CB68
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8007CB6C
  c->r[0]=c->r[30]-c->r[12]; // 8007CB70
  c->r[7]=R32(c->r[11]+0x00000000u); // 8007CB74
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8007CB78
  c->r[8]=R32(c->r[12]+0x00000000u); // 8007CB7C
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8007CB80
  c->r[30]=c->r[30]+0x00000001u; // 8007CB84
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CB88
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8007CB8C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8007CB90
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8007CB94
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8007CB98
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8007CB9C
  c->r[7]=c->r[8]&~c->r[10]; // 8007CBA0
  c->r[0]=c->r[10]&c->r[0]; // 8007CBA4
  c->r[0]=c->r[7]|c->r[0]; // 8007CBA8
  W32(c->r[12]+0x00000000u,c->r[0]); // 8007CBAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007CB10; } // 8007CBB0
  c->r[5]=c->r[5]&0x00000001u; cr0(c,c->r[5]); // 8007CBB4
  if (crb(c,2)) { goto L_8007CC14; } // 8007CBB8
L_8007CBBC:;
  c->ctr=c->r[5]; // 8007CBBC
L_8007CBC0:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8007CBC0
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8007CBC4
  c->r[0]=c->r[30]-c->r[12]; // 8007CBC8
  c->r[7]=R32(c->r[11]+0x00000000u); // 8007CBCC
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8007CBD0
  c->r[6]=c->r[4]-c->r[11]; // 8007CBD4
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8007CBD8
  c->r[8]=R32(c->r[12]+0x00000000u); // 8007CBDC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CBE0
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8007CBE4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8007CBE8
  c->r[4]=c->r[4]+0x00000001u; // 8007CBEC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8007CBF0
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8007CBF4
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8007CBF8
  c->r[30]=c->r[30]+0x00000001u; // 8007CBFC
  c->r[7]=c->r[8]&~c->r[10]; // 8007CC00
  c->r[0]=c->r[10]&c->r[0]; // 8007CC04
  c->r[0]=c->r[7]|c->r[0]; // 8007CC08
  W32(c->r[12]+0x00000000u,c->r[0]); // 8007CC0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007CBC0; } // 8007CC10
L_8007CC14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CC14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CC18
  c->r[1]=c->r[1]+0x00000010u; // 8007CC1C
  return; // 8007CC20
}

// TRK_memset
void f_8007CC24(Ctx* __restrict c) {
  trace_call(0x8007CC24u);
  cmps(c,0,(int32_t)c->r[5],0); // 8007CC24
  c->r[8]=rotl(c->r[4],0)&0x000000FFu; // 8007CC28
  c->r[7]=c->r[3]|c->r[3]; // 8007CC2C
  c->r[6]=0u+0x000000FFu; // 8007CC30
  if (crb(c,2)) return; // 8007CC34
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8007CC38
  c->ctr=c->r[0]; // 8007CC3C
  if (crb(c,2)) { goto L_8007CD10; } // 8007CC40
L_8007CC44:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8007CC44
  c->r[0]=c->r[7]-c->r[10]; // 8007CC48
  c->r[4]=R32(c->r[10]+0x00000000u); // 8007CC4C
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007CC50
  c->r[7]=c->r[7]+0x00000001u; // 8007CC54
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CC58
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8007CC5C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8007CC60
  c->r[4]=c->r[4]&~c->r[9]; // 8007CC64
  c->r[0]=c->r[9]&c->r[0]; // 8007CC68
  c->r[0]=c->r[4]|c->r[0]; // 8007CC6C
  W32(c->r[10]+0x00000000u,c->r[0]); // 8007CC70
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8007CC74
  c->r[0]=c->r[7]-c->r[10]; // 8007CC78
  c->r[4]=R32(c->r[10]+0x00000000u); // 8007CC7C
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007CC80
  c->r[7]=c->r[7]+0x00000001u; // 8007CC84
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CC88
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8007CC8C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8007CC90
  c->r[4]=c->r[4]&~c->r[9]; // 8007CC94
  c->r[0]=c->r[9]&c->r[0]; // 8007CC98
  c->r[0]=c->r[4]|c->r[0]; // 8007CC9C
  W32(c->r[10]+0x00000000u,c->r[0]); // 8007CCA0
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8007CCA4
  c->r[0]=c->r[7]-c->r[10]; // 8007CCA8
  c->r[4]=R32(c->r[10]+0x00000000u); // 8007CCAC
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007CCB0
  c->r[7]=c->r[7]+0x00000001u; // 8007CCB4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CCB8
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8007CCBC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8007CCC0
  c->r[4]=c->r[4]&~c->r[9]; // 8007CCC4
  c->r[0]=c->r[9]&c->r[0]; // 8007CCC8
  c->r[0]=c->r[4]|c->r[0]; // 8007CCCC
  W32(c->r[10]+0x00000000u,c->r[0]); // 8007CCD0
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8007CCD4
  c->r[0]=c->r[7]-c->r[10]; // 8007CCD8
  c->r[4]=R32(c->r[10]+0x00000000u); // 8007CCDC
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007CCE0
  c->r[7]=c->r[7]+0x00000001u; // 8007CCE4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CCE8
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8007CCEC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8007CCF0
  c->r[4]=c->r[4]&~c->r[9]; // 8007CCF4
  c->r[0]=c->r[9]&c->r[0]; // 8007CCF8
  c->r[0]=c->r[4]|c->r[0]; // 8007CCFC
  W32(c->r[10]+0x00000000u,c->r[0]); // 8007CD00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007CC44; } // 8007CD04
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 8007CD08
  if (crb(c,2)) return; // 8007CD0C
L_8007CD10:;
  c->ctr=c->r[5]; // 8007CD10
L_8007CD14:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8007CD14
  c->r[0]=c->r[7]-c->r[10]; // 8007CD18
  c->r[4]=R32(c->r[10]+0x00000000u); // 8007CD1C
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007CD20
  c->r[7]=c->r[7]+0x00000001u; // 8007CD24
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007CD28
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8007CD2C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8007CD30
  c->r[4]=c->r[4]&~c->r[9]; // 8007CD34
  c->r[0]=c->r[9]&c->r[0]; // 8007CD38
  c->r[0]=c->r[4]|c->r[0]; // 8007CD3C
  W32(c->r[10]+0x00000000u,c->r[0]); // 8007CD40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007CD14; } // 8007CD44
  return; // 8007CD48
}

// TRKDispatchMessage
void f_8007CD4C(Ctx* __restrict c) {
  trace_call(0x8007CD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CD4C
  c->r[0]=c->lr; // 8007CD50
  c->r[4]=0u+0x00000000u; // 8007CD54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CD58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007CD5C
  c->r[31]=0u+0x00000500u; // 8007CD60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007CD64
  c->r[30]=c->r[3]|c->r[3]; // 8007CD68
  c->lr=0x8007CD70u; f_8007E520(c); // 8007CD6C
  c->r[0]=R8(c->r[30]+0x00000010u); // 8007CD70
  cmpu(c,0,c->r[0],0x0000001Au); // 8007CD74
  if (crb(c,1)) { goto L_8007CE50; } // 8007CD78
  c->r[3]=0u+0x80150000u; // 8007CD7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007CD80
  c->r[3]=c->r[3]+0xFFFFDFA8u; // 8007CD84
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007CD88
  c->ctr=c->r[3]; // 8007CD8C
  if (true) { switch (c->ctr) { case 0x8007CD94u: goto L_8007CD94; case 0x8007CDA4u: goto L_8007CDA4; case 0x8007CDB4u: goto L_8007CDB4; case 0x8007CDC4u: goto L_8007CDC4; case 0x8007CDD4u: goto L_8007CDD4; case 0x8007CDE4u: goto L_8007CDE4; case 0x8007CDF4u: goto L_8007CDF4; case 0x8007CE04u: goto L_8007CE04; case 0x8007CE14u: goto L_8007CE14; case 0x8007CE24u: goto L_8007CE24; case 0x8007CE34u: goto L_8007CE34; case 0x8007CE44u: goto L_8007CE44; case 0x8007CE50u: goto L_8007CE50; default: break; } dispatch(c,c->ctr); return; } // 8007CD90
L_8007CD94:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CD94
  c->lr=0x8007CD9Cu; f_8007EC04(c); // 8007CD98
  c->r[31]=c->r[3]|c->r[3]; // 8007CD9C
  goto L_8007CE50; // 8007CDA0
L_8007CDA4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDA4
  c->lr=0x8007CDACu; f_8007EC74(c); // 8007CDA8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDAC
  goto L_8007CE50; // 8007CDB0
L_8007CDB4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDB4
  c->lr=0x8007CDBCu; f_8007ECFC(c); // 8007CDB8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDBC
  goto L_8007CE50; // 8007CDC0
L_8007CDC4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDC4
  c->lr=0x8007CDCCu; f_8007ED68(c); // 8007CDC8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDCC
  goto L_8007CE50; // 8007CDD0
L_8007CDD4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDD4
  c->lr=0x8007CDDCu; f_8007EDD4(c); // 8007CDD8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDDC
  goto L_8007CE50; // 8007CDE0
L_8007CDE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDE4
  c->lr=0x8007CDECu; f_8007F008(c); // 8007CDE8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDEC
  goto L_8007CE50; // 8007CDF0
L_8007CDF4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CDF4
  c->lr=0x8007CDFCu; f_8007F218(c); // 8007CDF8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDFC
  goto L_8007CE50; // 8007CE00
L_8007CE04:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CE04
  c->lr=0x8007CE0Cu; f_8007F414(c); // 8007CE08
  c->r[31]=c->r[3]|c->r[3]; // 8007CE0C
  goto L_8007CE50; // 8007CE10
L_8007CE14:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CE14
  c->lr=0x8007CE1Cu; f_8007F6B4(c); // 8007CE18
  c->r[31]=c->r[3]|c->r[3]; // 8007CE1C
  goto L_8007CE50; // 8007CE20
L_8007CE24:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CE24
  c->lr=0x8007CE2Cu; f_8007F778(c); // 8007CE28
  c->r[31]=c->r[3]|c->r[3]; // 8007CE2C
  goto L_8007CE50; // 8007CE30
L_8007CE34:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CE34
  c->lr=0x8007CE3Cu; f_8007F9FC(c); // 8007CE38
  c->r[31]=c->r[3]|c->r[3]; // 8007CE3C
  goto L_8007CE50; // 8007CE40
L_8007CE44:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CE44
  c->lr=0x8007CE4Cu; f_8007FAB4(c); // 8007CE48
  c->r[31]=c->r[3]|c->r[3]; // 8007CE4C
L_8007CE50:;
  c->r[3]=c->r[31]|c->r[31]; // 8007CE50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007CE54
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007CE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007CE5C
  c->lr=c->r[0]; // 8007CE60
  c->r[1]=c->r[1]+0x00000010u; // 8007CE64
  return; // 8007CE68
}

// InitMetroTRK
void f_8007CE6C(Ctx* __restrict c) {
  trace_call(0x8007CE6Cu);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 8007CE6C
  W32(c->r[1]+0x00000000u,c->r[3]); // 8007CE70
  c->r[3]=0u+0x801B0000u; // 8007CE74
  c->r[3]=c->r[3]|0x000094F0u; // 8007CE78
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007CE7C
  c->r[4]=R32(c->r[1]+0x00000000u); // 8007CE80
  c->r[1]=c->r[1]+0x00000004u; // 8007CE84
  W32(c->r[3]+0x00000004u,c->r[1]); // 8007CE88
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8007CE8C
  c->r[4]=c->lr; // 8007CE90
  W32(c->r[3]+0x00000084u,c->r[4]); // 8007CE94
  W32(c->r[3]+0x00000080u,c->r[4]); // 8007CE98
  c->r[4]=c->cr; // 8007CE9C
  W32(c->r[3]+0x00000088u,c->r[4]); // 8007CEA0
  c->r[4]=c->msr; // 8007CEA4
  c->r[3]=c->r[4]|0x00008000u; // 8007CEA8
  c->r[3]=c->r[3]^0x00008000u; // 8007CEAC
  c->msr=c->r[3]; // 8007CEB0
  mtspr(c,27,c->r[4]); // 8007CEB4
  c->lr=0x8007CEBCu; f_8007E064(c); // 8007CEB8
  c->r[3]=0u+0x801B0000u; // 8007CEBC
  c->r[3]=c->r[3]|0x000094F0u; // 8007CEC0
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007CEC4
  c->r[0]=0u+0x00000000u; // 8007CEC8
  mtspr(c,1010,c->r[0]); // 8007CECC
  mtspr(c,1013,c->r[0]); // 8007CED0
  c->r[1]=0u+0x80210000u; // 8007CED4
  c->r[1]=c->r[1]|0x00007058u; // 8007CED8
  c->r[3]=c->r[5]|c->r[5]; // 8007CEDC
  c->lr=0x8007CEE4u; f_8007D250(c); // 8007CEE0
  cmps(c,0,(int32_t)c->r[3],1); // 8007CEE4
  if (!crb(c,2)) { goto L_8007CEFC; } // 8007CEE8
  c->r[4]=R32(c->r[3]+0x00000084u); // 8007CEEC
  c->lr=c->r[4]; // 8007CEF0
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007CEF4
  return; // 8007CEF8
L_8007CEFC:;
  f_8007C9C0(c); return; // 8007CEFC
}

// fn_8007CF00
void f_8007CF00(Ctx* __restrict c) {
  return; // 8007CF00
}

// fn_8007CF04
void f_8007CF04(Ctx* __restrict c) {
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 8007CF04
  W32(c->r[1]+0x00000000u,c->r[3]); // 8007CF08
  c->r[3]=0u+0x801B0000u; // 8007CF0C
  c->r[3]=c->r[3]|0x000094F0u; // 8007CF10
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007CF14
  c->r[4]=R32(c->r[1]+0x00000000u); // 8007CF18
  c->r[1]=c->r[1]+0x00000004u; // 8007CF1C
  W32(c->r[3]+0x00000004u,c->r[1]); // 8007CF20
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8007CF24
  c->r[4]=c->lr; // 8007CF28
  W32(c->r[3]+0x00000084u,c->r[4]); // 8007CF2C
  W32(c->r[3]+0x00000080u,c->r[4]); // 8007CF30
  c->r[4]=c->cr; // 8007CF34
  W32(c->r[3]+0x00000088u,c->r[4]); // 8007CF38
  c->r[4]=c->msr; // 8007CF3C
  c->r[3]=c->r[4]|0x00008000u; // 8007CF40
  c->msr=c->r[3]; // 8007CF44
  mtspr(c,27,c->r[4]); // 8007CF48
  c->lr=0x8007CF50u; f_8007E064(c); // 8007CF4C
  c->r[3]=0u+0x801B0000u; // 8007CF50
  c->r[3]=c->r[3]|0x000094F0u; // 8007CF54
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007CF58
  c->r[0]=0u+0x00000000u; // 8007CF5C
  mtspr(c,1010,c->r[0]); // 8007CF60
  mtspr(c,1013,c->r[0]); // 8007CF64
  c->r[1]=0u+0x80210000u; // 8007CF68
  c->r[1]=c->r[1]|0x00007058u; // 8007CF6C
  c->r[3]=0u+0x00000002u; // 8007CF70
  c->lr=0x8007CF78u; f_8007D250(c); // 8007CF74
  cmps(c,0,(int32_t)c->r[3],1); // 8007CF78
  if (!crb(c,2)) { goto L_8007CF90; } // 8007CF7C
  c->r[4]=R32(c->r[3]+0x00000084u); // 8007CF80
  c->lr=c->r[4]; // 8007CF84
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007CF88
  return; // 8007CF8C
L_8007CF90:;
  f_8007C9C0(c); return; // 8007CF90
}

// fn_8007CF94
void f_8007CF94(Ctx* __restrict c) {
  return; // 8007CF94
}

// fn_8007CF98
void f_8007CF98(Ctx* __restrict c) {
  f_8007D3E0(c); return; // 8007CF98
}

// TRKTargetTranslate
void f_8007CF9C(Ctx* __restrict c) {
  trace_call(0x8007CF9Cu);
  c->r[4]=R32(c->r[13]+0xFFFF90D8u); // 8007CF9C
  cmpu(c,0,c->r[3],c->r[4]); // 8007CFA0
  if (crb(c,0)) { goto L_8007CFC8; } // 8007CFA4
  c->r[0]=c->r[4]+0x00004000u; // 8007CFA8
  cmpu(c,0,c->r[3],c->r[0]); // 8007CFAC
  if (!crb(c,0)) { goto L_8007CFC8; } // 8007CFB0
  c->r[4]=0u+0x801C0000u; // 8007CFB4
  c->r[4]=c->r[4]+0xFFFF94F0u; // 8007CFB8
  c->r[0]=R32(c->r[4]+0x00000238u); // 8007CFBC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8007CFC0
  if (!crb(c,2)) return; // 8007CFC4
L_8007CFC8:;
  c->r[0]=0u+0x03000000u; // 8007CFC8
  cmpu(c,0,c->r[3],c->r[0]); // 8007CFCC
  if (!crb(c,0)) { goto L_8007CFE0; } // 8007CFD0
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8007CFD4
  c->r[3]=c->r[0]|0x80000000u; // 8007CFD8
  return; // 8007CFDC
L_8007CFE0:;
  c->r[0]=0u+0x10000000u; // 8007CFE0
  cmpu(c,0,c->r[3],c->r[0]); // 8007CFE4
  if (crb(c,0)) return; // 8007CFE8
  c->r[0]=0u+0x1C000000u; // 8007CFEC
  cmpu(c,0,c->r[3],c->r[0]); // 8007CFF0
  if (!crb(c,0)) return; // 8007CFF4
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8007CFF8
  c->r[3]=c->r[0]|0x90000000u; // 8007CFFC
  return; // 8007D000
}

// __TRK_copy_vectors
void f_8007D004(Ctx* __restrict c) {
  trace_call(0x8007D004u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D004
  c->r[0]=c->lr; // 8007D008
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007D00C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007D010
  c->r[3]=R32(c->r[13]+0xFFFF90D8u); // 8007D014
  cmpu(c,0,c->r[3],0x00000044u); // 8007D018
  if (crb(c,1)) { goto L_8007D048; } // 8007D01C
  c->r[0]=c->r[3]+0x00004000u; // 8007D020
  cmpu(c,0,c->r[0],0x00000044u); // 8007D024
  if (!crb(c,1)) { goto L_8007D048; } // 8007D028
  c->r[3]=0u+0x801C0000u; // 8007D02C
  c->r[3]=c->r[3]+0xFFFF94F0u; // 8007D030
  c->r[0]=R32(c->r[3]+0x00000238u); // 8007D034
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8007D038
  if (crb(c,2)) { goto L_8007D048; } // 8007D03C
  c->r[3]=0u+0x00000044u; // 8007D040
  goto L_8007D050; // 8007D044
L_8007D048:;
  c->r[3]=0u+0x80000000u; // 8007D048
  c->r[3]=c->r[3]+0x00000044u; // 8007D04C
L_8007D050:;
  c->r[31]=0u+0x80150000u; // 8007D050
  c->r[24]=0u+0x801C0000u; // 8007D054
  c->r[28]=0u+0x80000000u; // 8007D058
  c->r[29]=R32(c->r[3]+0x00000000u); // 8007D05C
  c->r[31]=c->r[31]+0xFFFFE018u; // 8007D060
  c->r[24]=c->r[24]+0xFFFF94F0u; // 8007D064
  c->r[28]=c->r[28]+0x00004744u; // 8007D068
  c->r[30]=0u+0x00000000u; // 8007D06C
  c->r[25]=0u+0x03000000u; // 8007D070
  c->r[27]=0u+0x1C000000u; // 8007D074
  c->r[26]=0u+0x10000000u; // 8007D078
  c->r[23]=0u+0x00000001u; // 8007D07C
L_8007D080:;
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[23]<<((c->r[30])&31)); // 8007D080
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 8007D084
  if (crb(c,2)) { goto L_8007D114; } // 8007D088
  cmps(c,0,(int32_t)c->r[30],4); // 8007D08C
  if (crb(c,2)) { goto L_8007D114; } // 8007D090
  c->r[4]=R32(c->r[31]+0x00000000u); // 8007D094
  c->r[3]=R32(c->r[13]+0xFFFF90D8u); // 8007D098
  cmpu(c,0,c->r[4],c->r[3]); // 8007D09C
  if (crb(c,0)) { goto L_8007D0C4; } // 8007D0A0
  c->r[0]=c->r[3]+0x00004000u; // 8007D0A4
  cmpu(c,0,c->r[4],c->r[0]); // 8007D0A8
  if (!crb(c,0)) { goto L_8007D0C4; } // 8007D0AC
  c->r[0]=R32(c->r[24]+0x00000238u); // 8007D0B0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8007D0B4
  if (crb(c,2)) { goto L_8007D0C4; } // 8007D0B8
  c->r[22]=c->r[4]|c->r[4]; // 8007D0BC
  goto L_8007D0F8; // 8007D0C0
L_8007D0C4:;
  cmpu(c,0,c->r[4],c->r[25]); // 8007D0C4
  if (!crb(c,0)) { goto L_8007D0D8; } // 8007D0C8
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8007D0CC
  c->r[22]=c->r[0]|0x80000000u; // 8007D0D0
  goto L_8007D0F8; // 8007D0D4
L_8007D0D8:;
  cmpu(c,0,c->r[4],c->r[26]); // 8007D0D8
  if (crb(c,0)) { goto L_8007D0F4; } // 8007D0DC
  cmpu(c,0,c->r[4],c->r[27]); // 8007D0E0
  if (!crb(c,0)) { goto L_8007D0F4; } // 8007D0E4
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8007D0E8
  c->r[22]=c->r[0]|0x90000000u; // 8007D0EC
  goto L_8007D0F8; // 8007D0F0
L_8007D0F4:;
  c->r[22]=c->r[4]|c->r[4]; // 8007D0F4
L_8007D0F8:;
  c->r[3]=c->r[22]|c->r[22]; // 8007D0F8
  c->r[4]=c->r[28]+c->r[4]; // 8007D0FC
  c->r[5]=0u+0x00000100u; // 8007D100
  c->lr=0x8007D108u; f_8007CAE8(c); // 8007D104
  c->r[3]=c->r[22]|c->r[22]; // 8007D108
  c->r[4]=0u+0x00000100u; // 8007D10C
  c->lr=0x8007D114u; f_8007C988(c); // 8007D110
L_8007D114:;
  c->r[30]=c->r[30]+0x00000001u; // 8007D114
  c->r[31]=c->r[31]+0x00000004u; // 8007D118
  cmps(c,0,(int32_t)c->r[30],14); // 8007D11C
  if (!crb(c,1)) { IRQCHK(c); goto L_8007D080; } // 8007D120
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007D124
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007D128
  c->lr=c->r[0]; // 8007D12C
  c->r[1]=c->r[1]+0x00000030u; // 8007D130
  return; // 8007D134
}

// TRKInitializeTarget
void f_8007D138(Ctx* __restrict c) {
  trace_call(0x8007D138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D138
  c->r[0]=c->lr; // 8007D13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D140
  c->r[0]=0u+0x00000001u; // 8007D144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D148
  c->r[31]=0u+0x801C0000u; // 8007D14C
  c->r[31]=c->r[31]+0xFFFF9448u; // 8007D150
  W32(c->r[31]+0x00000098u,c->r[0]); // 8007D154
  c->lr=0x8007D15Cu; f_8007FD0C(c); // 8007D158
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 8007D15C
  c->r[0]=0u+0xE0000000u; // 8007D160
  c->r[3]=0u+0x00000000u; // 8007D164
  W32(c->r[13]+0xFFFF90D8u,c->r[0]); // 8007D168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D16C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D170
  c->lr=c->r[0]; // 8007D174
  c->r[1]=c->r[1]+0x00000010u; // 8007D178
  return; // 8007D17C
}

// __TRKreset
void f_8007D180(Ctx* __restrict c) {
  trace_call(0x8007D180u);
  c->r[3]=0u+0x00000000u; // 8007D180
  c->r[4]=0u+0x00000000u; // 8007D184
  c->r[5]=0u+0x00000000u; // 8007D188
  f_8004B900(c); return; // 8007D18C
}

// TRKLoadContext
void f_8007D190(Ctx* __restrict c) {
  trace_call(0x8007D190u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8007D190
  c->r[1]=R32(c->r[3]+0x00000004u); // 8007D194
  c->r[2]=R32(c->r[3]+0x00000008u); // 8007D198
  c->r[5]=R16(c->r[3]+0x000001A2u); // 8007D19C
  c->r[6]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[6]); // 8007D1A0
  if (crb(c,2)) { goto L_8007D1B8; } // 8007D1A4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 8007D1A8
  W16(c->r[3]+0x000001A2u,c->r[5]); // 8007D1AC
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=5;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007D1B0
  goto L_8007D1BC; // 8007D1B4
L_8007D1B8:;
  {uint32_t ea=c->r[3]+0x00000034u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007D1B8
L_8007D1BC:;
  c->r[31]=c->r[3]|c->r[3]; // 8007D1BC
  c->r[3]=c->r[4]|c->r[4]; // 8007D1C0
  c->r[4]=R32(c->r[31]+0x00000080u); // 8007D1C4
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[4]&0xFFFFFFFFu); // 8007D1C8
  c->r[4]=R32(c->r[31]+0x00000084u); // 8007D1CC
  c->lr=c->r[4]; // 8007D1D0
  c->r[4]=R32(c->r[31]+0x00000088u); // 8007D1D4
  c->ctr=c->r[4]; // 8007D1D8
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 8007D1DC
  mtspr(c,1,c->r[4]); // 8007D1E0
  c->r[4]=c->msr; // 8007D1E4
  c->r[4]=rotl(c->r[4],0)&0xFFFF7FFFu; // 8007D1E8
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 8007D1EC
  c->msr=c->r[4]; // 8007D1F0
  mtspr(c,273,c->r[2]); // 8007D1F4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8007D1F8
  mtspr(c,274,c->r[4]); // 8007D1FC
  c->r[4]=R32(c->r[31]+0x00000010u); // 8007D200
  mtspr(c,275,c->r[4]); // 8007D204
  c->r[2]=R32(c->r[31]+0x00000198u); // 8007D208
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 8007D20C
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 8007D210
  f_80080538(c); return; // 8007D214
}

// TRKEXICallBack
void f_8007D218(Ctx* __restrict c) {
  trace_call(0x8007D218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D218
  c->r[0]=c->lr; // 8007D21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D224
  c->r[31]=c->r[4]|c->r[4]; // 8007D228
  c->lr=0x8007D230u; f_8004C780(c); // 8007D22C
  c->r[3]=c->r[31]|c->r[31]; // 8007D230
  c->r[4]=0u+0x00000500u; // 8007D234
  c->lr=0x8007D23Cu; f_8007D190(c); // 8007D238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D240
  c->lr=c->r[0]; // 8007D244
  c->r[1]=c->r[1]+0x00000010u; // 8007D248
  return; // 8007D24C
}

// InitMetroTRKCommTable
void f_8007D250(Ctx* __restrict c) {
  trace_call(0x8007D250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D250
  c->r[0]=c->lr; // 8007D254
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D25C
  c->r[31]=c->r[3]|c->r[3]; // 8007D260
  c->r[4]=c->r[31]|c->r[31]; // 8007D264
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D268
  c->r[30]=0u+0x80150000u; // 8007D26C
  c->r[3]=c->r[30]+0xFFFFE058u; // 8007D270
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D274
  c->lr=0x8007D27Cu; f_80045C80(c); // 8007D278
  c->r[30]=c->r[30]+0xFFFFE058u; // 8007D27C
  c->r[4]=0u+0x00000040u; // 8007D280
  c->r[3]=c->r[30]+0x00000015u; // 8007D284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D288
  c->lr=0x8007D290u; f_80045C80(c); // 8007D28C
  cmps(c,0,(int32_t)c->r[31],2); // 8007D290
  c->r[0]=0u+0x00000000u; // 8007D294
  W8(c->r[13]+0xFFFF90E0u,c->r[0]); // 8007D298
  if (!crb(c,2)) { goto L_8007D2A8; } // 8007D29C
  c->r[3]=0u+0x00000000u; // 8007D2A0
  goto L_8007D370; // 8007D2A4
L_8007D2A8:;
  cmps(c,0,(int32_t)c->r[31],1); // 8007D2A8
  if (!crb(c,2)) { goto L_8007D344; } // 8007D2AC
  c->r[3]=c->r[30]+0x0000003Au; // 8007D2B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D2B4
  c->lr=0x8007D2BCu; f_80045C80(c); // 8007D2B8
  c->r[3]=0u+0x801B0000u; // 8007D2BC
  c->r[30]=0u+0x80080000u; // 8007D2C0
  c->r[31]=0u+0x80080000u; // 8007D2C4
  c->r[11]=0u+0x80080000u; // 8007D2C8
  c->r[10]=0u+0x80080000u; // 8007D2CC
  c->r[9]=0u+0x80080000u; // 8007D2D0
  c->r[8]=0u+0x80080000u; // 8007D2D4
  c->r[7]=0u+0x80080000u; // 8007D2D8
  c->r[6]=0u+0x80080000u; // 8007D2DC
  c->r[5]=0u+0x80080000u; // 8007D2E0
  c->r[4]=0u+0x80080000u; // 8007D2E4
  c->r[30]=c->r[30]+0xFFFFC498u; // 8007D2E8
  c->r[12]=c->r[3]+0x00007980u; // 8007D2EC
  c->r[31]=c->r[31]+0xFFFFC4DCu; // 8007D2F0
  c->r[11]=c->r[11]+0xFFFFC500u; // 8007D2F4
  c->r[10]=c->r[10]+0xFFFFC508u; // 8007D2F8
  c->r[9]=c->r[9]+0xFFFFC5BCu; // 8007D2FC
  c->r[8]=c->r[8]+0xFFFFC4D4u; // 8007D300
  c->r[7]=c->r[7]+0xFFFFC678u; // 8007D304
  c->r[6]=c->r[6]+0xFFFFC630u; // 8007D308
  c->r[5]=c->r[5]+0xFFFFC654u; // 8007D30C
  c->r[4]=c->r[4]+0xFFFFC6ECu; // 8007D310
  W32(c->r[3]+0x00007980u,c->r[30]); // 8007D314
  c->r[3]=0u+0x00000000u; // 8007D318
  W32(c->r[12]+0x00000018u,c->r[31]); // 8007D31C
  W32(c->r[12]+0x0000001Cu,c->r[11]); // 8007D320
  W32(c->r[12]+0x00000010u,c->r[10]); // 8007D324
  W32(c->r[12]+0x00000014u,c->r[9]); // 8007D328
  W32(c->r[12]+0x00000008u,c->r[8]); // 8007D32C
  W32(c->r[12]+0x0000000Cu,c->r[7]); // 8007D330
  W32(c->r[12]+0x00000020u,c->r[6]); // 8007D334
  W32(c->r[12]+0x00000024u,c->r[5]); // 8007D338
  W32(c->r[12]+0x00000004u,c->r[4]); // 8007D33C
  goto L_8007D370; // 8007D340
L_8007D344:;
  c->r[4]=c->r[31]|c->r[31]; // 8007D344
  c->r[3]=c->r[30]+0x0000005Bu; // 8007D348
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D34C
  c->lr=0x8007D354u; f_80045C80(c); // 8007D350
  c->r[3]=c->r[30]+0x00000086u; // 8007D354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D358
  c->lr=0x8007D360u; f_80045C80(c); // 8007D35C
  c->r[3]=c->r[30]+0x000000B5u; // 8007D360
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D364
  c->lr=0x8007D36Cu; f_80045C80(c); // 8007D368
  c->r[3]=0u+0x00000001u; // 8007D36C
L_8007D370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D374
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D378
  c->lr=c->r[0]; // 8007D37C
  c->r[1]=c->r[1]+0x00000010u; // 8007D380
  return; // 8007D384
}

// fn_8007D388
void f_8007D388(Ctx* __restrict c) {
  return; // 8007D388
}

// TRKInitializeIntDrivenUART
void f_8007D38C(Ctx* __restrict c) {
  trace_call(0x8007D38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D38C
  c->r[0]=c->lr; // 8007D390
  c->r[4]=0u+0x80080000u; // 8007D394
  c->r[3]=c->r[5]|c->r[5]; // 8007D398
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D39C
  c->r[4]=c->r[4]+0xFFFFD218u; // 8007D3A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D3A4
  c->r[31]=0u+0x801B0000u; // 8007D3A8
  c->r[12]=R32(c->r[31]+0x00007980u); // 8007D3AC
  c->ctr=c->r[12]; // 8007D3B0
  if (true) { c->lr=0x8007D3B8u; dispatch(c,c->ctr); } // 8007D3B4
  c->r[3]=c->r[31]+0x00007980u; // 8007D3B8
  c->r[12]=R32(c->r[3]+0x00000018u); // 8007D3BC
  c->ctr=c->r[12]; // 8007D3C0
  if (true) { c->lr=0x8007D3C8u; dispatch(c,c->ctr); } // 8007D3C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D3C8
  c->r[3]=0u+0x00000000u; // 8007D3CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D3D0
  c->lr=c->r[0]; // 8007D3D4
  c->r[1]=c->r[1]+0x00000010u; // 8007D3D8
  return; // 8007D3DC
}

// fn_8007D3E0
void f_8007D3E0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[13]+0xFFFF90E0u); // 8007D3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8007D3E4
  if (!crb(c,2)) return; // 8007D3E8
  c->r[3]=0u+0x801B0000u; // 8007D3EC
  c->r[3]=c->r[3]+0x00007980u; // 8007D3F0
  c->r[12]=R32(c->r[3]+0x00000004u); // 8007D3F4
  cmps(c,0,(int32_t)c->r[12],0); // 8007D3F8
  if (crb(c,2)) return; // 8007D3FC
  c->ctr=c->r[12]; // 8007D400
  if (true) { dispatch(c,c->ctr); return; } // 8007D404
}

// fn_8007D408
void f_8007D408(Ctx* __restrict c) {
  return; // 8007D408
}

// TRKPollUART
void f_8007D40C(Ctx* __restrict c) {
  trace_call(0x8007D40Cu);
  c->r[3]=0u+0x801B0000u; // 8007D40C
  c->r[3]=c->r[3]+0x00007980u; // 8007D410
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8007D414
  c->ctr=c->r[12]; // 8007D418
  if (true) { dispatch(c,c->ctr); return; } // 8007D41C
}

// TRKReadUARTN
void f_8007D420(Ctx* __restrict c) {
  trace_call(0x8007D420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D420
  c->r[0]=c->lr; // 8007D424
  c->r[5]=0u+0x801B0000u; // 8007D428
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D42C
  c->r[5]=c->r[5]+0x00007980u; // 8007D430
  c->r[12]=R32(c->r[5]+0x00000010u); // 8007D434
  c->ctr=c->r[12]; // 8007D438
  if (true) { c->lr=0x8007D440u; dispatch(c,c->ctr); } // 8007D43C
  c->r[0]=0u-c->r[3]; // 8007D440
  c->r[0]=c->r[0]|c->r[3]; // 8007D444
  c->r[3]=sraw(c,c->r[0],31); // 8007D448
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D44C
  c->lr=c->r[0]; // 8007D450
  c->r[1]=c->r[1]+0x00000010u; // 8007D454
  return; // 8007D458
}

// TRK_WriteUARTN
void f_8007D45C(Ctx* __restrict c) {
  trace_call(0x8007D45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D45C
  c->r[0]=c->lr; // 8007D460
  c->r[5]=0u+0x801B0000u; // 8007D464
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D468
  c->r[5]=c->r[5]+0x00007980u; // 8007D46C
  c->r[12]=R32(c->r[5]+0x00000014u); // 8007D470
  c->ctr=c->r[12]; // 8007D474
  if (true) { c->lr=0x8007D47Cu; dispatch(c,c->ctr); } // 8007D478
  c->r[0]=0u-c->r[3]; // 8007D47C
  c->r[0]=c->r[0]|c->r[3]; // 8007D480
  c->r[3]=sraw(c,c->r[0],31); // 8007D484
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D488
  c->lr=c->r[0]; // 8007D48C
  c->r[1]=c->r[1]+0x00000010u; // 8007D490
  return; // 8007D494
}

// ReserveEXI2Port
void f_8007D498(Ctx* __restrict c) {
  trace_call(0x8007D498u);
  c->r[3]=0u+0x801B0000u; // 8007D498
  c->r[3]=c->r[3]+0x00007980u; // 8007D49C
  c->r[12]=R32(c->r[3]+0x00000024u); // 8007D4A0
  c->ctr=c->r[12]; // 8007D4A4
  if (true) { dispatch(c,c->ctr); return; } // 8007D4A8
}

// UnreserveEXI2Port
void f_8007D4AC(Ctx* __restrict c) {
  trace_call(0x8007D4ACu);
  c->r[3]=0u+0x801B0000u; // 8007D4AC
  c->r[3]=c->r[3]+0x00007980u; // 8007D4B0
  c->r[12]=R32(c->r[3]+0x00000020u); // 8007D4B4
  c->ctr=c->r[12]; // 8007D4B8
  if (true) { dispatch(c,c->ctr); return; } // 8007D4BC
}

// TRK_board_display
void f_8007D4C0(Ctx* __restrict c) {
  trace_call(0x8007D4C0u);
  c->r[5]=0u+0x80150000u; // 8007D4C0
  c->r[4]=c->r[3]|c->r[3]; // 8007D4C4
  c->r[5]=c->r[5]+0xFFFFE058u; // 8007D4C8
  c->r[3]=c->r[5]+0x000000DDu; // 8007D4CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007D4D0
  f_80045C80(c); return; // 8007D4D4
}

// InitializeProgramEndTrap
void f_8007D4D8(Ctx* __restrict c) {
  trace_call(0x8007D4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D4D8
  c->r[0]=c->lr; // 8007D4DC
  c->r[4]=c->r[2]+0xFFFF8758u; // 8007D4E0
  c->r[5]=0u+0x00000004u; // 8007D4E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D4E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D4EC
  c->r[31]=0u+0x80040000u; // 8007D4F0
  c->r[31]=c->r[31]+0x000027A0u; // 8007D4F4
  c->r[3]=c->r[31]+0x00000004u; // 8007D4F8
  c->lr=0x8007D500u; f_8007CAE8(c); // 8007D4FC
  c->r[3]=c->r[31]+0x00000004u; // 8007D500
  c->r[4]=0u+0x00000004u; // 8007D504
  c->lr=0x8007D50Cu; f_800450D0(c); // 8007D508
  c->r[3]=c->r[31]+0x00000004u; // 8007D50C
  c->r[4]=0u+0x00000004u; // 8007D510
  c->lr=0x8007D518u; f_80045010(c); // 8007D514
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D51C
  c->lr=c->r[0]; // 8007D520
  c->r[1]=c->r[1]+0x00000010u; // 8007D524
  return; // 8007D528
}

// TRKDoNotifyStopped
void f_8007D52C(Ctx* __restrict c) {
  trace_call(0x8007D52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D52C
  c->r[0]=c->lr; // 8007D530
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D534
  c->r[4]=c->r[1]+0x00000008u; // 8007D538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007D53C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007D540
  c->r[30]=c->r[3]|c->r[3]; // 8007D544
  c->r[3]=c->r[1]+0x0000000Cu; // 8007D548
  c->lr=0x8007D550u; f_8007E410(c); // 8007D54C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D550
  c->r[31]=c->r[3]|c->r[3]; // 8007D554
  if (!crb(c,2)) { goto L_8007D5A0; } // 8007D558
  cmps(c,0,(int32_t)c->r[30],144); // 8007D55C
  if (!crb(c,2)) { goto L_8007D570; } // 8007D560
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D564
  c->lr=0x8007D56Cu; f_80080994(c); // 8007D568
  goto L_8007D578; // 8007D56C
L_8007D570:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D570
  c->lr=0x8007D578u; f_80080B94(c); // 8007D574
L_8007D578:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D578
  c->r[4]=c->r[1]+0x00000010u; // 8007D57C
  c->lr=0x8007D584u; f_8007DC00(c); // 8007D580
  cmps(c,0,(int32_t)c->r[3],0); // 8007D584
  c->r[31]=c->r[3]|c->r[3]; // 8007D588
  if (!crb(c,2)) { goto L_8007D598; } // 8007D58C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007D590
  c->lr=0x8007D598u; f_8007E4D0(c); // 8007D594
L_8007D598:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007D598
  c->lr=0x8007D5A0u; f_8007E4D0(c); // 8007D59C
L_8007D5A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D5A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007D5A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007D5A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D5AC
  c->lr=c->r[0]; // 8007D5B0
  c->r[1]=c->r[1]+0x00000020u; // 8007D5B4
  return; // 8007D5B8
}

// TRKInitializeEventQueue
void f_8007D5BC(Ctx* __restrict c) {
  trace_call(0x8007D5BCu);
  c->r[3]=0u+0x801B0000u; // 8007D5BC
  c->r[5]=0u+0x00000000u; // 8007D5C0
  c->r[4]=c->r[3]+0x000079A8u; // 8007D5C4
  c->r[0]=0u+0x00000100u; // 8007D5C8
  W32(c->r[3]+0x000079A8u,c->r[5]); // 8007D5CC
  c->r[3]=0u+0x00000000u; // 8007D5D0
  W32(c->r[4]+0x00000004u,c->r[5]); // 8007D5D4
  W32(c->r[4]+0x00000020u,c->r[0]); // 8007D5D8
  return; // 8007D5DC
}

// TRKGetNextEvent
void f_8007D5E0(Ctx* __restrict c) {
  trace_call(0x8007D5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D5E0
  c->r[0]=c->lr; // 8007D5E4
  c->r[4]=0u+0x00000000u; // 8007D5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D5EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D5F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D5F4
  c->r[30]=0u+0x801B0000u; // 8007D5F8
  c->r[0]=R32(c->r[30]+0x000079A8u); // 8007D5FC
  cmps(c,0,(int32_t)c->r[0],0); // 8007D600
  if (!crb(c,1)) { goto L_8007D650; } // 8007D604
  c->r[31]=c->r[30]+0x000079A8u; // 8007D608
  c->r[5]=0u+0x0000000Cu; // 8007D60C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8007D610
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007D614
  c->r[4]=c->r[31]+c->r[0]; // 8007D618
  c->r[4]=c->r[4]+0x00000008u; // 8007D61C
  c->lr=0x8007D624u; f_8007CAE8(c); // 8007D620
  c->r[3]=R32(c->r[31]+0x00000004u); // 8007D624
  c->r[4]=R32(c->r[30]+0x000079A8u); // 8007D628
  c->r[0]=c->r[3]+0x00000001u; // 8007D62C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8007D630
  cmps(c,0,(int32_t)c->r[0],2); // 8007D634
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8007D638
  W32(c->r[30]+0x000079A8u,c->r[0]); // 8007D63C
  if (!crb(c,2)) { goto L_8007D64C; } // 8007D640
  c->r[0]=0u+0x00000000u; // 8007D644
  W32(c->r[31]+0x00000004u,c->r[0]); // 8007D648
L_8007D64C:;
  c->r[4]=0u+0x00000001u; // 8007D64C
L_8007D650:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D650
  c->r[3]=c->r[4]|c->r[4]; // 8007D654
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D658
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D65C
  c->lr=c->r[0]; // 8007D660
  c->r[1]=c->r[1]+0x00000010u; // 8007D664
  return; // 8007D668
}

// TRKPostEvent
void f_8007D66C(Ctx* __restrict c) {
  trace_call(0x8007D66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D66C
  c->r[0]=c->lr; // 8007D670
  c->r[4]=0u+0x801B0000u; // 8007D674
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007D67C
  c->r[31]=0u+0x00000000u; // 8007D680
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007D684
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007D688
  c->r[6]=R32(c->r[4]+0x000079A8u); // 8007D68C
  cmps(c,0,(int32_t)c->r[6],2); // 8007D690
  if (!crb(c,2)) { goto L_8007D6AC; } // 8007D694
  c->r[3]=0u+0x80150000u; // 8007D698
  c->r[31]=0u+0x00000100u; // 8007D69C
  c->r[3]=c->r[3]+0xFFFFE140u; // 8007D6A0
  c->lr=0x8007D6A8u; f_80045C80(c); // 8007D6A4
  goto L_8007D718; // 8007D6A8
L_8007D6AC:;
  c->r[30]=c->r[4]+0x000079A8u; // 8007D6AC
  c->r[4]=c->r[3]|c->r[3]; // 8007D6B0
  c->r[0]=R32(c->r[30]+0x00000004u); // 8007D6B4
  c->r[5]=0u+0x0000000Cu; // 8007D6B8
  c->r[0]=c->r[0]+c->r[6]; // 8007D6BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8007D6C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8007D6C4
  c->r[0]=c->r[0]^c->r[3]; // 8007D6C8
  c->r[0]=c->r[0]-c->r[3]; // 8007D6CC
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007D6D0
  c->r[3]=c->r[30]+c->r[29]; // 8007D6D4
  c->r[3]=c->r[3]+0x00000008u; // 8007D6D8
  c->lr=0x8007D6E0u; f_8007CAE8(c); // 8007D6DC
  c->r[3]=c->r[30]+c->r[29]; // 8007D6E0
  c->r[0]=R32(c->r[30]+0x00000020u); // 8007D6E4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8007D6E8
  c->r[3]=R32(c->r[30]+0x00000020u); // 8007D6EC
  c->r[0]=c->r[3]+0x00000001u; // 8007D6F0
  W32(c->r[30]+0x00000020u,c->r[0]); // 8007D6F4
  cmpu(c,0,c->r[0],0x00000100u); // 8007D6F8
  if (!crb(c,0)) { goto L_8007D708; } // 8007D6FC
  c->r[0]=0u+0x00000100u; // 8007D700
  W32(c->r[30]+0x00000020u,c->r[0]); // 8007D704
L_8007D708:;
  c->r[4]=0u+0x801B0000u; // 8007D708
  c->r[3]=R32(c->r[4]+0x000079A8u); // 8007D70C
  c->r[0]=c->r[3]+0x00000001u; // 8007D710
  W32(c->r[4]+0x000079A8u,c->r[0]); // 8007D714
L_8007D718:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D718
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007D71C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007D720
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007D724
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D728
  c->lr=c->r[0]; // 8007D72C
  c->r[1]=c->r[1]+0x00000020u; // 8007D730
  return; // 8007D734
}

// TRKConstructEvent
void f_8007D738(Ctx* __restrict c) {
  trace_call(0x8007D738u);
  c->r[5]=0u+0x00000000u; // 8007D738
  c->r[0]=0u+0xFFFFFFFFu; // 8007D73C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8007D740
  W32(c->r[3]+0x00000004u,c->r[5]); // 8007D744
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007D748
  return; // 8007D74C
}

// TRKDestructEvent
void f_8007D750(Ctx* __restrict c) {
  trace_call(0x8007D750u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007D750
  f_8007E4D0(c); return; // 8007D754
}

// TRKInitializeNub
void f_8007D758(Ctx* __restrict c) {
  trace_call(0x8007D758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D758
  c->r[0]=c->lr; // 8007D75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D764
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D768
  c->lr=0x8007D770u; f_8007D834(c); // 8007D76C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D770
  c->r[31]=c->r[3]|c->r[3]; // 8007D774
  if (!crb(c,2)) { goto L_8007D784; } // 8007D778
  c->lr=0x8007D780u; f_8007D5BC(c); // 8007D77C
  c->r[31]=c->r[3]|c->r[3]; // 8007D780
L_8007D784:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007D784
  if (!crb(c,2)) { goto L_8007D794; } // 8007D788
  c->lr=0x8007D790u; f_8007E3F0(c); // 8007D78C
  c->r[31]=c->r[3]|c->r[3]; // 8007D790
L_8007D794:;
  c->lr=0x8007D798u; f_8007D4D8(c); // 8007D794
  cmps(c,0,(int32_t)c->r[31],0); // 8007D798
  if (!crb(c,2)) { goto L_8007D7A8; } // 8007D79C
  c->lr=0x8007D7A4u; f_8007D9E0(c); // 8007D7A0
  c->r[31]=c->r[3]|c->r[3]; // 8007D7A4
L_8007D7A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007D7A8
  if (!crb(c,2)) { goto L_8007D7B8; } // 8007D7AC
  c->lr=0x8007D7B4u; f_8007D138(c); // 8007D7B0
  c->r[31]=c->r[3]|c->r[3]; // 8007D7B4
L_8007D7B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007D7B8
  if (!crb(c,2)) { goto L_8007D7E8; } // 8007D7BC
  c->r[3]=0u+0x00000001u; // 8007D7C0
  c->r[4]=0u+0x00000000u; // 8007D7C4
  c->r[5]=c->r[13]+0xFFFF90F0u; // 8007D7C8
  c->lr=0x8007D7D0u; f_8007D38C(c); // 8007D7CC
  c->r[30]=c->r[3]|c->r[3]; // 8007D7D0
  c->r[3]=R32(c->r[13]+0xFFFF90F0u); // 8007D7D4
  c->lr=0x8007D7DCu; f_80081488(c); // 8007D7D8
  cmps(c,0,(int32_t)c->r[30],0); // 8007D7DC
  if (crb(c,2)) { goto L_8007D7E8; } // 8007D7E0
  c->r[31]=c->r[30]|c->r[30]; // 8007D7E4
L_8007D7E8:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D7E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D7EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D7F4
  c->lr=c->r[0]; // 8007D7F8
  c->r[1]=c->r[1]+0x00000010u; // 8007D7FC
  return; // 8007D800
}

// TRKTerminateNub
void f_8007D804(Ctx* __restrict c) {
  trace_call(0x8007D804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D804
  c->r[0]=c->lr; // 8007D808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D80C
  c->lr=0x8007D814u; f_8007D9E8(c); // 8007D810
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D814
  c->r[3]=0u+0x00000000u; // 8007D818
  c->lr=c->r[0]; // 8007D81C
  c->r[1]=c->r[1]+0x00000010u; // 8007D820
  return; // 8007D824
}

// TRKNubWelcome
void f_8007D828(Ctx* __restrict c) {
  trace_call(0x8007D828u);
  c->r[3]=0u+0x80150000u; // 8007D828
  c->r[3]=c->r[3]+0xFFFFE160u; // 8007D82C
  f_8007D4C0(c); return; // 8007D830
}

// TRKInitializeEndian
void f_8007D834(Ctx* __restrict c) {
  trace_call(0x8007D834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D834
  c->r[3]=0u+0x00000012u; // 8007D838
  c->r[5]=0u+0x00000034u; // 8007D83C
  c->r[4]=0u+0x00000056u; // 8007D840
  c->r[0]=0u+0x00000078u; // 8007D844
  W8(c->r[1]+0x00000008u,c->r[3]); // 8007D848
  c->r[6]=0u+0x00000001u; // 8007D84C
  c->r[3]=0u+0x00000000u; // 8007D850
  W8(c->r[1]+0x00000009u,c->r[5]); // 8007D854
  W8(c->r[1]+0x0000000Au,c->r[4]); // 8007D858
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8007D85C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8007D860
  W32(c->r[13]+0xFFFF90E8u,c->r[6]); // 8007D864
  c->r[0]=c->r[4]+0xEDCC0000u; // 8007D868
  cmpu(c,0,c->r[0],0x00005678u); // 8007D86C
  if (!crb(c,2)) { goto L_8007D87C; } // 8007D870
  W32(c->r[13]+0xFFFF90E8u,c->r[6]); // 8007D874
  goto L_8007D8A0; // 8007D878
L_8007D87C:;
  c->r[0]=c->r[4]+0x87AA0000u; // 8007D87C
  cmpu(c,0,c->r[0],0x00003412u); // 8007D880
  if (!crb(c,2)) { goto L_8007D890; } // 8007D884
  c->r[0]=0u+0x00000000u; // 8007D888
  W32(c->r[13]+0xFFFF90E8u,c->r[0]); // 8007D88C
L_8007D890:;
  c->r[0]=c->r[4]+0x87AA0000u; // 8007D890
  cmpu(c,0,c->r[0],0x00003412u); // 8007D894
  if (crb(c,2)) { goto L_8007D8A0; } // 8007D898
  c->r[3]=0u+0x00000001u; // 8007D89C
L_8007D8A0:;
  c->r[1]=c->r[1]+0x00000010u; // 8007D8A0
  return; // 8007D8A4
}

// TRKTestForPacket
void f_8007D8A8(Ctx* __restrict c) {
  trace_call(0x8007D8A8u);
  {uint32_t ea=c->r[1]+0xFFFFF720u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D8A8
  c->r[0]=c->lr; // 8007D8AC
  W32(c->r[1]+0x000008E4u,c->r[0]); // 8007D8B0
  W32(c->r[1]+0x000008DCu,c->r[31]); // 8007D8B4
  c->lr=0x8007D8BCu; f_8007D40C(c); // 8007D8B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D8BC
  if (crb(c,1)) { goto L_8007D8CC; } // 8007D8C0
  c->r[3]=0u+0xFFFFFFFFu; // 8007D8C4
  goto L_8007D960; // 8007D8C8
L_8007D8CC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8007D8CC
  c->r[4]=c->r[1]+0x00000008u; // 8007D8D0
  c->lr=0x8007D8D8u; f_8007E410(c); // 8007D8D4
  c->r[31]=c->r[3]|c->r[3]; // 8007D8D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D8DC
  c->r[4]=0u+0x00000000u; // 8007D8E0
  c->lr=0x8007D8E8u; f_8007E520(c); // 8007D8E4
  c->r[3]=c->r[1]+0x00000010u; // 8007D8E8
  c->r[4]=0u+0x00000040u; // 8007D8EC
  c->lr=0x8007D8F4u; f_8007D420(c); // 8007D8F0
  cmps(c,0,(int32_t)c->r[3],0); // 8007D8F4
  if (!crb(c,2)) { goto L_8007D950; } // 8007D8F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D8FC
  c->r[4]=c->r[1]+0x00000010u; // 8007D900
  c->r[5]=0u+0x00000040u; // 8007D904
  c->lr=0x8007D90Cu; f_8007E848(c); // 8007D908
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007D90C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D910
  c->r[4]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[4]); // 8007D914
  if (!crb(c,1)) { goto L_8007D95C; } // 8007D918
  c->r[3]=c->r[1]+0x00000050u; // 8007D91C
  c->lr=0x8007D924u; f_8007D420(c); // 8007D920
  cmps(c,0,(int32_t)c->r[3],0); // 8007D924
  if (!crb(c,2)) { goto L_8007D940; } // 8007D928
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007D92C
  c->r[4]=c->r[1]+0x00000050u; // 8007D930
  c->r[5]=R32(c->r[1]+0x00000010u); // 8007D934
  c->lr=0x8007D93Cu; f_8007E848(c); // 8007D938
  goto L_8007D95C; // 8007D93C
L_8007D940:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D940
  c->lr=0x8007D948u; f_8007E4D0(c); // 8007D944
  c->r[31]=0u+0xFFFFFFFFu; // 8007D948
  goto L_8007D95C; // 8007D94C
L_8007D950:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D950
  c->lr=0x8007D958u; f_8007E4D0(c); // 8007D954
  c->r[31]=0u+0xFFFFFFFFu; // 8007D958
L_8007D95C:;
  c->r[3]=c->r[31]|c->r[31]; // 8007D95C
L_8007D960:;
  c->r[0]=R32(c->r[1]+0x000008E4u); // 8007D960
  c->r[31]=R32(c->r[1]+0x000008DCu); // 8007D964
  c->lr=c->r[0]; // 8007D968
  c->r[1]=c->r[1]+0x000008E0u; // 8007D96C
  return; // 8007D970
}

// TRKGetInput
void f_8007D974(Ctx* __restrict c) {
  trace_call(0x8007D974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D974
  c->r[0]=c->lr; // 8007D978
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D97C
  c->lr=0x8007D984u; f_8007D8A8(c); // 8007D980
  cmps(c,0,(int32_t)c->r[3],-1); // 8007D984
  if (crb(c,2)) { goto L_8007D990; } // 8007D988
  c->lr=0x8007D990u; f_8007D9A0(c); // 8007D98C
L_8007D990:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D990
  c->lr=c->r[0]; // 8007D994
  c->r[1]=c->r[1]+0x00000010u; // 8007D998
  return; // 8007D99C
}

// TRKProcessInput
void f_8007D9A0(Ctx* __restrict c) {
  trace_call(0x8007D9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D9A0
  c->r[0]=c->lr; // 8007D9A4
  c->r[4]=0u+0x00000002u; // 8007D9A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D9AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007D9B0
  c->r[31]=c->r[3]|c->r[3]; // 8007D9B4
  c->r[3]=c->r[1]+0x00000008u; // 8007D9B8
  c->lr=0x8007D9C0u; f_8007D738(c); // 8007D9BC
  W32(c->r[1]+0x00000010u,c->r[31]); // 8007D9C0
  c->r[3]=c->r[1]+0x00000008u; // 8007D9C4
  c->lr=0x8007D9CCu; f_8007D66C(c); // 8007D9C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D9CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007D9D0
  c->lr=c->r[0]; // 8007D9D4
  c->r[1]=c->r[1]+0x00000020u; // 8007D9D8
  return; // 8007D9DC
}

// TRKInitializeSerialHandler
void f_8007D9E0(Ctx* __restrict c) {
  trace_call(0x8007D9E0u);
  c->r[3]=0u+0x00000000u; // 8007D9E0
  return; // 8007D9E4
}

// TRKTerminateSerialHandler
void f_8007D9E8(Ctx* __restrict c) {
  trace_call(0x8007D9E8u);
  c->r[3]=0u+0x00000000u; // 8007D9E8
  return; // 8007D9EC
}

// TRK_strlen
void f_8007D9F0(Ctx* __restrict c) {
  trace_call(0x8007D9F0u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8007D9F0
  c->r[3]=0u+0xFFFFFFFFu; // 8007D9F4
L_8007D9F8:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 8007D9F8
  c->r[3]=c->r[3]+0x00000001u; // 8007D9FC
  cmps(c,0,(int32_t)c->r[0],0); // 8007DA00
  if (!crb(c,2)) { IRQCHK(c); goto L_8007D9F8; } // 8007DA04
  return; // 8007DA08
}

// TRK_SuppAccessFile
void f_8007DA0C(Ctx* __restrict c) {
  trace_call(0x8007DA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DA0C
  c->r[0]=c->lr; // 8007DA10
  cmps(c,0,(int32_t)c->r[4],0); // 8007DA14
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007DA18
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007DA1C
  c->r[24]=c->r[3]|c->r[3]; // 8007DA20
  c->r[25]=c->r[4]|c->r[4]; // 8007DA24
  c->r[26]=c->r[5]|c->r[5]; // 8007DA28
  c->r[27]=c->r[6]|c->r[6]; // 8007DA2C
  c->r[28]=c->r[7]|c->r[7]; // 8007DA30
  c->r[29]=c->r[8]|c->r[8]; // 8007DA34
  if (crb(c,2)) { goto L_8007DA48; } // 8007DA38
  c->r[0]=R32(c->r[5]+0x00000000u); // 8007DA3C
  cmps(c,0,(int32_t)c->r[0],0); // 8007DA40
  if (!crb(c,2)) { goto L_8007DA50; } // 8007DA44
L_8007DA48:;
  c->r[3]=0u+0x00000002u; // 8007DA48
  goto L_8007DBEC; // 8007DA4C
L_8007DA50:;
  c->r[30]=0u+0x00000000u; // 8007DA50
  W32(c->r[6]+0x00000000u,c->r[30]); // 8007DA54
  c->r[31]=0u+0x00000000u; // 8007DA58
  c->r[23]=0u+0x00000000u; // 8007DA5C
  goto L_8007DBBC; // 8007DA60
L_8007DA64:;
  c->r[3]=c->r[1]+0x00000018u; // 8007DA64
  c->r[4]=0u+0x00000000u; // 8007DA68
  c->r[5]=0u+0x00000040u; // 8007DA6C
  c->lr=0x8007DA74u; f_8007CC24(c); // 8007DA70
  c->r[0]=R32(c->r[26]+0x00000000u); // 8007DA74
  c->r[21]=0u+0x00000800u; // 8007DA78
  c->r[0]=c->r[0]-c->r[31]; // 8007DA7C
  cmpu(c,0,c->r[0],0x00000800u); // 8007DA80
  if (crb(c,1)) { goto L_8007DA8C; } // 8007DA84
  c->r[21]=c->r[0]|c->r[0]; // 8007DA88
L_8007DA8C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007DA8C
  c->r[0]=0u+0x000000D0u; // 8007DA90
  if (crb(c,2)) { goto L_8007DA9C; } // 8007DA94
  c->r[0]=0u+0x000000D1u; // 8007DA98
L_8007DA9C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007DA9C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8007DAA0
  c->r[0]=0u+0x00000040u; // 8007DAA4
  if (!crb(c,2)) { goto L_8007DAB0; } // 8007DAA8
  c->r[0]=c->r[21]+0x00000040u; // 8007DAAC
L_8007DAB0:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 8007DAB0
  c->r[3]=c->r[1]+0x0000000Cu; // 8007DAB4
  c->r[4]=c->r[1]+0x00000008u; // 8007DAB8
  W32(c->r[1]+0x00000020u,c->r[24]); // 8007DABC
  W16(c->r[1]+0x00000024u,c->r[21]); // 8007DAC0
  c->lr=0x8007DAC8u; f_8007E410(c); // 8007DAC4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DAC8
  c->r[4]=c->r[1]+0x00000018u; // 8007DACC
  c->r[5]=0u+0x00000040u; // 8007DAD0
  c->lr=0x8007DAD8u; f_8007E848(c); // 8007DAD4
  cmps(c,0,(int32_t)c->r[29],0); // 8007DAD8
  c->r[23]=c->r[3]|c->r[3]; // 8007DADC
  if (!crb(c,2)) { goto L_8007DB00; } // 8007DAE0
  cmps(c,0,(int32_t)c->r[3],0); // 8007DAE4
  if (!crb(c,2)) { goto L_8007DB00; } // 8007DAE8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DAEC
  c->r[5]=c->r[21]|c->r[21]; // 8007DAF0
  c->r[4]=c->r[25]+c->r[31]; // 8007DAF4
  c->lr=0x8007DAFCu; f_8007E848(c); // 8007DAF8
  c->r[23]=c->r[3]|c->r[3]; // 8007DAFC
L_8007DB00:;
  cmps(c,0,(int32_t)c->r[23],0); // 8007DB00
  if (!crb(c,2)) { goto L_8007DBB0; } // 8007DB04
  cmps(c,0,(int32_t)c->r[28],0); // 8007DB08
  if (crb(c,2)) { goto L_8007DBA4; } // 8007DB0C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DB10
  c->r[4]=c->r[1]+0x00000010u; // 8007DB14
  c->lr=0x8007DB1Cu; f_8007DC00(c); // 8007DB18
  cmps(c,0,(int32_t)c->r[3],0); // 8007DB1C
  c->r[23]=c->r[3]|c->r[3]; // 8007DB20
  if (!crb(c,2)) { goto L_8007DB34; } // 8007DB24
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DB28
  c->lr=0x8007DB30u; f_8007E4AC(c); // 8007DB2C
  c->r[22]=c->r[3]|c->r[3]; // 8007DB30
L_8007DB34:;
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 8007DB34
  cmps(c,0,(int32_t)c->r[29],0); // 8007DB38
  c->r[19]=R16(c->r[22]+0x00000020u); // 8007DB3C
  c->r[20]=rotl(c->r[0],0)&0x000000FFu; // 8007DB40
  if (crb(c,2)) { goto L_8007DB84; } // 8007DB44
  cmps(c,0,(int32_t)c->r[23],0); // 8007DB48
  if (!crb(c,2)) { goto L_8007DB84; } // 8007DB4C
  cmpu(c,0,c->r[19],c->r[21]); // 8007DB50
  if (crb(c,1)) { goto L_8007DB84; } // 8007DB54
  c->r[3]=c->r[22]|c->r[22]; // 8007DB58
  c->r[4]=0u+0x00000040u; // 8007DB5C
  c->lr=0x8007DB64u; f_8007E520(c); // 8007DB60
  c->r[3]=c->r[22]|c->r[22]; // 8007DB64
  c->r[5]=c->r[19]|c->r[19]; // 8007DB68
  c->r[4]=c->r[25]+c->r[31]; // 8007DB6C
  c->lr=0x8007DB74u; f_8007EA7C(c); // 8007DB70
  cmps(c,0,(int32_t)c->r[3],770); // 8007DB74
  c->r[23]=c->r[3]|c->r[3]; // 8007DB78
  if (!crb(c,2)) { goto L_8007DB84; } // 8007DB7C
  c->r[23]=0u+0x00000000u; // 8007DB80
L_8007DB84:;
  cmpu(c,0,c->r[19],c->r[21]); // 8007DB84
  if (crb(c,2)) { goto L_8007DB94; } // 8007DB88
  c->r[21]=c->r[19]|c->r[19]; // 8007DB8C
  c->r[30]=0u+0x00000001u; // 8007DB90
L_8007DB94:;
  W32(c->r[27]+0x00000000u,c->r[20]); // 8007DB94
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DB98
  c->lr=0x8007DBA0u; f_8007E4D0(c); // 8007DB9C
  goto L_8007DBB0; // 8007DBA0
L_8007DBA4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DBA4
  c->lr=0x8007DBACu; f_8007E38C(c); // 8007DBA8
  c->r[23]=c->r[3]|c->r[3]; // 8007DBAC
L_8007DBB0:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007DBB0
  c->lr=0x8007DBB8u; f_8007E4D0(c); // 8007DBB4
  c->r[31]=c->r[31]+c->r[21]; // 8007DBB8
L_8007DBBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007DBBC
  if (!crb(c,2)) { goto L_8007DBE4; } // 8007DBC0
  c->r[0]=R32(c->r[26]+0x00000000u); // 8007DBC4
  cmpu(c,0,c->r[31],c->r[0]); // 8007DBC8
  if (!crb(c,0)) { goto L_8007DBE4; } // 8007DBCC
  cmps(c,0,(int32_t)c->r[23],0); // 8007DBD0
  if (!crb(c,2)) { goto L_8007DBE4; } // 8007DBD4
  c->r[0]=R32(c->r[27]+0x00000000u); // 8007DBD8
  cmps(c,0,(int32_t)c->r[0],0); // 8007DBDC
  if (crb(c,2)) { IRQCHK(c); goto L_8007DA64; } // 8007DBE0
L_8007DBE4:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 8007DBE4
  c->r[3]=c->r[23]|c->r[23]; // 8007DBE8
L_8007DBEC:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007DBEC
  c->r[0]=R32(c->r[1]+0x00000094u); // 8007DBF0
  c->lr=c->r[0]; // 8007DBF4
  c->r[1]=c->r[1]+0x00000090u; // 8007DBF8
  return; // 8007DBFC
}

// TRK_RequestSend
void f_8007DC00(Ctx* __restrict c) {
  trace_call(0x8007DC00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DC00
  c->r[0]=c->lr; // 8007DC04
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007DC08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007DC0C
  c->r[26]=c->r[4]|c->r[4]; // 8007DC10
  c->lr=0x8007DC18u; f_8007E38C(c); // 8007DC14
  cmps(c,0,(int32_t)c->r[3],0); // 8007DC18
  c->r[30]=c->r[3]|c->r[3]; // 8007DC1C
  if (!crb(c,2)) { goto L_8007DCEC; } // 8007DC20
  c->r[27]=0u+0x00000000u; // 8007DC24
  c->r[31]=0u+0xFFFFFFFFu; // 8007DC28
L_8007DC2C:;
  c->lr=0x8007DC30u; f_8007D8A8(c); // 8007DC2C
  cmps(c,0,(int32_t)c->r[3],-1); // 8007DC30
  W32(c->r[26]+0x00000000u,c->r[3]); // 8007DC34
  if (crb(c,2)) { IRQCHK(c); goto L_8007DC2C; } // 8007DC38
  c->lr=0x8007DC40u; f_8007E4AC(c); // 8007DC3C
  c->r[29]=c->r[3]|c->r[3]; // 8007DC40
  c->r[4]=0u+0x00000000u; // 8007DC44
  c->lr=0x8007DC4Cu; f_8007E520(c); // 8007DC48
  c->r[28]=R8(c->r[29]+0x00000010u); // 8007DC4C
  cmpu(c,0,c->r[28],0x00000080u); // 8007DC50
  if (!crb(c,0)) { goto L_8007DC68; } // 8007DC54
  c->r[3]=R32(c->r[26]+0x00000000u); // 8007DC58
  c->lr=0x8007DC60u; f_8007D9A0(c); // 8007DC5C
  W32(c->r[26]+0x00000000u,c->r[31]); // 8007DC60
  IRQCHK(c); goto L_8007DC2C; // 8007DC64
L_8007DC68:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8007DC68
  cmps(c,0,(int32_t)c->r[0],-1); // 8007DC6C
  if (crb(c,2)) { goto L_8007DCEC; } // 8007DC70
  c->r[4]=R32(c->r[29]+0x00000004u); // 8007DC74
  cmpu(c,0,c->r[4],0x00000040u); // 8007DC78
  if (!crb(c,0)) { goto L_8007DC94; } // 8007DC7C
  c->r[3]=0u+0x80150000u; // 8007DC80
  c->r[3]=c->r[3]+0xFFFFE180u; // 8007DC84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007DC88
  c->lr=0x8007DC90u; f_80045C80(c); // 8007DC8C
  c->r[27]=0u+0x00000001u; // 8007DC90
L_8007DC94:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007DC94
  if (!crb(c,2)) { goto L_8007DCA8; } // 8007DC98
  cmps(c,0,(int32_t)c->r[27],0); // 8007DC9C
  if (!crb(c,2)) { goto L_8007DCA8; } // 8007DCA0
  c->r[31]=R8(c->r[29]+0x00000014u); // 8007DCA4
L_8007DCA8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007DCA8
  if (!crb(c,2)) { goto L_8007DCCC; } // 8007DCAC
  cmps(c,0,(int32_t)c->r[27],0); // 8007DCB0
  if (!crb(c,2)) { goto L_8007DCCC; } // 8007DCB4
  cmps(c,0,(int32_t)c->r[28],128); // 8007DCB8
  if (!crb(c,2)) { goto L_8007DCC8; } // 8007DCBC
  cmps(c,0,(int32_t)c->r[31],0); // 8007DCC0
  if (crb(c,2)) { goto L_8007DCCC; } // 8007DCC4
L_8007DCC8:;
  c->r[27]=0u+0x00000001u; // 8007DCC8
L_8007DCCC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007DCCC
  if (!crb(c,2)) { goto L_8007DCDC; } // 8007DCD0
  cmps(c,0,(int32_t)c->r[27],0); // 8007DCD4
  if (crb(c,2)) { goto L_8007DCEC; } // 8007DCD8
L_8007DCDC:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8007DCDC
  c->lr=0x8007DCE4u; f_8007E4D0(c); // 8007DCE0
  c->r[0]=0u+0xFFFFFFFFu; // 8007DCE4
  W32(c->r[26]+0x00000000u,c->r[0]); // 8007DCE8
L_8007DCEC:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8007DCEC
  cmps(c,0,(int32_t)c->r[0],-1); // 8007DCF0
  if (!crb(c,2)) { goto L_8007DD10; } // 8007DCF4
  c->r[3]=0u+0x80150000u; // 8007DCF8
  c->r[3]=c->r[3]+0xFFFFE180u; // 8007DCFC
  c->r[3]=c->r[3]+0x0000001Fu; // 8007DD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007DD04
  c->lr=0x8007DD0Cu; f_80045C80(c); // 8007DD08
  c->r[30]=0u+0x00000800u; // 8007DD0C
L_8007DD10:;
  c->r[3]=c->r[30]|c->r[30]; // 8007DD10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007DD14
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007DD18
  c->lr=c->r[0]; // 8007DD1C
  c->r[1]=c->r[1]+0x00000020u; // 8007DD20
  return; // 8007DD24
}

// HandleOpenFileSupportRequest
void f_8007DD28(Ctx* __restrict c) {
  trace_call(0x8007DD28u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DD28
  c->r[0]=c->lr; // 8007DD2C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8007DD30
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007DD34
  c->r[27]=c->r[3]|c->r[3]; // 8007DD38
  c->r[30]=c->r[4]|c->r[4]; // 8007DD3C
  c->r[28]=c->r[5]|c->r[5]; // 8007DD40
  c->r[29]=c->r[6]|c->r[6]; // 8007DD44
  c->r[3]=c->r[1]+0x00000018u; // 8007DD48
  c->r[4]=0u+0x00000000u; // 8007DD4C
  c->r[5]=0u+0x00000040u; // 8007DD50
  c->lr=0x8007DD58u; f_8007CC24(c); // 8007DD54
  c->r[0]=0u+0x00000000u; // 8007DD58
  W32(c->r[28]+0x00000000u,c->r[0]); // 8007DD5C
  c->r[0]=0u+0x000000D2u; // 8007DD60
  c->r[3]=c->r[27]|c->r[27]; // 8007DD64
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8007DD68
  c->lr=0x8007DD70u; f_8007D9F0(c); // 8007DD6C
  c->r[0]=c->r[3]+0x00000041u; // 8007DD70
  W32(c->r[1]+0x00000018u,c->r[0]); // 8007DD74
  c->r[3]=c->r[27]|c->r[27]; // 8007DD78
  W8(c->r[1]+0x00000020u,c->r[30]); // 8007DD7C
  c->lr=0x8007DD84u; f_8007D9F0(c); // 8007DD80
  c->r[0]=c->r[3]+0x00000001u; // 8007DD84
  W16(c->r[1]+0x00000024u,c->r[0]); // 8007DD88
  c->r[3]=c->r[1]+0x0000000Cu; // 8007DD8C
  c->r[4]=c->r[1]+0x00000008u; // 8007DD90
  c->lr=0x8007DD98u; f_8007E410(c); // 8007DD94
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DD98
  c->r[4]=c->r[1]+0x00000018u; // 8007DD9C
  c->r[5]=0u+0x00000040u; // 8007DDA0
  c->lr=0x8007DDA8u; f_8007E848(c); // 8007DDA4
  cmps(c,0,(int32_t)c->r[3],0); // 8007DDA8
  c->r[31]=c->r[3]|c->r[3]; // 8007DDAC
  if (!crb(c,2)) { goto L_8007DDD4; } // 8007DDB0
  c->r[3]=c->r[27]|c->r[27]; // 8007DDB4
  c->lr=0x8007DDBCu; f_8007D9F0(c); // 8007DDB8
  c->r[5]=c->r[3]|c->r[3]; // 8007DDBC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DDC0
  c->r[4]=c->r[27]|c->r[27]; // 8007DDC4
  c->r[5]=c->r[5]+0x00000001u; // 8007DDC8
  c->lr=0x8007DDD0u; f_8007E848(c); // 8007DDCC
  c->r[31]=c->r[3]|c->r[3]; // 8007DDD0
L_8007DDD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007DDD4
  if (!crb(c,2)) { goto L_8007DE20; } // 8007DDD8
  c->r[0]=0u+0x00000000u; // 8007DDDC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DDE0
  c->r[4]=c->r[1]+0x00000010u; // 8007DDE4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DDE8
  c->lr=0x8007DDF0u; f_8007DC00(c); // 8007DDEC
  cmps(c,0,(int32_t)c->r[3],0); // 8007DDF0
  c->r[31]=c->r[3]|c->r[3]; // 8007DDF4
  if (!crb(c,2)) { goto L_8007DE08; } // 8007DDF8
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DDFC
  c->lr=0x8007DE04u; f_8007E4AC(c); // 8007DE00
  c->r[30]=c->r[3]|c->r[3]; // 8007DE04
L_8007DE08:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8007DE08
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DE0C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8007DE10
  W32(c->r[28]+0x00000000u,c->r[0]); // 8007DE14
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DE18
  c->lr=0x8007DE20u; f_8007E4D0(c); // 8007DE1C
L_8007DE20:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007DE20
  c->lr=0x8007DE28u; f_8007E4D0(c); // 8007DE24
  c->r[3]=c->r[31]|c->r[31]; // 8007DE28
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007DE2C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8007DE30
  c->lr=c->r[0]; // 8007DE34
  c->r[1]=c->r[1]+0x00000070u; // 8007DE38
  return; // 8007DE3C
}

// HandleCloseFileSupportRequest
void f_8007DE40(Ctx* __restrict c) {
  trace_call(0x8007DE40u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DE40
  c->r[0]=c->lr; // 8007DE44
  c->r[5]=0u+0x00000040u; // 8007DE48
  W32(c->r[1]+0x00000074u,c->r[0]); // 8007DE4C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8007DE50
  W32(c->r[1]+0x00000068u,c->r[30]); // 8007DE54
  c->r[30]=c->r[3]|c->r[3]; // 8007DE58
  c->r[3]=c->r[1]+0x00000018u; // 8007DE5C
  W32(c->r[1]+0x00000064u,c->r[29]); // 8007DE60
  c->r[29]=c->r[4]|c->r[4]; // 8007DE64
  c->r[4]=0u+0x00000000u; // 8007DE68
  c->lr=0x8007DE70u; f_8007CC24(c); // 8007DE6C
  c->r[3]=0u+0x000000D3u; // 8007DE70
  c->r[0]=0u+0x00000040u; // 8007DE74
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 8007DE78
  c->r[3]=c->r[1]+0x0000000Cu; // 8007DE7C
  c->r[4]=c->r[1]+0x00000008u; // 8007DE80
  W32(c->r[1]+0x00000018u,c->r[0]); // 8007DE84
  W32(c->r[1]+0x00000020u,c->r[30]); // 8007DE88
  c->lr=0x8007DE90u; f_8007E410(c); // 8007DE8C
  cmps(c,0,(int32_t)c->r[3],0); // 8007DE90
  c->r[31]=c->r[3]|c->r[3]; // 8007DE94
  if (!crb(c,2)) { goto L_8007DEB0; } // 8007DE98
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DE9C
  c->r[4]=c->r[1]+0x00000018u; // 8007DEA0
  c->r[5]=0u+0x00000040u; // 8007DEA4
  c->lr=0x8007DEACu; f_8007E848(c); // 8007DEA8
  c->r[31]=c->r[3]|c->r[3]; // 8007DEAC
L_8007DEB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007DEB0
  if (!crb(c,2)) { goto L_8007DEFC; } // 8007DEB4
  c->r[0]=0u+0x00000000u; // 8007DEB8
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DEBC
  c->r[4]=c->r[1]+0x00000010u; // 8007DEC0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DEC4
  c->lr=0x8007DECCu; f_8007DC00(c); // 8007DEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8007DECC
  c->r[31]=c->r[3]|c->r[3]; // 8007DED0
  if (!crb(c,2)) { goto L_8007DEE4; } // 8007DED4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DED8
  c->lr=0x8007DEE0u; f_8007E4AC(c); // 8007DEDC
  c->r[30]=c->r[3]|c->r[3]; // 8007DEE0
L_8007DEE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007DEE4
  if (!crb(c,2)) { goto L_8007DEF4; } // 8007DEE8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8007DEEC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DEF0
L_8007DEF4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DEF4
  c->lr=0x8007DEFCu; f_8007E4D0(c); // 8007DEF8
L_8007DEFC:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007DEFC
  c->lr=0x8007DF04u; f_8007E4D0(c); // 8007DF00
  c->r[3]=c->r[31]|c->r[31]; // 8007DF04
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8007DF08
  c->r[30]=R32(c->r[1]+0x00000068u); // 8007DF0C
  c->r[29]=R32(c->r[1]+0x00000064u); // 8007DF10
  c->r[0]=R32(c->r[1]+0x00000074u); // 8007DF14
  c->lr=c->r[0]; // 8007DF18
  c->r[1]=c->r[1]+0x00000070u; // 8007DF1C
  return; // 8007DF20
}

// HandlePositionFileSupportRequest
void f_8007DF24(Ctx* __restrict c) {
  trace_call(0x8007DF24u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DF24
  c->r[0]=c->lr; // 8007DF28
  W32(c->r[1]+0x00000074u,c->r[0]); // 8007DF2C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8007DF30
  c->r[31]=c->r[5]|c->r[5]; // 8007DF34
  c->r[5]=0u+0x00000040u; // 8007DF38
  W32(c->r[1]+0x00000068u,c->r[30]); // 8007DF3C
  c->r[30]=c->r[6]|c->r[6]; // 8007DF40
  W32(c->r[1]+0x00000064u,c->r[29]); // 8007DF44
  c->r[29]=c->r[4]|c->r[4]; // 8007DF48
  c->r[4]=0u+0x00000000u; // 8007DF4C
  W32(c->r[1]+0x00000060u,c->r[28]); // 8007DF50
  c->r[28]=c->r[3]|c->r[3]; // 8007DF54
  c->r[3]=c->r[1]+0x00000018u; // 8007DF58
  c->lr=0x8007DF60u; f_8007CC24(c); // 8007DF5C
  c->r[3]=0u+0x000000D4u; // 8007DF60
  c->r[0]=0u+0x00000040u; // 8007DF64
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 8007DF68
  c->r[3]=c->r[1]+0x0000000Cu; // 8007DF6C
  c->r[4]=c->r[1]+0x00000008u; // 8007DF70
  W32(c->r[1]+0x00000018u,c->r[0]); // 8007DF74
  W32(c->r[1]+0x00000020u,c->r[28]); // 8007DF78
  c->r[0]=R32(c->r[29]+0x00000000u); // 8007DF7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007DF80
  W8(c->r[1]+0x00000028u,c->r[31]); // 8007DF84
  c->lr=0x8007DF8Cu; f_8007E410(c); // 8007DF88
  cmps(c,0,(int32_t)c->r[3],0); // 8007DF8C
  c->r[31]=c->r[3]|c->r[3]; // 8007DF90
  if (!crb(c,2)) { goto L_8007DFAC; } // 8007DF94
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DF98
  c->r[4]=c->r[1]+0x00000018u; // 8007DF9C
  c->r[5]=0u+0x00000040u; // 8007DFA0
  c->lr=0x8007DFA8u; f_8007E848(c); // 8007DFA4
  c->r[31]=c->r[3]|c->r[3]; // 8007DFA8
L_8007DFAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007DFAC
  if (!crb(c,2)) { goto L_8007E004; } // 8007DFB0
  c->r[0]=0u+0x00000000u; // 8007DFB4
  W32(c->r[30]+0x00000000u,c->r[0]); // 8007DFB8
  c->r[0]=0u+0xFFFFFFFFu; // 8007DFBC
  c->r[4]=c->r[1]+0x00000010u; // 8007DFC0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DFC4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007DFC8
  c->lr=0x8007DFD0u; f_8007DC00(c); // 8007DFCC
  cmps(c,0,(int32_t)c->r[3],0); // 8007DFD0
  c->r[31]=c->r[3]|c->r[3]; // 8007DFD4
  if (!crb(c,2)) { goto L_8007DFFC; } // 8007DFD8
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DFDC
  c->lr=0x8007DFE4u; f_8007E4AC(c); // 8007DFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8007DFE4
  if (crb(c,2)) { goto L_8007DFFC; } // 8007DFE8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8007DFEC
  W32(c->r[30]+0x00000000u,c->r[0]); // 8007DFF0
  c->r[0]=R32(c->r[3]+0x00000024u); // 8007DFF4
  W32(c->r[29]+0x00000000u,c->r[0]); // 8007DFF8
L_8007DFFC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8007DFFC
  c->lr=0x8007E004u; f_8007E4D0(c); // 8007E000
L_8007E004:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8007E004
  c->lr=0x8007E00Cu; f_8007E4D0(c); // 8007E008
  c->r[3]=c->r[31]|c->r[31]; // 8007E00C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8007E010
  c->r[30]=R32(c->r[1]+0x00000068u); // 8007E014
  c->r[29]=R32(c->r[1]+0x00000064u); // 8007E018
  c->r[28]=R32(c->r[1]+0x00000060u); // 8007E01C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8007E020
  c->lr=c->r[0]; // 8007E024
  c->r[1]=c->r[1]+0x00000070u; // 8007E028
  return; // 8007E02C
}

// TRKTargetContinue
void f_8007E030(Ctx* __restrict c) {
  trace_call(0x8007E030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E030
  c->r[0]=c->lr; // 8007E034
  c->r[3]=0u+0x00000000u; // 8007E038
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E03C
  c->lr=0x8007E044u; f_80081064(c); // 8007E040
  c->lr=0x8007E048u; f_8007D4AC(c); // 8007E044
  c->lr=0x8007E04Cu; f_80080820(c); // 8007E048
  c->lr=0x8007E050u; f_8007D498(c); // 8007E04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E050
  c->r[3]=0u+0x00000000u; // 8007E054
  c->lr=c->r[0]; // 8007E058
  c->r[1]=c->r[1]+0x00000010u; // 8007E05C
  return; // 8007E060
}

// TRKSaveExtended1Block
void f_8007E064(Ctx* __restrict c) {
  trace_call(0x8007E064u);
  c->r[2]=0u+0x801B0000u; // 8007E064
  c->r[2]=c->r[2]|0x000094F0u; // 8007E068
  /* mfsr */ // 8007E06C
  /* mfsr */ // 8007E070
  /* mfsr */ // 8007E074
  /* mfsr */ // 8007E078
  /* mfsr */ // 8007E07C
  /* mfsr */ // 8007E080
  /* mfsr */ // 8007E084
  /* mfsr */ // 8007E088
  /* mfsr */ // 8007E08C
  /* mfsr */ // 8007E090
  /* mfsr */ // 8007E094
  /* mfsr */ // 8007E098
  /* mfsr */ // 8007E09C
  /* mfsr */ // 8007E0A0
  /* mfsr */ // 8007E0A4
  /* mfsr */ // 8007E0A8
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E0AC
  c->r[27]=mftb(c,268); // 8007E0B0
  c->r[28]=mftb(c,269); // 8007E0B4
  c->r[29]=mfspr(c,1008); // 8007E0B8
  c->r[30]=mfspr(c,1009); // 8007E0BC
  c->r[31]=mfspr(c,27); // 8007E0C0
  {uint32_t ea=c->r[2]+0x000001E8u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E0C4
  c->r[15]=mfspr(c,287); // 8007E0C8
  c->r[16]=mfspr(c,528); // 8007E0CC
  c->r[17]=mfspr(c,529); // 8007E0D0
  c->r[18]=mfspr(c,530); // 8007E0D4
  c->r[19]=mfspr(c,531); // 8007E0D8
  c->r[20]=mfspr(c,532); // 8007E0DC
  c->r[21]=mfspr(c,533); // 8007E0E0
  c->r[22]=mfspr(c,534); // 8007E0E4
  c->r[23]=mfspr(c,535); // 8007E0E8
  c->r[24]=mfspr(c,536); // 8007E0EC
  c->r[25]=mfspr(c,537); // 8007E0F0
  c->r[26]=mfspr(c,538); // 8007E0F4
  c->r[27]=mfspr(c,539); // 8007E0F8
  c->r[28]=mfspr(c,540); // 8007E0FC
  c->r[29]=mfspr(c,541); // 8007E100
  c->r[30]=mfspr(c,542); // 8007E104
  c->r[31]=mfspr(c,543); // 8007E108
  {uint32_t ea=c->r[2]+0x000001FCu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E10C
  c->r[24]=mfspr(c,560); // 8007E110
  c->r[25]=mfspr(c,561); // 8007E114
  c->r[26]=mfspr(c,562); // 8007E118
  c->r[27]=mfspr(c,563); // 8007E11C
  c->r[28]=mfspr(c,564); // 8007E120
  c->r[29]=mfspr(c,565); // 8007E124
  c->r[30]=mfspr(c,566); // 8007E128
  c->r[31]=mfspr(c,567); // 8007E12C
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E130
  c->r[22]=mfspr(c,25); // 8007E134
  c->r[23]=mfspr(c,19); // 8007E138
  c->r[24]=mfspr(c,18); // 8007E13C
  c->r[25]=mfspr(c,272); // 8007E140
  c->r[26]=mfspr(c,273); // 8007E144
  c->r[27]=mfspr(c,274); // 8007E148
  c->r[28]=mfspr(c,275); // 8007E14C
  c->r[29]=mfspr(c,22); // 8007E150
  c->r[30]=mfspr(c,1010); // 8007E154
  c->r[31]=mfspr(c,282); // 8007E158
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E15C
  c->r[24]=mfspr(c,1013); // 8007E160
  c->r[25]=mfspr(c,953); // 8007E164
  c->r[26]=mfspr(c,954); // 8007E168
  c->r[27]=mfspr(c,957); // 8007E16C
  c->r[28]=mfspr(c,958); // 8007E170
  c->r[29]=mfspr(c,955); // 8007E174
  c->r[30]=mfspr(c,952); // 8007E178
  c->r[31]=mfspr(c,956); // 8007E17C
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E180
  c->r[29]=mfspr(c,567); // 8007E184
  c->r[30]=mfspr(c,568); // 8007E188
  c->r[31]=mfspr(c,569); // 8007E18C
  {uint32_t ea=c->r[2]+0x000002A4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E190
  c->r[30]=mfspr(c,1019); // 8007E194
  c->r[31]=mfspr(c,1017); // 8007E198
  {uint32_t ea=c->r[2]+0x000002B0u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E19C
  c->r[16]=mfspr(c,26); // 8007E1A0
  W32(c->r[2]+0x000002B8u,c->r[16]); // 8007E1A4
  c->r[17]=mfspr(c,570); // 8007E1A8
  W32(c->r[2]+0x000002BCu,c->r[17]); // 8007E1AC
  c->r[25]=mfspr(c,936); // 8007E1B0
  c->r[26]=mfspr(c,937); // 8007E1B4
  c->r[27]=mfspr(c,938); // 8007E1B8
  c->r[28]=mfspr(c,939); // 8007E1BC
  c->r[29]=mfspr(c,940); // 8007E1C0
  c->r[30]=mfspr(c,941); // 8007E1C4
  c->r[31]=mfspr(c,942); // 8007E1C8
  {uint32_t ea=c->r[2]+0x000002C0u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E1CC
  c->r[25]=mfspr(c,571); // 8007E1D0
  c->r[26]=mfspr(c,572); // 8007E1D4
  c->r[27]=mfspr(c,573); // 8007E1D8
  c->r[28]=mfspr(c,574); // 8007E1DC
  c->r[29]=mfspr(c,575); // 8007E1E0
  c->r[30]=mfspr(c,920); // 8007E1E4
  c->r[31]=mfspr(c,1011); // 8007E1E8
  {uint32_t ea=c->r[2]+0x000002DCu; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E1EC
  c->r[20]=mfspr(c,912); // 8007E1F0
  c->r[21]=mfspr(c,913); // 8007E1F4
  c->r[22]=mfspr(c,914); // 8007E1F8
  c->r[23]=mfspr(c,915); // 8007E1FC
  c->r[24]=mfspr(c,916); // 8007E200
  c->r[25]=mfspr(c,917); // 8007E204
  c->r[26]=mfspr(c,918); // 8007E208
  c->r[27]=mfspr(c,919); // 8007E20C
  c->r[28]=mfspr(c,920); // 8007E210
  c->r[29]=mfspr(c,921); // 8007E214
  c->r[30]=mfspr(c,922); // 8007E218
  c->r[31]=mfspr(c,923); // 8007E21C
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E220
  return; // 8007E224
}

// TRKRestoreExtended1Block
void f_8007E228(Ctx* __restrict c) {
  trace_call(0x8007E228u);
  c->r[2]=0u+0x801B0000u; // 8007E228
  c->r[2]=c->r[2]|0x000094F0u; // 8007E22C
  c->r[5]=0u+0x801B0000u; // 8007E230
  c->r[5]=c->r[5]|0x00009378u; // 8007E234
  c->r[3]=R8(c->r[5]+0x00000000u); // 8007E238
  c->r[6]=R8(c->r[5]+0x00000001u); // 8007E23C
  c->r[0]=0u+0x00000000u; // 8007E240
  W8(c->r[5]+0x00000000u,c->r[0]); // 8007E244
  W8(c->r[5]+0x00000001u,c->r[0]); // 8007E248
  cmps(c,0,(int32_t)c->r[3],0); // 8007E24C
  if (crb(c,2)) { goto L_8007E264; } // 8007E250
  c->r[24]=R32(c->r[2]+0x000001E8u); // 8007E254
  c->r[25]=R32(c->r[2]+0x000001ECu); // 8007E258
  mtspr(c,284,c->r[24]); // 8007E25C
  mtspr(c,285,c->r[25]); // 8007E260
L_8007E264:;
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E264
  mtspr(c,912,c->r[20]); // 8007E268
  mtspr(c,913,c->r[21]); // 8007E26C
  mtspr(c,914,c->r[22]); // 8007E270
  mtspr(c,915,c->r[23]); // 8007E274
  mtspr(c,916,c->r[24]); // 8007E278
  mtspr(c,917,c->r[25]); // 8007E27C
  mtspr(c,918,c->r[26]); // 8007E280
  mtspr(c,919,c->r[27]); // 8007E284
  mtspr(c,920,c->r[28]); // 8007E288
  mtspr(c,922,c->r[30]); // 8007E28C
  mtspr(c,923,c->r[31]); // 8007E290
  goto L_8007E298; // 8007E294
L_8007E298:;
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E298
  mtspr(c,1013,c->r[19]); // 8007E29C
  mtspr(c,953,c->r[20]); // 8007E2A0
  mtspr(c,954,c->r[21]); // 8007E2A4
  mtspr(c,957,c->r[22]); // 8007E2A8
  mtspr(c,958,c->r[23]); // 8007E2AC
  mtspr(c,955,c->r[24]); // 8007E2B0
  mtspr(c,952,c->r[25]); // 8007E2B4
  mtspr(c,956,c->r[26]); // 8007E2B8
  mtspr(c,1019,c->r[30]); // 8007E2BC
  mtspr(c,1017,c->r[31]); // 8007E2C0
  goto L_8007E2C8; // 8007E2C4
L_8007E2C8:;
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E2C8
  /* mtsr */ // 8007E2CC
  /* mtsr */ // 8007E2D0
  /* mtsr */ // 8007E2D4
  /* mtsr */ // 8007E2D8
  /* mtsr */ // 8007E2DC
  /* mtsr */ // 8007E2E0
  /* mtsr */ // 8007E2E4
  /* mtsr */ // 8007E2E8
  /* mtsr */ // 8007E2EC
  /* mtsr */ // 8007E2F0
  /* mtsr */ // 8007E2F4
  /* mtsr */ // 8007E2F8
  /* mtsr */ // 8007E2FC
  /* mtsr */ // 8007E300
  /* mtsr */ // 8007E304
  /* mtsr */ // 8007E308
  {uint32_t ea=c->r[2]+0x000001F0u; for(int i=12;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E30C
  mtspr(c,1008,c->r[12]); // 8007E310
  mtspr(c,1009,c->r[13]); // 8007E314
  mtspr(c,27,c->r[14]); // 8007E318
  mtspr(c,287,c->r[15]); // 8007E31C
  mtspr(c,528,c->r[16]); // 8007E320
  mtspr(c,529,c->r[17]); // 8007E324
  mtspr(c,530,c->r[18]); // 8007E328
  mtspr(c,531,c->r[19]); // 8007E32C
  mtspr(c,532,c->r[20]); // 8007E330
  mtspr(c,533,c->r[21]); // 8007E334
  mtspr(c,534,c->r[22]); // 8007E338
  mtspr(c,535,c->r[23]); // 8007E33C
  mtspr(c,536,c->r[24]); // 8007E340
  mtspr(c,537,c->r[25]); // 8007E344
  mtspr(c,538,c->r[26]); // 8007E348
  mtspr(c,539,c->r[27]); // 8007E34C
  mtspr(c,540,c->r[28]); // 8007E350
  mtspr(c,541,c->r[29]); // 8007E354
  mtspr(c,542,c->r[30]); // 8007E358
  mtspr(c,543,c->r[31]); // 8007E35C
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E360
  mtspr(c,25,c->r[22]); // 8007E364
  mtspr(c,19,c->r[23]); // 8007E368
  mtspr(c,18,c->r[24]); // 8007E36C
  mtspr(c,272,c->r[25]); // 8007E370
  mtspr(c,273,c->r[26]); // 8007E374
  mtspr(c,274,c->r[27]); // 8007E378
  mtspr(c,275,c->r[28]); // 8007E37C
  mtspr(c,1010,c->r[30]); // 8007E380
  mtspr(c,282,c->r[31]); // 8007E384
  return; // 8007E388
}

// TRK_MessageSend
void f_8007E38C(Ctx* __restrict c) {
  trace_call(0x8007E38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E38C
  c->r[0]=c->lr; // 8007E390
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E394
  c->r[0]=R16(c->r[13]+0xFFFF90F8u); // 8007E398
  cmps(c,0,(int32_t)c->r[0],0); // 8007E39C
  if (!crb(c,2)) { goto L_8007E3A8; } // 8007E3A0
  c->r[0]=0u+0x00000001u; // 8007E3A4
L_8007E3A8:;
  W16(c->r[3]+0x00000012u,c->r[0]); // 8007E3A8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8007E3AC
  c->r[0]=c->r[4]+0x00000001u; // 8007E3B0
  W16(c->r[13]+0xFFFF90F8u,c->r[0]); // 8007E3B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007E3B8
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E3BC
  c->lr=0x8007E3C4u; f_8007D45C(c); // 8007E3C0
  cmps(c,0,(int32_t)c->r[3],0); // 8007E3C4
  c->r[4]=c->r[3]|c->r[3]; // 8007E3C8
  if (crb(c,2)) { goto L_8007E3DC; } // 8007E3CC
  c->r[3]=0u+0x80150000u; // 8007E3D0
  c->r[3]=c->r[3]+0xFFFFE1C8u; // 8007E3D4
  c->lr=0x8007E3DCu; f_80045C80(c); // 8007E3D8
L_8007E3DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E3DC
  c->r[3]=0u+0x00000000u; // 8007E3E0
  c->lr=c->r[0]; // 8007E3E4
  c->r[1]=c->r[1]+0x00000010u; // 8007E3E8
  return; // 8007E3EC
}

// TRKInitializeMessageBuffers
void f_8007E3F0(Ctx* __restrict c) {
  trace_call(0x8007E3F0u);
  c->r[3]=0u+0x801B0000u; // 8007E3F0
  c->r[0]=0u+0x00000000u; // 8007E3F4
  c->r[4]=c->r[3]+0x000079D0u; // 8007E3F8
  W32(c->r[3]+0x000079D0u,c->r[0]); // 8007E3FC
  c->r[3]=0u+0x00000000u; // 8007E400
  W32(c->r[4]+0x0000088Cu,c->r[0]); // 8007E404
  W32(c->r[4]+0x00001118u,c->r[0]); // 8007E408
  return; // 8007E40C
}

// TRK_GetFreeBuffer
void f_8007E410(Ctx* __restrict c) {
  trace_call(0x8007E410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E410
  c->r[0]=c->lr; // 8007E414
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E418
  c->r[0]=0u+0x00000000u; // 8007E41C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E420
  c->r[26]=c->r[3]|c->r[3]; // 8007E424
  c->r[27]=c->r[4]|c->r[4]; // 8007E428
  c->r[30]=0u+0x00000300u; // 8007E42C
  c->r[29]=0u+0x00000000u; // 8007E430
  c->r[31]=0u+0x00000001u; // 8007E434
  W32(c->r[4]+0x00000000u,c->r[0]); // 8007E438
  goto L_8007E478; // 8007E43C
L_8007E440:;
  c->r[3]=c->r[29]|c->r[29]; // 8007E440
  c->lr=0x8007E448u; f_8007E4AC(c); // 8007E444
  c->r[0]=R32(c->r[3]+0x00000000u); // 8007E448
  c->r[28]=c->r[3]|c->r[3]; // 8007E44C
  cmps(c,0,(int32_t)c->r[0],0); // 8007E450
  if (!crb(c,2)) { goto L_8007E474; } // 8007E454
  c->r[4]=0u+0x00000001u; // 8007E458
  c->lr=0x8007E460u; f_8007E4F8(c); // 8007E45C
  W32(c->r[28]+0x00000000u,c->r[31]); // 8007E460
  c->r[30]=0u+0x00000000u; // 8007E464
  W32(c->r[27]+0x00000000u,c->r[28]); // 8007E468
  W32(c->r[26]+0x00000000u,c->r[29]); // 8007E46C
  c->r[29]=0u+0x00000003u; // 8007E470
L_8007E474:;
  c->r[29]=c->r[29]+0x00000001u; // 8007E474
L_8007E478:;
  cmps(c,0,(int32_t)c->r[29],3); // 8007E478
  if (crb(c,0)) { IRQCHK(c); goto L_8007E440; } // 8007E47C
  cmps(c,0,(int32_t)c->r[30],768); // 8007E480
  if (!crb(c,2)) { goto L_8007E494; } // 8007E484
  c->r[3]=0u+0x80150000u; // 8007E488
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 8007E48C
  c->lr=0x8007E494u; f_80045C80(c); // 8007E490
L_8007E494:;
  c->r[3]=c->r[30]|c->r[30]; // 8007E494
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E498
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E49C
  c->lr=c->r[0]; // 8007E4A0
  c->r[1]=c->r[1]+0x00000020u; // 8007E4A4
  return; // 8007E4A8
}

// TRKGetBuffer
void f_8007E4AC(Ctx* __restrict c) {
  trace_call(0x8007E4ACu);
  cmpu(c,0,c->r[3],0x00000002u); // 8007E4AC
  c->r[0]=0u+0x00000000u; // 8007E4B0
  if (crb(c,1)) { goto L_8007E4C8; } // 8007E4B4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 8007E4B8
  c->r[3]=0u+0x801B0000u; // 8007E4BC
  c->r[3]=c->r[3]+0x000079D0u; // 8007E4C0
  c->r[0]=c->r[3]+c->r[0]; // 8007E4C4
L_8007E4C8:;
  c->r[3]=c->r[0]|c->r[0]; // 8007E4C8
  return; // 8007E4CC
}

// TRK_ReleaseBuffer
void f_8007E4D0(Ctx* __restrict c) {
  trace_call(0x8007E4D0u);
  cmps(c,0,(int32_t)c->r[3],-1); // 8007E4D0
  if (crb(c,2)) return; // 8007E4D4
  cmpu(c,0,c->r[3],0x00000002u); // 8007E4D8
  if (crb(c,1)) return; // 8007E4DC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 8007E4E0
  c->r[3]=0u+0x801B0000u; // 8007E4E4
  c->r[4]=0u+0x00000000u; // 8007E4E8
  c->r[3]=c->r[3]+0x000079D0u; // 8007E4EC
  W32(c->r[3]+c->r[0],c->r[4]); // 8007E4F0
  return; // 8007E4F4
}

// fn_8007E4F8
void f_8007E4F8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8007E4F8
  c->r[0]=0u+0x00000000u; // 8007E4FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007E500
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007E504
  if (!crb(c,2)) return; // 8007E508
  c->r[4]=0u+0x00000000u; // 8007E50C
  c->r[5]=0u+0x00000880u; // 8007E510
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E514
  f_8007CC24(c); return; // 8007E518
}

// fn_8007E51C
void f_8007E51C(Ctx* __restrict c) {
  return; // 8007E51C
}

// TRK_SetBufferPosition
void f_8007E520(Ctx* __restrict c) {
  trace_call(0x8007E520u);
  cmpu(c,0,c->r[4],0x00000880u); // 8007E520
  c->r[5]=0u+0x00000000u; // 8007E524
  if (!crb(c,1)) { goto L_8007E534; } // 8007E528
  c->r[5]=0u+0x00000301u; // 8007E52C
  goto L_8007E548; // 8007E530
L_8007E534:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007E534
  W32(c->r[3]+0x00000008u,c->r[4]); // 8007E538
  cmpu(c,0,c->r[4],c->r[0]); // 8007E53C
  if (!crb(c,1)) { goto L_8007E548; } // 8007E540
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007E544
L_8007E548:;
  c->r[3]=c->r[5]|c->r[5]; // 8007E548
  return; // 8007E54C
}

// TRK_AppendBuffer
void f_8007E550(Ctx* __restrict c) {
  trace_call(0x8007E550u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E550
  c->r[0]=c->lr; // 8007E554
  cmps(c,0,(int32_t)c->r[5],0); // 8007E558
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E55C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007E560
  c->r[31]=0u+0x00000000u; // 8007E564
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007E568
  c->r[30]=c->r[5]|c->r[5]; // 8007E56C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007E570
  c->r[29]=c->r[3]|c->r[3]; // 8007E574
  if (!crb(c,2)) { goto L_8007E584; } // 8007E578
  c->r[3]=0u+0x00000000u; // 8007E57C
  goto L_8007E5D8; // 8007E580
L_8007E584:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007E584
  c->r[6]=addc(c,~c->r[0],0x00000880u,1); // 8007E588
  cmpu(c,0,c->r[6],c->r[5]); // 8007E58C
  if (!crb(c,0)) { goto L_8007E59C; } // 8007E590
  c->r[31]=0u+0x00000301u; // 8007E594
  c->r[30]=c->r[6]|c->r[6]; // 8007E598
L_8007E59C:;
  cmpu(c,0,c->r[30],0x00000001u); // 8007E59C
  if (!crb(c,2)) { goto L_8007E5B4; } // 8007E5A0
  c->r[3]=c->r[3]+c->r[0]; // 8007E5A4
  c->r[0]=R8(c->r[4]+0x00000000u); // 8007E5A8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8007E5AC
  goto L_8007E5C4; // 8007E5B0
L_8007E5B4:;
  c->r[3]=c->r[3]+c->r[0]; // 8007E5B4
  c->r[5]=c->r[30]|c->r[30]; // 8007E5B8
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E5BC
  c->lr=0x8007E5C4u; f_8007CAE8(c); // 8007E5C0
L_8007E5C4:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007E5C4
  c->r[3]=c->r[31]|c->r[31]; // 8007E5C8
  c->r[0]=c->r[0]+c->r[30]; // 8007E5CC
  W32(c->r[29]+0x00000008u,c->r[0]); // 8007E5D0
  W32(c->r[29]+0x00000004u,c->r[0]); // 8007E5D4
L_8007E5D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E5D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007E5DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007E5E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007E5E4
  c->lr=c->r[0]; // 8007E5E8
  c->r[1]=c->r[1]+0x00000020u; // 8007E5EC
  return; // 8007E5F0
}

// TRK_ReadBuffer
void f_8007E5F4(Ctx* __restrict c) {
  trace_call(0x8007E5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E5F4
  c->r[0]=c->lr; // 8007E5F8
  cmps(c,0,(int32_t)c->r[5],0); // 8007E5FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E600
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007E604
  c->r[31]=0u+0x00000000u; // 8007E608
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007E60C
  c->r[30]=c->r[5]|c->r[5]; // 8007E610
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007E614
  c->r[29]=c->r[3]|c->r[3]; // 8007E618
  if (!crb(c,2)) { goto L_8007E628; } // 8007E61C
  c->r[3]=0u+0x00000000u; // 8007E620
  goto L_8007E668; // 8007E624
L_8007E628:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 8007E628
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007E62C
  c->r[0]=c->r[0]-c->r[6]; // 8007E630
  cmpu(c,0,c->r[5],c->r[0]); // 8007E634
  if (!crb(c,1)) { goto L_8007E644; } // 8007E638
  c->r[31]=0u+0x00000302u; // 8007E63C
  c->r[30]=c->r[0]|c->r[0]; // 8007E640
L_8007E644:;
  c->r[6]=c->r[29]+c->r[6]; // 8007E644
  c->r[3]=c->r[4]|c->r[4]; // 8007E648
  c->r[5]=c->r[30]|c->r[30]; // 8007E64C
  c->r[4]=c->r[6]+0x0000000Cu; // 8007E650
  c->lr=0x8007E658u; f_8007CAE8(c); // 8007E654
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007E658
  c->r[3]=c->r[31]|c->r[31]; // 8007E65C
  c->r[0]=c->r[0]+c->r[30]; // 8007E660
  W32(c->r[29]+0x00000008u,c->r[0]); // 8007E664
L_8007E668:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E668
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007E66C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007E670
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007E674
  c->lr=c->r[0]; // 8007E678
  c->r[1]=c->r[1]+0x00000020u; // 8007E67C
  return; // 8007E680
}

// TRKAppendBuffer1_ui32
void f_8007E684(Ctx* __restrict c) {
  trace_call(0x8007E684u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E684
  c->r[0]=c->lr; // 8007E688
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E68C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007E690
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007E694
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007E698
  c->r[29]=c->r[3]|c->r[3]; // 8007E69C
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007E6A0
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007E6A4
  cmps(c,0,(int32_t)c->r[0],0); // 8007E6A8
  if (crb(c,2)) { goto L_8007E6B8; } // 8007E6AC
  c->r[4]=c->r[1]+0x00000008u; // 8007E6B0
  goto L_8007E6DC; // 8007E6B4
L_8007E6B8:;
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 8007E6B8
  c->r[4]=c->r[1]+0x0000000Cu; // 8007E6BC
  c->r[6]=R8(c->r[1]+0x0000000Au); // 8007E6C0
  c->r[5]=R8(c->r[1]+0x00000009u); // 8007E6C4
  c->r[0]=R8(c->r[1]+0x00000008u); // 8007E6C8
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8007E6CC
  W8(c->r[1]+0x0000000Du,c->r[6]); // 8007E6D0
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 8007E6D4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8007E6D8
L_8007E6DC:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 8007E6DC
  c->r[31]=0u+0x00000004u; // 8007E6E0
  c->r[30]=0u+0x00000000u; // 8007E6E4
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 8007E6E8
  cmpu(c,0,c->r[0],0x00000004u); // 8007E6EC
  if (!crb(c,0)) { goto L_8007E6FC; } // 8007E6F0
  c->r[30]=0u+0x00000301u; // 8007E6F4
  c->r[31]=c->r[0]|c->r[0]; // 8007E6F8
L_8007E6FC:;
  cmpu(c,0,c->r[31],0x00000001u); // 8007E6FC
  if (!crb(c,2)) { goto L_8007E714; } // 8007E700
  c->r[3]=c->r[3]+c->r[5]; // 8007E704
  c->r[0]=R8(c->r[4]+0x00000000u); // 8007E708
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8007E70C
  goto L_8007E724; // 8007E710
L_8007E714:;
  c->r[3]=c->r[3]+c->r[5]; // 8007E714
  c->r[5]=c->r[31]|c->r[31]; // 8007E718
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E71C
  c->lr=0x8007E724u; f_8007CAE8(c); // 8007E720
L_8007E724:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007E724
  c->r[3]=c->r[30]|c->r[30]; // 8007E728
  c->r[0]=c->r[0]+c->r[31]; // 8007E72C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8007E730
  W32(c->r[29]+0x00000004u,c->r[0]); // 8007E734
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007E738
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007E73C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007E740
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E744
  c->lr=c->r[0]; // 8007E748
  c->r[1]=c->r[1]+0x00000020u; // 8007E74C
  return; // 8007E750
}

// TRKAppendBuffer1_ui64
void f_8007E754(Ctx* __restrict c) {
  trace_call(0x8007E754u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E754
  c->r[0]=c->lr; // 8007E758
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007E75C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8007E760
  c->r[31]=c->r[3]|c->r[3]; // 8007E764
  W32(c->r[1]+0x00000028u,c->r[30]); // 8007E768
  W32(c->r[1]+0x00000024u,c->r[29]); // 8007E76C
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007E770
  W32(c->r[1]+0x00000008u,c->r[5]); // 8007E774
  cmps(c,0,(int32_t)c->r[0],0); // 8007E778
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8007E77C
  if (crb(c,2)) { goto L_8007E78C; } // 8007E780
  c->r[4]=c->r[1]+0x00000008u; // 8007E784
  goto L_8007E7D0; // 8007E788
L_8007E78C:;
  c->r[11]=R8(c->r[1]+0x0000000Fu); // 8007E78C
  c->r[4]=c->r[1]+0x00000010u; // 8007E790
  c->r[10]=R8(c->r[1]+0x0000000Eu); // 8007E794
  c->r[9]=R8(c->r[1]+0x0000000Du); // 8007E798
  c->r[8]=R8(c->r[1]+0x0000000Cu); // 8007E79C
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 8007E7A0
  c->r[6]=R8(c->r[1]+0x0000000Au); // 8007E7A4
  c->r[5]=R8(c->r[1]+0x00000009u); // 8007E7A8
  c->r[0]=R8(c->r[1]+0x00000008u); // 8007E7AC
  W8(c->r[1]+0x00000010u,c->r[11]); // 8007E7B0
  W8(c->r[1]+0x00000011u,c->r[10]); // 8007E7B4
  W8(c->r[1]+0x00000012u,c->r[9]); // 8007E7B8
  W8(c->r[1]+0x00000013u,c->r[8]); // 8007E7BC
  W8(c->r[1]+0x00000014u,c->r[7]); // 8007E7C0
  W8(c->r[1]+0x00000015u,c->r[6]); // 8007E7C4
  W8(c->r[1]+0x00000016u,c->r[5]); // 8007E7C8
  W8(c->r[1]+0x00000017u,c->r[0]); // 8007E7CC
L_8007E7D0:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 8007E7D0
  c->r[30]=0u+0x00000008u; // 8007E7D4
  c->r[29]=0u+0x00000000u; // 8007E7D8
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 8007E7DC
  cmpu(c,0,c->r[0],0x00000008u); // 8007E7E0
  if (!crb(c,0)) { goto L_8007E7F0; } // 8007E7E4
  c->r[29]=0u+0x00000301u; // 8007E7E8
  c->r[30]=c->r[0]|c->r[0]; // 8007E7EC
L_8007E7F0:;
  cmpu(c,0,c->r[30],0x00000001u); // 8007E7F0
  if (!crb(c,2)) { goto L_8007E808; } // 8007E7F4
  c->r[3]=c->r[3]+c->r[5]; // 8007E7F8
  c->r[0]=R8(c->r[4]+0x00000000u); // 8007E7FC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8007E800
  goto L_8007E818; // 8007E804
L_8007E808:;
  c->r[3]=c->r[3]+c->r[5]; // 8007E808
  c->r[5]=c->r[30]|c->r[30]; // 8007E80C
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E810
  c->lr=0x8007E818u; f_8007CAE8(c); // 8007E814
L_8007E818:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8007E818
  c->r[3]=c->r[29]|c->r[29]; // 8007E81C
  c->r[0]=c->r[0]+c->r[30]; // 8007E820
  W32(c->r[31]+0x00000008u,c->r[0]); // 8007E824
  W32(c->r[31]+0x00000004u,c->r[0]); // 8007E828
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8007E82C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8007E830
  c->r[29]=R32(c->r[1]+0x00000024u); // 8007E834
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007E838
  c->lr=c->r[0]; // 8007E83C
  c->r[1]=c->r[1]+0x00000030u; // 8007E840
  return; // 8007E844
}

// TRKAppendBuffer_ui8
void f_8007E848(Ctx* __restrict c) {
  trace_call(0x8007E848u);
  c->r[9]=0u+0x00000000u; // 8007E848
  c->r[7]=0u+0x00000000u; // 8007E84C
  goto L_8007E894; // 8007E850
L_8007E854:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 8007E854
  c->r[8]=R8(c->r[4]+0x00000000u); // 8007E858
  cmpu(c,0,c->r[7],0x00000880u); // 8007E85C
  if (crb(c,0)) { goto L_8007E86C; } // 8007E860
  c->r[7]=0u+0x00000301u; // 8007E864
  goto L_8007E88C; // 8007E868
L_8007E86C:;
  c->r[6]=c->r[3]+c->r[7]; // 8007E86C
  c->r[0]=c->r[7]+0x00000001u; // 8007E870
  W8(c->r[6]+0x0000000Cu,c->r[8]); // 8007E874
  c->r[7]=0u+0x00000000u; // 8007E878
  c->r[6]=R32(c->r[3]+0x00000004u); // 8007E87C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007E880
  c->r[0]=c->r[6]+0x00000001u; // 8007E884
  W32(c->r[3]+0x00000004u,c->r[0]); // 8007E888
L_8007E88C:;
  c->r[9]=c->r[9]+0x00000001u; // 8007E88C
  c->r[4]=c->r[4]+0x00000001u; // 8007E890
L_8007E894:;
  cmps(c,0,(int32_t)c->r[7],0); // 8007E894
  if (!crb(c,2)) { goto L_8007E8A4; } // 8007E898
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[5]); // 8007E89C
  if (crb(c,0)) { IRQCHK(c); goto L_8007E854; } // 8007E8A0
L_8007E8A4:;
  c->r[3]=c->r[7]|c->r[7]; // 8007E8A4
  return; // 8007E8A8
}

// TRKAppendBuffer_ui32
void f_8007E8AC(Ctx* __restrict c) {
  trace_call(0x8007E8ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E8AC
  c->r[0]=c->lr; // 8007E8B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007E8B4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E8B8
  c->r[29]=c->r[3]|c->r[3]; // 8007E8BC
  c->r[27]=c->r[4]|c->r[4]; // 8007E8C0
  c->r[30]=c->r[5]|c->r[5]; // 8007E8C4
  c->r[31]=0u+0x00000000u; // 8007E8C8
  c->r[26]=0u+0x00000000u; // 8007E8CC
  goto L_8007E974; // 8007E8D0
L_8007E8D4:;
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007E8D4
  c->r[3]=R32(c->r[27]+0x00000000u); // 8007E8D8
  cmps(c,0,(int32_t)c->r[0],0); // 8007E8DC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8007E8E0
  if (crb(c,2)) { goto L_8007E8F0; } // 8007E8E4
  c->r[4]=c->r[1]+0x0000000Cu; // 8007E8E8
  goto L_8007E914; // 8007E8EC
L_8007E8F0:;
  c->r[6]=R8(c->r[1]+0x0000000Fu); // 8007E8F0
  c->r[4]=c->r[1]+0x00000008u; // 8007E8F4
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 8007E8F8
  c->r[3]=R8(c->r[1]+0x0000000Du); // 8007E8FC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8007E900
  W8(c->r[1]+0x00000008u,c->r[6]); // 8007E904
  W8(c->r[1]+0x00000009u,c->r[5]); // 8007E908
  W8(c->r[1]+0x0000000Au,c->r[3]); // 8007E90C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8007E910
L_8007E914:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8007E914
  c->r[28]=0u+0x00000004u; // 8007E918
  c->r[26]=0u+0x00000000u; // 8007E91C
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 8007E920
  cmpu(c,0,c->r[0],0x00000004u); // 8007E924
  if (!crb(c,0)) { goto L_8007E934; } // 8007E928
  c->r[26]=0u+0x00000301u; // 8007E92C
  c->r[28]=c->r[0]|c->r[0]; // 8007E930
L_8007E934:;
  cmpu(c,0,c->r[28],0x00000001u); // 8007E934
  if (!crb(c,2)) { goto L_8007E94C; } // 8007E938
  c->r[3]=c->r[29]+c->r[3]; // 8007E93C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8007E940
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8007E944
  goto L_8007E95C; // 8007E948
L_8007E94C:;
  c->r[3]=c->r[29]+c->r[3]; // 8007E94C
  c->r[5]=c->r[28]|c->r[28]; // 8007E950
  c->r[3]=c->r[3]+0x0000000Cu; // 8007E954
  c->lr=0x8007E95Cu; f_8007CAE8(c); // 8007E958
L_8007E95C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007E95C
  c->r[27]=c->r[27]+0x00000004u; // 8007E960
  c->r[31]=c->r[31]+0x00000001u; // 8007E964
  c->r[0]=c->r[0]+c->r[28]; // 8007E968
  W32(c->r[29]+0x00000008u,c->r[0]); // 8007E96C
  W32(c->r[29]+0x00000004u,c->r[0]); // 8007E970
L_8007E974:;
  cmps(c,0,(int32_t)c->r[26],0); // 8007E974
  if (!crb(c,2)) { goto L_8007E984; } // 8007E978
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8007E97C
  if (crb(c,0)) { IRQCHK(c); goto L_8007E8D4; } // 8007E980
L_8007E984:;
  c->r[3]=c->r[26]|c->r[26]; // 8007E984
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007E988
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007E98C
  c->lr=c->r[0]; // 8007E990
  c->r[1]=c->r[1]+0x00000030u; // 8007E994
  return; // 8007E998
}

// TRKReadBuffer1_ui64
void f_8007E99C(Ctx* __restrict c) {
  trace_call(0x8007E99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E99C
  c->r[0]=c->lr; // 8007E9A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007E9A4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007E9A8
  c->r[27]=c->r[3]|c->r[3]; // 8007E9AC
  c->r[29]=c->r[4]|c->r[4]; // 8007E9B0
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007E9B4
  cmps(c,0,(int32_t)c->r[0],0); // 8007E9B8
  if (crb(c,2)) { goto L_8007E9C8; } // 8007E9BC
  c->r[30]=c->r[29]|c->r[29]; // 8007E9C0
  goto L_8007E9CC; // 8007E9C4
L_8007E9C8:;
  c->r[30]=c->r[1]+0x00000008u; // 8007E9C8
L_8007E9CC:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8007E9CC
  c->r[28]=0u+0x00000008u; // 8007E9D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007E9D4
  c->r[31]=0u+0x00000000u; // 8007E9D8
  c->r[0]=c->r[0]-c->r[4]; // 8007E9DC
  cmpu(c,0,c->r[0],0x00000008u); // 8007E9E0
  if (!crb(c,0)) { goto L_8007E9F0; } // 8007E9E4
  c->r[31]=0u+0x00000302u; // 8007E9E8
  c->r[28]=c->r[0]|c->r[0]; // 8007E9EC
L_8007E9F0:;
  c->r[4]=c->r[27]+c->r[4]; // 8007E9F0
  c->r[3]=c->r[30]|c->r[30]; // 8007E9F4
  c->r[5]=c->r[28]|c->r[28]; // 8007E9F8
  c->r[4]=c->r[4]+0x0000000Cu; // 8007E9FC
  c->lr=0x8007EA04u; f_8007CAE8(c); // 8007EA00
  c->r[0]=R32(c->r[27]+0x00000008u); // 8007EA04
  c->r[0]=c->r[0]+c->r[28]; // 8007EA08
  W32(c->r[27]+0x00000008u,c->r[0]); // 8007EA0C
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007EA10
  cmps(c,0,(int32_t)c->r[0],0); // 8007EA14
  if (!crb(c,2)) { goto L_8007EA64; } // 8007EA18
  cmps(c,0,(int32_t)c->r[31],0); // 8007EA1C
  if (!crb(c,2)) { goto L_8007EA64; } // 8007EA20
  c->r[0]=R8(c->r[30]+0x00000007u); // 8007EA24
  W8(c->r[29]+0x00000000u,c->r[0]); // 8007EA28
  c->r[0]=R8(c->r[30]+0x00000006u); // 8007EA2C
  W8(c->r[29]+0x00000001u,c->r[0]); // 8007EA30
  c->r[0]=R8(c->r[30]+0x00000005u); // 8007EA34
  W8(c->r[29]+0x00000002u,c->r[0]); // 8007EA38
  c->r[0]=R8(c->r[30]+0x00000004u); // 8007EA3C
  W8(c->r[29]+0x00000003u,c->r[0]); // 8007EA40
  c->r[0]=R8(c->r[30]+0x00000003u); // 8007EA44
  W8(c->r[29]+0x00000004u,c->r[0]); // 8007EA48
  c->r[0]=R8(c->r[30]+0x00000002u); // 8007EA4C
  W8(c->r[29]+0x00000005u,c->r[0]); // 8007EA50
  c->r[0]=R8(c->r[30]+0x00000001u); // 8007EA54
  W8(c->r[29]+0x00000006u,c->r[0]); // 8007EA58
  c->r[0]=R8(c->r[30]+0x00000000u); // 8007EA5C
  W8(c->r[29]+0x00000007u,c->r[0]); // 8007EA60
L_8007EA64:;
  c->r[3]=c->r[31]|c->r[31]; // 8007EA64
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007EA68
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007EA6C
  c->lr=c->r[0]; // 8007EA70
  c->r[1]=c->r[1]+0x00000030u; // 8007EA74
  return; // 8007EA78
}

// TRKReadBuffer_ui8
void f_8007EA7C(Ctx* __restrict c) {
  trace_call(0x8007EA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EA7C
  c->r[0]=c->lr; // 8007EA80
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007EA84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007EA88
  c->r[26]=c->r[3]|c->r[3]; // 8007EA8C
  c->r[27]=c->r[4]|c->r[4]; // 8007EA90
  c->r[28]=c->r[5]|c->r[5]; // 8007EA94
  c->r[29]=0u+0x00000000u; // 8007EA98
  c->r[30]=0u+0x00000000u; // 8007EA9C
  goto L_8007EAEC; // 8007EAA0
L_8007EAA4:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 8007EAA4
  c->r[31]=0u+0x00000001u; // 8007EAA8
  c->r[0]=R32(c->r[26]+0x00000004u); // 8007EAAC
  c->r[30]=0u+0x00000000u; // 8007EAB0
  c->r[0]=c->r[0]-c->r[3]; // 8007EAB4
  cmpu(c,0,c->r[0],0x00000001u); // 8007EAB8
  if (!crb(c,0)) { goto L_8007EAC8; } // 8007EABC
  c->r[30]=0u+0x00000302u; // 8007EAC0
  c->r[31]=c->r[0]|c->r[0]; // 8007EAC4
L_8007EAC8:;
  c->r[4]=c->r[26]+c->r[3]; // 8007EAC8
  c->r[5]=c->r[31]|c->r[31]; // 8007EACC
  c->r[3]=c->r[27]+c->r[29]; // 8007EAD0
  c->r[4]=c->r[4]+0x0000000Cu; // 8007EAD4
  c->lr=0x8007EADCu; f_8007CAE8(c); // 8007EAD8
  c->r[0]=R32(c->r[26]+0x00000008u); // 8007EADC
  c->r[29]=c->r[29]+0x00000001u; // 8007EAE0
  c->r[0]=c->r[0]+c->r[31]; // 8007EAE4
  W32(c->r[26]+0x00000008u,c->r[0]); // 8007EAE8
L_8007EAEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007EAEC
  if (!crb(c,2)) { goto L_8007EAFC; } // 8007EAF0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8007EAF4
  if (crb(c,0)) { IRQCHK(c); goto L_8007EAA4; } // 8007EAF8
L_8007EAFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8007EAFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007EB00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007EB04
  c->lr=c->r[0]; // 8007EB08
  c->r[1]=c->r[1]+0x00000020u; // 8007EB0C
  return; // 8007EB10
}

// TRKReadBuffer_ui32
void f_8007EB14(Ctx* __restrict c) {
  trace_call(0x8007EB14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EB14
  c->r[0]=c->lr; // 8007EB18
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007EB1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007EB20
  c->r[27]=c->r[3]|c->r[3]; // 8007EB24
  c->r[31]=c->r[4]|c->r[4]; // 8007EB28
  c->r[28]=c->r[5]|c->r[5]; // 8007EB2C
  c->r[29]=0u+0x00000000u; // 8007EB30
  c->r[30]=0u+0x00000000u; // 8007EB34
  goto L_8007EBD4; // 8007EB38
L_8007EB3C:;
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007EB3C
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB40
  if (crb(c,2)) { goto L_8007EB50; } // 8007EB44
  c->r[26]=c->r[31]|c->r[31]; // 8007EB48
  goto L_8007EB54; // 8007EB4C
L_8007EB50:;
  c->r[26]=c->r[1]+0x00000008u; // 8007EB50
L_8007EB54:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 8007EB54
  c->r[25]=0u+0x00000004u; // 8007EB58
  c->r[0]=R32(c->r[27]+0x00000004u); // 8007EB5C
  c->r[30]=0u+0x00000000u; // 8007EB60
  c->r[0]=c->r[0]-c->r[3]; // 8007EB64
  cmpu(c,0,c->r[0],0x00000004u); // 8007EB68
  if (!crb(c,0)) { goto L_8007EB78; } // 8007EB6C
  c->r[30]=0u+0x00000302u; // 8007EB70
  c->r[25]=c->r[0]|c->r[0]; // 8007EB74
L_8007EB78:;
  c->r[4]=c->r[27]+c->r[3]; // 8007EB78
  c->r[3]=c->r[26]|c->r[26]; // 8007EB7C
  c->r[5]=c->r[25]|c->r[25]; // 8007EB80
  c->r[4]=c->r[4]+0x0000000Cu; // 8007EB84
  c->lr=0x8007EB8Cu; f_8007CAE8(c); // 8007EB88
  c->r[0]=R32(c->r[27]+0x00000008u); // 8007EB8C
  c->r[0]=c->r[0]+c->r[25]; // 8007EB90
  W32(c->r[27]+0x00000008u,c->r[0]); // 8007EB94
  c->r[0]=R32(c->r[13]+0xFFFF90E8u); // 8007EB98
  cmps(c,0,(int32_t)c->r[0],0); // 8007EB9C
  if (!crb(c,2)) { goto L_8007EBCC; } // 8007EBA0
  cmps(c,0,(int32_t)c->r[30],0); // 8007EBA4
  if (!crb(c,2)) { goto L_8007EBCC; } // 8007EBA8
  c->r[0]=R8(c->r[26]+0x00000003u); // 8007EBAC
  W8(c->r[31]+0x00000000u,c->r[0]); // 8007EBB0
  c->r[0]=R8(c->r[26]+0x00000002u); // 8007EBB4
  W8(c->r[31]+0x00000001u,c->r[0]); // 8007EBB8
  c->r[0]=R8(c->r[26]+0x00000001u); // 8007EBBC
  W8(c->r[31]+0x00000002u,c->r[0]); // 8007EBC0
  c->r[0]=R8(c->r[26]+0x00000000u); // 8007EBC4
  W8(c->r[31]+0x00000003u,c->r[0]); // 8007EBC8
L_8007EBCC:;
  c->r[31]=c->r[31]+0x00000004u; // 8007EBCC
  c->r[29]=c->r[29]+0x00000001u; // 8007EBD0
L_8007EBD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007EBD4
  if (!crb(c,2)) { goto L_8007EBE4; } // 8007EBD8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8007EBDC
  if (crb(c,0)) { IRQCHK(c); goto L_8007EB3C; } // 8007EBE0
L_8007EBE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007EBE4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007EBE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007EBEC
  c->lr=c->r[0]; // 8007EBF0
  c->r[1]=c->r[1]+0x00000030u; // 8007EBF4
  return; // 8007EBF8
}

// GetTRKConnected
void f_8007EBFC(Ctx* __restrict c) {
  trace_call(0x8007EBFCu);
  c->r[3]=R32(c->r[13]+0xFFFF9104u); // 8007EBFC
  return; // 8007EC00
}

// TRK_DoConnect
void f_8007EC04(Ctx* __restrict c) {
  trace_call(0x8007EC04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EC04
  c->r[0]=c->lr; // 8007EC08
  c->r[4]=0u+0x00000000u; // 8007EC0C
  c->r[5]=0u+0x00000040u; // 8007EC10
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007EC14
  c->r[0]=0u+0x00000001u; // 8007EC18
  c->r[3]=c->r[1]+0x00000008u; // 8007EC1C
  W32(c->r[13]+0xFFFF9104u,c->r[0]); // 8007EC20
  c->lr=0x8007EC28u; f_8007CC24(c); // 8007EC24
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007EC28
  c->r[0]=0u+0x00000080u; // 8007EC2C
  c->r[4]=0u+0x00000040u; // 8007EC30
  c->r[5]=0u+0x00000000u; // 8007EC34
  c->r[6]=c->r[3]+0x00000001u; // 8007EC38
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007EC3C
  c->r[0]=c->r[6]+0x00000001u; // 8007EC40
  c->r[3]=c->r[1]+0x00000008u; // 8007EC44
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007EC48
  c->r[4]=0u+0x00000040u; // 8007EC4C
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007EC50
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007EC54
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007EC58
  c->lr=0x8007EC60u; f_8007D45C(c); // 8007EC5C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007EC60
  c->r[3]=0u+0x00000000u; // 8007EC64
  c->lr=c->r[0]; // 8007EC68
  c->r[1]=c->r[1]+0x00000050u; // 8007EC6C
  return; // 8007EC70
}

// TRKDoDisconnect
void f_8007EC74(Ctx* __restrict c) {
  trace_call(0x8007EC74u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EC74
  c->r[0]=c->lr; // 8007EC78
  c->r[4]=0u+0x00000000u; // 8007EC7C
  c->r[5]=0u+0x00000040u; // 8007EC80
  W32(c->r[1]+0x00000064u,c->r[0]); // 8007EC84
  c->r[3]=c->r[1]+0x00000018u; // 8007EC88
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8007EC8C
  c->r[31]=0u+0x00000000u; // 8007EC90
  W32(c->r[13]+0xFFFF9104u,c->r[31]); // 8007EC94
  c->lr=0x8007EC9Cu; f_8007CC24(c); // 8007EC98
  c->r[4]=R32(c->r[13]+0xFFFF9100u); // 8007EC9C
  c->r[0]=0u+0x00000080u; // 8007ECA0
  c->r[3]=0u+0x00000040u; // 8007ECA4
  W32(c->r[1]+0x00000018u,c->r[3]); // 8007ECA8
  c->r[5]=c->r[4]+0x00000001u; // 8007ECAC
  c->r[4]=0u+0x00000040u; // 8007ECB0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8007ECB4
  c->r[0]=c->r[5]+0x00000001u; // 8007ECB8
  c->r[3]=c->r[1]+0x00000018u; // 8007ECBC
  W8(c->r[1]+0x00000020u,c->r[31]); // 8007ECC0
  W32(c->r[1]+0x00000024u,c->r[5]); // 8007ECC4
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007ECC8
  c->lr=0x8007ECD0u; f_8007D45C(c); // 8007ECCC
  c->r[3]=c->r[1]+0x00000008u; // 8007ECD0
  c->r[4]=0u+0x00000001u; // 8007ECD4
  c->lr=0x8007ECDCu; f_8007D738(c); // 8007ECD8
  c->r[3]=c->r[1]+0x00000008u; // 8007ECDC
  c->lr=0x8007ECE4u; f_8007D66C(c); // 8007ECE0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8007ECE4
  c->r[3]=0u+0x00000000u; // 8007ECE8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8007ECEC
  c->lr=c->r[0]; // 8007ECF0
  c->r[1]=c->r[1]+0x00000060u; // 8007ECF4
  return; // 8007ECF8
}

// TRKDoReset
void f_8007ECFC(Ctx* __restrict c) {
  trace_call(0x8007ECFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007ECFC
  c->r[0]=c->lr; // 8007ED00
  c->r[4]=0u+0x00000000u; // 8007ED04
  c->r[5]=0u+0x00000040u; // 8007ED08
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007ED0C
  c->r[3]=c->r[1]+0x00000008u; // 8007ED10
  c->lr=0x8007ED18u; f_8007CC24(c); // 8007ED14
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007ED18
  c->r[0]=0u+0x00000080u; // 8007ED1C
  c->r[4]=0u+0x00000040u; // 8007ED20
  c->r[5]=0u+0x00000000u; // 8007ED24
  c->r[6]=c->r[3]+0x00000001u; // 8007ED28
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007ED2C
  c->r[0]=c->r[6]+0x00000001u; // 8007ED30
  c->r[3]=c->r[1]+0x00000008u; // 8007ED34
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007ED38
  c->r[4]=0u+0x00000040u; // 8007ED3C
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007ED40
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007ED44
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007ED48
  c->lr=0x8007ED50u; f_8007D45C(c); // 8007ED4C
  c->lr=0x8007ED54u; f_8007D180(c); // 8007ED50
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007ED54
  c->r[3]=0u+0x00000000u; // 8007ED58
  c->lr=c->r[0]; // 8007ED5C
  c->r[1]=c->r[1]+0x00000050u; // 8007ED60
  return; // 8007ED64
}

// TRKDoOverride
void f_8007ED68(Ctx* __restrict c) {
  trace_call(0x8007ED68u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007ED68
  c->r[0]=c->lr; // 8007ED6C
  c->r[4]=0u+0x00000000u; // 8007ED70
  c->r[5]=0u+0x00000040u; // 8007ED74
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007ED78
  c->r[3]=c->r[1]+0x00000008u; // 8007ED7C
  c->lr=0x8007ED84u; f_8007CC24(c); // 8007ED80
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007ED84
  c->r[0]=0u+0x00000080u; // 8007ED88
  c->r[4]=0u+0x00000040u; // 8007ED8C
  c->r[5]=0u+0x00000000u; // 8007ED90
  c->r[6]=c->r[3]+0x00000001u; // 8007ED94
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007ED98
  c->r[0]=c->r[6]+0x00000001u; // 8007ED9C
  c->r[3]=c->r[1]+0x00000008u; // 8007EDA0
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007EDA4
  c->r[4]=0u+0x00000040u; // 8007EDA8
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007EDAC
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007EDB0
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007EDB4
  c->lr=0x8007EDBCu; f_8007D45C(c); // 8007EDB8
  c->lr=0x8007EDC0u; f_8007D004(c); // 8007EDBC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007EDC0
  c->r[3]=0u+0x00000000u; // 8007EDC4
  c->lr=c->r[0]; // 8007EDC8
  c->r[1]=c->r[1]+0x00000050u; // 8007EDCC
  return; // 8007EDD0
}

// TRKDoReadMemory
void f_8007EDD4(Ctx* __restrict c) {
  trace_call(0x8007EDD4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8007EDD4
  c->r[12]=c->r[1]|c->r[1]; // 8007EDD8
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 8007EDDC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EDE0
  c->r[0]=c->lr; // 8007EDE4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8007EDE8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8007EDEC
  c->r[31]=0u+0x00000000u; // 8007EDF0
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8007EDF4
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8007EDF8
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8007EDFC
  c->r[28]=c->r[3]|c->r[3]; // 8007EE00
  c->r[30]=R8(c->r[3]+0x00000014u); // 8007EE04
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8007EE08
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 8007EE0C
  c->r[3]=R16(c->r[3]+0x00000018u); // 8007EE10
  if (crb(c,2)) { goto L_8007EE68; } // 8007EE14
  c->r[3]=c->r[1]+0x00000068u; // 8007EE18
  c->r[4]=0u+0x00000000u; // 8007EE1C
  c->r[5]=0u+0x00000040u; // 8007EE20
  c->lr=0x8007EE28u; f_8007CC24(c); // 8007EE24
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007EE28
  c->r[0]=0u+0x00000080u; // 8007EE2C
  c->r[4]=0u+0x00000040u; // 8007EE30
  c->r[5]=0u+0x00000012u; // 8007EE34
  c->r[6]=c->r[3]+0x00000001u; // 8007EE38
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 8007EE3C
  c->r[0]=c->r[6]+0x00000001u; // 8007EE40
  c->r[3]=c->r[1]+0x00000068u; // 8007EE44
  W32(c->r[1]+0x00000068u,c->r[4]); // 8007EE48
  c->r[4]=0u+0x00000040u; // 8007EE4C
  W8(c->r[1]+0x00000070u,c->r[5]); // 8007EE50
  W32(c->r[1]+0x00000074u,c->r[6]); // 8007EE54
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007EE58
  c->lr=0x8007EE60u; f_8007D45C(c); // 8007EE5C
  c->r[3]=0u+0x00000000u; // 8007EE60
  goto L_8007EFE4; // 8007EE64
L_8007EE68:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007EE68
  if (!crb(c,2)) { goto L_8007EF38; } // 8007EE6C
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8007EE70
  W32(c->r[1]+0x00000020u,c->r[3]); // 8007EE74
  if (crb(c,2)) { goto L_8007EE84; } // 8007EE78
  c->r[6]=0u+0x00000000u; // 8007EE7C
  goto L_8007EE88; // 8007EE80
L_8007EE84:;
  c->r[6]=0u+0x00000001u; // 8007EE84
L_8007EE88:;
  c->r[4]=c->r[29]|c->r[29]; // 8007EE88
  c->r[3]=c->r[1]+0x00000100u; // 8007EE8C
  c->r[5]=c->r[1]+0x00000020u; // 8007EE90
  c->r[7]=0u+0x00000001u; // 8007EE94
  c->lr=0x8007EE9Cu; f_8007FEE0(c); // 8007EE98
  c->r[31]=c->r[3]|c->r[3]; // 8007EE9C
  c->r[3]=c->r[28]|c->r[28]; // 8007EEA0
  c->r[4]=0u+0x00000000u; // 8007EEA4
  c->lr=0x8007EEACu; f_8007E4F8(c); // 8007EEA8
  cmps(c,0,(int32_t)c->r[31],0); // 8007EEAC
  if (!crb(c,2)) { goto L_8007EF38; } // 8007EEB0
  c->r[3]=c->r[1]+0x000000A8u; // 8007EEB4
  c->r[4]=0u+0x00000000u; // 8007EEB8
  c->r[5]=0u+0x00000040u; // 8007EEBC
  c->lr=0x8007EEC4u; f_8007CC24(c); // 8007EEC0
  c->r[6]=R32(c->r[13]+0xFFFF9100u); // 8007EEC4
  c->r[7]=0u+0x00000080u; // 8007EEC8
  c->r[4]=R32(c->r[1]+0x00000020u); // 8007EECC
  c->r[3]=c->r[28]|c->r[28]; // 8007EED0
  c->r[0]=c->r[6]+0x00000001u; // 8007EED4
  W8(c->r[1]+0x000000B0u,c->r[31]); // 8007EED8
  c->r[5]=c->r[4]+0x00000040u; // 8007EEDC
  c->r[4]=c->r[1]+0x000000A8u; // 8007EEE0
  W32(c->r[1]+0x000000A8u,c->r[5]); // 8007EEE4
  c->r[5]=0u+0x00000040u; // 8007EEE8
  W8(c->r[1]+0x000000ACu,c->r[7]); // 8007EEEC
  W32(c->r[1]+0x000000B4u,c->r[6]); // 8007EEF0
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007EEF4
  c->lr=0x8007EEFCu; f_8007E550(c); // 8007EEF8
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 8007EEFC
  if (crb(c,2)) { goto L_8007EF24; } // 8007EF00
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; // 8007EF04
  c->r[4]=c->r[1]+0x00000100u; // 8007EF08
  c->r[5]=R32(c->r[1]+0x00000020u); // 8007EF0C
  c->r[3]=c->r[28]|c->r[28]; // 8007EF10
  c->r[4]=c->r[4]+c->r[0]; // 8007EF14
  c->lr=0x8007EF1Cu; f_8007E550(c); // 8007EF18
  c->r[31]=c->r[3]|c->r[3]; // 8007EF1C
  goto L_8007EF38; // 8007EF20
L_8007EF24:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 8007EF24
  c->r[3]=c->r[28]|c->r[28]; // 8007EF28
  c->r[4]=c->r[1]+0x00000100u; // 8007EF2C
  c->lr=0x8007EF34u; f_8007E550(c); // 8007EF30
  c->r[31]=c->r[3]|c->r[3]; // 8007EF34
L_8007EF38:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007EF38
  if (crb(c,2)) { goto L_8007EFDC; } // 8007EF3C
  c->r[0]=c->r[31]+0xFFFFF900u; // 8007EF40
  cmpu(c,0,c->r[0],0x00000006u); // 8007EF44
  if (crb(c,1)) { goto L_8007EF8C; } // 8007EF48
  c->r[3]=0u+0x80150000u; // 8007EF4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007EF50
  c->r[3]=c->r[3]+0xFFFFE218u; // 8007EF54
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007EF58
  c->ctr=c->r[3]; // 8007EF5C
  if (true) { switch (c->ctr) { case 0x8007EF64u: goto L_8007EF64; case 0x8007EF6Cu: goto L_8007EF6C; case 0x8007EF74u: goto L_8007EF74; case 0x8007EF7Cu: goto L_8007EF7C; case 0x8007EF84u: goto L_8007EF84; case 0x8007EF8Cu: goto L_8007EF8C; default: break; } dispatch(c,c->ctr); return; } // 8007EF60
L_8007EF64:;
  c->r[31]=0u+0x00000015u; // 8007EF64
  goto L_8007EF90; // 8007EF68
L_8007EF6C:;
  c->r[31]=0u+0x00000013u; // 8007EF6C
  goto L_8007EF90; // 8007EF70
L_8007EF74:;
  c->r[31]=0u+0x00000021u; // 8007EF74
  goto L_8007EF90; // 8007EF78
L_8007EF7C:;
  c->r[31]=0u+0x00000022u; // 8007EF7C
  goto L_8007EF90; // 8007EF80
L_8007EF84:;
  c->r[31]=0u+0x00000020u; // 8007EF84
  goto L_8007EF90; // 8007EF88
L_8007EF8C:;
  c->r[31]=0u+0x00000003u; // 8007EF8C
L_8007EF90:;
  c->r[3]=c->r[1]+0x00000028u; // 8007EF90
  c->r[4]=0u+0x00000000u; // 8007EF94
  c->r[5]=0u+0x00000040u; // 8007EF98
  c->lr=0x8007EFA0u; f_8007CC24(c); // 8007EF9C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007EFA0
  c->r[0]=0u+0x00000080u; // 8007EFA4
  c->r[4]=0u+0x00000040u; // 8007EFA8
  W32(c->r[1]+0x00000028u,c->r[4]); // 8007EFAC
  c->r[5]=c->r[3]+0x00000001u; // 8007EFB0
  c->r[3]=c->r[1]+0x00000028u; // 8007EFB4
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 8007EFB8
  c->r[0]=c->r[5]+0x00000001u; // 8007EFBC
  c->r[4]=0u+0x00000040u; // 8007EFC0
  W8(c->r[1]+0x00000030u,c->r[31]); // 8007EFC4
  W32(c->r[1]+0x00000034u,c->r[5]); // 8007EFC8
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007EFCC
  c->lr=0x8007EFD4u; f_8007D45C(c); // 8007EFD0
  c->r[3]=0u+0x00000000u; // 8007EFD4
  goto L_8007EFE4; // 8007EFD8
L_8007EFDC:;
  c->r[3]=c->r[28]|c->r[28]; // 8007EFDC
  c->lr=0x8007EFE4u; f_8007E38C(c); // 8007EFE0
L_8007EFE4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8007EFE4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8007EFE8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8007EFEC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8007EFF0
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8007EFF4
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8007EFF8
  c->lr=c->r[0]; // 8007EFFC
  c->r[1]=c->r[10]|c->r[10]; // 8007F000
  return; // 8007F004
}

// TRKDoWriteMemory
void f_8007F008(Ctx* __restrict c) {
  trace_call(0x8007F008u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8007F008
  c->r[12]=c->r[1]|c->r[1]; // 8007F00C
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 8007F010
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F014
  c->r[0]=c->lr; // 8007F018
  W32(c->r[12]+0x00000004u,c->r[0]); // 8007F01C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8007F020
  c->r[31]=0u+0x00000000u; // 8007F024
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8007F028
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8007F02C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8007F030
  c->r[28]=c->r[3]|c->r[3]; // 8007F034
  c->r[30]=R8(c->r[3]+0x00000014u); // 8007F038
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8007F03C
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 8007F040
  c->r[0]=R16(c->r[3]+0x00000018u); // 8007F044
  if (crb(c,2)) { goto L_8007F09C; } // 8007F048
  c->r[3]=c->r[1]+0x00000068u; // 8007F04C
  c->r[4]=0u+0x00000000u; // 8007F050
  c->r[5]=0u+0x00000040u; // 8007F054
  c->lr=0x8007F05Cu; f_8007CC24(c); // 8007F058
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F05C
  c->r[0]=0u+0x00000080u; // 8007F060
  c->r[4]=0u+0x00000040u; // 8007F064
  c->r[5]=0u+0x00000012u; // 8007F068
  c->r[6]=c->r[3]+0x00000001u; // 8007F06C
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 8007F070
  c->r[0]=c->r[6]+0x00000001u; // 8007F074
  c->r[3]=c->r[1]+0x00000068u; // 8007F078
  W32(c->r[1]+0x00000068u,c->r[4]); // 8007F07C
  c->r[4]=0u+0x00000040u; // 8007F080
  W8(c->r[1]+0x00000070u,c->r[5]); // 8007F084
  W32(c->r[1]+0x00000074u,c->r[6]); // 8007F088
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F08C
  c->lr=0x8007F094u; f_8007D45C(c); // 8007F090
  c->r[3]=0u+0x00000000u; // 8007F094
  goto L_8007F1F4; // 8007F098
L_8007F09C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007F09C
  if (!crb(c,2)) { goto L_8007F148; } // 8007F0A0
  W32(c->r[1]+0x00000020u,c->r[0]); // 8007F0A4
  c->r[4]=0u+0x00000040u; // 8007F0A8
  c->lr=0x8007F0B0u; f_8007E520(c); // 8007F0AC
  c->r[5]=R32(c->r[1]+0x00000020u); // 8007F0B0
  c->r[3]=c->r[28]|c->r[28]; // 8007F0B4
  c->r[4]=c->r[1]+0x00000100u; // 8007F0B8
  c->lr=0x8007F0C0u; f_8007E5F4(c); // 8007F0BC
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8007F0C0
  if (crb(c,2)) { goto L_8007F0D0; } // 8007F0C4
  c->r[6]=0u+0x00000000u; // 8007F0C8
  goto L_8007F0D4; // 8007F0CC
L_8007F0D0:;
  c->r[6]=0u+0x00000001u; // 8007F0D0
L_8007F0D4:;
  c->r[4]=c->r[29]|c->r[29]; // 8007F0D4
  c->r[3]=c->r[1]+0x00000100u; // 8007F0D8
  c->r[5]=c->r[1]+0x00000020u; // 8007F0DC
  c->r[7]=0u+0x00000000u; // 8007F0E0
  c->lr=0x8007F0E8u; f_8007FEE0(c); // 8007F0E4
  c->r[31]=c->r[3]|c->r[3]; // 8007F0E8
  c->r[3]=c->r[28]|c->r[28]; // 8007F0EC
  c->r[4]=0u+0x00000000u; // 8007F0F0
  c->lr=0x8007F0F8u; f_8007E4F8(c); // 8007F0F4
  cmps(c,0,(int32_t)c->r[31],0); // 8007F0F8
  if (!crb(c,2)) { goto L_8007F148; } // 8007F0FC
  c->r[3]=c->r[1]+0x000000A8u; // 8007F100
  c->r[4]=0u+0x00000000u; // 8007F104
  c->r[5]=0u+0x00000040u; // 8007F108
  c->lr=0x8007F110u; f_8007CC24(c); // 8007F10C
  c->r[6]=R32(c->r[13]+0xFFFF9100u); // 8007F110
  c->r[0]=0u+0x00000040u; // 8007F114
  c->r[4]=0u+0x00000080u; // 8007F118
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8007F11C
  c->r[0]=c->r[6]+0x00000001u; // 8007F120
  c->r[3]=c->r[28]|c->r[28]; // 8007F124
  W8(c->r[1]+0x000000ACu,c->r[4]); // 8007F128
  c->r[4]=c->r[1]+0x000000A8u; // 8007F12C
  c->r[5]=0u+0x00000040u; // 8007F130
  W8(c->r[1]+0x000000B0u,c->r[31]); // 8007F134
  W32(c->r[1]+0x000000B4u,c->r[6]); // 8007F138
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F13C
  c->lr=0x8007F144u; f_8007E550(c); // 8007F140
  c->r[31]=c->r[3]|c->r[3]; // 8007F144
L_8007F148:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007F148
  if (crb(c,2)) { goto L_8007F1EC; } // 8007F14C
  c->r[0]=c->r[31]+0xFFFFF900u; // 8007F150
  cmpu(c,0,c->r[0],0x00000006u); // 8007F154
  if (crb(c,1)) { goto L_8007F19C; } // 8007F158
  c->r[3]=0u+0x80150000u; // 8007F15C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F160
  c->r[3]=c->r[3]+0xFFFFE234u; // 8007F164
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007F168
  c->ctr=c->r[3]; // 8007F16C
  if (true) { switch (c->ctr) { case 0x8007F174u: goto L_8007F174; case 0x8007F17Cu: goto L_8007F17C; case 0x8007F184u: goto L_8007F184; case 0x8007F18Cu: goto L_8007F18C; case 0x8007F194u: goto L_8007F194; case 0x8007F19Cu: goto L_8007F19C; default: break; } dispatch(c,c->ctr); return; } // 8007F170
L_8007F174:;
  c->r[31]=0u+0x00000015u; // 8007F174
  goto L_8007F1A0; // 8007F178
L_8007F17C:;
  c->r[31]=0u+0x00000013u; // 8007F17C
  goto L_8007F1A0; // 8007F180
L_8007F184:;
  c->r[31]=0u+0x00000021u; // 8007F184
  goto L_8007F1A0; // 8007F188
L_8007F18C:;
  c->r[31]=0u+0x00000022u; // 8007F18C
  goto L_8007F1A0; // 8007F190
L_8007F194:;
  c->r[31]=0u+0x00000020u; // 8007F194
  goto L_8007F1A0; // 8007F198
L_8007F19C:;
  c->r[31]=0u+0x00000003u; // 8007F19C
L_8007F1A0:;
  c->r[3]=c->r[1]+0x00000028u; // 8007F1A0
  c->r[4]=0u+0x00000000u; // 8007F1A4
  c->r[5]=0u+0x00000040u; // 8007F1A8
  c->lr=0x8007F1B0u; f_8007CC24(c); // 8007F1AC
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F1B0
  c->r[0]=0u+0x00000080u; // 8007F1B4
  c->r[4]=0u+0x00000040u; // 8007F1B8
  W32(c->r[1]+0x00000028u,c->r[4]); // 8007F1BC
  c->r[5]=c->r[3]+0x00000001u; // 8007F1C0
  c->r[3]=c->r[1]+0x00000028u; // 8007F1C4
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 8007F1C8
  c->r[0]=c->r[5]+0x00000001u; // 8007F1CC
  c->r[4]=0u+0x00000040u; // 8007F1D0
  W8(c->r[1]+0x00000030u,c->r[31]); // 8007F1D4
  W32(c->r[1]+0x00000034u,c->r[5]); // 8007F1D8
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F1DC
  c->lr=0x8007F1E4u; f_8007D45C(c); // 8007F1E0
  c->r[3]=0u+0x00000000u; // 8007F1E4
  goto L_8007F1F4; // 8007F1E8
L_8007F1EC:;
  c->r[3]=c->r[28]|c->r[28]; // 8007F1EC
  c->lr=0x8007F1F4u; f_8007E38C(c); // 8007F1F0
L_8007F1F4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8007F1F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8007F1F8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8007F1FC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8007F200
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8007F204
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8007F208
  c->lr=c->r[0]; // 8007F20C
  c->r[1]=c->r[10]|c->r[10]; // 8007F210
  return; // 8007F214
}

// TRKDoReadRegisters
void f_8007F218(Ctx* __restrict c) {
  trace_call(0x8007F218u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F218
  c->r[0]=c->lr; // 8007F21C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8007F220
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8007F224
  c->r[31]=c->r[3]|c->r[3]; // 8007F228
  c->r[4]=R16(c->r[3]+0x00000018u); // 8007F22C
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 8007F230
  cmpu(c,0,c->r[4],c->r[0]); // 8007F234
  if (!crb(c,1)) { goto L_8007F28C; } // 8007F238
  c->r[3]=c->r[1]+0x00000050u; // 8007F23C
  c->r[4]=0u+0x00000000u; // 8007F240
  c->r[5]=0u+0x00000040u; // 8007F244
  c->lr=0x8007F24Cu; f_8007CC24(c); // 8007F248
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F24C
  c->r[0]=0u+0x00000080u; // 8007F250
  c->r[4]=0u+0x00000040u; // 8007F254
  c->r[5]=0u+0x00000014u; // 8007F258
  c->r[6]=c->r[3]+0x00000001u; // 8007F25C
  W8(c->r[1]+0x00000054u,c->r[0]); // 8007F260
  c->r[0]=c->r[6]+0x00000001u; // 8007F264
  c->r[3]=c->r[1]+0x00000050u; // 8007F268
  W32(c->r[1]+0x00000050u,c->r[4]); // 8007F26C
  c->r[4]=0u+0x00000040u; // 8007F270
  W8(c->r[1]+0x00000058u,c->r[5]); // 8007F274
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8007F278
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F27C
  c->lr=0x8007F284u; f_8007D45C(c); // 8007F280
  c->r[3]=0u+0x00000000u; // 8007F284
  goto L_8007F400; // 8007F288
L_8007F28C:;
  c->r[5]=R32(c->r[13]+0xFFFF9100u); // 8007F28C
  c->r[0]=0u+0x00000080u; // 8007F290
  c->r[6]=0u+0x00000468u; // 8007F294
  W8(c->r[1]+0x00000094u,c->r[0]); // 8007F298
  c->r[0]=c->r[5]+0x00000001u; // 8007F29C
  c->r[4]=0u+0x00000000u; // 8007F2A0
  W32(c->r[1]+0x00000090u,c->r[6]); // 8007F2A4
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 8007F2A8
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F2AC
  c->lr=0x8007F2B4u; f_8007E4F8(c); // 8007F2B0
  c->r[3]=c->r[31]|c->r[31]; // 8007F2B4
  c->r[4]=c->r[1]+0x00000090u; // 8007F2B8
  c->r[5]=0u+0x00000040u; // 8007F2BC
  c->lr=0x8007F2C4u; f_8007E848(c); // 8007F2C0
  c->r[5]=c->r[31]|c->r[31]; // 8007F2C4
  c->r[6]=c->r[1]+0x00000008u; // 8007F2C8
  c->r[3]=0u+0x00000000u; // 8007F2CC
  c->r[4]=0u+0x00000024u; // 8007F2D0
  c->r[7]=0u+0x00000001u; // 8007F2D4
  c->lr=0x8007F2DCu; f_80080030(c); // 8007F2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8007F2DC
  if (!crb(c,2)) { goto L_8007F2FC; } // 8007F2E0
  c->r[5]=c->r[31]|c->r[31]; // 8007F2E4
  c->r[6]=c->r[1]+0x00000008u; // 8007F2E8
  c->r[3]=0u+0x00000000u; // 8007F2EC
  c->r[4]=0u+0x00000021u; // 8007F2F0
  c->r[7]=0u+0x00000001u; // 8007F2F4
  c->lr=0x8007F2FCu; f_80080128(c); // 8007F2F8
L_8007F2FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007F2FC
  if (!crb(c,2)) { goto L_8007F31C; } // 8007F300
  c->r[5]=c->r[31]|c->r[31]; // 8007F304
  c->r[6]=c->r[1]+0x00000008u; // 8007F308
  c->r[3]=0u+0x00000000u; // 8007F30C
  c->r[4]=0u+0x00000060u; // 8007F310
  c->r[7]=0u+0x00000001u; // 8007F314
  c->lr=0x8007F31Cu; f_80080264(c); // 8007F318
L_8007F31C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007F31C
  if (!crb(c,2)) { goto L_8007F33C; } // 8007F320
  c->r[5]=c->r[31]|c->r[31]; // 8007F324
  c->r[6]=c->r[1]+0x00000008u; // 8007F328
  c->r[3]=0u+0x00000000u; // 8007F32C
  c->r[4]=0u+0x0000001Fu; // 8007F330
  c->r[7]=0u+0x00000001u; // 8007F334
  c->lr=0x8007F33Cu; f_800803C8(c); // 8007F338
L_8007F33C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007F33C
  if (crb(c,2)) { goto L_8007F3F8; } // 8007F340
  cmps(c,0,(int32_t)c->r[3],1795); // 8007F344
  if (crb(c,2)) { goto L_8007F378; } // 8007F348
  cmps(c,0,(int32_t)c->r[3],1793); // 8007F34C
  if (crb(c,2)) { goto L_8007F380; } // 8007F350
  cmps(c,0,(int32_t)c->r[3],1794); // 8007F354
  if (crb(c,2)) { goto L_8007F388; } // 8007F358
  cmps(c,0,(int32_t)c->r[3],1796); // 8007F35C
  if (crb(c,2)) { goto L_8007F390; } // 8007F360
  cmps(c,0,(int32_t)c->r[3],1797); // 8007F364
  if (crb(c,2)) { goto L_8007F398; } // 8007F368
  cmps(c,0,(int32_t)c->r[3],1798); // 8007F36C
  if (crb(c,2)) { goto L_8007F3A0; } // 8007F370
  goto L_8007F3A8; // 8007F374
L_8007F378:;
  c->r[31]=0u+0x00000012u; // 8007F378
  goto L_8007F3AC; // 8007F37C
L_8007F380:;
  c->r[31]=0u+0x00000014u; // 8007F380
  goto L_8007F3AC; // 8007F384
L_8007F388:;
  c->r[31]=0u+0x00000015u; // 8007F388
  goto L_8007F3AC; // 8007F38C
L_8007F390:;
  c->r[31]=0u+0x00000021u; // 8007F390
  goto L_8007F3AC; // 8007F394
L_8007F398:;
  c->r[31]=0u+0x00000022u; // 8007F398
  goto L_8007F3AC; // 8007F39C
L_8007F3A0:;
  c->r[31]=0u+0x00000020u; // 8007F3A0
  goto L_8007F3AC; // 8007F3A4
L_8007F3A8:;
  c->r[31]=0u+0x00000003u; // 8007F3A8
L_8007F3AC:;
  c->r[3]=c->r[1]+0x00000010u; // 8007F3AC
  c->r[4]=0u+0x00000000u; // 8007F3B0
  c->r[5]=0u+0x00000040u; // 8007F3B4
  c->lr=0x8007F3BCu; f_8007CC24(c); // 8007F3B8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F3BC
  c->r[0]=0u+0x00000080u; // 8007F3C0
  c->r[4]=0u+0x00000040u; // 8007F3C4
  W32(c->r[1]+0x00000010u,c->r[4]); // 8007F3C8
  c->r[5]=c->r[3]+0x00000001u; // 8007F3CC
  c->r[3]=c->r[1]+0x00000010u; // 8007F3D0
  W8(c->r[1]+0x00000014u,c->r[0]); // 8007F3D4
  c->r[0]=c->r[5]+0x00000001u; // 8007F3D8
  c->r[4]=0u+0x00000040u; // 8007F3DC
  W8(c->r[1]+0x00000018u,c->r[31]); // 8007F3E0
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8007F3E4
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F3E8
  c->lr=0x8007F3F0u; f_8007D45C(c); // 8007F3EC
  c->r[3]=0u+0x00000000u; // 8007F3F0
  goto L_8007F400; // 8007F3F4
L_8007F3F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8007F3F8
  c->lr=0x8007F400u; f_8007E38C(c); // 8007F3FC
L_8007F400:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8007F400
  c->r[31]=R32(c->r[1]+0x000000DCu); // 8007F404
  c->lr=c->r[0]; // 8007F408
  c->r[1]=c->r[1]+0x000000E0u; // 8007F40C
  return; // 8007F410
}

// TRKDoWriteRegisters
void f_8007F414(Ctx* __restrict c) {
  trace_call(0x8007F414u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F414
  c->r[0]=c->lr; // 8007F418
  c->r[4]=0u+0x00000000u; // 8007F41C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8007F420
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8007F424
  W32(c->r[1]+0x000000D8u,c->r[30]); // 8007F428
  W32(c->r[1]+0x000000D4u,c->r[29]); // 8007F42C
  W32(c->r[1]+0x000000D0u,c->r[28]); // 8007F430
  c->r[28]=c->r[3]|c->r[3]; // 8007F434
  c->r[31]=R8(c->r[3]+0x00000014u); // 8007F438
  c->r[30]=R16(c->r[3]+0x00000018u); // 8007F43C
  c->r[29]=R16(c->r[3]+0x0000001Cu); // 8007F440
  c->lr=0x8007F448u; f_8007E520(c); // 8007F444
  cmpu(c,0,c->r[30],c->r[29]); // 8007F448
  if (!crb(c,1)) { goto L_8007F4A0; } // 8007F44C
  c->r[3]=c->r[1]+0x00000050u; // 8007F450
  c->r[4]=0u+0x00000000u; // 8007F454
  c->r[5]=0u+0x00000040u; // 8007F458
  c->lr=0x8007F460u; f_8007CC24(c); // 8007F45C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F460
  c->r[0]=0u+0x00000080u; // 8007F464
  c->r[4]=0u+0x00000040u; // 8007F468
  c->r[5]=0u+0x00000014u; // 8007F46C
  c->r[6]=c->r[3]+0x00000001u; // 8007F470
  W8(c->r[1]+0x00000054u,c->r[0]); // 8007F474
  c->r[0]=c->r[6]+0x00000001u; // 8007F478
  c->r[3]=c->r[1]+0x00000050u; // 8007F47C
  W32(c->r[1]+0x00000050u,c->r[4]); // 8007F480
  c->r[4]=0u+0x00000040u; // 8007F484
  W8(c->r[1]+0x00000058u,c->r[5]); // 8007F488
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8007F48C
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F490
  c->lr=0x8007F498u; f_8007D45C(c); // 8007F494
  c->r[3]=0u+0x00000000u; // 8007F498
  goto L_8007F694; // 8007F49C
L_8007F4A0:;
  c->r[3]=c->r[28]|c->r[28]; // 8007F4A0
  c->r[4]=0u+0x00000040u; // 8007F4A4
  c->lr=0x8007F4ACu; f_8007E520(c); // 8007F4A8
  cmps(c,0,(int32_t)c->r[31],0); // 8007F4AC
  if (crb(c,2)) { goto L_8007F4D0; } // 8007F4B0
  cmps(c,0,(int32_t)c->r[31],1); // 8007F4B4
  if (crb(c,2)) { goto L_8007F4F0; } // 8007F4B8
  cmps(c,0,(int32_t)c->r[31],2); // 8007F4BC
  if (crb(c,2)) { goto L_8007F510; } // 8007F4C0
  cmps(c,0,(int32_t)c->r[31],3); // 8007F4C4
  if (crb(c,2)) { goto L_8007F530; } // 8007F4C8
  goto L_8007F550; // 8007F4CC
L_8007F4D0:;
  c->r[3]=c->r[30]|c->r[30]; // 8007F4D0
  c->r[4]=c->r[29]|c->r[29]; // 8007F4D4
  c->r[5]=c->r[28]|c->r[28]; // 8007F4D8
  c->r[6]=c->r[1]+0x00000008u; // 8007F4DC
  c->r[7]=0u+0x00000000u; // 8007F4E0
  c->lr=0x8007F4E8u; f_80080030(c); // 8007F4E4
  c->r[31]=c->r[3]|c->r[3]; // 8007F4E8
  goto L_8007F554; // 8007F4EC
L_8007F4F0:;
  c->r[3]=c->r[30]|c->r[30]; // 8007F4F0
  c->r[4]=c->r[29]|c->r[29]; // 8007F4F4
  c->r[5]=c->r[28]|c->r[28]; // 8007F4F8
  c->r[6]=c->r[1]+0x00000008u; // 8007F4FC
  c->r[7]=0u+0x00000000u; // 8007F500
  c->lr=0x8007F508u; f_80080128(c); // 8007F504
  c->r[31]=c->r[3]|c->r[3]; // 8007F508
  goto L_8007F554; // 8007F50C
L_8007F510:;
  c->r[3]=c->r[30]|c->r[30]; // 8007F510
  c->r[4]=c->r[29]|c->r[29]; // 8007F514
  c->r[5]=c->r[28]|c->r[28]; // 8007F518
  c->r[6]=c->r[1]+0x00000008u; // 8007F51C
  c->r[7]=0u+0x00000000u; // 8007F520
  c->lr=0x8007F528u; f_80080264(c); // 8007F524
  c->r[31]=c->r[3]|c->r[3]; // 8007F528
  goto L_8007F554; // 8007F52C
L_8007F530:;
  c->r[3]=c->r[30]|c->r[30]; // 8007F530
  c->r[4]=c->r[29]|c->r[29]; // 8007F534
  c->r[5]=c->r[28]|c->r[28]; // 8007F538
  c->r[6]=c->r[1]+0x00000008u; // 8007F53C
  c->r[7]=0u+0x00000000u; // 8007F540
  c->lr=0x8007F548u; f_800803C8(c); // 8007F544
  c->r[31]=c->r[3]|c->r[3]; // 8007F548
  goto L_8007F554; // 8007F54C
L_8007F550:;
  c->r[31]=0u+0x00000703u; // 8007F550
L_8007F554:;
  c->r[3]=c->r[28]|c->r[28]; // 8007F554
  c->r[4]=0u+0x00000000u; // 8007F558
  c->lr=0x8007F560u; f_8007E4F8(c); // 8007F55C
  cmps(c,0,(int32_t)c->r[31],0); // 8007F560
  if (!crb(c,2)) { goto L_8007F5B0; } // 8007F564
  c->r[3]=c->r[1]+0x00000090u; // 8007F568
  c->r[4]=0u+0x00000000u; // 8007F56C
  c->r[5]=0u+0x00000040u; // 8007F570
  c->lr=0x8007F578u; f_8007CC24(c); // 8007F574
  c->r[6]=R32(c->r[13]+0xFFFF9100u); // 8007F578
  c->r[0]=0u+0x00000040u; // 8007F57C
  c->r[4]=0u+0x00000080u; // 8007F580
  W32(c->r[1]+0x00000090u,c->r[0]); // 8007F584
  c->r[0]=c->r[6]+0x00000001u; // 8007F588
  c->r[3]=c->r[28]|c->r[28]; // 8007F58C
  W8(c->r[1]+0x00000094u,c->r[4]); // 8007F590
  c->r[4]=c->r[1]+0x00000090u; // 8007F594
  c->r[5]=0u+0x00000040u; // 8007F598
  W8(c->r[1]+0x00000098u,c->r[31]); // 8007F59C
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 8007F5A0
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F5A4
  c->lr=0x8007F5ACu; f_8007E550(c); // 8007F5A8
  c->r[31]=c->r[3]|c->r[3]; // 8007F5AC
L_8007F5B0:;
  cmps(c,0,(int32_t)c->r[31],1794); // 8007F5B0
  if (crb(c,2)) { goto L_8007F61C; } // 8007F5B4
  if (!crb(c,0)) { goto L_8007F5E0; } // 8007F5B8
  cmps(c,0,(int32_t)c->r[31],770); // 8007F5BC
  if (crb(c,2)) { goto L_8007F614; } // 8007F5C0
  if (!crb(c,0)) { goto L_8007F5D4; } // 8007F5C4
  cmps(c,0,(int32_t)c->r[31],0); // 8007F5C8
  if (crb(c,2)) { goto L_8007F68C; } // 8007F5CC
  goto L_8007F63C; // 8007F5D0
L_8007F5D4:;
  cmps(c,0,(int32_t)c->r[31],1793); // 8007F5D4
  if (!crb(c,0)) { goto L_8007F60C; } // 8007F5D8
  goto L_8007F63C; // 8007F5DC
L_8007F5E0:;
  cmps(c,0,(int32_t)c->r[31],1797); // 8007F5E0
  if (crb(c,2)) { goto L_8007F62C; } // 8007F5E4
  if (!crb(c,0)) { goto L_8007F5F8; } // 8007F5E8
  cmps(c,0,(int32_t)c->r[31],1796); // 8007F5EC
  if (!crb(c,0)) { goto L_8007F624; } // 8007F5F0
  goto L_8007F604; // 8007F5F4
L_8007F5F8:;
  cmps(c,0,(int32_t)c->r[31],1799); // 8007F5F8
  if (!crb(c,0)) { goto L_8007F63C; } // 8007F5FC
  goto L_8007F634; // 8007F600
L_8007F604:;
  c->r[31]=0u+0x00000012u; // 8007F604
  goto L_8007F640; // 8007F608
L_8007F60C:;
  c->r[31]=0u+0x00000014u; // 8007F60C
  goto L_8007F640; // 8007F610
L_8007F614:;
  c->r[31]=0u+0x00000002u; // 8007F614
  goto L_8007F640; // 8007F618
L_8007F61C:;
  c->r[31]=0u+0x00000015u; // 8007F61C
  goto L_8007F640; // 8007F620
L_8007F624:;
  c->r[31]=0u+0x00000021u; // 8007F624
  goto L_8007F640; // 8007F628
L_8007F62C:;
  c->r[31]=0u+0x00000022u; // 8007F62C
  goto L_8007F640; // 8007F630
L_8007F634:;
  c->r[31]=0u+0x00000020u; // 8007F634
  goto L_8007F640; // 8007F638
L_8007F63C:;
  c->r[31]=0u+0x00000003u; // 8007F63C
L_8007F640:;
  c->r[3]=c->r[1]+0x00000010u; // 8007F640
  c->r[4]=0u+0x00000000u; // 8007F644
  c->r[5]=0u+0x00000040u; // 8007F648
  c->lr=0x8007F650u; f_8007CC24(c); // 8007F64C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F650
  c->r[0]=0u+0x00000080u; // 8007F654
  c->r[4]=0u+0x00000040u; // 8007F658
  W32(c->r[1]+0x00000010u,c->r[4]); // 8007F65C
  c->r[5]=c->r[3]+0x00000001u; // 8007F660
  c->r[3]=c->r[1]+0x00000010u; // 8007F664
  W8(c->r[1]+0x00000014u,c->r[0]); // 8007F668
  c->r[0]=c->r[5]+0x00000001u; // 8007F66C
  c->r[4]=0u+0x00000040u; // 8007F670
  W8(c->r[1]+0x00000018u,c->r[31]); // 8007F674
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8007F678
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F67C
  c->lr=0x8007F684u; f_8007D45C(c); // 8007F680
  c->r[3]=0u+0x00000000u; // 8007F684
  goto L_8007F694; // 8007F688
L_8007F68C:;
  c->r[3]=c->r[28]|c->r[28]; // 8007F68C
  c->lr=0x8007F694u; f_8007E38C(c); // 8007F690
L_8007F694:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8007F694
  c->r[31]=R32(c->r[1]+0x000000DCu); // 8007F698
  c->r[30]=R32(c->r[1]+0x000000D8u); // 8007F69C
  c->r[29]=R32(c->r[1]+0x000000D4u); // 8007F6A0
  c->r[28]=R32(c->r[1]+0x000000D0u); // 8007F6A4
  c->lr=c->r[0]; // 8007F6A8
  c->r[1]=c->r[1]+0x000000E0u; // 8007F6AC
  return; // 8007F6B0
}

// TRKDoContinue
void f_8007F6B4(Ctx* __restrict c) {
  trace_call(0x8007F6B4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F6B4
  c->r[0]=c->lr; // 8007F6B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007F6BC
  c->lr=0x8007F6C4u; f_80081054(c); // 8007F6C0
  cmps(c,0,(int32_t)c->r[3],0); // 8007F6C4
  if (!crb(c,2)) { goto L_8007F71C; } // 8007F6C8
  c->r[3]=c->r[1]+0x00000048u; // 8007F6CC
  c->r[4]=0u+0x00000000u; // 8007F6D0
  c->r[5]=0u+0x00000040u; // 8007F6D4
  c->lr=0x8007F6DCu; f_8007CC24(c); // 8007F6D8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F6DC
  c->r[0]=0u+0x00000080u; // 8007F6E0
  c->r[4]=0u+0x00000040u; // 8007F6E4
  c->r[5]=0u+0x00000016u; // 8007F6E8
  c->r[6]=c->r[3]+0x00000001u; // 8007F6EC
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 8007F6F0
  c->r[0]=c->r[6]+0x00000001u; // 8007F6F4
  c->r[3]=c->r[1]+0x00000048u; // 8007F6F8
  W32(c->r[1]+0x00000048u,c->r[4]); // 8007F6FC
  c->r[4]=0u+0x00000040u; // 8007F700
  W8(c->r[1]+0x00000050u,c->r[5]); // 8007F704
  W32(c->r[1]+0x00000054u,c->r[6]); // 8007F708
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F70C
  c->lr=0x8007F714u; f_8007D45C(c); // 8007F710
  c->r[3]=0u+0x00000000u; // 8007F714
  goto L_8007F768; // 8007F718
L_8007F71C:;
  c->r[3]=c->r[1]+0x00000008u; // 8007F71C
  c->r[4]=0u+0x00000000u; // 8007F720
  c->r[5]=0u+0x00000040u; // 8007F724
  c->lr=0x8007F72Cu; f_8007CC24(c); // 8007F728
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F72C
  c->r[0]=0u+0x00000080u; // 8007F730
  c->r[4]=0u+0x00000040u; // 8007F734
  c->r[5]=0u+0x00000000u; // 8007F738
  c->r[6]=c->r[3]+0x00000001u; // 8007F73C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007F740
  c->r[0]=c->r[6]+0x00000001u; // 8007F744
  c->r[3]=c->r[1]+0x00000008u; // 8007F748
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007F74C
  c->r[4]=0u+0x00000040u; // 8007F750
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007F754
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007F758
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F75C
  c->lr=0x8007F764u; f_8007D45C(c); // 8007F760
  c->lr=0x8007F768u; f_8007E030(c); // 8007F764
L_8007F768:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8007F768
  c->lr=c->r[0]; // 8007F76C
  c->r[1]=c->r[1]+0x00000090u; // 8007F770
  return; // 8007F774
}

// TRKDoStep
void f_8007F778(Ctx* __restrict c) {
  trace_call(0x8007F778u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F778
  c->r[0]=c->lr; // 8007F77C
  c->r[4]=0u+0x00000000u; // 8007F780
  W32(c->r[1]+0x00000164u,c->r[0]); // 8007F784
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8007F788
  W32(c->r[1]+0x00000158u,c->r[30]); // 8007F78C
  c->r[30]=c->r[3]|c->r[3]; // 8007F790
  W32(c->r[1]+0x00000154u,c->r[29]); // 8007F794
  W32(c->r[1]+0x00000150u,c->r[28]); // 8007F798
  c->lr=0x8007F7A0u; f_8007E520(c); // 8007F79C
  c->r[31]=R8(c->r[30]+0x00000014u); // 8007F7A0
  c->r[29]=R32(c->r[30]+0x0000001Cu); // 8007F7A4
  cmps(c,0,(int32_t)c->r[31],0); // 8007F7A8
  c->r[28]=R32(c->r[30]+0x00000020u); // 8007F7AC
  if (crb(c,2)) { goto L_8007F7D0; } // 8007F7B0
  cmps(c,0,(int32_t)c->r[31],16); // 8007F7B4
  if (crb(c,2)) { goto L_8007F7D0; } // 8007F7B8
  cmps(c,0,(int32_t)c->r[31],1); // 8007F7BC
  if (crb(c,2)) { goto L_8007F82C; } // 8007F7C0
  cmps(c,0,(int32_t)c->r[31],17); // 8007F7C4
  if (crb(c,2)) { goto L_8007F82C; } // 8007F7C8
  goto L_8007F890; // 8007F7CC
L_8007F7D0:;
  c->r[30]=R8(c->r[30]+0x00000018u); // 8007F7D0
  cmpu(c,0,c->r[30],0x00000001u); // 8007F7D4
  if (!crb(c,0)) { goto L_8007F8E0; } // 8007F7D8
  c->r[3]=c->r[1]+0x00000108u; // 8007F7DC
  c->r[4]=0u+0x00000000u; // 8007F7E0
  c->r[5]=0u+0x00000040u; // 8007F7E4
  c->lr=0x8007F7ECu; f_8007CC24(c); // 8007F7E8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F7EC
  c->r[0]=0u+0x00000080u; // 8007F7F0
  c->r[4]=0u+0x00000040u; // 8007F7F4
  c->r[5]=0u+0x00000011u; // 8007F7F8
  c->r[6]=c->r[3]+0x00000001u; // 8007F7FC
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 8007F800
  c->r[0]=c->r[6]+0x00000001u; // 8007F804
  c->r[3]=c->r[1]+0x00000108u; // 8007F808
  W32(c->r[1]+0x00000108u,c->r[4]); // 8007F80C
  c->r[4]=0u+0x00000040u; // 8007F810
  W8(c->r[1]+0x00000110u,c->r[5]); // 8007F814
  W32(c->r[1]+0x00000114u,c->r[6]); // 8007F818
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F81C
  c->lr=0x8007F824u; f_8007D45C(c); // 8007F820
  c->r[3]=0u+0x00000000u; // 8007F824
  goto L_8007F9DC; // 8007F828
L_8007F82C:;
  c->lr=0x8007F830u; f_80080E50(c); // 8007F82C
  cmpu(c,0,c->r[3],c->r[29]); // 8007F830
  if (crb(c,0)) { goto L_8007F840; } // 8007F834
  cmpu(c,0,c->r[3],c->r[28]); // 8007F838
  if (!crb(c,1)) { goto L_8007F8E0; } // 8007F83C
L_8007F840:;
  c->r[3]=c->r[1]+0x000000C8u; // 8007F840
  c->r[4]=0u+0x00000000u; // 8007F844
  c->r[5]=0u+0x00000040u; // 8007F848
  c->lr=0x8007F850u; f_8007CC24(c); // 8007F84C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F850
  c->r[0]=0u+0x00000080u; // 8007F854
  c->r[4]=0u+0x00000040u; // 8007F858
  c->r[5]=0u+0x00000011u; // 8007F85C
  c->r[6]=c->r[3]+0x00000001u; // 8007F860
  W8(c->r[1]+0x000000CCu,c->r[0]); // 8007F864
  c->r[0]=c->r[6]+0x00000001u; // 8007F868
  c->r[3]=c->r[1]+0x000000C8u; // 8007F86C
  W32(c->r[1]+0x000000C8u,c->r[4]); // 8007F870
  c->r[4]=0u+0x00000040u; // 8007F874
  W8(c->r[1]+0x000000D0u,c->r[5]); // 8007F878
  W32(c->r[1]+0x000000D4u,c->r[6]); // 8007F87C
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F880
  c->lr=0x8007F888u; f_8007D45C(c); // 8007F884
  c->r[3]=0u+0x00000000u; // 8007F888
  goto L_8007F9DC; // 8007F88C
L_8007F890:;
  c->r[3]=c->r[1]+0x00000088u; // 8007F890
  c->r[4]=0u+0x00000000u; // 8007F894
  c->r[5]=0u+0x00000040u; // 8007F898
  c->lr=0x8007F8A0u; f_8007CC24(c); // 8007F89C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F8A0
  c->r[0]=0u+0x00000080u; // 8007F8A4
  c->r[4]=0u+0x00000040u; // 8007F8A8
  c->r[5]=0u+0x00000012u; // 8007F8AC
  c->r[6]=c->r[3]+0x00000001u; // 8007F8B0
  W8(c->r[1]+0x0000008Cu,c->r[0]); // 8007F8B4
  c->r[0]=c->r[6]+0x00000001u; // 8007F8B8
  c->r[3]=c->r[1]+0x00000088u; // 8007F8BC
  W32(c->r[1]+0x00000088u,c->r[4]); // 8007F8C0
  c->r[4]=0u+0x00000040u; // 8007F8C4
  W8(c->r[1]+0x00000090u,c->r[5]); // 8007F8C8
  W32(c->r[1]+0x00000094u,c->r[6]); // 8007F8CC
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F8D0
  c->lr=0x8007F8D8u; f_8007D45C(c); // 8007F8D4
  c->r[3]=0u+0x00000000u; // 8007F8D8
  goto L_8007F9DC; // 8007F8DC
L_8007F8E0:;
  c->lr=0x8007F8E4u; f_80081054(c); // 8007F8E0
  cmps(c,0,(int32_t)c->r[3],0); // 8007F8E4
  if (!crb(c,2)) { goto L_8007F93C; } // 8007F8E8
  c->r[3]=c->r[1]+0x00000048u; // 8007F8EC
  c->r[4]=0u+0x00000000u; // 8007F8F0
  c->r[5]=0u+0x00000040u; // 8007F8F4
  c->lr=0x8007F8FCu; f_8007CC24(c); // 8007F8F8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F8FC
  c->r[0]=0u+0x00000080u; // 8007F900
  c->r[4]=0u+0x00000040u; // 8007F904
  c->r[5]=0u+0x00000016u; // 8007F908
  c->r[6]=c->r[3]+0x00000001u; // 8007F90C
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 8007F910
  c->r[0]=c->r[6]+0x00000001u; // 8007F914
  c->r[3]=c->r[1]+0x00000048u; // 8007F918
  W32(c->r[1]+0x00000048u,c->r[4]); // 8007F91C
  c->r[4]=0u+0x00000040u; // 8007F920
  W8(c->r[1]+0x00000050u,c->r[5]); // 8007F924
  W32(c->r[1]+0x00000054u,c->r[6]); // 8007F928
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F92C
  c->lr=0x8007F934u; f_8007D45C(c); // 8007F930
  c->r[3]=0u+0x00000000u; // 8007F934
  goto L_8007F9DC; // 8007F938
L_8007F93C:;
  c->r[3]=c->r[1]+0x00000008u; // 8007F93C
  c->r[4]=0u+0x00000000u; // 8007F940
  c->r[5]=0u+0x00000040u; // 8007F944
  c->lr=0x8007F94Cu; f_8007CC24(c); // 8007F948
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007F94C
  c->r[0]=0u+0x00000080u; // 8007F950
  c->r[4]=0u+0x00000040u; // 8007F954
  c->r[5]=0u+0x00000000u; // 8007F958
  c->r[6]=c->r[3]+0x00000001u; // 8007F95C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007F960
  c->r[0]=c->r[6]+0x00000001u; // 8007F964
  c->r[3]=c->r[1]+0x00000008u; // 8007F968
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007F96C
  c->r[4]=0u+0x00000040u; // 8007F970
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007F974
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007F978
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007F97C
  c->lr=0x8007F984u; f_8007D45C(c); // 8007F980
  cmps(c,0,(int32_t)c->r[31],0); // 8007F984
  c->r[3]=0u+0x00000000u; // 8007F988
  if (crb(c,2)) { goto L_8007F9AC; } // 8007F98C
  cmps(c,0,(int32_t)c->r[31],16); // 8007F990
  if (crb(c,2)) { goto L_8007F9AC; } // 8007F994
  cmps(c,0,(int32_t)c->r[31],1); // 8007F998
  if (crb(c,2)) { goto L_8007F9C4; } // 8007F99C
  cmps(c,0,(int32_t)c->r[31],17); // 8007F9A0
  if (crb(c,2)) { goto L_8007F9C4; } // 8007F9A4
  goto L_8007F9DC; // 8007F9A8
L_8007F9AC:;
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 8007F9AC
  c->r[3]=c->r[30]|c->r[30]; // 8007F9B0
  c->r[0]=cntlz(c->r[0]); // 8007F9B4
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007F9B8
  c->lr=0x8007F9C0u; f_80080D54(c); // 8007F9BC
  goto L_8007F9DC; // 8007F9C0
L_8007F9C4:;
  c->r[0]=c->r[31]+0xFFFFFFEFu; // 8007F9C4
  c->r[3]=c->r[29]|c->r[29]; // 8007F9C8
  c->r[0]=cntlz(c->r[0]); // 8007F9CC
  c->r[4]=c->r[28]|c->r[28]; // 8007F9D0
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007F9D4
  c->lr=0x8007F9DCu; f_80080DDC(c); // 8007F9D8
L_8007F9DC:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 8007F9DC
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 8007F9E0
  c->r[30]=R32(c->r[1]+0x00000158u); // 8007F9E4
  c->r[29]=R32(c->r[1]+0x00000154u); // 8007F9E8
  c->r[28]=R32(c->r[1]+0x00000150u); // 8007F9EC
  c->lr=c->r[0]; // 8007F9F0
  c->r[1]=c->r[1]+0x00000160u; // 8007F9F4
  return; // 8007F9F8
}

// TRKDoStop
void f_8007F9FC(Ctx* __restrict c) {
  trace_call(0x8007F9FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F9FC
  c->r[0]=c->lr; // 8007FA00
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007FA04
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8007FA08
  c->lr=0x8007FA10u; f_80081074(c); // 8007FA0C
  cmps(c,0,(int32_t)c->r[3],0); // 8007FA10
  if (crb(c,2)) { goto L_8007FA34; } // 8007FA14
  cmps(c,0,(int32_t)c->r[3],1796); // 8007FA18
  if (crb(c,2)) { goto L_8007FA3C; } // 8007FA1C
  cmps(c,0,(int32_t)c->r[3],1797); // 8007FA20
  if (crb(c,2)) { goto L_8007FA44; } // 8007FA24
  cmps(c,0,(int32_t)c->r[3],1798); // 8007FA28
  if (crb(c,2)) { goto L_8007FA4C; } // 8007FA2C
  goto L_8007FA54; // 8007FA30
L_8007FA34:;
  c->r[31]=0u+0x00000000u; // 8007FA34
  goto L_8007FA58; // 8007FA38
L_8007FA3C:;
  c->r[31]=0u+0x00000021u; // 8007FA3C
  goto L_8007FA58; // 8007FA40
L_8007FA44:;
  c->r[31]=0u+0x00000022u; // 8007FA44
  goto L_8007FA58; // 8007FA48
L_8007FA4C:;
  c->r[31]=0u+0x00000020u; // 8007FA4C
  goto L_8007FA58; // 8007FA50
L_8007FA54:;
  c->r[31]=0u+0x00000001u; // 8007FA54
L_8007FA58:;
  c->r[3]=c->r[1]+0x00000008u; // 8007FA58
  c->r[4]=0u+0x00000000u; // 8007FA5C
  c->r[5]=0u+0x00000040u; // 8007FA60
  c->lr=0x8007FA68u; f_8007CC24(c); // 8007FA64
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007FA68
  c->r[0]=0u+0x00000080u; // 8007FA6C
  c->r[4]=0u+0x00000040u; // 8007FA70
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007FA74
  c->r[5]=c->r[3]+0x00000001u; // 8007FA78
  c->r[3]=c->r[1]+0x00000008u; // 8007FA7C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007FA80
  c->r[0]=c->r[5]+0x00000001u; // 8007FA84
  c->r[4]=0u+0x00000040u; // 8007FA88
  W8(c->r[1]+0x00000010u,c->r[31]); // 8007FA8C
  W32(c->r[1]+0x00000014u,c->r[5]); // 8007FA90
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007FA94
  c->lr=0x8007FA9Cu; f_8007D45C(c); // 8007FA98
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8007FA9C
  c->r[3]=0u+0x00000000u; // 8007FAA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007FAA4
  c->lr=c->r[0]; // 8007FAA8
  c->r[1]=c->r[1]+0x00000050u; // 8007FAAC
  return; // 8007FAB0
}

// TRKDoSetOption
void f_8007FAB4(Ctx* __restrict c) {
  trace_call(0x8007FAB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FAB4
  c->r[0]=c->lr; // 8007FAB8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007FABC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8007FAC0
  W32(c->r[1]+0x00000048u,c->r[30]); // 8007FAC4
  c->r[0]=R8(c->r[3]+0x00000014u); // 8007FAC8
  c->r[30]=R8(c->r[3]+0x00000018u); // 8007FACC
  cmpu(c,0,c->r[0],0x00000001u); // 8007FAD0
  if (!crb(c,2)) { goto L_8007FB1C; } // 8007FAD4
  c->r[31]=0u+0x80150000u; // 8007FAD8
  c->r[3]=c->r[31]+0xFFFFE250u; // 8007FADC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007FAE0
  c->lr=0x8007FAE8u; f_80045C80(c); // 8007FAE4
  cmps(c,0,(int32_t)c->r[30],0); // 8007FAE8
  if (crb(c,2)) { goto L_8007FB04; } // 8007FAEC
  c->r[3]=c->r[31]+0xFFFFE250u; // 8007FAF0
  c->r[3]=c->r[3]+0x0000001Fu; // 8007FAF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007FAF8
  c->lr=0x8007FB00u; f_80045C80(c); // 8007FAFC
  goto L_8007FB14; // 8007FB00
L_8007FB04:;
  c->r[3]=c->r[31]+0xFFFFE250u; // 8007FB04
  c->r[3]=c->r[3]+0x00000027u; // 8007FB08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007FB0C
  c->lr=0x8007FB14u; f_80045C80(c); // 8007FB10
L_8007FB14:;
  c->r[3]=c->r[30]|c->r[30]; // 8007FB14
  c->lr=0x8007FB1Cu; f_80081530(c); // 8007FB18
L_8007FB1C:;
  c->r[3]=c->r[1]+0x00000008u; // 8007FB1C
  c->r[4]=0u+0x00000000u; // 8007FB20
  c->r[5]=0u+0x00000040u; // 8007FB24
  c->lr=0x8007FB2Cu; f_8007CC24(c); // 8007FB28
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8007FB2C
  c->r[0]=0u+0x00000080u; // 8007FB30
  c->r[4]=0u+0x00000040u; // 8007FB34
  c->r[5]=0u+0x00000000u; // 8007FB38
  c->r[6]=c->r[3]+0x00000001u; // 8007FB3C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8007FB40
  c->r[0]=c->r[6]+0x00000001u; // 8007FB44
  c->r[3]=c->r[1]+0x00000008u; // 8007FB48
  W32(c->r[1]+0x00000008u,c->r[4]); // 8007FB4C
  c->r[4]=0u+0x00000040u; // 8007FB50
  W8(c->r[1]+0x00000010u,c->r[5]); // 8007FB54
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007FB58
  W32(c->r[13]+0xFFFF9100u,c->r[0]); // 8007FB5C
  c->lr=0x8007FB64u; f_8007D45C(c); // 8007FB60
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8007FB64
  c->r[3]=0u+0x00000000u; // 8007FB68
  c->r[30]=R32(c->r[1]+0x00000048u); // 8007FB6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007FB70
  c->lr=c->r[0]; // 8007FB74
  c->r[1]=c->r[1]+0x00000050u; // 8007FB78
  return; // 8007FB7C
}

// __read_console
void f_8007FB80(Ctx* __restrict c) {
  trace_call(0x8007FB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FB80
  c->r[0]=c->lr; // 8007FB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FB88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FB8C
  c->r[31]=c->r[6]|c->r[6]; // 8007FB90
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FB94
  c->r[30]=c->r[5]|c->r[5]; // 8007FB98
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FB9C
  c->r[29]=c->r[4]|c->r[4]; // 8007FBA0
  c->lr=0x8007FBA8u; f_80081538(c); // 8007FBA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8007FBA8
  if (!crb(c,2)) { goto L_8007FBB8; } // 8007FBAC
  c->r[3]=0u+0x00000001u; // 8007FBB0
  goto L_8007FBCC; // 8007FBB4
L_8007FBB8:;
  c->r[4]=c->r[29]|c->r[29]; // 8007FBB8
  c->r[5]=c->r[30]|c->r[30]; // 8007FBBC
  c->r[6]=c->r[31]|c->r[31]; // 8007FBC0
  c->r[3]=0u+0x00000000u; // 8007FBC4
  c->lr=0x8007FBCCu; f_8007FC50(c); // 8007FBC8
L_8007FBCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FBCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FBD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FBD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FBD8
  c->lr=c->r[0]; // 8007FBDC
  c->r[1]=c->r[1]+0x00000020u; // 8007FBE0
  return; // 8007FBE4
}

// __TRK_write_console
void f_8007FBE8(Ctx* __restrict c) {
  trace_call(0x8007FBE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FBE8
  c->r[0]=c->lr; // 8007FBEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FBF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FBF4
  c->r[31]=c->r[6]|c->r[6]; // 8007FBF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FBFC
  c->r[30]=c->r[5]|c->r[5]; // 8007FC00
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FC04
  c->r[29]=c->r[4]|c->r[4]; // 8007FC08
  c->lr=0x8007FC10u; f_80081538(c); // 8007FC0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8007FC10
  if (!crb(c,2)) { goto L_8007FC20; } // 8007FC14
  c->r[3]=0u+0x00000001u; // 8007FC18
  goto L_8007FC34; // 8007FC1C
L_8007FC20:;
  c->r[4]=c->r[29]|c->r[29]; // 8007FC20
  c->r[5]=c->r[30]|c->r[30]; // 8007FC24
  c->r[6]=c->r[31]|c->r[31]; // 8007FC28
  c->r[3]=0u+0x00000001u; // 8007FC2C
  c->lr=0x8007FC34u; f_8007FC58(c); // 8007FC30
L_8007FC34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FC34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FC38
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FC3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FC40
  c->lr=c->r[0]; // 8007FC44
  c->r[1]=c->r[1]+0x00000020u; // 8007FC48
  return; // 8007FC4C
}

// __read_file
void f_8007FC50(Ctx* __restrict c) {
  trace_call(0x8007FC50u);
  c->r[7]=0u+0x000000D1u; // 8007FC50
  f_8007FC60(c); return; // 8007FC54
}

// __write_file
void f_8007FC58(Ctx* __restrict c) {
  trace_call(0x8007FC58u);
  c->r[7]=0u+0x000000D0u; // 8007FC58
  f_8007FC60(c); return; // 8007FC5C
}

// __access_file
void f_8007FC60(Ctx* __restrict c) {
  trace_call(0x8007FC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FC60
  c->r[0]=c->lr; // 8007FC64
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FC68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FC6C
  c->r[31]=c->r[7]|c->r[7]; // 8007FC70
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FC74
  c->r[30]=c->r[5]|c->r[5]; // 8007FC78
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FC7C
  c->r[29]=c->r[4]|c->r[4]; // 8007FC80
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007FC84
  c->r[28]=c->r[3]|c->r[3]; // 8007FC88
  c->lr=0x8007FC90u; f_8007EBFC(c); // 8007FC8C
  cmps(c,0,(int32_t)c->r[3],0); // 8007FC90
  if (!crb(c,2)) { goto L_8007FCA0; } // 8007FC94
  c->r[3]=0u+0x00000001u; // 8007FC98
  goto L_8007FCEC; // 8007FC9C
L_8007FCA0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8007FCA0
  c->r[3]=c->r[31]|c->r[31]; // 8007FCA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007FCA8
  c->r[4]=c->r[28]|c->r[28]; // 8007FCAC
  c->r[6]=c->r[29]|c->r[29]; // 8007FCB0
  c->r[5]=c->r[1]+0x00000008u; // 8007FCB4
  c->lr=0x8007FCBCu; f_8007C478(c); // 8007FCB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8007FCBC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8007FCC0
  W32(c->r[30]+0x00000000u,c->r[3]); // 8007FCC4
  if (crb(c,2)) { goto L_8007FCD8; } // 8007FCC8
  cmps(c,0,(int32_t)c->r[0],2); // 8007FCCC
  if (crb(c,2)) { goto L_8007FCE0; } // 8007FCD0
  goto L_8007FCE8; // 8007FCD4
L_8007FCD8:;
  c->r[3]=0u+0x00000000u; // 8007FCD8
  goto L_8007FCEC; // 8007FCDC
L_8007FCE0:;
  c->r[3]=0u+0x00000002u; // 8007FCE0
  goto L_8007FCEC; // 8007FCE4
L_8007FCE8:;
  c->r[3]=0u+0x00000001u; // 8007FCE8
L_8007FCEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FCEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FCF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FCF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FCF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007FCFC
  c->lr=c->r[0]; // 8007FD00
  c->r[1]=c->r[1]+0x00000020u; // 8007FD04
  return; // 8007FD08
}

// __TRK_get_MSR
void f_8007FD0C(Ctx* __restrict c) {
  trace_call(0x8007FD0Cu);
  c->r[3]=c->msr; // 8007FD0C
  return; // 8007FD10
}

// __TRK_set_MSR
void f_8007FD14(Ctx* __restrict c) {
  trace_call(0x8007FD14u);
  c->msr=c->r[3]; // 8007FD14
  return; // 8007FD18
}

// TRKValidMemory32
void f_8007FD1C(Ctx* __restrict c) {
  trace_call(0x8007FD1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FD1C
  c->r[0]=c->lr; // 8007FD20
  c->r[4]=c->r[4]+c->r[3]; // 8007FD24
  c->r[6]=0u+0x00000700u; // 8007FD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007FD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007FD30
  c->r[31]=c->r[4]+0xFFFFFFFFu; // 8007FD34
  cmpu(c,0,c->r[31],c->r[3]); // 8007FD38
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007FD3C
  c->r[30]=c->r[5]|c->r[5]; // 8007FD40
  if (!crb(c,0)) { goto L_8007FD50; } // 8007FD44
  c->r[3]=0u+0x00000700u; // 8007FD48
  goto L_8007FDFC; // 8007FD4C
L_8007FD50:;
  c->r[4]=0u+0x80130000u; // 8007FD50
  c->r[4]=c->r[4]+0xFFFF9BB0u; // 8007FD54
  c->r[0]=R32(c->r[4]+0x00000004u); // 8007FD58
  cmpu(c,0,c->r[3],c->r[0]); // 8007FD5C
  if (crb(c,1)) { goto L_8007FDF8; } // 8007FD60
  c->r[0]=R32(c->r[4]+0x00000000u); // 8007FD64
  cmpu(c,0,c->r[31],c->r[0]); // 8007FD68
  if (crb(c,0)) { goto L_8007FDF8; } // 8007FD6C
  cmps(c,0,(int32_t)c->r[5],0); // 8007FD70
  if (!crb(c,2)) { goto L_8007FD84; } // 8007FD74
  c->r[0]=R32(c->r[4]+0x00000008u); // 8007FD78
  cmps(c,0,(int32_t)c->r[0],0); // 8007FD7C
  if (crb(c,2)) { goto L_8007FDA0; } // 8007FD80
L_8007FD84:;
  cmps(c,0,(int32_t)c->r[5],1); // 8007FD84
  if (!crb(c,2)) { goto L_8007FDA8; } // 8007FD88
  c->r[4]=0u+0x80130000u; // 8007FD8C
  c->r[4]=c->r[4]+0xFFFF9BB0u; // 8007FD90
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8007FD94
  cmps(c,0,(int32_t)c->r[0],0); // 8007FD98
  if (!crb(c,2)) { goto L_8007FDA8; } // 8007FD9C
L_8007FDA0:;
  c->r[6]=0u+0x00000700u; // 8007FDA0
  goto L_8007FDF8; // 8007FDA4
L_8007FDA8:;
  c->r[4]=0u+0x80130000u; // 8007FDA8
  c->r[6]=0u+0x00000000u; // 8007FDAC
  c->r[0]=R32(c->r[4]+0xFFFF9BB0u); // 8007FDB0
  cmpu(c,0,c->r[3],c->r[0]); // 8007FDB4
  if (!crb(c,0)) { goto L_8007FDCC; } // 8007FDB8
  c->r[5]=c->r[30]|c->r[30]; // 8007FDBC
  c->r[4]=c->r[0]-c->r[3]; // 8007FDC0
  c->lr=0x8007FDC8u; f_8007FD1C(c); // 8007FDC4
  c->r[6]=c->r[3]|c->r[3]; // 8007FDC8
L_8007FDCC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8007FDCC
  if (!crb(c,2)) { goto L_8007FDF8; } // 8007FDD0
  c->r[3]=0u+0x80130000u; // 8007FDD4
  c->r[3]=c->r[3]+0xFFFF9BB0u; // 8007FDD8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007FDDC
  cmpu(c,0,c->r[31],c->r[3]); // 8007FDE0
  if (!crb(c,1)) { goto L_8007FDF8; } // 8007FDE4
  c->r[5]=c->r[30]|c->r[30]; // 8007FDE8
  c->r[4]=c->r[31]-c->r[3]; // 8007FDEC
  c->lr=0x8007FDF4u; f_8007FD1C(c); // 8007FDF0
  c->r[6]=c->r[3]|c->r[3]; // 8007FDF4
L_8007FDF8:;
  c->r[3]=c->r[6]|c->r[6]; // 8007FDF8
L_8007FDFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007FDFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007FE00
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007FE04
  c->lr=c->r[0]; // 8007FE08
  c->r[1]=c->r[1]+0x00000010u; // 8007FE0C
  return; // 8007FE10
}

// TRK_ppc_memcpy
void f_8007FE14(Ctx* __restrict c) {
  trace_call(0x8007FE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FE14
  c->r[0]=c->lr; // 8007FE18
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007FE1C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007FE20
  c->r[29]=c->r[3]|c->r[3]; // 8007FE24
  c->r[30]=c->r[4]|c->r[4]; // 8007FE28
  c->r[26]=c->r[5]|c->r[5]; // 8007FE2C
  c->r[27]=c->r[6]|c->r[6]; // 8007FE30
  c->r[28]=c->r[7]|c->r[7]; // 8007FE34
  c->lr=0x8007FE3Cu; f_8007FD0C(c); // 8007FE38
  c->r[31]=c->r[3]|c->r[3]; // 8007FE3C
  c->r[25]=0u+0x000000FFu; // 8007FE40
  goto L_8007FEBC; // 8007FE44
L_8007FE48:;
  c->r[3]=c->r[28]|c->r[28]; // 8007FE48
  c->lr=0x8007FE50u; f_8007FD14(c); // 8007FE4C
  c->r[3]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8007FE50
  c->r[0]=c->r[30]-c->r[3]; // 8007FE54
  c->r[3]=R32(c->r[3]+0x00000000u); // 8007FE58
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007FE5C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007FE60
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8007FE64
  c->r[24]=rotl(c->r[0],0)&0x000000FFu; // 8007FE68
  /* sync */ // 8007FE6C
  c->r[3]=c->r[27]|c->r[27]; // 8007FE70
  c->lr=0x8007FE78u; f_8007FD14(c); // 8007FE74
  c->r[6]=rotl(c->r[29],0)&0xFFFFFFFCu; // 8007FE78
  c->r[0]=c->r[29]-c->r[6]; // 8007FE7C
  c->r[5]=R32(c->r[6]+0x00000000u); // 8007FE80
  c->r[3]=addc(c,~c->r[0],0x00000003u,1); // 8007FE84
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8007FE88
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8007FE8C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007FE90
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 8007FE94
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 8007FE98
  c->r[3]=c->r[5]&~c->r[4]; // 8007FE9C
  c->r[0]=c->r[4]&c->r[0]; // 8007FEA0
  c->r[0]=c->r[3]|c->r[0]; // 8007FEA4
  W32(c->r[6]+0x00000000u,c->r[0]); // 8007FEA8
  /* sync */ // 8007FEAC
  c->r[30]=c->r[30]+0x00000001u; // 8007FEB0
  c->r[29]=c->r[29]+0x00000001u; // 8007FEB4
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 8007FEB8
L_8007FEBC:;
  cmps(c,0,(int32_t)c->r[26],0); // 8007FEBC
  if (!crb(c,2)) { IRQCHK(c); goto L_8007FE48; } // 8007FEC0
  c->r[3]=c->r[31]|c->r[31]; // 8007FEC4
  c->lr=0x8007FECCu; f_8007FD14(c); // 8007FEC8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8007FECC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007FED0
  c->lr=c->r[0]; // 8007FED4
  c->r[1]=c->r[1]+0x00000030u; // 8007FED8
  return; // 8007FEDC
}

// TRKTargetAccessMemory
void f_8007FEE0(Ctx* __restrict c) {
  trace_call(0x8007FEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FEE0
  c->r[0]=c->lr; // 8007FEE4
  c->r[8]=0u+0x80150000u; // 8007FEE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8007FEEC
  c->r[8]=c->r[8]+0xFFFFE280u; // 8007FEF0
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8007FEF4
  c->r[26]=c->r[4]|c->r[4]; // 8007FEF8
  c->r[31]=c->r[5]|c->r[5]; // 8007FEFC
  c->r[25]=c->r[3]|c->r[3]; // 8007FF00
  c->r[30]=0u+0x00000000u; // 8007FF04
  c->r[27]=c->r[7]|c->r[7]; // 8007FF08
  c->r[3]=c->r[26]|c->r[26]; // 8007FF0C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 8007FF10
  c->r[6]=R32(c->r[8]+0x00000000u); // 8007FF14
  c->r[5]=R32(c->r[8]+0x00000004u); // 8007FF18
  c->r[4]=R32(c->r[8]+0x00000008u); // 8007FF1C
  W32(c->r[1]+0x00000008u,c->r[6]); // 8007FF20
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8007FF24
  W32(c->r[1]+0x00000010u,c->r[4]); // 8007FF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007FF2C
  W8(c->r[8]+0x0000000Du,c->r[30]); // 8007FF30
  c->lr=0x8007FF38u; f_8007CF9C(c); // 8007FF34
  c->r[0]=cntlz(c->r[27]); // 8007FF38
  c->r[4]=R32(c->r[31]+0x00000000u); // 8007FF3C
  c->r[28]=c->r[3]|c->r[3]; // 8007FF40
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007FF44
  c->lr=0x8007FF4Cu; f_8007FD1C(c); // 8007FF48
  cmps(c,0,(int32_t)c->r[3],0); // 8007FF4C
  c->r[29]=c->r[3]|c->r[3]; // 8007FF50
  if (crb(c,2)) { goto L_8007FF60; } // 8007FF54
  W32(c->r[31]+0x00000000u,c->r[30]); // 8007FF58
  goto L_8007FFD4; // 8007FF5C
L_8007FF60:;
  c->lr=0x8007FF64u; f_8007FD0C(c); // 8007FF60
  c->r[4]=0u+0x801C0000u; // 8007FF64
  cmps(c,0,(int32_t)c->r[27],0); // 8007FF68
  c->r[4]=c->r[4]+0xFFFF94F0u; // 8007FF6C
  c->r[8]=c->r[3]|c->r[3]; // 8007FF70
  c->r[0]=R32(c->r[4]+0x000001F8u); // 8007FF74
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 8007FF78
  c->r[7]=c->r[3]|c->r[0]; // 8007FF7C
  if (crb(c,2)) { goto L_8007FF9C; } // 8007FF80
  c->r[5]=R32(c->r[31]+0x00000000u); // 8007FF84
  c->r[3]=c->r[25]|c->r[25]; // 8007FF88
  c->r[4]=c->r[28]|c->r[28]; // 8007FF8C
  c->r[6]=c->r[8]|c->r[8]; // 8007FF90
  c->lr=0x8007FF98u; f_8007FE14(c); // 8007FF94
  goto L_8007FFD4; // 8007FF98
L_8007FF9C:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 8007FF9C
  c->r[6]=c->r[7]|c->r[7]; // 8007FFA0
  c->r[3]=c->r[28]|c->r[28]; // 8007FFA4
  c->r[4]=c->r[25]|c->r[25]; // 8007FFA8
  c->r[7]=c->r[8]|c->r[8]; // 8007FFAC
  c->lr=0x8007FFB4u; f_8007FE14(c); // 8007FFB0
  c->r[4]=R32(c->r[31]+0x00000000u); // 8007FFB4
  c->r[3]=c->r[28]|c->r[28]; // 8007FFB8
  c->lr=0x8007FFC0u; f_8007C988(c); // 8007FFBC
  cmpu(c,0,c->r[26],c->r[28]); // 8007FFC0
  if (crb(c,2)) { goto L_8007FFD4; } // 8007FFC4
  c->r[4]=R32(c->r[31]+0x00000000u); // 8007FFC8
  c->r[3]=c->r[26]|c->r[26]; // 8007FFCC
  c->lr=0x8007FFD4u; f_8007C988(c); // 8007FFD0
L_8007FFD4:;
  c->r[3]=0u+0x80150000u; // 8007FFD4
  c->r[3]=c->r[3]+0xFFFFE280u; // 8007FFD8
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8007FFDC
  cmps(c,0,(int32_t)c->r[0],0); // 8007FFE0
  if (crb(c,2)) { goto L_8007FFF4; } // 8007FFE4
  c->r[0]=0u+0x00000000u; // 8007FFE8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8007FFEC
  c->r[29]=0u+0x00000702u; // 8007FFF0
L_8007FFF4:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 8007FFF4
  c->r[7]=0u+0x80150000u; // 8007FFF8
  {uint32_t ea=c->r[7]+0xFFFFE280u; W32(ea,c->r[6]); c->r[7]=ea;} // 8007FFFC
  c->r[3]=c->r[29]|c->r[29]; // 80080000
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80080004
  c->r[4]=R32(c->r[1]+0x00000010u); // 80080008
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008000C
  W32(c->r[7]+0x00000004u,c->r[5]); // 80080010
  W32(c->r[7]+0x00000008u,c->r[4]); // 80080014
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 80080018
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008001C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80080020
  c->lr=c->r[0]; // 80080024
  c->r[1]=c->r[1]+0x00000040u; // 80080028
  return; // 8008002C
}

// TRKTargetAccessDefault
void f_80080030(Ctx* __restrict c) {
  trace_call(0x80080030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080030
  c->r[0]=c->lr; // 80080034
  cmpu(c,0,c->r[4],0x00000024u); // 80080038
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008003C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80080040
  W32(c->r[1]+0x00000018u,c->r[30]); // 80080044
  c->r[30]=c->r[6]|c->r[6]; // 80080048
  if (!crb(c,1)) { goto L_80080058; } // 8008004C
  c->r[3]=0u+0x00000701u; // 80080050
  goto L_80080110; // 80080054
L_80080058:;
  c->r[12]=0u+0x80150000u; // 80080058
  c->r[4]=c->r[4]-c->r[3]; // 8008005C
  c->r[12]=c->r[12]+0xFFFFE280u; // 80080060
  cmps(c,0,(int32_t)c->r[7],0); // 80080064
  c->r[9]=R32(c->r[12]+0x0000000Cu); // 80080068
  c->r[8]=0u+0x801C0000u; // 8008006C
  c->r[11]=R32(c->r[12]+0x00000000u); // 80080070
  c->r[0]=0u+0x00000000u; // 80080074
  c->r[10]=R32(c->r[12]+0x00000004u); // 80080078
  c->r[31]=c->r[4]+0x00000001u; // 8008007C
  c->r[7]=R32(c->r[12]+0x00000008u); // 80080080
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80080084
  W8(c->r[12]+0x0000000Du,c->r[0]); // 80080088
  c->r[8]=c->r[8]+0xFFFF94F0u; // 8008008C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80080090
  W32(c->r[1]+0x00000008u,c->r[11]); // 80080094
  c->r[4]=c->r[8]+c->r[3]; // 80080098
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8008009C
  W32(c->r[1]+0x00000010u,c->r[7]); // 800800A0
  W32(c->r[1]+0x00000014u,c->r[9]); // 800800A4
  W32(c->r[6]+0x00000000u,c->r[0]); // 800800A8
  if (crb(c,2)) { goto L_800800C0; } // 800800AC
  c->r[3]=c->r[5]|c->r[5]; // 800800B0
  c->r[5]=c->r[31]|c->r[31]; // 800800B4
  c->lr=0x800800BCu; f_8007E8AC(c); // 800800B8
  goto L_800800CC; // 800800BC
L_800800C0:;
  c->r[3]=c->r[5]|c->r[5]; // 800800C0
  c->r[5]=c->r[31]|c->r[31]; // 800800C4
  c->lr=0x800800CCu; f_8007EB14(c); // 800800C8
L_800800CC:;
  c->r[4]=0u+0x80150000u; // 800800CC
  c->r[4]=c->r[4]+0xFFFFE280u; // 800800D0
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800800D4
  cmps(c,0,(int32_t)c->r[0],0); // 800800D8
  if (crb(c,2)) { goto L_800800EC; } // 800800DC
  c->r[0]=0u+0x00000000u; // 800800E0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800800E4
  c->r[3]=0u+0x00000702u; // 800800E8
L_800800EC:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800800EC
  c->r[7]=0u+0x80150000u; // 800800F0
  {uint32_t ea=c->r[7]+0xFFFFE280u; W32(ea,c->r[6]); c->r[7]=ea;} // 800800F4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800800F8
  c->r[4]=R32(c->r[1]+0x00000010u); // 800800FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080100
  W32(c->r[7]+0x00000004u,c->r[5]); // 80080104
  W32(c->r[7]+0x00000008u,c->r[4]); // 80080108
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8008010C
L_80080110:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80080110
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80080114
  c->r[30]=R32(c->r[1]+0x00000018u); // 80080118
  c->lr=c->r[0]; // 8008011C
  c->r[1]=c->r[1]+0x00000020u; // 80080120
  return; // 80080124
}

// TRKTargetAccessFP
void f_80080128(Ctx* __restrict c) {
  trace_call(0x80080128u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080128
  c->r[0]=c->lr; // 8008012C
  cmpu(c,0,c->r[4],0x00000021u); // 80080130
  W32(c->r[1]+0x00000044u,c->r[0]); // 80080134
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080138
  c->r[26]=c->r[3]|c->r[3]; // 8008013C
  c->r[27]=c->r[4]|c->r[4]; // 80080140
  c->r[28]=c->r[5]|c->r[5]; // 80080144
  c->r[29]=c->r[6]|c->r[6]; // 80080148
  c->r[30]=c->r[7]|c->r[7]; // 8008014C
  if (!crb(c,1)) { goto L_8008015C; } // 80080150
  c->r[3]=0u+0x00000701u; // 80080154
  goto L_80080250; // 80080158
L_8008015C:;
  c->r[6]=0u+0x80150000u; // 8008015C
  c->r[31]=0u+0x00000000u; // 80080160
  c->r[6]=c->r[6]+0xFFFFE280u; // 80080164
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80080168
  c->r[5]=R32(c->r[6]+0x00000000u); // 8008016C
  c->r[4]=R32(c->r[6]+0x00000004u); // 80080170
  c->r[3]=R32(c->r[6]+0x00000008u); // 80080174
  W32(c->r[1]+0x00000010u,c->r[5]); // 80080178
  W32(c->r[1]+0x00000014u,c->r[4]); // 8008017C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80080180
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80080184
  W8(c->r[6]+0x0000000Du,c->r[31]); // 80080188
  c->lr=0x80080190u; f_8007FD0C(c); // 8008018C
  c->r[3]=c->r[3]|0x00002000u; // 80080190
  c->lr=0x80080198u; f_8007FD14(c); // 80080194
  W32(c->r[29]+0x00000000u,c->r[31]); // 80080198
  c->r[3]=0u+0x00000000u; // 8008019C
  goto L_800801FC; // 800801A0
L_800801A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800801A4
  if (crb(c,2)) { goto L_800801D0; } // 800801A8
  c->r[4]=c->r[26]|c->r[26]; // 800801AC
  c->r[5]=c->r[30]|c->r[30]; // 800801B0
  c->r[3]=c->r[1]+0x00000008u; // 800801B4
  c->lr=0x800801BCu; f_80081258(c); // 800801B8
  c->r[5]=R32(c->r[1]+0x00000008u); // 800801BC
  c->r[3]=c->r[28]|c->r[28]; // 800801C0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800801C4
  c->lr=0x800801CCu; f_8007E754(c); // 800801C8
  goto L_800801EC; // 800801CC
L_800801D0:;
  c->r[3]=c->r[28]|c->r[28]; // 800801D0
  c->r[4]=c->r[1]+0x00000008u; // 800801D4
  c->lr=0x800801DCu; f_8007E99C(c); // 800801D8
  c->r[4]=c->r[26]|c->r[26]; // 800801DC
  c->r[5]=c->r[30]|c->r[30]; // 800801E0
  c->r[3]=c->r[1]+0x00000008u; // 800801E4
  c->lr=0x800801ECu; f_80081258(c); // 800801E8
L_800801EC:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800801EC
  c->r[26]=c->r[26]+0x00000001u; // 800801F0
  c->r[0]=c->r[4]+0x00000008u; // 800801F4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800801F8
L_800801FC:;
  cmpu(c,0,c->r[26],c->r[27]); // 800801FC
  if (crb(c,1)) { goto L_8008020C; } // 80080200
  cmps(c,0,(int32_t)c->r[3],0); // 80080204
  if (crb(c,2)) { IRQCHK(c); goto L_800801A4; } // 80080208
L_8008020C:;
  c->r[4]=0u+0x80150000u; // 8008020C
  c->r[4]=c->r[4]+0xFFFFE280u; // 80080210
  c->r[0]=R8(c->r[4]+0x0000000Du); // 80080214
  cmps(c,0,(int32_t)c->r[0],0); // 80080218
  if (crb(c,2)) { goto L_8008022C; } // 8008021C
  c->r[0]=0u+0x00000000u; // 80080220
  W32(c->r[29]+0x00000000u,c->r[0]); // 80080224
  c->r[3]=0u+0x00000702u; // 80080228
L_8008022C:;
  c->r[6]=R32(c->r[1]+0x00000010u); // 8008022C
  c->r[7]=0u+0x80150000u; // 80080230
  {uint32_t ea=c->r[7]+0xFFFFE280u; W32(ea,c->r[6]); c->r[7]=ea;} // 80080234
  c->r[5]=R32(c->r[1]+0x00000014u); // 80080238
  c->r[4]=R32(c->r[1]+0x00000018u); // 8008023C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80080240
  W32(c->r[7]+0x00000004u,c->r[5]); // 80080244
  W32(c->r[7]+0x00000008u,c->r[4]); // 80080248
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8008024C
L_80080250:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80080250
  c->r[0]=R32(c->r[1]+0x00000044u); // 80080254
  c->lr=c->r[0]; // 80080258
  c->r[1]=c->r[1]+0x00000040u; // 8008025C
  return; // 80080260
}

// TRKTargetAccessExtended1
void f_80080264(Ctx* __restrict c) {
  trace_call(0x80080264u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080264
  c->r[0]=c->lr; // 80080268
  cmpu(c,0,c->r[4],0x00000060u); // 8008026C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80080270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80080274
  c->r[31]=c->r[6]|c->r[6]; // 80080278
  if (!crb(c,1)) { goto L_80080288; } // 8008027C
  c->r[3]=0u+0x00000701u; // 80080280
  goto L_800803B4; // 80080284
L_80080288:;
  c->r[12]=0u+0x80150000u; // 80080288
  cmpu(c,0,c->r[3],c->r[4]); // 8008028C
  c->r[12]=c->r[12]+0xFFFFE280u; // 80080290
  c->r[0]=0u+0x00000000u; // 80080294
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 80080298
  c->r[11]=R32(c->r[12]+0x00000000u); // 8008029C
  c->r[10]=R32(c->r[12]+0x00000004u); // 800802A0
  c->r[9]=R32(c->r[12]+0x00000008u); // 800802A4
  W8(c->r[12]+0x0000000Du,c->r[0]); // 800802A8
  W32(c->r[1]+0x00000008u,c->r[11]); // 800802AC
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800802B0
  W32(c->r[1]+0x00000010u,c->r[9]); // 800802B4
  W32(c->r[1]+0x00000014u,c->r[8]); // 800802B8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800802BC
  if (crb(c,1)) { goto L_80080370; } // 800802C0
  c->r[4]=c->r[4]-c->r[3]; // 800802C4
  c->r[8]=0u+0x801C0000u; // 800802C8
  c->r[9]=c->r[4]+0x00000001u; // 800802CC
  cmps(c,0,(int32_t)c->r[7],0); // 800802D0
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800802D4
  c->r[8]=c->r[8]+0xFFFF94F0u; // 800802D8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800802DC
  W32(c->r[6]+0x00000000u,c->r[7]); // 800802E0
  c->r[3]=c->r[8]+c->r[0]; // 800802E4
  c->r[4]=c->r[3]+0x000001A8u; // 800802E8
  if (crb(c,2)) { goto L_80080300; } // 800802EC
  c->r[3]=c->r[5]|c->r[5]; // 800802F0
  c->r[5]=c->r[9]|c->r[9]; // 800802F4
  c->lr=0x800802FCu; f_8007E8AC(c); // 800802F8
  goto L_80080370; // 800802FC
L_80080300:;
  c->r[0]=c->r[8]+0x000001ECu; // 80080300
  cmpu(c,0,c->r[4],c->r[0]); // 80080304
  if (crb(c,1)) { goto L_8008032C; } // 80080308
  c->r[3]=c->r[4]+c->r[7]; // 8008030C
  c->r[0]=c->r[8]+0x000001E8u; // 80080310
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 80080314
  cmpu(c,0,c->r[3],c->r[0]); // 80080318
  if (crb(c,0)) { goto L_8008032C; } // 8008031C
  c->r[3]=0u+0x801C0000u; // 80080320
  c->r[0]=0u+0x00000001u; // 80080324
  W8(c->r[3]+0xFFFF9378u,c->r[0]); // 80080328
L_8008032C:;
  c->r[3]=0u+0x801C0000u; // 8008032C
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080330
  c->r[6]=c->r[3]+0x00000278u; // 80080334
  cmpu(c,0,c->r[4],c->r[6]); // 80080338
  if (crb(c,1)) { goto L_80080364; } // 8008033C
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80080340
  c->r[3]=c->r[4]+c->r[0]; // 80080344
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80080348
  cmpu(c,0,c->r[0],c->r[6]); // 8008034C
  if (crb(c,0)) { goto L_80080364; } // 80080350
  c->r[3]=0u+0x801C0000u; // 80080354
  c->r[0]=0u+0x00000001u; // 80080358
  c->r[3]=c->r[3]+0xFFFF9378u; // 8008035C
  W8(c->r[3]+0x00000001u,c->r[0]); // 80080360
L_80080364:;
  c->r[3]=c->r[5]|c->r[5]; // 80080364
  c->r[5]=c->r[9]|c->r[9]; // 80080368
  c->lr=0x80080370u; f_8007EB14(c); // 8008036C
L_80080370:;
  c->r[4]=0u+0x80150000u; // 80080370
  c->r[4]=c->r[4]+0xFFFFE280u; // 80080374
  c->r[0]=R8(c->r[4]+0x0000000Du); // 80080378
  cmps(c,0,(int32_t)c->r[0],0); // 8008037C
  if (crb(c,2)) { goto L_80080390; } // 80080380
  c->r[0]=0u+0x00000000u; // 80080384
  W32(c->r[31]+0x00000000u,c->r[0]); // 80080388
  c->r[3]=0u+0x00000702u; // 8008038C
L_80080390:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 80080390
  c->r[7]=0u+0x80150000u; // 80080394
  {uint32_t ea=c->r[7]+0xFFFFE280u; W32(ea,c->r[6]); c->r[7]=ea;} // 80080398
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8008039C
  c->r[4]=R32(c->r[1]+0x00000010u); // 800803A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800803A4
  W32(c->r[7]+0x00000004u,c->r[5]); // 800803A8
  W32(c->r[7]+0x00000008u,c->r[4]); // 800803AC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800803B0
L_800803B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800803B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800803B8
  c->lr=c->r[0]; // 800803BC
  c->r[1]=c->r[1]+0x00000020u; // 800803C0
  return; // 800803C4
}

// TRKTargetAccessExtended2
void f_800803C8(Ctx* __restrict c) {
  trace_call(0x800803C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800803C8
  c->r[0]=c->lr; // 800803CC
  cmpu(c,0,c->r[4],0x0000001Fu); // 800803D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800803D4
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800803D8
  c->r[26]=c->r[3]|c->r[3]; // 800803DC
  c->r[27]=c->r[4]|c->r[4]; // 800803E0
  c->r[28]=c->r[5]|c->r[5]; // 800803E4
  c->r[29]=c->r[6]|c->r[6]; // 800803E8
  c->r[30]=c->r[7]|c->r[7]; // 800803EC
  if (!crb(c,1)) { goto L_800803FC; } // 800803F0
  c->r[3]=0u+0x00000701u; // 800803F4
  goto L_80080524; // 800803F8
L_800803FC:;
  c->r[9]=0u+0x80150000u; // 800803FC
  c->r[31]=0u+0x00000000u; // 80080400
  c->r[9]=c->r[9]+0xFFFFE280u; // 80080404
  c->r[3]=c->r[1]+0x00000008u; // 80080408
  c->r[0]=R32(c->r[9]+0x0000000Cu); // 8008040C
  c->r[4]=0u+0x00000398u; // 80080410
  c->r[8]=R32(c->r[9]+0x00000000u); // 80080414
  c->r[5]=0u+0x00000001u; // 80080418
  c->r[7]=R32(c->r[9]+0x00000004u); // 8008041C
  c->r[6]=R32(c->r[9]+0x00000008u); // 80080420
  W32(c->r[1]+0x00000018u,c->r[8]); // 80080424
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 80080428
  W32(c->r[1]+0x00000020u,c->r[6]); // 8008042C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80080430
  W8(c->r[9]+0x0000000Du,c->r[31]); // 80080434
  c->lr=0x8008043Cu; f_8008108C(c); // 80080438
  c->r[0]=R32(c->r[1]+0x00000008u); // 8008043C
  c->r[3]=c->r[1]+0x00000008u; // 80080440
  c->r[4]=0u+0x00000398u; // 80080444
  c->r[5]=0u+0x00000000u; // 80080448
  c->r[0]=c->r[0]|0xA0000000u; // 8008044C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80080450
  c->lr=0x80080458u; f_8008108C(c); // 80080454
  W32(c->r[1]+0x00000008u,c->r[31]); // 80080458
  c->r[3]=c->r[1]+0x00000008u; // 8008045C
  c->r[4]=0u+0x00000390u; // 80080460
  c->r[5]=0u+0x00000000u; // 80080464
  c->lr=0x8008046Cu; f_8008108C(c); // 80080468
  W32(c->r[29]+0x00000000u,c->r[31]); // 8008046C
  c->r[3]=0u+0x00000000u; // 80080470
  goto L_800804D0; // 80080474
L_80080478:;
  cmps(c,0,(int32_t)c->r[30],0); // 80080478
  if (crb(c,2)) { goto L_800804A4; } // 8008047C
  c->r[4]=c->r[26]|c->r[26]; // 80080480
  c->r[5]=c->r[30]|c->r[30]; // 80080484
  c->r[3]=c->r[1]+0x00000010u; // 80080488
  c->lr=0x80080490u; f_80081168(c); // 8008048C
  c->r[5]=R32(c->r[1]+0x00000010u); // 80080490
  c->r[3]=c->r[28]|c->r[28]; // 80080494
  c->r[6]=R32(c->r[1]+0x00000014u); // 80080498
  c->lr=0x800804A0u; f_8007E754(c); // 8008049C
  goto L_800804C0; // 800804A0
L_800804A4:;
  c->r[3]=c->r[28]|c->r[28]; // 800804A4
  c->r[4]=c->r[1]+0x00000010u; // 800804A8
  c->lr=0x800804B0u; f_8007E99C(c); // 800804AC
  c->r[4]=c->r[26]|c->r[26]; // 800804B0
  c->r[5]=c->r[30]|c->r[30]; // 800804B4
  c->r[3]=c->r[1]+0x00000010u; // 800804B8
  c->lr=0x800804C0u; f_80081168(c); // 800804BC
L_800804C0:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800804C0
  c->r[26]=c->r[26]+0x00000001u; // 800804C4
  c->r[0]=c->r[4]+0x00000008u; // 800804C8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800804CC
L_800804D0:;
  cmpu(c,0,c->r[26],c->r[27]); // 800804D0
  if (crb(c,1)) { goto L_800804E0; } // 800804D4
  cmps(c,0,(int32_t)c->r[3],0); // 800804D8
  if (crb(c,2)) { IRQCHK(c); goto L_80080478; } // 800804DC
L_800804E0:;
  c->r[4]=0u+0x80150000u; // 800804E0
  c->r[4]=c->r[4]+0xFFFFE280u; // 800804E4
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800804E8
  cmps(c,0,(int32_t)c->r[0],0); // 800804EC
  if (crb(c,2)) { goto L_80080500; } // 800804F0
  c->r[0]=0u+0x00000000u; // 800804F4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800804F8
  c->r[3]=0u+0x00000702u; // 800804FC
L_80080500:;
  c->r[6]=R32(c->r[1]+0x00000018u); // 80080500
  c->r[7]=0u+0x80150000u; // 80080504
  {uint32_t ea=c->r[7]+0xFFFFE280u; W32(ea,c->r[6]); c->r[7]=ea;} // 80080508
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8008050C
  c->r[4]=R32(c->r[1]+0x00000020u); // 80080510
  c->r[0]=R32(c->r[1]+0x00000024u); // 80080514
  W32(c->r[7]+0x00000004u,c->r[5]); // 80080518
  W32(c->r[7]+0x00000008u,c->r[4]); // 8008051C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 80080520
L_80080524:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80080524
  c->r[0]=R32(c->r[1]+0x00000044u); // 80080528
  c->lr=c->r[0]; // 8008052C
  c->r[1]=c->r[1]+0x00000040u; // 80080530
  return; // 80080534
}

// fn_80080538
void f_80080538(Ctx* __restrict c) {
  mtspr(c,26,c->r[2]); // 80080538
  mtspr(c,27,c->r[4]); // 8008053C
  c->r[4]=mfspr(c,275); // 80080540
  c->r[2]=c->cr; // 80080544
  mtspr(c,275,c->r[2]); // 80080548
  c->r[2]=0u+0x801B0000u; // 8008054C
  c->r[2]=c->r[2]|0x00009448u; // 80080550
  c->r[2]=R32(c->r[2]+0x0000008Cu); // 80080554
  c->r[2]=c->r[2]|0x00008002u; // 80080558
  c->r[2]=c->r[2]^0x00008002u; // 8008055C
  /* sync */ // 80080560
  c->msr=c->r[2]; // 80080564
  /* sync */ // 80080568
  c->r[2]=0u+0x80200000u; // 8008056C
  c->r[2]=c->r[2]|0x000043A8u; // 80080570
  W16(c->r[2]+0x00000000u,c->r[3]); // 80080574
  cmps(c,0,(int32_t)c->r[3],1280); // 80080578
  if (!crb(c,2)) { goto L_80080600; } // 8008057C
  c->r[2]=0u+0x801B0000u; // 80080580
  c->r[2]=c->r[2]|0x000094F0u; // 80080584
  c->r[3]=c->lr; // 80080588
  W32(c->r[2]+0x0000042Cu,c->r[3]); // 8008058C
  c->lr=0x80080594u; f_8007D388(c); // 80080590
  c->r[2]=0u+0x801B0000u; // 80080594
  c->r[2]=c->r[2]|0x000094F0u; // 80080598
  c->r[3]=R32(c->r[2]+0x0000042Cu); // 8008059C
  c->lr=c->r[3]; // 800805A0
  c->r[2]=0u+0x801B0000u; // 800805A4
  c->r[2]=c->r[2]|0x00009448u; // 800805A8
  c->r[2]=R32(c->r[2]+0x000000A0u); // 800805AC
  c->r[2]=R8(c->r[2]+0x00000000u); // 800805B0
  cmps(c,0,(int32_t)c->r[2],0); // 800805B4
  if (crb(c,2)) { goto L_800805E4; } // 800805B8
  c->r[2]=0u+0x80140000u; // 800805BC
  c->r[2]=c->r[2]|0x0000E280u; // 800805C0
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 800805C4
  cmps(c,0,(int32_t)c->r[2],1); // 800805C8
  if (crb(c,2)) { goto L_800805E4; } // 800805CC
  c->r[2]=0u+0x801B0000u; // 800805D0
  c->r[2]=c->r[2]|0x00009448u; // 800805D4
  c->r[3]=0u+0x00000001u; // 800805D8
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 800805DC
  goto L_80080600; // 800805E0
L_800805E4:;
  c->r[2]=0u+0x801B0000u; // 800805E4
  c->r[2]=c->r[2]|0x000093A0u; // 800805E8
  c->r[3]=R32(c->r[2]+0x00000088u); // 800805EC
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800805F0
  c->r[3]=R32(c->r[2]+0x0000000Cu); // 800805F4
  c->r[2]=R32(c->r[2]+0x00000008u); // 800805F8
  return; /* rfi */ // 800805FC
L_80080600:;
  c->r[2]=0u+0x80200000u; // 80080600
  c->r[2]=c->r[2]|0x000043A8u; // 80080604
  c->r[3]=R16(c->r[2]+0x00000000u); // 80080608
  c->r[2]=0u+0x80140000u; // 8008060C
  c->r[2]=c->r[2]|0x0000E280u; // 80080610
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 80080614
  cmps(c,0,(int32_t)c->r[2],0); // 80080618
  if (!crb(c,2)) { goto L_800806CC; } // 8008061C
  c->r[2]=0u+0x801B0000u; // 80080620
  c->r[2]=c->r[2]|0x000094F0u; // 80080624
  W32(c->r[2]+0x00000000u,c->r[0]); // 80080628
  W32(c->r[2]+0x00000004u,c->r[1]); // 8008062C
  c->r[0]=mfspr(c,273); // 80080630
  W32(c->r[2]+0x00000008u,c->r[0]); // 80080634
  W16(c->r[2]+0x000002F8u,c->r[3]); // 80080638
  W16(c->r[2]+0x000002FAu,c->r[3]); // 8008063C
  c->r[0]=mfspr(c,274); // 80080640
  W32(c->r[2]+0x0000000Cu,c->r[0]); // 80080644
  {uint32_t ea=c->r[2]+0x00000010u; for(int i=4;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080648
  c->r[27]=mfspr(c,26); // 8008064C
  c->r[28]=c->lr; // 80080650
  c->r[29]=mfspr(c,275); // 80080654
  c->r[30]=c->ctr; // 80080658
  c->r[31]=mfspr(c,1); // 8008065C
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080660
  c->lr=0x80080668u; f_8007E064(c); // 80080664
  c->r[2]=0u+0x80140000u; // 80080668
  c->r[2]=c->r[2]|0x0000E280u; // 8008066C
  c->r[3]=0u+0x00000001u; // 80080670
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 80080674
  c->r[2]=0u+0x801B0000u; // 80080678
  c->r[2]=c->r[2]|0x00009448u; // 8008067C
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 80080680
  /* sync */ // 80080684
  c->msr=c->r[0]; // 80080688
  /* sync */ // 8008068C
  c->r[0]=R32(c->r[2]+0x00000080u); // 80080690
  c->lr=c->r[0]; // 80080694
  c->r[0]=R32(c->r[2]+0x00000084u); // 80080698
  c->ctr=c->r[0]; // 8008069C
  c->r[0]=R32(c->r[2]+0x00000088u); // 800806A0
  mtspr(c,1,c->r[0]); // 800806A4
  c->r[0]=R32(c->r[2]+0x00000094u); // 800806A8
  mtspr(c,18,c->r[0]); // 800806AC
  c->r[0]=R32(c->r[2]+0x00000090u); // 800806B0
  mtspr(c,19,c->r[0]); // 800806B4
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800806B8
  c->r[0]=R32(c->r[2]+0x00000000u); // 800806BC
  c->r[1]=R32(c->r[2]+0x00000004u); // 800806C0
  c->r[2]=R32(c->r[2]+0x00000008u); // 800806C4
  f_80080768(c); return; // 800806C8
L_800806CC:;
  c->r[2]=0u+0x80140000u; // 800806CC
  c->r[2]=c->r[2]|0x0000E280u; // 800806D0
  W16(c->r[2]+0x00000008u,c->r[3]); // 800806D4
  c->r[3]=mfspr(c,26); // 800806D8
  W32(c->r[2]+0x00000000u,c->r[3]); // 800806DC
  c->r[3]=R16(c->r[2]+0x00000008u); // 800806E0
  cmps(c,0,(int32_t)c->r[3],512); // 800806E4
  if (crb(c,2)) { goto L_80080738; } // 800806E8
  cmps(c,0,(int32_t)c->r[3],768); // 800806EC
  if (crb(c,2)) { goto L_80080738; } // 800806F0
  cmps(c,0,(int32_t)c->r[3],1024); // 800806F4
  if (crb(c,2)) { goto L_80080738; } // 800806F8
  cmps(c,0,(int32_t)c->r[3],1536); // 800806FC
  if (crb(c,2)) { goto L_80080738; } // 80080700
  cmps(c,0,(int32_t)c->r[3],1792); // 80080704
  if (crb(c,2)) { goto L_80080738; } // 80080708
  cmps(c,0,(int32_t)c->r[3],2048); // 8008070C
  if (crb(c,2)) { goto L_80080738; } // 80080710
  cmps(c,0,(int32_t)c->r[3],4096); // 80080714
  if (crb(c,2)) { goto L_80080738; } // 80080718
  cmps(c,0,(int32_t)c->r[3],4352); // 8008071C
  if (crb(c,2)) { goto L_80080738; } // 80080720
  cmps(c,0,(int32_t)c->r[3],4608); // 80080724
  if (crb(c,2)) { goto L_80080738; } // 80080728
  cmps(c,0,(int32_t)c->r[3],4864); // 8008072C
  if (crb(c,2)) { goto L_80080738; } // 80080730
  goto L_80080744; // 80080734
L_80080738:;
  c->r[3]=mfspr(c,26); // 80080738
  c->r[3]=c->r[3]+0x00000004u; // 8008073C
  mtspr(c,26,c->r[3]); // 80080740
L_80080744:;
  c->r[2]=0u+0x80140000u; // 80080744
  c->r[2]=c->r[2]|0x0000E280u; // 80080748
  c->r[3]=0u+0x00000001u; // 8008074C
  W8(c->r[2]+0x0000000Du,c->r[3]); // 80080750
  c->r[3]=mfspr(c,275); // 80080754
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 80080758
  c->r[2]=mfspr(c,273); // 8008075C
  c->r[3]=mfspr(c,274); // 80080760
  return; /* rfi */ // 80080764
}

// TRKPostInterruptEvent
void f_80080768(Ctx* __restrict c) {
  trace_call(0x80080768u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080768
  c->r[0]=c->lr; // 8008076C
  c->r[3]=0u+0x801C0000u; // 80080770
  W32(c->r[1]+0x00000024u,c->r[0]); // 80080774
  c->r[3]=c->r[3]+0xFFFF9448u; // 80080778
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 8008077C
  cmps(c,0,(int32_t)c->r[0],0); // 80080780
  if (crb(c,2)) { goto L_80080794; } // 80080784
  c->r[0]=0u+0x00000000u; // 80080788
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 8008078C
  goto L_80080810; // 80080790
L_80080794:;
  c->r[3]=0u+0x801C0000u; // 80080794
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080798
  c->r[0]=R32(c->r[3]+0x000002F8u); // 8008079C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800807A0
  cmps(c,0,(int32_t)c->r[0],1792); // 800807A4
  if (crb(c,2)) { goto L_800807B4; } // 800807A8
  cmps(c,0,(int32_t)c->r[0],3328); // 800807AC
  if (!crb(c,2)) { goto L_800807FC; } // 800807B0
L_800807B4:;
  c->r[3]=0u+0x801C0000u; // 800807B4
  c->r[0]=0u+0x00000004u; // 800807B8
  c->r[3]=c->r[3]+0xFFFF94F0u; // 800807BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800807C0
  c->r[4]=R32(c->r[3]+0x00000080u); // 800807C4
  c->r[3]=c->r[1]+0x0000000Cu; // 800807C8
  c->r[5]=c->r[1]+0x00000008u; // 800807CC
  c->r[6]=0u+0x00000000u; // 800807D0
  c->r[7]=0u+0x00000001u; // 800807D4
  c->lr=0x800807DCu; f_8007FEE0(c); // 800807D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800807DC
  c->r[0]=c->r[3]+0xF0200000u; // 800807E0
  cmpu(c,0,c->r[0],0x00000000u); // 800807E4
  if (!crb(c,2)) { goto L_800807F4; } // 800807E8
  c->r[4]=0u+0x00000005u; // 800807EC
  goto L_80080800; // 800807F0
L_800807F4:;
  c->r[4]=0u+0x00000003u; // 800807F4
  goto L_80080800; // 800807F8
L_800807FC:;
  c->r[4]=0u+0x00000004u; // 800807FC
L_80080800:;
  c->r[3]=c->r[1]+0x00000010u; // 80080800
  c->lr=0x80080808u; f_8007D738(c); // 80080804
  c->r[3]=c->r[1]+0x00000010u; // 80080808
  c->lr=0x80080810u; f_8007D66C(c); // 8008080C
L_80080810:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80080810
  c->lr=c->r[0]; // 80080814
  c->r[1]=c->r[1]+0x00000020u; // 80080818
  return; // 8008081C
}

// fn_80080820
void f_80080820(Ctx* __restrict c) {
  c->r[3]=0u+0x801B0000u; // 80080820
  c->r[3]=c->r[3]|0x00009448u; // 80080824
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80080828
  c->r[0]=c->msr; // 8008082C
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 80080830
  c->r[0]=c->lr; // 80080834
  W32(c->r[3]+0x00000080u,c->r[0]); // 80080838
  c->r[0]=c->ctr; // 8008083C
  W32(c->r[3]+0x00000084u,c->r[0]); // 80080840
  c->r[0]=mfspr(c,1); // 80080844
  W32(c->r[3]+0x00000088u,c->r[0]); // 80080848
  c->r[0]=mfspr(c,18); // 8008084C
  W32(c->r[3]+0x00000094u,c->r[0]); // 80080850
  c->r[0]=mfspr(c,19); // 80080854
  W32(c->r[3]+0x00000090u,c->r[0]); // 80080858
  c->r[1]=0u+0xFFFF8002u; // 8008085C
  c->r[1]=~(c->r[1]|c->r[1]); // 80080860
  c->r[3]=c->msr; // 80080864
  c->r[3]=c->r[3]&c->r[1]; // 80080868
  c->msr=c->r[3]; // 8008086C
  c->r[2]=0u+0x801B0000u; // 80080870
  c->r[2]=c->r[2]|0x00009448u; // 80080874
  c->r[2]=R32(c->r[2]+0x000000A0u); // 80080878
  c->r[2]=R8(c->r[2]+0x00000000u); // 8008087C
  cmps(c,0,(int32_t)c->r[2],0); // 80080880
  if (crb(c,2)) { goto L_8008089C; } // 80080884
  c->r[2]=0u+0x801B0000u; // 80080888
  c->r[2]=c->r[2]|0x00009448u; // 8008088C
  c->r[3]=0u+0x00000001u; // 80080890
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 80080894
  goto L_800808E4; // 80080898
L_8008089C:;
  c->r[2]=0u+0x80140000u; // 8008089C
  c->r[2]=c->r[2]|0x0000E280u; // 800808A0
  c->r[3]=0u+0x00000000u; // 800808A4
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 800808A8
  c->lr=0x800808B0u; f_8007E228(c); // 800808AC
  c->r[2]=0u+0x801B0000u; // 800808B0
  c->r[2]=c->r[2]|0x000094F0u; // 800808B4
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800808B8
  mtspr(c,26,c->r[27]); // 800808BC
  c->lr=c->r[28]; // 800808C0
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[29]&0xFFFFFFFFu); // 800808C4
  c->ctr=c->r[30]; // 800808C8
  mtspr(c,1,c->r[31]); // 800808CC
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800808D0
  c->r[0]=R32(c->r[2]+0x00000000u); // 800808D4
  c->r[1]=R32(c->r[2]+0x00000004u); // 800808D8
  c->r[2]=R32(c->r[2]+0x00000008u); // 800808DC
  return; /* rfi */ // 800808E0
L_800808E4:;
  c->r[2]=0u+0x801B0000u; // 800808E4
  c->r[2]=c->r[2]|0x00009448u; // 800808E8
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 800808EC
  /* sync */ // 800808F0
  c->msr=c->r[0]; // 800808F4
  /* sync */ // 800808F8
  c->r[0]=R32(c->r[2]+0x00000080u); // 800808FC
  c->lr=c->r[0]; // 80080900
  c->r[0]=R32(c->r[2]+0x00000084u); // 80080904
  c->ctr=c->r[0]; // 80080908
  c->r[0]=R32(c->r[2]+0x00000088u); // 8008090C
  mtspr(c,1,c->r[0]); // 80080910
  c->r[0]=R32(c->r[2]+0x00000094u); // 80080914
  mtspr(c,18,c->r[0]); // 80080918
  c->r[0]=R32(c->r[2]+0x00000090u); // 8008091C
  mtspr(c,19,c->r[0]); // 80080920
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80080924
  c->r[0]=R32(c->r[2]+0x00000000u); // 80080928
  c->r[1]=R32(c->r[2]+0x00000004u); // 8008092C
  c->r[2]=R32(c->r[2]+0x00000008u); // 80080930
  f_80080768(c); return; // 80080934
}

// TRKTargetInterrupt
void f_80080938(Ctx* __restrict c) {
  trace_call(0x80080938u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080938
  c->r[0]=c->lr; // 8008093C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080944
  c->r[31]=0u+0x00000000u; // 80080948
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008094C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80080950
  cmpu(c,0,c->r[0],0x00000001u); // 80080954
  if (crb(c,1)) { goto L_8008097C; } // 80080958
  c->lr=0x80080960u; f_80080C30(c); // 8008095C
  cmps(c,0,(int32_t)c->r[3],0); // 80080960
  if (!crb(c,2)) { goto L_8008097C; } // 80080964
  c->r[3]=0u+0x00000001u; // 80080968
  c->lr=0x80080970u; f_80081064(c); // 8008096C
  c->r[3]=0u+0x00000090u; // 80080970
  c->lr=0x80080978u; f_8007D52C(c); // 80080974
  c->r[31]=c->r[3]|c->r[3]; // 80080978
L_8008097C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008097C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080980
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080984
  c->lr=c->r[0]; // 80080988
  c->r[1]=c->r[1]+0x00000010u; // 8008098C
  return; // 80080990
}

// TRKTargetAddStopInfo
void f_80080994(Ctx* __restrict c) {
  trace_call(0x80080994u);
  {uint32_t ea=c->r[1]+0xFFFFFB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080994
  c->r[0]=c->lr; // 80080998
  c->r[4]=0u+0x00000000u; // 8008099C
  c->r[5]=0u+0x00000040u; // 800809A0
  W32(c->r[1]+0x00000474u,c->r[0]); // 800809A4
  W32(c->r[1]+0x0000046Cu,c->r[31]); // 800809A8
  W32(c->r[1]+0x00000468u,c->r[30]); // 800809AC
  W32(c->r[1]+0x00000464u,c->r[29]); // 800809B0
  c->r[29]=c->r[3]|c->r[3]; // 800809B4
  c->r[3]=c->r[1]+0x00000020u; // 800809B8
  c->lr=0x800809C0u; f_8007CC24(c); // 800809BC
  c->r[31]=0u+0x801C0000u; // 800809C0
  c->r[4]=0u+0x000004E8u; // 800809C4
  c->r[31]=c->r[31]+0xFFFF94F0u; // 800809C8
  c->r[5]=0u+0x00000090u; // 800809CC
  c->r[0]=R32(c->r[31]+0x00000080u); // 800809D0
  c->r[3]=c->r[1]+0x00000014u; // 800809D4
  W32(c->r[1]+0x00000020u,c->r[4]); // 800809D8
  c->r[4]=c->r[1]+0x00000010u; // 800809DC
  W8(c->r[1]+0x00000024u,c->r[5]); // 800809E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800809E4
  c->lr=0x800809ECu; f_800814A0(c); // 800809E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800809EC
  c->r[3]=0u+0x000000E4u; // 800809F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800809F4
  c->lr=0x800809FCu; f_80081498(c); // 800809F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800809FC
  c->r[0]=0u+0x00000004u; // 80080A00
  W32(c->r[1]+0x00000038u,c->r[3]); // 80080A04
  c->r[3]=c->r[1]+0x00000018u; // 80080A08
  c->r[4]=R32(c->r[31]+0x00000080u); // 80080A0C
  c->r[5]=c->r[1]+0x00000008u; // 80080A10
  W32(c->r[1]+0x00000008u,c->r[0]); // 80080A14
  c->r[6]=0u+0x00000000u; // 80080A18
  c->r[7]=0u+0x00000001u; // 80080A1C
  c->lr=0x80080A24u; f_8007FEE0(c); // 80080A20
  c->r[0]=R32(c->r[31]+0x000002F8u); // 80080A24
  c->r[3]=c->r[29]|c->r[29]; // 80080A28
  c->r[5]=R32(c->r[1]+0x00000018u); // 80080A2C
  c->r[4]=c->r[1]+0x00000020u; // 80080A30
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80080A34
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80080A38
  c->r[5]=0u+0x00000040u; // 80080A3C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80080A40
  c->lr=0x80080A48u; f_8007E848(c); // 80080A44
  cmps(c,0,(int32_t)c->r[3],0); // 80080A48
  c->r[30]=c->r[3]|c->r[3]; // 80080A4C
  if (!crb(c,2)) { goto L_80080ABC; } // 80080A50
  c->r[30]=0u+0x00000000u; // 80080A54
L_80080A58:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80080A58
  c->r[3]=c->r[29]|c->r[29]; // 80080A5C
  c->lr=0x80080A64u; f_8007E684(c); // 80080A60
  c->r[30]=c->r[30]+0x00000001u; // 80080A64
  c->r[31]=c->r[31]+0x00000004u; // 80080A68
  cmps(c,0,(int32_t)c->r[30],32); // 80080A6C
  if (crb(c,0)) { IRQCHK(c); goto L_80080A58; } // 80080A70
  c->r[31]=0u+0x801C0000u; // 80080A74
  c->r[3]=c->r[29]|c->r[29]; // 80080A78
  c->r[31]=c->r[31]+0xFFFF94F0u; // 80080A7C
  c->r[4]=R32(c->r[31]+0x00000080u); // 80080A80
  c->lr=0x80080A88u; f_8007E684(c); // 80080A84
  c->r[4]=R32(c->r[31]+0x00000084u); // 80080A88
  c->r[3]=c->r[29]|c->r[29]; // 80080A8C
  c->lr=0x80080A94u; f_8007E684(c); // 80080A90
  c->r[4]=R32(c->r[31]+0x00000088u); // 80080A94
  c->r[3]=c->r[29]|c->r[29]; // 80080A98
  c->lr=0x80080AA0u; f_8007E684(c); // 80080A9C
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 80080AA0
  c->r[3]=c->r[29]|c->r[29]; // 80080AA4
  c->lr=0x80080AACu; f_8007E684(c); // 80080AA8
  c->r[4]=R32(c->r[31]+0x00000090u); // 80080AAC
  c->r[3]=c->r[29]|c->r[29]; // 80080AB0
  c->lr=0x80080AB8u; f_8007E684(c); // 80080AB4
  c->r[30]=c->r[3]|c->r[3]; // 80080AB8
L_80080ABC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80080ABC
  if (!crb(c,2)) { goto L_80080B2C; } // 80080AC0
  c->r[3]=0u+0x000000D4u; // 80080AC4
  c->lr=0x80080ACCu; f_80081498(c); // 80080AC8
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080ACC
  c->r[3]=c->r[29]|c->r[29]; // 80080AD0
  c->lr=0x80080AD8u; f_8007E684(c); // 80080AD4
  c->r[3]=0u+0x000000D8u; // 80080AD8
  c->lr=0x80080AE0u; f_80081498(c); // 80080ADC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080AE0
  c->r[3]=c->r[29]|c->r[29]; // 80080AE4
  c->lr=0x80080AECu; f_8007E684(c); // 80080AE8
  c->r[3]=0u+0x000000DCu; // 80080AEC
  c->lr=0x80080AF4u; f_80081498(c); // 80080AF0
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080AF4
  c->r[3]=c->r[29]|c->r[29]; // 80080AF8
  c->lr=0x80080B00u; f_8007E684(c); // 80080AFC
  c->r[3]=0u+0x000000E0u; // 80080B00
  c->lr=0x80080B08u; f_80081498(c); // 80080B04
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080B08
  c->r[3]=c->r[29]|c->r[29]; // 80080B0C
  c->lr=0x80080B14u; f_8007E684(c); // 80080B10
  c->r[3]=0u+0x000000E4u; // 80080B14
  c->lr=0x80080B1Cu; f_80081498(c); // 80080B18
  c->r[4]=R32(c->r[3]+0x00000000u); // 80080B1C
  c->r[3]=c->r[29]|c->r[29]; // 80080B20
  c->lr=0x80080B28u; f_8007E684(c); // 80080B24
  c->r[30]=c->r[3]|c->r[3]; // 80080B28
L_80080B2C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80080B2C
  if (!crb(c,2)) { goto L_80080B74; } // 80080B30
  c->r[3]=0u+0x801C0000u; // 80080B34
  c->r[0]=0u+0x00000400u; // 80080B38
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080B3C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080B40
  c->r[0]=R32(c->r[3]+0x00000080u); // 80080B44
  c->r[3]=c->r[1]+0x00000060u; // 80080B48
  c->r[5]=c->r[1]+0x0000000Cu; // 80080B4C
  c->r[6]=0u+0x00000000u; // 80080B50
  c->r[4]=rotl(c->r[0],0)&0xFFFFFC00u; // 80080B54
  c->r[7]=0u+0x00000001u; // 80080B58
  c->lr=0x80080B60u; f_8007FEE0(c); // 80080B5C
  c->r[30]=c->r[3]|c->r[3]; // 80080B60
  c->r[3]=c->r[29]|c->r[29]; // 80080B64
  c->r[4]=c->r[1]+0x00000060u; // 80080B68
  c->r[5]=0u+0x00000400u; // 80080B6C
  c->lr=0x80080B74u; f_8007E550(c); // 80080B70
L_80080B74:;
  c->r[3]=c->r[30]|c->r[30]; // 80080B74
  c->r[31]=R32(c->r[1]+0x0000046Cu); // 80080B78
  c->r[30]=R32(c->r[1]+0x00000468u); // 80080B7C
  c->r[29]=R32(c->r[1]+0x00000464u); // 80080B80
  c->r[0]=R32(c->r[1]+0x00000474u); // 80080B84
  c->lr=c->r[0]; // 80080B88
  c->r[1]=c->r[1]+0x00000470u; // 80080B8C
  return; // 80080B90
}

// TRKTargetAddExceptionInfo
void f_80080B94(Ctx* __restrict c) {
  trace_call(0x80080B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080B94
  c->r[0]=c->lr; // 80080B98
  c->r[4]=0u+0x00000000u; // 80080B9C
  c->r[5]=0u+0x00000040u; // 80080BA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 80080BA4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80080BA8
  W32(c->r[1]+0x00000058u,c->r[30]); // 80080BAC
  c->r[30]=c->r[3]|c->r[3]; // 80080BB0
  c->r[3]=c->r[1]+0x00000010u; // 80080BB4
  c->lr=0x80080BBCu; f_8007CC24(c); // 80080BB8
  c->r[31]=0u+0x80150000u; // 80080BBC
  c->r[3]=0u+0x00000040u; // 80080BC0
  c->r[4]=R32(c->r[31]+0xFFFFE280u); // 80080BC4
  c->r[5]=0u+0x00000091u; // 80080BC8
  c->r[0]=0u+0x00000004u; // 80080BCC
  W32(c->r[1]+0x00000010u,c->r[3]); // 80080BD0
  c->r[3]=c->r[1]+0x0000000Cu; // 80080BD4
  c->r[6]=0u+0x00000000u; // 80080BD8
  W8(c->r[1]+0x00000014u,c->r[5]); // 80080BDC
  c->r[5]=c->r[1]+0x00000008u; // 80080BE0
  c->r[7]=0u+0x00000001u; // 80080BE4
  W32(c->r[1]+0x00000018u,c->r[4]); // 80080BE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80080BEC
  c->lr=0x80080BF4u; f_8007FEE0(c); // 80080BF0
  c->r[3]=c->r[31]+0xFFFFE280u; // 80080BF4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80080BF8
  c->r[0]=R16(c->r[3]+0x00000008u); // 80080BFC
  c->r[3]=c->r[30]|c->r[30]; // 80080C00
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80080C04
  c->r[4]=c->r[1]+0x00000010u; // 80080C08
  c->r[5]=0u+0x00000040u; // 80080C0C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80080C10
  c->lr=0x80080C18u; f_8007E848(c); // 80080C14
  c->r[0]=R32(c->r[1]+0x00000064u); // 80080C18
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80080C1C
  c->r[30]=R32(c->r[1]+0x00000058u); // 80080C20
  c->lr=c->r[0]; // 80080C24
  c->r[1]=c->r[1]+0x00000060u; // 80080C28
  return; // 80080C2C
}

// TRKTargetCheckStep
void f_80080C30(Ctx* __restrict c) {
  trace_call(0x80080C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080C30
  c->r[0]=c->lr; // 80080C34
  c->r[3]=0u+0x801C0000u; // 80080C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080C3C
  c->r[0]=R32(c->r[3]+0xFFFF9388u); // 80080C40
  cmps(c,0,(int32_t)c->r[0],0); // 80080C44
  if (crb(c,2)) { goto L_80080D3C; } // 80080C48
  c->r[4]=0u+0x801C0000u; // 80080C4C
  c->r[5]=0u+0x00000001u; // 80080C50
  c->r[4]=c->r[4]+0xFFFF94F0u; // 80080C54
  c->r[0]=R32(c->r[4]+0x000001F8u); // 80080C58
  c->r[0]=rotl(c->r[0],0)&0xFFFFFBFFu; // 80080C5C
  c->r[0]=c->r[0]|0x00008000u; // 80080C60
  W32(c->r[4]+0x000001F8u,c->r[0]); // 80080C64
  if (crb(c,2)) { goto L_80080CCC; } // 80080C68
  c->r[0]=R32(c->r[4]+0x000002F8u); // 80080C6C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80080C70
  cmpu(c,0,c->r[0],0x00000D00u); // 80080C74
  if (!crb(c,2)) { goto L_80080CCC; } // 80080C78
  c->r[3]=c->r[3]+0xFFFF9388u; // 80080C7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80080C80
  cmps(c,0,(int32_t)c->r[0],0); // 80080C84
  if (crb(c,2)) { goto L_80080C98; } // 80080C88
  cmps(c,0,(int32_t)c->r[0],1); // 80080C8C
  if (crb(c,2)) { goto L_80080CAC; } // 80080C90
  goto L_80080CCC; // 80080C94
L_80080C98:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80080C98
  cmps(c,0,(int32_t)c->r[0],0); // 80080C9C
  if (crb(c,2)) { goto L_80080CCC; } // 80080CA0
  c->r[5]=0u+0x00000000u; // 80080CA4
  goto L_80080CCC; // 80080CA8
L_80080CAC:;
  c->r[4]=R32(c->r[4]+0x00000080u); // 80080CAC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80080CB0
  cmpu(c,0,c->r[4],c->r[0]); // 80080CB4
  if (crb(c,0)) { goto L_80080CCC; } // 80080CB8
  c->r[0]=R32(c->r[3]+0x00000010u); // 80080CBC
  cmpu(c,0,c->r[4],c->r[0]); // 80080CC0
  if (crb(c,1)) { goto L_80080CCC; } // 80080CC4
  c->r[5]=0u+0x00000000u; // 80080CC8
L_80080CCC:;
  cmps(c,0,(int32_t)c->r[5],0); // 80080CCC
  if (crb(c,2)) { goto L_80080CE4; } // 80080CD0
  c->r[3]=0u+0x801C0000u; // 80080CD4
  c->r[0]=0u+0x00000000u; // 80080CD8
  W32(c->r[3]+0xFFFF9388u,c->r[0]); // 80080CDC
  goto L_80080D3C; // 80080CE0
L_80080CE4:;
  c->r[5]=0u+0x801C0000u; // 80080CE4
  c->r[4]=0u+0x801C0000u; // 80080CE8
  c->r[4]=c->r[4]+0xFFFF94F0u; // 80080CEC
  c->r[6]=0u+0x00000001u; // 80080CF0
  c->r[3]=c->r[5]+0xFFFF9388u; // 80080CF4
  c->r[0]=R32(c->r[4]+0x000001F8u); // 80080CF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 80080CFC
  c->r[0]=c->r[0]|0x00000400u; // 80080D00
  W32(c->r[5]+0xFFFF9388u,c->r[6]); // 80080D04
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 80080D08
  cmps(c,0,(int32_t)c->r[3],0); // 80080D0C
  W32(c->r[4]+0x000001F8u,c->r[0]); // 80080D10
  if (crb(c,2)) { goto L_80080D20; } // 80080D14
  cmps(c,0,(int32_t)c->r[3],16); // 80080D18
  if (!crb(c,2)) { goto L_80080D34; } // 80080D1C
L_80080D20:;
  c->r[4]=0u+0x801C0000u; // 80080D20
  c->r[4]=c->r[4]+0xFFFF9388u; // 80080D24
  c->r[3]=R32(c->r[4]+0x00000008u); // 80080D28
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80080D2C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80080D30
L_80080D34:;
  c->r[3]=0u+0x00000000u; // 80080D34
  c->lr=0x80080D3Cu; f_80081064(c); // 80080D38
L_80080D3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080D3C
  c->r[3]=0u+0x801C0000u; // 80080D40
  c->r[3]=R32(c->r[3]+0xFFFF9388u); // 80080D44
  c->lr=c->r[0]; // 80080D48
  c->r[1]=c->r[1]+0x00000010u; // 80080D4C
  return; // 80080D50
}

// TRKTargetSingleStep
void f_80080D54(Ctx* __restrict c) {
  trace_call(0x80080D54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080D54
  c->r[0]=c->lr; // 80080D58
  cmps(c,0,(int32_t)c->r[4],0); // 80080D5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080D60
  if (crb(c,2)) { goto L_80080D70; } // 80080D64
  c->r[3]=0u+0x00000703u; // 80080D68
  goto L_80080DCC; // 80080D6C
L_80080D70:;
  c->r[4]=0u+0x801C0000u; // 80080D70
  c->r[7]=0u+0x801C0000u; // 80080D74
  c->r[4]=c->r[4]+0xFFFF94F0u; // 80080D78
  c->r[5]=0u+0x00000001u; // 80080D7C
  c->r[0]=R32(c->r[4]+0x000001F8u); // 80080D80
  c->r[6]=c->r[7]+0xFFFF9388u; // 80080D84
  c->r[8]=0u+0x00000000u; // 80080D88
  W32(c->r[6]+0x00000004u,c->r[8]); // 80080D8C
  c->r[0]=c->r[0]|0x00000400u; // 80080D90
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 80080D94
  W32(c->r[6]+0x00000008u,c->r[3]); // 80080D98
  W32(c->r[7]+0xFFFF9388u,c->r[5]); // 80080D9C
  W32(c->r[4]+0x000001F8u,c->r[0]); // 80080DA0
  goto L_80080DAC; // 80080DA4
  if (!crb(c,2)) { goto L_80080DC0; } // 80080DA8
L_80080DAC:;
  c->r[4]=0u+0x801C0000u; // 80080DAC
  c->r[4]=c->r[4]+0xFFFF9388u; // 80080DB0
  c->r[3]=R32(c->r[4]+0x00000008u); // 80080DB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80080DB8
  W32(c->r[4]+0x00000008u,c->r[0]); // 80080DBC
L_80080DC0:;
  c->r[3]=0u+0x00000000u; // 80080DC0
  c->lr=0x80080DC8u; f_80081064(c); // 80080DC4
  c->r[3]=0u+0x00000000u; // 80080DC8
L_80080DCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080DCC
  c->lr=c->r[0]; // 80080DD0
  c->r[1]=c->r[1]+0x00000010u; // 80080DD4
  return; // 80080DD8
}

// TRKTargetStepOutOfRange
void f_80080DDC(Ctx* __restrict c) {
  trace_call(0x80080DDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080DDC
  c->r[0]=c->lr; // 80080DE0
  cmps(c,0,(int32_t)c->r[5],0); // 80080DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080DE8
  if (crb(c,2)) { goto L_80080DF8; } // 80080DEC
  c->r[3]=0u+0x00000703u; // 80080DF0
  goto L_80080E40; // 80080DF4
L_80080DF8:;
  c->r[5]=0u+0x801C0000u; // 80080DF8
  c->r[7]=0u+0x801C0000u; // 80080DFC
  c->r[5]=c->r[5]+0xFFFF94F0u; // 80080E00
  c->r[8]=0u+0x00000001u; // 80080E04
  c->r[0]=R32(c->r[5]+0x000001F8u); // 80080E08
  c->r[6]=c->r[7]+0xFFFF9388u; // 80080E0C
  W32(c->r[6]+0x00000004u,c->r[8]); // 80080E10
  c->r[0]=c->r[0]|0x00000400u; // 80080E14
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 80080E18
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 80080E1C
  W32(c->r[6]+0x00000010u,c->r[4]); // 80080E20
  W32(c->r[7]+0xFFFF9388u,c->r[8]); // 80080E24
  W32(c->r[5]+0x000001F8u,c->r[0]); // 80080E28
  goto L_80080E34; // 80080E2C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80080E30
L_80080E34:;
  c->r[3]=0u+0x00000000u; // 80080E34
  c->lr=0x80080E3Cu; f_80081064(c); // 80080E38
  c->r[3]=0u+0x00000000u; // 80080E3C
L_80080E40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080E40
  c->lr=c->r[0]; // 80080E44
  c->r[1]=c->r[1]+0x00000010u; // 80080E48
  return; // 80080E4C
}

// TRKTargetGetPC
void f_80080E50(Ctx* __restrict c) {
  trace_call(0x80080E50u);
  c->r[3]=0u+0x801C0000u; // 80080E50
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080E54
  c->r[3]=R32(c->r[3]+0x00000080u); // 80080E58
  return; // 80080E5C
}

// TRKTargetSupportRequest
void f_80080E60(Ctx* __restrict c) {
  trace_call(0x80080E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080E60
  c->r[0]=c->lr; // 80080E64
  c->r[7]=0u+0x801C0000u; // 80080E68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80080E6C
  c->r[7]=c->r[7]+0xFFFF94F0u; // 80080E70
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80080E74
  W32(c->r[1]+0x00000028u,c->r[30]); // 80080E78
  W32(c->r[1]+0x00000024u,c->r[29]); // 80080E7C
  c->r[29]=R32(c->r[7]+0x0000000Cu); // 80080E80
  c->r[0]=c->r[29]+0xFFFFFF30u; // 80080E84
  cmpu(c,0,c->r[0],0x00000001u); // 80080E88
  if (!crb(c,1)) { goto L_80080FB4; } // 80080E8C
  cmps(c,0,(int32_t)c->r[29],210); // 80080E90
  if (crb(c,2)) { goto L_80080EC4; } // 80080E94
  cmps(c,0,(int32_t)c->r[29],211); // 80080E98
  if (crb(c,2)) { goto L_80080F10; } // 80080E9C
  cmps(c,0,(int32_t)c->r[29],212); // 80080EA0
  if (crb(c,2)) { goto L_80080F50; } // 80080EA4
  c->r[3]=c->r[1]+0x00000010u; // 80080EA8
  c->r[4]=0u+0x00000004u; // 80080EAC
  c->lr=0x80080EB4u; f_8007D738(c); // 80080EB0
  c->r[3]=c->r[1]+0x00000010u; // 80080EB4
  c->lr=0x80080EBCu; f_8007D66C(c); // 80080EB8
  c->r[3]=0u+0x00000000u; // 80080EBC
  goto L_80081038; // 80080EC0
L_80080EC4:;
  c->r[0]=R32(c->r[7]+0x00000014u); // 80080EC4
  c->r[6]=c->r[1]+0x0000000Cu; // 80080EC8
  c->r[3]=R32(c->r[7]+0x00000010u); // 80080ECC
  c->r[5]=R32(c->r[7]+0x00000018u); // 80080ED0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80080ED4
  c->lr=0x80080EDCu; f_8007DD28(c); // 80080ED8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080EDC
  c->r[31]=c->r[3]|c->r[3]; // 80080EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80080EE4
  if (!crb(c,2)) { goto L_80080EFC; } // 80080EE8
  cmps(c,0,(int32_t)c->r[3],0); // 80080EEC
  if (crb(c,2)) { goto L_80080EFC; } // 80080EF0
  c->r[0]=0u+0x00000001u; // 80080EF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080EF8
L_80080EFC:;
  c->r[3]=0u+0x801C0000u; // 80080EFC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080F00
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080F04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80080F08
  goto L_80081020; // 80080F0C
L_80080F10:;
  c->r[3]=R32(c->r[7]+0x00000010u); // 80080F10
  c->r[4]=c->r[1]+0x0000000Cu; // 80080F14
  c->lr=0x80080F1Cu; f_8007DE40(c); // 80080F18
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080F1C
  c->r[31]=c->r[3]|c->r[3]; // 80080F20
  cmps(c,0,(int32_t)c->r[0],0); // 80080F24
  if (!crb(c,2)) { goto L_80080F3C; } // 80080F28
  cmps(c,0,(int32_t)c->r[3],0); // 80080F2C
  if (crb(c,2)) { goto L_80080F3C; } // 80080F30
  c->r[0]=0u+0x00000001u; // 80080F34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080F38
L_80080F3C:;
  c->r[3]=0u+0x801C0000u; // 80080F3C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080F40
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080F44
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80080F48
  goto L_80081020; // 80080F4C
L_80080F50:;
  c->r[3]=R32(c->r[7]+0x00000014u); // 80080F50
  c->r[4]=c->r[1]+0x00000008u; // 80080F54
  c->r[0]=R32(c->r[7]+0x00000018u); // 80080F58
  c->r[6]=c->r[1]+0x0000000Cu; // 80080F5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80080F60
  W32(c->r[1]+0x00000008u,c->r[3]); // 80080F64
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80080F68
  c->r[3]=R32(c->r[7]+0x00000010u); // 80080F6C
  c->lr=0x80080F74u; f_8007DF24(c); // 80080F70
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080F74
  c->r[31]=c->r[3]|c->r[3]; // 80080F78
  cmps(c,0,(int32_t)c->r[0],0); // 80080F7C
  if (!crb(c,2)) { goto L_80080F94; } // 80080F80
  cmps(c,0,(int32_t)c->r[3],0); // 80080F84
  if (crb(c,2)) { goto L_80080F94; } // 80080F88
  c->r[0]=0u+0x00000001u; // 80080F8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080F90
L_80080F94:;
  c->r[3]=0u+0x801C0000u; // 80080F94
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80080F98
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80080F9C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80080FA0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80080FA4
  c->r[3]=R32(c->r[3]+0x00000014u); // 80080FA8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80080FAC
  goto L_80081020; // 80080FB0
L_80080FB4:;
  c->r[0]=c->r[29]+0xFFFFFF2Fu; // 80080FB4
  c->r[30]=R32(c->r[7]+0x00000014u); // 80080FB8
  c->r[0]=cntlz(c->r[0]); // 80080FBC
  c->r[3]=R32(c->r[7]+0x00000010u); // 80080FC0
  c->r[4]=R32(c->r[7]+0x00000018u); // 80080FC4
  c->r[5]=c->r[30]|c->r[30]; // 80080FC8
  c->r[6]=c->r[1]+0x0000000Cu; // 80080FCC
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; // 80080FD0
  c->r[7]=0u+0x00000001u; // 80080FD4
  c->lr=0x80080FDCu; f_8007DA0C(c); // 80080FD8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80080FDC
  c->r[31]=c->r[3]|c->r[3]; // 80080FE0
  cmps(c,0,(int32_t)c->r[0],0); // 80080FE4
  if (!crb(c,2)) { goto L_80080FFC; } // 80080FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80080FEC
  if (crb(c,2)) { goto L_80080FFC; } // 80080FF0
  c->r[0]=0u+0x00000001u; // 80080FF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080FF8
L_80080FFC:;
  c->r[3]=0u+0x801C0000u; // 80080FFC
  cmps(c,0,(int32_t)c->r[29],209); // 80081000
  c->r[3]=c->r[3]+0xFFFF94F0u; // 80081004
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80081008
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8008100C
  if (!crb(c,2)) { goto L_80081020; } // 80081010
  c->r[3]=R32(c->r[3]+0x00000018u); // 80081014
  c->r[4]=R32(c->r[30]+0x00000000u); // 80081018
  c->lr=0x80081020u; f_8007C988(c); // 8008101C
L_80081020:;
  c->r[5]=0u+0x801C0000u; // 80081020
  c->r[3]=c->r[31]|c->r[31]; // 80081024
  c->r[5]=c->r[5]+0xFFFF94F0u; // 80081028
  c->r[4]=R32(c->r[5]+0x00000080u); // 8008102C
  c->r[0]=c->r[4]+0x00000004u; // 80081030
  W32(c->r[5]+0x00000080u,c->r[0]); // 80081034
L_80081038:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80081038
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8008103C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80081040
  c->r[29]=R32(c->r[1]+0x00000024u); // 80081044
  c->lr=c->r[0]; // 80081048
  c->r[1]=c->r[1]+0x00000030u; // 8008104C
  return; // 80081050
}

// TRKTargetStopped
void f_80081054(Ctx* __restrict c) {
  trace_call(0x80081054u);
  c->r[3]=0u+0x801C0000u; // 80081054
  c->r[3]=c->r[3]+0xFFFF9448u; // 80081058
  c->r[3]=R32(c->r[3]+0x00000098u); // 8008105C
  return; // 80081060
}

// TRKTargetSetStopped
void f_80081064(Ctx* __restrict c) {
  trace_call(0x80081064u);
  c->r[4]=0u+0x801C0000u; // 80081064
  c->r[4]=c->r[4]+0xFFFF9448u; // 80081068
  W32(c->r[4]+0x00000098u,c->r[3]); // 8008106C
  return; // 80081070
}

// TRKTargetStop
void f_80081074(Ctx* __restrict c) {
  trace_call(0x80081074u);
  c->r[4]=0u+0x801C0000u; // 80081074
  c->r[0]=0u+0x00000001u; // 80081078
  c->r[4]=c->r[4]+0xFFFF9448u; // 8008107C
  c->r[3]=0u+0x00000000u; // 80081080
  W32(c->r[4]+0x00000098u,c->r[0]); // 80081084
  return; // 80081088
}

// TRKPPCAccessSPR
void f_8008108C(Ctx* __restrict c) {
  trace_call(0x8008108Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008108C
  c->r[0]=c->lr; // 80081090
  cmps(c,0,(int32_t)c->r[5],0); // 80081094
  W32(c->r[1]+0x00000044u,c->r[0]); // 80081098
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008109C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800810A0
  W32(c->r[1]+0x00000034u,c->r[29]); // 800810A4
  c->r[29]=0u+0x80130000u; // 800810A8
  {uint32_t ea=c->r[29]+0xFFFF9BC0u; c->r[30]=R32(ea); c->r[29]=ea;} // 800810AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800810B0
  c->r[31]=R32(c->r[29]+0x00000004u); // 800810B4
  c->r[12]=R32(c->r[29]+0x00000008u); // 800810B8
  c->r[11]=R32(c->r[29]+0x0000000Cu); // 800810BC
  c->r[10]=R32(c->r[29]+0x00000010u); // 800810C0
  c->r[9]=R32(c->r[29]+0x00000014u); // 800810C4
  c->r[8]=R32(c->r[29]+0x00000018u); // 800810C8
  c->r[7]=R32(c->r[29]+0x0000001Cu); // 800810CC
  c->r[6]=R32(c->r[29]+0x00000020u); // 800810D0
  c->r[0]=R32(c->r[29]+0x00000024u); // 800810D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800810D8
  W32(c->r[1]+0x00000010u,c->r[12]); // 800810DC
  W32(c->r[1]+0x00000014u,c->r[11]); // 800810E0
  W32(c->r[1]+0x00000018u,c->r[10]); // 800810E4
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800810E8
  W32(c->r[1]+0x00000020u,c->r[8]); // 800810EC
  W32(c->r[1]+0x00000024u,c->r[7]); // 800810F0
  W32(c->r[1]+0x00000028u,c->r[6]); // 800810F4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800810F8
  if (crb(c,2)) { goto L_80081124; } // 800810FC
  c->r[0]=rotl(c->r[4],6)&0x0003F800u; // 80081100
  c->r[4]=rotl(c->r[4],16)&0x001F0000u; // 80081104
  c->r[6]=c->r[0]|0x7C800000u; // 80081108
  c->r[0]=0u+0x90830000u; // 8008110C
  c->r[4]=c->r[4]|0x000002A6u; // 80081110
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081114
  c->r[0]=c->r[6]|c->r[4]; // 80081118
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008111C
  goto L_80081144; // 80081120
L_80081124:;
  c->r[0]=rotl(c->r[4],16)&0x001F0000u; // 80081124
  c->r[6]=rotl(c->r[4],6)&0x0003F800u; // 80081128
  c->r[4]=c->r[6]|0x7C800000u; // 8008112C
  c->r[0]=c->r[0]|0x000003A6u; // 80081130
  c->r[6]=0u+0x80830000u; // 80081134
  c->r[0]=c->r[4]|c->r[0]; // 80081138
  W32(c->r[1]+0x00000008u,c->r[6]); // 8008113C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081140
L_80081144:;
  c->r[4]=c->r[1]+0x00000008u; // 80081144
  c->lr=0x8008114Cu; f_80081420(c); // 80081148
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008114C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80081150
  c->r[30]=R32(c->r[1]+0x00000038u); // 80081154
  c->r[29]=R32(c->r[1]+0x00000034u); // 80081158
  c->lr=c->r[0]; // 8008115C
  c->r[1]=c->r[1]+0x00000040u; // 80081160
  return; // 80081164
}

// TRKPPCAccessPairedSingleRegister
void f_80081168(Ctx* __restrict c) {
  trace_call(0x80081168u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081168
  c->r[0]=c->lr; // 8008116C
  c->r[6]=0u+0x80130000u; // 80081170
  cmps(c,0,(int32_t)c->r[5],0); // 80081174
  W32(c->r[1]+0x00000044u,c->r[0]); // 80081178
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 8008117C
  c->r[4]=c->r[0]|0xE0030000u; // 80081180
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80081184
  W32(c->r[1]+0x00000038u,c->r[30]); // 80081188
  W32(c->r[1]+0x00000034u,c->r[29]); // 8008118C
  {uint32_t ea=c->r[6]+0xFFFF9BE8u; c->r[29]=R32(ea); c->r[6]=ea;} // 80081190
  W32(c->r[1]+0x00000008u,c->r[29]); // 80081194
  c->r[30]=R32(c->r[6]+0x00000004u); // 80081198
  c->r[31]=R32(c->r[6]+0x00000008u); // 8008119C
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 800811A0
  c->r[11]=R32(c->r[6]+0x00000010u); // 800811A4
  c->r[10]=R32(c->r[6]+0x00000014u); // 800811A8
  c->r[9]=R32(c->r[6]+0x00000018u); // 800811AC
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 800811B0
  c->r[7]=R32(c->r[6]+0x00000020u); // 800811B4
  c->r[6]=R32(c->r[6]+0x00000024u); // 800811B8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800811BC
  W32(c->r[1]+0x00000010u,c->r[31]); // 800811C0
  W32(c->r[1]+0x00000014u,c->r[12]); // 800811C4
  W32(c->r[1]+0x00000018u,c->r[11]); // 800811C8
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 800811CC
  W32(c->r[1]+0x00000020u,c->r[9]); // 800811D0
  W32(c->r[1]+0x00000024u,c->r[8]); // 800811D4
  W32(c->r[1]+0x00000028u,c->r[7]); // 800811D8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800811DC
  if (crb(c,2)) { goto L_800811E8; } // 800811E0
  c->r[4]=c->r[0]|0xF0030000u; // 800811E4
L_800811E8:;
  W32(c->r[1]+0x00000008u,c->r[4]); // 800811E8
  c->r[4]=c->r[1]+0x00000008u; // 800811EC
  c->lr=0x800811F4u; f_80081420(c); // 800811F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800811F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800811F8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800811FC
  c->r[29]=R32(c->r[1]+0x00000034u); // 80081200
  c->lr=c->r[0]; // 80081204
  c->r[1]=c->r[1]+0x00000040u; // 80081208
  return; // 8008120C
}

// ReadFPSCR
void f_80081210(Ctx* __restrict c) {
  trace_call(0x80081210u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081210
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80081214
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 80081218
  c->f[31]=u2d((uint64_t)c->fpscr); // 8008121C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[31]);} // 80081220
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 80081224
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80081228
  c->r[1]=c->r[1]+0x00000040u; // 8008122C
  return; // 80081230
}

// WriteFPSCR
void f_80081234(Ctx* __restrict c) {
  trace_call(0x80081234u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081234
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80081238
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 8008123C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=RF64(ea);} // 80081240
  c->fpscr=(uint32_t)d2u(c->f[31]); // 80081244
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 80081248
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8008124C
  c->r[1]=c->r[1]+0x00000040u; // 80081250
  return; // 80081254
}

// TRKPPCAccessFPRegister
void f_80081258(Ctx* __restrict c) {
  trace_call(0x80081258u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081258
  c->r[0]=c->lr; // 8008125C
  cmpu(c,0,c->r[4],0x00000020u); // 80081260
  W32(c->r[1]+0x00000074u,c->r[0]); // 80081264
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80081268
  c->r[26]=0u+0x80130000u; // 8008126C
  c->r[29]=c->r[3]|c->r[3]; // 80081270
  c->r[30]=c->r[5]|c->r[5]; // 80081274
  c->r[31]=0u+0x00000000u; // 80081278
  {uint32_t ea=c->r[26]+0xFFFF9C10u; c->r[27]=R32(ea); c->r[26]=ea;} // 8008127C
  W32(c->r[1]+0x00000030u,c->r[27]); // 80081280
  c->r[28]=R32(c->r[26]+0x00000004u); // 80081284
  c->r[12]=R32(c->r[26]+0x00000008u); // 80081288
  c->r[11]=R32(c->r[26]+0x0000000Cu); // 8008128C
  c->r[10]=R32(c->r[26]+0x00000010u); // 80081290
  c->r[9]=R32(c->r[26]+0x00000014u); // 80081294
  c->r[8]=R32(c->r[26]+0x00000018u); // 80081298
  c->r[7]=R32(c->r[26]+0x0000001Cu); // 8008129C
  c->r[6]=R32(c->r[26]+0x00000020u); // 800812A0
  c->r[0]=R32(c->r[26]+0x00000024u); // 800812A4
  W32(c->r[1]+0x00000034u,c->r[28]); // 800812A8
  W32(c->r[1]+0x00000038u,c->r[12]); // 800812AC
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 800812B0
  W32(c->r[1]+0x00000040u,c->r[10]); // 800812B4
  W32(c->r[1]+0x00000044u,c->r[9]); // 800812B8
  W32(c->r[1]+0x00000048u,c->r[8]); // 800812BC
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 800812C0
  W32(c->r[1]+0x00000050u,c->r[6]); // 800812C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800812C8
  if (!crb(c,0)) { goto L_80081300; } // 800812CC
  cmps(c,0,(int32_t)c->r[5],0); // 800812D0
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 800812D4
  c->r[3]=c->r[0]|0xC8030000u; // 800812D8
  if (crb(c,2)) { goto L_800812E4; } // 800812DC
  c->r[3]=c->r[0]|0xD8030000u; // 800812E0
L_800812E4:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 800812E4
  c->r[3]=c->r[29]|c->r[29]; // 800812E8
  c->r[5]=c->r[30]|c->r[30]; // 800812EC
  c->r[4]=c->r[1]+0x00000030u; // 800812F0
  c->lr=0x800812F8u; f_80081420(c); // 800812F4
  c->r[31]=c->r[3]|c->r[3]; // 800812F8
  goto L_80081408; // 800812FC
L_80081300:;
  if (!crb(c,2)) { goto L_80081334; } // 80081300
  cmps(c,0,(int32_t)c->r[5],0); // 80081304
  if (crb(c,2)) { goto L_80081314; } // 80081308
  c->lr=0x80081310u; f_80081210(c); // 8008130C
  goto L_80081318; // 80081310
L_80081314:;
  c->lr=0x80081318u; f_80081234(c); // 80081314
L_80081318:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 80081318
  c->r[0]=0u+0x00000000u; // 8008131C
  c->r[3]=0u+0xFFFFFFFFu; // 80081320
  W32(c->r[29]+0x00000000u,c->r[0]); // 80081324
  c->r[0]=c->r[4]&c->r[3]; // 80081328
  W32(c->r[29]+0x00000004u,c->r[0]); // 8008132C
  goto L_80081408; // 80081330
L_80081334:;
  cmpu(c,0,c->r[4],0x00000021u); // 80081334
  if (!crb(c,2)) { goto L_80081408; } // 80081338
  cmps(c,0,(int32_t)c->r[5],0); // 8008133C
  if (!crb(c,2)) { goto L_8008134C; } // 80081340
  c->r[0]=R32(c->r[3]+0x00000004u); // 80081344
  W32(c->r[3]+0x00000000u,c->r[0]); // 80081348
L_8008134C:;
  c->r[12]=0u+0x80130000u; // 8008134C
  {uint32_t ea=c->r[12]+0xFFFF9BC0u; c->r[11]=R32(ea); c->r[12]=ea;} // 80081350
  cmps(c,0,(int32_t)c->r[5],0); // 80081354
  W32(c->r[1]+0x00000008u,c->r[11]); // 80081358
  c->r[10]=R32(c->r[12]+0x00000004u); // 8008135C
  c->r[9]=R32(c->r[12]+0x00000008u); // 80081360
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 80081364
  c->r[7]=R32(c->r[12]+0x00000010u); // 80081368
  c->r[6]=R32(c->r[12]+0x00000014u); // 8008136C
  c->r[5]=R32(c->r[12]+0x00000018u); // 80081370
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 80081374
  c->r[3]=R32(c->r[12]+0x00000020u); // 80081378
  c->r[0]=R32(c->r[12]+0x00000024u); // 8008137C
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80081380
  W32(c->r[1]+0x00000010u,c->r[9]); // 80081384
  W32(c->r[1]+0x00000014u,c->r[8]); // 80081388
  W32(c->r[1]+0x00000018u,c->r[7]); // 8008138C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80081390
  W32(c->r[1]+0x00000020u,c->r[5]); // 80081394
  W32(c->r[1]+0x00000024u,c->r[4]); // 80081398
  W32(c->r[1]+0x00000028u,c->r[3]); // 8008139C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800813A0
  if (crb(c,2)) { goto L_800813C0; } // 800813A4
  c->r[3]=0u+0x7C9F0000u; // 800813A8
  c->r[0]=0u+0x90830000u; // 800813AC
  c->r[3]=c->r[3]+0xFFFFFAA6u; // 800813B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800813B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800813B8
  goto L_800813D4; // 800813BC
L_800813C0:;
  c->r[3]=0u+0x7C9F0000u; // 800813C0
  c->r[4]=0u+0x80830000u; // 800813C4
  c->r[0]=c->r[3]+0xFFFFFBA6u; // 800813C8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800813CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800813D0
L_800813D4:;
  c->r[3]=c->r[29]|c->r[29]; // 800813D4
  c->r[5]=c->r[30]|c->r[30]; // 800813D8
  c->r[4]=c->r[1]+0x00000008u; // 800813DC
  c->lr=0x800813E4u; f_80081420(c); // 800813E0
  cmps(c,0,(int32_t)c->r[30],0); // 800813E4
  c->r[31]=c->r[3]|c->r[3]; // 800813E8
  if (crb(c,2)) { goto L_80081408; } // 800813EC
  c->r[4]=R32(c->r[29]+0x00000000u); // 800813F0
  c->r[3]=0u+0xFFFFFFFFu; // 800813F4
  c->r[0]=0u+0x00000000u; // 800813F8
  c->r[3]=c->r[4]&c->r[3]; // 800813FC
  W32(c->r[29]+0x00000004u,c->r[3]); // 80081400
  W32(c->r[29]+0x00000000u,c->r[0]); // 80081404
L_80081408:;
  c->r[3]=c->r[31]|c->r[31]; // 80081408
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8008140C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80081410
  c->lr=c->r[0]; // 80081414
  c->r[1]=c->r[1]+0x00000070u; // 80081418
  return; // 8008141C
}

// TRKPPCAccessSpecialReg
void f_80081420(Ctx* __restrict c) {
  trace_call(0x80081420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081420
  c->r[0]=c->lr; // 80081424
  c->r[5]=0u+0x4E800000u; // 80081428
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008142C
  c->r[0]=c->r[5]+0x00000020u; // 80081430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80081434
  c->r[31]=c->r[4]|c->r[4]; // 80081438
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008143C
  c->r[30]=c->r[3]|c->r[3]; // 80081440
  c->r[3]=c->r[31]|c->r[31]; // 80081444
  W32(c->r[4]+0x00000024u,c->r[0]); // 80081448
  c->r[4]=0u+0x00000028u; // 8008144C
  c->lr=0x80081454u; f_8007C988(c); // 80081450
  c->r[4]=0u+0x801C0000u; // 80081454
  c->r[12]=c->r[31]|c->r[31]; // 80081458
  c->r[3]=c->r[30]|c->r[30]; // 8008145C
  c->r[4]=c->r[4]+0xFFFF9438u; // 80081460
  c->ctr=c->r[12]; // 80081464
  if (true) { c->lr=0x8008146Cu; dispatch(c,c->ctr); } // 80081468
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008146C
  c->r[3]=0u+0x00000000u; // 80081470
  c->r[30]=R32(c->r[1]+0x00000008u); // 80081474
  c->r[0]=R32(c->r[1]+0x00000014u); // 80081478
  c->lr=c->r[0]; // 8008147C
  c->r[1]=c->r[1]+0x00000010u; // 80081480
  return; // 80081484
}

// TRKTargetSetInputPendingPtr
void f_80081488(Ctx* __restrict c) {
  trace_call(0x80081488u);
  c->r[4]=0u+0x801C0000u; // 80081488
  c->r[4]=c->r[4]+0xFFFF9448u; // 8008148C
  W32(c->r[4]+0x000000A0u,c->r[3]); // 80081490
  return; // 80081494
}

// ConvertAddress
void f_80081498(Ctx* __restrict c) {
  trace_call(0x80081498u);
  c->r[3]=c->r[3]|0x80000000u; // 80081498
  return; // 8008149C
}

// GetThreadInfo
void f_800814A0(Ctx* __restrict c) {
  trace_call(0x800814A0u);
  c->r[0]=0u+0x00000001u; // 800814A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800814A4
  c->r[0]=0u+0x00000000u; // 800814A8
  c->r[5]=0u+0x80000000u; // 800814AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800814B0
  c->r[7]=R32(c->r[5]+0x000000DCu); // 800814B4
  c->r[0]=c->r[7]+0x00010000u; // 800814B8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800814BC
  if (crb(c,2)) return; // 800814C0
  cmps(c,0,(int32_t)c->r[7],0); // 800814C4
  if (crb(c,2)) return; // 800814C8
  c->r[0]=c->r[7]+0x80000000u; // 800814CC
  cmpu(c,0,c->r[0],0x00000000u); // 800814D0
  if (!crb(c,2)) { goto L_800814DC; } // 800814D4
  return; // 800814D8
L_800814DC:;
  c->r[6]=0u+0x00000000u; // 800814DC
  goto L_80081520; // 800814E0
L_800814E4:;
  c->r[0]=R32(c->r[5]+0x000000E4u); // 800814E4
  cmpu(c,0,c->r[7],c->r[0]); // 800814E8
  if (!crb(c,2)) { goto L_800814F4; } // 800814EC
  W32(c->r[4]+0x00000000u,c->r[6]); // 800814F0
L_800814F4:;
  c->r[0]=R32(c->r[7]+0x000002FCu); // 800814F4
  c->r[6]=c->r[6]+0x00000001u; // 800814F8
  c->r[7]=c->r[0]|0x80000000u; // 800814FC
  c->r[0]=c->r[7]+0x00010000u; // 80081500
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80081504
  if (crb(c,2)) { goto L_80081528; } // 80081508
  cmps(c,0,(int32_t)c->r[7],0); // 8008150C
  if (crb(c,2)) { goto L_80081528; } // 80081510
  c->r[0]=c->r[7]+0x80000000u; // 80081514
  cmpu(c,0,c->r[0],0x00000000u); // 80081518
  if (crb(c,2)) { goto L_80081528; } // 8008151C
L_80081520:;
  cmps(c,0,(int32_t)c->r[7],0); // 80081520
  if (!crb(c,2)) { IRQCHK(c); goto L_800814E4; } // 80081524
L_80081528:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 80081528
  return; // 8008152C
}

// SetUseSerialIO
void f_80081530(Ctx* __restrict c) {
  trace_call(0x80081530u);
  W8(c->r[13]+0xFFFF9110u,c->r[3]); // 80081530
  return; // 80081534
}

// GetUseSerialIO
void f_80081538(Ctx* __restrict c) {
  trace_call(0x80081538u);
  c->r[3]=R8(c->r[13]+0xFFFF9110u); // 80081538
  return; // 8008153C
}

// fn_80081540
void f_80081540(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF9118u); // 80081540
  c->r[0]=0u+0x00000001u; // 80081544
  W8(c->r[13]+0xFFFF9120u,c->r[0]); // 80081548
  cmps(c,0,(int32_t)c->r[12],0); // 8008154C
  if (crb(c,2)) return; // 80081550
  c->r[3]=0u+0x00000000u; // 80081554
  c->ctr=c->r[12]; // 80081558
  if (true) { dispatch(c,c->ctr); return; } // 8008155C
}

// fn_80081560
void f_80081560(Ctx* __restrict c) {
  return; // 80081560
}

// fn_80081564
void f_80081564(Ctx* __restrict c) {
  c->r[0]=0u+0x00001000u; // 80081564
  c->r[5]=0u+0xCC000000u; // 80081568
  W32(c->r[5]+0x00003000u,c->r[0]); // 8008156C
  c->r[12]=R32(c->r[13]+0xFFFF911Cu); // 80081570
  cmps(c,0,(int32_t)c->r[12],0); // 80081574
  if (crb(c,2)) return; // 80081578
  c->ctr=c->r[12]; // 8008157C
  if (true) { dispatch(c,c->ctr); return; } // 80081580
}

// fn_80081584
void f_80081584(Ctx* __restrict c) {
  return; // 80081584
}

// DBInitComm
void f_80081588(Ctx* __restrict c) {
  trace_call(0x80081588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081588
  c->r[0]=c->lr; // 8008158C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081594
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081598
  c->r[30]=c->r[4]|c->r[4]; // 8008159C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800815A0
  c->r[29]=c->r[3]|c->r[3]; // 800815A4
  c->lr=0x800815ACu; f_80049A20(c); // 800815A8
  c->r[0]=c->r[13]+0xFFFF9120u; // 800815AC
  c->r[31]=c->r[3]|c->r[3]; // 800815B0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800815B4
  W32(c->r[13]+0xFFFF9118u,c->r[30]); // 800815B8
  c->lr=0x800815C0u; f_80081B5C(c); // 800815BC
  c->r[3]=c->r[31]|c->r[31]; // 800815C0
  c->lr=0x800815C8u; f_80049A60(c); // 800815C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800815C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800815CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800815D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800815D4
  c->lr=c->r[0]; // 800815D8
  c->r[1]=c->r[1]+0x00000020u; // 800815DC
  return; // 800815E0
}

// DBInitInterrupts
void f_800815E4(Ctx* __restrict c) {
  trace_call(0x800815E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800815E4
  c->r[0]=c->lr; // 800815E8
  c->r[3]=0u+0x00020000u; // 800815EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800815F0
  c->r[3]=c->r[3]+0xFFFF8000u; // 800815F4
  c->lr=0x800815FCu; f_80049DF0(c); // 800815F8
  c->r[3]=0u+0x00000040u; // 800815FC
  c->lr=0x80081604u; f_80049DF0(c); // 80081600
  c->r[3]=0u+0x80080000u; // 80081604
  c->r[4]=0u+0x80080000u; // 80081608
  c->r[3]=c->r[3]+0x00001540u; // 8008160C
  W32(c->r[13]+0xFFFF911Cu,c->r[3]); // 80081610
  c->r[4]=c->r[4]+0x00001564u; // 80081614
  c->r[3]=0u+0x00000019u; // 80081618
  c->lr=0x80081620u; f_80049A90(c); // 8008161C
  c->r[3]=0u+0x00000040u; // 80081620
  c->lr=0x80081628u; f_80049E70(c); // 80081624
  c->r[0]=R32(c->r[1]+0x00000014u); // 80081628
  c->lr=c->r[0]; // 8008162C
  c->r[1]=c->r[1]+0x00000010u; // 80081630
  return; // 80081634
}

// DBQueryData
void f_80081638(Ctx* __restrict c) {
  trace_call(0x80081638u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081638
  c->r[0]=c->lr; // 8008163C
  c->r[3]=0u+0x00000000u; // 80081640
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081644
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081648
  c->r[0]=R32(c->r[13]+0xFFFF9128u); // 8008164C
  W8(c->r[13]+0xFFFF9120u,c->r[3]); // 80081650
  cmps(c,0,(int32_t)c->r[0],0); // 80081654
  if (!crb(c,2)) { goto L_800816C4; } // 80081658
  c->lr=0x80081660u; f_80049A20(c); // 8008165C
  c->r[31]=c->r[3]|c->r[3]; // 80081660
  c->r[4]=c->r[1]+0x00000008u; // 80081664
  c->r[3]=0u+0x34000000u; // 80081668
  c->r[5]=0u+0x00000001u; // 8008166C
  c->lr=0x80081674u; f_80081C18(c); // 80081670
  c->r[0]=R8(c->r[1]+0x00000008u); // 80081674
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80081678
  if (!crb(c,2)) { goto L_800816BC; } // 8008167C
  c->r[3]=0u+0x34000000u; // 80081680
  c->r[4]=c->r[1]+0x0000000Cu; // 80081684
  c->r[3]=c->r[3]+0x00000200u; // 80081688
  c->r[5]=0u+0x00000004u; // 8008168C
  c->lr=0x80081694u; f_80081C18(c); // 80081690
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80081694
  c->r[3]=rotl(c->r[4],0)&0x1F000000u; // 80081698
  c->r[0]=c->r[3]+0xE1000000u; // 8008169C
  cmpu(c,0,c->r[0],0x00000000u); // 800816A0
  if (!crb(c,2)) { goto L_800816BC; } // 800816A4
  c->r[3]=rotl(c->r[4],0)&0x00001FFFu; // 800816A8
  c->r[0]=0u+0x00000001u; // 800816AC
  W32(c->r[13]+0xFFFF9124u,c->r[4]); // 800816B0
  W32(c->r[13]+0xFFFF9128u,c->r[3]); // 800816B4
  W8(c->r[13]+0xFFFF9120u,c->r[0]); // 800816B8
L_800816BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800816BC
  c->lr=0x800816C4u; f_80049A60(c); // 800816C0
L_800816C4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800816C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800816C8
  c->r[3]=R32(c->r[13]+0xFFFF9128u); // 800816CC
  c->lr=c->r[0]; // 800816D0
  c->r[1]=c->r[1]+0x00000020u; // 800816D4
  return; // 800816D8
}

// DBRead
void f_800816DC(Ctx* __restrict c) {
  trace_call(0x800816DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800816DC
  c->r[0]=c->lr; // 800816E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800816E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800816E8
  c->r[31]=c->r[4]|c->r[4]; // 800816EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800816F0
  c->r[30]=c->r[3]|c->r[3]; // 800816F4
  c->lr=0x800816FCu; f_80049A20(c); // 800816F8
  c->r[5]=R32(c->r[13]+0xFFFF9124u); // 800816FC
  c->r[0]=c->r[31]+0x00000003u; // 80081700
  c->r[31]=c->r[3]|c->r[3]; // 80081704
  c->r[4]=c->r[30]|c->r[30]; // 80081708
  c->r[3]=rotl(c->r[5],16)&0x00000001u; // 8008170C
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80081710
  c->r[0]=0u-c->r[3]; // 80081714
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 80081718
  c->r[3]=c->r[3]+0x00D10000u; // 8008171C
  c->r[0]=c->r[3]+0x00001000u; // 80081720
  c->r[3]=rotl(c->r[0],6)&0x3FFFFF00u; // 80081724
  c->lr=0x8008172Cu; f_80081E40(c); // 80081728
  c->r[0]=0u+0x00000000u; // 8008172C
  c->r[3]=c->r[31]|c->r[31]; // 80081730
  W32(c->r[13]+0xFFFF9128u,c->r[0]); // 80081734
  W8(c->r[13]+0xFFFF9120u,c->r[0]); // 80081738
  c->lr=0x80081740u; f_80049A60(c); // 8008173C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80081740
  c->r[3]=0u+0x00000000u; // 80081744
  c->r[30]=R32(c->r[1]+0x00000008u); // 80081748
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008174C
  c->lr=c->r[0]; // 80081750
  c->r[1]=c->r[1]+0x00000010u; // 80081754
  return; // 80081758
}

// fn_8008175C
void f_8008175C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008175C
  c->r[0]=c->lr; // 80081760
  W32(c->r[1]+0x00000034u,c->r[0]); // 80081764
  c->r[11]=c->r[1]+0x00000030u; // 80081768
  c->lr=0x80081770u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008176C
  c->r[27]=c->r[3]|c->r[3]; // 80081770
  c->r[28]=c->r[4]|c->r[4]; // 80081774
  c->lr=0x8008177Cu; f_80049A20(c); // 80081778
  c->r[31]=c->r[3]|c->r[3]; // 8008177C
L_80081780:;
  c->r[4]=c->r[1]+0x0000000Au; // 80081780
  c->r[3]=0u+0x34000000u; // 80081784
  c->r[5]=0u+0x00000001u; // 80081788
  c->lr=0x80081790u; f_80081C18(c); // 8008178C
  c->r[0]=R8(c->r[1]+0x0000000Au); // 80081790
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80081794
  if (!crb(c,2)) { IRQCHK(c); goto L_80081780; } // 80081798
  c->r[3]=R8(c->r[13]+0xFFFF82C8u); // 8008179C
  c->r[0]=c->r[28]+0x00000003u; // 800817A0
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800817A4
  c->r[3]=c->r[3]+0x00000001u; // 800817A8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800817AC
  W8(c->r[13]+0xFFFF82C8u,c->r[3]); // 800817B0
  c->r[0]=0u-c->r[0]; // 800817B4
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 800817B8
  c->r[0]=c->r[3]+0x00D10000u; // 800817BC
  c->r[0]=rotl(c->r[0],6)&0x3FFFFF00u; // 800817C0
  c->r[30]=c->r[0]|0x80000000u; // 800817C4
L_800817C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800817C8
  c->r[4]=c->r[27]|c->r[27]; // 800817CC
  c->r[5]=c->r[29]|c->r[29]; // 800817D0
  c->lr=0x800817D8u; f_80081F20(c); // 800817D4
  cmps(c,0,(int32_t)c->r[3],0); // 800817D8
  if (crb(c,2)) { IRQCHK(c); goto L_800817C8; } // 800817DC
L_800817E0:;
  c->r[4]=c->r[1]+0x00000009u; // 800817E0
  c->r[3]=0u+0x34000000u; // 800817E4
  c->r[5]=0u+0x00000001u; // 800817E8
  c->lr=0x800817F0u; f_80081C18(c); // 800817EC
  c->r[0]=R8(c->r[1]+0x00000009u); // 800817F0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800817F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800817E0; } // 800817F8
  c->r[3]=R8(c->r[13]+0xFFFF82C8u); // 800817FC
  c->r[0]=rotl(c->r[28],0)&0x00001FFFu; // 80081800
  c->r[29]=c->r[0]|0x1F000000u; // 80081804
  c->r[30]=0u+0xB4000000u; // 80081808
  c->r[29]=(rotl(c->r[3],16)&0x00FF0000u)|(c->r[29]&~0x00FF0000u); // 8008180C
L_80081810:;
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80081810
  c->r[3]=c->r[30]+0x00000100u; // 80081814
  c->r[4]=c->r[1]+0x0000000Cu; // 80081818
  c->r[5]=0u+0x00000004u; // 8008181C
  c->lr=0x80081824u; f_80081D3C(c); // 80081820
  cmps(c,0,(int32_t)c->r[3],0); // 80081824
  if (crb(c,2)) { IRQCHK(c); goto L_80081810; } // 80081828
L_8008182C:;
  c->r[4]=c->r[1]+0x00000008u; // 8008182C
  c->r[3]=0u+0x34000000u; // 80081830
  c->r[5]=0u+0x00000001u; // 80081834
  c->lr=0x8008183Cu; f_80081C18(c); // 80081838
  c->r[0]=R8(c->r[1]+0x00000008u); // 8008183C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80081840
  if (!crb(c,2)) { IRQCHK(c); goto L_8008182C; } // 80081844
  c->r[3]=c->r[31]|c->r[31]; // 80081848
  c->lr=0x80081850u; f_80049A60(c); // 8008184C
  c->r[11]=c->r[1]+0x00000030u; // 80081850
  c->r[3]=0u+0x00000000u; // 80081854
  c->lr=0x8008185Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80081858
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008185C
  c->lr=c->r[0]; // 80081860
  c->r[1]=c->r[1]+0x00000030u; // 80081864
  return; // 80081868
}

// fn_8008186C
void f_8008186C(Ctx* __restrict c) {
  return; // 8008186C
}

// fn_80081870
void f_80081870(Ctx* __restrict c) {
  return; // 80081870
}

// fn_80081874
void f_80081874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081874
  c->r[0]=c->lr; // 80081878
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008187C
  c->r[11]=c->r[1]+0x00000020u; // 80081880
  c->lr=0x80081888u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80081884
  cmps(c,0,(int32_t)c->r[5],0); // 80081888
  if (crb(c,2)) { goto L_800819E8; } // 8008188C
  cmps(c,1,(int32_t)c->r[4],0); // 80081890
  c->r[0]=0u+0x00000000u; // 80081894
  c->r[7]=0u+0x00000000u; // 80081898
  if (!crb(c,5)) { goto L_800819E0; } // 8008189C
  cmps(c,0,(int32_t)c->r[4],8); // 800818A0
  c->r[9]=c->r[4]+0xFFFFFFF8u; // 800818A4
  if (!crb(c,1)) { goto L_800819AC; } // 800818A8
  c->r[8]=0u+0x00000000u; // 800818AC
  if (crb(c,4)) { goto L_800818C8; } // 800818B0
  c->r[6]=0u+0x80000000u; // 800818B4
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800818B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 800818BC
  if (crb(c,1)) { goto L_800818C8; } // 800818C0
  c->r[8]=0u+0x00000001u; // 800818C4
L_800818C8:;
  cmps(c,0,(int32_t)c->r[8],0); // 800818C8
  if (crb(c,2)) { goto L_800819AC; } // 800818CC
  c->r[8]=c->r[9]+0x00000007u; // 800818D0
  c->r[6]=c->r[3]|c->r[3]; // 800818D4
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 800818D8
  c->ctr=c->r[8]; // 800818DC
  cmps(c,0,(int32_t)c->r[9],0); // 800818E0
  if (!crb(c,1)) { goto L_800819AC; } // 800818E4
L_800818E8:;
  c->r[9]=addc(c,~c->r[7],0x00000003u,1); // 800818E8
  c->r[8]=c->r[7]+0x00000001u; // 800818EC
  c->r[28]=addc(c,~c->r[8],0x00000003u,1); // 800818F0
  c->r[10]=R8(c->r[6]+0x00000000u); // 800818F4
  c->r[8]=c->r[7]+0x00000002u; // 800818F8
  c->r[27]=R8(c->r[6]+0x00000001u); // 800818FC
  c->r[29]=addc(c,~c->r[8],0x00000003u,1); // 80081900
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 80081904
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 80081908
  c->r[12]=0u-c->r[7]; // 8008190C
  c->r[26]=((c->r[8])&0x20)?0u:(c->r[10]<<((c->r[8])&31)); // 80081910
  c->r[30]=rotl(c->r[29],3)&0xFFFFFFF8u; // 80081914
  c->r[31]=R8(c->r[6]+0x00000002u); // 80081918
  c->r[8]=c->r[7]+0x00000004u; // 8008191C
  c->r[11]=addc(c,~c->r[8],0x00000003u,1); // 80081920
  c->r[0]=c->r[0]|c->r[26]; // 80081924
  c->r[28]=((c->r[28])&0x20)?0u:(c->r[27]<<((c->r[28])&31)); // 80081928
  c->r[8]=c->r[7]+0x00000005u; // 8008192C
  c->r[31]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80081930
  c->r[29]=R8(c->r[6]+0x00000003u); // 80081934
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 80081938
  c->r[0]=c->r[0]|c->r[28]; // 8008193C
  c->r[10]=addc(c,~c->r[8],0x00000003u,1); // 80081940
  c->r[8]=c->r[7]+0x00000006u; // 80081944
  c->r[29]=((c->r[12])&0x20)?0u:(c->r[29]<<((c->r[12])&31)); // 80081948
  c->r[0]=c->r[0]|c->r[31]; // 8008194C
  c->r[9]=addc(c,~c->r[8],0x00000003u,1); // 80081950
  c->r[8]=c->r[7]+0x00000007u; // 80081954
  c->r[12]=rotl(c->r[10],3)&0xFFFFFFF8u; // 80081958
  c->r[31]=R8(c->r[6]+0x00000005u); // 8008195C
  c->r[8]=addc(c,~c->r[8],0x00000003u,1); // 80081960
  c->r[10]=rotl(c->r[9],3)&0xFFFFFFF8u; // 80081964
  c->r[30]=R8(c->r[6]+0x00000004u); // 80081968
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 8008196C
  c->r[0]=c->r[0]|c->r[29]; // 80081970
  c->r[9]=R8(c->r[6]+0x00000007u); // 80081974
  c->r[30]=((c->r[11])&0x20)?0u:(c->r[30]<<((c->r[11])&31)); // 80081978
  c->r[11]=R8(c->r[6]+0x00000006u); // 8008197C
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 80081980
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[31]<<((c->r[12])&31)); // 80081984
  c->r[0]=c->r[0]|c->r[30]; // 80081988
  c->r[10]=((c->r[10])&0x20)?0u:(c->r[11]<<((c->r[10])&31)); // 8008198C
  c->r[0]=c->r[0]|c->r[12]; // 80081990
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[9]<<((c->r[8])&31)); // 80081994
  c->r[0]=c->r[0]|c->r[10]; // 80081998
  c->r[7]=c->r[7]+0x00000008u; // 8008199C
  c->r[0]=c->r[0]|c->r[8]; // 800819A0
  c->r[6]=c->r[6]+0x00000008u; // 800819A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800818E8; } // 800819A8
L_800819AC:;
  c->r[6]=c->r[4]-c->r[7]; // 800819AC
  c->r[9]=c->r[3]+c->r[7]; // 800819B0
  c->ctr=c->r[6]; // 800819B4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 800819B8
  if (!crb(c,0)) { goto L_800819E0; } // 800819BC
L_800819C0:;
  c->r[6]=addc(c,~c->r[7],0x00000003u,1); // 800819C0
  c->r[8]=R8(c->r[9]+0x00000000u); // 800819C4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800819C8
  c->r[9]=c->r[9]+0x00000001u; // 800819CC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[8]<<((c->r[6])&31)); // 800819D0
  c->r[7]=c->r[7]+0x00000001u; // 800819D4
  c->r[0]=c->r[0]|c->r[6]; // 800819D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800819C0; } // 800819DC
L_800819E0:;
  c->r[6]=0u+0xCD000000u; // 800819E0
  W32(c->r[6]+0x00006838u,c->r[0]); // 800819E4
L_800819E8:;
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800819E8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800819EC
  c->r[7]=c->r[6]|0x00000001u; // 800819F0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800819F4
  c->r[6]=0u+0xCD000000u; // 800819F8
  c->r[0]=c->r[7]|c->r[0]; // 800819FC
  W32(c->r[6]+0x00006834u,c->r[0]); // 80081A00
L_80081A04:;
  c->r[0]=R32(c->r[6]+0x00006834u); // 80081A04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081A08
  if (!crb(c,2)) { IRQCHK(c); goto L_80081A04; } // 80081A0C
  cmps(c,0,(int32_t)c->r[5],0); // 80081A10
  if (!crb(c,2)) { goto L_80081B40; } // 80081A14
  c->r[5]=0u+0xCD000000u; // 80081A18
  cmps(c,1,(int32_t)c->r[4],0); // 80081A1C
  c->r[0]=R32(c->r[5]+0x00006838u); // 80081A20
  c->r[5]=0u+0x00000000u; // 80081A24
  if (!crb(c,5)) { goto L_80081B40; } // 80081A28
  cmps(c,0,(int32_t)c->r[4],8); // 80081A2C
  c->r[7]=c->r[4]+0xFFFFFFF8u; // 80081A30
  if (!crb(c,1)) { goto L_80081B14; } // 80081A34
  c->r[8]=0u+0x00000000u; // 80081A38
  if (crb(c,4)) { goto L_80081A54; } // 80081A3C
  c->r[6]=0u+0x80000000u; // 80081A40
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 80081A44
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 80081A48
  if (crb(c,1)) { goto L_80081A54; } // 80081A4C
  c->r[8]=0u+0x00000001u; // 80081A50
L_80081A54:;
  cmps(c,0,(int32_t)c->r[8],0); // 80081A54
  if (crb(c,2)) { goto L_80081B14; } // 80081A58
  c->r[6]=c->r[7]+0x00000007u; // 80081A5C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80081A60
  c->ctr=c->r[6]; // 80081A64
  cmps(c,0,(int32_t)c->r[7],0); // 80081A68
  if (!crb(c,1)) { goto L_80081B14; } // 80081A6C
L_80081A70:;
  c->r[6]=addc(c,~c->r[5],0x00000003u,1); // 80081A70
  c->r[7]=c->r[5]+0x00000001u; // 80081A74
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80081A78
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80081A7C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 80081A80
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80081A84
  W8(c->r[3]+0x00000000u,c->r[9]); // 80081A88
  c->r[7]=c->r[5]+0x00000002u; // 80081A8C
  c->r[6]=0u-c->r[5]; // 80081A90
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80081A94
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80081A98
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 80081A9C
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80081AA0
  W8(c->r[3]+0x00000001u,c->r[9]); // 80081AA4
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80081AA8
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80081AAC
  c->r[6]=c->r[5]+0x00000004u; // 80081AB0
  W8(c->r[3]+0x00000002u,c->r[9]); // 80081AB4
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 80081AB8
  c->r[6]=c->r[5]+0x00000005u; // 80081ABC
  W8(c->r[3]+0x00000003u,c->r[8]); // 80081AC0
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80081AC4
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80081AC8
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80081ACC
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80081AD0
  W8(c->r[3]+0x00000004u,c->r[9]); // 80081AD4
  c->r[6]=c->r[5]+0x00000006u; // 80081AD8
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 80081ADC
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80081AE0
  c->r[6]=c->r[5]+0x00000007u; // 80081AE4
  W8(c->r[3]+0x00000005u,c->r[8]); // 80081AE8
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80081AEC
  c->r[5]=c->r[5]+0x00000008u; // 80081AF0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80081AF4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80081AF8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80081AFC
  W8(c->r[3]+0x00000006u,c->r[7]); // 80081B00
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80081B04
  W8(c->r[3]+0x00000007u,c->r[6]); // 80081B08
  c->r[3]=c->r[3]+0x00000008u; // 80081B0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80081A70; } // 80081B10
L_80081B14:;
  c->r[6]=c->r[4]-c->r[5]; // 80081B14
  c->ctr=c->r[6]; // 80081B18
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80081B1C
  if (!crb(c,0)) { goto L_80081B40; } // 80081B20
L_80081B24:;
  c->r[4]=addc(c,~c->r[5],0x00000003u,1); // 80081B24
  c->r[5]=c->r[5]+0x00000001u; // 80081B28
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80081B2C
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 80081B30
  W8(c->r[3]+0x00000000u,c->r[4]); // 80081B34
  c->r[3]=c->r[3]+0x00000001u; // 80081B38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80081B24; } // 80081B3C
L_80081B40:;
  c->r[11]=c->r[1]+0x00000020u; // 80081B40
  c->r[3]=0u+0x00000001u; // 80081B44
  c->lr=0x80081B4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80081B48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081B4C
  c->lr=c->r[0]; // 80081B50
  c->r[1]=c->r[1]+0x00000020u; // 80081B54
  return; // 80081B58
}

// __DBEXIInit
void f_80081B5C(Ctx* __restrict c) {
  trace_call(0x80081B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081B5C
  c->r[0]=c->lr; // 80081B60
  c->r[3]=0u+0x00020000u; // 80081B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081B68
  c->r[3]=c->r[3]+0xFFFF8000u; // 80081B6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081B70
  c->lr=0x80081B78u; f_80049DF0(c); // 80081B74
  c->r[3]=0u+0xCD000000u; // 80081B78
L_80081B7C:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 80081B7C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80081B80
  cmpu(c,0,c->r[0],0x00000001u); // 80081B84
  if (crb(c,2)) { IRQCHK(c); goto L_80081B7C; } // 80081B88
  c->r[31]=0u+0xCD000000u; // 80081B8C
  c->r[0]=0u+0x00000000u; // 80081B90
  W32(c->r[31]+0x00006828u,c->r[0]); // 80081B94
  c->r[3]=0u+0xB4000000u; // 80081B98
  c->r[0]=0u+0xD4000000u; // 80081B9C
  c->r[4]=0u+0x00000004u; // 80081BA0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80081BA4
  c->r[3]=c->r[1]+0x0000000Cu; // 80081BA8
  c->r[5]=0u+0x00000001u; // 80081BAC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80081BB0
  c->r[0]=R32(c->r[31]+0x00006828u); // 80081BB4
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081BB8
  c->r[0]=c->r[0]|0x000000C0u; // 80081BBC
  W32(c->r[31]+0x00006828u,c->r[0]); // 80081BC0
  c->lr=0x80081BC8u; f_80081874(c); // 80081BC4
L_80081BC8:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 80081BC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081BCC
  if (!crb(c,2)) { IRQCHK(c); goto L_80081BC8; } // 80081BD0
  c->r[3]=c->r[1]+0x00000008u; // 80081BD4
  c->r[4]=0u+0x00000004u; // 80081BD8
  c->r[5]=0u+0x00000001u; // 80081BDC
  c->lr=0x80081BE4u; f_80081874(c); // 80081BE0
  c->r[3]=0u+0xCD000000u; // 80081BE4
L_80081BE8:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 80081BE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081BEC
  if (!crb(c,2)) { IRQCHK(c); goto L_80081BE8; } // 80081BF0
  c->r[3]=0u+0xCD000000u; // 80081BF4
  c->r[0]=R32(c->r[3]+0x00006828u); // 80081BF8
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081BFC
  W32(c->r[3]+0x00006828u,c->r[0]); // 80081C00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081C04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081C08
  c->lr=c->r[0]; // 80081C0C
  c->r[1]=c->r[1]+0x00000020u; // 80081C10
  return; // 80081C14
}

// __DBEXIReadReg
void f_80081C18(Ctx* __restrict c) {
  trace_call(0x80081C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081C18
  c->r[0]=c->lr; // 80081C1C
  c->r[6]=0u+0x00000000u; // 80081C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081C24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081C28
  c->r[31]=c->r[5]|c->r[5]; // 80081C2C
  c->r[5]=0u+0x00000001u; // 80081C30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081C34
  c->r[30]=c->r[4]|c->r[4]; // 80081C38
  c->r[4]=0u+0x00000004u; // 80081C3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80081C40
  W32(c->r[1]+0x00000010u,c->r[28]); // 80081C44
  c->r[28]=0u+0xCD000000u; // 80081C48
  W32(c->r[1]+0x00000008u,c->r[3]); // 80081C4C
  c->r[3]=c->r[1]+0x00000008u; // 80081C50
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80081C54
  c->r[0]=R32(c->r[28]+0x00006828u); // 80081C58
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081C5C
  c->r[0]=c->r[0]|0x000000C0u; // 80081C60
  W32(c->r[28]+0x00006828u,c->r[0]); // 80081C64
  c->lr=0x80081C6Cu; f_80081874(c); // 80081C68
  c->r[0]=cntlz(c->r[3]); // 80081C6C
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081C70
L_80081C74:;
  c->r[0]=R32(c->r[28]+0x00006834u); // 80081C74
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081C78
  if (!crb(c,2)) { IRQCHK(c); goto L_80081C74; } // 80081C7C
  c->r[3]=c->r[1]+0x0000000Cu; // 80081C80
  c->r[4]=0u+0x00000004u; // 80081C84
  c->r[5]=0u+0x00000000u; // 80081C88
  c->lr=0x80081C90u; f_80081874(c); // 80081C8C
  c->r[0]=cntlz(c->r[3]); // 80081C90
  c->r[3]=0u+0xCD000000u; // 80081C94
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081C98
  c->r[6]=c->r[29]|c->r[0]; // 80081C9C
L_80081CA0:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 80081CA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081CA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80081CA0; } // 80081CA8
  c->r[3]=0u+0xCD000000u; // 80081CAC
  cmps(c,1,(int32_t)c->r[31],2); // 80081CB0
  c->r[0]=R32(c->r[3]+0x00006828u); // 80081CB4
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081CB8
  W32(c->r[3]+0x00006828u,c->r[0]); // 80081CBC
  if (crb(c,6)) { goto L_80081CE4; } // 80081CC0
  if (!crb(c,4)) { goto L_80081CF8; } // 80081CC4
  cmps(c,0,(int32_t)c->r[31],1); // 80081CC8
  if (!crb(c,0)) { goto L_80081CD4; } // 80081CCC
  goto L_80081CF8; // 80081CD0
L_80081CD4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80081CD4
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 80081CD8
  W8(c->r[30]+0x00000000u,c->r[0]); // 80081CDC
  goto L_80081D14; // 80081CE0
L_80081CE4:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80081CE4
  c->r[0]=rotl(c->r[3],24)&0x0000FF00u; // 80081CE8
  c->r[0]=(rotl(c->r[3],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80081CEC
  W16(c->r[30]+0x00000000u,c->r[0]); // 80081CF0
  goto L_80081D14; // 80081CF4
L_80081CF8:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80081CF8
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 80081CFC
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 80081D00
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80081D04
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80081D08
  c->r[0]=c->r[3]|c->r[0]; // 80081D0C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80081D10
L_80081D14:;
  c->r[0]=cntlz(c->r[6]); // 80081D14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081D18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80081D1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081D20
  c->r[29]=R32(c->r[1]+0x00000014u); // 80081D24
  c->r[28]=R32(c->r[1]+0x00000010u); // 80081D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081D2C
  c->lr=c->r[0]; // 80081D30
  c->r[1]=c->r[1]+0x00000020u; // 80081D34
  return; // 80081D38
}

// __DBEXIWriteReg
void f_80081D3C(Ctx* __restrict c) {
  trace_call(0x80081D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081D3C
  c->r[0]=c->lr; // 80081D40
  cmps(c,0,(int32_t)c->r[5],2); // 80081D44
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081D48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081D4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081D50
  W32(c->r[1]+0x00000008u,c->r[3]); // 80081D54
  if (crb(c,2)) { goto L_80081D7C; } // 80081D58
  if (!crb(c,0)) { goto L_80081D90; } // 80081D5C
  cmps(c,0,(int32_t)c->r[5],1); // 80081D60
  if (!crb(c,0)) { goto L_80081D6C; } // 80081D64
  goto L_80081D90; // 80081D68
L_80081D6C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80081D6C
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80081D70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081D74
  goto L_80081DAC; // 80081D78
L_80081D7C:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 80081D7C
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 80081D80
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80081D84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081D88
  goto L_80081DAC; // 80081D8C
L_80081D90:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80081D90
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 80081D94
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 80081D98
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80081D9C
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80081DA0
  c->r[0]=c->r[3]|c->r[0]; // 80081DA4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081DA8
L_80081DAC:;
  c->r[30]=0u+0xCD000000u; // 80081DAC
  c->r[3]=c->r[1]+0x00000008u; // 80081DB0
  c->r[0]=R32(c->r[30]+0x00006828u); // 80081DB4
  c->r[4]=0u+0x00000004u; // 80081DB8
  c->r[5]=0u+0x00000001u; // 80081DBC
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081DC0
  c->r[0]=c->r[0]|0x000000C0u; // 80081DC4
  W32(c->r[30]+0x00006828u,c->r[0]); // 80081DC8
  c->lr=0x80081DD0u; f_80081874(c); // 80081DCC
  c->r[0]=cntlz(c->r[3]); // 80081DD0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081DD4
L_80081DD8:;
  c->r[0]=R32(c->r[30]+0x00006834u); // 80081DD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081DDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80081DD8; } // 80081DE0
  c->r[3]=c->r[1]+0x0000000Cu; // 80081DE4
  c->r[4]=0u+0x00000004u; // 80081DE8
  c->r[5]=0u+0x00000001u; // 80081DEC
  c->lr=0x80081DF4u; f_80081874(c); // 80081DF0
  c->r[0]=cntlz(c->r[3]); // 80081DF4
  c->r[3]=0u+0xCD000000u; // 80081DF8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081DFC
  c->r[5]=c->r[31]|c->r[0]; // 80081E00
L_80081E04:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 80081E04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081E08
  if (!crb(c,2)) { IRQCHK(c); goto L_80081E04; } // 80081E0C
  c->r[4]=0u+0xCD000000u; // 80081E10
  c->r[0]=cntlz(c->r[5]); // 80081E14
  c->r[5]=R32(c->r[4]+0x00006828u); // 80081E18
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081E1C
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 80081E20
  W32(c->r[4]+0x00006828u,c->r[0]); // 80081E24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081E28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081E2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80081E30
  c->lr=c->r[0]; // 80081E34
  c->r[1]=c->r[1]+0x00000020u; // 80081E38
  return; // 80081E3C
}

// __DBEXIReadRam
void f_80081E40(Ctx* __restrict c) {
  trace_call(0x80081E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081E40
  c->r[0]=c->lr; // 80081E44
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081E48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081E4C
  c->r[31]=0u+0xCD000000u; // 80081E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081E54
  W32(c->r[1]+0x00000014u,c->r[29]); // 80081E58
  c->r[29]=c->r[4]|c->r[4]; // 80081E5C
  c->r[4]=0u+0x00000004u; // 80081E60
  W32(c->r[1]+0x00000010u,c->r[28]); // 80081E64
  c->r[28]=c->r[5]|c->r[5]; // 80081E68
  c->r[5]=0u+0x00000001u; // 80081E6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80081E70
  c->r[3]=c->r[1]+0x00000008u; // 80081E74
  c->r[0]=R32(c->r[31]+0x00006828u); // 80081E78
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081E7C
  c->r[0]=c->r[0]|0x000000C0u; // 80081E80
  W32(c->r[31]+0x00006828u,c->r[0]); // 80081E84
  c->lr=0x80081E8Cu; f_80081874(c); // 80081E88
  c->r[0]=cntlz(c->r[3]); // 80081E8C
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081E90
L_80081E94:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 80081E94
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081E98
  if (!crb(c,2)) { IRQCHK(c); goto L_80081E94; } // 80081E9C
  c->r[31]=0u+0xCD000000u; // 80081EA0
  goto L_80081EE0; // 80081EA4
L_80081EA8:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80081EA8
  c->r[4]=0u+0x00000004u; // 80081EAC
  c->r[5]=0u+0x00000000u; // 80081EB0
  c->lr=0x80081EB8u; f_80081874(c); // 80081EB4
  c->r[0]=cntlz(c->r[3]); // 80081EB8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081EBC
  c->r[30]=c->r[30]|c->r[0]; // 80081EC0
L_80081EC4:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 80081EC4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_80081EC4; } // 80081ECC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80081ED0
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80081ED4
  W32(c->r[29]+0x00000000u,c->r[0]); // 80081ED8
  c->r[29]=c->r[29]+0x00000004u; // 80081EDC
L_80081EE0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80081EE0
  if (crb(c,1)) { IRQCHK(c); goto L_80081EA8; } // 80081EE4
  c->r[4]=0u+0xCD000000u; // 80081EE8
  c->r[0]=cntlz(c->r[30]); // 80081EEC
  c->r[5]=R32(c->r[4]+0x00006828u); // 80081EF0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081EF4
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 80081EF8
  W32(c->r[4]+0x00006828u,c->r[0]); // 80081EFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081F00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081F04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80081F08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80081F0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80081F10
  c->lr=c->r[0]; // 80081F14
  c->r[1]=c->r[1]+0x00000020u; // 80081F18
  return; // 80081F1C
}

// __DBEXIWriteRam
void f_80081F20(Ctx* __restrict c) {
  trace_call(0x80081F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081F20
  c->r[0]=c->lr; // 80081F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081F28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081F2C
  c->r[31]=0u+0xCD000000u; // 80081F30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081F34
  W32(c->r[1]+0x00000014u,c->r[29]); // 80081F38
  c->r[29]=c->r[4]|c->r[4]; // 80081F3C
  c->r[4]=0u+0x00000004u; // 80081F40
  W32(c->r[1]+0x00000010u,c->r[28]); // 80081F44
  c->r[28]=c->r[5]|c->r[5]; // 80081F48
  c->r[5]=0u+0x00000001u; // 80081F4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80081F50
  c->r[3]=c->r[1]+0x00000008u; // 80081F54
  c->r[0]=R32(c->r[31]+0x00006828u); // 80081F58
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 80081F5C
  c->r[0]=c->r[0]|0x000000C0u; // 80081F60
  W32(c->r[31]+0x00006828u,c->r[0]); // 80081F64
  c->lr=0x80081F6Cu; f_80081874(c); // 80081F68
  c->r[0]=cntlz(c->r[3]); // 80081F6C
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081F70
L_80081F74:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 80081F74
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081F78
  if (!crb(c,2)) { IRQCHK(c); goto L_80081F74; } // 80081F7C
  c->r[31]=0u+0xCD000000u; // 80081F80
  goto L_80081FC0; // 80081F84
L_80081F88:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80081F88
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F8C
  c->r[4]=0u+0x00000004u; // 80081F90
  c->r[5]=0u+0x00000001u; // 80081F94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80081F98
  c->r[29]=c->r[29]+0x00000004u; // 80081F9C
  c->lr=0x80081FA4u; f_80081874(c); // 80081FA0
  c->r[0]=cntlz(c->r[3]); // 80081FA4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081FA8
  c->r[30]=c->r[30]|c->r[0]; // 80081FAC
L_80081FB0:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 80081FB0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80081FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_80081FB0; } // 80081FB8
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80081FBC
L_80081FC0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80081FC0
  if (crb(c,1)) { IRQCHK(c); goto L_80081F88; } // 80081FC4
  c->r[4]=0u+0xCD000000u; // 80081FC8
  c->r[0]=cntlz(c->r[30]); // 80081FCC
  c->r[5]=R32(c->r[4]+0x00006828u); // 80081FD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80081FD4
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 80081FD8
  W32(c->r[4]+0x00006828u,c->r[0]); // 80081FDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081FE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081FE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80081FE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80081FEC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80081FF0
  c->lr=c->r[0]; // 80081FF4
  c->r[1]=c->r[1]+0x00000020u; // 80081FF8
  return; // 80081FFC
}

// FindContainHeap_
void f_80082000(Ctx* __restrict c) {
  trace_call(0x80082000u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082000
  c->r[0]=c->lr; // 80082004
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008200C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082010
  c->r[30]=c->r[3]|c->r[3]; // 80082014
  W32(c->r[1]+0x00000014u,c->r[29]); // 80082018
  c->r[29]=0u+0x00000000u; // 8008201C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80082020
  c->r[28]=c->r[4]|c->r[4]; // 80082024
  goto L_80082104; // 80082028
L_8008202C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8008202C
  cmpu(c,0,c->r[0],c->r[28]); // 80082030
  if (crb(c,1)) { goto L_80082104; } // 80082034
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082038
  cmpu(c,0,c->r[28],c->r[0]); // 8008203C
  if (!crb(c,0)) { goto L_80082104; } // 80082040
  c->r[31]=0u+0x00000000u; // 80082044
  goto L_800820D4; // 80082048
L_8008204C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8008204C
  cmpu(c,0,c->r[0],c->r[28]); // 80082050
  if (crb(c,1)) { goto L_800820D4; } // 80082054
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082058
  cmpu(c,0,c->r[28],c->r[0]); // 8008205C
  if (!crb(c,0)) { goto L_800820D4; } // 80082060
  c->r[30]=0u+0x00000000u; // 80082064
  goto L_800820A4; // 80082068
L_8008206C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8008206C
  cmpu(c,0,c->r[0],c->r[28]); // 80082070
  if (crb(c,1)) { goto L_800820A4; } // 80082074
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082078
  cmpu(c,0,c->r[28],c->r[0]); // 8008207C
  if (!crb(c,0)) { goto L_800820A4; } // 80082080
  c->r[4]=c->r[28]|c->r[28]; // 80082084
  c->r[3]=c->r[3]+0x0000000Cu; // 80082088
  c->lr=0x80082090u; f_80082000(c); // 8008208C
  cmps(c,0,(int32_t)c->r[3],0); // 80082090
  if (crb(c,2)) { goto L_8008209C; } // 80082094
  goto L_800820C0; // 80082098
L_8008209C:;
  c->r[3]=c->r[30]|c->r[30]; // 8008209C
  goto L_800820C0; // 800820A0
L_800820A4:;
  c->r[4]=c->r[30]|c->r[30]; // 800820A4
  c->r[3]=c->r[31]+0x0000000Cu; // 800820A8
  c->lr=0x800820B0u; f_80082D80(c); // 800820AC
  cmps(c,0,(int32_t)c->r[3],0); // 800820B0
  c->r[30]=c->r[3]|c->r[3]; // 800820B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8008206C; } // 800820B8
  c->r[3]=0u+0x00000000u; // 800820BC
L_800820C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800820C0
  if (crb(c,2)) { goto L_800820CC; } // 800820C4
  goto L_800820F0; // 800820C8
L_800820CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800820CC
  goto L_800820F0; // 800820D0
L_800820D4:;
  c->r[4]=c->r[31]|c->r[31]; // 800820D4
  c->r[3]=c->r[29]+0x0000000Cu; // 800820D8
  c->lr=0x800820E0u; f_80082D80(c); // 800820DC
  cmps(c,0,(int32_t)c->r[3],0); // 800820E0
  c->r[31]=c->r[3]|c->r[3]; // 800820E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8008204C; } // 800820E8
  c->r[3]=0u+0x00000000u; // 800820EC
L_800820F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800820F0
  if (crb(c,2)) { goto L_800820FC; } // 800820F4
  goto L_80082120; // 800820F8
L_800820FC:;
  c->r[3]=c->r[29]|c->r[29]; // 800820FC
  goto L_80082120; // 80082100
L_80082104:;
  c->r[3]=c->r[30]|c->r[30]; // 80082104
  c->r[4]=c->r[29]|c->r[29]; // 80082108
  c->lr=0x80082110u; f_80082D80(c); // 8008210C
  cmps(c,0,(int32_t)c->r[3],0); // 80082110
  c->r[29]=c->r[3]|c->r[3]; // 80082114
  if (!crb(c,2)) { IRQCHK(c); goto L_8008202C; } // 80082118
  c->r[3]=0u+0x00000000u; // 8008211C
L_80082120:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082124
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082128
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008212C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80082130
  c->lr=c->r[0]; // 80082134
  c->r[1]=c->r[1]+0x00000020u; // 80082138
  return; // 8008213C
}

// fn_80082140
void f_80082140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082140
  c->r[0]=c->lr; // 80082144
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082148
  c->r[11]=c->r[1]+0x00000020u; // 8008214C
  c->lr=0x80082154u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082150
  W32(c->r[3]+0x00000000u,c->r[4]); // 80082154
  c->r[0]=0u+0x00000000u; // 80082158
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8008215C
  c->r[27]=c->r[3]|c->r[3]; // 80082160
  W32(c->r[3]+0x00000018u,c->r[5]); // 80082164
  c->r[4]=0u+0x00000004u; // 80082168
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 8008216C
  W32(c->r[3]+0x00000038u,c->r[0]); // 80082170
  c->r[3]=c->r[3]+0x0000000Cu; // 80082174
  c->lr=0x8008217Cu; f_80082C80(c); // 80082178
  c->r[0]=R32(c->r[13]+0xFFFF9130u); // 8008217C
  cmps(c,0,(int32_t)c->r[0],0); // 80082180
  if (!crb(c,2)) { goto L_800821AC; } // 80082184
  c->r[3]=0u+0x801C0000u; // 80082188
  c->r[4]=0u+0x00000004u; // 8008218C
  c->r[3]=c->r[3]+0xFFFF9920u; // 80082190
  c->lr=0x80082198u; f_80082C80(c); // 80082194
  c->r[3]=0u+0x801C0000u; // 80082198
  c->r[3]=c->r[3]+0xFFFF9930u; // 8008219C
  c->lr=0x800821A4u; f_8004AC90(c); // 800821A0
  c->r[0]=0u+0x00000001u; // 800821A4
  W32(c->r[13]+0xFFFF9130u,c->r[0]); // 800821A8
L_800821AC:;
  c->r[3]=c->r[27]+0x00000020u; // 800821AC
  c->lr=0x800821B4u; f_8004AC90(c); // 800821B0
  c->r[3]=0u+0x801C0000u; // 800821B4
  c->r[3]=c->r[3]+0xFFFF9930u; // 800821B8
  c->lr=0x800821C0u; f_8004ACD0(c); // 800821BC
  c->r[31]=0u+0x801C0000u; // 800821C0
  c->r[30]=0u+0x00000000u; // 800821C4
  c->r[28]=c->r[31]+0xFFFF9920u; // 800821C8
  goto L_800822A8; // 800821CC
L_800821D0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800821D0
  cmpu(c,0,c->r[0],c->r[27]); // 800821D4
  if (crb(c,1)) { goto L_800822A8; } // 800821D8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800821DC
  cmpu(c,0,c->r[27],c->r[0]); // 800821E0
  if (!crb(c,0)) { goto L_800822A8; } // 800821E4
  c->r[31]=0u+0x00000000u; // 800821E8
  goto L_80082278; // 800821EC
L_800821F0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800821F0
  cmpu(c,0,c->r[0],c->r[27]); // 800821F4
  if (crb(c,1)) { goto L_80082278; } // 800821F8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800821FC
  cmpu(c,0,c->r[27],c->r[0]); // 80082200
  if (!crb(c,0)) { goto L_80082278; } // 80082204
  c->r[29]=0u+0x00000000u; // 80082208
  goto L_80082248; // 8008220C
L_80082210:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80082210
  cmpu(c,0,c->r[0],c->r[27]); // 80082214
  if (crb(c,1)) { goto L_80082248; } // 80082218
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8008221C
  cmpu(c,0,c->r[27],c->r[0]); // 80082220
  if (!crb(c,0)) { goto L_80082248; } // 80082224
  c->r[4]=c->r[27]|c->r[27]; // 80082228
  c->r[3]=c->r[3]+0x0000000Cu; // 8008222C
  c->lr=0x80082234u; f_80082000(c); // 80082230
  cmps(c,0,(int32_t)c->r[3],0); // 80082234
  if (crb(c,2)) { goto L_80082240; } // 80082238
  goto L_80082264; // 8008223C
L_80082240:;
  c->r[3]=c->r[29]|c->r[29]; // 80082240
  goto L_80082264; // 80082244
L_80082248:;
  c->r[4]=c->r[29]|c->r[29]; // 80082248
  c->r[3]=c->r[31]+0x0000000Cu; // 8008224C
  c->lr=0x80082254u; f_80082D80(c); // 80082250
  cmps(c,0,(int32_t)c->r[3],0); // 80082254
  c->r[29]=c->r[3]|c->r[3]; // 80082258
  if (!crb(c,2)) { IRQCHK(c); goto L_80082210; } // 8008225C
  c->r[3]=0u+0x00000000u; // 80082260
L_80082264:;
  cmps(c,0,(int32_t)c->r[3],0); // 80082264
  if (crb(c,2)) { goto L_80082270; } // 80082268
  goto L_80082294; // 8008226C
L_80082270:;
  c->r[3]=c->r[31]|c->r[31]; // 80082270
  goto L_80082294; // 80082274
L_80082278:;
  c->r[4]=c->r[31]|c->r[31]; // 80082278
  c->r[3]=c->r[30]+0x0000000Cu; // 8008227C
  c->lr=0x80082284u; f_80082D80(c); // 80082280
  cmps(c,0,(int32_t)c->r[3],0); // 80082284
  c->r[31]=c->r[3]|c->r[3]; // 80082288
  if (!crb(c,2)) { IRQCHK(c); goto L_800821F0; } // 8008228C
  c->r[3]=0u+0x00000000u; // 80082290
L_80082294:;
  cmps(c,0,(int32_t)c->r[3],0); // 80082294
  if (crb(c,2)) { goto L_800822A0; } // 80082298
  goto L_800822C4; // 8008229C
L_800822A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800822A0
  goto L_800822C4; // 800822A4
L_800822A8:;
  c->r[4]=c->r[30]|c->r[30]; // 800822A8
  c->r[3]=c->r[31]+0xFFFF9920u; // 800822AC
  c->lr=0x800822B4u; f_80082D80(c); // 800822B0
  cmps(c,0,(int32_t)c->r[3],0); // 800822B4
  c->r[30]=c->r[3]|c->r[3]; // 800822B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800821D0; } // 800822BC
  c->r[3]=0u+0x00000000u; // 800822C0
L_800822C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800822C4
  if (crb(c,2)) { goto L_800822D0; } // 800822C8
  c->r[28]=c->r[3]+0x0000000Cu; // 800822CC
L_800822D0:;
  c->r[3]=c->r[28]|c->r[28]; // 800822D0
  c->r[4]=c->r[27]|c->r[27]; // 800822D4
  c->lr=0x800822DCu; f_80082CA0(c); // 800822D8
  c->r[3]=0u+0x801C0000u; // 800822DC
  c->r[3]=c->r[3]+0xFFFF9930u; // 800822E0
  c->lr=0x800822E8u; f_8004ADB0(c); // 800822E4
  c->r[11]=c->r[1]+0x00000020u; // 800822E8
  c->lr=0x800822F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800822EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800822F0
  c->lr=c->r[0]; // 800822F4
  c->r[1]=c->r[1]+0x00000020u; // 800822F8
  return; // 800822FC
}

// fn_80082300
void f_80082300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082300
  c->r[0]=c->lr; // 80082304
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082308
  c->r[11]=c->r[1]+0x00000020u; // 8008230C
  c->lr=0x80082314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082310
  c->r[4]=0u+0x801C0000u; // 80082314
  c->r[27]=c->r[3]|c->r[3]; // 80082318
  c->r[3]=c->r[4]+0xFFFF9930u; // 8008231C
  c->lr=0x80082324u; f_8004ACD0(c); // 80082320
  c->r[31]=0u+0x801C0000u; // 80082324
  c->r[30]=0u+0x00000000u; // 80082328
  c->r[28]=c->r[31]+0xFFFF9920u; // 8008232C
  goto L_8008240C; // 80082330
L_80082334:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80082334
  cmpu(c,0,c->r[0],c->r[27]); // 80082338
  if (crb(c,1)) { goto L_8008240C; } // 8008233C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082340
  cmpu(c,0,c->r[27],c->r[0]); // 80082344
  if (!crb(c,0)) { goto L_8008240C; } // 80082348
  c->r[31]=0u+0x00000000u; // 8008234C
  goto L_800823DC; // 80082350
L_80082354:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80082354
  cmpu(c,0,c->r[0],c->r[27]); // 80082358
  if (crb(c,1)) { goto L_800823DC; } // 8008235C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082360
  cmpu(c,0,c->r[27],c->r[0]); // 80082364
  if (!crb(c,0)) { goto L_800823DC; } // 80082368
  c->r[29]=0u+0x00000000u; // 8008236C
  goto L_800823AC; // 80082370
L_80082374:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80082374
  cmpu(c,0,c->r[0],c->r[27]); // 80082378
  if (crb(c,1)) { goto L_800823AC; } // 8008237C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80082380
  cmpu(c,0,c->r[27],c->r[0]); // 80082384
  if (!crb(c,0)) { goto L_800823AC; } // 80082388
  c->r[4]=c->r[27]|c->r[27]; // 8008238C
  c->r[3]=c->r[3]+0x0000000Cu; // 80082390
  c->lr=0x80082398u; f_80082000(c); // 80082394
  cmps(c,0,(int32_t)c->r[3],0); // 80082398
  if (crb(c,2)) { goto L_800823A4; } // 8008239C
  goto L_800823C8; // 800823A0
L_800823A4:;
  c->r[3]=c->r[29]|c->r[29]; // 800823A4
  goto L_800823C8; // 800823A8
L_800823AC:;
  c->r[4]=c->r[29]|c->r[29]; // 800823AC
  c->r[3]=c->r[31]+0x0000000Cu; // 800823B0
  c->lr=0x800823B8u; f_80082D80(c); // 800823B4
  cmps(c,0,(int32_t)c->r[3],0); // 800823B8
  c->r[29]=c->r[3]|c->r[3]; // 800823BC
  if (!crb(c,2)) { IRQCHK(c); goto L_80082374; } // 800823C0
  c->r[3]=0u+0x00000000u; // 800823C4
L_800823C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800823C8
  if (crb(c,2)) { goto L_800823D4; } // 800823CC
  goto L_800823F8; // 800823D0
L_800823D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800823D4
  goto L_800823F8; // 800823D8
L_800823DC:;
  c->r[4]=c->r[31]|c->r[31]; // 800823DC
  c->r[3]=c->r[30]+0x0000000Cu; // 800823E0
  c->lr=0x800823E8u; f_80082D80(c); // 800823E4
  cmps(c,0,(int32_t)c->r[3],0); // 800823E8
  c->r[31]=c->r[3]|c->r[3]; // 800823EC
  if (!crb(c,2)) { IRQCHK(c); goto L_80082354; } // 800823F0
  c->r[3]=0u+0x00000000u; // 800823F4
L_800823F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800823F8
  if (crb(c,2)) { goto L_80082404; } // 800823FC
  goto L_80082428; // 80082400
L_80082404:;
  c->r[3]=c->r[30]|c->r[30]; // 80082404
  goto L_80082428; // 80082408
L_8008240C:;
  c->r[4]=c->r[30]|c->r[30]; // 8008240C
  c->r[3]=c->r[31]+0xFFFF9920u; // 80082410
  c->lr=0x80082418u; f_80082D80(c); // 80082414
  cmps(c,0,(int32_t)c->r[3],0); // 80082418
  c->r[30]=c->r[3]|c->r[3]; // 8008241C
  if (!crb(c,2)) { IRQCHK(c); goto L_80082334; } // 80082420
  c->r[3]=0u+0x00000000u; // 80082424
L_80082428:;
  cmps(c,0,(int32_t)c->r[3],0); // 80082428
  if (crb(c,2)) { goto L_80082434; } // 8008242C
  c->r[28]=c->r[3]+0x0000000Cu; // 80082430
L_80082434:;
  c->r[3]=c->r[28]|c->r[28]; // 80082434
  c->r[4]=c->r[27]|c->r[27]; // 80082438
  c->lr=0x80082440u; f_80082D10(c); // 8008243C
  c->r[3]=0u+0x801C0000u; // 80082440
  c->r[3]=c->r[3]+0xFFFF9930u; // 80082444
  c->lr=0x8008244Cu; f_8004ADB0(c); // 80082448
  c->r[0]=0u+0x00000000u; // 8008244C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80082450
  c->r[11]=c->r[1]+0x00000020u; // 80082454
  c->lr=0x8008245Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082458
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008245C
  c->lr=c->r[0]; // 80082460
  c->r[1]=c->r[1]+0x00000020u; // 80082464
  return; // 80082468
}

// fn_80082470
void f_80082470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082470
  c->r[0]=c->lr; // 80082474
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082478
  c->r[11]=c->r[1]+0x00000020u; // 8008247C
  c->lr=0x80082484u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082480
  c->r[8]=R32(c->r[4]+0x00000008u); // 80082484
  c->r[30]=c->r[6]+c->r[5]; // 80082488
  c->r[6]=R16(c->r[4]+0x00000002u); // 8008248C
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 80082490
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082494
  cmps(c,0,(int32_t)c->r[8],0); // 80082498
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 8008249C
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 800824A0
  c->r[6]=c->r[4]+c->r[0]; // 800824A4
  c->r[27]=c->r[5]|c->r[5]; // 800824A8
  c->r[26]=c->r[3]|c->r[3]; // 800824AC
  c->r[28]=c->r[7]|c->r[7]; // 800824B0
  c->r[31]=c->r[29]|c->r[29]; // 800824B4
  c->r[5]=c->r[4]-c->r[9]; // 800824B8
  c->r[6]=c->r[6]+0x00000010u; // 800824BC
  if (crb(c,2)) { goto L_800824CC; } // 800824C0
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 800824C4
  goto L_800824D0; // 800824C8
L_800824CC:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 800824CC
L_800824D0:;
  cmps(c,0,(int32_t)c->r[10],0); // 800824D0
  if (crb(c,2)) { goto L_800824E0; } // 800824D4
  W32(c->r[10]+0x00000008u,c->r[8]); // 800824D8
  goto L_800824E4; // 800824DC
L_800824E0:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 800824E0
L_800824E4:;
  c->r[0]=c->r[29]-c->r[5]; // 800824E4
  cmpu(c,0,c->r[0],0x00000014u); // 800824E8
  if (crb(c,0)) { goto L_80082504; } // 800824EC
  cmps(c,0,(int32_t)c->r[7],0); // 800824F0
  if (!crb(c,2)) { goto L_8008250C; } // 800824F4
  c->r[0]=R16(c->r[3]+0x00000012u); // 800824F8
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800824FC
  if (!crb(c,2)) { goto L_8008250C; } // 80082500
L_80082504:;
  c->r[31]=c->r[5]|c->r[5]; // 80082504
  goto L_80082568; // 80082508
L_8008250C:;
  c->r[0]=0u+0x00004652u; // 8008250C
  W16(c->r[5]+0x00000000u,c->r[0]); // 80082510
  c->r[4]=0u+0x00000000u; // 80082514
  cmps(c,0,(int32_t)c->r[8],0); // 80082518
  W16(c->r[5]+0x00000002u,c->r[4]); // 8008251C
  c->r[0]=c->r[5]+0x00000010u; // 80082520
  c->r[0]=c->r[29]-c->r[0]; // 80082524
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082528
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8008252C
  W32(c->r[5]+0x00000008u,c->r[8]); // 80082530
  if (crb(c,2)) { goto L_80082544; } // 80082534
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 80082538
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8008253C
  goto L_8008254C; // 80082540
L_80082544:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80082544
  W32(c->r[3]+0x00000000u,c->r[5]); // 80082548
L_8008254C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8008254C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80082550
  if (crb(c,2)) { goto L_80082560; } // 80082554
  W32(c->r[4]+0x00000008u,c->r[5]); // 80082558
  goto L_80082564; // 8008255C
L_80082560:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 80082560
L_80082564:;
  c->r[8]=c->r[5]|c->r[5]; // 80082564
L_80082568:;
  c->r[0]=c->r[6]-c->r[30]; // 80082568
  cmpu(c,0,c->r[0],0x00000014u); // 8008256C
  if (crb(c,0)) { goto L_80082588; } // 80082570
  cmpu(c,0,c->r[7],0x00000001u); // 80082574
  if (!crb(c,2)) { goto L_80082590; } // 80082578
  c->r[0]=R16(c->r[3]+0x00000012u); // 8008257C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 80082580
  if (!crb(c,2)) { goto L_80082590; } // 80082584
L_80082588:;
  c->r[30]=c->r[6]|c->r[6]; // 80082588
  goto L_800825E8; // 8008258C
L_80082590:;
  c->r[0]=0u+0x00004652u; // 80082590
  W16(c->r[30]+0x00000000u,c->r[0]); // 80082594
  c->r[4]=0u+0x00000000u; // 80082598
  cmps(c,0,(int32_t)c->r[8],0); // 8008259C
  W16(c->r[30]+0x00000002u,c->r[4]); // 800825A0
  c->r[0]=c->r[30]+0x00000010u; // 800825A4
  c->r[0]=c->r[6]-c->r[0]; // 800825A8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800825AC
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800825B0
  W32(c->r[30]+0x00000008u,c->r[8]); // 800825B4
  if (crb(c,2)) { goto L_800825C8; } // 800825B8
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800825BC
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 800825C0
  goto L_800825D0; // 800825C4
L_800825C8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800825C8
  W32(c->r[3]+0x00000000u,c->r[30]); // 800825CC
L_800825D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800825D0
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800825D4
  if (crb(c,2)) { goto L_800825E4; } // 800825D8
  W32(c->r[4]+0x00000008u,c->r[30]); // 800825DC
  goto L_800825E8; // 800825E0
L_800825E4:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800825E4
L_800825E8:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800825E8
  c->r[5]=c->r[30]-c->r[31]; // 800825EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800825F0
  if (crb(c,2)) { goto L_80082604; } // 800825F4
  c->r[3]=c->r[31]|c->r[31]; // 800825F8
  c->r[4]=0u+0x00000000u; // 800825FC
  c->lr=0x80082604u; f_80004714(c); // 80082600
L_80082604:;
  c->r[5]=0u+0x00000000u; // 80082604
  c->r[4]=c->r[29]+0x00000010u; // 80082608
  c->r[3]=c->r[5]|c->r[5]; // 8008260C
  c->r[6]=0u+0x00005544u; // 80082610
  c->r[4]=c->r[30]-c->r[4]; // 80082614
  c->r[0]=c->r[29]-c->r[31]; // 80082618
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 8008261C
  W16(c->r[29]+0x00000000u,c->r[6]); // 80082620
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 80082624
  W32(c->r[29]+0x00000004u,c->r[4]); // 80082628
  W32(c->r[29]+0x00000008u,c->r[5]); // 8008262C
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 80082630
  W16(c->r[29]+0x00000002u,c->r[3]); // 80082634
  c->r[0]=R16(c->r[26]+0x00000010u); // 80082638
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8008263C
  W16(c->r[29]+0x00000002u,c->r[3]); // 80082640
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 80082644
  W32(c->r[29]+0x00000008u,c->r[4]); // 80082648
  cmps(c,0,(int32_t)c->r[4],0); // 8008264C
  if (crb(c,2)) { goto L_80082660; } // 80082650
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80082654
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80082658
  goto L_80082668; // 8008265C
L_80082660:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 80082660
  W32(c->r[26]+0x00000008u,c->r[29]); // 80082664
L_80082668:;
  cmps(c,0,(int32_t)c->r[3],0); // 80082668
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8008266C
  if (crb(c,2)) { goto L_8008267C; } // 80082670
  W32(c->r[3]+0x00000008u,c->r[29]); // 80082674
  goto L_80082680; // 80082678
L_8008267C:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 8008267C
L_80082680:;
  c->r[11]=c->r[1]+0x00000020u; // 80082680
  c->r[3]=c->r[27]|c->r[27]; // 80082684
  c->lr=0x8008268Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082688
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008268C
  c->lr=c->r[0]; // 80082690
  c->r[1]=c->r[1]+0x00000020u; // 80082694
  return; // 80082698
}

// AllocFromHead_
void f_800826A0(Ctx* __restrict c) {
  trace_call(0x800826A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800826A0
  c->r[0]=c->lr; // 800826A4
  c->r[3]=c->r[3]+0x0000003Cu; // 800826A8
  c->r[6]=c->r[4]|c->r[4]; // 800826AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800826B0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800826B4
  c->r[9]=~(c->r[0]|c->r[0]); // 800826B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800826BC
  c->r[31]=0u+0x00000000u; // 800826C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800826C4
  c->r[30]=0u+0xFFFFFFFFu; // 800826C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800826CC
  c->r[29]=0u+0x00000000u; // 800826D0
  c->r[7]=R16(c->r[3]+0x00000012u); // 800826D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800826D8
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 800826DC
  c->r[0]=cntlz(c->r[0]); // 800826E0
  c->r[11]=rotl(c->r[0],27)&0x07FFFFFFu; // 800826E4
  goto L_80082738; // 800826E8
L_800826EC:;
  c->r[8]=c->r[12]+0x00000010u; // 800826EC
  c->r[10]=R32(c->r[12]+0x00000004u); // 800826F0
  c->r[7]=c->r[5]+c->r[8]; // 800826F4
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800826F8
  c->r[7]=c->r[9]&c->r[0]; // 800826FC
  c->r[0]=c->r[7]-c->r[8]; // 80082700
  c->r[0]=c->r[4]+c->r[0]; // 80082704
  cmpu(c,0,c->r[10],c->r[0]); // 80082708
  if (crb(c,0)) { goto L_80082734; } // 8008270C
  cmpu(c,0,c->r[30],c->r[10]); // 80082710
  if (!crb(c,1)) { goto L_80082734; } // 80082714
  cmps(c,0,(int32_t)c->r[11],0); // 80082718
  c->r[31]=c->r[12]|c->r[12]; // 8008271C
  c->r[30]=c->r[10]|c->r[10]; // 80082720
  c->r[29]=c->r[7]|c->r[7]; // 80082724
  if (!crb(c,2)) { goto L_80082740; } // 80082728
  cmpu(c,0,c->r[10],c->r[4]); // 8008272C
  if (crb(c,2)) { goto L_80082740; } // 80082730
L_80082734:;
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80082734
L_80082738:;
  cmps(c,0,(int32_t)c->r[12],0); // 80082738
  if (!crb(c,2)) { IRQCHK(c); goto L_800826EC; } // 8008273C
L_80082740:;
  cmps(c,0,(int32_t)c->r[31],0); // 80082740
  if (crb(c,2)) { goto L_8008275C; } // 80082744
  c->r[4]=c->r[31]|c->r[31]; // 80082748
  c->r[5]=c->r[29]|c->r[29]; // 8008274C
  c->r[7]=0u+0x00000000u; // 80082750
  c->lr=0x80082758u; f_80082470(c); // 80082754
  goto L_80082760; // 80082758
L_8008275C:;
  c->r[3]=0u+0x00000000u; // 8008275C
L_80082760:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082764
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082768
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008276C
  c->lr=c->r[0]; // 80082770
  c->r[1]=c->r[1]+0x00000020u; // 80082774
  return; // 80082778
}

// AllocFromTail_
void f_80082780(Ctx* __restrict c) {
  trace_call(0x80082780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082780
  c->r[0]=c->lr; // 80082784
  c->r[3]=c->r[3]+0x0000003Cu; // 80082788
  c->r[6]=c->r[4]|c->r[4]; // 8008278C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082790
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80082794
  c->r[8]=~(c->r[0]|c->r[0]); // 80082798
  c->r[12]=0u+0x00000000u; // 8008279C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800827A0
  c->r[31]=0u+0xFFFFFFFFu; // 800827A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800827A8
  c->r[5]=R16(c->r[3]+0x00000012u); // 800827AC
  c->r[11]=R32(c->r[3]+0x00000004u); // 800827B0
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 800827B4
  c->r[5]=0u+0x00000000u; // 800827B8
  c->r[0]=cntlz(c->r[0]); // 800827BC
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 800827C0
  goto L_8008280C; // 800827C4
L_800827C8:;
  c->r[9]=R32(c->r[11]+0x00000004u); // 800827C8
  c->r[7]=c->r[11]+0x00000010u; // 800827CC
  c->r[0]=c->r[9]+c->r[7]; // 800827D0
  c->r[0]=c->r[0]-c->r[4]; // 800827D4
  c->r[30]=c->r[8]&c->r[0]; // 800827D8
  c->r[0]=c->r[30]-c->r[7]; cr0(c,c->r[0]); // 800827DC
  if (crb(c,0)) { goto L_80082808; } // 800827E0
  cmpu(c,0,c->r[31],c->r[9]); // 800827E4
  if (!crb(c,1)) { goto L_80082808; } // 800827E8
  cmps(c,0,(int32_t)c->r[10],0); // 800827EC
  c->r[12]=c->r[11]|c->r[11]; // 800827F0
  c->r[31]=c->r[9]|c->r[9]; // 800827F4
  c->r[5]=c->r[30]|c->r[30]; // 800827F8
  if (!crb(c,2)) { goto L_80082814; } // 800827FC
  cmpu(c,0,c->r[9],c->r[4]); // 80082800
  if (crb(c,2)) { goto L_80082814; } // 80082804
L_80082808:;
  c->r[11]=R32(c->r[11]+0x00000008u); // 80082808
L_8008280C:;
  cmps(c,0,(int32_t)c->r[11],0); // 8008280C
  if (!crb(c,2)) { IRQCHK(c); goto L_800827C8; } // 80082810
L_80082814:;
  cmps(c,0,(int32_t)c->r[12],0); // 80082814
  if (crb(c,2)) { goto L_8008282C; } // 80082818
  c->r[4]=c->r[12]|c->r[12]; // 8008281C
  c->r[7]=0u+0x00000001u; // 80082820
  c->lr=0x80082828u; f_80082470(c); // 80082824
  goto L_80082830; // 80082828
L_8008282C:;
  c->r[3]=0u+0x00000000u; // 8008282C
L_80082830:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082834
  c->r[30]=R32(c->r[1]+0x00000008u); // 80082838
  c->lr=c->r[0]; // 8008283C
  c->r[1]=c->r[1]+0x00000010u; // 80082840
  return; // 80082844
}

// RecycleRegion_
void f_80082850(Ctx* __restrict c) {
  trace_call(0x80082850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082850
  c->r[8]=0u+0x00000000u; // 80082854
  c->r[5]=R32(c->r[4]+0x00000000u); // 80082858
  c->r[0]=R32(c->r[4]+0x00000004u); // 8008285C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80082860
  c->r[6]=R32(c->r[3]+0x00000000u); // 80082864
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80082868
  goto L_800828D8; // 8008286C
L_80082870:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80082870
  cmpu(c,0,c->r[6],c->r[0]); // 80082874
  if (!crb(c,0)) { goto L_80082884; } // 80082878
  c->r[8]=c->r[6]|c->r[6]; // 8008287C
  goto L_800828D4; // 80082880
L_80082884:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082884
  cmpu(c,0,c->r[6],c->r[0]); // 80082888
  if (!crb(c,2)) { goto L_800828E0; } // 8008288C
  c->r[0]=R32(c->r[6]+0x00000004u); // 80082890
  c->r[7]=R32(c->r[6]+0x00000008u); // 80082894
  c->r[5]=c->r[6]+c->r[0]; // 80082898
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8008289C
  c->r[0]=c->r[5]+0x00000010u; // 800828A0
  cmps(c,0,(int32_t)c->r[7],0); // 800828A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800828A8
  if (crb(c,2)) { goto L_800828B8; } // 800828AC
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 800828B0
  goto L_800828BC; // 800828B4
L_800828B8:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 800828B8
L_800828BC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800828BC
  if (crb(c,2)) { goto L_800828CC; } // 800828C0
  W32(c->r[6]+0x00000008u,c->r[7]); // 800828C4
  goto L_800828E0; // 800828C8
L_800828CC:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 800828CC
  goto L_800828E0; // 800828D0
L_800828D4:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800828D4
L_800828D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800828D8
  if (!crb(c,2)) { IRQCHK(c); goto L_80082870; } // 800828DC
L_800828E0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800828E0
  if (crb(c,2)) { goto L_80082938; } // 800828E4
  c->r[5]=R32(c->r[8]+0x00000004u); // 800828E8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800828EC
  c->r[4]=c->r[8]+c->r[5]; // 800828F0
  c->r[4]=c->r[4]+0x00000010u; // 800828F4
  cmpu(c,0,c->r[4],c->r[0]); // 800828F8
  if (!crb(c,2)) { goto L_80082938; } // 800828FC
  c->r[5]=R32(c->r[8]+0x00000008u); // 80082900
  W32(c->r[1]+0x00000008u,c->r[8]); // 80082904
  cmps(c,0,(int32_t)c->r[5],0); // 80082908
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8008290C
  if (crb(c,2)) { goto L_8008291C; } // 80082910
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80082914
  goto L_80082920; // 80082918
L_8008291C:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8008291C
L_80082920:;
  cmps(c,0,(int32_t)c->r[4],0); // 80082920
  if (crb(c,2)) { goto L_80082930; } // 80082924
  W32(c->r[4]+0x00000008u,c->r[5]); // 80082928
  goto L_80082934; // 8008292C
L_80082930:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 80082930
L_80082934:;
  c->r[8]=c->r[5]|c->r[5]; // 80082934
L_80082938:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80082938
  c->r[5]=R32(c->r[1]+0x00000008u); // 8008293C
  c->r[0]=c->r[6]-c->r[5]; // 80082940
  cmpu(c,0,c->r[0],0x00000010u); // 80082944
  if (!crb(c,0)) { goto L_80082954; } // 80082948
  c->r[3]=0u+0x00000000u; // 8008294C
  goto L_800829B0; // 80082950
L_80082954:;
  c->r[0]=0u+0x00004652u; // 80082954
  W16(c->r[5]+0x00000000u,c->r[0]); // 80082958
  c->r[4]=0u+0x00000000u; // 8008295C
  cmps(c,0,(int32_t)c->r[8],0); // 80082960
  W16(c->r[5]+0x00000002u,c->r[4]); // 80082964
  c->r[0]=c->r[5]+0x00000010u; // 80082968
  c->r[0]=c->r[6]-c->r[0]; // 8008296C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082970
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80082974
  W32(c->r[5]+0x00000008u,c->r[8]); // 80082978
  if (crb(c,2)) { goto L_8008298C; } // 8008297C
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 80082980
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 80082984
  goto L_80082994; // 80082988
L_8008298C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8008298C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80082990
L_80082994:;
  cmps(c,0,(int32_t)c->r[4],0); // 80082994
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80082998
  if (crb(c,2)) { goto L_800829A8; } // 8008299C
  W32(c->r[4]+0x00000008u,c->r[5]); // 800829A0
  goto L_800829AC; // 800829A4
L_800829A8:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800829A8
L_800829AC:;
  c->r[3]=0u+0x00000001u; // 800829AC
L_800829B0:;
  c->r[1]=c->r[1]+0x00000010u; // 800829B0
  return; // 800829B4
}

// MEMCreateExpHeapEx
void f_800829C0(Ctx* __restrict c) {
  trace_call(0x800829C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800829C0
  c->r[0]=c->lr; // 800829C4
  c->r[4]=c->r[4]+c->r[3]; // 800829C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800829CC
  c->r[0]=c->r[3]+0x00000003u; // 800829D0
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800829D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800829D8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800829DC
  cmpu(c,0,c->r[31],c->r[6]); // 800829E0
  if (crb(c,1)) { goto L_800829F4; } // 800829E4
  c->r[0]=c->r[6]-c->r[31]; // 800829E8
  cmpu(c,0,c->r[0],0x00000064u); // 800829EC
  if (!crb(c,0)) { goto L_800829FC; } // 800829F0
L_800829F4:;
  c->r[3]=0u+0x00000000u; // 800829F4
  goto L_80082A5C; // 800829F8
L_800829FC:;
  c->r[4]=0u+0x45580000u; // 800829FC
  c->r[7]=c->r[5]|c->r[5]; // 80082A00
  c->r[3]=c->r[31]|c->r[31]; // 80082A04
  c->r[5]=c->r[31]+0x00000050u; // 80082A08
  c->r[4]=c->r[4]+0x00005048u; // 80082A0C
  c->lr=0x80082A14u; f_80082140(c); // 80082A10
  c->r[5]=0u+0x00000000u; // 80082A14
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 80082A18
  c->r[4]=0u+0x00004652u; // 80082A1C
  c->r[3]=c->r[31]|c->r[31]; // 80082A20
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 80082A24
  c->r[6]=R32(c->r[31]+0x00000018u); // 80082A28
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 80082A2C
  c->r[0]=c->r[6]+0x00000010u; // 80082A30
  W16(c->r[6]+0x00000000u,c->r[4]); // 80082A34
  c->r[0]=c->r[7]-c->r[0]; // 80082A38
  W16(c->r[6]+0x00000002u,c->r[5]); // 80082A3C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80082A40
  W32(c->r[6]+0x00000008u,c->r[5]); // 80082A44
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 80082A48
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 80082A4C
  W32(c->r[31]+0x00000040u,c->r[6]); // 80082A50
  W32(c->r[31]+0x00000044u,c->r[5]); // 80082A54
  W32(c->r[31]+0x00000048u,c->r[5]); // 80082A58
L_80082A5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082A5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082A60
  c->lr=c->r[0]; // 80082A64
  c->r[1]=c->r[1]+0x00000010u; // 80082A68
  return; // 80082A6C
}

// MEMDestroyExpHeap
void f_80082A70(Ctx* __restrict c) {
  trace_call(0x80082A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082A70
  c->r[0]=c->lr; // 80082A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082A7C
  c->r[31]=c->r[3]|c->r[3]; // 80082A80
  c->lr=0x80082A88u; f_80082300(c); // 80082A84
  c->r[3]=c->r[31]|c->r[31]; // 80082A88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082A90
  c->lr=c->r[0]; // 80082A94
  c->r[1]=c->r[1]+0x00000010u; // 80082A98
  return; // 80082A9C
}

// MEMAllocFromExpHeapEx
void f_80082AA0(Ctx* __restrict c) {
  trace_call(0x80082AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082AA0
  c->r[0]=c->lr; // 80082AA4
  cmps(c,0,(int32_t)c->r[4],0); // 80082AA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082AAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082AB0
  c->r[31]=c->r[5]|c->r[5]; // 80082AB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082AB8
  c->r[30]=c->r[4]|c->r[4]; // 80082ABC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80082AC0
  c->r[29]=c->r[3]|c->r[3]; // 80082AC4
  if (!crb(c,2)) { goto L_80082AD0; } // 80082AC8
  c->r[30]=0u+0x00000001u; // 80082ACC
L_80082AD0:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 80082AD0
  c->r[4]=c->r[30]+0x00000003u; // 80082AD4
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80082AD8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80082ADC
  if (crb(c,2)) { goto L_80082AEC; } // 80082AE0
  c->r[3]=c->r[3]+0x00000020u; // 80082AE4
  c->lr=0x80082AECu; f_8004ACD0(c); // 80082AE8
L_80082AEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80082AEC
  if (crb(c,0)) { goto L_80082B08; } // 80082AF0
  c->r[3]=c->r[29]|c->r[29]; // 80082AF4
  c->r[4]=c->r[30]|c->r[30]; // 80082AF8
  c->r[5]=c->r[31]|c->r[31]; // 80082AFC
  c->lr=0x80082B04u; f_800826A0(c); // 80082B00
  goto L_80082B18; // 80082B04
L_80082B08:;
  c->r[3]=c->r[29]|c->r[29]; // 80082B08
  c->r[4]=c->r[30]|c->r[30]; // 80082B0C
  c->r[5]=0u-c->r[31]; // 80082B10
  c->lr=0x80082B18u; f_80082780(c); // 80082B14
L_80082B18:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 80082B18
  c->r[31]=c->r[3]|c->r[3]; // 80082B1C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80082B20
  if (crb(c,2)) { goto L_80082B30; } // 80082B24
  c->r[3]=c->r[29]+0x00000020u; // 80082B28
  c->lr=0x80082B30u; f_8004ADB0(c); // 80082B2C
L_80082B30:;
  c->r[3]=c->r[31]|c->r[31]; // 80082B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 80082B3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082B40
  c->lr=c->r[0]; // 80082B44
  c->r[1]=c->r[1]+0x00000020u; // 80082B48
  return; // 80082B4C
}

// MEMFreeToExpHeap
void f_80082B50(Ctx* __restrict c) {
  trace_call(0x80082B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082B50
  c->r[0]=c->lr; // 80082B54
  cmps(c,0,(int32_t)c->r[4],0); // 80082B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082B5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082B60
  c->r[31]=c->r[4]|c->r[4]; // 80082B64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082B68
  c->r[30]=c->r[3]|c->r[3]; // 80082B6C
  if (crb(c,2)) { goto L_80082BFC; } // 80082B70
  c->r[0]=R32(c->r[3]+0x00000038u); // 80082B74
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80082B78
  if (crb(c,2)) { goto L_80082B88; } // 80082B7C
  c->r[3]=c->r[3]+0x00000020u; // 80082B80
  c->lr=0x80082B88u; f_8004ACD0(c); // 80082B84
L_80082B88:;
  c->r[0]=R16(c->r[31]+0xFFFFFFF2u); // 80082B88
  c->r[6]=c->r[31]+0xFFFFFFF0u; // 80082B8C
  c->r[3]=c->r[30]+0x0000003Cu; // 80082B90
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 80082B94
  c->r[0]=c->r[6]-c->r[0]; // 80082B98
  W32(c->r[1]+0x00000008u,c->r[0]); // 80082B9C
  c->r[0]=R32(c->r[31]+0xFFFFFFF4u); // 80082BA0
  c->r[4]=c->r[6]+c->r[0]; // 80082BA4
  c->r[0]=c->r[4]+0x00000010u; // 80082BA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80082BAC
  c->r[5]=R32(c->r[31]+0xFFFFFFF8u); // 80082BB0
  c->r[4]=R32(c->r[31]+0xFFFFFFFCu); // 80082BB4
  cmps(c,0,(int32_t)c->r[5],0); // 80082BB8
  if (crb(c,2)) { goto L_80082BC8; } // 80082BBC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80082BC0
  goto L_80082BCC; // 80082BC4
L_80082BC8:;
  W32(c->r[3]+0x00000008u,c->r[4]); // 80082BC8
L_80082BCC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80082BCC
  if (crb(c,2)) { goto L_80082BDC; } // 80082BD0
  W32(c->r[4]+0x00000008u,c->r[5]); // 80082BD4
  goto L_80082BE0; // 80082BD8
L_80082BDC:;
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80082BDC
L_80082BE0:;
  c->r[4]=c->r[1]+0x00000008u; // 80082BE0
  c->lr=0x80082BE8u; f_80082850(c); // 80082BE4
  c->r[0]=R32(c->r[30]+0x00000038u); // 80082BE8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80082BEC
  if (crb(c,2)) { goto L_80082BFC; } // 80082BF0
  c->r[3]=c->r[30]+0x00000020u; // 80082BF4
  c->lr=0x80082BFCu; f_8004ADB0(c); // 80082BF8
L_80082BFC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082BFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082C00
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082C04
  c->lr=c->r[0]; // 80082C08
  c->r[1]=c->r[1]+0x00000020u; // 80082C0C
  return; // 80082C10
}

// fn_80082C20
void f_80082C20(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 80082C20
  c->r[3]=R32(c->r[3]+0x00000004u); // 80082C24
  c->r[5]=R32(c->r[5]+0x00000008u); // 80082C28
  f_80082AA0(c); return; // 80082C2C
}

// fn_80082C30
void f_80082C30(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 80082C30
  f_80082B50(c); return; // 80082C34
}

// MEMAllocFromAllocator
void f_80082C40(Ctx* __restrict c) {
  trace_call(0x80082C40u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80082C40
  c->r[12]=R32(c->r[5]+0x00000000u); // 80082C44
  c->ctr=c->r[12]; // 80082C48
  if (true) { dispatch(c,c->ctr); return; } // 80082C4C
}

// MEMFreeToAllocator
void f_80082C50(Ctx* __restrict c) {
  trace_call(0x80082C50u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80082C50
  c->r[12]=R32(c->r[5]+0x00000004u); // 80082C54
  c->ctr=c->r[12]; // 80082C58
  if (true) { dispatch(c,c->ctr); return; } // 80082C5C
}

// MEMInitAllocatorForExpHeap
void f_80082C60(Ctx* __restrict c) {
  trace_call(0x80082C60u);
  c->r[6]=c->r[2]+0xFFFF8760u; // 80082C60
  c->r[0]=0u+0x00000000u; // 80082C64
  W32(c->r[3]+0x00000000u,c->r[6]); // 80082C68
  W32(c->r[3]+0x00000004u,c->r[4]); // 80082C6C
  W32(c->r[3]+0x00000008u,c->r[5]); // 80082C70
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80082C74
  return; // 80082C78
}

// List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
void f_80082C80(Ctx* __restrict c) {
  trace_call(0x80082C80u);
  c->r[0]=0u+0x00000000u; // 80082C80
  W32(c->r[3]+0x00000000u,c->r[0]); // 80082C84
  W32(c->r[3]+0x00000004u,c->r[0]); // 80082C88
  W16(c->r[3]+0x00000008u,c->r[0]); // 80082C8C
  W16(c->r[3]+0x0000000Au,c->r[4]); // 80082C90
  return; // 80082C94
}

// fn_80082CA0
void f_80082CA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80082CA0
  cmps(c,0,(int32_t)c->r[0],0); // 80082CA4
  if (!crb(c,2)) { goto L_80082CD8; } // 80082CA8
  c->r[5]=R16(c->r[3]+0x0000000Au); // 80082CAC
  c->r[0]=0u+0x00000000u; // 80082CB0
  c->r[5]=c->r[4]+c->r[5]; // 80082CB4
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082CB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80082CBC
  c->r[5]=R16(c->r[3]+0x00000008u); // 80082CC0
  W32(c->r[3]+0x00000000u,c->r[4]); // 80082CC4
  c->r[0]=c->r[5]+0x00000001u; // 80082CC8
  W32(c->r[3]+0x00000004u,c->r[4]); // 80082CCC
  W16(c->r[3]+0x00000008u,c->r[0]); // 80082CD0
  return; // 80082CD4
L_80082CD8:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 80082CD8
  c->r[0]=0u+0x00000000u; // 80082CDC
  c->r[5]=R32(c->r[3]+0x00000004u); // 80082CE0
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 80082CE4
  W32(c->r[6]+0x00000004u,c->r[0]); // 80082CE8
  c->r[5]=R32(c->r[3]+0x00000004u); // 80082CEC
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80082CF0
  c->r[5]=c->r[5]+c->r[0]; // 80082CF4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80082CF8
  c->r[5]=R16(c->r[3]+0x00000008u); // 80082CFC
  W32(c->r[3]+0x00000004u,c->r[4]); // 80082D00
  c->r[0]=c->r[5]+0x00000001u; // 80082D04
  W16(c->r[3]+0x00000008u,c->r[0]); // 80082D08
  return; // 80082D0C
}

// List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_80082D10(Ctx* __restrict c) {
  trace_call(0x80082D10u);
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80082D10
  c->r[6]=c->r[4]+c->r[0]; // 80082D14
  c->r[4]=R32(c->r[4]+c->r[0]); // 80082D18
  cmps(c,0,(int32_t)c->r[4],0); // 80082D1C
  if (!crb(c,2)) { goto L_80082D30; } // 80082D20
  c->r[0]=R32(c->r[6]+0x00000004u); // 80082D24
  W32(c->r[3]+0x00000000u,c->r[0]); // 80082D28
  goto L_80082D3C; // 80082D2C
L_80082D30:;
  c->r[4]=c->r[4]+c->r[0]; // 80082D30
  c->r[0]=R32(c->r[6]+0x00000004u); // 80082D34
  W32(c->r[4]+0x00000004u,c->r[0]); // 80082D38
L_80082D3C:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 80082D3C
  cmps(c,0,(int32_t)c->r[5],0); // 80082D40
  if (!crb(c,2)) { goto L_80082D54; } // 80082D44
  c->r[0]=R32(c->r[6]+0x00000000u); // 80082D48
  W32(c->r[3]+0x00000004u,c->r[0]); // 80082D4C
  goto L_80082D60; // 80082D50
L_80082D54:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80082D54
  c->r[4]=R32(c->r[6]+0x00000000u); // 80082D58
  W32(c->r[5]+c->r[0],c->r[4]); // 80082D5C
L_80082D60:;
  c->r[0]=0u+0x00000000u; // 80082D60
  W32(c->r[6]+0x00000000u,c->r[0]); // 80082D64
  W32(c->r[6]+0x00000004u,c->r[0]); // 80082D68
  c->r[4]=R16(c->r[3]+0x00000008u); // 80082D6C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80082D70
  W16(c->r[3]+0x00000008u,c->r[0]); // 80082D74
  return; // 80082D78
}

// fn_80082D80
void f_80082D80(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80082D80
  if (!crb(c,2)) { goto L_80082D90; } // 80082D84
  c->r[3]=R32(c->r[3]+0x00000000u); // 80082D88
  return; // 80082D8C
L_80082D90:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80082D90
  c->r[3]=c->r[4]+c->r[0]; // 80082D94
  c->r[3]=R32(c->r[3]+0x00000004u); // 80082D98
  return; // 80082D9C
}

// fn_80082DA0
void f_80082DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082DA0
  c->r[0]=c->lr; // 80082DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082DA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082DAC
  c->r[0]=R32(c->r[13]+0xFFFF9138u); // 80082DB0
  cmps(c,0,(int32_t)c->r[0],0); // 80082DB4
  if (crb(c,2)) { goto L_80082DC4; } // 80082DB8
  c->r[3]=0u+0x00000001u; // 80082DBC
  goto L_80082E88; // 80082DC0
L_80082DC4:;
  c->lr=0x80082DC8u; f_80042AD0(c); // 80082DC4
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 80082DC8
  if (!crb(c,2)) { goto L_80082DE0; } // 80082DCC
  c->r[0]=0u+0x00000002u; // 80082DD0
  W32(c->r[13]+0xFFFF913Cu,c->r[0]); // 80082DD4
  c->r[3]=0u+0x00000000u; // 80082DD8
  goto L_80082E88; // 80082DDC
L_80082DE0:;
  c->lr=0x80082DE4u; f_80049A20(c); // 80082DE0
  c->r[0]=0u+0x000000F2u; // 80082DE4
  W8(c->r[1]+0x00000008u,c->r[0]); // 80082DE8
  c->r[31]=c->r[3]|c->r[3]; // 80082DEC
  c->r[6]=c->r[1]+0x00000008u; // 80082DF0
  c->r[3]=0u+0x00000000u; // 80082DF4
  c->r[4]=0u+0x00000001u; // 80082DF8
  c->r[5]=0u+0xB0000000u; // 80082DFC
  c->r[7]=0u+0x00000001u; // 80082E00
  c->lr=0x80082E08u; f_8007ACD0(c); // 80082E04
  cmps(c,0,(int32_t)c->r[3],0); // 80082E08
  if (!crb(c,2)) { goto L_80082E28; } // 80082E0C
  c->r[0]=0u+0x00000005u; // 80082E10
  W32(c->r[13]+0xFFFF913Cu,c->r[0]); // 80082E14
  c->r[3]=c->r[31]|c->r[31]; // 80082E18
  c->lr=0x80082E20u; f_80049A60(c); // 80082E1C
  c->r[3]=0u+0x00000000u; // 80082E20
  goto L_80082E88; // 80082E24
L_80082E28:;
  c->r[0]=0u+0x000000F3u; // 80082E28
  W8(c->r[1]+0x00000008u,c->r[0]); // 80082E2C
  c->r[6]=c->r[1]+0x00000008u; // 80082E30
  c->r[3]=0u+0x00000000u; // 80082E34
  c->r[4]=0u+0x00000001u; // 80082E38
  c->r[5]=0u+0xB0000000u; // 80082E3C
  c->r[7]=0u+0x00000001u; // 80082E40
  c->lr=0x80082E48u; f_8007ACD0(c); // 80082E44
  cmps(c,0,(int32_t)c->r[3],0); // 80082E48
  if (!crb(c,2)) { goto L_80082E68; } // 80082E4C
  c->r[0]=0u+0x00000005u; // 80082E50
  W32(c->r[13]+0xFFFF913Cu,c->r[0]); // 80082E54
  c->r[3]=c->r[31]|c->r[31]; // 80082E58
  c->lr=0x80082E60u; f_80049A60(c); // 80082E5C
  c->r[3]=0u+0x00000000u; // 80082E60
  goto L_80082E88; // 80082E64
L_80082E68:;
  c->r[3]=c->r[31]|c->r[31]; // 80082E68
  c->lr=0x80082E70u; f_80049A60(c); // 80082E6C
  c->r[0]=0u+0x00000000u; // 80082E70
  c->r[3]=0u+0x00000001u; // 80082E74
  W32(c->r[13]+0xFFFF9138u,c->r[3]); // 80082E78
  c->r[3]=0u+0x00000001u; // 80082E7C
  W32(c->r[13]+0xFFFF913Cu,c->r[0]); // 80082E80
  W32(c->r[13]+0xFFFF9140u,c->r[0]); // 80082E84
L_80082E88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082E88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082E8C
  c->lr=c->r[0]; // 80082E90
  c->r[1]=c->r[1]+0x00000020u; // 80082E94
  return; // 80082E98
}

// fn_80082EA0
void f_80082EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082EA0
  c->r[0]=c->lr; // 80082EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082EA8
  c->lr=0x80082EB0u; f_80042AD0(c); // 80082EAC
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 80082EB0
  if (!crb(c,2)) { goto L_80082EC8; } // 80082EB4
  c->r[0]=0u+0x00000000u; // 80082EB8
  W32(c->r[13]+0xFFFF9144u,c->r[0]); // 80082EBC
  c->r[3]=0u+0x00000002u; // 80082EC0
  goto L_80082ED8; // 80082EC4
L_80082EC8:;
  c->r[4]=0u+0xA5FF0000u; // 80082EC8
  c->r[3]=0u+0x00000000u; // 80082ECC
  c->r[0]=c->r[4]+0x0000005Au; // 80082ED0
  W32(c->r[13]+0xFFFF9144u,c->r[0]); // 80082ED4
L_80082ED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082ED8
  c->lr=c->r[0]; // 80082EDC
  c->r[1]=c->r[1]+0x00000010u; // 80082EE0
  return; // 80082EE4
}

// fn_80082EF0
void f_80082EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082EF0
  c->r[0]=c->lr; // 80082EF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80082EF8
  c->r[11]=c->r[1]+0x00000030u; // 80082EFC
  c->lr=0x80082F04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082F00
  c->r[5]=R32(c->r[13]+0xFFFF9144u); // 80082F04
  c->r[30]=c->r[3]|c->r[3]; // 80082F08
  c->r[31]=c->r[4]|c->r[4]; // 80082F0C
  c->r[0]=c->r[5]+0x5A010000u; // 80082F10
  cmpu(c,0,c->r[0],0x0000005Au); // 80082F14
  if (crb(c,2)) { goto L_80082F24; } // 80082F18
  c->r[3]=0u+0x00000002u; // 80082F1C
  goto L_80083108; // 80082F20
L_80082F24:;
  c->r[0]=R32(c->r[13]+0xFFFF9138u); // 80082F24
  cmps(c,0,(int32_t)c->r[0],0); // 80082F28
  if (!crb(c,2)) { goto L_80082F44; } // 80082F2C
  c->lr=0x80082F34u; f_80082DA0(c); // 80082F30
  cmps(c,0,(int32_t)c->r[3],0); // 80082F34
  if (!crb(c,2)) { goto L_80082F44; } // 80082F38
  c->r[3]=0u+0x00000002u; // 80082F3C
  goto L_80083108; // 80082F40
L_80082F44:;
  c->r[0]=R32(c->r[13]+0xFFFF9138u); // 80082F44
  cmps(c,0,(int32_t)c->r[0],0); // 80082F48
  if (!crb(c,2)) { goto L_80082F60; } // 80082F4C
  c->r[0]=0u+0x00000001u; // 80082F50
  W32(c->r[13]+0xFFFF913Cu,c->r[0]); // 80082F54
  c->r[3]=0u+0x00000002u; // 80082F58
  goto L_80083108; // 80082F5C
L_80082F60:;
  c->r[3]=0u+0x00000000u; // 80082F60
  c->r[4]=0u+0x00000001u; // 80082F64
  c->r[5]=0u+0x00000000u; // 80082F68
  c->lr=0x80082F70u; f_8007A3D0(c); // 80082F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80082F70
  if (!crb(c,2)) { goto L_80082F80; } // 80082F74
  c->r[3]=0u+0x00000000u; // 80082F78
  goto L_80083108; // 80082F7C
L_80082F80:;
  c->r[4]=c->r[30]|c->r[30]; // 80082F80
  c->r[3]=0u+0x0000000Du; // 80082F84
  goto L_80082FA4; // 80082F88
  c->r[0]=c->r[0]|0x00000000u; // 80082F8C
L_80082F90:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80082F90
  cmps(c,0,(int32_t)c->r[0],10); // 80082F94
  if (!crb(c,2)) { goto L_80082FA0; } // 80082F98
  W8(c->r[4]+0x00000000u,c->r[3]); // 80082F9C
L_80082FA0:;
  c->r[4]=c->r[4]+0x00000001u; // 80082FA0
L_80082FA4:;
  c->r[0]=c->r[4]-c->r[30]; // 80082FA4
  cmpu(c,0,c->r[0],c->r[31]); // 80082FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80082F90; } // 80082FAC
  c->r[3]=0u+0xB0000000u; // 80082FB0
  c->r[28]=R32(c->r[2]+0xFFFF8750u); // 80082FB4
  c->r[0]=c->r[3]+0x00000100u; // 80082FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082FBC
  c->r[26]=0u+0x00000000u; // 80082FC0
  c->r[29]=0u+0x30000000u; // 80082FC4
  goto L_800830F4; // 80082FC8
L_80082FCC:;
  c->r[5]=c->r[28]|c->r[28]; // 80082FCC
  c->r[3]=0u+0x00000000u; // 80082FD0
  c->r[4]=0u+0x00000001u; // 80082FD4
  c->lr=0x80082FDCu; f_80079C20(c); // 80082FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80082FDC
  if (!crb(c,2)) { goto L_80082FEC; } // 80082FE0
  c->r[27]=0u+0xFFFFFFFFu; // 80082FE4
  goto L_80083048; // 80082FE8
L_80082FEC:;
  c->r[0]=c->r[29]+0x00000100u; // 80082FEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80082FF0
  c->r[4]=c->r[1]+0x00000008u; // 80082FF4
  c->r[3]=0u+0x00000000u; // 80082FF8
  c->r[5]=0u+0x00000004u; // 80082FFC
  c->r[6]=0u+0x00000001u; // 80083000
  c->r[7]=0u+0x00000000u; // 80083004
  c->lr=0x8008300Cu; f_80079180(c); // 80083008
  c->r[3]=0u+0x00000000u; // 8008300C
  c->lr=0x80083014u; f_800795B0(c); // 80083010
  c->r[4]=c->r[1]+0x0000000Cu; // 80083014
  c->r[3]=0u+0x00000000u; // 80083018
  c->r[5]=0u+0x00000004u; // 8008301C
  c->r[6]=0u+0x00000000u; // 80083020
  c->r[7]=0u+0x00000000u; // 80083024
  c->lr=0x8008302Cu; f_80079180(c); // 80083028
  c->r[3]=0u+0x00000000u; // 8008302C
  c->lr=0x80083034u; f_800795B0(c); // 80083030
  c->r[3]=0u+0x00000000u; // 80083034
  c->lr=0x8008303Cu; f_80079D50(c); // 80083038
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8008303C
  c->r[0]=rotl(c->r[0],8)&0x0000003Fu; // 80083040
  c->r[27]=addc(c,~c->r[0],0x00000020u,1); // 80083044
L_80083048:;
  cmps(c,0,(int32_t)c->r[27],0); // 80083048
  if (!crb(c,0)) { goto L_80083058; } // 8008304C
  c->r[26]=0u+0x00000003u; // 80083050
  goto L_800830FC; // 80083054
L_80083058:;
  cmps(c,0,(int32_t)c->r[27],32); // 80083058
  if (!crb(c,2)) { goto L_800830F4; } // 8008305C
  c->r[5]=c->r[28]|c->r[28]; // 80083060
  c->r[3]=0u+0x00000000u; // 80083064
  c->r[4]=0u+0x00000001u; // 80083068
  c->lr=0x80083070u; f_80079C20(c); // 8008306C
  cmps(c,0,(int32_t)c->r[3],0); // 80083070
  if (!crb(c,2)) { goto L_80083080; } // 80083074
  c->r[26]=0u+0x00000003u; // 80083078
  goto L_800830FC; // 8008307C
L_80083080:;
  c->r[4]=c->r[1]+0x00000014u; // 80083080
  c->r[3]=0u+0x00000000u; // 80083084
  c->r[5]=0u+0x00000004u; // 80083088
  c->r[6]=0u+0x00000001u; // 8008308C
  c->r[7]=0u+0x00000000u; // 80083090
  c->lr=0x80083098u; f_80079180(c); // 80083094
  c->r[3]=0u+0x00000000u; // 80083098
  c->lr=0x800830A0u; f_800795B0(c); // 8008309C
  goto L_800830DC; // 800830A0
L_800830A4:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800830A4
  c->r[4]=c->r[1]+0x00000010u; // 800830A8
  c->r[3]=0u+0x00000000u; // 800830AC
  c->r[5]=0u+0x00000004u; // 800830B0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 800830B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800830B8
  c->r[6]=0u+0x00000001u; // 800830BC
  c->r[7]=0u+0x00000000u; // 800830C0
  c->lr=0x800830C8u; f_80079180(c); // 800830C4
  c->r[3]=0u+0x00000000u; // 800830C8
  c->lr=0x800830D0u; f_800795B0(c); // 800830CC
  c->r[30]=c->r[30]+0x00000001u; // 800830D0
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800830D4
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800830D8
L_800830DC:;
  cmps(c,0,(int32_t)c->r[27],0); // 800830DC
  if (!crb(c,1)) { goto L_800830EC; } // 800830E0
  cmps(c,0,(int32_t)c->r[31],0); // 800830E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800830A4; } // 800830E8
L_800830EC:;
  c->r[3]=0u+0x00000000u; // 800830EC
  c->lr=0x800830F4u; f_80079D50(c); // 800830F0
L_800830F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800830F4
  if (!crb(c,2)) { IRQCHK(c); goto L_80082FCC; } // 800830F8
L_800830FC:;
  c->r[3]=0u+0x00000000u; // 800830FC
  c->lr=0x80083104u; f_8007A4D0(c); // 80083100
  c->r[3]=c->r[26]|c->r[26]; // 80083104
L_80083108:;
  c->r[11]=c->r[1]+0x00000030u; // 80083108
  c->lr=0x80083110u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008310C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80083110
  c->lr=c->r[0]; // 80083114
  c->r[1]=c->r[1]+0x00000030u; // 80083118
  return; // 8008311C
}

// ISFS_OpenLib
void f_80083120(Ctx* __restrict c) {
  trace_call(0x80083120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083120
  c->r[0]=c->lr; // 80083124
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008312C
  c->r[31]=0u+0x00000000u; // 80083130
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083134
  c->r[0]=R32(c->r[13]+0xFFFF9148u); // 80083138
  cmps(c,0,(int32_t)c->r[0],0); // 8008313C
  if (!crb(c,2)) { goto L_80083154; } // 80083140
  c->lr=0x80083148u; f_800848D0(c); // 80083144
  W32(c->r[13]+0xFFFF9154u,c->r[3]); // 80083148
  c->lr=0x80083150u; f_800848C0(c); // 8008314C
  W32(c->r[13]+0xFFFF9158u,c->r[3]); // 80083150
L_80083154:;
  c->r[3]=R32(c->r[13]+0xFFFF9154u); // 80083154
  c->r[0]=R32(c->r[13]+0xFFFF9148u); // 80083158
  c->r[3]=c->r[3]+0x0000001Fu; // 8008315C
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80083160
  cmps(c,0,(int32_t)c->r[0],0); // 80083164
  W32(c->r[13]+0xFFFF914Cu,c->r[3]); // 80083168
  if (!crb(c,2)) { goto L_80083198; } // 8008316C
  c->r[0]=R32(c->r[13]+0xFFFF9158u); // 80083170
  c->r[4]=c->r[3]+0x00000040u; // 80083174
  cmpu(c,0,c->r[4],c->r[0]); // 80083178
  if (!crb(c,1)) { goto L_80083198; } // 8008317C
  c->r[3]=0u+0x80150000u; // 80083180
  c->r[3]=c->r[3]+0xFFFFE290u; // 80083184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80083188
  c->lr=0x80083190u; f_80045C80(c); // 8008318C
  c->r[31]=0u+0xFFFFFFEAu; // 80083190
  goto L_8008322C; // 80083194
L_80083198:;
  c->r[4]=c->r[13]+0xFFFF82D8u; // 80083198
  c->lr=0x800831A0u; f_80075140(c); // 8008319C
  c->r[3]=R32(c->r[13]+0xFFFF914Cu); // 800831A0
  c->r[4]=0u+0x00000000u; // 800831A4
  c->lr=0x800831ACu; f_80085210(c); // 800831A8
  cmps(c,0,(int32_t)c->r[3],0); // 800831AC
  W32(c->r[13]+0xFFFF82D0u,c->r[3]); // 800831B0
  if (!crb(c,0)) { goto L_800831C0; } // 800831B4
  c->r[31]=c->r[3]|c->r[3]; // 800831B8
  goto L_8008322C; // 800831BC
L_800831C0:;
  c->r[4]=R32(c->r[13]+0xFFFF9148u); // 800831C0
  c->r[30]=R32(c->r[13]+0xFFFF914Cu); // 800831C4
  cmps(c,0,(int32_t)c->r[4],0); // 800831C8
  if (!crb(c,2)) { goto L_800831F8; } // 800831CC
  c->r[0]=R32(c->r[13]+0xFFFF9158u); // 800831D0
  c->r[3]=c->r[30]+0x00001540u; // 800831D4
  cmpu(c,0,c->r[3],c->r[0]); // 800831D8
  if (!crb(c,1)) { goto L_800831F8; } // 800831DC
  c->r[3]=0u+0x80150000u; // 800831E0
  c->r[3]=c->r[3]+0xFFFFE290u; // 800831E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800831E8
  c->lr=0x800831F0u; f_80045C80(c); // 800831EC
  c->r[31]=0u+0xFFFFFFEAu; // 800831F0
  goto L_8008322C; // 800831F4
L_800831F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800831F8
  if (!crb(c,2)) { goto L_80083210; } // 800831FC
  c->r[3]=c->r[30]+0x00001540u; // 80083200
  c->lr=0x80083208u; f_800848E0(c); // 80083204
  c->r[0]=0u+0x00000001u; // 80083208
  W32(c->r[13]+0xFFFF9148u,c->r[0]); // 8008320C
L_80083210:;
  c->r[3]=c->r[30]|c->r[30]; // 80083210
  c->r[4]=0u+0x00001540u; // 80083214
  c->lr=0x8008321Cu; f_80086350(c); // 80083218
  cmps(c,0,(int32_t)c->r[3],0); // 8008321C
  W32(c->r[13]+0xFFFF915Cu,c->r[3]); // 80083220
  if (!crb(c,0)) { goto L_8008322C; } // 80083224
  c->r[31]=0u+0xFFFFFFEAu; // 80083228
L_8008322C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008322C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083230
  c->r[30]=R32(c->r[1]+0x00000008u); // 80083234
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083238
  c->lr=c->r[0]; // 8008323C
  c->r[1]=c->r[1]+0x00000010u; // 80083240
  return; // 80083244
}

// _isfsFuncCb
void f_80083250(Ctx* __restrict c) {
  trace_call(0x80083250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083250
  c->r[0]=c->lr; // 80083254
  cmps(c,1,(int32_t)c->r[3],0); // 80083258
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008325C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083260
  c->r[31]=c->r[4]|c->r[4]; // 80083264
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083268
  c->r[30]=c->r[3]|c->r[3]; // 8008326C
  if (crb(c,4)) { goto L_8008337C; } // 80083270
  c->r[0]=R32(c->r[4]+0x00000108u); // 80083274
  cmpu(c,0,c->r[0],0x00000001u); // 80083278
  if (crb(c,2)) { goto L_800832A4; } // 8008327C
  cmpu(c,0,c->r[0],0x00000002u); // 80083280
  if (crb(c,2)) { goto L_800832B8; } // 80083284
  cmpu(c,0,c->r[0],0x00000003u); // 80083288
  if (crb(c,2)) { goto L_800832DC; } // 8008328C
  cmpu(c,0,c->r[0],0x00000004u); // 80083290
  if (crb(c,2)) { goto L_80083334; } // 80083294
  cmpu(c,0,c->r[0],0x00000005u); // 80083298
  if (crb(c,2)) { goto L_8008336C; } // 8008329C
  goto L_8008337C; // 800832A0
L_800832A4:;
  if (!crb(c,6)) { goto L_8008337C; } // 800832A4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800832A8
  c->r[5]=0u+0x0000001Cu; // 800832AC
  c->lr=0x800832B4u; f_800043C4(c); // 800832B0
  goto L_8008337C; // 800832B4
L_800832B8:;
  if (!crb(c,6)) { goto L_8008337C; } // 800832B8
  c->r[0]=c->r[4]+0x0000003Fu; // 800832BC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800832C0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800832C4
  c->r[0]=c->r[4]+0x0000005Fu; // 800832C8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800832CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800832D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800832D4
  goto L_8008337C; // 800832D8
L_800832DC:;
  if (!crb(c,6)) { goto L_8008337C; } // 800832DC
  c->r[0]=c->r[4]+0x0000005Fu; // 800832E0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800832E4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800832E8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800832EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800832F0
  c->r[3]=R32(c->r[4]+0x00000110u); // 800832F4
  c->r[0]=R16(c->r[5]+0x00000004u); // 800832F8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800832FC
  c->r[3]=R32(c->r[4]+0x00000114u); // 80083300
  c->r[0]=R8(c->r[5]+0x00000049u); // 80083304
  W32(c->r[3]+0x00000000u,c->r[0]); // 80083308
  c->r[3]=R32(c->r[4]+0x00000118u); // 8008330C
  c->r[0]=R8(c->r[5]+0x00000046u); // 80083310
  W32(c->r[3]+0x00000000u,c->r[0]); // 80083314
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 80083318
  c->r[0]=R8(c->r[5]+0x00000047u); // 8008331C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80083320
  c->r[3]=R32(c->r[4]+0x00000120u); // 80083324
  c->r[0]=R8(c->r[5]+0x00000048u); // 80083328
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008332C
  goto L_8008337C; // 80083330
L_80083334:;
  if (!crb(c,6)) { goto L_8008337C; } // 80083334
  c->r[0]=c->r[4]+0x0000003Fu; // 80083338
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8008333C
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083340
  c->r[0]=c->r[5]+0x0000005Fu; // 80083344
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083348
  c->r[5]=R32(c->r[6]+0x00000000u); // 8008334C
  c->r[0]=c->r[6]+0x00000023u; // 80083350
  W32(c->r[3]+0x00000000u,c->r[5]); // 80083354
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083358
  c->r[3]=R32(c->r[4]+0x00000110u); // 8008335C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80083360
  W32(c->r[3]+0x00000000u,c->r[0]); // 80083364
  goto L_8008337C; // 80083368
L_8008336C:;
  if (!crb(c,6)) { goto L_8008337C; } // 8008336C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80083370
  c->r[5]=0u+0x00000008u; // 80083374
  c->lr=0x8008337Cu; f_800043C4(c); // 80083378
L_8008337C:;
  c->r[0]=0u+0x00000000u; // 8008337C
  W32(c->r[13]+0xFFFF9150u,c->r[0]); // 80083380
  c->r[12]=R32(c->r[31]+0x00000100u); // 80083384
  cmps(c,0,(int32_t)c->r[12],0); // 80083388
  if (crb(c,2)) { goto L_800833A0; } // 8008338C
  c->r[3]=c->r[30]|c->r[30]; // 80083390
  c->r[4]=R32(c->r[31]+0x00000104u); // 80083394
  c->ctr=c->r[12]; // 80083398
  if (true) { c->lr=0x800833A0u; dispatch(c,c->ctr); } // 8008339C
L_800833A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800833A0
  if (crb(c,2)) { goto L_800833B4; } // 800833A4
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800833A8
  c->r[4]=c->r[31]|c->r[31]; // 800833AC
  c->lr=0x800833B4u; f_80086690(c); // 800833B0
L_800833B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800833B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800833B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800833BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800833C0
  c->lr=c->r[0]; // 800833C4
  c->r[1]=c->r[1]+0x00000010u; // 800833C8
  return; // 800833CC
}

// fn_800833D0
void f_800833D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800833D0
  c->r[0]=c->lr; // 800833D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800833D8
  c->r[11]=c->r[1]+0x00000030u; // 800833DC
  c->lr=0x800833E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800833E0
  cmps(c,0,(int32_t)c->r[3],0); // 800833E4
  c->r[25]=c->r[3]|c->r[3]; // 800833E8
  c->r[26]=c->r[4]|c->r[4]; // 800833EC
  c->r[27]=c->r[5]|c->r[5]; // 800833F0
  c->r[28]=c->r[6]|c->r[6]; // 800833F4
  c->r[29]=c->r[7]|c->r[7]; // 800833F8
  c->r[30]=0u+0x00000000u; // 800833FC
  if (crb(c,2)) { goto L_80083424; } // 80083400
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083404
  cmps(c,0,(int32_t)c->r[0],0); // 80083408
  if (crb(c,0)) { goto L_80083424; } // 8008340C
  c->r[4]=0u+0x00000040u; // 80083410
  c->lr=0x80083418u; f_800848F0(c); // 80083414
  cmpu(c,0,c->r[3],0x00000040u); // 80083418
  c->r[31]=c->r[3]|c->r[3]; // 8008341C
  if (!crb(c,2)) { goto L_8008342C; } // 80083420
L_80083424:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80083424
  goto L_80083490; // 80083428
L_8008342C:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 8008342C
  c->r[4]=0u+0x00000140u; // 80083430
  c->r[5]=0u+0x00000020u; // 80083434
  c->lr=0x8008343Cu; f_80086680(c); // 80083438
  cmps(c,0,(int32_t)c->r[3],0); // 8008343C
  c->r[30]=c->r[3]|c->r[3]; // 80083440
  if (!crb(c,2)) { goto L_80083450; } // 80083444
  c->r[31]=0u+0xFFFFFFEAu; // 80083448
  goto L_80083490; // 8008344C
L_80083450:;
  c->r[4]=c->r[25]|c->r[25]; // 80083450
  c->r[5]=c->r[31]+0x00000001u; // 80083454
  c->r[3]=c->r[3]+0x00000006u; // 80083458
  c->lr=0x80083460u; f_800043C4(c); // 8008345C
  W8(c->r[30]+0x00000049u,c->r[26]); // 80083460
  c->r[5]=c->r[30]|c->r[30]; // 80083464
  c->r[4]=0u+0x00000003u; // 80083468
  c->r[6]=0u+0x0000004Cu; // 8008346C
  W8(c->r[30]+0x00000046u,c->r[27]); // 80083470
  c->r[7]=0u+0x00000000u; // 80083474
  c->r[8]=0u+0x00000000u; // 80083478
  W8(c->r[30]+0x00000047u,c->r[28]); // 8008347C
  W8(c->r[30]+0x00000048u,c->r[29]); // 80083480
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083484
  c->lr=0x8008348Cu; f_80085BE0(c); // 80083488
  c->r[31]=c->r[3]|c->r[3]; // 8008348C
L_80083490:;
  cmps(c,0,(int32_t)c->r[30],0); // 80083490
  if (crb(c,2)) { goto L_800834A8; } // 80083494
  if (crb(c,2)) { goto L_800834A8; } // 80083498
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 8008349C
  c->r[4]=c->r[30]|c->r[30]; // 800834A0
  c->lr=0x800834A8u; f_80086690(c); // 800834A4
L_800834A8:;
  c->r[11]=c->r[1]+0x00000030u; // 800834A8
  c->r[3]=c->r[31]|c->r[31]; // 800834AC
  c->lr=0x800834B4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800834B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800834B4
  c->lr=c->r[0]; // 800834B8
  c->r[1]=c->r[1]+0x00000030u; // 800834BC
  return; // 800834C0
}

// fn_800834D0
void f_800834D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800834D0
  c->r[0]=c->lr; // 800834D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800834D8
  c->r[11]=c->r[1]+0x00000030u; // 800834DC
  c->lr=0x800834E4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800834E0
  cmps(c,0,(int32_t)c->r[3],0); // 800834E4
  c->r[23]=c->r[3]|c->r[3]; // 800834E8
  c->r[24]=c->r[4]|c->r[4]; // 800834EC
  c->r[25]=c->r[5]|c->r[5]; // 800834F0
  c->r[26]=c->r[6]|c->r[6]; // 800834F4
  c->r[27]=c->r[7]|c->r[7]; // 800834F8
  c->r[28]=c->r[8]|c->r[8]; // 800834FC
  c->r[29]=c->r[9]|c->r[9]; // 80083500
  if (crb(c,2)) { goto L_80083528; } // 80083504
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083508
  cmps(c,0,(int32_t)c->r[0],0); // 8008350C
  if (crb(c,0)) { goto L_80083528; } // 80083510
  c->r[4]=0u+0x00000040u; // 80083514
  c->lr=0x8008351Cu; f_800848F0(c); // 80083518
  cmpu(c,0,c->r[3],0x00000040u); // 8008351C
  c->r[31]=c->r[3]|c->r[3]; // 80083520
  if (!crb(c,2)) { goto L_80083530; } // 80083524
L_80083528:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80083528
  goto L_800835AC; // 8008352C
L_80083530:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083530
  c->r[4]=0u+0x00000140u; // 80083534
  c->r[5]=0u+0x00000020u; // 80083538
  c->lr=0x80083540u; f_80086680(c); // 8008353C
  cmps(c,0,(int32_t)c->r[3],0); // 80083540
  c->r[30]=c->r[3]|c->r[3]; // 80083544
  if (!crb(c,2)) { goto L_80083554; } // 80083548
  c->r[3]=0u+0xFFFFFF8Au; // 8008354C
  goto L_800835AC; // 80083550
L_80083554:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 80083554
  c->r[0]=0u+0x00000000u; // 80083558
  c->r[4]=c->r[23]|c->r[23]; // 8008355C
  c->r[5]=c->r[31]+0x00000001u; // 80083560
  W32(c->r[3]+0x00000104u,c->r[29]); // 80083564
  W32(c->r[3]+0x00000108u,c->r[0]); // 80083568
  c->r[3]=c->r[3]+0x00000006u; // 8008356C
  c->lr=0x80083574u; f_800043C4(c); // 80083570
  W8(c->r[30]+0x00000049u,c->r[24]); // 80083574
  c->r[9]=0u+0x80080000u; // 80083578
  c->r[5]=c->r[30]|c->r[30]; // 8008357C
  c->r[10]=c->r[30]|c->r[30]; // 80083580
  W8(c->r[30]+0x00000046u,c->r[25]); // 80083584
  c->r[9]=c->r[9]+0x00003250u; // 80083588
  c->r[4]=0u+0x00000003u; // 8008358C
  c->r[6]=0u+0x0000004Cu; // 80083590
  W8(c->r[30]+0x00000047u,c->r[26]); // 80083594
  c->r[7]=0u+0x00000000u; // 80083598
  c->r[8]=0u+0x00000000u; // 8008359C
  W8(c->r[30]+0x00000048u,c->r[27]); // 800835A0
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 800835A4
  c->lr=0x800835ACu; f_80085AA0(c); // 800835A8
L_800835AC:;
  c->r[11]=c->r[1]+0x00000030u; // 800835AC
  c->lr=0x800835B4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800835B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800835B4
  c->lr=c->r[0]; // 800835B8
  c->r[1]=c->r[1]+0x00000030u; // 800835BC
  return; // 800835C0
}

// fn_800835D0
void f_800835D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800835D0
  c->r[0]=c->lr; // 800835D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800835D8
  c->r[11]=c->r[1]+0x00000020u; // 800835DC
  c->lr=0x800835E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800835E0
  cmps(c,0,(int32_t)c->r[3],0); // 800835E4
  c->r[26]=c->r[3]|c->r[3]; // 800835E8
  c->r[27]=c->r[4]|c->r[4]; // 800835EC
  c->r[28]=c->r[5]|c->r[5]; // 800835F0
  c->r[29]=0u+0x00000000u; // 800835F4
  if (crb(c,2)) { goto L_8008362C; } // 800835F8
  cmps(c,0,(int32_t)c->r[5],0); // 800835FC
  if (crb(c,2)) { goto L_8008362C; } // 80083600
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083604
  cmps(c,0,(int32_t)c->r[0],0); // 80083608
  if (crb(c,0)) { goto L_8008362C; } // 8008360C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80083610
  if (!crb(c,2)) { goto L_8008362C; } // 80083614
  c->r[4]=0u+0x00000040u; // 80083618
  c->lr=0x80083620u; f_800848F0(c); // 8008361C
  cmpu(c,0,c->r[3],0x00000040u); // 80083620
  c->r[31]=c->r[3]|c->r[3]; // 80083624
  if (!crb(c,2)) { goto L_80083634; } // 80083628
L_8008362C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8008362C
  goto L_800836F0; // 80083630
L_80083634:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083634
  c->r[4]=0u+0x00000140u; // 80083638
  c->r[5]=0u+0x00000020u; // 8008363C
  c->lr=0x80083644u; f_80086680(c); // 80083640
  cmps(c,0,(int32_t)c->r[3],0); // 80083644
  c->r[29]=c->r[3]|c->r[3]; // 80083648
  if (!crb(c,2)) { goto L_80083658; } // 8008364C
  c->r[31]=0u+0xFFFFFFEAu; // 80083650
  goto L_800836F0; // 80083654
L_80083658:;
  c->r[0]=c->r[3]+0x0000003Fu; // 80083658
  c->r[4]=c->r[26]|c->r[26]; // 8008365C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083660
  c->r[5]=c->r[31]+0x00000001u; // 80083664
  c->r[3]=c->r[30]|c->r[30]; // 80083668
  c->lr=0x80083670u; f_800043C4(c); // 8008366C
  W32(c->r[29]+0x00000000u,c->r[30]); // 80083670
  c->r[3]=0u+0x00000040u; // 80083674
  c->r[0]=c->r[30]+0x0000005Fu; // 80083678
  cmps(c,0,(int32_t)c->r[27],0); // 8008367C
  W32(c->r[29]+0x00000004u,c->r[3]); // 80083680
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083684
  c->r[3]=0u+0x00000004u; // 80083688
  W32(c->r[29]+0x00000008u,c->r[30]); // 8008368C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80083690
  if (crb(c,2)) { goto L_800836C4; } // 80083694
  c->r[0]=R32(c->r[28]+0x00000000u); // 80083698
  c->r[5]=0u+0x00000002u; // 8008369C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800836A0
  c->r[6]=0u+0x00000002u; // 800836A4
  W32(c->r[29]+0x00000010u,c->r[27]); // 800836A8
  c->r[0]=R32(c->r[28]+0x00000000u); // 800836AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 800836B0
  W32(c->r[29]+0x00000014u,c->r[0]); // 800836B4
  W32(c->r[29]+0x00000018u,c->r[30]); // 800836B8
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800836BC
  goto L_800836CC; // 800836C0
L_800836C4:;
  c->r[5]=0u+0x00000001u; // 800836C4
  c->r[6]=0u+0x00000001u; // 800836C8
L_800836CC:;
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 800836CC
  c->r[7]=c->r[29]|c->r[29]; // 800836D0
  c->r[4]=0u+0x00000004u; // 800836D4
  c->lr=0x800836DCu; f_80085F40(c); // 800836D8
  cmps(c,0,(int32_t)c->r[3],0); // 800836DC
  c->r[31]=c->r[3]|c->r[3]; // 800836E0
  if (!crb(c,2)) { goto L_800836F0; } // 800836E4
  c->r[0]=R32(c->r[30]+0x00000000u); // 800836E8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800836EC
L_800836F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800836F0
  if (crb(c,2)) { goto L_80083708; } // 800836F4
  if (crb(c,2)) { goto L_80083708; } // 800836F8
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800836FC
  c->r[4]=c->r[29]|c->r[29]; // 80083700
  c->lr=0x80083708u; f_80086690(c); // 80083704
L_80083708:;
  c->r[11]=c->r[1]+0x00000020u; // 80083708
  c->r[3]=c->r[31]|c->r[31]; // 8008370C
  c->lr=0x80083714u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083710
  c->r[0]=R32(c->r[1]+0x00000024u); // 80083714
  c->lr=c->r[0]; // 80083718
  c->r[1]=c->r[1]+0x00000020u; // 8008371C
  return; // 80083720
}

// fn_80083730
void f_80083730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083730
  c->r[0]=c->lr; // 80083734
  W32(c->r[1]+0x00000034u,c->r[0]); // 80083738
  c->r[11]=c->r[1]+0x00000030u; // 8008373C
  c->lr=0x80083744u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083740
  cmps(c,0,(int32_t)c->r[3],0); // 80083744
  c->r[25]=c->r[3]|c->r[3]; // 80083748
  c->r[26]=c->r[4]|c->r[4]; // 8008374C
  c->r[27]=c->r[5]|c->r[5]; // 80083750
  c->r[28]=c->r[6]|c->r[6]; // 80083754
  c->r[29]=c->r[7]|c->r[7]; // 80083758
  if (crb(c,2)) { goto L_80083790; } // 8008375C
  cmps(c,0,(int32_t)c->r[5],0); // 80083760
  if (crb(c,2)) { goto L_80083790; } // 80083764
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083768
  cmps(c,0,(int32_t)c->r[0],0); // 8008376C
  if (crb(c,0)) { goto L_80083790; } // 80083770
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80083774
  if (!crb(c,2)) { goto L_80083790; } // 80083778
  c->r[4]=0u+0x00000040u; // 8008377C
  c->lr=0x80083784u; f_800848F0(c); // 80083780
  cmpu(c,0,c->r[3],0x00000040u); // 80083784
  c->r[31]=c->r[3]|c->r[3]; // 80083788
  if (!crb(c,2)) { goto L_80083798; } // 8008378C
L_80083790:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80083790
  goto L_80083860; // 80083794
L_80083798:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083798
  c->r[4]=0u+0x00000140u; // 8008379C
  c->r[5]=0u+0x00000020u; // 800837A0
  c->lr=0x800837A8u; f_80086680(c); // 800837A4
  cmps(c,0,(int32_t)c->r[3],0); // 800837A8
  c->r[30]=c->r[3]|c->r[3]; // 800837AC
  if (!crb(c,2)) { goto L_800837BC; } // 800837B0
  c->r[3]=0u+0xFFFFFF8Au; // 800837B4
  goto L_80083860; // 800837B8
L_800837BC:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800837BC
  c->r[6]=0u+0x00000002u; // 800837C0
  c->r[0]=c->r[3]+0x0000003Fu; // 800837C4
  c->r[4]=c->r[25]|c->r[25]; // 800837C8
  W32(c->r[3]+0x00000104u,c->r[29]); // 800837CC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800837D0
  c->r[5]=c->r[31]+0x00000001u; // 800837D4
  W32(c->r[3]+0x00000108u,c->r[6]); // 800837D8
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 800837DC
  c->r[3]=c->r[29]|c->r[29]; // 800837E0
  c->lr=0x800837E8u; f_800043C4(c); // 800837E4
  W32(c->r[30]+0x00000000u,c->r[29]); // 800837E8
  c->r[3]=0u+0x00000040u; // 800837EC
  c->r[0]=c->r[29]+0x0000005Fu; // 800837F0
  cmps(c,0,(int32_t)c->r[26],0); // 800837F4
  W32(c->r[30]+0x00000004u,c->r[3]); // 800837F8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800837FC
  c->r[3]=0u+0x00000004u; // 80083800
  W32(c->r[30]+0x00000008u,c->r[4]); // 80083804
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80083808
  if (crb(c,2)) { goto L_8008383C; } // 8008380C
  c->r[0]=R32(c->r[27]+0x00000000u); // 80083810
  c->r[5]=0u+0x00000002u; // 80083814
  W32(c->r[4]+0x00000000u,c->r[0]); // 80083818
  c->r[6]=0u+0x00000002u; // 8008381C
  W32(c->r[30]+0x00000010u,c->r[26]); // 80083820
  c->r[0]=R32(c->r[27]+0x00000000u); // 80083824
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 80083828
  W32(c->r[30]+0x00000014u,c->r[0]); // 8008382C
  W32(c->r[30]+0x00000018u,c->r[4]); // 80083830
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80083834
  goto L_80083844; // 80083838
L_8008383C:;
  c->r[5]=0u+0x00000001u; // 8008383C
  c->r[6]=0u+0x00000001u; // 80083840
L_80083844:;
  c->r[8]=0u+0x80080000u; // 80083844
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083848
  c->r[7]=c->r[30]|c->r[30]; // 8008384C
  c->r[9]=c->r[30]|c->r[30]; // 80083850
  c->r[8]=c->r[8]+0x00003250u; // 80083854
  c->r[4]=0u+0x00000004u; // 80083858
  c->lr=0x80083860u; f_80085E50(c); // 8008385C
L_80083860:;
  c->r[11]=c->r[1]+0x00000030u; // 80083860
  c->lr=0x80083868u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083864
  c->r[0]=R32(c->r[1]+0x00000034u); // 80083868
  c->lr=c->r[0]; // 8008386C
  c->r[1]=c->r[1]+0x00000030u; // 80083870
  return; // 80083874
}

// fn_80083880
void f_80083880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083880
  c->r[0]=c->lr; // 80083884
  W32(c->r[1]+0x00000034u,c->r[0]); // 80083888
  c->r[11]=c->r[1]+0x00000030u; // 8008388C
  c->lr=0x80083894u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083890
  cmps(c,0,(int32_t)c->r[3],0); // 80083894
  c->r[30]=c->r[3]|c->r[3]; // 80083898
  c->r[23]=c->r[4]|c->r[4]; // 8008389C
  c->r[24]=c->r[5]|c->r[5]; // 800838A0
  c->r[25]=c->r[6]|c->r[6]; // 800838A4
  c->r[26]=c->r[7]|c->r[7]; // 800838A8
  c->r[27]=c->r[8]|c->r[8]; // 800838AC
  c->r[28]=c->r[9]|c->r[9]; // 800838B0
  c->r[29]=0u+0x00000000u; // 800838B4
  if (crb(c,2)) { goto L_8008390C; } // 800838B8
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 800838BC
  cmps(c,0,(int32_t)c->r[0],0); // 800838C0
  if (crb(c,0)) { goto L_8008390C; } // 800838C4
  c->r[4]=0u+0x00000040u; // 800838C8
  c->lr=0x800838D0u; f_800848F0(c); // 800838CC
  cmpu(c,0,c->r[3],0x00000040u); // 800838D0
  c->r[31]=c->r[3]|c->r[3]; // 800838D4
  if (crb(c,2)) { goto L_8008390C; } // 800838D8
  cmps(c,0,(int32_t)c->r[23],0); // 800838DC
  if (crb(c,2)) { goto L_8008390C; } // 800838E0
  cmps(c,0,(int32_t)c->r[24],0); // 800838E4
  if (crb(c,2)) { goto L_8008390C; } // 800838E8
  cmps(c,0,(int32_t)c->r[25],0); // 800838EC
  if (crb(c,2)) { goto L_8008390C; } // 800838F0
  cmps(c,0,(int32_t)c->r[26],0); // 800838F4
  if (crb(c,2)) { goto L_8008390C; } // 800838F8
  cmps(c,0,(int32_t)c->r[27],0); // 800838FC
  if (crb(c,2)) { goto L_8008390C; } // 80083900
  cmps(c,0,(int32_t)c->r[28],0); // 80083904
  if (!crb(c,2)) { goto L_80083914; } // 80083908
L_8008390C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8008390C
  goto L_800839A4; // 80083910
L_80083914:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083914
  c->r[4]=0u+0x00000140u; // 80083918
  c->r[5]=0u+0x00000020u; // 8008391C
  c->lr=0x80083924u; f_80086680(c); // 80083920
  cmps(c,0,(int32_t)c->r[3],0); // 80083924
  c->r[29]=c->r[3]|c->r[3]; // 80083928
  if (!crb(c,2)) { goto L_80083938; } // 8008392C
  c->r[31]=0u+0xFFFFFFEAu; // 80083930
  goto L_800839A4; // 80083934
L_80083938:;
  c->r[4]=c->r[30]|c->r[30]; // 80083938
  c->r[5]=c->r[31]+0x00000001u; // 8008393C
  c->lr=0x80083944u; f_800043C4(c); // 80083940
  c->r[0]=c->r[29]+0x0000005Fu; // 80083944
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083948
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8008394C
  c->r[5]=c->r[29]|c->r[29]; // 80083950
  c->r[7]=c->r[30]|c->r[30]; // 80083954
  c->r[4]=0u+0x00000006u; // 80083958
  c->r[6]=0u+0x00000040u; // 8008395C
  c->r[8]=0u+0x0000004Cu; // 80083960
  c->lr=0x80083968u; f_80085BE0(c); // 80083964
  cmps(c,0,(int32_t)c->r[3],0); // 80083968
  c->r[31]=c->r[3]|c->r[3]; // 8008396C
  if (!crb(c,2)) { goto L_800839A4; } // 80083970
  c->r[0]=R32(c->r[30]+0x00000000u); // 80083974
  W32(c->r[23]+0x00000000u,c->r[0]); // 80083978
  c->r[0]=R16(c->r[30]+0x00000004u); // 8008397C
  W16(c->r[24]+0x00000000u,c->r[0]); // 80083980
  c->r[0]=R8(c->r[30]+0x00000049u); // 80083984
  W32(c->r[25]+0x00000000u,c->r[0]); // 80083988
  c->r[0]=R8(c->r[30]+0x00000046u); // 8008398C
  W32(c->r[26]+0x00000000u,c->r[0]); // 80083990
  c->r[0]=R8(c->r[30]+0x00000047u); // 80083994
  W32(c->r[27]+0x00000000u,c->r[0]); // 80083998
  c->r[0]=R8(c->r[30]+0x00000048u); // 8008399C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800839A0
L_800839A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800839A4
  if (crb(c,2)) { goto L_800839BC; } // 800839A8
  if (crb(c,2)) { goto L_800839BC; } // 800839AC
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800839B0
  c->r[4]=c->r[29]|c->r[29]; // 800839B4
  c->lr=0x800839BCu; f_80086690(c); // 800839B8
L_800839BC:;
  c->r[11]=c->r[1]+0x00000030u; // 800839BC
  c->r[3]=c->r[31]|c->r[31]; // 800839C0
  c->lr=0x800839C8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800839C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800839C8
  c->lr=c->r[0]; // 800839CC
  c->r[1]=c->r[1]+0x00000030u; // 800839D0
  return; // 800839D4
}

// fn_800839E0
void f_800839E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800839E0
  c->r[0]=c->lr; // 800839E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800839E8
  c->r[11]=c->r[1]+0x00000040u; // 800839EC
  c->lr=0x800839F4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800839F0
  cmps(c,0,(int32_t)c->r[3],0); // 800839F4
  c->r[29]=R32(c->r[1]+0x00000048u); // 800839F8
  c->r[21]=c->r[3]|c->r[3]; // 800839FC
  c->r[22]=c->r[4]|c->r[4]; // 80083A00
  c->r[23]=c->r[5]|c->r[5]; // 80083A04
  c->r[24]=c->r[6]|c->r[6]; // 80083A08
  c->r[25]=c->r[7]|c->r[7]; // 80083A0C
  c->r[26]=c->r[8]|c->r[8]; // 80083A10
  c->r[27]=c->r[9]|c->r[9]; // 80083A14
  c->r[28]=c->r[10]|c->r[10]; // 80083A18
  if (crb(c,2)) { goto L_80083A70; } // 80083A1C
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083A20
  cmps(c,0,(int32_t)c->r[0],0); // 80083A24
  if (crb(c,0)) { goto L_80083A70; } // 80083A28
  c->r[4]=0u+0x00000040u; // 80083A2C
  c->lr=0x80083A34u; f_800848F0(c); // 80083A30
  cmpu(c,0,c->r[3],0x00000040u); // 80083A34
  c->r[31]=c->r[3]|c->r[3]; // 80083A38
  if (crb(c,2)) { goto L_80083A70; } // 80083A3C
  cmps(c,0,(int32_t)c->r[22],0); // 80083A40
  if (crb(c,2)) { goto L_80083A70; } // 80083A44
  cmps(c,0,(int32_t)c->r[23],0); // 80083A48
  if (crb(c,2)) { goto L_80083A70; } // 80083A4C
  cmps(c,0,(int32_t)c->r[24],0); // 80083A50
  if (crb(c,2)) { goto L_80083A70; } // 80083A54
  cmps(c,0,(int32_t)c->r[25],0); // 80083A58
  if (crb(c,2)) { goto L_80083A70; } // 80083A5C
  cmps(c,0,(int32_t)c->r[26],0); // 80083A60
  if (crb(c,2)) { goto L_80083A70; } // 80083A64
  cmps(c,0,(int32_t)c->r[27],0); // 80083A68
  if (!crb(c,2)) { goto L_80083A78; } // 80083A6C
L_80083A70:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80083A70
  goto L_80083AFC; // 80083A74
L_80083A78:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083A78
  c->r[4]=0u+0x00000140u; // 80083A7C
  c->r[5]=0u+0x00000020u; // 80083A80
  c->lr=0x80083A88u; f_80086680(c); // 80083A84
  cmps(c,0,(int32_t)c->r[3],0); // 80083A88
  c->r[30]=c->r[3]|c->r[3]; // 80083A8C
  if (!crb(c,2)) { goto L_80083A9C; } // 80083A90
  c->r[3]=0u+0xFFFFFF8Au; // 80083A94
  goto L_80083AFC; // 80083A98
L_80083A9C:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 80083A9C
  c->r[0]=0u+0x00000003u; // 80083AA0
  c->r[4]=c->r[21]|c->r[21]; // 80083AA4
  c->r[5]=c->r[31]+0x00000001u; // 80083AA8
  W32(c->r[3]+0x00000110u,c->r[23]); // 80083AAC
  W32(c->r[3]+0x00000114u,c->r[24]); // 80083AB0
  W32(c->r[3]+0x00000118u,c->r[25]); // 80083AB4
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 80083AB8
  W32(c->r[3]+0x00000120u,c->r[27]); // 80083ABC
  W32(c->r[3]+0x00000100u,c->r[28]); // 80083AC0
  W32(c->r[3]+0x00000104u,c->r[29]); // 80083AC4
  W32(c->r[3]+0x00000108u,c->r[0]); // 80083AC8
  c->lr=0x80083AD0u; f_800043C4(c); // 80083ACC
  c->r[0]=c->r[30]+0x0000005Fu; // 80083AD0
  c->r[9]=0u+0x80080000u; // 80083AD4
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083AD8
  c->r[5]=c->r[30]|c->r[30]; // 80083ADC
  c->r[10]=c->r[30]|c->r[30]; // 80083AE0
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083AE4
  c->r[9]=c->r[9]+0x00003250u; // 80083AE8
  c->r[4]=0u+0x00000006u; // 80083AEC
  c->r[6]=0u+0x00000040u; // 80083AF0
  c->r[8]=0u+0x0000004Cu; // 80083AF4
  c->lr=0x80083AFCu; f_80085AA0(c); // 80083AF8
L_80083AFC:;
  c->r[11]=c->r[1]+0x00000040u; // 80083AFC
  c->lr=0x80083B04u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083B00
  c->r[0]=R32(c->r[1]+0x00000044u); // 80083B04
  c->lr=c->r[0]; // 80083B08
  c->r[1]=c->r[1]+0x00000040u; // 80083B0C
  return; // 80083B10
}

// ISFS_Delete
void f_80083B20(Ctx* __restrict c) {
  trace_call(0x80083B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083B20
  c->r[0]=c->lr; // 80083B24
  cmps(c,0,(int32_t)c->r[3],0); // 80083B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083B2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80083B30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80083B34
  c->r[30]=0u+0x00000000u; // 80083B38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80083B3C
  c->r[29]=c->r[3]|c->r[3]; // 80083B40
  if (crb(c,2)) { goto L_80083B68; } // 80083B44
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083B48
  cmps(c,0,(int32_t)c->r[0],0); // 80083B4C
  if (crb(c,0)) { goto L_80083B68; } // 80083B50
  c->r[4]=0u+0x00000040u; // 80083B54
  c->lr=0x80083B5Cu; f_800848F0(c); // 80083B58
  cmpu(c,0,c->r[3],0x00000040u); // 80083B5C
  c->r[31]=c->r[3]|c->r[3]; // 80083B60
  if (!crb(c,2)) { goto L_80083B70; } // 80083B64
L_80083B68:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80083B68
  goto L_80083BC0; // 80083B6C
L_80083B70:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083B70
  c->r[4]=0u+0x00000140u; // 80083B74
  c->r[5]=0u+0x00000020u; // 80083B78
  c->lr=0x80083B80u; f_80086680(c); // 80083B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80083B80
  c->r[30]=c->r[3]|c->r[3]; // 80083B84
  if (!crb(c,2)) { goto L_80083B94; } // 80083B88
  c->r[31]=0u+0xFFFFFFEAu; // 80083B8C
  goto L_80083BC0; // 80083B90
L_80083B94:;
  c->r[4]=c->r[29]|c->r[29]; // 80083B94
  c->r[5]=c->r[31]+0x00000001u; // 80083B98
  c->lr=0x80083BA0u; f_800043C4(c); // 80083B9C
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083BA0
  c->r[5]=c->r[30]|c->r[30]; // 80083BA4
  c->r[4]=0u+0x00000007u; // 80083BA8
  c->r[6]=0u+0x00000040u; // 80083BAC
  c->r[7]=0u+0x00000000u; // 80083BB0
  c->r[8]=0u+0x00000000u; // 80083BB4
  c->lr=0x80083BBCu; f_80085BE0(c); // 80083BB8
  c->r[31]=c->r[3]|c->r[3]; // 80083BBC
L_80083BC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80083BC0
  if (crb(c,2)) { goto L_80083BD8; } // 80083BC4
  if (crb(c,2)) { goto L_80083BD8; } // 80083BC8
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083BCC
  c->r[4]=c->r[30]|c->r[30]; // 80083BD0
  c->lr=0x80083BD8u; f_80086690(c); // 80083BD4
L_80083BD8:;
  c->r[3]=c->r[31]|c->r[31]; // 80083BD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80083BDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80083BE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80083BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80083BE8
  c->lr=c->r[0]; // 80083BEC
  c->r[1]=c->r[1]+0x00000020u; // 80083BF0
  return; // 80083BF4
}

// fn_80083C00
void f_80083C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083C00
  c->r[0]=c->lr; // 80083C04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083C08
  c->r[11]=c->r[1]+0x00000020u; // 80083C0C
  c->lr=0x80083C14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083C10
  cmps(c,0,(int32_t)c->r[3],0); // 80083C14
  c->r[27]=c->r[3]|c->r[3]; // 80083C18
  c->r[28]=c->r[4]|c->r[4]; // 80083C1C
  c->r[29]=c->r[5]|c->r[5]; // 80083C20
  if (crb(c,2)) { goto L_80083C48; } // 80083C24
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083C28
  cmps(c,0,(int32_t)c->r[0],0); // 80083C2C
  if (crb(c,0)) { goto L_80083C48; } // 80083C30
  c->r[4]=0u+0x00000040u; // 80083C34
  c->lr=0x80083C3Cu; f_800848F0(c); // 80083C38
  cmpu(c,0,c->r[3],0x00000040u); // 80083C3C
  c->r[31]=c->r[3]|c->r[3]; // 80083C40
  if (!crb(c,2)) { goto L_80083C50; } // 80083C44
L_80083C48:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80083C48
  goto L_80083CB8; // 80083C4C
L_80083C50:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083C50
  c->r[4]=0u+0x00000140u; // 80083C54
  c->r[5]=0u+0x00000020u; // 80083C58
  c->lr=0x80083C60u; f_80086680(c); // 80083C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80083C60
  c->r[30]=c->r[3]|c->r[3]; // 80083C64
  if (!crb(c,2)) { goto L_80083C74; } // 80083C68
  c->r[3]=0u+0xFFFFFF8Au; // 80083C6C
  goto L_80083CB8; // 80083C70
L_80083C74:;
  c->r[4]=c->r[27]|c->r[27]; // 80083C74
  c->r[5]=c->r[31]+0x00000001u; // 80083C78
  c->lr=0x80083C80u; f_800043C4(c); // 80083C7C
  W32(c->r[30]+0x00000100u,c->r[28]); // 80083C80
  c->r[9]=0u+0x80080000u; // 80083C84
  c->r[0]=0u+0x00000000u; // 80083C88
  c->r[5]=c->r[30]|c->r[30]; // 80083C8C
  W32(c->r[30]+0x00000104u,c->r[29]); // 80083C90
  c->r[10]=c->r[30]|c->r[30]; // 80083C94
  c->r[9]=c->r[9]+0x00003250u; // 80083C98
  c->r[4]=0u+0x00000007u; // 80083C9C
  W32(c->r[30]+0x00000108u,c->r[0]); // 80083CA0
  c->r[6]=0u+0x00000040u; // 80083CA4
  c->r[7]=0u+0x00000000u; // 80083CA8
  c->r[8]=0u+0x00000000u; // 80083CAC
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083CB0
  c->lr=0x80083CB8u; f_80085AA0(c); // 80083CB4
L_80083CB8:;
  c->r[11]=c->r[1]+0x00000020u; // 80083CB8
  c->lr=0x80083CC0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083CBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80083CC0
  c->lr=c->r[0]; // 80083CC4
  c->r[1]=c->r[1]+0x00000020u; // 80083CC8
  return; // 80083CCC
}

// fn_80083CD0
void f_80083CD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083CD0
  c->r[0]=c->lr; // 80083CD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083CD8
  c->r[11]=c->r[1]+0x00000020u; // 80083CDC
  c->lr=0x80083CE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80083CE4
  c->r[27]=c->r[3]|c->r[3]; // 80083CE8
  c->r[28]=c->r[4]|c->r[4]; // 80083CEC
  c->r[29]=0u+0x00000000u; // 80083CF0
  if (crb(c,2)) { goto L_80083D38; } // 80083CF4
  cmps(c,0,(int32_t)c->r[4],0); // 80083CF8
  if (crb(c,2)) { goto L_80083D38; } // 80083CFC
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083D00
  cmps(c,0,(int32_t)c->r[0],0); // 80083D04
  if (crb(c,0)) { goto L_80083D38; } // 80083D08
  c->r[4]=0u+0x00000040u; // 80083D0C
  c->lr=0x80083D14u; f_800848F0(c); // 80083D10
  cmpu(c,0,c->r[3],0x00000040u); // 80083D14
  c->r[30]=c->r[3]|c->r[3]; // 80083D18
  if (crb(c,2)) { goto L_80083D38; } // 80083D1C
  c->r[3]=c->r[28]|c->r[28]; // 80083D20
  c->r[4]=0u+0x00000040u; // 80083D24
  c->lr=0x80083D2Cu; f_800848F0(c); // 80083D28
  cmpu(c,0,c->r[3],0x00000040u); // 80083D2C
  c->r[31]=c->r[3]|c->r[3]; // 80083D30
  if (!crb(c,2)) { goto L_80083D40; } // 80083D34
L_80083D38:;
  c->r[30]=0u+0xFFFFFF9Bu; // 80083D38
  goto L_80083DA0; // 80083D3C
L_80083D40:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083D40
  c->r[4]=0u+0x00000140u; // 80083D44
  c->r[5]=0u+0x00000020u; // 80083D48
  c->lr=0x80083D50u; f_80086680(c); // 80083D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80083D50
  c->r[29]=c->r[3]|c->r[3]; // 80083D54
  if (!crb(c,2)) { goto L_80083D64; } // 80083D58
  c->r[30]=0u+0xFFFFFFEAu; // 80083D5C
  goto L_80083DA0; // 80083D60
L_80083D64:;
  c->r[4]=c->r[27]|c->r[27]; // 80083D64
  c->r[5]=c->r[30]+0x00000001u; // 80083D68
  c->lr=0x80083D70u; f_800043C4(c); // 80083D6C
  c->r[4]=c->r[28]|c->r[28]; // 80083D70
  c->r[3]=c->r[29]+0x00000040u; // 80083D74
  c->r[5]=c->r[31]+0x00000001u; // 80083D78
  c->lr=0x80083D80u; f_800043C4(c); // 80083D7C
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083D80
  c->r[5]=c->r[29]|c->r[29]; // 80083D84
  c->r[4]=0u+0x00000008u; // 80083D88
  c->r[6]=0u+0x00000080u; // 80083D8C
  c->r[7]=0u+0x00000000u; // 80083D90
  c->r[8]=0u+0x00000000u; // 80083D94
  c->lr=0x80083D9Cu; f_80085BE0(c); // 80083D98
  c->r[30]=c->r[3]|c->r[3]; // 80083D9C
L_80083DA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 80083DA0
  if (crb(c,2)) { goto L_80083DB8; } // 80083DA4
  if (crb(c,2)) { goto L_80083DB8; } // 80083DA8
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083DAC
  c->r[4]=c->r[29]|c->r[29]; // 80083DB0
  c->lr=0x80083DB8u; f_80086690(c); // 80083DB4
L_80083DB8:;
  c->r[11]=c->r[1]+0x00000020u; // 80083DB8
  c->r[3]=c->r[30]|c->r[30]; // 80083DBC
  c->lr=0x80083DC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083DC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80083DC4
  c->lr=c->r[0]; // 80083DC8
  c->r[1]=c->r[1]+0x00000020u; // 80083DCC
  return; // 80083DD0
}

// fn_80083DE0
void f_80083DE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083DE0
  c->r[0]=c->lr; // 80083DE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80083DE8
  c->r[11]=c->r[1]+0x00000030u; // 80083DEC
  c->lr=0x80083DF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083DF0
  cmps(c,0,(int32_t)c->r[3],0); // 80083DF4
  c->r[25]=c->r[3]|c->r[3]; // 80083DF8
  c->r[26]=c->r[4]|c->r[4]; // 80083DFC
  c->r[27]=c->r[5]|c->r[5]; // 80083E00
  c->r[28]=c->r[6]|c->r[6]; // 80083E04
  if (crb(c,2)) { goto L_80083E4C; } // 80083E08
  cmps(c,0,(int32_t)c->r[4],0); // 80083E0C
  if (crb(c,2)) { goto L_80083E4C; } // 80083E10
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083E14
  cmps(c,0,(int32_t)c->r[0],0); // 80083E18
  if (crb(c,0)) { goto L_80083E4C; } // 80083E1C
  c->r[4]=0u+0x00000040u; // 80083E20
  c->lr=0x80083E28u; f_800848F0(c); // 80083E24
  cmpu(c,0,c->r[3],0x00000040u); // 80083E28
  c->r[30]=c->r[3]|c->r[3]; // 80083E2C
  if (crb(c,2)) { goto L_80083E4C; } // 80083E30
  c->r[3]=c->r[26]|c->r[26]; // 80083E34
  c->r[4]=0u+0x00000040u; // 80083E38
  c->lr=0x80083E40u; f_800848F0(c); // 80083E3C
  cmpu(c,0,c->r[3],0x00000040u); // 80083E40
  c->r[31]=c->r[3]|c->r[3]; // 80083E44
  if (!crb(c,2)) { goto L_80083E54; } // 80083E48
L_80083E4C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80083E4C
  goto L_80083ECC; // 80083E50
L_80083E54:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083E54
  c->r[4]=0u+0x00000140u; // 80083E58
  c->r[5]=0u+0x00000020u; // 80083E5C
  c->lr=0x80083E64u; f_80086680(c); // 80083E60
  cmps(c,0,(int32_t)c->r[3],0); // 80083E64
  c->r[29]=c->r[3]|c->r[3]; // 80083E68
  if (!crb(c,2)) { goto L_80083E78; } // 80083E6C
  c->r[3]=0u+0xFFFFFF8Au; // 80083E70
  goto L_80083ECC; // 80083E74
L_80083E78:;
  W32(c->r[3]+0x00000100u,c->r[27]); // 80083E78
  c->r[0]=0u+0x00000000u; // 80083E7C
  c->r[4]=c->r[25]|c->r[25]; // 80083E80
  c->r[5]=c->r[30]+0x00000001u; // 80083E84
  W32(c->r[3]+0x00000104u,c->r[28]); // 80083E88
  W32(c->r[3]+0x00000108u,c->r[0]); // 80083E8C
  c->lr=0x80083E94u; f_800043C4(c); // 80083E90
  c->r[4]=c->r[26]|c->r[26]; // 80083E94
  c->r[3]=c->r[29]+0x00000040u; // 80083E98
  c->r[5]=c->r[31]+0x00000001u; // 80083E9C
  c->lr=0x80083EA4u; f_800043C4(c); // 80083EA0
  c->r[9]=0u+0x80080000u; // 80083EA4
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083EA8
  c->r[5]=c->r[29]|c->r[29]; // 80083EAC
  c->r[10]=c->r[29]|c->r[29]; // 80083EB0
  c->r[9]=c->r[9]+0x00003250u; // 80083EB4
  c->r[4]=0u+0x00000008u; // 80083EB8
  c->r[6]=0u+0x00000080u; // 80083EBC
  c->r[7]=0u+0x00000000u; // 80083EC0
  c->r[8]=0u+0x00000000u; // 80083EC4
  c->lr=0x80083ECCu; f_80085AA0(c); // 80083EC8
L_80083ECC:;
  c->r[11]=c->r[1]+0x00000030u; // 80083ECC
  c->lr=0x80083ED4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80083ED0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80083ED4
  c->lr=c->r[0]; // 80083ED8
  c->r[1]=c->r[1]+0x00000030u; // 80083EDC
  return; // 80083EE0
}

// fn_80083EF0
void f_80083EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083EF0
  c->r[0]=c->lr; // 80083EF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80083EF8
  c->r[11]=c->r[1]+0x00000020u; // 80083EFC
  c->lr=0x80083F04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80083F00
  cmps(c,0,(int32_t)c->r[3],0); // 80083F04
  c->r[30]=c->r[3]|c->r[3]; // 80083F08
  c->r[26]=c->r[4]|c->r[4]; // 80083F0C
  c->r[27]=c->r[5]|c->r[5]; // 80083F10
  c->r[28]=0u+0x00000000u; // 80083F14
  if (crb(c,2)) { goto L_80083F4C; } // 80083F18
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80083F1C
  cmps(c,0,(int32_t)c->r[0],0); // 80083F20
  if (crb(c,0)) { goto L_80083F4C; } // 80083F24
  cmps(c,0,(int32_t)c->r[4],0); // 80083F28
  if (crb(c,2)) { goto L_80083F4C; } // 80083F2C
  cmps(c,0,(int32_t)c->r[5],0); // 80083F30
  if (crb(c,2)) { goto L_80083F4C; } // 80083F34
  c->r[4]=0u+0x00000040u; // 80083F38
  c->lr=0x80083F40u; f_800848F0(c); // 80083F3C
  cmpu(c,0,c->r[3],0x00000040u); // 80083F40
  c->r[31]=c->r[3]|c->r[3]; // 80083F44
  if (!crb(c,2)) { goto L_80083F54; } // 80083F48
L_80083F4C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80083F4C
  goto L_80083FF4; // 80083F50
L_80083F54:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80083F54
  c->r[4]=0u+0x00000140u; // 80083F58
  c->r[5]=0u+0x00000020u; // 80083F5C
  c->lr=0x80083F64u; f_80086680(c); // 80083F60
  cmps(c,0,(int32_t)c->r[3],0); // 80083F64
  c->r[28]=c->r[3]|c->r[3]; // 80083F68
  if (!crb(c,2)) { goto L_80083F78; } // 80083F6C
  c->r[31]=0u+0xFFFFFFEAu; // 80083F70
  goto L_80083FF4; // 80083F74
L_80083F78:;
  c->r[0]=c->r[3]+0x00000037u; // 80083F78
  c->r[4]=c->r[30]|c->r[30]; // 80083F7C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80083F80
  c->r[5]=c->r[31]+0x00000001u; // 80083F84
  c->r[3]=c->r[29]|c->r[29]; // 80083F88
  c->lr=0x80083F90u; f_800043C4(c); // 80083F8C
  W32(c->r[28]+0x00000000u,c->r[29]); // 80083F90
  c->r[4]=0u+0x00000040u; // 80083F94
  c->r[3]=c->r[29]+0x0000005Fu; // 80083F98
  c->r[0]=0u+0x00000004u; // 80083F9C
  W32(c->r[28]+0x00000004u,c->r[4]); // 80083FA0
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80083FA4
  c->r[3]=c->r[30]+0x00000023u; // 80083FA8
  c->r[7]=c->r[28]|c->r[28]; // 80083FAC
  W32(c->r[28]+0x00000008u,c->r[30]); // 80083FB0
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80083FB4
  c->r[4]=0u+0x0000000Cu; // 80083FB8
  c->r[5]=0u+0x00000001u; // 80083FBC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80083FC0
  c->r[6]=0u+0x00000002u; // 80083FC4
  W32(c->r[28]+0x00000010u,c->r[29]); // 80083FC8
  W32(c->r[28]+0x00000014u,c->r[0]); // 80083FCC
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80083FD0
  c->lr=0x80083FD8u; f_80085F40(c); // 80083FD4
  cmps(c,0,(int32_t)c->r[3],0); // 80083FD8
  c->r[31]=c->r[3]|c->r[3]; // 80083FDC
  if (!crb(c,2)) { goto L_80083FF4; } // 80083FE0
  c->r[0]=R32(c->r[30]+0x00000000u); // 80083FE4
  W32(c->r[26]+0x00000000u,c->r[0]); // 80083FE8
  c->r[0]=R32(c->r[29]+0x00000000u); // 80083FEC
  W32(c->r[27]+0x00000000u,c->r[0]); // 80083FF0
L_80083FF4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80083FF4
  if (crb(c,2)) { goto L_8008400C; } // 80083FF8
  if (crb(c,2)) { goto L_8008400C; } // 80083FFC
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084000
  c->r[4]=c->r[28]|c->r[28]; // 80084004
  c->lr=0x8008400Cu; f_80086690(c); // 80084008
L_8008400C:;
  c->r[11]=c->r[1]+0x00000020u; // 8008400C
  c->r[3]=c->r[31]|c->r[31]; // 80084010
  c->lr=0x80084018u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084014
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084018
  c->lr=c->r[0]; // 8008401C
  c->r[1]=c->r[1]+0x00000020u; // 80084020
  return; // 80084024
}

// fn_80084030
void f_80084030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084030
  c->r[0]=c->lr; // 80084034
  W32(c->r[1]+0x00000034u,c->r[0]); // 80084038
  c->r[11]=c->r[1]+0x00000030u; // 8008403C
  c->lr=0x80084044u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084040
  cmps(c,0,(int32_t)c->r[3],0); // 80084044
  c->r[25]=c->r[3]|c->r[3]; // 80084048
  c->r[26]=c->r[4]|c->r[4]; // 8008404C
  c->r[27]=c->r[5]|c->r[5]; // 80084050
  c->r[28]=c->r[6]|c->r[6]; // 80084054
  c->r[29]=c->r[7]|c->r[7]; // 80084058
  c->r[30]=0u+0x00000000u; // 8008405C
  if (crb(c,2)) { goto L_80084084; } // 80084060
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80084064
  cmps(c,0,(int32_t)c->r[0],0); // 80084068
  if (crb(c,0)) { goto L_80084084; } // 8008406C
  c->r[4]=0u+0x00000040u; // 80084070
  c->lr=0x80084078u; f_800848F0(c); // 80084074
  cmpu(c,0,c->r[3],0x00000040u); // 80084078
  c->r[31]=c->r[3]|c->r[3]; // 8008407C
  if (!crb(c,2)) { goto L_8008408C; } // 80084080
L_80084084:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80084084
  goto L_800840F0; // 80084088
L_8008408C:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 8008408C
  c->r[4]=0u+0x00000140u; // 80084090
  c->r[5]=0u+0x00000020u; // 80084094
  c->lr=0x8008409Cu; f_80086680(c); // 80084098
  cmps(c,0,(int32_t)c->r[3],0); // 8008409C
  c->r[30]=c->r[3]|c->r[3]; // 800840A0
  if (!crb(c,2)) { goto L_800840B0; } // 800840A4
  c->r[31]=0u+0xFFFFFFEAu; // 800840A8
  goto L_800840F0; // 800840AC
L_800840B0:;
  c->r[4]=c->r[25]|c->r[25]; // 800840B0
  c->r[5]=c->r[31]+0x00000001u; // 800840B4
  c->r[3]=c->r[3]+0x00000006u; // 800840B8
  c->lr=0x800840C0u; f_800043C4(c); // 800840BC
  W8(c->r[30]+0x00000049u,c->r[26]); // 800840C0
  c->r[5]=c->r[30]|c->r[30]; // 800840C4
  c->r[4]=0u+0x00000009u; // 800840C8
  c->r[6]=0u+0x0000004Cu; // 800840CC
  W8(c->r[30]+0x00000046u,c->r[27]); // 800840D0
  c->r[7]=0u+0x00000000u; // 800840D4
  c->r[8]=0u+0x00000000u; // 800840D8
  W8(c->r[30]+0x00000047u,c->r[28]); // 800840DC
  W8(c->r[30]+0x00000048u,c->r[29]); // 800840E0
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 800840E4
  c->lr=0x800840ECu; f_80085BE0(c); // 800840E8
  c->r[31]=c->r[3]|c->r[3]; // 800840EC
L_800840F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800840F0
  if (crb(c,2)) { goto L_80084108; } // 800840F4
  if (crb(c,2)) { goto L_80084108; } // 800840F8
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800840FC
  c->r[4]=c->r[30]|c->r[30]; // 80084100
  c->lr=0x80084108u; f_80086690(c); // 80084104
L_80084108:;
  c->r[11]=c->r[1]+0x00000030u; // 80084108
  c->r[3]=c->r[31]|c->r[31]; // 8008410C
  c->lr=0x80084114u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084110
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084114
  c->lr=c->r[0]; // 80084118
  c->r[1]=c->r[1]+0x00000030u; // 8008411C
  return; // 80084120
}

// fn_80084130
void f_80084130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084130
  c->r[0]=c->lr; // 80084134
  W32(c->r[1]+0x00000034u,c->r[0]); // 80084138
  c->r[11]=c->r[1]+0x00000030u; // 8008413C
  c->lr=0x80084144u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084140
  cmps(c,0,(int32_t)c->r[3],0); // 80084144
  c->r[23]=c->r[3]|c->r[3]; // 80084148
  c->r[24]=c->r[4]|c->r[4]; // 8008414C
  c->r[25]=c->r[5]|c->r[5]; // 80084150
  c->r[26]=c->r[6]|c->r[6]; // 80084154
  c->r[27]=c->r[7]|c->r[7]; // 80084158
  c->r[28]=c->r[8]|c->r[8]; // 8008415C
  c->r[29]=c->r[9]|c->r[9]; // 80084160
  if (crb(c,2)) { goto L_80084188; } // 80084164
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 80084168
  cmps(c,0,(int32_t)c->r[0],0); // 8008416C
  if (crb(c,0)) { goto L_80084188; } // 80084170
  c->r[4]=0u+0x00000040u; // 80084174
  c->lr=0x8008417Cu; f_800848F0(c); // 80084178
  cmpu(c,0,c->r[3],0x00000040u); // 8008417C
  c->r[31]=c->r[3]|c->r[3]; // 80084180
  if (!crb(c,2)) { goto L_80084190; } // 80084184
L_80084188:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084188
  goto L_8008420C; // 8008418C
L_80084190:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084190
  c->r[4]=0u+0x00000140u; // 80084194
  c->r[5]=0u+0x00000020u; // 80084198
  c->lr=0x800841A0u; f_80086680(c); // 8008419C
  cmps(c,0,(int32_t)c->r[3],0); // 800841A0
  c->r[30]=c->r[3]|c->r[3]; // 800841A4
  if (!crb(c,2)) { goto L_800841B4; } // 800841A8
  c->r[3]=0u+0xFFFFFF8Au; // 800841AC
  goto L_8008420C; // 800841B0
L_800841B4:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800841B4
  c->r[0]=0u+0x00000000u; // 800841B8
  c->r[4]=c->r[23]|c->r[23]; // 800841BC
  c->r[5]=c->r[31]+0x00000001u; // 800841C0
  W32(c->r[3]+0x00000104u,c->r[29]); // 800841C4
  W32(c->r[3]+0x00000108u,c->r[0]); // 800841C8
  c->r[3]=c->r[3]+0x00000006u; // 800841CC
  c->lr=0x800841D4u; f_800043C4(c); // 800841D0
  W8(c->r[30]+0x00000049u,c->r[24]); // 800841D4
  c->r[9]=0u+0x80080000u; // 800841D8
  c->r[5]=c->r[30]|c->r[30]; // 800841DC
  c->r[10]=c->r[30]|c->r[30]; // 800841E0
  W8(c->r[30]+0x00000046u,c->r[25]); // 800841E4
  c->r[9]=c->r[9]+0x00003250u; // 800841E8
  c->r[4]=0u+0x00000009u; // 800841EC
  c->r[6]=0u+0x0000004Cu; // 800841F0
  W8(c->r[30]+0x00000047u,c->r[26]); // 800841F4
  c->r[7]=0u+0x00000000u; // 800841F8
  c->r[8]=0u+0x00000000u; // 800841FC
  W8(c->r[30]+0x00000048u,c->r[27]); // 80084200
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 80084204
  c->lr=0x8008420Cu; f_80085AA0(c); // 80084208
L_8008420C:;
  c->r[11]=c->r[1]+0x00000030u; // 8008420C
  c->lr=0x80084214u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084210
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084214
  c->lr=c->r[0]; // 80084218
  c->r[1]=c->r[1]+0x00000030u; // 8008421C
  return; // 80084220
}

// ISFS_Open
void f_80084230(Ctx* __restrict c) {
  trace_call(0x80084230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084230
  c->r[0]=c->lr; // 80084234
  cmps(c,0,(int32_t)c->r[3],0); // 80084238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008423C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80084240
  W32(c->r[1]+0x00000018u,c->r[30]); // 80084244
  c->r[30]=0u+0x00000000u; // 80084248
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008424C
  c->r[29]=c->r[4]|c->r[4]; // 80084250
  W32(c->r[1]+0x00000010u,c->r[28]); // 80084254
  c->r[28]=c->r[3]|c->r[3]; // 80084258
  if (crb(c,2)) { goto L_80084274; } // 8008425C
  c->r[4]=0u+0x00000040u; // 80084260
  c->lr=0x80084268u; f_800848F0(c); // 80084264
  cmpu(c,0,c->r[3],0x00000040u); // 80084268
  c->r[31]=c->r[3]|c->r[3]; // 8008426C
  if (!crb(c,2)) { goto L_8008427C; } // 80084270
L_80084274:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80084274
  goto L_800842BC; // 80084278
L_8008427C:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 8008427C
  c->r[4]=0u+0x00000140u; // 80084280
  c->r[5]=0u+0x00000020u; // 80084284
  c->lr=0x8008428Cu; f_80086680(c); // 80084288
  cmps(c,0,(int32_t)c->r[3],0); // 8008428C
  c->r[30]=c->r[3]|c->r[3]; // 80084290
  if (!crb(c,2)) { goto L_800842A0; } // 80084294
  c->r[31]=0u+0xFFFFFFEAu; // 80084298
  goto L_800842BC; // 8008429C
L_800842A0:;
  c->r[4]=c->r[28]|c->r[28]; // 800842A0
  c->r[5]=c->r[31]+0x00000001u; // 800842A4
  c->lr=0x800842ACu; f_800043C4(c); // 800842A8
  c->r[3]=c->r[30]|c->r[30]; // 800842AC
  c->r[4]=c->r[29]|c->r[29]; // 800842B0
  c->lr=0x800842B8u; f_80085210(c); // 800842B4
  c->r[31]=c->r[3]|c->r[3]; // 800842B8
L_800842BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800842BC
  if (crb(c,2)) { goto L_800842D4; } // 800842C0
  if (crb(c,2)) { goto L_800842D4; } // 800842C4
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800842C8
  c->r[4]=c->r[30]|c->r[30]; // 800842CC
  c->lr=0x800842D4u; f_80086690(c); // 800842D0
L_800842D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800842D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800842D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800842DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800842E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800842E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800842E8
  c->lr=c->r[0]; // 800842EC
  c->r[1]=c->r[1]+0x00000020u; // 800842F0
  return; // 800842F4
}

// fn_80084300
void f_80084300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084300
  c->r[0]=c->lr; // 80084304
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084308
  c->r[11]=c->r[1]+0x00000020u; // 8008430C
  c->lr=0x80084314u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084310
  cmps(c,0,(int32_t)c->r[3],0); // 80084314
  c->r[26]=c->r[3]|c->r[3]; // 80084318
  c->r[27]=c->r[4]|c->r[4]; // 8008431C
  c->r[28]=c->r[5]|c->r[5]; // 80084320
  c->r[29]=c->r[6]|c->r[6]; // 80084324
  if (crb(c,2)) { goto L_80084340; } // 80084328
  c->r[4]=0u+0x00000040u; // 8008432C
  c->lr=0x80084334u; f_800848F0(c); // 80084330
  cmpu(c,0,c->r[3],0x00000040u); // 80084334
  c->r[31]=c->r[3]|c->r[3]; // 80084338
  if (!crb(c,2)) { goto L_80084348; } // 8008433C
L_80084340:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084340
  goto L_800843A0; // 80084344
L_80084348:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084348
  c->r[4]=0u+0x00000140u; // 8008434C
  c->r[5]=0u+0x00000020u; // 80084350
  c->lr=0x80084358u; f_80086680(c); // 80084354
  cmps(c,0,(int32_t)c->r[3],0); // 80084358
  c->r[30]=c->r[3]|c->r[3]; // 8008435C
  if (!crb(c,2)) { goto L_8008436C; } // 80084360
  c->r[3]=0u+0xFFFFFF8Au; // 80084364
  goto L_800843A0; // 80084368
L_8008436C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8008436C
  c->r[0]=0u+0x00000000u; // 80084370
  c->r[4]=c->r[26]|c->r[26]; // 80084374
  c->r[5]=c->r[31]+0x00000001u; // 80084378
  W32(c->r[3]+0x00000104u,c->r[29]); // 8008437C
  W32(c->r[3]+0x00000108u,c->r[0]); // 80084380
  c->lr=0x80084388u; f_800043C4(c); // 80084384
  c->r[5]=0u+0x80080000u; // 80084388
  c->r[3]=c->r[30]|c->r[30]; // 8008438C
  c->r[4]=c->r[27]|c->r[27]; // 80084390
  c->r[6]=c->r[30]|c->r[30]; // 80084394
  c->r[5]=c->r[5]+0x00003250u; // 80084398
  c->lr=0x800843A0u; f_800850F0(c); // 8008439C
L_800843A0:;
  c->r[11]=c->r[1]+0x00000020u; // 800843A0
  c->lr=0x800843A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800843A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800843A8
  c->lr=c->r[0]; // 800843AC
  c->r[1]=c->r[1]+0x00000020u; // 800843B0
  return; // 800843B4
}

// ISFS_GetFileStats
void f_800843C0(Ctx* __restrict c) {
  trace_call(0x800843C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800843C0
  c->r[0]=c->lr; // 800843C4
  cmps(c,0,(int32_t)c->r[4],0); // 800843C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800843CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800843D0
  c->r[31]=c->r[3]|c->r[3]; // 800843D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800843D8
  c->r[30]=0u+0x00000000u; // 800843DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800843E0
  c->r[29]=c->r[4]|c->r[4]; // 800843E4
  if (crb(c,2)) { goto L_800843F4; } // 800843E8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800843EC
  if (crb(c,2)) { goto L_800843FC; } // 800843F0
L_800843F4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800843F4
  goto L_80084458; // 800843F8
L_800843FC:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800843FC
  c->r[4]=0u+0x00000140u; // 80084400
  c->r[5]=0u+0x00000020u; // 80084404
  c->lr=0x8008440Cu; f_80086680(c); // 80084408
  cmps(c,0,(int32_t)c->r[3],0); // 8008440C
  c->r[30]=c->r[3]|c->r[3]; // 80084410
  if (!crb(c,2)) { goto L_80084420; } // 80084414
  c->r[31]=0u+0xFFFFFFEAu; // 80084418
  goto L_80084458; // 8008441C
L_80084420:;
  c->r[3]=c->r[31]|c->r[31]; // 80084420
  c->r[7]=c->r[30]|c->r[30]; // 80084424
  c->r[4]=0u+0x0000000Bu; // 80084428
  c->r[5]=0u+0x00000000u; // 8008442C
  c->r[6]=0u+0x00000000u; // 80084430
  c->r[8]=0u+0x00000008u; // 80084434
  c->lr=0x8008443Cu; f_80085BE0(c); // 80084438
  cmps(c,0,(int32_t)c->r[3],0); // 8008443C
  c->r[31]=c->r[3]|c->r[3]; // 80084440
  if (!crb(c,2)) { goto L_80084458; } // 80084444
  c->r[3]=c->r[29]|c->r[29]; // 80084448
  c->r[4]=c->r[30]|c->r[30]; // 8008444C
  c->r[5]=0u+0x00000008u; // 80084450
  c->lr=0x80084458u; f_800043C4(c); // 80084454
L_80084458:;
  cmps(c,0,(int32_t)c->r[30],0); // 80084458
  if (crb(c,2)) { goto L_80084470; } // 8008445C
  if (crb(c,2)) { goto L_80084470; } // 80084460
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084464
  c->r[4]=c->r[30]|c->r[30]; // 80084468
  c->lr=0x80084470u; f_80086690(c); // 8008446C
L_80084470:;
  c->r[3]=c->r[31]|c->r[31]; // 80084470
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80084474
  c->r[30]=R32(c->r[1]+0x00000018u); // 80084478
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008447C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084480
  c->lr=c->r[0]; // 80084484
  c->r[1]=c->r[1]+0x00000020u; // 80084488
  return; // 8008448C
}

// fn_80084490
void f_80084490(Ctx* __restrict c) {
  f_800859B0(c); return; // 80084490
}

// fn_800844A0
void f_800844A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800844A0
  c->r[0]=c->lr; // 800844A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800844A8
  c->r[11]=c->r[1]+0x00000020u; // 800844AC
  c->lr=0x800844B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800844B0
  c->r[27]=c->r[3]|c->r[3]; // 800844B4
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 800844B8
  c->r[28]=c->r[4]|c->r[4]; // 800844BC
  c->r[29]=c->r[5]|c->r[5]; // 800844C0
  c->r[30]=c->r[6]|c->r[6]; // 800844C4
  c->r[31]=c->r[7]|c->r[7]; // 800844C8
  c->r[4]=0u+0x00000140u; // 800844CC
  c->r[5]=0u+0x00000020u; // 800844D0
  c->lr=0x800844D8u; f_80086680(c); // 800844D4
  cmps(c,0,(int32_t)c->r[3],0); // 800844D8
  if (!crb(c,2)) { goto L_800844E8; } // 800844DC
  c->r[3]=0u+0xFFFFFF8Au; // 800844E0
  goto L_80084514; // 800844E4
L_800844E8:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800844E8
  c->r[6]=0u+0x80080000u; // 800844EC
  c->r[0]=0u+0x00000000u; // 800844F0
  c->r[4]=c->r[28]|c->r[28]; // 800844F4
  W32(c->r[3]+0x00000104u,c->r[31]); // 800844F8
  c->r[5]=c->r[29]|c->r[29]; // 800844FC
  c->r[7]=c->r[3]|c->r[3]; // 80084500
  c->r[6]=c->r[6]+0x00003250u; // 80084504
  W32(c->r[3]+0x00000108u,c->r[0]); // 80084508
  c->r[3]=c->r[27]|c->r[27]; // 8008450C
  c->lr=0x80084514u; f_800858D0(c); // 80084510
L_80084514:;
  c->r[11]=c->r[1]+0x00000020u; // 80084514
  c->lr=0x8008451Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084518
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008451C
  c->lr=c->r[0]; // 80084520
  c->r[1]=c->r[1]+0x00000020u; // 80084524
  return; // 80084528
}

// fn_80084530
void f_80084530(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80084530
  if (crb(c,2)) { goto L_80084540; } // 80084534
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80084538
  if (crb(c,2)) { goto L_80084548; } // 8008453C
L_80084540:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084540
  return; // 80084544
L_80084548:;
  f_800855B0(c); return; // 80084548
}

// fn_8008454C
void f_8008454C(Ctx* __restrict c) {
  return; // 8008454C
}

// fn_80084550
void f_80084550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084550
  c->r[0]=c->lr; // 80084554
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084558
  c->r[11]=c->r[1]+0x00000020u; // 8008455C
  c->lr=0x80084564u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084560
  cmps(c,0,(int32_t)c->r[4],0); // 80084564
  c->r[27]=c->r[3]|c->r[3]; // 80084568
  c->r[28]=c->r[4]|c->r[4]; // 8008456C
  c->r[29]=c->r[5]|c->r[5]; // 80084570
  c->r[30]=c->r[6]|c->r[6]; // 80084574
  c->r[31]=c->r[7]|c->r[7]; // 80084578
  if (crb(c,2)) { goto L_80084588; } // 8008457C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80084580
  if (crb(c,2)) { goto L_80084590; } // 80084584
L_80084588:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084588
  goto L_800845DC; // 8008458C
L_80084590:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084590
  c->r[4]=0u+0x00000140u; // 80084594
  c->r[5]=0u+0x00000020u; // 80084598
  c->lr=0x800845A0u; f_80086680(c); // 8008459C
  cmps(c,0,(int32_t)c->r[3],0); // 800845A0
  if (!crb(c,2)) { goto L_800845B0; } // 800845A4
  c->r[3]=0u+0xFFFFFF8Au; // 800845A8
  goto L_800845DC; // 800845AC
L_800845B0:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800845B0
  c->r[6]=0u+0x80080000u; // 800845B4
  c->r[0]=0u+0x00000000u; // 800845B8
  c->r[4]=c->r[28]|c->r[28]; // 800845BC
  W32(c->r[3]+0x00000104u,c->r[31]); // 800845C0
  c->r[5]=c->r[29]|c->r[29]; // 800845C4
  c->r[7]=c->r[3]|c->r[3]; // 800845C8
  c->r[6]=c->r[6]+0x00003250u; // 800845CC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800845D0
  c->r[3]=c->r[27]|c->r[27]; // 800845D4
  c->lr=0x800845DCu; f_800854B0(c); // 800845D8
L_800845DC:;
  c->r[11]=c->r[1]+0x00000020u; // 800845DC
  c->lr=0x800845E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800845E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800845E4
  c->lr=c->r[0]; // 800845E8
  c->r[1]=c->r[1]+0x00000020u; // 800845EC
  return; // 800845F0
}

// fn_80084600
void f_80084600(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80084600
  if (crb(c,2)) { goto L_80084610; } // 80084604
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80084608
  if (crb(c,2)) { goto L_80084618; } // 8008460C
L_80084610:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084610
  return; // 80084614
L_80084618:;
  f_800857C0(c); return; // 80084618
}

// fn_8008461C
void f_8008461C(Ctx* __restrict c) {
  return; // 8008461C
}

// fn_80084620
void f_80084620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084620
  c->r[0]=c->lr; // 80084624
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084628
  c->r[11]=c->r[1]+0x00000020u; // 8008462C
  c->lr=0x80084634u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084630
  cmps(c,0,(int32_t)c->r[4],0); // 80084634
  c->r[27]=c->r[3]|c->r[3]; // 80084638
  c->r[28]=c->r[4]|c->r[4]; // 8008463C
  c->r[29]=c->r[5]|c->r[5]; // 80084640
  c->r[30]=c->r[6]|c->r[6]; // 80084644
  c->r[31]=c->r[7]|c->r[7]; // 80084648
  if (crb(c,2)) { goto L_80084658; } // 8008464C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80084650
  if (crb(c,2)) { goto L_80084660; } // 80084654
L_80084658:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80084658
  goto L_800846AC; // 8008465C
L_80084660:;
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084660
  c->r[4]=0u+0x00000140u; // 80084664
  c->r[5]=0u+0x00000020u; // 80084668
  c->lr=0x80084670u; f_80086680(c); // 8008466C
  cmps(c,0,(int32_t)c->r[3],0); // 80084670
  if (!crb(c,2)) { goto L_80084680; } // 80084674
  c->r[3]=0u+0xFFFFFF8Au; // 80084678
  goto L_800846AC; // 8008467C
L_80084680:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80084680
  c->r[6]=0u+0x80080000u; // 80084684
  c->r[0]=0u+0x00000000u; // 80084688
  c->r[4]=c->r[28]|c->r[28]; // 8008468C
  W32(c->r[3]+0x00000104u,c->r[31]); // 80084690
  c->r[5]=c->r[29]|c->r[29]; // 80084694
  c->r[7]=c->r[3]|c->r[3]; // 80084698
  c->r[6]=c->r[6]+0x00003250u; // 8008469C
  W32(c->r[3]+0x00000108u,c->r[0]); // 800846A0
  c->r[3]=c->r[27]|c->r[27]; // 800846A4
  c->lr=0x800846ACu; f_800856C0(c); // 800846A8
L_800846AC:;
  c->r[11]=c->r[1]+0x00000020u; // 800846AC
  c->lr=0x800846B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800846B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800846B4
  c->lr=c->r[0]; // 800846B8
  c->r[1]=c->r[1]+0x00000020u; // 800846BC
  return; // 800846C0
}

// ISFS_Close
void f_800846D0(Ctx* __restrict c) {
  trace_call(0x800846D0u);
  f_80085400(c); return; // 800846D0
}

// ISFS_CloseAsync
void f_800846E0(Ctx* __restrict c) {
  trace_call(0x800846E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800846E0
  c->r[0]=c->lr; // 800846E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800846E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800846EC
  c->r[31]=c->r[5]|c->r[5]; // 800846F0
  c->r[5]=0u+0x00000020u; // 800846F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800846F8
  c->r[30]=c->r[4]|c->r[4]; // 800846FC
  c->r[4]=0u+0x00000140u; // 80084700
  W32(c->r[1]+0x00000014u,c->r[29]); // 80084704
  c->r[29]=c->r[3]|c->r[3]; // 80084708
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 8008470C
  c->lr=0x80084714u; f_80086680(c); // 80084710
  cmps(c,0,(int32_t)c->r[3],0); // 80084714
  if (!crb(c,2)) { goto L_80084724; } // 80084718
  c->r[3]=0u+0xFFFFFF8Au; // 8008471C
  goto L_80084748; // 80084720
L_80084724:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80084724
  c->r[4]=0u+0x80080000u; // 80084728
  c->r[0]=0u+0x00000000u; // 8008472C
  c->r[5]=c->r[3]|c->r[3]; // 80084730
  W32(c->r[3]+0x00000104u,c->r[31]); // 80084734
  c->r[4]=c->r[4]+0x00003250u; // 80084738
  W32(c->r[3]+0x00000108u,c->r[0]); // 8008473C
  c->r[3]=c->r[29]|c->r[29]; // 80084740
  c->lr=0x80084748u; f_80085340(c); // 80084744
L_80084748:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008474C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80084750
  c->r[29]=R32(c->r[1]+0x00000014u); // 80084754
  c->lr=c->r[0]; // 80084758
  c->r[1]=c->r[1]+0x00000020u; // 8008475C
  return; // 80084760
}

// ISFS_ShutdownAsync
void f_80084770(Ctx* __restrict c) {
  trace_call(0x80084770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084770
  c->r[0]=c->lr; // 80084774
  c->r[5]=0u+0x00000020u; // 80084778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008477C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80084780
  c->r[31]=c->r[4]|c->r[4]; // 80084784
  c->r[4]=0u+0x00000140u; // 80084788
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008478C
  c->r[30]=c->r[3]|c->r[3]; // 80084790
  c->r[3]=R32(c->r[13]+0xFFFF915Cu); // 80084794
  c->lr=0x8008479Cu; f_80086680(c); // 80084798
  c->r[0]=R32(c->r[13]+0xFFFF82D0u); // 8008479C
  cmps(c,0,(int32_t)c->r[0],0); // 800847A0
  if (!crb(c,0)) { goto L_800847B0; } // 800847A4
  c->r[3]=0u+0xFFFFFF9Bu; // 800847A8
  goto L_800847E8; // 800847AC
L_800847B0:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800847B0
  c->r[9]=0u+0x80080000u; // 800847B4
  c->r[0]=0u+0x00000000u; // 800847B8
  c->r[10]=c->r[3]|c->r[3]; // 800847BC
  W32(c->r[3]+0x00000104u,c->r[31]); // 800847C0
  c->r[9]=c->r[9]+0x00003250u; // 800847C4
  c->r[4]=0u+0x0000000Du; // 800847C8
  c->r[5]=0u+0x00000000u; // 800847CC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800847D0
  c->r[6]=0u+0x00000000u; // 800847D4
  c->r[7]=0u+0x00000000u; // 800847D8
  c->r[8]=0u+0x00000000u; // 800847DC
  c->r[3]=R32(c->r[13]+0xFFFF82D0u); // 800847E0
  c->lr=0x800847E8u; f_80085AA0(c); // 800847E4
L_800847E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800847E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800847EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800847F0
  c->lr=c->r[0]; // 800847F4
  c->r[1]=c->r[1]+0x00000010u; // 800847F8
  return; // 800847FC
}

// IPCInit
void f_80084800(Ctx* __restrict c) {
  trace_call(0x80084800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084800
  c->r[0]=c->lr; // 80084804
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084808
  c->r[0]=R8(c->r[13]+0xFFFF9160u); // 8008480C
  cmps(c,0,(int32_t)c->r[0],0); // 80084810
  if (!crb(c,2)) { goto L_8008483C; } // 80084814
  c->lr=0x8008481Cu; f_8004E120(c); // 80084818
  W32(c->r[13]+0xFFFF9170u,c->r[3]); // 8008481C
  c->lr=0x80084824u; f_8004E130(c); // 80084820
  c->r[4]=R32(c->r[13]+0xFFFF9170u); // 80084824
  c->r[0]=0u+0x00000001u; // 80084828
  W32(c->r[13]+0xFFFF916Cu,c->r[3]); // 8008482C
  W32(c->r[13]+0xFFFF9168u,c->r[4]); // 80084830
  W32(c->r[13]+0xFFFF9164u,c->r[3]); // 80084834
  W8(c->r[13]+0xFFFF9160u,c->r[0]); // 80084838
L_8008483C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008483C
  c->lr=c->r[0]; // 80084840
  c->r[1]=c->r[1]+0x00000010u; // 80084844
  return; // 80084848
}

// IPCReInit
void f_80084850(Ctx* __restrict c) {
  trace_call(0x80084850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084850
  c->r[0]=c->lr; // 80084854
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084858
  c->r[0]=0u+0x00000000u; // 8008485C
  W8(c->r[13]+0xFFFF9160u,c->r[0]); // 80084860
  c->lr=0x80084868u; f_8004E120(c); // 80084864
  W32(c->r[13]+0xFFFF9170u,c->r[3]); // 80084868
  c->lr=0x80084870u; f_8004E130(c); // 8008486C
  c->r[4]=R32(c->r[13]+0xFFFF9170u); // 80084870
  c->r[0]=0u+0x00000001u; // 80084874
  W32(c->r[13]+0xFFFF916Cu,c->r[3]); // 80084878
  W32(c->r[13]+0xFFFF9168u,c->r[4]); // 8008487C
  W32(c->r[13]+0xFFFF9164u,c->r[3]); // 80084880
  W8(c->r[13]+0xFFFF9160u,c->r[0]); // 80084884
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084888
  c->lr=c->r[0]; // 8008488C
  c->r[1]=c->r[1]+0x00000010u; // 80084890
  return; // 80084894
}

// IPCReadReg
void f_800848A0(Ctx* __restrict c) {
  trace_call(0x800848A0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800848A0
  c->r[3]=0u+0xCD000000u; // 800848A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800848A8
  return; // 800848AC
}

// IPCWriteReg
void f_800848B0(Ctx* __restrict c) {
  trace_call(0x800848B0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800848B0
  c->r[3]=0u+0xCD000000u; // 800848B4
  W32(c->r[3]+c->r[0],c->r[4]); // 800848B8
  return; // 800848BC
}

// IPCGetBufferHi
void f_800848C0(Ctx* __restrict c) {
  trace_call(0x800848C0u);
  c->r[3]=R32(c->r[13]+0xFFFF9168u); // 800848C0
  return; // 800848C4
}

// IPCGetBufferLo
void f_800848D0(Ctx* __restrict c) {
  trace_call(0x800848D0u);
  c->r[3]=R32(c->r[13]+0xFFFF9164u); // 800848D0
  return; // 800848D4
}

// IPCSetBufferLo
void f_800848E0(Ctx* __restrict c) {
  trace_call(0x800848E0u);
  W32(c->r[13]+0xFFFF9164u,c->r[3]); // 800848E0
  return; // 800848E4
}

// strnlen
void f_800848F0(Ctx* __restrict c) {
  trace_call(0x800848F0u);
  c->r[5]=c->r[3]|c->r[3]; // 800848F0
  goto L_800848FC; // 800848F4
L_800848F8:;
  c->r[5]=c->r[5]+0x00000001u; // 800848F8
L_800848FC:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800848FC
  cmps(c,0,(int32_t)c->r[0],0); // 80084900
  if (crb(c,2)) { goto L_80084914; } // 80084904
  cmps(c,0,(int32_t)c->r[4],0); // 80084908
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8008490C
  if (!crb(c,2)) { IRQCHK(c); goto L_800848F8; } // 80084910
L_80084914:;
  c->r[3]=c->r[5]-c->r[3]; // 80084914
  return; // 80084918
}

// IpcReplyHandler
void f_80084920(Ctx* __restrict c) {
  trace_call(0x80084920u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084920
  c->r[0]=c->lr; // 80084924
  c->r[3]=0u+0x00000002u; // 80084928
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8008492C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80084930
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80084934
  c->r[30]=c->r[4]|c->r[4]; // 80084938
  W32(c->r[1]+0x000002D4u,c->r[29]); // 8008493C
  W32(c->r[1]+0x000002D0u,c->r[28]); // 80084940
  c->lr=0x80084948u; f_800848A0(c); // 80084944
  cmps(c,0,(int32_t)c->r[3],0); // 80084948
  if (crb(c,2)) { goto L_80084B58; } // 8008494C
  c->r[31]=c->r[3]+0x80000000u; // 80084950
  c->r[3]=0u+0x00000001u; // 80084954
  c->lr=0x8008495Cu; f_800848A0(c); // 80084958
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8008495C
  c->r[3]=0u+0x00000001u; // 80084960
  c->r[4]=c->r[0]|0x00000004u; // 80084964
  c->lr=0x8008496Cu; f_800848B0(c); // 80084968
  c->r[3]=0u+0xCD000000u; // 8008496C
  c->r[0]=0u+0x40000000u; // 80084970
  W32(c->r[3]+0x00000030u,c->r[0]); // 80084974
  c->r[3]=c->r[31]|c->r[31]; // 80084978
  c->r[4]=0u+0x00000020u; // 8008497C
  c->lr=0x80084984u; f_80044FE0(c); // 80084980
  c->r[0]=R32(c->r[31]+0x00000008u); // 80084984
  cmps(c,0,(int32_t)c->r[0],6); // 80084988
  if (crb(c,2)) { goto L_800849E0; } // 8008498C
  if (!crb(c,0)) { goto L_800849A0; } // 80084990
  cmps(c,0,(int32_t)c->r[0],3); // 80084994
  if (crb(c,2)) { goto L_800849AC; } // 80084998
  goto L_80084ADC; // 8008499C
L_800849A0:;
  cmps(c,0,(int32_t)c->r[0],8); // 800849A0
  if (!crb(c,0)) { goto L_80084ADC; } // 800849A4
  goto L_80084A18; // 800849A8
L_800849AC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800849AC
  cmps(c,0,(int32_t)c->r[3],0); // 800849B0
  if (crb(c,2)) { goto L_800849C0; } // 800849B4
  c->r[0]=c->r[3]+0x80000000u; // 800849B8
  goto L_800849C4; // 800849BC
L_800849C0:;
  c->r[0]=0u+0x00000000u; // 800849C0
L_800849C4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800849C4
  c->r[4]=R32(c->r[31]+0x00000004u); // 800849C8
  cmps(c,0,(int32_t)c->r[4],0); // 800849CC
  if (!crb(c,1)) { goto L_80084ADC; } // 800849D0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800849D4
  c->lr=0x800849DCu; f_80044FE0(c); // 800849D8
  goto L_80084ADC; // 800849DC
L_800849E0:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800849E0
  cmps(c,0,(int32_t)c->r[3],0); // 800849E4
  if (crb(c,2)) { goto L_800849F4; } // 800849E8
  c->r[0]=c->r[3]+0x80000000u; // 800849EC
  goto L_800849F8; // 800849F0
L_800849F4:;
  c->r[0]=0u+0x00000000u; // 800849F4
L_800849F8:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 800849F8
  c->r[3]=R32(c->r[31]+0x00000010u); // 800849FC
  c->r[4]=R32(c->r[31]+0x00000014u); // 80084A00
  c->lr=0x80084A08u; f_80044FE0(c); // 80084A04
  c->r[3]=R32(c->r[31]+0x00000018u); // 80084A08
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80084A0C
  c->lr=0x80084A14u; f_80044FE0(c); // 80084A10
  goto L_80084ADC; // 80084A14
L_80084A18:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80084A18
  cmps(c,0,(int32_t)c->r[3],0); // 80084A1C
  if (crb(c,2)) { goto L_80084A2C; } // 80084A20
  c->r[3]=c->r[3]+0x80000000u; // 80084A24
  goto L_80084A30; // 80084A28
L_80084A2C:;
  c->r[3]=0u+0x00000000u; // 80084A2C
L_80084A30:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 80084A30
  c->r[4]=R32(c->r[31]+0x00000010u); // 80084A34
  c->r[0]=R32(c->r[31]+0x00000014u); // 80084A38
  c->r[0]=c->r[4]+c->r[0]; // 80084A3C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80084A40
  c->lr=0x80084A48u; f_80044FE0(c); // 80084A44
  c->r[28]=0u+0x00000000u; // 80084A48
  c->r[29]=0u+0x00000000u; // 80084A4C
  goto L_80084A94; // 80084A50
L_80084A54:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80084A54
  c->r[3]=R32(c->r[3]+c->r[29]); // 80084A58
  cmps(c,0,(int32_t)c->r[3],0); // 80084A5C
  if (crb(c,2)) { goto L_80084A6C; } // 80084A60
  c->r[0]=c->r[3]+0x80000000u; // 80084A64
  goto L_80084A70; // 80084A68
L_80084A6C:;
  c->r[0]=0u+0x00000000u; // 80084A6C
L_80084A70:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80084A70
  W32(c->r[3]+c->r[29],c->r[0]); // 80084A74
  c->r[3]=R32(c->r[31]+0x00000018u); // 80084A78
  c->r[4]=c->r[3]+c->r[29]; // 80084A7C
  c->r[3]=R32(c->r[3]+c->r[29]); // 80084A80
  c->r[4]=R32(c->r[4]+0x00000004u); // 80084A84
  c->lr=0x80084A8Cu; f_80044FE0(c); // 80084A88
  c->r[28]=c->r[28]+0x00000001u; // 80084A8C
  c->r[29]=c->r[29]+0x00000008u; // 80084A90
L_80084A94:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80084A94
  c->r[0]=R32(c->r[31]+0x00000014u); // 80084A98
  c->r[0]=c->r[3]+c->r[0]; // 80084A9C
  cmpu(c,0,c->r[28],c->r[0]); // 80084AA0
  if (crb(c,0)) { IRQCHK(c); goto L_80084A54; } // 80084AA4
  c->r[0]=R32(c->r[13]+0xFFFF9178u); // 80084AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80084AAC
  if (crb(c,2)) { goto L_80084ADC; } // 80084AB0
  c->r[0]=R32(c->r[13]+0xFFFF9180u); // 80084AB4
  cmpu(c,0,c->r[0],c->r[31]); // 80084AB8
  if (!crb(c,2)) { goto L_80084ADC; } // 80084ABC
  c->r[3]=R32(c->r[13]+0xFFFF82E0u); // 80084AC0
  c->r[0]=0u+0x00000000u; // 80084AC4
  W32(c->r[13]+0xFFFF9178u,c->r[0]); // 80084AC8
  cmps(c,0,(int32_t)c->r[3],1); // 80084ACC
  if (!crb(c,0)) { goto L_80084ADC; } // 80084AD0
  c->r[0]=c->r[3]+0x00000001u; // 80084AD4
  W32(c->r[13]+0xFFFF82E0u,c->r[0]); // 80084AD8
L_80084ADC:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 80084ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80084AE0
  if (crb(c,2)) { goto L_80084B2C; } // 80084AE4
  c->r[3]=c->r[1]+0x00000008u; // 80084AE8
  c->lr=0x80084AF0u; f_80045860(c); // 80084AEC
  c->r[3]=c->r[1]+0x00000008u; // 80084AF0
  c->lr=0x80084AF8u; f_80045620(c); // 80084AF4
  c->r[12]=R32(c->r[31]+0x00000020u); // 80084AF8
  c->r[3]=R32(c->r[31]+0x00000004u); // 80084AFC
  c->r[4]=R32(c->r[31]+0x00000024u); // 80084B00
  c->ctr=c->r[12]; // 80084B04
  if (true) { c->lr=0x80084B0Cu; dispatch(c,c->ctr); } // 80084B08
  c->r[3]=c->r[1]+0x00000008u; // 80084B0C
  c->lr=0x80084B14u; f_80045860(c); // 80084B10
  c->r[3]=c->r[30]|c->r[30]; // 80084B14
  c->lr=0x80084B1Cu; f_80045620(c); // 80084B18
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80084B1C
  c->r[4]=c->r[31]|c->r[31]; // 80084B20
  c->lr=0x80084B28u; f_80086690(c); // 80084B24
  goto L_80084B34; // 80084B28
L_80084B2C:;
  c->r[3]=c->r[31]+0x0000002Cu; // 80084B2C
  c->lr=0x80084B34u; f_8004D870(c); // 80084B30
L_80084B34:;
  c->r[3]=0u+0x00000001u; // 80084B34
  c->lr=0x80084B3Cu; f_800848A0(c); // 80084B38
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80084B3C
  c->r[3]=0u+0x00000001u; // 80084B40
  c->r[4]=c->r[0]|0x00000008u; // 80084B44
  c->lr=0x80084B4Cu; f_800848B0(c); // 80084B48
  c->r[4]=R32(c->r[31]+0x00000008u); // 80084B4C
  c->r[3]=c->r[31]|c->r[31]; // 80084B50
  c->lr=0x80084B58u; f_80086A00(c); // 80084B54
L_80084B58:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80084B58
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80084B5C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80084B60
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80084B64
  c->r[28]=R32(c->r[1]+0x000002D0u); // 80084B68
  c->lr=c->r[0]; // 80084B6C
  c->r[1]=c->r[1]+0x000002E0u; // 80084B70
  return; // 80084B74
}

// fn_80084B80
void f_80084B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084B80
  c->r[0]=c->lr; // 80084B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80084B8C
  c->r[31]=c->r[4]|c->r[4]; // 80084B90
  W32(c->r[1]+0x00000008u,c->r[30]); // 80084B94
  c->r[30]=c->r[3]|c->r[3]; // 80084B98
  c->r[3]=0u+0x00000001u; // 80084B9C
  c->lr=0x80084BA4u; f_800848A0(c); // 80084BA0
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 80084BA4
  cmpu(c,0,c->r[0],0x00000014u); // 80084BA8
  if (!crb(c,2)) { goto L_80084BBC; } // 80084BAC
  c->r[3]=c->r[30]|c->r[30]; // 80084BB0
  c->r[4]=c->r[31]|c->r[31]; // 80084BB4
  c->lr=0x80084BBCu; f_80084920(c); // 80084BB8
L_80084BBC:;
  c->r[3]=0u+0x00000001u; // 80084BBC
  c->lr=0x80084BC4u; f_800848A0(c); // 80084BC0
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 80084BC4
  cmpu(c,0,c->r[0],0x00000022u); // 80084BC8
  if (!crb(c,2)) { goto L_80084D28; } // 80084BCC
  c->r[3]=0u+0x00000001u; // 80084BD0
  c->lr=0x80084BD8u; f_800848A0(c); // 80084BD4
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80084BD8
  c->r[3]=0u+0x00000001u; // 80084BDC
  c->r[4]=c->r[0]|0x00000002u; // 80084BE0
  c->lr=0x80084BE8u; f_800848B0(c); // 80084BE4
  c->r[3]=0u+0xCD000000u; // 80084BE8
  c->r[0]=0u+0x40000000u; // 80084BEC
  W32(c->r[3]+0x00000030u,c->r[0]); // 80084BF0
  c->r[31]=R32(c->r[13]+0xFFFF82E0u); // 80084BF4
  cmps(c,0,(int32_t)c->r[31],1); // 80084BF8
  if (!crb(c,0)) { goto L_80084C0C; } // 80084BFC
  c->r[31]=c->r[31]+0x00000001u; // 80084C00
  W32(c->r[13]+0xFFFF82E0u,c->r[31]); // 80084C04
  c->lr=0x80084C0Cu; f_800869F0(c); // 80084C08
L_80084C0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80084C0C
  if (!crb(c,1)) { goto L_80084D28; } // 80084C10
  c->r[0]=R32(c->r[13]+0xFFFF9178u); // 80084C14
  cmps(c,0,(int32_t)c->r[0],0); // 80084C18
  if (crb(c,2)) { goto L_80084C54; } // 80084C1C
  c->r[3]=R32(c->r[13]+0xFFFF917Cu); // 80084C20
  c->r[0]=0u+0x00000000u; // 80084C24
  W32(c->r[3]+0x00000004u,c->r[0]); // 80084C28
  c->r[3]=R32(c->r[13]+0xFFFF917Cu); // 80084C2C
  W32(c->r[13]+0xFFFF9178u,c->r[0]); // 80084C30
  c->r[3]=c->r[3]+0x0000002Cu; // 80084C34
  c->lr=0x80084C3Cu; f_8004D870(c); // 80084C38
  c->r[3]=0u+0x00000001u; // 80084C3C
  c->lr=0x80084C44u; f_800848A0(c); // 80084C40
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80084C44
  c->r[3]=0u+0x00000001u; // 80084C48
  c->r[4]=c->r[0]|0x00000008u; // 80084C4C
  c->lr=0x80084C54u; f_800848B0(c); // 80084C50
L_80084C54:;
  c->r[4]=0u+0x801C0000u; // 80084C54
  c->r[3]=c->r[4]+0xFFFF9960u; // 80084C58
  c->r[4]=R32(c->r[4]+0xFFFF9960u); // 80084C5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80084C60
  cmpu(c,0,c->r[0],c->r[4]); // 80084C64
  if (!crb(c,0)) { goto L_80084C74; } // 80084C68
  c->r[0]=c->r[0]-c->r[4]; // 80084C6C
  goto L_80084C80; // 80084C70
L_80084C74:;
  c->r[0]=c->r[0]-c->r[4]; // 80084C74
  c->r[0]=cntlz(c->r[0]); // 80084C78
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80084C7C
L_80084C80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80084C80
  if (!crb(c,2)) { goto L_80084D28; } // 80084C84
  c->r[3]=0u+0x801C0000u; // 80084C88
  c->r[3]=c->r[3]+0xFFFF9960u; // 80084C8C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80084C90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80084C94
  c->r[3]=c->r[3]+c->r[0]; // 80084C98
  c->r[4]=R32(c->r[3]+0x00000010u); // 80084C9C
  cmps(c,0,(int32_t)c->r[4],0); // 80084CA0
  if (crb(c,2)) { goto L_80084D28; } // 80084CA4
  c->r[0]=R32(c->r[4]+0x00000028u); // 80084CA8
  cmps(c,0,(int32_t)c->r[0],0); // 80084CAC
  if (crb(c,2)) { goto L_80084CC0; } // 80084CB0
  c->r[3]=R32(c->r[13]+0xFFFF82E0u); // 80084CB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80084CB8
  W32(c->r[13]+0xFFFF82E0u,c->r[0]); // 80084CBC
L_80084CC0:;
  c->r[4]=c->r[4]+0x80000000u; // 80084CC0
  c->r[3]=0u+0x00000000u; // 80084CC4
  c->lr=0x80084CCCu; f_800848B0(c); // 80084CC8
  c->r[8]=0u+0x801C0000u; // 80084CCC
  c->r[3]=0u+0xAAAB0000u; // 80084CD0
  c->r[7]=c->r[8]+0xFFFF9960u; // 80084CD4
  c->r[4]=R32(c->r[8]+0xFFFF9960u); // 80084CD8
  c->r[6]=R32(c->r[7]+0x00000008u); // 80084CDC
  c->r[5]=c->r[3]+0xFFFFAAABu; // 80084CE0
  c->r[0]=c->r[4]+0x00000001u; // 80084CE4
  c->r[3]=R32(c->r[13]+0xFFFF82E0u); // 80084CE8
  c->r[6]=c->r[6]+0x00000001u; // 80084CEC
  W32(c->r[8]+0xFFFF9960u,c->r[0]); // 80084CF0
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 80084CF4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80084CF8
  W32(c->r[13]+0xFFFF82E0u,c->r[0]); // 80084CFC
  c->r[3]=0u+0x00000001u; // 80084D00
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80084D04
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80084D08
  c->r[0]=c->r[6]-c->r[0]; // 80084D0C
  W32(c->r[7]+0x00000008u,c->r[0]); // 80084D10
  c->lr=0x80084D18u; f_800848A0(c); // 80084D14
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80084D18
  c->r[3]=0u+0x00000001u; // 80084D1C
  c->r[4]=c->r[0]|0x00000001u; // 80084D20
  c->lr=0x80084D28u; f_800848B0(c); // 80084D24
L_80084D28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80084D2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80084D30
  c->lr=c->r[0]; // 80084D34
  c->r[1]=c->r[1]+0x00000010u; // 80084D38
  return; // 80084D3C
}

// IPCCltInit
void f_80084D40(Ctx* __restrict c) {
  trace_call(0x80084D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084D40
  c->r[0]=c->lr; // 80084D44
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084D48
  c->r[0]=R32(c->r[13]+0xFFFF9184u); // 80084D4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80084D50
  cmps(c,0,(int32_t)c->r[0],0); // 80084D54
  W32(c->r[1]+0x00000018u,c->r[30]); // 80084D58
  c->r[30]=0u+0x00000000u; // 80084D5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80084D60
  if (!crb(c,2)) { goto L_80084DE0; } // 80084D64
  c->r[0]=0u+0x00000001u; // 80084D68
  W32(c->r[13]+0xFFFF9184u,c->r[0]); // 80084D6C
  c->lr=0x80084D74u; f_80084800(c); // 80084D70
  c->lr=0x80084D78u; f_800848D0(c); // 80084D74
  c->r[29]=c->r[3]|c->r[3]; // 80084D78
  c->r[31]=c->r[3]+0x00002000u; // 80084D7C
  c->lr=0x80084D84u; f_800848C0(c); // 80084D80
  cmpu(c,0,c->r[31],c->r[3]); // 80084D84
  if (!crb(c,1)) { goto L_80084D94; } // 80084D88
  c->r[30]=0u+0xFFFFFFEAu; // 80084D8C
  goto L_80084DE0; // 80084D90
L_80084D94:;
  c->r[3]=c->r[29]|c->r[29]; // 80084D94
  c->r[4]=0u+0x00002000u; // 80084D98
  c->lr=0x80084DA0u; f_80086350(c); // 80084D9C
  W32(c->r[13]+0xFFFF82E4u,c->r[3]); // 80084DA0
  c->r[3]=c->r[31]|c->r[31]; // 80084DA4
  c->lr=0x80084DACu; f_800848E0(c); // 80084DA8
  c->r[4]=0u+0x80080000u; // 80084DAC
  c->r[3]=0u+0x0000001Bu; // 80084DB0
  c->r[4]=c->r[4]+0x00004B80u; // 80084DB4
  c->lr=0x80084DBCu; f_80049A90(c); // 80084DB8
  c->r[3]=0u+0x00000010u; // 80084DBC
  c->lr=0x80084DC4u; f_80049E70(c); // 80084DC0
  c->r[3]=0u+0x00000001u; // 80084DC4
  c->r[4]=0u+0x00000038u; // 80084DC8
  c->lr=0x80084DD0u; f_800848B0(c); // 80084DCC
  c->lr=0x80084DD4u; f_80086880(c); // 80084DD0
  c->r[3]=0u+0x801C0000u; // 80084DD4
  c->r[3]=c->r[3]+0xFFFF9A30u; // 80084DD8
  c->lr=0x80084DE0u; f_80043E70(c); // 80084DDC
L_80084DE0:;
  c->r[3]=c->r[30]|c->r[30]; // 80084DE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80084DE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80084DE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80084DEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084DF0
  c->lr=c->r[0]; // 80084DF4
  c->r[1]=c->r[1]+0x00000020u; // 80084DF8
  return; // 80084DFC
}

// IPCCltReInit
void f_80084E00(Ctx* __restrict c) {
  trace_call(0x80084E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084E00
  c->r[0]=c->lr; // 80084E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084E08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80084E0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80084E10
  c->r[30]=0u+0x00000000u; // 80084E14
  W32(c->r[1]+0x00000014u,c->r[29]); // 80084E18
  c->lr=0x80084E20u; f_800848D0(c); // 80084E1C
  c->r[29]=c->r[3]|c->r[3]; // 80084E20
  c->r[31]=c->r[3]+0x00001000u; // 80084E24
  c->lr=0x80084E2Cu; f_800848C0(c); // 80084E28
  cmpu(c,0,c->r[31],c->r[3]); // 80084E2C
  if (!crb(c,1)) { goto L_80084E3C; } // 80084E30
  c->r[30]=0u+0xFFFFFFEAu; // 80084E34
  goto L_80084E54; // 80084E38
L_80084E3C:;
  c->r[3]=c->r[29]|c->r[29]; // 80084E3C
  c->r[4]=0u+0x00001000u; // 80084E40
  c->lr=0x80084E48u; f_80086350(c); // 80084E44
  W32(c->r[13]+0xFFFF82E4u,c->r[3]); // 80084E48
  c->r[3]=c->r[31]|c->r[31]; // 80084E4C
  c->lr=0x80084E54u; f_800848E0(c); // 80084E50
L_80084E54:;
  c->r[3]=c->r[30]|c->r[30]; // 80084E54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80084E58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80084E5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80084E60
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084E64
  c->lr=c->r[0]; // 80084E68
  c->r[1]=c->r[1]+0x00000020u; // 80084E6C
  return; // 80084E70
}

void hle___ios_Ipc2(Ctx*);
// __ios_Ipc2
void f_80084E80(Ctx* __restrict c) {
  hle___ios_Ipc2(c);
}

// fn_800850F0
void f_800850F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800850F0
  c->r[0]=c->lr; // 800850F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800850F8
  c->r[11]=c->r[1]+0x00000030u; // 800850FC
  c->lr=0x80085104u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085100
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80085104
  c->r[27]=c->r[3]|c->r[3]; // 80085108
  c->r[28]=c->r[4]|c->r[4]; // 8008510C
  c->r[29]=c->r[5]|c->r[5]; // 80085110
  c->r[31]=c->r[6]|c->r[6]; // 80085114
  c->r[30]=0u+0x00000000u; // 80085118
  if (!crb(c,2)) { goto L_80085128; } // 8008511C
  c->r[30]=0u+0xFFFFFFFCu; // 80085120
  goto L_80085170; // 80085124
L_80085128:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085128
  c->r[4]=0u+0x00000040u; // 8008512C
  c->r[5]=0u+0x00000020u; // 80085130
  c->lr=0x80085138u; f_80086680(c); // 80085134
  cmps(c,0,(int32_t)c->r[3],0); // 80085138
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008513C
  if (!crb(c,2)) { goto L_8008514C; } // 80085140
  c->r[30]=0u+0xFFFFFFEAu; // 80085144
  goto L_80085170; // 80085148
L_8008514C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8008514C
  c->r[5]=0u+0x00000000u; // 80085150
  c->r[0]=0u+0x00000001u; // 80085154
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085158
  W32(c->r[4]+0x00000024u,c->r[31]); // 8008515C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085160
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085164
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085168
  W32(c->r[3]+0x00000008u,c->r[5]); // 8008516C
L_80085170:;
  cmps(c,0,(int32_t)c->r[30],0); // 80085170
  if (!crb(c,2)) { goto L_800851F0; } // 80085174
  c->r[31]=R32(c->r[1]+0x00000008u); // 80085178
  c->r[30]=0u+0x00000000u; // 8008517C
  cmps(c,0,(int32_t)c->r[31],0); // 80085180
  if (!crb(c,2)) { goto L_80085190; } // 80085184
  c->r[30]=0u+0xFFFFFFFCu; // 80085188
  goto L_800851D8; // 8008518C
L_80085190:;
  c->r[3]=c->r[27]|c->r[27]; // 80085190
  c->r[4]=0u+0x00000040u; // 80085194
  goto L_800851A4; // 80085198
  c->r[0]=c->r[0]|0x00000000u; // 8008519C
L_800851A0:;
  c->r[3]=c->r[3]+0x00000001u; // 800851A0
L_800851A4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800851A4
  cmps(c,0,(int32_t)c->r[0],0); // 800851A8
  if (crb(c,2)) { goto L_800851BC; } // 800851AC
  cmps(c,0,(int32_t)c->r[4],0); // 800851B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800851B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800851A0; } // 800851B8
L_800851BC:;
  c->r[4]=c->r[3]-c->r[27]; // 800851BC
  c->r[3]=c->r[27]|c->r[27]; // 800851C0
  c->r[4]=c->r[4]+0x00000001u; // 800851C4
  c->lr=0x800851CCu; f_80045010(c); // 800851C8
  c->r[0]=c->r[27]+0x80000000u; // 800851CC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800851D0
  W32(c->r[31]+0x00000010u,c->r[28]); // 800851D4
L_800851D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800851D8
  if (!crb(c,2)) { goto L_800851F0; } // 800851DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800851E0
  c->r[4]=c->r[29]|c->r[29]; // 800851E4
  c->lr=0x800851ECu; f_80084E80(c); // 800851E8
  c->r[30]=c->r[3]|c->r[3]; // 800851EC
L_800851F0:;
  c->r[11]=c->r[1]+0x00000030u; // 800851F0
  c->r[3]=c->r[30]|c->r[30]; // 800851F4
  c->lr=0x800851FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800851F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800851FC
  c->lr=c->r[0]; // 80085200
  c->r[1]=c->r[1]+0x00000030u; // 80085204
  return; // 80085208
}

// IOS_Open
void f_80085210(Ctx* __restrict c) {
  trace_call(0x80085210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085210
  c->r[0]=c->lr; // 80085214
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085218
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8008521C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085220
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085224
  c->r[30]=0u+0x00000000u; // 80085228
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008522C
  c->r[29]=c->r[4]|c->r[4]; // 80085230
  W32(c->r[1]+0x00000010u,c->r[28]); // 80085234
  c->r[28]=c->r[3]|c->r[3]; // 80085238
  if (!crb(c,2)) { goto L_80085248; } // 8008523C
  c->r[30]=0u+0xFFFFFFFCu; // 80085240
  goto L_80085290; // 80085244
L_80085248:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085248
  c->r[4]=0u+0x00000040u; // 8008524C
  c->r[5]=0u+0x00000020u; // 80085250
  c->lr=0x80085258u; f_80086680(c); // 80085254
  cmps(c,0,(int32_t)c->r[3],0); // 80085258
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008525C
  if (!crb(c,2)) { goto L_8008526C; } // 80085260
  c->r[30]=0u+0xFFFFFFEAu; // 80085264
  goto L_80085290; // 80085268
L_8008526C:;
  c->r[5]=0u+0x00000000u; // 8008526C
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085270
  c->r[0]=0u+0x00000001u; // 80085274
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085278
  W32(c->r[4]+0x00000024u,c->r[5]); // 8008527C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085280
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085284
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085288
  W32(c->r[3]+0x00000008u,c->r[5]); // 8008528C
L_80085290:;
  cmps(c,0,(int32_t)c->r[30],0); // 80085290
  if (!crb(c,2)) { goto L_80085310; } // 80085294
  c->r[31]=R32(c->r[1]+0x00000008u); // 80085298
  c->r[30]=0u+0x00000000u; // 8008529C
  cmps(c,0,(int32_t)c->r[31],0); // 800852A0
  if (!crb(c,2)) { goto L_800852B0; } // 800852A4
  c->r[30]=0u+0xFFFFFFFCu; // 800852A8
  goto L_800852F8; // 800852AC
L_800852B0:;
  c->r[3]=c->r[28]|c->r[28]; // 800852B0
  c->r[4]=0u+0x00000040u; // 800852B4
  goto L_800852C4; // 800852B8
  c->r[0]=c->r[0]|0x00000000u; // 800852BC
L_800852C0:;
  c->r[3]=c->r[3]+0x00000001u; // 800852C0
L_800852C4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800852C4
  cmps(c,0,(int32_t)c->r[0],0); // 800852C8
  if (crb(c,2)) { goto L_800852DC; } // 800852CC
  cmps(c,0,(int32_t)c->r[4],0); // 800852D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800852D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800852C0; } // 800852D8
L_800852DC:;
  c->r[4]=c->r[3]-c->r[28]; // 800852DC
  c->r[3]=c->r[28]|c->r[28]; // 800852E0
  c->r[4]=c->r[4]+0x00000001u; // 800852E4
  c->lr=0x800852ECu; f_80045010(c); // 800852E8
  c->r[0]=c->r[28]+0x80000000u; // 800852EC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800852F0
  W32(c->r[31]+0x00000010u,c->r[29]); // 800852F4
L_800852F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800852F8
  if (!crb(c,2)) { goto L_80085310; } // 800852FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085300
  c->r[4]=0u+0x00000000u; // 80085304
  c->lr=0x8008530Cu; f_80084E80(c); // 80085308
  c->r[30]=c->r[3]|c->r[3]; // 8008530C
L_80085310:;
  c->r[3]=c->r[30]|c->r[30]; // 80085310
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085314
  c->r[30]=R32(c->r[1]+0x00000018u); // 80085318
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008531C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80085320
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085324
  c->lr=c->r[0]; // 80085328
  c->r[1]=c->r[1]+0x00000020u; // 8008532C
  return; // 80085330
}

// IOS_CloseAsync
void f_80085340(Ctx* __restrict c) {
  trace_call(0x80085340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085340
  c->r[0]=c->lr; // 80085344
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085348
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8008534C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085350
  c->r[31]=0u+0x00000000u; // 80085354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085358
  c->r[30]=c->r[5]|c->r[5]; // 8008535C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80085360
  c->r[29]=c->r[4]|c->r[4]; // 80085364
  W32(c->r[1]+0x00000010u,c->r[28]); // 80085368
  c->r[28]=c->r[3]|c->r[3]; // 8008536C
  if (!crb(c,2)) { goto L_8008537C; } // 80085370
  c->r[31]=0u+0xFFFFFFFCu; // 80085374
  goto L_800853C4; // 80085378
L_8008537C:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 8008537C
  c->r[4]=0u+0x00000040u; // 80085380
  c->r[5]=0u+0x00000020u; // 80085384
  c->lr=0x8008538Cu; f_80086680(c); // 80085388
  cmps(c,0,(int32_t)c->r[3],0); // 8008538C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085390
  if (!crb(c,2)) { goto L_800853A0; } // 80085394
  c->r[31]=0u+0xFFFFFFEAu; // 80085398
  goto L_800853C4; // 8008539C
L_800853A0:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 800853A0
  c->r[5]=0u+0x00000000u; // 800853A4
  c->r[0]=0u+0x00000002u; // 800853A8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800853AC
  W32(c->r[4]+0x00000024u,c->r[30]); // 800853B0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800853B4
  W32(c->r[4]+0x00000028u,c->r[5]); // 800853B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800853BC
  W32(c->r[3]+0x00000008u,c->r[28]); // 800853C0
L_800853C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800853C4
  if (!crb(c,2)) { goto L_800853DC; } // 800853C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800853CC
  c->r[4]=c->r[29]|c->r[29]; // 800853D0
  c->lr=0x800853D8u; f_80084E80(c); // 800853D4
  c->r[31]=c->r[3]|c->r[3]; // 800853D8
L_800853DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800853DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800853E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800853E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800853E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800853EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800853F0
  c->lr=c->r[0]; // 800853F4
  c->r[1]=c->r[1]+0x00000020u; // 800853F8
  return; // 800853FC
}

// IOS_Close
void f_80085400(Ctx* __restrict c) {
  trace_call(0x80085400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085400
  c->r[0]=c->lr; // 80085404
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085408
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8008540C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085410
  c->r[31]=0u+0x00000000u; // 80085414
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085418
  c->r[30]=c->r[3]|c->r[3]; // 8008541C
  if (!crb(c,2)) { goto L_8008542C; } // 80085420
  c->r[31]=0u+0xFFFFFFFCu; // 80085424
  goto L_80085474; // 80085428
L_8008542C:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 8008542C
  c->r[4]=0u+0x00000040u; // 80085430
  c->r[5]=0u+0x00000020u; // 80085434
  c->lr=0x8008543Cu; f_80086680(c); // 80085438
  cmps(c,0,(int32_t)c->r[3],0); // 8008543C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085440
  if (!crb(c,2)) { goto L_80085450; } // 80085444
  c->r[31]=0u+0xFFFFFFEAu; // 80085448
  goto L_80085474; // 8008544C
L_80085450:;
  c->r[5]=0u+0x00000000u; // 80085450
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085454
  c->r[0]=0u+0x00000002u; // 80085458
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008545C
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085460
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085464
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085468
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008546C
  W32(c->r[3]+0x00000008u,c->r[30]); // 80085470
L_80085474:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085474
  if (!crb(c,2)) { goto L_8008548C; } // 80085478
  c->r[3]=R32(c->r[1]+0x00000008u); // 8008547C
  c->r[4]=0u+0x00000000u; // 80085480
  c->lr=0x80085488u; f_80084E80(c); // 80085484
  c->r[31]=c->r[3]|c->r[3]; // 80085488
L_8008548C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008548C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085490
  c->r[30]=R32(c->r[1]+0x00000018u); // 80085494
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085498
  c->lr=c->r[0]; // 8008549C
  c->r[1]=c->r[1]+0x00000020u; // 800854A0
  return; // 800854A4
}

// fn_800854B0
void f_800854B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800854B0
  c->r[0]=c->lr; // 800854B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800854B8
  c->r[11]=c->r[1]+0x00000030u; // 800854BC
  c->lr=0x800854C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800854C0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800854C4
  c->r[26]=c->r[3]|c->r[3]; // 800854C8
  c->r[27]=c->r[4]|c->r[4]; // 800854CC
  c->r[28]=c->r[5]|c->r[5]; // 800854D0
  c->r[29]=c->r[6]|c->r[6]; // 800854D4
  c->r[31]=c->r[7]|c->r[7]; // 800854D8
  c->r[30]=0u+0x00000000u; // 800854DC
  if (!crb(c,2)) { goto L_800854EC; } // 800854E0
  c->r[30]=0u+0xFFFFFFFCu; // 800854E4
  goto L_80085534; // 800854E8
L_800854EC:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 800854EC
  c->r[4]=0u+0x00000040u; // 800854F0
  c->r[5]=0u+0x00000020u; // 800854F4
  c->lr=0x800854FCu; f_80086680(c); // 800854F8
  cmps(c,0,(int32_t)c->r[3],0); // 800854FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085500
  if (!crb(c,2)) { goto L_80085510; } // 80085504
  c->r[30]=0u+0xFFFFFFEAu; // 80085508
  goto L_80085534; // 8008550C
L_80085510:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80085510
  c->r[5]=0u+0x00000000u; // 80085514
  c->r[0]=0u+0x00000003u; // 80085518
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008551C
  W32(c->r[4]+0x00000024u,c->r[31]); // 80085520
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085524
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085528
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008552C
  W32(c->r[3]+0x00000008u,c->r[26]); // 80085530
L_80085534:;
  cmps(c,0,(int32_t)c->r[30],0); // 80085534
  if (!crb(c,2)) { goto L_80085594; } // 80085538
  c->r[31]=R32(c->r[1]+0x00000008u); // 8008553C
  c->r[30]=0u+0x00000000u; // 80085540
  cmps(c,0,(int32_t)c->r[31],0); // 80085544
  if (!crb(c,2)) { goto L_80085554; } // 80085548
  c->r[30]=0u+0xFFFFFFFCu; // 8008554C
  goto L_8008557C; // 80085550
L_80085554:;
  c->r[3]=c->r[27]|c->r[27]; // 80085554
  c->r[4]=c->r[28]|c->r[28]; // 80085558
  c->lr=0x80085560u; f_80044FE0(c); // 8008555C
  cmps(c,0,(int32_t)c->r[27],0); // 80085560
  if (crb(c,2)) { goto L_80085570; } // 80085564
  c->r[0]=c->r[27]+0x80000000u; // 80085568
  goto L_80085574; // 8008556C
L_80085570:;
  c->r[0]=0u+0x00000000u; // 80085570
L_80085574:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80085574
  W32(c->r[31]+0x00000010u,c->r[28]); // 80085578
L_8008557C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8008557C
  if (!crb(c,2)) { goto L_80085594; } // 80085580
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085584
  c->r[4]=c->r[29]|c->r[29]; // 80085588
  c->lr=0x80085590u; f_80084E80(c); // 8008558C
  c->r[30]=c->r[3]|c->r[3]; // 80085590
L_80085594:;
  c->r[11]=c->r[1]+0x00000030u; // 80085594
  c->r[3]=c->r[30]|c->r[30]; // 80085598
  c->lr=0x800855A0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008559C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800855A0
  c->lr=c->r[0]; // 800855A4
  c->r[1]=c->r[1]+0x00000030u; // 800855A8
  return; // 800855AC
}

// IOS_Read
void f_800855B0(Ctx* __restrict c) {
  trace_call(0x800855B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800855B0
  c->r[0]=c->lr; // 800855B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800855B8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800855BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800855C0
  c->r[31]=c->r[3]|c->r[3]; // 800855C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800855C8
  c->r[30]=0u+0x00000000u; // 800855CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800855D0
  c->r[29]=c->r[5]|c->r[5]; // 800855D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800855D8
  c->r[28]=c->r[4]|c->r[4]; // 800855DC
  if (!crb(c,2)) { goto L_800855EC; } // 800855E0
  c->r[30]=0u+0xFFFFFFFCu; // 800855E4
  goto L_80085634; // 800855E8
L_800855EC:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 800855EC
  c->r[4]=0u+0x00000040u; // 800855F0
  c->r[5]=0u+0x00000020u; // 800855F4
  c->lr=0x800855FCu; f_80086680(c); // 800855F8
  cmps(c,0,(int32_t)c->r[3],0); // 800855FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085600
  if (!crb(c,2)) { goto L_80085610; } // 80085604
  c->r[30]=0u+0xFFFFFFEAu; // 80085608
  goto L_80085634; // 8008560C
L_80085610:;
  c->r[5]=0u+0x00000000u; // 80085610
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085614
  c->r[0]=0u+0x00000003u; // 80085618
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008561C
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085620
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085624
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085628
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008562C
  W32(c->r[3]+0x00000008u,c->r[31]); // 80085630
L_80085634:;
  cmps(c,0,(int32_t)c->r[30],0); // 80085634
  if (!crb(c,2)) { goto L_80085694; } // 80085638
  c->r[31]=R32(c->r[1]+0x00000008u); // 8008563C
  c->r[30]=0u+0x00000000u; // 80085640
  cmps(c,0,(int32_t)c->r[31],0); // 80085644
  if (!crb(c,2)) { goto L_80085654; } // 80085648
  c->r[30]=0u+0xFFFFFFFCu; // 8008564C
  goto L_8008567C; // 80085650
L_80085654:;
  c->r[3]=c->r[28]|c->r[28]; // 80085654
  c->r[4]=c->r[29]|c->r[29]; // 80085658
  c->lr=0x80085660u; f_80044FE0(c); // 8008565C
  cmps(c,0,(int32_t)c->r[28],0); // 80085660
  if (crb(c,2)) { goto L_80085670; } // 80085664
  c->r[0]=c->r[28]+0x80000000u; // 80085668
  goto L_80085674; // 8008566C
L_80085670:;
  c->r[0]=0u+0x00000000u; // 80085670
L_80085674:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80085674
  W32(c->r[31]+0x00000010u,c->r[29]); // 80085678
L_8008567C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8008567C
  if (!crb(c,2)) { goto L_80085694; } // 80085680
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085684
  c->r[4]=0u+0x00000000u; // 80085688
  c->lr=0x80085690u; f_80084E80(c); // 8008568C
  c->r[30]=c->r[3]|c->r[3]; // 80085690
L_80085694:;
  c->r[3]=c->r[30]|c->r[30]; // 80085694
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085698
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008569C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800856A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800856A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800856A8
  c->lr=c->r[0]; // 800856AC
  c->r[1]=c->r[1]+0x00000020u; // 800856B0
  return; // 800856B4
}

// fn_800856C0
void f_800856C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800856C0
  c->r[0]=c->lr; // 800856C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800856C8
  c->r[11]=c->r[1]+0x00000030u; // 800856CC
  c->lr=0x800856D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800856D0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800856D4
  c->r[26]=c->r[3]|c->r[3]; // 800856D8
  c->r[27]=c->r[4]|c->r[4]; // 800856DC
  c->r[28]=c->r[5]|c->r[5]; // 800856E0
  c->r[29]=c->r[6]|c->r[6]; // 800856E4
  c->r[30]=c->r[7]|c->r[7]; // 800856E8
  c->r[31]=0u+0x00000000u; // 800856EC
  if (!crb(c,2)) { goto L_800856FC; } // 800856F0
  c->r[31]=0u+0xFFFFFFFCu; // 800856F4
  goto L_80085744; // 800856F8
L_800856FC:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 800856FC
  c->r[4]=0u+0x00000040u; // 80085700
  c->r[5]=0u+0x00000020u; // 80085704
  c->lr=0x8008570Cu; f_80086680(c); // 80085708
  cmps(c,0,(int32_t)c->r[3],0); // 8008570C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085710
  if (!crb(c,2)) { goto L_80085720; } // 80085714
  c->r[31]=0u+0xFFFFFFEAu; // 80085718
  goto L_80085744; // 8008571C
L_80085720:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80085720
  c->r[5]=0u+0x00000000u; // 80085724
  c->r[0]=0u+0x00000004u; // 80085728
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008572C
  W32(c->r[4]+0x00000024u,c->r[30]); // 80085730
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085734
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085738
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008573C
  W32(c->r[3]+0x00000008u,c->r[26]); // 80085740
L_80085744:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085744
  if (!crb(c,2)) { goto L_800857A4; } // 80085748
  c->r[5]=R32(c->r[1]+0x00000008u); // 8008574C
  c->r[31]=0u+0x00000000u; // 80085750
  cmps(c,0,(int32_t)c->r[5],0); // 80085754
  if (!crb(c,2)) { goto L_80085764; } // 80085758
  c->r[31]=0u+0xFFFFFFFCu; // 8008575C
  goto L_8008578C; // 80085760
L_80085764:;
  cmps(c,0,(int32_t)c->r[27],0); // 80085764
  if (crb(c,2)) { goto L_80085774; } // 80085768
  c->r[0]=c->r[27]+0x80000000u; // 8008576C
  goto L_80085778; // 80085770
L_80085774:;
  c->r[0]=0u+0x00000000u; // 80085774
L_80085778:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80085778
  c->r[3]=c->r[27]|c->r[27]; // 8008577C
  c->r[4]=c->r[28]|c->r[28]; // 80085780
  W32(c->r[5]+0x00000010u,c->r[28]); // 80085784
  c->lr=0x8008578Cu; f_80045010(c); // 80085788
L_8008578C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008578C
  if (!crb(c,2)) { goto L_800857A4; } // 80085790
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085794
  c->r[4]=c->r[29]|c->r[29]; // 80085798
  c->lr=0x800857A0u; f_80084E80(c); // 8008579C
  c->r[31]=c->r[3]|c->r[3]; // 800857A0
L_800857A4:;
  c->r[11]=c->r[1]+0x00000030u; // 800857A4
  c->r[3]=c->r[31]|c->r[31]; // 800857A8
  c->lr=0x800857B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800857AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800857B0
  c->lr=c->r[0]; // 800857B4
  c->r[1]=c->r[1]+0x00000030u; // 800857B8
  return; // 800857BC
}

// IOS_Write
void f_800857C0(Ctx* __restrict c) {
  trace_call(0x800857C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800857C0
  c->r[0]=c->lr; // 800857C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800857C8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800857CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800857D0
  c->r[31]=0u+0x00000000u; // 800857D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800857D8
  c->r[30]=c->r[5]|c->r[5]; // 800857DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800857E0
  c->r[29]=c->r[4]|c->r[4]; // 800857E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800857E8
  c->r[28]=c->r[3]|c->r[3]; // 800857EC
  if (!crb(c,2)) { goto L_800857FC; } // 800857F0
  c->r[31]=0u+0xFFFFFFFCu; // 800857F4
  goto L_80085844; // 800857F8
L_800857FC:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 800857FC
  c->r[4]=0u+0x00000040u; // 80085800
  c->r[5]=0u+0x00000020u; // 80085804
  c->lr=0x8008580Cu; f_80086680(c); // 80085808
  cmps(c,0,(int32_t)c->r[3],0); // 8008580C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085810
  if (!crb(c,2)) { goto L_80085820; } // 80085814
  c->r[31]=0u+0xFFFFFFEAu; // 80085818
  goto L_80085844; // 8008581C
L_80085820:;
  c->r[5]=0u+0x00000000u; // 80085820
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085824
  c->r[0]=0u+0x00000004u; // 80085828
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008582C
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085830
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085834
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085838
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008583C
  W32(c->r[3]+0x00000008u,c->r[28]); // 80085840
L_80085844:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085844
  if (!crb(c,2)) { goto L_800858A4; } // 80085848
  c->r[5]=R32(c->r[1]+0x00000008u); // 8008584C
  c->r[31]=0u+0x00000000u; // 80085850
  cmps(c,0,(int32_t)c->r[5],0); // 80085854
  if (!crb(c,2)) { goto L_80085864; } // 80085858
  c->r[31]=0u+0xFFFFFFFCu; // 8008585C
  goto L_8008588C; // 80085860
L_80085864:;
  cmps(c,0,(int32_t)c->r[29],0); // 80085864
  if (crb(c,2)) { goto L_80085874; } // 80085868
  c->r[0]=c->r[29]+0x80000000u; // 8008586C
  goto L_80085878; // 80085870
L_80085874:;
  c->r[0]=0u+0x00000000u; // 80085874
L_80085878:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80085878
  c->r[3]=c->r[29]|c->r[29]; // 8008587C
  c->r[4]=c->r[30]|c->r[30]; // 80085880
  W32(c->r[5]+0x00000010u,c->r[30]); // 80085884
  c->lr=0x8008588Cu; f_80045010(c); // 80085888
L_8008588C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008588C
  if (!crb(c,2)) { goto L_800858A4; } // 80085890
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085894
  c->r[4]=0u+0x00000000u; // 80085898
  c->lr=0x800858A0u; f_80084E80(c); // 8008589C
  c->r[31]=c->r[3]|c->r[3]; // 800858A0
L_800858A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800858A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800858A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800858AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800858B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800858B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800858B8
  c->lr=c->r[0]; // 800858BC
  c->r[1]=c->r[1]+0x00000020u; // 800858C0
  return; // 800858C4
}

// fn_800858D0
void f_800858D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800858D0
  c->r[0]=c->lr; // 800858D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800858D8
  c->r[11]=c->r[1]+0x00000030u; // 800858DC
  c->lr=0x800858E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800858E0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800858E4
  c->r[26]=c->r[3]|c->r[3]; // 800858E8
  c->r[27]=c->r[4]|c->r[4]; // 800858EC
  c->r[28]=c->r[5]|c->r[5]; // 800858F0
  c->r[29]=c->r[6]|c->r[6]; // 800858F4
  c->r[30]=c->r[7]|c->r[7]; // 800858F8
  c->r[31]=0u+0x00000000u; // 800858FC
  if (!crb(c,2)) { goto L_8008590C; } // 80085900
  c->r[31]=0u+0xFFFFFFFCu; // 80085904
  goto L_80085954; // 80085908
L_8008590C:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 8008590C
  c->r[4]=0u+0x00000040u; // 80085910
  c->r[5]=0u+0x00000020u; // 80085914
  c->lr=0x8008591Cu; f_80086680(c); // 80085918
  cmps(c,0,(int32_t)c->r[3],0); // 8008591C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085920
  if (!crb(c,2)) { goto L_80085930; } // 80085924
  c->r[31]=0u+0xFFFFFFEAu; // 80085928
  goto L_80085954; // 8008592C
L_80085930:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80085930
  c->r[5]=0u+0x00000000u; // 80085934
  c->r[0]=0u+0x00000005u; // 80085938
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008593C
  W32(c->r[4]+0x00000024u,c->r[30]); // 80085940
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085944
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085948
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008594C
  W32(c->r[3]+0x00000008u,c->r[26]); // 80085950
L_80085954:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085954
  if (!crb(c,2)) { goto L_80085994; } // 80085958
  c->r[3]=R32(c->r[1]+0x00000008u); // 8008595C
  c->r[31]=0u+0x00000000u; // 80085960
  cmps(c,0,(int32_t)c->r[3],0); // 80085964
  if (!crb(c,2)) { goto L_80085974; } // 80085968
  c->r[31]=0u+0xFFFFFFFCu; // 8008596C
  goto L_8008597C; // 80085970
L_80085974:;
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 80085974
  W32(c->r[3]+0x00000010u,c->r[28]); // 80085978
L_8008597C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8008597C
  if (!crb(c,2)) { goto L_80085994; } // 80085980
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085984
  c->r[4]=c->r[29]|c->r[29]; // 80085988
  c->lr=0x80085990u; f_80084E80(c); // 8008598C
  c->r[31]=c->r[3]|c->r[3]; // 80085990
L_80085994:;
  c->r[11]=c->r[1]+0x00000030u; // 80085994
  c->r[3]=c->r[31]|c->r[31]; // 80085998
  c->lr=0x800859A0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008599C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800859A0
  c->lr=c->r[0]; // 800859A4
  c->r[1]=c->r[1]+0x00000030u; // 800859A8
  return; // 800859AC
}

// IOS_Seek
void f_800859B0(Ctx* __restrict c) {
  trace_call(0x800859B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800859B0
  c->r[0]=c->lr; // 800859B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800859B8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 800859BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800859C0
  c->r[31]=0u+0x00000000u; // 800859C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800859C8
  c->r[30]=c->r[5]|c->r[5]; // 800859CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800859D0
  c->r[29]=c->r[4]|c->r[4]; // 800859D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800859D8
  c->r[28]=c->r[3]|c->r[3]; // 800859DC
  if (!crb(c,2)) { goto L_800859EC; } // 800859E0
  c->r[31]=0u+0xFFFFFFFCu; // 800859E4
  goto L_80085A34; // 800859E8
L_800859EC:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 800859EC
  c->r[4]=0u+0x00000040u; // 800859F0
  c->r[5]=0u+0x00000020u; // 800859F4
  c->lr=0x800859FCu; f_80086680(c); // 800859F8
  cmps(c,0,(int32_t)c->r[3],0); // 800859FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085A00
  if (!crb(c,2)) { goto L_80085A10; } // 80085A04
  c->r[31]=0u+0xFFFFFFEAu; // 80085A08
  goto L_80085A34; // 80085A0C
L_80085A10:;
  c->r[5]=0u+0x00000000u; // 80085A10
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085A14
  c->r[0]=0u+0x00000005u; // 80085A18
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085A1C
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085A20
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085A24
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085A28
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085A2C
  W32(c->r[3]+0x00000008u,c->r[28]); // 80085A30
L_80085A34:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085A34
  if (!crb(c,2)) { goto L_80085A74; } // 80085A38
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085A3C
  c->r[31]=0u+0x00000000u; // 80085A40
  cmps(c,0,(int32_t)c->r[3],0); // 80085A44
  if (!crb(c,2)) { goto L_80085A54; } // 80085A48
  c->r[31]=0u+0xFFFFFFFCu; // 80085A4C
  goto L_80085A5C; // 80085A50
L_80085A54:;
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80085A54
  W32(c->r[3]+0x00000010u,c->r[30]); // 80085A58
L_80085A5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085A5C
  if (!crb(c,2)) { goto L_80085A74; } // 80085A60
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085A64
  c->r[4]=0u+0x00000000u; // 80085A68
  c->lr=0x80085A70u; f_80084E80(c); // 80085A6C
  c->r[31]=c->r[3]|c->r[3]; // 80085A70
L_80085A74:;
  c->r[3]=c->r[31]|c->r[31]; // 80085A74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085A78
  c->r[30]=R32(c->r[1]+0x00000018u); // 80085A7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80085A80
  c->r[28]=R32(c->r[1]+0x00000010u); // 80085A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085A88
  c->lr=c->r[0]; // 80085A8C
  c->r[1]=c->r[1]+0x00000020u; // 80085A90
  return; // 80085A94
}

// fn_80085AA0
void f_80085AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085AA0
  c->r[0]=c->lr; // 80085AA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80085AA8
  c->r[11]=c->r[1]+0x00000040u; // 80085AAC
  c->lr=0x80085AB4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085AB0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80085AB4
  c->r[23]=c->r[3]|c->r[3]; // 80085AB8
  c->r[24]=c->r[4]|c->r[4]; // 80085ABC
  c->r[25]=c->r[5]|c->r[5]; // 80085AC0
  c->r[26]=c->r[6]|c->r[6]; // 80085AC4
  c->r[27]=c->r[7]|c->r[7]; // 80085AC8
  c->r[28]=c->r[8]|c->r[8]; // 80085ACC
  c->r[29]=c->r[9]|c->r[9]; // 80085AD0
  c->r[30]=c->r[10]|c->r[10]; // 80085AD4
  c->r[31]=0u+0x00000000u; // 80085AD8
  if (!crb(c,2)) { goto L_80085AE8; } // 80085ADC
  c->r[31]=0u+0xFFFFFFFCu; // 80085AE0
  goto L_80085B30; // 80085AE4
L_80085AE8:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085AE8
  c->r[4]=0u+0x00000040u; // 80085AEC
  c->r[5]=0u+0x00000020u; // 80085AF0
  c->lr=0x80085AF8u; f_80086680(c); // 80085AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80085AF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085AFC
  if (!crb(c,2)) { goto L_80085B0C; } // 80085B00
  c->r[31]=0u+0xFFFFFFEAu; // 80085B04
  goto L_80085B30; // 80085B08
L_80085B0C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80085B0C
  c->r[5]=0u+0x00000000u; // 80085B10
  c->r[0]=0u+0x00000006u; // 80085B14
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085B18
  W32(c->r[4]+0x00000024u,c->r[30]); // 80085B1C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085B20
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085B24
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085B28
  W32(c->r[3]+0x00000008u,c->r[23]); // 80085B2C
L_80085B30:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085B30
  if (!crb(c,2)) { goto L_80085BBC; } // 80085B34
  c->r[5]=R32(c->r[1]+0x00000008u); // 80085B38
  c->r[31]=0u+0x00000000u; // 80085B3C
  cmps(c,0,(int32_t)c->r[5],0); // 80085B40
  if (!crb(c,2)) { goto L_80085B50; } // 80085B44
  c->r[31]=0u+0xFFFFFFFCu; // 80085B48
  goto L_80085BA4; // 80085B4C
L_80085B50:;
  cmps(c,0,(int32_t)c->r[27],0); // 80085B50
  W32(c->r[5]+0x0000000Cu,c->r[24]); // 80085B54
  if (crb(c,2)) { goto L_80085B64; } // 80085B58
  c->r[0]=c->r[27]+0x80000000u; // 80085B5C
  goto L_80085B68; // 80085B60
L_80085B64:;
  c->r[0]=0u+0x00000000u; // 80085B64
L_80085B68:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 80085B68
  cmps(c,0,(int32_t)c->r[25],0); // 80085B6C
  W32(c->r[5]+0x0000001Cu,c->r[28]); // 80085B70
  if (crb(c,2)) { goto L_80085B80; } // 80085B74
  c->r[0]=c->r[25]+0x80000000u; // 80085B78
  goto L_80085B84; // 80085B7C
L_80085B80:;
  c->r[0]=0u+0x00000000u; // 80085B80
L_80085B84:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 80085B84
  c->r[3]=c->r[25]|c->r[25]; // 80085B88
  c->r[4]=c->r[26]|c->r[26]; // 80085B8C
  W32(c->r[5]+0x00000014u,c->r[26]); // 80085B90
  c->lr=0x80085B98u; f_80045010(c); // 80085B94
  c->r[3]=c->r[27]|c->r[27]; // 80085B98
  c->r[4]=c->r[28]|c->r[28]; // 80085B9C
  c->lr=0x80085BA4u; f_80045010(c); // 80085BA0
L_80085BA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085BA4
  if (!crb(c,2)) { goto L_80085BBC; } // 80085BA8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085BAC
  c->r[4]=c->r[29]|c->r[29]; // 80085BB0
  c->lr=0x80085BB8u; f_80084E80(c); // 80085BB4
  c->r[31]=c->r[3]|c->r[3]; // 80085BB8
L_80085BBC:;
  c->r[11]=c->r[1]+0x00000040u; // 80085BBC
  c->r[3]=c->r[31]|c->r[31]; // 80085BC0
  c->lr=0x80085BC8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085BC4
  c->r[0]=R32(c->r[1]+0x00000044u); // 80085BC8
  c->lr=c->r[0]; // 80085BCC
  c->r[1]=c->r[1]+0x00000040u; // 80085BD0
  return; // 80085BD4
}

// fn_80085BE0
void f_80085BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085BE0
  c->r[0]=c->lr; // 80085BE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085BE8
  c->r[11]=c->r[1]+0x00000030u; // 80085BEC
  c->lr=0x80085BF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085BF0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80085BF4
  c->r[25]=c->r[3]|c->r[3]; // 80085BF8
  c->r[26]=c->r[4]|c->r[4]; // 80085BFC
  c->r[27]=c->r[5]|c->r[5]; // 80085C00
  c->r[28]=c->r[6]|c->r[6]; // 80085C04
  c->r[29]=c->r[7]|c->r[7]; // 80085C08
  c->r[30]=c->r[8]|c->r[8]; // 80085C0C
  c->r[31]=0u+0x00000000u; // 80085C10
  if (!crb(c,2)) { goto L_80085C20; } // 80085C14
  c->r[31]=0u+0xFFFFFFFCu; // 80085C18
  goto L_80085C68; // 80085C1C
L_80085C20:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085C20
  c->r[4]=0u+0x00000040u; // 80085C24
  c->r[5]=0u+0x00000020u; // 80085C28
  c->lr=0x80085C30u; f_80086680(c); // 80085C2C
  cmps(c,0,(int32_t)c->r[3],0); // 80085C30
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085C34
  if (!crb(c,2)) { goto L_80085C44; } // 80085C38
  c->r[31]=0u+0xFFFFFFEAu; // 80085C3C
  goto L_80085C68; // 80085C40
L_80085C44:;
  c->r[5]=0u+0x00000000u; // 80085C44
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085C48
  c->r[0]=0u+0x00000006u; // 80085C4C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085C50
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085C54
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085C58
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085C5C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085C60
  W32(c->r[3]+0x00000008u,c->r[25]); // 80085C64
L_80085C68:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085C68
  if (!crb(c,2)) { goto L_80085CF4; } // 80085C6C
  c->r[5]=R32(c->r[1]+0x00000008u); // 80085C70
  c->r[31]=0u+0x00000000u; // 80085C74
  cmps(c,0,(int32_t)c->r[5],0); // 80085C78
  if (!crb(c,2)) { goto L_80085C88; } // 80085C7C
  c->r[31]=0u+0xFFFFFFFCu; // 80085C80
  goto L_80085CDC; // 80085C84
L_80085C88:;
  cmps(c,0,(int32_t)c->r[29],0); // 80085C88
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 80085C8C
  if (crb(c,2)) { goto L_80085C9C; } // 80085C90
  c->r[0]=c->r[29]+0x80000000u; // 80085C94
  goto L_80085CA0; // 80085C98
L_80085C9C:;
  c->r[0]=0u+0x00000000u; // 80085C9C
L_80085CA0:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 80085CA0
  cmps(c,0,(int32_t)c->r[27],0); // 80085CA4
  W32(c->r[5]+0x0000001Cu,c->r[30]); // 80085CA8
  if (crb(c,2)) { goto L_80085CB8; } // 80085CAC
  c->r[0]=c->r[27]+0x80000000u; // 80085CB0
  goto L_80085CBC; // 80085CB4
L_80085CB8:;
  c->r[0]=0u+0x00000000u; // 80085CB8
L_80085CBC:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 80085CBC
  c->r[3]=c->r[27]|c->r[27]; // 80085CC0
  c->r[4]=c->r[28]|c->r[28]; // 80085CC4
  W32(c->r[5]+0x00000014u,c->r[28]); // 80085CC8
  c->lr=0x80085CD0u; f_80045010(c); // 80085CCC
  c->r[3]=c->r[29]|c->r[29]; // 80085CD0
  c->r[4]=c->r[30]|c->r[30]; // 80085CD4
  c->lr=0x80085CDCu; f_80045010(c); // 80085CD8
L_80085CDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085CDC
  if (!crb(c,2)) { goto L_80085CF4; } // 80085CE0
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085CE4
  c->r[4]=0u+0x00000000u; // 80085CE8
  c->lr=0x80085CF0u; f_80084E80(c); // 80085CEC
  c->r[31]=c->r[3]|c->r[3]; // 80085CF0
L_80085CF4:;
  c->r[11]=c->r[1]+0x00000030u; // 80085CF4
  c->r[3]=c->r[31]|c->r[31]; // 80085CF8
  c->lr=0x80085D00u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085CFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80085D00
  c->lr=c->r[0]; // 80085D04
  c->r[1]=c->r[1]+0x00000030u; // 80085D08
  return; // 80085D0C
}

// fn_80085D10
void f_80085D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085D10
  c->r[0]=c->lr; // 80085D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085D18
  c->r[11]=c->r[1]+0x00000020u; // 80085D1C
  c->lr=0x80085D24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085D20
  cmps(c,0,(int32_t)c->r[3],0); // 80085D24
  c->r[29]=c->r[3]|c->r[3]; // 80085D28
  c->r[30]=c->r[7]|c->r[7]; // 80085D2C
  c->r[31]=0u+0x00000000u; // 80085D30
  if (!crb(c,2)) { goto L_80085D40; } // 80085D34
  c->r[31]=0u+0xFFFFFFFCu; // 80085D38
  goto L_80085E30; // 80085D3C
L_80085D40:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80085D40
  c->r[27]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80085D44
  c->r[26]=0u+0x00000000u; // 80085D48
  c->r[28]=0u+0x00000000u; // 80085D4C
  W32(c->r[3]+0x00000010u,c->r[5]); // 80085D50
  W32(c->r[3]+0x00000014u,c->r[6]); // 80085D54
  W32(c->r[3]+0x00000018u,c->r[7]); // 80085D58
  goto L_80085DA4; // 80085D5C
L_80085D60:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 80085D60
  c->r[0]=c->r[28]+c->r[27]; // 80085D64
  c->r[4]=c->r[3]+c->r[0]; // 80085D68
  c->r[3]=R32(c->r[3]+c->r[0]); // 80085D6C
  c->r[4]=R32(c->r[4]+0x00000004u); // 80085D70
  c->lr=0x80085D78u; f_80045010(c); // 80085D74
  c->r[4]=R32(c->r[29]+0x00000018u); // 80085D78
  c->r[3]=c->r[28]+c->r[27]; // 80085D7C
  c->r[5]=R32(c->r[4]+c->r[3]); // 80085D80
  cmps(c,0,(int32_t)c->r[5],0); // 80085D84
  if (crb(c,2)) { goto L_80085D94; } // 80085D88
  c->r[0]=c->r[5]+0x80000000u; // 80085D8C
  goto L_80085D98; // 80085D90
L_80085D94:;
  c->r[0]=0u+0x00000000u; // 80085D94
L_80085D98:;
  W32(c->r[4]+c->r[3],c->r[0]); // 80085D98
  c->r[28]=c->r[28]+0x00000008u; // 80085D9C
  c->r[26]=c->r[26]+0x00000001u; // 80085DA0
L_80085DA4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80085DA4
  cmpu(c,0,c->r[26],c->r[0]); // 80085DA8
  if (crb(c,0)) { IRQCHK(c); goto L_80085D60; } // 80085DAC
  c->r[27]=0u+0x00000000u; // 80085DB0
  c->r[28]=0u+0x00000000u; // 80085DB4
  goto L_80085DF8; // 80085DB8
L_80085DBC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80085DBC
  c->r[4]=c->r[0]+c->r[28]; // 80085DC0
  c->r[3]=R32(c->r[28]+c->r[0]); // 80085DC4
  c->r[4]=R32(c->r[4]+0x00000004u); // 80085DC8
  c->lr=0x80085DD0u; f_80045010(c); // 80085DCC
  c->r[3]=R32(c->r[29]+0x00000018u); // 80085DD0
  c->r[4]=R32(c->r[3]+c->r[28]); // 80085DD4
  cmps(c,0,(int32_t)c->r[4],0); // 80085DD8
  if (crb(c,2)) { goto L_80085DE8; } // 80085DDC
  c->r[0]=c->r[4]+0x80000000u; // 80085DE0
  goto L_80085DEC; // 80085DE4
L_80085DE8:;
  c->r[0]=0u+0x00000000u; // 80085DE8
L_80085DEC:;
  W32(c->r[3]+c->r[28],c->r[0]); // 80085DEC
  c->r[28]=c->r[28]+0x00000008u; // 80085DF0
  c->r[27]=c->r[27]+0x00000001u; // 80085DF4
L_80085DF8:;
  c->r[4]=R32(c->r[29]+0x00000010u); // 80085DF8
  cmpu(c,0,c->r[27],c->r[4]); // 80085DFC
  if (crb(c,0)) { IRQCHK(c); goto L_80085DBC; } // 80085E00
  c->r[0]=R32(c->r[29]+0x00000014u); // 80085E04
  c->r[3]=R32(c->r[29]+0x00000018u); // 80085E08
  c->r[0]=c->r[4]+c->r[0]; // 80085E0C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80085E10
  c->lr=0x80085E18u; f_80045010(c); // 80085E14
  cmps(c,0,(int32_t)c->r[30],0); // 80085E18
  if (crb(c,2)) { goto L_80085E28; } // 80085E1C
  c->r[0]=c->r[30]+0x80000000u; // 80085E20
  goto L_80085E2C; // 80085E24
L_80085E28:;
  c->r[0]=0u+0x00000000u; // 80085E28
L_80085E2C:;
  W32(c->r[29]+0x00000018u,c->r[0]); // 80085E2C
L_80085E30:;
  c->r[11]=c->r[1]+0x00000020u; // 80085E30
  c->r[3]=c->r[31]|c->r[31]; // 80085E34
  c->lr=0x80085E3Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085E38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085E3C
  c->lr=c->r[0]; // 80085E40
  c->r[1]=c->r[1]+0x00000020u; // 80085E44
  return; // 80085E48
}

// fn_80085E50
void f_80085E50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085E50
  c->r[0]=c->lr; // 80085E54
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085E58
  c->r[11]=c->r[1]+0x00000030u; // 80085E5C
  c->lr=0x80085E64u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085E60
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80085E64
  c->r[24]=c->r[3]|c->r[3]; // 80085E68
  c->r[25]=c->r[4]|c->r[4]; // 80085E6C
  c->r[26]=c->r[5]|c->r[5]; // 80085E70
  c->r[27]=c->r[6]|c->r[6]; // 80085E74
  c->r[28]=c->r[7]|c->r[7]; // 80085E78
  c->r[29]=c->r[8]|c->r[8]; // 80085E7C
  c->r[30]=c->r[9]|c->r[9]; // 80085E80
  c->r[31]=0u+0x00000000u; // 80085E84
  if (!crb(c,2)) { goto L_80085E94; } // 80085E88
  c->r[31]=0u+0xFFFFFFFCu; // 80085E8C
  goto L_80085EDC; // 80085E90
L_80085E94:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085E94
  c->r[4]=0u+0x00000040u; // 80085E98
  c->r[5]=0u+0x00000020u; // 80085E9C
  c->lr=0x80085EA4u; f_80086680(c); // 80085EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80085EA4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085EA8
  if (!crb(c,2)) { goto L_80085EB8; } // 80085EAC
  c->r[31]=0u+0xFFFFFFEAu; // 80085EB0
  goto L_80085EDC; // 80085EB4
L_80085EB8:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80085EB8
  c->r[5]=0u+0x00000000u; // 80085EBC
  c->r[0]=0u+0x00000007u; // 80085EC0
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085EC4
  W32(c->r[4]+0x00000024u,c->r[30]); // 80085EC8
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085ECC
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085ED0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085ED4
  W32(c->r[3]+0x00000008u,c->r[24]); // 80085ED8
L_80085EDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085EDC
  if (!crb(c,2)) { goto L_80085F18; } // 80085EE0
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085EE4
  c->r[4]=c->r[25]|c->r[25]; // 80085EE8
  c->r[5]=c->r[26]|c->r[26]; // 80085EEC
  c->r[6]=c->r[27]|c->r[27]; // 80085EF0
  c->r[7]=c->r[28]|c->r[28]; // 80085EF4
  c->lr=0x80085EFCu; f_80085D10(c); // 80085EF8
  cmps(c,0,(int32_t)c->r[3],0); // 80085EFC
  c->r[31]=c->r[3]|c->r[3]; // 80085F00
  if (!crb(c,2)) { goto L_80085F18; } // 80085F04
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085F08
  c->r[4]=c->r[29]|c->r[29]; // 80085F0C
  c->lr=0x80085F14u; f_80084E80(c); // 80085F10
  c->r[31]=c->r[3]|c->r[3]; // 80085F14
L_80085F18:;
  c->r[11]=c->r[1]+0x00000030u; // 80085F18
  c->r[3]=c->r[31]|c->r[31]; // 80085F1C
  c->lr=0x80085F24u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085F20
  c->r[0]=R32(c->r[1]+0x00000034u); // 80085F24
  c->lr=c->r[0]; // 80085F28
  c->r[1]=c->r[1]+0x00000030u; // 80085F2C
  return; // 80085F30
}

// fn_80085F40
void f_80085F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085F40
  c->r[0]=c->lr; // 80085F44
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085F48
  c->r[11]=c->r[1]+0x00000030u; // 80085F4C
  c->lr=0x80085F54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085F50
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80085F54
  c->r[26]=c->r[3]|c->r[3]; // 80085F58
  c->r[27]=c->r[4]|c->r[4]; // 80085F5C
  c->r[28]=c->r[5]|c->r[5]; // 80085F60
  c->r[29]=c->r[6]|c->r[6]; // 80085F64
  c->r[30]=c->r[7]|c->r[7]; // 80085F68
  c->r[31]=0u+0x00000000u; // 80085F6C
  if (!crb(c,2)) { goto L_80085F7C; } // 80085F70
  c->r[31]=0u+0xFFFFFFFCu; // 80085F74
  goto L_80085FC4; // 80085F78
L_80085F7C:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80085F7C
  c->r[4]=0u+0x00000040u; // 80085F80
  c->r[5]=0u+0x00000020u; // 80085F84
  c->lr=0x80085F8Cu; f_80086680(c); // 80085F88
  cmps(c,0,(int32_t)c->r[3],0); // 80085F8C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80085F90
  if (!crb(c,2)) { goto L_80085FA0; } // 80085F94
  c->r[31]=0u+0xFFFFFFEAu; // 80085F98
  goto L_80085FC4; // 80085F9C
L_80085FA0:;
  c->r[5]=0u+0x00000000u; // 80085FA0
  W32(c->r[3]+0x00000020u,c->r[5]); // 80085FA4
  c->r[0]=0u+0x00000007u; // 80085FA8
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085FAC
  W32(c->r[4]+0x00000024u,c->r[5]); // 80085FB0
  c->r[4]=R32(c->r[1]+0x00000008u); // 80085FB4
  W32(c->r[4]+0x00000028u,c->r[5]); // 80085FB8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80085FBC
  W32(c->r[3]+0x00000008u,c->r[26]); // 80085FC0
L_80085FC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80085FC4
  if (!crb(c,2)) { goto L_80086000; } // 80085FC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085FCC
  c->r[4]=c->r[27]|c->r[27]; // 80085FD0
  c->r[5]=c->r[28]|c->r[28]; // 80085FD4
  c->r[6]=c->r[29]|c->r[29]; // 80085FD8
  c->r[7]=c->r[30]|c->r[30]; // 80085FDC
  c->lr=0x80085FE4u; f_80085D10(c); // 80085FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80085FE4
  c->r[31]=c->r[3]|c->r[3]; // 80085FE8
  if (!crb(c,2)) { goto L_80086000; } // 80085FEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085FF0
  c->r[4]=0u+0x00000000u; // 80085FF4
  c->lr=0x80085FFCu; f_80084E80(c); // 80085FF8
  c->r[31]=c->r[3]|c->r[3]; // 80085FFC
L_80086000:;
  c->r[11]=c->r[1]+0x00000030u; // 80086000
  c->r[3]=c->r[31]|c->r[31]; // 80086004
  c->lr=0x8008600Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086008
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008600C
  c->lr=c->r[0]; // 80086010
  c->r[1]=c->r[1]+0x00000030u; // 80086014
  return; // 80086018
}

// fn_80086020
void f_80086020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086020
  c->r[0]=c->lr; // 80086024
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086028
  c->r[11]=c->r[1]+0x00000030u; // 8008602C
  c->lr=0x80086034u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086030
  c->r[26]=c->r[3]|c->r[3]; // 80086034
  c->r[27]=c->r[4]|c->r[4]; // 80086038
  c->r[28]=c->r[5]|c->r[5]; // 8008603C
  c->r[30]=c->r[6]|c->r[6]; // 80086040
  c->r[29]=c->r[7]|c->r[7]; // 80086044
  c->lr=0x8008604Cu; f_80049A20(c); // 80086048
  c->r[0]=R32(c->r[13]+0xFFFF9178u); // 8008604C
  cmps(c,0,(int32_t)c->r[0],0); // 80086050
  if (crb(c,2)) { goto L_80086064; } // 80086054
  c->lr=0x8008605Cu; f_80049A60(c); // 80086058
  c->r[31]=0u+0xFFFFFFF6u; // 8008605C
  goto L_80086328; // 80086060
L_80086064:;
  c->r[0]=0u+0x00000001u; // 80086064
  W32(c->r[13]+0xFFFF9178u,c->r[0]); // 80086068
  c->lr=0x80086070u; f_80049A60(c); // 8008606C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80086070
  c->r[31]=0u+0x00000000u; // 80086074
  if (!crb(c,2)) { goto L_80086084; } // 80086078
  c->r[31]=0u+0xFFFFFFFCu; // 8008607C
  goto L_800860CC; // 80086080
L_80086084:;
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80086084
  c->r[4]=0u+0x00000040u; // 80086088
  c->r[5]=0u+0x00000020u; // 8008608C
  c->lr=0x80086094u; f_80086680(c); // 80086090
  cmps(c,0,(int32_t)c->r[3],0); // 80086094
  W32(c->r[1]+0x00000008u,c->r[3]); // 80086098
  if (!crb(c,2)) { goto L_800860A8; } // 8008609C
  c->r[31]=0u+0xFFFFFFEAu; // 800860A0
  goto L_800860CC; // 800860A4
L_800860A8:;
  c->r[5]=0u+0x00000000u; // 800860A8
  W32(c->r[3]+0x00000020u,c->r[5]); // 800860AC
  c->r[0]=0u+0x00000007u; // 800860B0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800860B4
  W32(c->r[4]+0x00000024u,c->r[5]); // 800860B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800860BC
  W32(c->r[4]+0x00000028u,c->r[5]); // 800860C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800860C4
  W32(c->r[3]+0x00000008u,c->r[26]); // 800860C8
L_800860CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800860CC
  if (!crb(c,2)) { goto L_80086300; } // 800860D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800860D4
  c->r[0]=0u+0x00000001u; // 800860D8
  W32(c->r[13]+0xFFFF9180u,c->r[3]); // 800860DC
  c->r[4]=c->r[27]|c->r[27]; // 800860E0
  c->r[5]=c->r[28]|c->r[28]; // 800860E4
  c->r[6]=c->r[30]|c->r[30]; // 800860E8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800860EC
  c->r[7]=c->r[29]|c->r[29]; // 800860F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800860F4
  c->lr=0x800860FCu; f_80085D10(c); // 800860F8
  cmps(c,0,(int32_t)c->r[3],0); // 800860FC
  c->r[31]=c->r[3]|c->r[3]; // 80086100
  if (!crb(c,2)) { goto L_80086300; } // 80086104
  c->r[29]=0u+0x801C0000u; // 80086108
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008610C
  c->r[3]=c->r[29]+0xFFFF9A60u; // 80086110
  c->r[5]=0u+0x00000040u; // 80086114
  c->lr=0x8008611Cu; f_800043C4(c); // 80086118
  c->r[3]=c->r[29]+0xFFFF9A60u; // 8008611C
  W32(c->r[13]+0xFFFF917Cu,c->r[3]); // 80086120
  c->r[29]=R32(c->r[1]+0x00000008u); // 80086124
  c->r[3]=c->r[3]+0x0000002Cu; // 80086128
  c->lr=0x80086130u; f_8004C6F0(c); // 8008612C
  c->r[3]=c->r[29]|c->r[29]; // 80086130
  c->r[4]=0u+0x00000020u; // 80086134
  c->lr=0x8008613Cu; f_80045010(c); // 80086138
  c->lr=0x80086140u; f_80049A20(c); // 8008613C
  c->r[4]=0u+0x801C0000u; // 80086140
  c->r[30]=c->r[3]|c->r[3]; // 80086144
  c->r[3]=c->r[4]+0xFFFF9960u; // 80086148
  c->r[0]=R32(c->r[4]+0xFFFF9960u); // 8008614C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80086150
  c->r[31]=0u+0x00000000u; // 80086154
  cmpu(c,0,c->r[3],c->r[0]); // 80086158
  if (!crb(c,0)) { goto L_8008616C; } // 8008615C
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 80086160
  c->r[0]=c->r[0]+c->r[3]; // 80086164
  goto L_80086188; // 80086168
L_8008616C:;
  c->r[4]=c->r[3]-c->r[0]; // 8008616C
  c->r[3]=0u+0x00000030u; // 80086170
  c->r[0]=c->r[4]+0xFFFFFFD0u; // 80086174
  c->r[3]=c->r[4]|~c->r[3]; // 80086178
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8008617C
  c->r[0]=c->r[3]-c->r[0]; // 80086180
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80086184
L_80086188:;
  cmps(c,0,(int32_t)c->r[0],0); // 80086188
  if (crb(c,2)) { goto L_80086198; } // 8008618C
  c->r[31]=0u+0xFFFFFFF8u; // 80086190
  goto L_800861EC; // 80086194
L_80086198:;
  c->r[7]=0u+0x801C0000u; // 80086198
  c->r[4]=0u+0xAAAB0000u; // 8008619C
  c->r[7]=c->r[7]+0xFFFF9960u; // 800861A0
  c->r[3]=c->r[29]|c->r[29]; // 800861A4
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 800861A8
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800861AC
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800861B0
  c->r[4]=c->r[7]+c->r[4]; // 800861B4
  W32(c->r[4]+0x00000010u,c->r[29]); // 800861B8
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 800861BC
  c->r[4]=R32(c->r[7]+0x00000004u); // 800861C0
  c->r[6]=c->r[5]+0x00000001u; // 800861C4
  c->r[5]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[6])>>32); // 800861C8
  c->r[0]=c->r[4]+0x00000001u; // 800861CC
  W32(c->r[7]+0x00000004u,c->r[0]); // 800861D0
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 800861D4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 800861D8
  c->r[0]=c->r[6]-c->r[0]; // 800861DC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800861E0
  c->r[4]=R32(c->r[29]+0x00000008u); // 800861E4
  c->lr=0x800861ECu; f_800869D0(c); // 800861E8
L_800861EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800861EC
  if (crb(c,2)) { goto L_80086200; } // 800861F0
  c->r[3]=c->r[30]|c->r[30]; // 800861F4
  c->lr=0x800861FCu; f_80049A60(c); // 800861F8
  goto L_80086300; // 800861FC
L_80086200:;
  c->r[0]=R32(c->r[13]+0xFFFF82E0u); // 80086200
  cmps(c,0,(int32_t)c->r[0],0); // 80086204
  if (!crb(c,1)) { goto L_800862E4; } // 80086208
  c->r[4]=0u+0x801C0000u; // 8008620C
  c->r[3]=c->r[4]+0xFFFF9960u; // 80086210
  c->r[0]=R32(c->r[4]+0xFFFF9960u); // 80086214
  c->r[3]=R32(c->r[3]+0x00000004u); // 80086218
  cmpu(c,0,c->r[3],c->r[0]); // 8008621C
  if (!crb(c,0)) { goto L_80086230; } // 80086220
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 80086224
  c->r[0]=c->r[0]+c->r[3]; // 80086228
  goto L_8008623C; // 8008622C
L_80086230:;
  c->r[0]=c->r[3]-c->r[0]; // 80086230
  c->r[0]=cntlz(c->r[0]); // 80086234
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80086238
L_8008623C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8008623C
  if (!crb(c,2)) { goto L_800862E4; } // 80086240
  c->r[3]=0u+0x801C0000u; // 80086244
  c->r[3]=c->r[3]+0xFFFF9960u; // 80086248
  c->r[0]=R32(c->r[3]+0x00000008u); // 8008624C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80086250
  c->r[3]=c->r[3]+c->r[0]; // 80086254
  c->r[4]=R32(c->r[3]+0x00000010u); // 80086258
  cmps(c,0,(int32_t)c->r[4],0); // 8008625C
  if (crb(c,2)) { goto L_800862E4; } // 80086260
  c->r[0]=R32(c->r[4]+0x00000028u); // 80086264
  cmps(c,0,(int32_t)c->r[0],0); // 80086268
  if (crb(c,2)) { goto L_8008627C; } // 8008626C
  c->r[3]=R32(c->r[13]+0xFFFF82E0u); // 80086270
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80086274
  W32(c->r[13]+0xFFFF82E0u,c->r[0]); // 80086278
L_8008627C:;
  c->r[4]=c->r[4]+0x80000000u; // 8008627C
  c->r[3]=0u+0x00000000u; // 80086280
  c->lr=0x80086288u; f_800848B0(c); // 80086284
  c->r[8]=0u+0x801C0000u; // 80086288
  c->r[3]=0u+0xAAAB0000u; // 8008628C
  c->r[7]=c->r[8]+0xFFFF9960u; // 80086290
  c->r[4]=R32(c->r[8]+0xFFFF9960u); // 80086294
  c->r[6]=R32(c->r[7]+0x00000008u); // 80086298
  c->r[5]=c->r[3]+0xFFFFAAABu; // 8008629C
  c->r[0]=c->r[4]+0x00000001u; // 800862A0
  c->r[3]=R32(c->r[13]+0xFFFF82E0u); // 800862A4
  c->r[6]=c->r[6]+0x00000001u; // 800862A8
  W32(c->r[8]+0xFFFF9960u,c->r[0]); // 800862AC
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 800862B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800862B4
  W32(c->r[13]+0xFFFF82E0u,c->r[0]); // 800862B8
  c->r[3]=0u+0x00000001u; // 800862BC
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800862C0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 800862C4
  c->r[0]=c->r[6]-c->r[0]; // 800862C8
  W32(c->r[7]+0x00000008u,c->r[0]); // 800862CC
  c->lr=0x800862D4u; f_800848A0(c); // 800862D0
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800862D4
  c->r[3]=0u+0x00000001u; // 800862D8
  c->r[4]=c->r[0]|0x00000001u; // 800862DC
  c->lr=0x800862E4u; f_800848B0(c); // 800862E0
L_800862E4:;
  c->r[3]=R32(c->r[13]+0xFFFF917Cu); // 800862E4
  c->r[3]=c->r[3]+0x0000002Cu; // 800862E8
  c->lr=0x800862F0u; f_8004D780(c); // 800862EC
  c->r[3]=c->r[30]|c->r[30]; // 800862F0
  c->lr=0x800862F8u; f_80049A60(c); // 800862F4
  c->r[3]=R32(c->r[13]+0xFFFF917Cu); // 800862F8
  c->r[31]=R32(c->r[3]+0x00000004u); // 800862FC
L_80086300:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80086300
  c->r[0]=0u+0x00000000u; // 80086304
  W32(c->r[13]+0xFFFF9178u,c->r[0]); // 80086308
  cmps(c,0,(int32_t)c->r[4],0); // 8008630C
  W32(c->r[13]+0xFFFF9180u,c->r[0]); // 80086310
  if (crb(c,2)) { goto L_80086328; } // 80086314
  cmps(c,0,(int32_t)c->r[31],0); // 80086318
  if (crb(c,2)) { goto L_80086328; } // 8008631C
  c->r[3]=R32(c->r[13]+0xFFFF82E4u); // 80086320
  c->lr=0x80086328u; f_80086690(c); // 80086324
L_80086328:;
  c->r[11]=c->r[1]+0x00000030u; // 80086328
  c->r[3]=c->r[31]|c->r[31]; // 8008632C
  c->lr=0x80086334u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086330
  c->r[0]=R32(c->r[1]+0x00000034u); // 80086334
  c->lr=c->r[0]; // 80086338
  c->r[1]=c->r[1]+0x00000030u; // 8008633C
  return; // 80086340
}

// iosCreateHeap
void f_80086350(Ctx* __restrict c) {
  trace_call(0x80086350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086350
  c->r[0]=c->lr; // 80086354
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086358
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008635C
  c->r[31]=0u+0xFFFFFFFCu; // 80086360
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086364
  c->r[30]=c->r[4]|c->r[4]; // 80086368
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008636C
  c->r[29]=c->r[3]|c->r[3]; // 80086370
  c->lr=0x80086378u; f_80049A20(c); // 80086374
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 80086378
  if (!crb(c,2)) { goto L_8008645C; } // 8008637C
  c->r[4]=0u+0x801C0000u; // 80086380
  {uint32_t ea=c->r[4]+0xFFFF9AA0u; c->r[0]=R32(ea); c->r[4]=ea;} // 80086384
  c->r[31]=0u+0x00000000u; // 80086388
  cmps(c,0,(int32_t)c->r[0],0); // 8008638C
  if (crb(c,2)) { goto L_80086408; } // 80086390
  c->r[0]=R32(c->r[4]+0x00000010u); // 80086394
  c->r[31]=0u+0x00000001u; // 80086398
  cmps(c,0,(int32_t)c->r[0],0); // 8008639C
  if (crb(c,2)) { goto L_80086408; } // 800863A0
  c->r[0]=R32(c->r[4]+0x00000020u); // 800863A4
  c->r[31]=0u+0x00000002u; // 800863A8
  cmps(c,0,(int32_t)c->r[0],0); // 800863AC
  if (crb(c,2)) { goto L_80086408; } // 800863B0
  c->r[0]=R32(c->r[4]+0x00000030u); // 800863B4
  c->r[31]=0u+0x00000003u; // 800863B8
  cmps(c,0,(int32_t)c->r[0],0); // 800863BC
  if (crb(c,2)) { goto L_80086408; } // 800863C0
  c->r[0]=R32(c->r[4]+0x00000040u); // 800863C4
  c->r[31]=0u+0x00000004u; // 800863C8
  cmps(c,0,(int32_t)c->r[0],0); // 800863CC
  if (crb(c,2)) { goto L_80086408; } // 800863D0
  c->r[0]=R32(c->r[4]+0x00000050u); // 800863D4
  c->r[31]=0u+0x00000005u; // 800863D8
  cmps(c,0,(int32_t)c->r[0],0); // 800863DC
  if (crb(c,2)) { goto L_80086408; } // 800863E0
  c->r[0]=R32(c->r[4]+0x00000060u); // 800863E4
  c->r[31]=0u+0x00000006u; // 800863E8
  cmps(c,0,(int32_t)c->r[0],0); // 800863EC
  if (crb(c,2)) { goto L_80086408; } // 800863F0
  c->r[0]=R32(c->r[4]+0x00000070u); // 800863F4
  c->r[31]=0u+0x00000007u; // 800863F8
  cmps(c,0,(int32_t)c->r[0],0); // 800863FC
  if (crb(c,2)) { goto L_80086408; } // 80086400
  c->r[31]=0u+0x00000008u; // 80086404
L_80086408:;
  cmps(c,0,(int32_t)c->r[31],8); // 80086408
  if (!crb(c,2)) { goto L_80086418; } // 8008640C
  c->r[31]=0u+0xFFFFFFFBu; // 80086410
  goto L_8008645C; // 80086414
L_80086418:;
  c->r[5]=0u+0x801C0000u; // 80086418
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8008641C
  c->r[5]=c->r[5]+0xFFFF9AA0u; // 80086420
  c->r[4]=0u+0xBABE0000u; // 80086424
  c->r[6]=c->r[5]+c->r[0]; // 80086428
  c->r[0]=0u+0x00000000u; // 8008642C
  W32(c->r[6]+0x00000000u,c->r[29]); // 80086430
  c->r[5]=c->r[30]+0xFFFFFFF0u; // 80086434
  W32(c->r[6]+0x00000008u,c->r[30]); // 80086438
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 8008643C
  W32(c->r[29]+0x00000000u,c->r[4]); // 80086440
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80086444
  W32(c->r[4]+0x00000004u,c->r[5]); // 80086448
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8008644C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80086450
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80086454
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80086458
L_8008645C:;
  c->lr=0x80086460u; f_80049A60(c); // 8008645C
  c->r[3]=c->r[31]|c->r[31]; // 80086460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80086464
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086468
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008646C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086470
  c->lr=c->r[0]; // 80086474
  c->r[1]=c->r[1]+0x00000020u; // 80086478
  return; // 8008647C
}

// __iosAlloc
void f_80086480(Ctx* __restrict c) {
  trace_call(0x80086480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086480
  c->r[0]=c->lr; // 80086484
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008648C
  c->r[31]=0u+0x00000000u; // 80086490
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086494
  c->r[30]=c->r[5]|c->r[5]; // 80086498
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008649C
  c->r[29]=c->r[4]|c->r[4]; // 800864A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800864A4
  c->r[28]=c->r[3]|c->r[3]; // 800864A8
  c->lr=0x800864B0u; f_80049A20(c); // 800864AC
  cmps(c,0,(int32_t)c->r[29],0); // 800864B0
  if (crb(c,2)) { goto L_80086654; } // 800864B4
  cmps(c,0,(int32_t)c->r[30],0); // 800864B8
  if (crb(c,2)) { goto L_80086654; } // 800864BC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800864C0
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 800864C4
  if (!crb(c,2)) { goto L_80086654; } // 800864C8
  cmpu(c,0,c->r[30],0x00000020u); // 800864CC
  if (!crb(c,0)) { goto L_800864D8; } // 800864D0
  c->r[30]=0u+0x00000020u; // 800864D4
L_800864D8:;
  cmpu(c,0,c->r[28],0x00000007u); // 800864D8
  c->r[0]=c->r[29]+0x0000001Fu; // 800864DC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800864E0
  if (crb(c,1)) { goto L_80086500; } // 800864E4
  c->r[4]=0u+0x801C0000u; // 800864E8
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 800864EC
  c->r[4]=c->r[4]+0xFFFF9AA0u; // 800864F0
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 800864F4
  cmps(c,0,(int32_t)c->r[0],0); // 800864F8
  if (!crb(c,2)) { goto L_80086508; } // 800864FC
L_80086500:;
  c->r[31]=0u+0x00000000u; // 80086500
  goto L_80086654; // 80086504
L_80086508:;
  c->r[8]=R32(c->r[4]+0x0000000Cu); // 80086508
  c->r[6]=c->r[30]+0xFFFFFFFFu; // 8008650C
  c->r[5]=0u+0x00000000u; // 80086510
  goto L_8008656C; // 80086514
L_80086518:;
  c->r[7]=R32(c->r[8]+0x00000004u); // 80086518
  c->r[0]=c->r[8]+0x00000010u; // 8008651C
  c->r[0]=c->r[0]&c->r[6]; // 80086520
  cmpu(c,0,c->r[7],c->r[29]); // 80086524
  c->r[0]=c->r[30]-c->r[0]; // 80086528
  c->r[0]=c->r[6]&c->r[0]; // 8008652C
  if (!crb(c,2)) { goto L_80086544; } // 80086530
  cmps(c,0,(int32_t)c->r[0],0); // 80086534
  if (!crb(c,2)) { goto L_80086544; } // 80086538
  c->r[5]=c->r[8]|c->r[8]; // 8008653C
  goto L_80086574; // 80086540
L_80086544:;
  c->r[0]=c->r[29]+c->r[0]; // 80086544
  cmpu(c,0,c->r[7],c->r[0]); // 80086548
  if (crb(c,0)) { goto L_80086568; } // 8008654C
  cmps(c,0,(int32_t)c->r[5],0); // 80086550
  if (crb(c,2)) { goto L_80086564; } // 80086554
  c->r[0]=R32(c->r[5]+0x00000004u); // 80086558
  cmpu(c,0,c->r[7],c->r[0]); // 8008655C
  if (!crb(c,0)) { goto L_80086568; } // 80086560
L_80086564:;
  c->r[5]=c->r[8]|c->r[8]; // 80086564
L_80086568:;
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 80086568
L_8008656C:;
  cmps(c,0,(int32_t)c->r[8],0); // 8008656C
  if (!crb(c,2)) { IRQCHK(c); goto L_80086518; } // 80086570
L_80086574:;
  cmps(c,0,(int32_t)c->r[5],0); // 80086574
  if (crb(c,2)) { goto L_80086654; } // 80086578
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 8008657C
  c->r[0]=c->r[5]+0x00000010u; // 80086580
  c->r[0]=c->r[0]&c->r[7]; // 80086584
  c->r[6]=R32(c->r[5]+0x00000004u); // 80086588
  c->r[0]=c->r[30]-c->r[0]; // 8008658C
  c->r[8]=c->r[7]&c->r[0]; // 80086590
  c->r[7]=c->r[29]+c->r[8]; // 80086594
  c->r[0]=c->r[7]+0x00000010u; // 80086598
  cmpu(c,0,c->r[6],c->r[0]); // 8008659C
  if (!crb(c,1)) { goto L_800865E8; } // 800865A0
  c->r[6]=c->r[5]+c->r[29]; // 800865A4
  c->r[0]=0u+0xBABE0000u; // 800865A8
  c->r[9]=c->r[8]+c->r[6]; // 800865AC
  W32(c->r[9]+0x00000010u,c->r[0]); // 800865B0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800865B4
  c->r[0]=c->r[0]-c->r[29]; // 800865B8
  c->r[6]=c->r[0]-c->r[8]; // 800865BC
  c->r[0]=c->r[6]+0xFFFFFFF0u; // 800865C0
  W32(c->r[9]+0x00000014u,c->r[0]); // 800865C4
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 800865C8
  W32(c->r[9]+0x0000001Cu,c->r[6]); // 800865CC
  c->r[9]=c->r[9]+0x00000010u; // 800865D0
  cmps(c,0,(int32_t)c->r[6],0); // 800865D4
  if (crb(c,2)) { goto L_800865E0; } // 800865D8
  W32(c->r[6]+0x00000008u,c->r[9]); // 800865DC
L_800865E0:;
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 800865E0
  W32(c->r[5]+0x00000004u,c->r[7]); // 800865E4
L_800865E8:;
  c->r[6]=0u+0xBABE0000u; // 800865E8
  c->r[0]=c->r[6]+0x00000001u; // 800865EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800865F0
  c->r[6]=R32(c->r[5]+0x00000008u); // 800865F4
  cmps(c,0,(int32_t)c->r[6],0); // 800865F8
  if (crb(c,2)) { goto L_8008660C; } // 800865FC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80086600
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80086604
  goto L_80086614; // 80086608
L_8008660C:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8008660C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80086610
L_80086614:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80086614
  cmps(c,0,(int32_t)c->r[4],0); // 80086618
  if (crb(c,2)) { goto L_80086628; } // 8008661C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80086620
  W32(c->r[4]+0x00000008u,c->r[0]); // 80086624
L_80086628:;
  c->r[0]=0u+0x00000000u; // 80086628
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8008662C
  c->r[31]=c->r[5]+c->r[8]; // 80086630
  cmps(c,0,(int32_t)c->r[8],0); // 80086634
  W32(c->r[5]+0x00000008u,c->r[0]); // 80086638
  c->r[31]=c->r[31]+0x00000010u; // 8008663C
  if (crb(c,2)) { goto L_80086654; } // 80086640
  c->r[4]=0u+0xBABE0000u; // 80086644
  c->r[0]=c->r[4]+0x00000002u; // 80086648
  W32(c->r[31]+0xFFFFFFF0u,c->r[0]); // 8008664C
  W32(c->r[31]+0xFFFFFFF8u,c->r[5]); // 80086650
L_80086654:;
  c->lr=0x80086658u; f_80049A60(c); // 80086654
  c->r[3]=c->r[31]|c->r[31]; // 80086658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008665C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086660
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086664
  c->r[28]=R32(c->r[1]+0x00000010u); // 80086668
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008666C
  c->lr=c->r[0]; // 80086670
  c->r[1]=c->r[1]+0x00000020u; // 80086674
  return; // 80086678
}

// iosAllocAligned
void f_80086680(Ctx* __restrict c) {
  trace_call(0x80086680u);
  f_80086480(c); return; // 80086680
}

// iosFree
void f_80086690(Ctx* __restrict c) {
  trace_call(0x80086690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086690
  c->r[0]=c->lr; // 80086694
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008669C
  c->r[31]=0u+0xFFFFFFFCu; // 800866A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800866A4
  c->r[30]=c->r[4]|c->r[4]; // 800866A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800866AC
  c->r[29]=c->r[3]|c->r[3]; // 800866B0
  c->lr=0x800866B8u; f_80049A20(c); // 800866B4
  cmps(c,0,(int32_t)c->r[30],0); // 800866B8
  if (crb(c,2)) { goto L_80086854; } // 800866BC
  cmpu(c,0,c->r[29],0x00000007u); // 800866C0
  if (crb(c,1)) { goto L_800866E4; } // 800866C4
  c->r[4]=0u+0x801C0000u; // 800866C8
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 800866CC
  c->r[4]=c->r[4]+0xFFFF9AA0u; // 800866D0
  c->r[5]=c->r[4]+c->r[0]; // 800866D4
  c->r[4]=R32(c->r[4]+c->r[0]); // 800866D8
  cmps(c,0,(int32_t)c->r[4],0); // 800866DC
  if (!crb(c,2)) { goto L_800866EC; } // 800866E0
L_800866E4:;
  c->r[31]=0u+0xFFFFFFFCu; // 800866E4
  goto L_80086854; // 800866E8
L_800866EC:;
  c->r[0]=c->r[4]+0x00000010u; // 800866EC
  cmpu(c,0,c->r[30],c->r[0]); // 800866F0
  if (crb(c,0)) { goto L_80086854; } // 800866F4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800866F8
  c->r[0]=c->r[4]+c->r[0]; // 800866FC
  cmpu(c,0,c->r[30],c->r[0]); // 80086700
  if (crb(c,1)) { goto L_80086854; } // 80086704
  c->r[4]=R32(c->r[30]+0xFFFFFFF0u); // 80086708
  c->r[6]=c->r[30]+0xFFFFFFF0u; // 8008670C
  c->r[0]=c->r[4]+0x45420000u; // 80086710
  cmpu(c,0,c->r[0],0x00000002u); // 80086714
  if (!crb(c,2)) { goto L_80086720; } // 80086718
  c->r[6]=R32(c->r[6]+0x00000008u); // 8008671C
L_80086720:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80086720
  c->r[0]=c->r[4]+0x45420000u; // 80086724
  cmpu(c,0,c->r[0],0x00000001u); // 80086728
  if (!crb(c,2)) { goto L_80086854; } // 8008672C
  c->r[0]=0u+0xBABE0000u; // 80086730
  W32(c->r[6]+0x00000000u,c->r[0]); // 80086734
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80086738
  c->r[7]=c->r[4]|c->r[4]; // 8008673C
  goto L_80086760; // 80086740
  c->r[0]=c->r[0]|0x00000000u; // 80086744
L_80086748:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 80086748
  cmps(c,0,(int32_t)c->r[0],0); // 8008674C
  if (crb(c,2)) { goto L_80086768; } // 80086750
  cmpu(c,0,c->r[0],c->r[6]); // 80086754
  if (crb(c,1)) { goto L_80086768; } // 80086758
  c->r[7]=c->r[0]|c->r[0]; // 8008675C
L_80086760:;
  cmps(c,0,(int32_t)c->r[7],0); // 80086760
  if (!crb(c,2)) { IRQCHK(c); goto L_80086748; } // 80086764
L_80086768:;
  cmps(c,0,(int32_t)c->r[7],0); // 80086768
  if (crb(c,2)) { goto L_8008679C; } // 8008676C
  cmpu(c,0,c->r[6],c->r[7]); // 80086770
  if (!crb(c,1)) { goto L_8008679C; } // 80086774
  W32(c->r[6]+0x00000008u,c->r[7]); // 80086778
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8008677C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80086780
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 80086784
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80086788
  cmps(c,0,(int32_t)c->r[4],0); // 8008678C
  if (crb(c,2)) { goto L_800867BC; } // 80086790
  W32(c->r[4]+0x00000008u,c->r[6]); // 80086794
  goto L_800867BC; // 80086798
L_8008679C:;
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 8008679C
  c->r[0]=0u+0x00000000u; // 800867A0
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 800867A4
  W32(c->r[6]+0x00000008u,c->r[0]); // 800867A8
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 800867AC
  cmps(c,0,(int32_t)c->r[4],0); // 800867B0
  if (crb(c,2)) { goto L_800867BC; } // 800867B4
  W32(c->r[4]+0x00000008u,c->r[6]); // 800867B8
L_800867BC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800867BC
  if (crb(c,2)) { goto L_80086804; } // 800867C0
  c->r[0]=R32(c->r[6]+0x00000004u); // 800867C4
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800867C8
  c->r[4]=c->r[6]+c->r[0]; // 800867CC
  c->r[0]=c->r[4]+0x00000010u; // 800867D0
  cmpu(c,0,c->r[5],c->r[0]); // 800867D4
  if (!crb(c,2)) { goto L_80086804; } // 800867D8
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 800867DC
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 800867E0
  cmps(c,0,(int32_t)c->r[4],0); // 800867E4
  if (crb(c,2)) { goto L_800867F0; } // 800867E8
  W32(c->r[4]+0x00000008u,c->r[6]); // 800867EC
L_800867F0:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 800867F0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800867F4
  c->r[4]=c->r[0]+c->r[4]; // 800867F8
  c->r[0]=c->r[4]+0x00000010u; // 800867FC
  W32(c->r[6]+0x00000004u,c->r[0]); // 80086800
L_80086804:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 80086804
  cmps(c,0,(int32_t)c->r[5],0); // 80086808
  if (crb(c,2)) { goto L_80086850; } // 8008680C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80086810
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80086814
  c->r[4]=c->r[5]+c->r[0]; // 80086818
  c->r[0]=c->r[4]+0x00000010u; // 8008681C
  cmpu(c,0,c->r[6],c->r[0]); // 80086820
  if (!crb(c,2)) { goto L_80086850; } // 80086824
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80086828
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8008682C
  cmps(c,0,(int32_t)c->r[4],0); // 80086830
  if (crb(c,2)) { goto L_8008683C; } // 80086834
  W32(c->r[4]+0x00000008u,c->r[5]); // 80086838
L_8008683C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8008683C
  c->r[0]=R32(c->r[6]+0x00000004u); // 80086840
  c->r[4]=c->r[0]+c->r[4]; // 80086844
  c->r[0]=c->r[4]+0x00000010u; // 80086848
  W32(c->r[5]+0x00000004u,c->r[0]); // 8008684C
L_80086850:;
  c->r[31]=0u+0x00000000u; // 80086850
L_80086854:;
  c->lr=0x80086858u; f_80049A60(c); // 80086854
  c->r[3]=c->r[31]|c->r[31]; // 80086858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008685C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086860
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086864
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086868
  c->lr=c->r[0]; // 8008686C
  c->r[1]=c->r[1]+0x00000020u; // 80086870
  return; // 80086874
}

// fn_80086880
void f_80086880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086880
  c->r[0]=c->lr; // 80086884
  c->r[3]=0u+0x00000000u; // 80086888
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008688C
  c->r[0]=0u+0x00000006u; // 80086890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80086894
  c->r[31]=0u+0x801C0000u; // 80086898
  c->r[31]=c->r[31]+0xFFFF9B20u; // 8008689C
  W32(c->r[13]+0xFFFF9188u,c->r[3]); // 800868A0
  c->r[4]=c->r[31]+0x00000C00u; // 800868A4
  c->r[5]=c->r[31]+0x00000D80u; // 800868A8
  W32(c->r[13]+0xFFFF918Cu,c->r[3]); // 800868AC
  c->ctr=c->r[0]; // 800868B0
L_800868B4:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 800868B4
  W32(c->r[5]+0x00000000u,c->r[3]); // 800868B8
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800868BC
  W32(c->r[5]+0x00000008u,c->r[3]); // 800868C0
  W32(c->r[5]+0x00000014u,c->r[3]); // 800868C4
  W32(c->r[5]+0x00000010u,c->r[3]); // 800868C8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 800868CC
  W32(c->r[5]+0x00000018u,c->r[3]); // 800868D0
  W32(c->r[5]+0x00000024u,c->r[3]); // 800868D4
  W32(c->r[5]+0x00000020u,c->r[3]); // 800868D8
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 800868DC
  W32(c->r[5]+0x00000028u,c->r[3]); // 800868E0
  W32(c->r[5]+0x00000034u,c->r[3]); // 800868E4
  W32(c->r[5]+0x00000030u,c->r[3]); // 800868E8
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 800868EC
  W32(c->r[5]+0x00000038u,c->r[3]); // 800868F0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800868F4
  W32(c->r[5]+0x00000044u,c->r[3]); // 800868F8
  W32(c->r[4]+0x00000004u,c->r[3]); // 800868FC
  W32(c->r[5]+0x00000040u,c->r[3]); // 80086900
  W32(c->r[4]+0x00000008u,c->r[3]); // 80086904
  W32(c->r[5]+0x0000004Cu,c->r[3]); // 80086908
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8008690C
  W32(c->r[5]+0x00000048u,c->r[3]); // 80086910
  W32(c->r[4]+0x00000010u,c->r[3]); // 80086914
  W32(c->r[5]+0x00000054u,c->r[3]); // 80086918
  W32(c->r[4]+0x00000014u,c->r[3]); // 8008691C
  W32(c->r[5]+0x00000050u,c->r[3]); // 80086920
  W32(c->r[4]+0x00000018u,c->r[3]); // 80086924
  W32(c->r[5]+0x0000005Cu,c->r[3]); // 80086928
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 8008692C
  W32(c->r[5]+0x00000058u,c->r[3]); // 80086930
  W32(c->r[4]+0x00000020u,c->r[3]); // 80086934
  W32(c->r[5]+0x00000064u,c->r[3]); // 80086938
  W32(c->r[4]+0x00000024u,c->r[3]); // 8008693C
  W32(c->r[5]+0x00000060u,c->r[3]); // 80086940
  W32(c->r[4]+0x00000028u,c->r[3]); // 80086944
  W32(c->r[5]+0x0000006Cu,c->r[3]); // 80086948
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8008694C
  W32(c->r[5]+0x00000068u,c->r[3]); // 80086950
  W32(c->r[4]+0x00000030u,c->r[3]); // 80086954
  W32(c->r[5]+0x00000074u,c->r[3]); // 80086958
  W32(c->r[4]+0x00000034u,c->r[3]); // 8008695C
  W32(c->r[5]+0x00000070u,c->r[3]); // 80086960
  W32(c->r[4]+0x00000038u,c->r[3]); // 80086964
  W32(c->r[5]+0x0000007Cu,c->r[3]); // 80086968
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 8008696C
  c->r[4]=c->r[4]+0x00000040u; // 80086970
  W32(c->r[5]+0x00000078u,c->r[3]); // 80086974
  c->r[5]=c->r[5]+0x00000080u; // 80086978
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800868B4; } // 8008697C
  c->r[3]=c->r[31]+0x00001080u; // 80086980
  c->r[4]=0u+0x00000000u; // 80086984
  c->r[5]=0u+0x00001800u; // 80086988
  c->lr=0x80086990u; f_80004714(c); // 8008698C
  c->r[3]=c->r[31]+0x00002880u; // 80086990
  c->r[4]=0u+0x00000000u; // 80086994
  c->r[5]=0u+0x00001200u; // 80086998
  c->lr=0x800869A0u; f_80004714(c); // 8008699C
  c->r[3]=c->r[31]+0x00000000u; // 800869A0
  c->r[4]=0u+0x00000000u; // 800869A4
  c->r[5]=0u+0x00000C00u; // 800869A8
  c->lr=0x800869B0u; f_80004714(c); // 800869AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800869B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800869B4
  c->lr=c->r[0]; // 800869B8
  c->r[1]=c->r[1]+0x00000010u; // 800869BC
  return; // 800869C0
}

// fn_800869D0
void f_800869D0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[13]+0xFFFF9188u); // 800869D0
  c->r[4]=R32(c->r[13]+0xFFFF918Cu); // 800869D4
  c->r[0]=c->r[5]+0x00000001u; // 800869D8
  W32(c->r[13]+0xFFFF9188u,c->r[0]); // 800869DC
  c->r[0]=c->r[4]+0x00000001u; // 800869E0
  W32(c->r[13]+0xFFFF918Cu,c->r[0]); // 800869E4
  f_80086A10(c); return; // 800869E8
}

// IPCiProfAck
void f_800869F0(Ctx* __restrict c) {
  trace_call(0x800869F0u);
  c->r[3]=R32(c->r[13]+0xFFFF918Cu); // 800869F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800869F4
  W32(c->r[13]+0xFFFF918Cu,c->r[0]); // 800869F8
  return; // 800869FC
}

// fn_80086A00
void f_80086A00(Ctx* __restrict c) {
  c->r[4]=R32(c->r[13]+0xFFFF9188u); // 80086A00
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80086A04
  W32(c->r[13]+0xFFFF9188u,c->r[0]); // 80086A08
  f_80086B30(c); return; // 80086A0C
}

// fn_80086A10
void f_80086A10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086A10
  c->r[0]=c->lr; // 80086A14
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086A18
  c->r[11]=c->r[1]+0x00000030u; // 80086A1C
  c->lr=0x80086A24u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086A20
  c->r[30]=0u+0x801C0000u; // 80086A24
  c->r[0]=0u+0x00000060u; // 80086A28
  c->r[30]=c->r[30]+0xFFFF9B20u; // 80086A2C
  c->r[25]=c->r[3]|c->r[3]; // 80086A30
  c->r[3]=c->r[30]+0x00000C00u; // 80086A34
  c->r[27]=0u+0x00000000u; // 80086A38
  c->ctr=c->r[0]; // 80086A3C
L_80086A40:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80086A40
  cmps(c,0,(int32_t)c->r[0],0); // 80086A44
  if (!crb(c,2)) { goto L_80086B0C; } // 80086A48
  c->lr=0x80086A50u; f_80049A20(c); // 80086A4C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80086A50
  c->r[4]=c->r[30]+0x00000C00u; // 80086A54
  W32(c->r[4]+c->r[0],c->r[25]); // 80086A58
  c->r[26]=c->r[3]|c->r[3]; // 80086A5C
  c->r[28]=rotl(c->r[27],5)&0xFFFFFFE0u; // 80086A60
  c->r[31]=c->r[30]+0x00000000u; // 80086A64
  c->r[0]=R32(c->r[25]+0x00000004u); // 80086A68
  c->r[29]=c->r[31]+c->r[28]; // 80086A6C
  c->r[3]=R32(c->r[25]+0x00000000u); // 80086A70
  W32(c->r[31]+c->r[28],c->r[3]); // 80086A74
  W32(c->r[29]+0x00000004u,c->r[0]); // 80086A78
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 80086A7C
  c->r[3]=R32(c->r[25]+0x00000008u); // 80086A80
  W32(c->r[29]+0x00000008u,c->r[3]); // 80086A84
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80086A88
  c->r[0]=R32(c->r[25]+0x00000014u); // 80086A8C
  c->r[3]=R32(c->r[25]+0x00000010u); // 80086A90
  W32(c->r[29]+0x00000010u,c->r[3]); // 80086A94
  W32(c->r[29]+0x00000014u,c->r[0]); // 80086A98
  c->r[0]=R32(c->r[25]+0x0000001Cu); // 80086A9C
  c->r[3]=R32(c->r[25]+0x00000018u); // 80086AA0
  W32(c->r[29]+0x00000018u,c->r[3]); // 80086AA4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80086AA8
  c->lr=0x80086AB0u; f_8004DAA0(c); // 80086AAC
  c->r[5]=rotl(c->r[27],3)&0xFFFFFFF8u; // 80086AB0
  c->r[0]=c->r[30]+0x00000D80u; // 80086AB4
  c->r[5]=c->r[0]+c->r[5]; // 80086AB8
  c->r[0]=R32(c->r[29]+0x00000000u); // 80086ABC
  W32(c->r[5]+0x00000004u,c->r[4]); // 80086AC0
  cmpu(c,0,c->r[0],0x00000001u); // 80086AC4
  W32(c->r[5]+0x00000000u,c->r[3]); // 80086AC8
  if (!crb(c,2)) { goto L_80086B00; } // 80086ACC
  c->r[29]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 80086AD0
  c->r[27]=c->r[31]+c->r[28]; // 80086AD4
  c->r[25]=c->r[30]+0x00002880u; // 80086AD8
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 80086ADC
  c->r[5]=0u+0x0000002Fu; // 80086AE0
  c->r[28]=c->r[25]+c->r[29]; // 80086AE4
  c->r[3]=c->r[28]|c->r[28]; // 80086AE8
  c->r[4]=c->r[4]+0x80000000u; // 80086AEC
  c->lr=0x80086AF4u; f_80075200(c); // 80086AF0
  c->r[0]=0u+0x00000000u; // 80086AF4
  W8(c->r[28]+0x0000002Fu,c->r[0]); // 80086AF8
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 80086AFC
L_80086B00:;
  c->r[3]=c->r[26]|c->r[26]; // 80086B00
  c->lr=0x80086B08u; f_80049A60(c); // 80086B04
  goto L_80086B18; // 80086B08
L_80086B0C:;
  c->r[3]=c->r[3]+0x00000004u; // 80086B0C
  c->r[27]=c->r[27]+0x00000001u; // 80086B10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80086A40; } // 80086B14
L_80086B18:;
  c->r[11]=c->r[1]+0x00000030u; // 80086B18
  c->lr=0x80086B20u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086B1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80086B20
  c->lr=c->r[0]; // 80086B24
  c->r[1]=c->r[1]+0x00000030u; // 80086B28
  return; // 80086B2C
}

// fn_80086B30
void f_80086B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086B30
  c->r[0]=c->lr; // 80086B34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086B38
  c->r[11]=c->r[1]+0x00000030u; // 80086B3C
  c->lr=0x80086B44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086B40
  c->r[31]=0u+0x801C0000u; // 80086B44
  c->r[0]=0u+0x00000060u; // 80086B48
  c->r[31]=c->r[31]+0xFFFF9B20u; // 80086B4C
  c->r[25]=c->r[3]|c->r[3]; // 80086B50
  c->r[5]=c->r[31]+0x00000C00u; // 80086B54
  c->r[28]=0u+0x00000000u; // 80086B58
  c->r[6]=c->r[31]+0x00000000u; // 80086B5C
  c->ctr=c->r[0]; // 80086B60
  c->r[0]=c->r[0]|0x00000000u; // 80086B64
L_80086B68:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80086B68
  cmpu(c,0,c->r[3],c->r[0]); // 80086B6C
  if (!crb(c,2)) { goto L_80086C64; } // 80086B70
  c->r[4]=R32(c->r[3]+0x00000008u); // 80086B74
  c->r[0]=R32(c->r[6]+0x00000000u); // 80086B78
  cmpu(c,0,c->r[4],c->r[0]); // 80086B7C
  if (!crb(c,2)) { goto L_80086C64; } // 80086B80
  c->lr=0x80086B88u; f_80049A20(c); // 80086B84
  c->r[30]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80086B88
  c->r[0]=c->r[31]+0x00000000u; // 80086B8C
  c->r[29]=c->r[0]+c->r[30]; // 80086B90
  c->r[0]=R32(c->r[30]+c->r[0]); // 80086B94
  c->r[27]=c->r[3]|c->r[3]; // 80086B98
  cmpu(c,0,c->r[0],0x00000001u); // 80086B9C
  if (!crb(c,2)) { goto L_80086BF4; } // 80086BA0
  c->r[0]=R32(c->r[25]+0x00000004u); // 80086BA4
  cmps(c,0,(int32_t)c->r[0],0); // 80086BA8
  if (crb(c,0)) { goto L_80086BF4; } // 80086BAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80086BB0
  c->r[26]=c->r[31]+0x00001080u; // 80086BB4
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80086BB8
  c->r[5]=0u+0x0000002Fu; // 80086BBC
  c->r[3]=c->r[26]+c->r[0]; // 80086BC0
  c->lr=0x80086BC8u; f_80075200(c); // 80086BC4
  c->r[4]=R32(c->r[25]+0x00000004u); // 80086BC8
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 80086BCC
  c->r[0]=c->r[31]+0x00002880u; // 80086BD0
  c->r[7]=0u+0x00000000u; // 80086BD4
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80086BD8
  c->r[4]=0u+0x00000000u; // 80086BDC
  c->r[3]=c->r[0]+c->r[3]; // 80086BE0
  c->r[5]=0u+0x00000030u; // 80086BE4
  c->r[6]=c->r[26]+c->r[6]; // 80086BE8
  W8(c->r[6]+0x0000002Fu,c->r[7]); // 80086BEC
  c->lr=0x80086BF4u; f_80004714(c); // 80086BF0
L_80086BF4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80086BF4
  cmpu(c,0,c->r[0],0x00000002u); // 80086BF8
  if (!crb(c,2)) { goto L_80086C24; } // 80086BFC
  c->r[3]=c->r[31]+0x00000000u; // 80086C00
  c->r[0]=c->r[31]+0x00001080u; // 80086C04
  c->r[3]=c->r[3]+c->r[30]; // 80086C08
  c->r[4]=0u+0x00000000u; // 80086C0C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80086C10
  c->r[5]=0u+0x00000030u; // 80086C14
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80086C18
  c->r[3]=c->r[0]+c->r[3]; // 80086C1C
  c->lr=0x80086C24u; f_80004714(c); // 80086C20
L_80086C24:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80086C24
  c->r[3]=c->r[31]+0x00000C00u; // 80086C28
  c->r[30]=0u+0x00000000u; // 80086C2C
  W32(c->r[3]+c->r[0],c->r[30]); // 80086C30
  c->r[3]=c->r[29]|c->r[29]; // 80086C34
  c->r[4]=0u+0x00000000u; // 80086C38
  c->r[5]=0u+0x00000020u; // 80086C3C
  c->lr=0x80086C44u; f_80004714(c); // 80086C40
  c->r[3]=rotl(c->r[28],3)&0xFFFFFFF8u; // 80086C44
  c->r[0]=c->r[31]+0x00000D80u; // 80086C48
  c->r[4]=c->r[0]+c->r[3]; // 80086C4C
  W32(c->r[4]+0x00000004u,c->r[30]); // 80086C50
  c->r[3]=c->r[27]|c->r[27]; // 80086C54
  W32(c->r[4]+0x00000000u,c->r[30]); // 80086C58
  c->lr=0x80086C60u; f_80049A60(c); // 80086C5C
  goto L_80086C74; // 80086C60
L_80086C64:;
  c->r[5]=c->r[5]+0x00000004u; // 80086C64
  c->r[6]=c->r[6]+0x00000020u; // 80086C68
  c->r[28]=c->r[28]+0x00000001u; // 80086C6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80086B68; } // 80086C70
L_80086C74:;
  c->r[11]=c->r[1]+0x00000030u; // 80086C74
  c->lr=0x80086C7Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086C78
  c->r[0]=R32(c->r[1]+0x00000034u); // 80086C7C
  c->lr=c->r[0]; // 80086C80
  c->r[1]=c->r[1]+0x00000030u; // 80086C84
  return; // 80086C88
}

// fn_80086C90
void f_80086C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086C90
  c->r[0]=c->lr; // 80086C94
  W32(c->r[1]+0x00000074u,c->r[0]); // 80086C98
  c->r[11]=c->r[1]+0x00000070u; // 80086C9C
  c->lr=0x80086CA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086CA0
  c->r[0]=0u+0x00000000u; // 80086CA4
  W32(c->r[1]+0x00000018u,c->r[0]); // 80086CA8
  c->r[26]=c->r[3]|c->r[3]; // 80086CAC
  c->r[27]=c->r[4]|c->r[4]; // 80086CB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80086CB4
  c->r[28]=c->r[5]|c->r[5]; // 80086CB8
  c->r[29]=c->r[6]|c->r[6]; // 80086CBC
  c->r[30]=c->r[7]|c->r[7]; // 80086CC0
  W32(c->r[1]+0x00000020u,c->r[0]); // 80086CC4
  c->r[31]=c->r[8]|c->r[8]; // 80086CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086CCC
  W32(c->r[1]+0x00000028u,c->r[0]); // 80086CD0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80086CD4
  W32(c->r[1]+0x00000030u,c->r[0]); // 80086CD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086CDC
  W32(c->r[1]+0x00000038u,c->r[0]); // 80086CE0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80086CE4
  W32(c->r[1]+0x00000040u,c->r[0]); // 80086CE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80086CEC
  W32(c->r[1]+0x00000048u,c->r[0]); // 80086CF0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80086CF4
  W32(c->r[1]+0x00000050u,c->r[0]); // 80086CF8
  W32(c->r[1]+0x00000054u,c->r[0]); // 80086CFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80086D00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80086D04
  W32(c->r[1]+0x00000008u,c->r[0]); // 80086D08
  c->lr=0x80086D10u; f_80087D50(c); // 80086D0C
  cmps(c,0,(int32_t)c->r[3],0); // 80086D10
  if (!crb(c,2)) { goto L_80086D20; } // 80086D14
  c->r[3]=0u+0xFFFFFF9Bu; // 80086D18
  goto L_80086DB8; // 80086D1C
L_80086D20:;
  c->r[4]=c->r[26]|c->r[26]; // 80086D20
  c->r[3]=c->r[1]+0x00000018u; // 80086D24
  c->lr=0x80086D2Cu; f_80088BF0(c); // 80086D28
  cmps(c,0,(int32_t)c->r[31],0); // 80086D2C
  if (!crb(c,2)) { goto L_80086D4C; } // 80086D30
  c->r[3]=c->r[1]+0x00000018u; // 80086D34
  c->lr=0x80086D3Cu; f_80088960(c); // 80086D38
  cmps(c,0,(int32_t)c->r[3],0); // 80086D3C
  if (crb(c,2)) { goto L_80086D4C; } // 80086D40
  c->r[3]=0u+0xFFFFFF9Au; // 80086D44
  goto L_80086DB8; // 80086D48
L_80086D4C:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 80086D4C
  if (!crb(c,2)) { goto L_80086D5C; } // 80086D50
  c->r[3]=0u+0xFFFFFF9Bu; // 80086D54
  goto L_80086DB8; // 80086D58
L_80086D5C:;
  c->r[3]=c->r[27]|c->r[27]; // 80086D5C
  c->r[4]=c->r[1]+0x00000010u; // 80086D60
  c->r[5]=c->r[1]+0x0000000Cu; // 80086D64
  c->r[6]=c->r[1]+0x00000008u; // 80086D68
  c->lr=0x80086D70u; f_80087970(c); // 80086D6C
  cmps(c,0,(int32_t)c->r[30],0); // 80086D70
  if (crb(c,2)) { goto L_80086DA0; } // 80086D74
  c->r[8]=0u+0x80090000u; // 80086D78
  c->r[5]=R32(c->r[1]+0x00000010u); // 80086D7C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80086D80
  c->r[4]=c->r[28]|c->r[28]; // 80086D84
  c->r[7]=R32(c->r[1]+0x00000008u); // 80086D88
  c->r[9]=c->r[29]|c->r[29]; // 80086D8C
  c->r[3]=c->r[1]+0x00000018u; // 80086D90
  c->r[8]=c->r[8]+0xFFFF8F40u; // 80086D94
  c->lr=0x80086D9Cu; f_80084130(c); // 80086D98
  goto L_80086DB8; // 80086D9C
L_80086DA0:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 80086DA0
  c->r[4]=c->r[28]|c->r[28]; // 80086DA4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80086DA8
  c->r[3]=c->r[1]+0x00000018u; // 80086DAC
  c->r[7]=R32(c->r[1]+0x00000008u); // 80086DB0
  c->lr=0x80086DB8u; f_80084030(c); // 80086DB4
L_80086DB8:;
  c->r[11]=c->r[1]+0x00000070u; // 80086DB8
  c->lr=0x80086DC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086DBC
  c->r[0]=R32(c->r[1]+0x00000074u); // 80086DC0
  c->lr=c->r[0]; // 80086DC4
  c->r[1]=c->r[1]+0x00000070u; // 80086DC8
  return; // 80086DCC
}

// NANDCreate
void f_80086DD0(Ctx* __restrict c) {
  trace_call(0x80086DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086DD0
  c->r[0]=c->lr; // 80086DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80086DDC
  c->r[31]=c->r[5]|c->r[5]; // 80086DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086DE4
  c->r[30]=c->r[4]|c->r[4]; // 80086DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80086DEC
  c->r[29]=c->r[3]|c->r[3]; // 80086DF0
  c->lr=0x80086DF8u; f_80088A00(c); // 80086DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80086DF8
  if (crb(c,2)) { goto L_80086E24; } // 80086DFC
  c->r[3]=c->r[29]|c->r[29]; // 80086E00
  c->r[4]=c->r[30]|c->r[30]; // 80086E04
  c->r[5]=c->r[31]|c->r[31]; // 80086E08
  c->r[6]=0u+0x00000000u; // 80086E0C
  c->r[7]=0u+0x00000000u; // 80086E10
  c->r[8]=0u+0x00000000u; // 80086E14
  c->lr=0x80086E1Cu; f_80086C90(c); // 80086E18
  c->lr=0x80086E20u; f_80088A40(c); // 80086E1C
  goto L_80086E28; // 80086E20
L_80086E24:;
  c->r[3]=0u+0xFFFFFF80u; // 80086E24
L_80086E28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086E28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80086E2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086E30
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086E34
  c->lr=c->r[0]; // 80086E38
  c->r[1]=c->r[1]+0x00000020u; // 80086E3C
  return; // 80086E40
}

// NANDPrivateCreate
void f_80086E50(Ctx* __restrict c) {
  trace_call(0x80086E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086E50
  c->r[0]=c->lr; // 80086E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086E58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80086E5C
  c->r[31]=c->r[5]|c->r[5]; // 80086E60
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086E64
  c->r[30]=c->r[4]|c->r[4]; // 80086E68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80086E6C
  c->r[29]=c->r[3]|c->r[3]; // 80086E70
  c->lr=0x80086E78u; f_80088A00(c); // 80086E74
  cmps(c,0,(int32_t)c->r[3],0); // 80086E78
  if (crb(c,2)) { goto L_80086EA4; } // 80086E7C
  c->r[3]=c->r[29]|c->r[29]; // 80086E80
  c->r[4]=c->r[30]|c->r[30]; // 80086E84
  c->r[5]=c->r[31]|c->r[31]; // 80086E88
  c->r[6]=0u+0x00000000u; // 80086E8C
  c->r[7]=0u+0x00000000u; // 80086E90
  c->r[8]=0u+0x00000001u; // 80086E94
  c->lr=0x80086E9Cu; f_80086C90(c); // 80086E98
  c->lr=0x80086EA0u; f_80088A40(c); // 80086E9C
  goto L_80086EA8; // 80086EA0
L_80086EA4:;
  c->r[3]=0u+0xFFFFFF80u; // 80086EA4
L_80086EA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086EA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80086EAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086EB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086EB4
  c->lr=c->r[0]; // 80086EB8
  c->r[1]=c->r[1]+0x00000020u; // 80086EBC
  return; // 80086EC0
}

// fn_80086ED0
void f_80086ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086ED0
  c->r[0]=c->lr; // 80086ED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086ED8
  c->r[11]=c->r[1]+0x00000020u; // 80086EDC
  c->lr=0x80086EE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086EE0
  c->r[27]=c->r[3]|c->r[3]; // 80086EE4
  c->r[28]=c->r[4]|c->r[4]; // 80086EE8
  c->r[29]=c->r[5]|c->r[5]; // 80086EEC
  c->r[30]=c->r[6]|c->r[6]; // 80086EF0
  c->r[31]=c->r[7]|c->r[7]; // 80086EF4
  c->lr=0x80086EFCu; f_80088A00(c); // 80086EF8
  cmps(c,0,(int32_t)c->r[3],0); // 80086EFC
  if (!crb(c,2)) { goto L_80086F0C; } // 80086F00
  c->r[3]=0u+0xFFFFFF80u; // 80086F04
  goto L_80086F30; // 80086F08
L_80086F0C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 80086F0C
  c->r[3]=c->r[27]|c->r[27]; // 80086F10
  c->r[4]=c->r[28]|c->r[28]; // 80086F14
  c->r[5]=c->r[29]|c->r[29]; // 80086F18
  c->r[6]=c->r[31]|c->r[31]; // 80086F1C
  c->r[7]=0u+0x00000001u; // 80086F20
  c->r[8]=0u+0x00000001u; // 80086F24
  c->lr=0x80086F2Cu; f_80086C90(c); // 80086F28
  c->lr=0x80086F30u; f_80088A40(c); // 80086F2C
L_80086F30:;
  c->r[11]=c->r[1]+0x00000020u; // 80086F30
  c->lr=0x80086F38u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80086F34
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086F38
  c->lr=c->r[0]; // 80086F3C
  c->r[1]=c->r[1]+0x00000020u; // 80086F40
  return; // 80086F44
}

// fn_80086F50
void f_80086F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086F50
  c->r[0]=c->lr; // 80086F54
  W32(c->r[1]+0x00000054u,c->r[0]); // 80086F58
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80086F5C
  c->r[31]=c->r[3]|c->r[3]; // 80086F60
  c->lr=0x80086F68u; f_80088A00(c); // 80086F64
  cmps(c,0,(int32_t)c->r[3],0); // 80086F68
  if (!crb(c,2)) { goto L_80086F78; } // 80086F6C
  c->r[3]=0u+0xFFFFFF80u; // 80086F70
  goto L_80086FEC; // 80086F74
L_80086F78:;
  c->r[0]=0u+0x00000000u; // 80086F78
  W32(c->r[1]+0x00000008u,c->r[0]); // 80086F7C
  c->r[4]=c->r[31]|c->r[31]; // 80086F80
  c->r[3]=c->r[1]+0x00000008u; // 80086F84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80086F88
  W32(c->r[1]+0x00000010u,c->r[0]); // 80086F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086F90
  W32(c->r[1]+0x00000018u,c->r[0]); // 80086F94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80086F98
  W32(c->r[1]+0x00000020u,c->r[0]); // 80086F9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80086FA0
  W32(c->r[1]+0x00000028u,c->r[0]); // 80086FA4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80086FA8
  W32(c->r[1]+0x00000030u,c->r[0]); // 80086FAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086FB0
  W32(c->r[1]+0x00000038u,c->r[0]); // 80086FB4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80086FB8
  W32(c->r[1]+0x00000040u,c->r[0]); // 80086FBC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80086FC0
  c->lr=0x80086FC8u; f_80088BF0(c); // 80086FC4
  c->r[3]=c->r[1]+0x00000008u; // 80086FC8
  c->lr=0x80086FD0u; f_80088960(c); // 80086FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80086FD0
  if (crb(c,2)) { goto L_80086FE0; } // 80086FD4
  c->r[3]=0u+0xFFFFFF9Au; // 80086FD8
  goto L_80086FE8; // 80086FDC
L_80086FE0:;
  c->r[3]=c->r[1]+0x00000008u; // 80086FE0
  c->lr=0x80086FE8u; f_80083B20(c); // 80086FE4
L_80086FE8:;
  c->lr=0x80086FECu; f_80088A40(c); // 80086FE8
L_80086FEC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80086FEC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80086FF0
  c->lr=c->r[0]; // 80086FF4
  c->r[1]=c->r[1]+0x00000050u; // 80086FF8
  return; // 80086FFC
}

// fn_80087000
void f_80087000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087000
  c->r[0]=c->lr; // 80087004
  W32(c->r[1]+0x00000054u,c->r[0]); // 80087008
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8008700C
  c->r[31]=c->r[3]|c->r[3]; // 80087010
  c->lr=0x80087018u; f_80088A00(c); // 80087014
  cmps(c,0,(int32_t)c->r[3],0); // 80087018
  if (!crb(c,2)) { goto L_80087028; } // 8008701C
  c->r[3]=0u+0xFFFFFF80u; // 80087020
  goto L_80087084; // 80087024
L_80087028:;
  c->r[0]=0u+0x00000000u; // 80087028
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008702C
  c->r[4]=c->r[31]|c->r[31]; // 80087030
  c->r[3]=c->r[1]+0x00000008u; // 80087034
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087038
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008703C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087040
  W32(c->r[1]+0x00000018u,c->r[0]); // 80087044
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80087048
  W32(c->r[1]+0x00000020u,c->r[0]); // 8008704C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087050
  W32(c->r[1]+0x00000028u,c->r[0]); // 80087054
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80087058
  W32(c->r[1]+0x00000030u,c->r[0]); // 8008705C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80087060
  W32(c->r[1]+0x00000038u,c->r[0]); // 80087064
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80087068
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008706C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80087070
  c->lr=0x80087078u; f_80088BF0(c); // 80087074
  c->r[3]=c->r[1]+0x00000008u; // 80087078
  c->lr=0x80087080u; f_80083B20(c); // 8008707C
  c->lr=0x80087084u; f_80088A40(c); // 80087080
L_80087084:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80087084
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80087088
  c->lr=c->r[0]; // 8008708C
  c->r[1]=c->r[1]+0x00000050u; // 80087090
  return; // 80087094
}

// NANDPrivateDeleteAsync
void f_800870A0(Ctx* __restrict c) {
  trace_call(0x800870A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800870A0
  c->r[0]=c->lr; // 800870A4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800870A8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800870AC
  c->r[31]=c->r[5]|c->r[5]; // 800870B0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800870B4
  c->r[30]=c->r[4]|c->r[4]; // 800870B8
  W32(c->r[1]+0x00000054u,c->r[29]); // 800870BC
  c->r[29]=c->r[3]|c->r[3]; // 800870C0
  c->lr=0x800870C8u; f_80088A00(c); // 800870C4
  cmps(c,0,(int32_t)c->r[3],0); // 800870C8
  if (!crb(c,2)) { goto L_800870D8; } // 800870CC
  c->r[3]=0u+0xFFFFFF80u; // 800870D0
  goto L_80087144; // 800870D4
L_800870D8:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800870D8
  c->r[0]=0u+0x00000000u; // 800870DC
  c->r[4]=c->r[29]|c->r[29]; // 800870E0
  c->r[3]=c->r[1]+0x00000008u; // 800870E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800870E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800870EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800870F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800870F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800870F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800870FC
  W32(c->r[1]+0x00000020u,c->r[0]); // 80087100
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087104
  W32(c->r[1]+0x00000028u,c->r[0]); // 80087108
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8008710C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80087110
  W32(c->r[1]+0x00000034u,c->r[0]); // 80087114
  W32(c->r[1]+0x00000038u,c->r[0]); // 80087118
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8008711C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80087120
  W32(c->r[1]+0x00000044u,c->r[0]); // 80087124
  c->lr=0x8008712Cu; f_80088BF0(c); // 80087128
  c->r[4]=0u+0x80090000u; // 8008712C
  c->r[5]=c->r[31]|c->r[31]; // 80087130
  c->r[3]=c->r[1]+0x00000008u; // 80087134
  c->r[4]=c->r[4]+0xFFFF8F40u; // 80087138
  c->lr=0x80087140u; f_80083C00(c); // 8008713C
  c->lr=0x80087144u; f_80088A40(c); // 80087140
L_80087144:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 80087144
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80087148
  c->r[30]=R32(c->r[1]+0x00000058u); // 8008714C
  c->r[29]=R32(c->r[1]+0x00000054u); // 80087150
  c->lr=c->r[0]; // 80087154
  c->r[1]=c->r[1]+0x00000060u; // 80087158
  return; // 8008715C
}

// fn_80087160
void f_80087160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087160
  c->r[0]=c->lr; // 80087164
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008716C
  c->r[31]=c->r[5]|c->r[5]; // 80087170
  W32(c->r[1]+0x00000018u,c->r[30]); // 80087174
  c->r[30]=c->r[4]|c->r[4]; // 80087178
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008717C
  c->r[29]=c->r[3]|c->r[3]; // 80087180
  c->lr=0x80087188u; f_80088A00(c); // 80087184
  cmps(c,0,(int32_t)c->r[3],0); // 80087188
  if (crb(c,2)) { goto L_800871A8; } // 8008718C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80087190
  c->r[4]=c->r[30]|c->r[30]; // 80087194
  c->r[5]=c->r[31]|c->r[31]; // 80087198
  c->lr=0x800871A0u; f_80084530(c); // 8008719C
  c->lr=0x800871A4u; f_80088A40(c); // 800871A0
  goto L_800871AC; // 800871A4
L_800871A8:;
  c->r[3]=0u+0xFFFFFF80u; // 800871A8
L_800871AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800871AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800871B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800871B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800871B8
  c->lr=c->r[0]; // 800871BC
  c->r[1]=c->r[1]+0x00000020u; // 800871C0
  return; // 800871C4
}

// fn_800871D0
void f_800871D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800871D0
  c->r[0]=c->lr; // 800871D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800871D8
  c->r[11]=c->r[1]+0x00000020u; // 800871DC
  c->lr=0x800871E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800871E0
  c->r[27]=c->r[3]|c->r[3]; // 800871E4
  c->r[28]=c->r[4]|c->r[4]; // 800871E8
  c->r[29]=c->r[5]|c->r[5]; // 800871EC
  c->r[30]=c->r[6]|c->r[6]; // 800871F0
  c->r[31]=c->r[7]|c->r[7]; // 800871F4
  c->lr=0x800871FCu; f_80088A00(c); // 800871F8
  cmps(c,0,(int32_t)c->r[3],0); // 800871FC
  if (!crb(c,2)) { goto L_8008720C; } // 80087200
  c->r[3]=0u+0xFFFFFF80u; // 80087204
  goto L_80087230; // 80087208
L_8008720C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8008720C
  c->r[6]=0u+0x80090000u; // 80087210
  c->r[4]=c->r[28]|c->r[28]; // 80087214
  c->r[5]=c->r[29]|c->r[29]; // 80087218
  c->r[3]=R32(c->r[27]+0x00000000u); // 8008721C
  c->r[7]=c->r[31]|c->r[31]; // 80087220
  c->r[6]=c->r[6]+0xFFFF8F40u; // 80087224
  c->lr=0x8008722Cu; f_80084550(c); // 80087228
  c->lr=0x80087230u; f_80088A40(c); // 8008722C
L_80087230:;
  c->r[11]=c->r[1]+0x00000020u; // 80087230
  c->lr=0x80087238u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087234
  c->r[0]=R32(c->r[1]+0x00000024u); // 80087238
  c->lr=c->r[0]; // 8008723C
  c->r[1]=c->r[1]+0x00000020u; // 80087240
  return; // 80087244
}

// fn_80087250
void f_80087250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087250
  c->r[0]=c->lr; // 80087254
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008725C
  c->r[31]=c->r[5]|c->r[5]; // 80087260
  W32(c->r[1]+0x00000018u,c->r[30]); // 80087264
  c->r[30]=c->r[4]|c->r[4]; // 80087268
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008726C
  c->r[29]=c->r[3]|c->r[3]; // 80087270
  c->lr=0x80087278u; f_80088A00(c); // 80087274
  cmps(c,0,(int32_t)c->r[3],0); // 80087278
  if (crb(c,2)) { goto L_80087298; } // 8008727C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80087280
  c->r[4]=c->r[30]|c->r[30]; // 80087284
  c->r[5]=c->r[31]|c->r[31]; // 80087288
  c->lr=0x80087290u; f_80084600(c); // 8008728C
  c->lr=0x80087294u; f_80088A40(c); // 80087290
  goto L_8008729C; // 80087294
L_80087298:;
  c->r[3]=0u+0xFFFFFF80u; // 80087298
L_8008729C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008729C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800872A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800872A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800872A8
  c->lr=c->r[0]; // 800872AC
  c->r[1]=c->r[1]+0x00000020u; // 800872B0
  return; // 800872B4
}

// fn_800872C0
void f_800872C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800872C0
  c->r[0]=c->lr; // 800872C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800872C8
  c->r[11]=c->r[1]+0x00000020u; // 800872CC
  c->lr=0x800872D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800872D0
  c->r[27]=c->r[3]|c->r[3]; // 800872D4
  c->r[28]=c->r[4]|c->r[4]; // 800872D8
  c->r[29]=c->r[5]|c->r[5]; // 800872DC
  c->r[30]=c->r[6]|c->r[6]; // 800872E0
  c->r[31]=c->r[7]|c->r[7]; // 800872E4
  c->lr=0x800872ECu; f_80088A00(c); // 800872E8
  cmps(c,0,(int32_t)c->r[3],0); // 800872EC
  if (!crb(c,2)) { goto L_800872FC; } // 800872F0
  c->r[3]=0u+0xFFFFFF80u; // 800872F4
  goto L_80087320; // 800872F8
L_800872FC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800872FC
  c->r[6]=0u+0x80090000u; // 80087300
  c->r[4]=c->r[28]|c->r[28]; // 80087304
  c->r[5]=c->r[29]|c->r[29]; // 80087308
  c->r[3]=R32(c->r[27]+0x00000000u); // 8008730C
  c->r[7]=c->r[31]|c->r[31]; // 80087310
  c->r[6]=c->r[6]+0xFFFF8F40u; // 80087314
  c->lr=0x8008731Cu; f_80084620(c); // 80087318
  c->lr=0x80087320u; f_80088A40(c); // 8008731C
L_80087320:;
  c->r[11]=c->r[1]+0x00000020u; // 80087320
  c->lr=0x80087328u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087324
  c->r[0]=R32(c->r[1]+0x00000024u); // 80087328
  c->lr=c->r[0]; // 8008732C
  c->r[1]=c->r[1]+0x00000020u; // 80087330
  return; // 80087334
}

// fn_80087340
void f_80087340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087340
  c->r[0]=c->lr; // 80087344
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008734C
  c->r[31]=c->r[5]|c->r[5]; // 80087350
  W32(c->r[1]+0x00000018u,c->r[30]); // 80087354
  c->r[30]=c->r[4]|c->r[4]; // 80087358
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008735C
  c->r[29]=c->r[3]|c->r[3]; // 80087360
  c->lr=0x80087368u; f_80088A00(c); // 80087364
  cmps(c,0,(int32_t)c->r[3],0); // 80087368
  if (!crb(c,2)) { goto L_80087378; } // 8008736C
  c->r[3]=0u+0xFFFFFF80u; // 80087370
  goto L_800873BC; // 80087374
L_80087378:;
  cmps(c,0,(int32_t)c->r[31],0); // 80087378
  c->r[3]=R32(c->r[29]+0x00000000u); // 8008737C
  c->r[5]=0u+0xFFFFFFFFu; // 80087380
  if (crb(c,2)) { goto L_8008739C; } // 80087384
  cmps(c,0,(int32_t)c->r[31],1); // 80087388
  if (crb(c,2)) { goto L_800873A4; } // 8008738C
  cmps(c,0,(int32_t)c->r[31],2); // 80087390
  if (crb(c,2)) { goto L_800873AC; } // 80087394
  goto L_800873B0; // 80087398
L_8008739C:;
  c->r[5]=0u+0x00000000u; // 8008739C
  goto L_800873B0; // 800873A0
L_800873A4:;
  c->r[5]=0u+0x00000001u; // 800873A4
  goto L_800873B0; // 800873A8
L_800873AC:;
  c->r[5]=0u+0x00000002u; // 800873AC
L_800873B0:;
  c->r[4]=c->r[30]|c->r[30]; // 800873B0
  c->lr=0x800873B8u; f_80084490(c); // 800873B4
  c->lr=0x800873BCu; f_80088A40(c); // 800873B8
L_800873BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800873BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800873C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800873C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800873C8
  c->lr=c->r[0]; // 800873CC
  c->r[1]=c->r[1]+0x00000020u; // 800873D0
  return; // 800873D4
}

// fn_800873E0
void f_800873E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800873E0
  c->r[0]=c->lr; // 800873E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800873E8
  c->r[11]=c->r[1]+0x00000020u; // 800873EC
  c->lr=0x800873F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800873F0
  c->r[27]=c->r[3]|c->r[3]; // 800873F4
  c->r[28]=c->r[4]|c->r[4]; // 800873F8
  c->r[29]=c->r[5]|c->r[5]; // 800873FC
  c->r[30]=c->r[6]|c->r[6]; // 80087400
  c->r[31]=c->r[7]|c->r[7]; // 80087404
  c->lr=0x8008740Cu; f_80088A00(c); // 80087408
  cmps(c,0,(int32_t)c->r[3],0); // 8008740C
  if (!crb(c,2)) { goto L_8008741C; } // 80087410
  c->r[3]=0u+0xFFFFFF80u; // 80087414
  goto L_80087470; // 80087418
L_8008741C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8008741C
  cmps(c,0,(int32_t)c->r[29],0); // 80087420
  c->r[5]=0u+0xFFFFFFFFu; // 80087424
  c->r[3]=R32(c->r[27]+0x00000000u); // 80087428
  if (crb(c,2)) { goto L_80087444; } // 8008742C
  cmps(c,0,(int32_t)c->r[29],1); // 80087430
  if (crb(c,2)) { goto L_8008744C; } // 80087434
  cmps(c,0,(int32_t)c->r[29],2); // 80087438
  if (crb(c,2)) { goto L_80087454; } // 8008743C
  goto L_80087458; // 80087440
L_80087444:;
  c->r[5]=0u+0x00000000u; // 80087444
  goto L_80087458; // 80087448
L_8008744C:;
  c->r[5]=0u+0x00000001u; // 8008744C
  goto L_80087458; // 80087450
L_80087454:;
  c->r[5]=0u+0x00000002u; // 80087454
L_80087458:;
  c->r[6]=0u+0x80090000u; // 80087458
  c->r[4]=c->r[28]|c->r[28]; // 8008745C
  c->r[7]=c->r[31]|c->r[31]; // 80087460
  c->r[6]=c->r[6]+0xFFFF8F40u; // 80087464
  c->lr=0x8008746Cu; f_800844A0(c); // 80087468
  c->lr=0x80087470u; f_80088A40(c); // 8008746C
L_80087470:;
  c->r[11]=c->r[1]+0x00000020u; // 80087470
  c->lr=0x80087478u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087474
  c->r[0]=R32(c->r[1]+0x00000024u); // 80087478
  c->lr=c->r[0]; // 8008747C
  c->r[1]=c->r[1]+0x00000020u; // 80087480
  return; // 80087484
}

// fn_80087490
void f_80087490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087490
  c->r[0]=c->lr; // 80087494
  W32(c->r[1]+0x00000074u,c->r[0]); // 80087498
  c->r[11]=c->r[1]+0x00000070u; // 8008749C
  c->lr=0x800874A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800874A0
  c->r[0]=0u+0x00000000u; // 800874A4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800874A8
  c->r[26]=c->r[3]|c->r[3]; // 800874AC
  c->r[27]=c->r[4]|c->r[4]; // 800874B0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800874B4
  c->r[28]=c->r[5]|c->r[5]; // 800874B8
  c->r[29]=c->r[6]|c->r[6]; // 800874BC
  c->r[30]=c->r[7]|c->r[7]; // 800874C0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800874C4
  c->r[31]=c->r[8]|c->r[8]; // 800874C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800874CC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800874D0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800874D4
  W32(c->r[1]+0x00000030u,c->r[0]); // 800874D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800874DC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800874E0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800874E4
  W32(c->r[1]+0x00000040u,c->r[0]); // 800874E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800874EC
  W32(c->r[1]+0x00000048u,c->r[0]); // 800874F0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800874F4
  W32(c->r[1]+0x00000050u,c->r[0]); // 800874F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800874FC
  c->lr=0x80087504u; f_80087D50(c); // 80087500
  cmps(c,0,(int32_t)c->r[3],0); // 80087504
  if (!crb(c,2)) { goto L_80087514; } // 80087508
  c->r[3]=0u+0xFFFFFF9Bu; // 8008750C
  goto L_800875BC; // 80087510
L_80087514:;
  c->r[4]=c->r[26]|c->r[26]; // 80087514
  c->r[3]=c->r[1]+0x00000018u; // 80087518
  c->lr=0x80087520u; f_80088BF0(c); // 8008751C
  cmps(c,0,(int32_t)c->r[31],0); // 80087520
  if (!crb(c,2)) { goto L_80087540; } // 80087524
  c->r[3]=c->r[1]+0x00000018u; // 80087528
  c->lr=0x80087530u; f_80088960(c); // 8008752C
  cmps(c,0,(int32_t)c->r[3],0); // 80087530
  if (crb(c,2)) { goto L_80087540; } // 80087534
  c->r[3]=0u+0xFFFFFF9Au; // 80087538
  goto L_800875BC; // 8008753C
L_80087540:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 80087540
  if (!crb(c,2)) { goto L_80087550; } // 80087544
  c->r[3]=0u+0xFFFFFF9Bu; // 80087548
  goto L_800875BC; // 8008754C
L_80087550:;
  c->r[0]=0u+0x00000000u; // 80087550
  W32(c->r[1]+0x00000010u,c->r[0]); // 80087554
  c->r[3]=c->r[27]|c->r[27]; // 80087558
  c->r[4]=c->r[1]+0x00000010u; // 8008755C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80087560
  c->r[5]=c->r[1]+0x0000000Cu; // 80087564
  c->r[6]=c->r[1]+0x00000008u; // 80087568
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008756C
  c->lr=0x80087574u; f_80087970(c); // 80087570
  cmps(c,0,(int32_t)c->r[30],0); // 80087574
  if (crb(c,2)) { goto L_800875A4; } // 80087578
  c->r[8]=0u+0x80090000u; // 8008757C
  c->r[5]=R32(c->r[1]+0x00000010u); // 80087580
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80087584
  c->r[4]=c->r[28]|c->r[28]; // 80087588
  c->r[7]=R32(c->r[1]+0x00000008u); // 8008758C
  c->r[9]=c->r[29]|c->r[29]; // 80087590
  c->r[3]=c->r[1]+0x00000018u; // 80087594
  c->r[8]=c->r[8]+0xFFFF8F40u; // 80087598
  c->lr=0x800875A0u; f_800834D0(c); // 8008759C
  goto L_800875BC; // 800875A0
L_800875A4:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800875A4
  c->r[4]=c->r[28]|c->r[28]; // 800875A8
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800875AC
  c->r[3]=c->r[1]+0x00000018u; // 800875B0
  c->r[7]=R32(c->r[1]+0x00000008u); // 800875B4
  c->lr=0x800875BCu; f_800833D0(c); // 800875B8
L_800875BC:;
  c->r[11]=c->r[1]+0x00000070u; // 800875BC
  c->lr=0x800875C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800875C0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800875C4
  c->lr=c->r[0]; // 800875C8
  c->r[1]=c->r[1]+0x00000070u; // 800875CC
  return; // 800875D0
}

// fn_800875E0
void f_800875E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800875E0
  c->r[0]=c->lr; // 800875E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800875E8
  c->r[11]=c->r[1]+0x00000020u; // 800875EC
  c->lr=0x800875F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800875F0
  c->r[27]=c->r[3]|c->r[3]; // 800875F4
  c->r[28]=c->r[4]|c->r[4]; // 800875F8
  c->r[29]=c->r[5]|c->r[5]; // 800875FC
  c->r[30]=c->r[6]|c->r[6]; // 80087600
  c->r[31]=c->r[7]|c->r[7]; // 80087604
  c->lr=0x8008760Cu; f_80088A00(c); // 80087608
  cmps(c,0,(int32_t)c->r[3],0); // 8008760C
  if (!crb(c,2)) { goto L_8008761C; } // 80087610
  c->r[3]=0u+0xFFFFFF80u; // 80087614
  goto L_80087640; // 80087618
L_8008761C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8008761C
  c->r[3]=c->r[27]|c->r[27]; // 80087620
  c->r[4]=c->r[28]|c->r[28]; // 80087624
  c->r[5]=c->r[29]|c->r[29]; // 80087628
  c->r[6]=c->r[31]|c->r[31]; // 8008762C
  c->r[7]=0u+0x00000001u; // 80087630
  c->r[8]=0u+0x00000001u; // 80087634
  c->lr=0x8008763Cu; f_80087490(c); // 80087638
  c->lr=0x80087640u; f_80088A40(c); // 8008763C
L_80087640:;
  c->r[11]=c->r[1]+0x00000020u; // 80087640
  c->lr=0x80087648u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087644
  c->r[0]=R32(c->r[1]+0x00000024u); // 80087648
  c->lr=c->r[0]; // 8008764C
  c->r[1]=c->r[1]+0x00000020u; // 80087650
  return; // 80087654
}

// fn_80087660
void f_80087660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087660
  c->r[0]=c->lr; // 80087664
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80087668
  c->r[0]=0u+0x00000000u; // 8008766C
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80087670
  c->r[31]=c->r[7]|c->r[7]; // 80087674
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80087678
  c->r[30]=c->r[6]|c->r[6]; // 8008767C
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80087680
  c->r[29]=c->r[5]|c->r[5]; // 80087684
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80087688
  c->r[28]=c->r[4]|c->r[4]; // 8008768C
  c->r[4]=c->r[3]|c->r[3]; // 80087690
  c->r[3]=c->r[1]+0x00000058u; // 80087694
  W32(c->r[1]+0x00000058u,c->r[0]); // 80087698
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8008769C
  W32(c->r[1]+0x00000060u,c->r[0]); // 800876A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800876A4
  W32(c->r[1]+0x00000068u,c->r[0]); // 800876A8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800876AC
  W32(c->r[1]+0x00000070u,c->r[0]); // 800876B0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800876B4
  W32(c->r[1]+0x00000078u,c->r[0]); // 800876B8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800876BC
  W32(c->r[1]+0x00000080u,c->r[0]); // 800876C0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800876C4
  W32(c->r[1]+0x00000088u,c->r[0]); // 800876C8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800876CC
  W32(c->r[1]+0x00000090u,c->r[0]); // 800876D0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800876D4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800876D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800876DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800876E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800876E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800876E8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800876EC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800876F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800876F4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800876F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800876FC
  W32(c->r[1]+0x00000040u,c->r[0]); // 80087700
  W32(c->r[1]+0x00000044u,c->r[0]); // 80087704
  W32(c->r[1]+0x00000048u,c->r[0]); // 80087708
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8008770C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80087710
  W32(c->r[1]+0x00000054u,c->r[0]); // 80087714
  W32(c->r[1]+0x00000008u,c->r[0]); // 80087718
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008771C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80087720
  W8(c->r[1]+0x00000014u,c->r[0]); // 80087724
  c->lr=0x8008772Cu; f_80088BF0(c); // 80087728
  c->r[3]=c->r[1]+0x00000008u; // 8008772C
  c->r[4]=c->r[1]+0x00000058u; // 80087730
  c->lr=0x80087738u; f_80088760(c); // 80087734
  c->r[4]=c->r[28]|c->r[28]; // 80087738
  c->r[3]=c->r[1]+0x00000018u; // 8008773C
  c->lr=0x80087744u; f_80088BF0(c); // 80087740
  c->r[3]=c->r[1]+0x00000018u; // 80087744
  c->r[4]=c->r[13]+0xFFFF82E8u; // 80087748
  c->lr=0x80087750u; f_80075270(c); // 8008774C
  cmps(c,0,(int32_t)c->r[3],0); // 80087750
  if (!crb(c,2)) { goto L_80087770; } // 80087754
  c->r[3]=c->r[1]+0x00000018u; // 80087758
  c->r[5]=c->r[1]+0x00000008u; // 8008775C
  c->r[4]=c->r[13]+0xFFFF82ECu; // 80087760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80087764
  c->lr=0x8008776Cu; f_80074F3C(c); // 80087768
  goto L_80087788; // 8008776C
L_80087770:;
  c->r[3]=c->r[1]+0x00000018u; // 80087770
  c->r[4]=c->r[13]+0xFFFF82E8u; // 80087774
  c->lr=0x8008777Cu; f_80075244(c); // 80087778
  c->r[3]=c->r[1]+0x00000018u; // 8008777C
  c->r[4]=c->r[1]+0x00000008u; // 80087780
  c->lr=0x80087788u; f_80075244(c); // 80087784
L_80087788:;
  cmps(c,0,(int32_t)c->r[31],0); // 80087788
  if (!crb(c,2)) { goto L_800877B8; } // 8008778C
  c->r[3]=c->r[1]+0x00000058u; // 80087790
  c->lr=0x80087798u; f_80088960(c); // 80087794
  cmps(c,0,(int32_t)c->r[3],0); // 80087798
  if (!crb(c,2)) { goto L_800877B0; } // 8008779C
  c->r[3]=c->r[1]+0x00000018u; // 800877A0
  c->lr=0x800877A8u; f_80088960(c); // 800877A4
  cmps(c,0,(int32_t)c->r[3],0); // 800877A8
  if (crb(c,2)) { goto L_800877B8; } // 800877AC
L_800877B0:;
  c->r[3]=0u+0xFFFFFF9Au; // 800877B0
  goto L_800877E8; // 800877B4
L_800877B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800877B8
  if (crb(c,2)) { goto L_800877DC; } // 800877BC
  c->r[5]=0u+0x80090000u; // 800877C0
  c->r[6]=c->r[29]|c->r[29]; // 800877C4
  c->r[3]=c->r[1]+0x00000058u; // 800877C8
  c->r[4]=c->r[1]+0x00000018u; // 800877CC
  c->r[5]=c->r[5]+0xFFFF8F40u; // 800877D0
  c->lr=0x800877D8u; f_80083DE0(c); // 800877D4
  goto L_800877E8; // 800877D8
L_800877DC:;
  c->r[3]=c->r[1]+0x00000058u; // 800877DC
  c->r[4]=c->r[1]+0x00000018u; // 800877E0
  c->lr=0x800877E8u; f_80083CD0(c); // 800877E4
L_800877E8:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800877E8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800877EC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800877F0
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800877F4
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800877F8
  c->lr=c->r[0]; // 800877FC
  c->r[1]=c->r[1]+0x000000B0u; // 80087800
  return; // 80087804
}

// fn_80087810
void f_80087810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087810
  c->r[0]=c->lr; // 80087814
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008781C
  c->r[31]=c->r[4]|c->r[4]; // 80087820
  W32(c->r[1]+0x00000008u,c->r[30]); // 80087824
  c->r[30]=c->r[3]|c->r[3]; // 80087828
  c->lr=0x80087830u; f_80088A00(c); // 8008782C
  cmps(c,0,(int32_t)c->r[3],0); // 80087830
  if (crb(c,2)) { goto L_80087858; } // 80087834
  c->r[3]=c->r[30]|c->r[30]; // 80087838
  c->r[4]=c->r[31]|c->r[31]; // 8008783C
  c->r[5]=0u+0x00000000u; // 80087840
  c->r[6]=0u+0x00000000u; // 80087844
  c->r[7]=0u+0x00000000u; // 80087848
  c->lr=0x80087850u; f_80087660(c); // 8008784C
  c->lr=0x80087854u; f_80088A40(c); // 80087850
  goto L_8008785C; // 80087854
L_80087858:;
  c->r[3]=0u+0xFFFFFF80u; // 80087858
L_8008785C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008785C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087860
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087864
  c->lr=c->r[0]; // 80087868
  c->r[1]=c->r[1]+0x00000010u; // 8008786C
  return; // 80087870
}

// fn_80087880
void f_80087880(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80087880
  c->r[12]=c->r[1]|c->r[1]; // 80087884
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 80087888
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8008788C
  c->r[0]=c->lr; // 80087890
  W32(c->r[12]+0x00000004u,c->r[0]); // 80087894
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80087898
  c->r[31]=c->r[4]|c->r[4]; // 8008789C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800878A0
  c->r[30]=c->r[3]|c->r[3]; // 800878A4
  c->lr=0x800878ACu; f_80088A00(c); // 800878A8
  cmps(c,0,(int32_t)c->r[3],0); // 800878AC
  if (!crb(c,2)) { goto L_800878BC; } // 800878B0
  c->r[3]=0u+0xFFFFFF80u; // 800878B4
  goto L_800878EC; // 800878B8
L_800878BC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800878BC
  c->r[4]=c->r[1]+0x00000020u; // 800878C0
  c->lr=0x800878C8u; f_800843C0(c); // 800878C4
  cmps(c,0,(int32_t)c->r[3],0); // 800878C8
  if (!crb(c,2)) { goto L_800878E8; } // 800878CC
  cmps(c,0,(int32_t)c->r[31],0); // 800878D0
  if (crb(c,2)) { goto L_800878E8; } // 800878D4
  c->r[0]=R32(c->r[1]+0x00000020u); // 800878D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 800878DC
  goto L_800878E8; // 800878E0
  W32(0u+0x00000000u,c->r[0]); // 800878E4
L_800878E8:;
  c->lr=0x800878ECu; f_80088A40(c); // 800878E8
L_800878EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800878EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800878F0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800878F4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800878F8
  c->lr=c->r[0]; // 800878FC
  c->r[1]=c->r[10]|c->r[10]; // 80087900
  return; // 80087904
}

// nandComposePerm
void f_80087910(Ctx* __restrict c) {
  trace_call(0x80087910u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80087910
  c->r[7]=0u+0x00000000u; // 80087914
  if (crb(c,2)) { goto L_80087920; } // 80087918
  c->r[7]=c->r[7]|0x00000010u; // 8008791C
L_80087920:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80087920
  if (crb(c,2)) { goto L_8008792C; } // 80087924
  c->r[7]=c->r[7]|0x00000020u; // 80087928
L_8008792C:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 8008792C
  if (crb(c,2)) { goto L_80087938; } // 80087930
  c->r[7]=c->r[7]|0x00000004u; // 80087934
L_80087938:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80087938
  if (crb(c,2)) { goto L_80087944; } // 8008793C
  c->r[7]=c->r[7]|0x00000008u; // 80087940
L_80087944:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80087944
  if (crb(c,2)) { goto L_80087950; } // 80087948
  c->r[7]=c->r[7]|0x00000001u; // 8008794C
L_80087950:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 80087950
  if (crb(c,2)) { goto L_8008795C; } // 80087954
  c->r[7]=c->r[7]|0x00000002u; // 80087958
L_8008795C:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 8008795C
  return; // 80087960
}

// fn_80087970
void f_80087970(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80087970
  c->r[0]=0u+0x00000000u; // 80087974
  W32(c->r[4]+0x00000000u,c->r[0]); // 80087978
  W32(c->r[5]+0x00000000u,c->r[0]); // 8008797C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80087980
  if (crb(c,2)) { goto L_80087994; } // 80087984
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087988
  c->r[0]=c->r[0]|0x00000001u; // 8008798C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80087990
L_80087994:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80087994
  if (crb(c,2)) { goto L_800879A8; } // 80087998
  c->r[0]=R32(c->r[4]+0x00000000u); // 8008799C
  c->r[0]=c->r[0]|0x00000002u; // 800879A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800879A4
L_800879A8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800879A8
  if (crb(c,2)) { goto L_800879BC; } // 800879AC
  c->r[0]=R32(c->r[5]+0x00000000u); // 800879B0
  c->r[0]=c->r[0]|0x00000001u; // 800879B4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800879B8
L_800879BC:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800879BC
  if (crb(c,2)) { goto L_800879D0; } // 800879C0
  c->r[0]=R32(c->r[5]+0x00000000u); // 800879C4
  c->r[0]=c->r[0]|0x00000002u; // 800879C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800879CC
L_800879D0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800879D0
  if (crb(c,2)) { goto L_800879E4; } // 800879D4
  c->r[0]=R32(c->r[6]+0x00000000u); // 800879D8
  c->r[0]=c->r[0]|0x00000001u; // 800879DC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800879E0
L_800879E4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800879E4
  if (crb(c,2)) return; // 800879E8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800879EC
  c->r[0]=c->r[0]|0x00000002u; // 800879F0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800879F4
  return; // 800879F8
}

// fn_80087A00
void f_80087A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087A00
  c->r[0]=c->lr; // 80087A04
  W32(c->r[1]+0x00000074u,c->r[0]); // 80087A08
  c->r[0]=0u+0x00000000u; // 80087A0C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80087A10
  c->r[31]=c->r[7]|c->r[7]; // 80087A14
  W32(c->r[1]+0x00000068u,c->r[30]); // 80087A18
  c->r[30]=c->r[6]|c->r[6]; // 80087A1C
  W32(c->r[1]+0x00000064u,c->r[29]); // 80087A20
  c->r[29]=c->r[5]|c->r[5]; // 80087A24
  W32(c->r[1]+0x00000060u,c->r[28]); // 80087A28
  c->r[28]=c->r[4]|c->r[4]; // 80087A2C
  c->r[4]=c->r[3]|c->r[3]; // 80087A30
  c->r[3]=c->r[1]+0x00000020u; // 80087A34
  W32(c->r[1]+0x00000020u,c->r[0]); // 80087A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087A3C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80087A40
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80087A44
  W32(c->r[1]+0x00000030u,c->r[0]); // 80087A48
  W32(c->r[1]+0x00000034u,c->r[0]); // 80087A4C
  W32(c->r[1]+0x00000038u,c->r[0]); // 80087A50
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80087A54
  W32(c->r[1]+0x00000040u,c->r[0]); // 80087A58
  W32(c->r[1]+0x00000044u,c->r[0]); // 80087A5C
  W32(c->r[1]+0x00000048u,c->r[0]); // 80087A60
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80087A64
  W32(c->r[1]+0x00000050u,c->r[0]); // 80087A68
  W32(c->r[1]+0x00000054u,c->r[0]); // 80087A6C
  W32(c->r[1]+0x00000058u,c->r[0]); // 80087A70
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80087A74
  c->lr=0x80087A7Cu; f_80088BF0(c); // 80087A78
  cmps(c,0,(int32_t)c->r[31],0); // 80087A7C
  if (!crb(c,2)) { goto L_80087A9C; } // 80087A80
  c->r[3]=c->r[1]+0x00000020u; // 80087A84
  c->lr=0x80087A8Cu; f_800889A0(c); // 80087A88
  cmps(c,0,(int32_t)c->r[3],0); // 80087A8C
  if (crb(c,2)) { goto L_80087A9C; } // 80087A90
  c->r[3]=0u+0xFFFFFF9Au; // 80087A94
  goto L_80087B34; // 80087A98
L_80087A9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80087A9C
  if (crb(c,2)) { goto L_80087AD4; } // 80087AA0
  c->r[10]=0u+0x80080000u; // 80087AA4
  W32(c->r[1]+0x00000008u,c->r[29]); // 80087AA8
  c->r[4]=c->r[28]|c->r[28]; // 80087AAC
  c->r[3]=c->r[1]+0x00000020u; // 80087AB0
  c->r[5]=c->r[28]+0x00000004u; // 80087AB4
  c->r[6]=c->r[29]+0x00000020u; // 80087AB8
  c->r[7]=c->r[29]+0x00000024u; // 80087ABC
  c->r[8]=c->r[29]+0x00000028u; // 80087AC0
  c->r[9]=c->r[29]+0x0000002Cu; // 80087AC4
  c->r[10]=c->r[10]+0x00007B60u; // 80087AC8
  c->lr=0x80087AD0u; f_800839E0(c); // 80087ACC
  goto L_80087B34; // 80087AD0
L_80087AD4:;
  c->r[0]=0u+0x00000000u; // 80087AD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80087AD8
  c->r[4]=c->r[28]|c->r[28]; // 80087ADC
  c->r[3]=c->r[1]+0x00000020u; // 80087AE0
  W32(c->r[1]+0x00000018u,c->r[0]); // 80087AE4
  c->r[5]=c->r[28]+0x00000004u; // 80087AE8
  c->r[6]=c->r[1]+0x0000001Cu; // 80087AEC
  c->r[7]=c->r[1]+0x00000018u; // 80087AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087AF4
  c->r[8]=c->r[1]+0x00000014u; // 80087AF8
  c->r[9]=c->r[1]+0x00000010u; // 80087AFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80087B00
  c->lr=0x80087B08u; f_80083880(c); // 80087B04
  cmps(c,0,(int32_t)c->r[3],0); // 80087B08
  c->r[31]=c->r[3]|c->r[3]; // 80087B0C
  if (!crb(c,2)) { goto L_80087B30; } // 80087B10
  c->r[4]=R32(c->r[1]+0x00000018u); // 80087B14
  c->r[3]=c->r[28]+0x00000007u; // 80087B18
  c->r[5]=R32(c->r[1]+0x00000014u); // 80087B1C
  c->r[6]=R32(c->r[1]+0x00000010u); // 80087B20
  c->lr=0x80087B28u; f_80087910(c); // 80087B24
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80087B28
  W8(c->r[28]+0x00000006u,c->r[0]); // 80087B2C
L_80087B30:;
  c->r[3]=c->r[31]|c->r[31]; // 80087B30
L_80087B34:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80087B34
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80087B38
  c->r[30]=R32(c->r[1]+0x00000068u); // 80087B3C
  c->r[29]=R32(c->r[1]+0x00000064u); // 80087B40
  c->r[28]=R32(c->r[1]+0x00000060u); // 80087B44
  c->lr=c->r[0]; // 80087B48
  c->r[1]=c->r[1]+0x00000070u; // 80087B4C
  return; // 80087B50
}

// fn_80087B60
void f_80087B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087B60
  c->r[0]=c->lr; // 80087B64
  cmps(c,0,(int32_t)c->r[3],0); // 80087B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087B70
  c->r[31]=c->r[4]|c->r[4]; // 80087B74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80087B78
  c->r[30]=c->r[3]|c->r[3]; // 80087B7C
  if (!crb(c,2)) { goto L_80087BA4; } // 80087B80
  c->r[3]=R32(c->r[4]+0x00000014u); // 80087B84
  c->r[0]=R32(c->r[4]+0x00000020u); // 80087B88
  W8(c->r[3]+0x00000006u,c->r[0]); // 80087B8C
  c->r[3]=c->r[3]+0x00000007u; // 80087B90
  c->r[4]=R32(c->r[4]+0x00000024u); // 80087B94
  c->r[5]=R32(c->r[31]+0x00000028u); // 80087B98
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 80087B9C
  c->lr=0x80087BA4u; f_80087910(c); // 80087BA0
L_80087BA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80087BA4
  c->lr=0x80087BACu; f_80088A40(c); // 80087BA8
  c->r[12]=R32(c->r[31]+0x00000004u); // 80087BAC
  c->r[4]=c->r[31]|c->r[31]; // 80087BB0
  c->ctr=c->r[12]; // 80087BB4
  if (true) { c->lr=0x80087BBCu; dispatch(c,c->ctr); } // 80087BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087BBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087BC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087BC4
  c->lr=c->r[0]; // 80087BC8
  c->r[1]=c->r[1]+0x00000010u; // 80087BCC
  return; // 80087BD0
}

// NANDGetStatus
void f_80087BE0(Ctx* __restrict c) {
  trace_call(0x80087BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087BE0
  c->r[0]=c->lr; // 80087BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087BEC
  c->r[31]=c->r[4]|c->r[4]; // 80087BF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80087BF4
  c->r[30]=c->r[3]|c->r[3]; // 80087BF8
  c->lr=0x80087C00u; f_80088A00(c); // 80087BFC
  cmps(c,0,(int32_t)c->r[3],0); // 80087C00
  if (crb(c,2)) { goto L_80087C28; } // 80087C04
  c->r[3]=c->r[30]|c->r[30]; // 80087C08
  c->r[4]=c->r[31]|c->r[31]; // 80087C0C
  c->r[5]=0u+0x00000000u; // 80087C10
  c->r[6]=0u+0x00000000u; // 80087C14
  c->r[7]=0u+0x00000000u; // 80087C18
  c->lr=0x80087C20u; f_80087A00(c); // 80087C1C
  c->lr=0x80087C24u; f_80088A40(c); // 80087C20
  goto L_80087C2C; // 80087C24
L_80087C28:;
  c->r[3]=0u+0xFFFFFF80u; // 80087C28
L_80087C2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087C30
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087C34
  c->lr=c->r[0]; // 80087C38
  c->r[1]=c->r[1]+0x00000010u; // 80087C3C
  return; // 80087C40
}

// NANDPrivateGetStatus
void f_80087C50(Ctx* __restrict c) {
  trace_call(0x80087C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087C50
  c->r[0]=c->lr; // 80087C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087C5C
  c->r[31]=c->r[4]|c->r[4]; // 80087C60
  W32(c->r[1]+0x00000008u,c->r[30]); // 80087C64
  c->r[30]=c->r[3]|c->r[3]; // 80087C68
  c->lr=0x80087C70u; f_80088A00(c); // 80087C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80087C70
  if (crb(c,2)) { goto L_80087C98; } // 80087C74
  c->r[3]=c->r[30]|c->r[30]; // 80087C78
  c->r[4]=c->r[31]|c->r[31]; // 80087C7C
  c->r[5]=0u+0x00000000u; // 80087C80
  c->r[6]=0u+0x00000000u; // 80087C84
  c->r[7]=0u+0x00000001u; // 80087C88
  c->lr=0x80087C90u; f_80087A00(c); // 80087C8C
  c->lr=0x80087C94u; f_80088A40(c); // 80087C90
  goto L_80087C9C; // 80087C94
L_80087C98:;
  c->r[3]=0u+0xFFFFFF80u; // 80087C98
L_80087C9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087C9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087CA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087CA4
  c->lr=c->r[0]; // 80087CA8
  c->r[1]=c->r[1]+0x00000010u; // 80087CAC
  return; // 80087CB0
}

// NANDPrivateGetStatusAsync
void f_80087CC0(Ctx* __restrict c) {
  trace_call(0x80087CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087CC0
  c->r[0]=c->lr; // 80087CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80087CCC
  c->r[31]=c->r[6]|c->r[6]; // 80087CD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80087CD4
  c->r[30]=c->r[5]|c->r[5]; // 80087CD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80087CDC
  c->r[29]=c->r[4]|c->r[4]; // 80087CE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80087CE4
  c->r[28]=c->r[3]|c->r[3]; // 80087CE8
  c->lr=0x80087CF0u; f_80088A00(c); // 80087CEC
  cmps(c,0,(int32_t)c->r[3],0); // 80087CF0
  if (!crb(c,2)) { goto L_80087D00; } // 80087CF4
  c->r[3]=0u+0xFFFFFF80u; // 80087CF8
  goto L_80087D24; // 80087CFC
L_80087D00:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 80087D00
  c->r[3]=c->r[28]|c->r[28]; // 80087D04
  c->r[4]=c->r[29]|c->r[29]; // 80087D08
  c->r[5]=c->r[31]|c->r[31]; // 80087D0C
  W32(c->r[31]+0x00000014u,c->r[29]); // 80087D10
  c->r[6]=0u+0x00000001u; // 80087D14
  c->r[7]=0u+0x00000001u; // 80087D18
  c->lr=0x80087D20u; f_80087A00(c); // 80087D1C
  c->lr=0x80087D24u; f_80088A40(c); // 80087D20
L_80087D24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80087D24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80087D28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80087D2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80087D30
  c->r[28]=R32(c->r[1]+0x00000010u); // 80087D34
  c->lr=c->r[0]; // 80087D38
  c->r[1]=c->r[1]+0x00000020u; // 80087D3C
  return; // 80087D40
}

// fn_80087D50
void f_80087D50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087D50
  c->r[0]=c->lr; // 80087D54
  W32(c->r[1]+0x00000174u,c->r[0]); // 80087D58
  W32(c->r[1]+0x0000016Cu,c->r[31]); // 80087D5C
  W32(c->r[1]+0x00000168u,c->r[30]); // 80087D60
  c->r[30]=c->r[3]|c->r[3]; // 80087D64
  c->lr=0x80087D6Cu; f_8006DD10(c); // 80087D68
  cmps(c,0,(int32_t)c->r[3],0); // 80087D6C
  c->r[31]=c->r[3]|c->r[3]; // 80087D70
  if (!crb(c,2)) { goto L_80087D80; } // 80087D74
  c->r[3]=0u+0x00000000u; // 80087D78
  goto L_8008806C; // 80087D7C
L_80087D80:;
  c->r[3]=c->r[30]|c->r[30]; // 80087D80
  c->lr=0x80087D88u; f_80088940(c); // 80087D84
  cmps(c,0,(int32_t)c->r[3],0); // 80087D88
  if (crb(c,2)) { goto L_80087EDC; } // 80087D8C
  c->r[3]=0u+0x80130000u; // 80087D90
  c->r[0]=0u+0x00000008u; // 80087D94
  c->r[3]=c->r[3]+0xFFFF9C38u; // 80087D98
  c->r[5]=c->r[1]+0x00000054u; // 80087D9C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80087DA0
  c->r[10]=0u+0x00000000u; // 80087DA4
  c->ctr=c->r[0]; // 80087DA8
  c->r[0]=c->r[0]|0x00000000u; // 80087DAC
L_80087DB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80087DB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80087DB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 80087DB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80087DBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087DB0; } // 80087DC0
  c->r[0]=R16(c->r[4]+0x00000004u); // 80087DC4
  W16(c->r[5]+0x00000004u,c->r[0]); // 80087DC8
  c->r[5]=0u+0x00000008u; // 80087DCC
  c->r[0]=0u+0x0000000Bu; // 80087DD0
  goto L_80087ED0; // 80087DD4
L_80087DD8:;
  c->r[7]=c->r[1]+0x00000120u; // 80087DD8
  c->r[6]=c->r[1]+0x00000054u; // 80087DDC
  c->r[8]=R8(c->r[30]+0x00000000u); // 80087DE0
  c->ctr=c->r[5]; // 80087DE4
L_80087DE8:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80087DE8
  {uint32_t ea=c->r[6]+0x00000008u; c->r[3]=R32(ea); c->r[6]=ea;} // 80087DEC
  W32(c->r[7]+0x00000004u,c->r[4]); // 80087DF0
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[3]); c->r[7]=ea;} // 80087DF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087DE8; } // 80087DF8
  c->r[3]=R16(c->r[6]+0x00000004u); // 80087DFC
  c->r[9]=c->r[1]+0x00000124u; // 80087E00
  W16(c->r[7]+0x00000004u,c->r[3]); // 80087E04
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 80087E08
  c->r[6]=0u+0x00000000u; // 80087E0C
  c->ctr=c->r[0]; // 80087E10
  c->r[0]=c->r[0]|0x00000000u; // 80087E14
L_80087E18:;
  c->r[3]=R8(c->r[9]+0x00000000u); // 80087E18
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E20
  if (!crb(c,2)) { goto L_80087E30; } // 80087E24
  c->r[3]=0u+0x00000001u; // 80087E28
  goto L_80087EB8; // 80087E2C
L_80087E30:;
  c->r[3]=R8(c->r[9]+0x00000001u); // 80087E30
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E34
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E38
  if (!crb(c,2)) { goto L_80087E48; } // 80087E3C
  c->r[3]=0u+0x00000001u; // 80087E40
  goto L_80087EB8; // 80087E44
L_80087E48:;
  c->r[3]=R8(c->r[9]+0x00000002u); // 80087E48
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E4C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E50
  if (!crb(c,2)) { goto L_80087E60; } // 80087E54
  c->r[3]=0u+0x00000001u; // 80087E58
  goto L_80087EB8; // 80087E5C
L_80087E60:;
  c->r[3]=R8(c->r[9]+0x00000003u); // 80087E60
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E64
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E68
  if (!crb(c,2)) { goto L_80087E78; } // 80087E6C
  c->r[3]=0u+0x00000001u; // 80087E70
  goto L_80087EB8; // 80087E74
L_80087E78:;
  c->r[3]=R8(c->r[9]+0x00000004u); // 80087E78
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E7C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E80
  if (!crb(c,2)) { goto L_80087E90; } // 80087E84
  c->r[3]=0u+0x00000001u; // 80087E88
  goto L_80087EB8; // 80087E8C
L_80087E90:;
  c->r[3]=R8(c->r[9]+0x00000005u); // 80087E90
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E94
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80087E98
  if (!crb(c,2)) { goto L_80087EA8; } // 80087E9C
  c->r[3]=0u+0x00000001u; // 80087EA0
  goto L_80087EB8; // 80087EA4
L_80087EA8:;
  c->r[9]=c->r[9]+0x00000006u; // 80087EA8
  c->r[6]=c->r[6]+0x00000005u; // 80087EAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087E18; } // 80087EB0
  c->r[3]=0u+0x00000000u; // 80087EB4
L_80087EB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80087EB8
  if (!crb(c,2)) { goto L_80087EC8; } // 80087EBC
  c->r[3]=0u+0x00000000u; // 80087EC0
  goto L_8008806C; // 80087EC4
L_80087EC8:;
  c->r[10]=c->r[10]+0x00000001u; // 80087EC8
  c->r[30]=c->r[30]+0x00000001u; // 80087ECC
L_80087ED0:;
  cmpu(c,0,c->r[10],c->r[31]); // 80087ED0
  if (crb(c,0)) { IRQCHK(c); goto L_80087DD8; } // 80087ED4
  goto L_80088068; // 80087ED8
L_80087EDC:;
  c->r[4]=c->r[30]|c->r[30]; // 80087EDC
  c->r[3]=c->r[1]+0x00000018u; // 80087EE0
  c->lr=0x80087EE8u; f_80075140(c); // 80087EE4
  c->r[3]=c->r[1]+0x00000017u; // 80087EE8
  c->r[0]=R8(c->r[3]+c->r[31]); // 80087EEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087EF0
  cmps(c,0,(int32_t)c->r[0],47); // 80087EF4
  if (!crb(c,2)) { goto L_80087F0C; } // 80087EF8
  c->r[0]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80087EFC
  if (crb(c,2)) { goto L_80087F0C; } // 80087F00
  c->r[0]=0u+0x00000000u; // 80087F04
  W8(c->r[3]+c->r[31],c->r[0]); // 80087F08
L_80087F0C:;
  c->r[3]=c->r[1]+0x00000008u; // 80087F0C
  c->r[4]=c->r[1]+0x00000018u; // 80087F10
  c->lr=0x80087F18u; f_80088760(c); // 80087F14
  c->r[3]=c->r[1]+0x00000008u; // 80087F18
  c->lr=0x80087F20u; f_8006DD10(c); // 80087F1C
  c->r[4]=0u+0x80130000u; // 80087F20
  c->r[0]=0u+0x00000008u; // 80087F24
  c->r[4]=c->r[4]+0xFFFF9C38u; // 80087F28
  c->r[10]=c->r[1]+0x00000008u; // 80087F2C
  c->r[7]=c->r[1]+0x00000098u; // 80087F30
  c->r[11]=0u+0x00000000u; // 80087F34
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80087F38
  c->ctr=c->r[0]; // 80087F3C
L_80087F40:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80087F40
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80087F44
  W32(c->r[7]+0x00000004u,c->r[4]); // 80087F48
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 80087F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087F40; } // 80087F50
  c->r[0]=R16(c->r[5]+0x00000004u); // 80087F54
  c->r[6]=0u+0x00000008u; // 80087F58
  W16(c->r[7]+0x00000004u,c->r[0]); // 80087F5C
  c->r[0]=0u+0x0000000Bu; // 80087F60
  goto L_80088060; // 80087F64
L_80087F68:;
  c->r[4]=R8(c->r[10]+0x00000000u); // 80087F68
  c->r[8]=c->r[1]+0x000000DCu; // 80087F6C
  c->r[7]=c->r[1]+0x00000098u; // 80087F70
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80087F74
  c->ctr=c->r[6]; // 80087F78
  c->r[0]=c->r[0]|0x00000000u; // 80087F7C
L_80087F80:;
  c->r[5]=R32(c->r[7]+0x00000004u); // 80087F80
  {uint32_t ea=c->r[7]+0x00000008u; c->r[4]=R32(ea); c->r[7]=ea;} // 80087F84
  W32(c->r[8]+0x00000004u,c->r[5]); // 80087F88
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[4]); c->r[8]=ea;} // 80087F8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087F80; } // 80087F90
  c->r[4]=R16(c->r[7]+0x00000004u); // 80087F94
  c->r[7]=c->r[1]+0x000000E0u; // 80087F98
  W16(c->r[8]+0x00000004u,c->r[4]); // 80087F9C
  c->r[5]=0u+0x00000000u; // 80087FA0
  c->ctr=c->r[0]; // 80087FA4
L_80087FA8:;
  c->r[4]=R8(c->r[7]+0x00000000u); // 80087FA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80087FAC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80087FB0
  if (!crb(c,2)) { goto L_80087FC0; } // 80087FB4
  c->r[4]=0u+0x00000001u; // 80087FB8
  goto L_80088048; // 80087FBC
L_80087FC0:;
  c->r[4]=R8(c->r[7]+0x00000001u); // 80087FC0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80087FC4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80087FC8
  if (!crb(c,2)) { goto L_80087FD8; } // 80087FCC
  c->r[4]=0u+0x00000001u; // 80087FD0
  goto L_80088048; // 80087FD4
L_80087FD8:;
  c->r[4]=R8(c->r[7]+0x00000002u); // 80087FD8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80087FDC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80087FE0
  if (!crb(c,2)) { goto L_80087FF0; } // 80087FE4
  c->r[4]=0u+0x00000001u; // 80087FE8
  goto L_80088048; // 80087FEC
L_80087FF0:;
  c->r[4]=R8(c->r[7]+0x00000003u); // 80087FF0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80087FF4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80087FF8
  if (!crb(c,2)) { goto L_80088008; } // 80087FFC
  c->r[4]=0u+0x00000001u; // 80088000
  goto L_80088048; // 80088004
L_80088008:;
  c->r[4]=R8(c->r[7]+0x00000004u); // 80088008
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8008800C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80088010
  if (!crb(c,2)) { goto L_80088020; } // 80088014
  c->r[4]=0u+0x00000001u; // 80088018
  goto L_80088048; // 8008801C
L_80088020:;
  c->r[4]=R8(c->r[7]+0x00000005u); // 80088020
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80088024
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 80088028
  if (!crb(c,2)) { goto L_80088038; } // 8008802C
  c->r[4]=0u+0x00000001u; // 80088030
  goto L_80088048; // 80088034
L_80088038:;
  c->r[7]=c->r[7]+0x00000006u; // 80088038
  c->r[5]=c->r[5]+0x00000005u; // 8008803C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80087FA8; } // 80088040
  c->r[4]=0u+0x00000000u; // 80088044
L_80088048:;
  cmps(c,0,(int32_t)c->r[4],0); // 80088048
  if (!crb(c,2)) { goto L_80088058; } // 8008804C
  c->r[3]=0u+0x00000000u; // 80088050
  goto L_8008806C; // 80088054
L_80088058:;
  c->r[10]=c->r[10]+0x00000001u; // 80088058
  c->r[11]=c->r[11]+0x00000001u; // 8008805C
L_80088060:;
  cmpu(c,0,c->r[11],c->r[3]); // 80088060
  if (crb(c,0)) { IRQCHK(c); goto L_80087F68; } // 80088064
L_80088068:;
  c->r[3]=0u+0x00000001u; // 80088068
L_8008806C:;
  c->r[0]=R32(c->r[1]+0x00000174u); // 8008806C
  c->r[31]=R32(c->r[1]+0x0000016Cu); // 80088070
  c->r[30]=R32(c->r[1]+0x00000168u); // 80088074
  c->lr=c->r[0]; // 80088078
  c->r[1]=c->r[1]+0x00000170u; // 8008807C
  return; // 80088080
}

// fn_80088090
void f_80088090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088090
  c->r[0]=c->lr; // 80088094
  W32(c->r[1]+0x00000064u,c->r[0]); // 80088098
  c->r[11]=c->r[1]+0x00000060u; // 8008809C
  c->lr=0x800880A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800880A0
  c->r[0]=0u+0x00000000u; // 800880A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800880A8
  c->r[27]=c->r[4]|c->r[4]; // 800880AC
  c->r[4]=c->r[3]|c->r[3]; // 800880B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800880B4
  c->r[28]=c->r[5]|c->r[5]; // 800880B8
  c->r[29]=c->r[6]|c->r[6]; // 800880BC
  c->r[30]=c->r[7]|c->r[7]; // 800880C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800880C4
  c->r[3]=c->r[1]+0x00000008u; // 800880C8
  c->r[31]=0u+0x00000000u; // 800880CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800880D0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800880D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800880D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800880DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800880E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800880E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800880E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 800880EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800880F0
  W32(c->r[1]+0x00000038u,c->r[0]); // 800880F4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800880F8
  W32(c->r[1]+0x00000040u,c->r[0]); // 800880FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80088100
  c->lr=0x80088108u; f_80088BF0(c); // 80088104
  cmps(c,0,(int32_t)c->r[30],0); // 80088108
  if (!crb(c,2)) { goto L_80088128; } // 8008810C
  c->r[3]=c->r[1]+0x00000008u; // 80088110
  c->lr=0x80088118u; f_80088960(c); // 80088114
  cmps(c,0,(int32_t)c->r[3],0); // 80088118
  if (crb(c,2)) { goto L_80088128; } // 8008811C
  c->r[3]=0u+0xFFFFFF9Au; // 80088120
  goto L_80088188; // 80088124
L_80088128:;
  cmps(c,0,(int32_t)c->r[27],3); // 80088128
  if (crb(c,2)) { goto L_80088144; } // 8008812C
  cmps(c,0,(int32_t)c->r[27],1); // 80088130
  if (crb(c,2)) { goto L_8008814C; } // 80088134
  cmps(c,0,(int32_t)c->r[27],2); // 80088138
  if (crb(c,2)) { goto L_80088154; } // 8008813C
  goto L_80088158; // 80088140
L_80088144:;
  c->r[31]=0u+0x00000003u; // 80088144
  goto L_80088158; // 80088148
L_8008814C:;
  c->r[31]=0u+0x00000001u; // 8008814C
  goto L_80088158; // 80088150
L_80088154:;
  c->r[31]=0u+0x00000002u; // 80088154
L_80088158:;
  cmps(c,0,(int32_t)c->r[29],0); // 80088158
  if (crb(c,2)) { goto L_8008817C; } // 8008815C
  c->r[5]=0u+0x80090000u; // 80088160
  c->r[4]=c->r[31]|c->r[31]; // 80088164
  c->r[6]=c->r[28]|c->r[28]; // 80088168
  c->r[3]=c->r[1]+0x00000008u; // 8008816C
  c->r[5]=c->r[5]+0xFFFF83C0u; // 80088170
  c->lr=0x80088178u; f_80084300(c); // 80088174
  goto L_80088188; // 80088178
L_8008817C:;
  c->r[4]=c->r[31]|c->r[31]; // 8008817C
  c->r[3]=c->r[1]+0x00000008u; // 80088180
  c->lr=0x80088188u; f_80084230(c); // 80088184
L_80088188:;
  c->r[11]=c->r[1]+0x00000060u; // 80088188
  c->lr=0x80088190u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008818C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80088190
  c->lr=c->r[0]; // 80088194
  c->r[1]=c->r[1]+0x00000060u; // 80088198
  return; // 8008819C
}

// NANDOpen
void f_800881A0(Ctx* __restrict c) {
  trace_call(0x800881A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800881A0
  c->r[0]=c->lr; // 800881A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800881A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800881AC
  c->r[31]=c->r[5]|c->r[5]; // 800881B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800881B4
  c->r[30]=c->r[4]|c->r[4]; // 800881B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800881BC
  c->r[29]=c->r[3]|c->r[3]; // 800881C0
  c->lr=0x800881C8u; f_80088A00(c); // 800881C4
  cmps(c,0,(int32_t)c->r[3],0); // 800881C8
  if (!crb(c,2)) { goto L_800881D8; } // 800881CC
  c->r[3]=0u+0xFFFFFF80u; // 800881D0
  goto L_80088210; // 800881D4
L_800881D8:;
  c->r[3]=c->r[29]|c->r[29]; // 800881D8
  c->r[4]=c->r[31]|c->r[31]; // 800881DC
  c->r[5]=0u+0x00000000u; // 800881E0
  c->r[6]=0u+0x00000000u; // 800881E4
  c->r[7]=0u+0x00000000u; // 800881E8
  c->lr=0x800881F0u; f_80088090(c); // 800881EC
  cmps(c,0,(int32_t)c->r[3],0); // 800881F0
  if (crb(c,0)) { goto L_8008820C; } // 800881F4
  W32(c->r[30]+0x00000000u,c->r[3]); // 800881F8
  c->r[0]=0u+0x00000001u; // 800881FC
  c->r[3]=0u+0x00000000u; // 80088200
  W8(c->r[30]+0x0000008Au,c->r[0]); // 80088204
  goto L_80088210; // 80088208
L_8008820C:;
  c->lr=0x80088210u; f_80088A40(c); // 8008820C
L_80088210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80088210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80088214
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088218
  c->r[29]=R32(c->r[1]+0x00000014u); // 8008821C
  c->lr=c->r[0]; // 80088220
  c->r[1]=c->r[1]+0x00000020u; // 80088224
  return; // 80088228
}

// NANDPrivateOpen
void f_80088230(Ctx* __restrict c) {
  trace_call(0x80088230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088230
  c->r[0]=c->lr; // 80088234
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088238
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008823C
  c->r[31]=c->r[5]|c->r[5]; // 80088240
  W32(c->r[1]+0x00000018u,c->r[30]); // 80088244
  c->r[30]=c->r[4]|c->r[4]; // 80088248
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008824C
  c->r[29]=c->r[3]|c->r[3]; // 80088250
  c->lr=0x80088258u; f_80088A00(c); // 80088254
  cmps(c,0,(int32_t)c->r[3],0); // 80088258
  if (!crb(c,2)) { goto L_80088268; } // 8008825C
  c->r[3]=0u+0xFFFFFF80u; // 80088260
  goto L_800882A0; // 80088264
L_80088268:;
  c->r[3]=c->r[29]|c->r[29]; // 80088268
  c->r[4]=c->r[31]|c->r[31]; // 8008826C
  c->r[5]=0u+0x00000000u; // 80088270
  c->r[6]=0u+0x00000000u; // 80088274
  c->r[7]=0u+0x00000001u; // 80088278
  c->lr=0x80088280u; f_80088090(c); // 8008827C
  cmps(c,0,(int32_t)c->r[3],0); // 80088280
  if (crb(c,0)) { goto L_8008829C; } // 80088284
  W32(c->r[30]+0x00000000u,c->r[3]); // 80088288
  c->r[0]=0u+0x00000001u; // 8008828C
  c->r[3]=0u+0x00000000u; // 80088290
  W8(c->r[30]+0x0000008Au,c->r[0]); // 80088294
  goto L_800882A0; // 80088298
L_8008829C:;
  c->lr=0x800882A0u; f_80088A40(c); // 8008829C
L_800882A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800882A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800882A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800882A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800882AC
  c->lr=c->r[0]; // 800882B0
  c->r[1]=c->r[1]+0x00000020u; // 800882B4
  return; // 800882B8
}

// fn_800882C0
void f_800882C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800882C0
  c->r[0]=c->lr; // 800882C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800882C8
  c->r[11]=c->r[1]+0x00000020u; // 800882CC
  c->lr=0x800882D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800882D0
  c->r[27]=c->r[3]|c->r[3]; // 800882D4
  c->r[28]=c->r[4]|c->r[4]; // 800882D8
  c->r[29]=c->r[5]|c->r[5]; // 800882DC
  c->r[30]=c->r[6]|c->r[6]; // 800882E0
  c->r[31]=c->r[7]|c->r[7]; // 800882E4
  c->lr=0x800882ECu; f_80088A00(c); // 800882E8
  cmps(c,0,(int32_t)c->r[3],0); // 800882EC
  if (!crb(c,2)) { goto L_800882FC; } // 800882F0
  c->r[3]=0u+0xFFFFFF80u; // 800882F4
  goto L_80088320; // 800882F8
L_800882FC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800882FC
  c->r[3]=c->r[27]|c->r[27]; // 80088300
  c->r[4]=c->r[29]|c->r[29]; // 80088304
  c->r[5]=c->r[31]|c->r[31]; // 80088308
  W32(c->r[31]+0x00000008u,c->r[28]); // 8008830C
  c->r[6]=0u+0x00000001u; // 80088310
  c->r[7]=0u+0x00000000u; // 80088314
  c->lr=0x8008831Cu; f_80088090(c); // 80088318
  c->lr=0x80088320u; f_80088A40(c); // 8008831C
L_80088320:;
  c->r[11]=c->r[1]+0x00000020u; // 80088320
  c->lr=0x80088328u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80088324
  c->r[0]=R32(c->r[1]+0x00000024u); // 80088328
  c->lr=c->r[0]; // 8008832C
  c->r[1]=c->r[1]+0x00000020u; // 80088330
  return; // 80088334
}

// fn_80088340
void f_80088340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088340
  c->r[0]=c->lr; // 80088344
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088348
  c->r[11]=c->r[1]+0x00000020u; // 8008834C
  c->lr=0x80088354u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80088350
  c->r[27]=c->r[3]|c->r[3]; // 80088354
  c->r[28]=c->r[4]|c->r[4]; // 80088358
  c->r[29]=c->r[5]|c->r[5]; // 8008835C
  c->r[30]=c->r[6]|c->r[6]; // 80088360
  c->r[31]=c->r[7]|c->r[7]; // 80088364
  c->lr=0x8008836Cu; f_80088A00(c); // 80088368
  cmps(c,0,(int32_t)c->r[3],0); // 8008836C
  if (!crb(c,2)) { goto L_8008837C; } // 80088370
  c->r[3]=0u+0xFFFFFF80u; // 80088374
  goto L_800883A0; // 80088378
L_8008837C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8008837C
  c->r[3]=c->r[27]|c->r[27]; // 80088380
  c->r[4]=c->r[29]|c->r[29]; // 80088384
  c->r[5]=c->r[31]|c->r[31]; // 80088388
  W32(c->r[31]+0x00000008u,c->r[28]); // 8008838C
  c->r[6]=0u+0x00000001u; // 80088390
  c->r[7]=0u+0x00000001u; // 80088394
  c->lr=0x8008839Cu; f_80088090(c); // 80088398
  c->lr=0x800883A0u; f_80088A40(c); // 8008839C
L_800883A0:;
  c->r[11]=c->r[1]+0x00000020u; // 800883A0
  c->lr=0x800883A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800883A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800883A8
  c->lr=c->r[0]; // 800883AC
  c->r[1]=c->r[1]+0x00000020u; // 800883B0
  return; // 800883B4
}

// nandOpenCallback
void f_800883C0(Ctx* __restrict c) {
  trace_call(0x800883C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800883C0
  c->r[0]=c->lr; // 800883C4
  cmps(c,0,(int32_t)c->r[3],0); // 800883C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800883CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800883D0
  c->r[31]=c->r[4]|c->r[4]; // 800883D4
  if (crb(c,0)) { goto L_80088410; } // 800883D8
  c->r[5]=R32(c->r[4]+0x00000008u); // 800883DC
  c->r[6]=0u+0x00000002u; // 800883E0
  c->r[0]=0u+0x00000001u; // 800883E4
  W32(c->r[5]+0x00000000u,c->r[3]); // 800883E8
  c->r[3]=0u+0x00000000u; // 800883EC
  c->r[5]=R32(c->r[4]+0x00000008u); // 800883F0
  W8(c->r[5]+0x00000089u,c->r[6]); // 800883F4
  c->r[5]=R32(c->r[4]+0x00000008u); // 800883F8
  W8(c->r[5]+0x0000008Au,c->r[0]); // 800883FC
  c->r[12]=R32(c->r[4]+0x00000004u); // 80088400
  c->ctr=c->r[12]; // 80088404
  if (true) { c->lr=0x8008840Cu; dispatch(c,c->ctr); } // 80088408
  goto L_80088424; // 8008840C
L_80088410:;
  c->lr=0x80088414u; f_80088A40(c); // 80088410
  c->r[12]=R32(c->r[31]+0x00000004u); // 80088414
  c->r[4]=c->r[31]|c->r[31]; // 80088418
  c->ctr=c->r[12]; // 8008841C
  if (true) { c->lr=0x80088424u; dispatch(c,c->ctr); } // 80088420
L_80088424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088428
  c->lr=c->r[0]; // 8008842C
  c->r[1]=c->r[1]+0x00000010u; // 80088430
  return; // 80088434
}

// NANDClose
void f_80088440(Ctx* __restrict c) {
  trace_call(0x80088440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088440
  c->r[0]=c->lr; // 80088444
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008844C
  c->r[31]=c->r[3]|c->r[3]; // 80088450
  c->lr=0x80088458u; f_80088A00(c); // 80088454
  cmps(c,0,(int32_t)c->r[3],0); // 80088458
  if (!crb(c,2)) { goto L_80088468; } // 8008845C
  c->r[3]=0u+0xFFFFFF80u; // 80088460
  goto L_80088498; // 80088464
L_80088468:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 80088468
  cmpu(c,0,c->r[0],0x00000001u); // 8008846C
  if (crb(c,2)) { goto L_8008847C; } // 80088470
  c->r[3]=0u+0xFFFFFFF8u; // 80088474
  goto L_80088498; // 80088478
L_8008847C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8008847C
  c->lr=0x80088484u; f_800846D0(c); // 80088480
  cmps(c,0,(int32_t)c->r[3],0); // 80088484
  if (!crb(c,2)) { goto L_80088494; } // 80088488
  c->r[0]=0u+0x00000002u; // 8008848C
  W8(c->r[31]+0x0000008Au,c->r[0]); // 80088490
L_80088494:;
  c->lr=0x80088498u; f_80088A40(c); // 80088494
L_80088498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008849C
  c->lr=c->r[0]; // 800884A0
  c->r[1]=c->r[1]+0x00000010u; // 800884A4
  return; // 800884A8
}

// NANDCloseAsync
void f_800884B0(Ctx* __restrict c) {
  trace_call(0x800884B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800884B0
  c->r[0]=c->lr; // 800884B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800884B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800884BC
  c->r[31]=c->r[5]|c->r[5]; // 800884C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800884C4
  c->r[30]=c->r[4]|c->r[4]; // 800884C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800884CC
  c->r[29]=c->r[3]|c->r[3]; // 800884D0
  c->lr=0x800884D8u; f_80088A00(c); // 800884D4
  cmps(c,0,(int32_t)c->r[3],0); // 800884D8
  if (!crb(c,2)) { goto L_800884E8; } // 800884DC
  c->r[3]=0u+0xFFFFFF80u; // 800884E0
  goto L_8008851C; // 800884E4
L_800884E8:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 800884E8
  cmpu(c,0,c->r[0],0x00000001u); // 800884EC
  if (crb(c,2)) { goto L_800884FC; } // 800884F0
  c->r[3]=0u+0xFFFFFFF8u; // 800884F4
  goto L_8008851C; // 800884F8
L_800884FC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 800884FC
  c->r[4]=0u+0x80090000u; // 80088500
  c->r[5]=c->r[31]|c->r[31]; // 80088504
  W32(c->r[31]+0x00000008u,c->r[29]); // 80088508
  c->r[4]=c->r[4]+0xFFFF8540u; // 8008850C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80088510
  c->lr=0x80088518u; f_800846E0(c); // 80088514
  c->lr=0x8008851Cu; f_80088A40(c); // 80088518
L_8008851C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008851C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80088520
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088524
  c->r[29]=R32(c->r[1]+0x00000014u); // 80088528
  c->lr=c->r[0]; // 8008852C
  c->r[1]=c->r[1]+0x00000020u; // 80088530
  return; // 80088534
}

// nandCloseCallback
void f_80088540(Ctx* __restrict c) {
  trace_call(0x80088540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088540
  c->r[0]=c->lr; // 80088544
  cmps(c,0,(int32_t)c->r[3],0); // 80088548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008854C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80088550
  c->r[31]=c->r[4]|c->r[4]; // 80088554
  if (!crb(c,2)) { goto L_80088574; } // 80088558
  c->r[5]=R32(c->r[4]+0x00000008u); // 8008855C
  c->r[6]=0u+0x00000007u; // 80088560
  c->r[0]=0u+0x00000002u; // 80088564
  W8(c->r[5]+0x00000089u,c->r[6]); // 80088568
  c->r[4]=R32(c->r[4]+0x00000008u); // 8008856C
  W8(c->r[4]+0x0000008Au,c->r[0]); // 80088570
L_80088574:;
  c->lr=0x80088578u; f_80088A40(c); // 80088574
  c->r[12]=R32(c->r[31]+0x00000004u); // 80088578
  c->r[4]=c->r[31]|c->r[31]; // 8008857C
  c->ctr=c->r[12]; // 80088580
  if (true) { c->lr=0x80088588u; dispatch(c,c->ctr); } // 80088584
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008858C
  c->lr=c->r[0]; // 80088590
  c->r[1]=c->r[1]+0x00000010u; // 80088594
  return; // 80088598
}

// nandRemoveTailToken
void f_800885A0(Ctx* __restrict c) {
  trace_call(0x800885A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800885A0
  c->r[0]=c->lr; // 800885A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800885A8
  c->r[0]=R8(c->r[4]+0x00000000u); // 800885AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800885B0
  cmps(c,0,(int32_t)c->r[0],47); // 800885B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800885B8
  c->r[30]=c->r[4]|c->r[4]; // 800885BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800885C0
  c->r[29]=c->r[3]|c->r[3]; // 800885C4
  if (!crb(c,2)) { goto L_800885EC; } // 800885C8
  c->r[0]=R8(c->r[4]+0x00000001u); // 800885CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800885D0
  if (!crb(c,2)) { goto L_800885EC; } // 800885D4
  c->r[4]=0u+0x0000002Fu; // 800885D8
  c->r[0]=0u+0x00000000u; // 800885DC
  W8(c->r[3]+0x00000000u,c->r[4]); // 800885E0
  W8(c->r[3]+0x00000001u,c->r[0]); // 800885E4
  goto L_80088658; // 800885E8
L_800885EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800885EC
  c->lr=0x800885F4u; f_8006DD10(c); // 800885F0
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 800885F4
  c->r[0]=c->r[31]+0x00000001u; // 800885F8
  c->r[3]=c->r[30]+c->r[31]; // 800885FC
  c->ctr=c->r[0]; // 80088600
  if (crb(c,0)) { goto L_80088658; } // 80088604
L_80088608:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80088608
  cmps(c,0,(int32_t)c->r[0],47); // 8008860C
  if (!crb(c,2)) { goto L_8008864C; } // 80088610
  cmps(c,0,(int32_t)c->r[31],0); // 80088614
  if (crb(c,2)) { goto L_80088638; } // 80088618
  c->r[3]=c->r[29]|c->r[29]; // 8008861C
  c->r[4]=c->r[30]|c->r[30]; // 80088620
  c->r[5]=c->r[31]|c->r[31]; // 80088624
  c->lr=0x8008862Cu; f_80075200(c); // 80088628
  c->r[0]=0u+0x00000000u; // 8008862C
  W8(c->r[29]+c->r[31],c->r[0]); // 80088630
  goto L_80088658; // 80088634
L_80088638:;
  c->r[3]=0u+0x0000002Fu; // 80088638
  c->r[0]=0u+0x00000000u; // 8008863C
  W8(c->r[29]+0x00000000u,c->r[3]); // 80088640
  W8(c->r[29]+0x00000001u,c->r[0]); // 80088644
  goto L_80088658; // 80088648
L_8008864C:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8008864C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80088650
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80088608; } // 80088654
L_80088658:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80088658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008865C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088660
  c->r[29]=R32(c->r[1]+0x00000014u); // 80088664
  c->lr=c->r[0]; // 80088668
  c->r[1]=c->r[1]+0x00000020u; // 8008866C
  return; // 80088670
}

// fn_80088680
void f_80088680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088680
  c->r[0]=c->lr; // 80088684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088688
  c->r[11]=c->r[1]+0x00000020u; // 8008868C
  c->lr=0x80088694u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80088690
  c->r[27]=c->r[3]|c->r[3]; // 80088694
  c->r[28]=c->r[4]|c->r[4]; // 80088698
  c->r[29]=c->r[5]|c->r[5]; // 8008869C
  c->r[31]=c->r[5]|c->r[5]; // 800886A0
  c->r[30]=0u+0x00000000u; // 800886A4
  goto L_8008872C; // 800886A8
L_800886AC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800886AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800886B0
  cmps(c,0,(int32_t)c->r[0],47); // 800886B4
  if (!crb(c,2)) { goto L_800886FC; } // 800886B8
  c->r[3]=c->r[27]|c->r[27]; // 800886BC
  c->r[4]=c->r[29]|c->r[29]; // 800886C0
  c->r[5]=c->r[30]|c->r[30]; // 800886C4
  c->lr=0x800886CCu; f_80075200(c); // 800886C8
  c->r[4]=c->r[30]+c->r[29]; // 800886CC
  c->r[3]=0u+0x00000000u; // 800886D0
  c->r[0]=R8(c->r[4]+0x00000001u); // 800886D4
  W8(c->r[27]+c->r[30],c->r[3]); // 800886D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800886DC
  if (!crb(c,2)) { goto L_800886EC; } // 800886E0
  W8(c->r[28]+0x00000000u,c->r[3]); // 800886E4
  goto L_8008873C; // 800886E8
L_800886EC:;
  c->r[3]=c->r[28]|c->r[28]; // 800886EC
  c->r[4]=c->r[4]+0x00000001u; // 800886F0
  c->lr=0x800886F8u; f_80075140(c); // 800886F4
  goto L_8008873C; // 800886F8
L_800886FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800886FC
  if (!crb(c,2)) { goto L_80088724; } // 80088700
  c->r[3]=c->r[27]|c->r[27]; // 80088704
  c->r[4]=c->r[29]|c->r[29]; // 80088708
  c->r[5]=c->r[30]|c->r[30]; // 8008870C
  c->lr=0x80088714u; f_80075200(c); // 80088710
  c->r[0]=0u+0x00000000u; // 80088714
  W8(c->r[27]+c->r[30],c->r[0]); // 80088718
  W8(c->r[28]+0x00000000u,c->r[0]); // 8008871C
  goto L_8008873C; // 80088720
L_80088724:;
  c->r[30]=c->r[30]+0x00000001u; // 80088724
  c->r[31]=c->r[31]+0x00000001u; // 80088728
L_8008872C:;
  c->r[3]=c->r[29]|c->r[29]; // 8008872C
  c->lr=0x80088734u; f_8006DD10(c); // 80088730
  cmpu(c,0,c->r[30],c->r[3]); // 80088734
  if (!crb(c,1)) { IRQCHK(c); goto L_800886AC; } // 80088738
L_8008873C:;
  c->r[11]=c->r[1]+0x00000020u; // 8008873C
  c->lr=0x80088744u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80088740
  c->r[0]=R32(c->r[1]+0x00000024u); // 80088744
  c->lr=c->r[0]; // 80088748
  c->r[1]=c->r[1]+0x00000020u; // 8008874C
  return; // 80088750
}

// nandGetRelativeName
void f_80088760(Ctx* __restrict c) {
  trace_call(0x80088760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088760
  c->r[0]=c->lr; // 80088764
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008876C
  c->r[31]=c->r[4]|c->r[4]; // 80088770
  W32(c->r[1]+0x00000008u,c->r[30]); // 80088774
  c->r[30]=c->r[3]|c->r[3]; // 80088778
  c->r[3]=c->r[13]+0xFFFF82F4u; // 8008877C
  c->lr=0x80088784u; f_80075270(c); // 80088780
  cmps(c,0,(int32_t)c->r[3],0); // 80088784
  if (!crb(c,2)) { goto L_8008879C; } // 80088788
  c->r[3]=c->r[30]|c->r[30]; // 8008878C
  c->r[4]=c->r[13]+0xFFFF82F8u; // 80088790
  c->lr=0x80088798u; f_80075140(c); // 80088794
  goto L_800887E0; // 80088798
L_8008879C:;
  c->r[3]=c->r[31]|c->r[31]; // 8008879C
  c->lr=0x800887A4u; f_8006DD10(c); // 800887A0
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800887A4
  c->r[0]=c->r[4]+0x00000001u; // 800887A8
  c->r[3]=c->r[31]+c->r[4]; // 800887AC
  c->ctr=c->r[0]; // 800887B0
  if (crb(c,0)) { goto L_800887D0; } // 800887B4
L_800887B8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800887B8
  cmps(c,0,(int32_t)c->r[0],47); // 800887BC
  if (crb(c,2)) { goto L_800887D0; } // 800887C0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800887C4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800887C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800887B8; } // 800887CC
L_800887D0:;
  c->r[4]=c->r[31]+c->r[4]; // 800887D0
  c->r[3]=c->r[30]|c->r[30]; // 800887D4
  c->r[4]=c->r[4]+0x00000001u; // 800887D8
  c->lr=0x800887E0u; f_80075140(c); // 800887DC
L_800887E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800887E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800887E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800887E8
  c->lr=c->r[0]; // 800887EC
  c->r[1]=c->r[1]+0x00000010u; // 800887F0
  return; // 800887F4
}

// nandConvertPath
void f_80088800(Ctx* __restrict c) {
  trace_call(0x80088800u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088800
  c->r[0]=c->lr; // 80088804
  W32(c->r[1]+0x00000224u,c->r[0]); // 80088808
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 8008880C
  c->r[31]=c->r[5]|c->r[5]; // 80088810
  W32(c->r[1]+0x00000218u,c->r[30]); // 80088814
  c->r[30]=c->r[4]|c->r[4]; // 80088818
  W32(c->r[1]+0x00000214u,c->r[29]); // 8008881C
  c->r[29]=c->r[3]|c->r[3]; // 80088820
  c->r[3]=c->r[31]|c->r[31]; // 80088824
  c->lr=0x8008882Cu; f_8006DD10(c); // 80088828
  cmps(c,0,(int32_t)c->r[3],0); // 8008882C
  if (!crb(c,2)) { goto L_80088844; } // 80088830
  c->r[3]=c->r[29]|c->r[29]; // 80088834
  c->r[4]=c->r[30]|c->r[30]; // 80088838
  c->lr=0x80088840u; f_80075140(c); // 8008883C
  goto L_80088920; // 80088840
L_80088844:;
  c->r[5]=c->r[31]|c->r[31]; // 80088844
  c->r[3]=c->r[1]+0x00000188u; // 80088848
  c->r[4]=c->r[1]+0x00000108u; // 8008884C
  c->lr=0x80088854u; f_80088680(c); // 80088850
  c->r[3]=c->r[1]+0x00000188u; // 80088854
  c->r[4]=c->r[13]+0xFFFF82FCu; // 80088858
  c->lr=0x80088860u; f_80075270(c); // 8008885C
  cmps(c,0,(int32_t)c->r[3],0); // 80088860
  if (!crb(c,2)) { goto L_8008887C; } // 80088864
  c->r[3]=c->r[29]|c->r[29]; // 80088868
  c->r[4]=c->r[30]|c->r[30]; // 8008886C
  c->r[5]=c->r[1]+0x00000108u; // 80088870
  c->lr=0x80088878u; f_80088800(c); // 80088874
  goto L_80088920; // 80088878
L_8008887C:;
  c->r[3]=c->r[1]+0x00000188u; // 8008887C
  c->r[4]=c->r[13]+0xFFFF8300u; // 80088880
  c->lr=0x80088888u; f_80075270(c); // 80088884
  cmps(c,0,(int32_t)c->r[3],0); // 80088888
  if (!crb(c,2)) { goto L_800888B0; } // 8008888C
  c->r[4]=c->r[30]|c->r[30]; // 80088890
  c->r[3]=c->r[1]+0x00000088u; // 80088894
  c->lr=0x8008889Cu; f_800885A0(c); // 80088898
  c->r[3]=c->r[29]|c->r[29]; // 8008889C
  c->r[4]=c->r[1]+0x00000088u; // 800888A0
  c->r[5]=c->r[1]+0x00000108u; // 800888A4
  c->lr=0x800888ACu; f_80088800(c); // 800888A8
  goto L_80088920; // 800888AC
L_800888B0:;
  c->r[0]=R8(c->r[1]+0x00000188u); // 800888B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800888B4
  if (crb(c,2)) { goto L_80088914; } // 800888B8
  c->r[3]=c->r[30]|c->r[30]; // 800888BC
  c->r[4]=c->r[13]+0xFFFF82F4u; // 800888C0
  c->lr=0x800888C8u; f_80075270(c); // 800888C4
  cmps(c,0,(int32_t)c->r[3],0); // 800888C8
  if (!crb(c,2)) { goto L_800888E8; } // 800888CC
  c->r[3]=c->r[1]+0x00000008u; // 800888D0
  c->r[5]=c->r[1]+0x00000188u; // 800888D4
  c->r[4]=c->r[13]+0xFFFF8304u; // 800888D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800888DC
  c->lr=0x800888E4u; f_80074F3C(c); // 800888E0
  goto L_80088900; // 800888E4
L_800888E8:;
  c->r[5]=c->r[30]|c->r[30]; // 800888E8
  c->r[3]=c->r[1]+0x00000008u; // 800888EC
  c->r[6]=c->r[1]+0x00000188u; // 800888F0
  c->r[4]=c->r[13]+0xFFFF8308u; // 800888F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800888F8
  c->lr=0x80088900u; f_80074F3C(c); // 800888FC
L_80088900:;
  c->r[3]=c->r[29]|c->r[29]; // 80088900
  c->r[4]=c->r[1]+0x00000008u; // 80088904
  c->r[5]=c->r[1]+0x00000108u; // 80088908
  c->lr=0x80088910u; f_80088800(c); // 8008890C
  goto L_80088920; // 80088910
L_80088914:;
  c->r[3]=c->r[29]|c->r[29]; // 80088914
  c->r[4]=c->r[30]|c->r[30]; // 80088918
  c->lr=0x80088920u; f_80075140(c); // 8008891C
L_80088920:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 80088920
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 80088924
  c->r[30]=R32(c->r[1]+0x00000218u); // 80088928
  c->r[29]=R32(c->r[1]+0x00000214u); // 8008892C
  c->lr=c->r[0]; // 80088930
  c->r[1]=c->r[1]+0x00000220u; // 80088934
  return; // 80088938
}

// fn_80088940
void f_80088940(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 80088940
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80088944
  c->r[3]=addc(c,~c->r[4],0x0000002Fu,1); // 80088948
  c->r[0]=c->r[4]+0xFFFFFFD1u; // 8008894C
  c->r[0]=c->r[3]|c->r[0]; // 80088950
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80088954
  return; // 80088958
}

// nandIsPrivatePath
void f_80088960(Ctx* __restrict c) {
  trace_call(0x80088960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088960
  c->r[0]=c->lr; // 80088964
  c->r[4]=0u+0x80150000u; // 80088968
  c->r[5]=0u+0x00000008u; // 8008896C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088970
  c->r[4]=c->r[4]+0xFFFFE370u; // 80088974
  c->lr=0x8008897Cu; f_8007538C(c); // 80088978
  c->r[0]=cntlz(c->r[3]); // 8008897C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80088980
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088984
  c->lr=c->r[0]; // 80088988
  c->r[1]=c->r[1]+0x00000010u; // 8008898C
  return; // 80088990
}

// nandIsUnderPrivatePath
void f_800889A0(Ctx* __restrict c) {
  trace_call(0x800889A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800889A0
  c->r[0]=c->lr; // 800889A4
  c->r[4]=0u+0x80150000u; // 800889A8
  c->r[5]=0u+0x00000009u; // 800889AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800889B0
  c->r[4]=c->r[4]+0xFFFFE37Cu; // 800889B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800889B8
  c->r[31]=c->r[3]|c->r[3]; // 800889BC
  c->lr=0x800889C4u; f_8007538C(c); // 800889C0
  cmps(c,0,(int32_t)c->r[3],0); // 800889C4
  if (!crb(c,2)) { goto L_800889E0; } // 800889C8
  c->r[0]=R8(c->r[31]+0x00000009u); // 800889CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800889D0
  if (crb(c,2)) { goto L_800889E0; } // 800889D4
  c->r[3]=0u+0x00000001u; // 800889D8
  goto L_800889E4; // 800889DC
L_800889E0:;
  c->r[3]=0u+0x00000000u; // 800889E0
L_800889E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800889E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800889E8
  c->lr=c->r[0]; // 800889EC
  c->r[1]=c->r[1]+0x00000010u; // 800889F0
  return; // 800889F4
}

// nandIsInitialized
void f_80088A00(Ctx* __restrict c) {
  trace_call(0x80088A00u);
  c->r[3]=R32(c->r[13]+0xFFFF9190u); // 80088A00
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80088A04
  c->r[0]=cntlz(c->r[0]); // 80088A08
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80088A0C
  return; // 80088A10
}

// fn_80088A20
void f_80088A20(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],-117); // 80088A20
  if (crb(c,2)) { goto L_80088A30; } // 80088A24
  cmps(c,0,(int32_t)c->r[4],-9); // 80088A28
  if (!crb(c,2)) return; // 80088A2C
L_80088A30:;
  c->r[3]=c->r[4]|c->r[4]; // 80088A30
  f_80089FE0(c); return; // 80088A34
}

// fn_80088A38
void f_80088A38(Ctx* __restrict c) {
  return; // 80088A38
}

// fn_80088A40
void f_80088A40(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 80088A40
  c->r[12]=c->r[1]|c->r[1]; // 80088A44
  c->r[11]=addc(c,~c->r[11],0xFFFFFD00u,1); // 80088A48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80088A4C
  c->r[0]=c->lr; // 80088A50
  c->r[4]=0u+0x80130000u; // 80088A54
  W32(c->r[12]+0x00000004u,c->r[0]); // 80088A58
  c->r[4]=c->r[4]+0xFFFF9C80u; // 80088A5C
  c->r[0]=0u+0x00000029u; // 80088A60
  c->r[6]=c->r[1]+0x0000013Cu; // 80088A64
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80088A68
  c->r[31]=0u+0x80150000u; // 80088A6C
  c->r[31]=c->r[31]+0xFFFFE2C0u; // 80088A70
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80088A74
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80088A78
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80088A7C
  c->r[29]=c->r[3]|c->r[3]; // 80088A80
  c->ctr=c->r[0]; // 80088A84
L_80088A88:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80088A88
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80088A8C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80088A90
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80088A94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80088A88; } // 80088A98
  cmps(c,0,(int32_t)c->r[3],0); // 80088A9C
  c->r[30]=0u+0x00000000u; // 80088AA0
  c->r[4]=0u+0x00000000u; // 80088AA4
  if (crb(c,0)) { goto L_80088AB4; } // 80088AA8
  c->r[3]=c->r[29]|c->r[29]; // 80088AAC
  goto L_80088BD0; // 80088AB0
L_80088AB4:;
  c->r[0]=0u+0x00000029u; // 80088AB4
  c->r[5]=c->r[1]+0x00000140u; // 80088AB8
  c->ctr=c->r[0]; // 80088ABC
L_80088AC0:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 80088AC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80088AC4
  if (!crb(c,2)) { goto L_80088B78; } // 80088AC8
  cmps(c,0,(int32_t)c->r[3],-114); // 80088ACC
  if (crb(c,2)) { goto L_80088AF4; } // 80088AD0
  cmps(c,0,(int32_t)c->r[3],-116); // 80088AD4
  if (crb(c,2)) { goto L_80088AF4; } // 80088AD8
  cmps(c,0,(int32_t)c->r[3],-117); // 80088ADC
  if (crb(c,2)) { goto L_80088AF4; } // 80088AE0
  cmps(c,0,(int32_t)c->r[3],-9); // 80088AE4
  if (crb(c,2)) { goto L_80088AF4; } // 80088AE8
  cmps(c,0,(int32_t)c->r[3],-12); // 80088AEC
  if (!crb(c,2)) { goto L_80088B20; } // 80088AF0
L_80088AF4:;
  c->r[5]=c->r[29]|c->r[29]; // 80088AF4
  c->r[3]=c->r[1]+0x000000C0u; // 80088AF8
  c->r[4]=c->r[31]+0x000000C8u; // 80088AFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088B00
  c->lr=0x80088B08u; f_80074F3C(c); // 80088B04
  c->r[3]=0u+0x80090000u; // 80088B08
  c->r[4]=c->r[29]|c->r[29]; // 80088B0C
  c->r[3]=c->r[3]+0xFFFF8A20u; // 80088B10
  c->r[5]=c->r[1]+0x000000C0u; // 80088B14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088B18
  c->lr=0x80088B20u; f_80089710(c); // 80088B1C
L_80088B20:;
  cmps(c,0,(int32_t)c->r[29],-23); // 80088B20
  if (!crb(c,0)) { goto L_80088B2C; } // 80088B24
  cmps(c,0,(int32_t)c->r[29],-100); // 80088B28
L_80088B2C:;
  cmps(c,0,(int32_t)c->r[29],-108); // 80088B2C
  if (crb(c,2)) { goto L_80088B5C; } // 80088B30
  cmps(c,0,(int32_t)c->r[29],-107); // 80088B34
  if (crb(c,2)) { goto L_80088B5C; } // 80088B38
  cmps(c,0,(int32_t)c->r[29],-103); // 80088B3C
  if (crb(c,2)) { goto L_80088B5C; } // 80088B40
  cmps(c,0,(int32_t)c->r[29],-118); // 80088B44
  if (crb(c,2)) { goto L_80088B5C; } // 80088B48
  cmps(c,0,(int32_t)c->r[29],-8); // 80088B4C
  if (crb(c,2)) { goto L_80088B5C; } // 80088B50
  cmps(c,0,(int32_t)c->r[29],-22); // 80088B54
  if (!crb(c,2)) { goto L_80088B64; } // 80088B58
L_80088B5C:;
  c->r[3]=c->r[29]|c->r[29]; // 80088B5C
  c->lr=0x80088B64u; f_80089FE0(c); // 80088B60
L_80088B64:;
  c->r[0]=c->r[30]+0x00000001u; // 80088B64
  c->r[3]=c->r[1]+0x00000140u; // 80088B68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80088B6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80088B70
  goto L_80088BD0; // 80088B74
L_80088B78:;
  c->r[30]=c->r[30]+0x00000002u; // 80088B78
  c->r[4]=c->r[4]+0x00000008u; // 80088B7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80088AC0; } // 80088B80
  c->r[4]=c->r[29]|c->r[29]; // 80088B84
  c->r[3]=c->r[31]+0x000000DCu; // 80088B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088B8C
  c->lr=0x80088B94u; f_80045C80(c); // 80088B90
  c->r[5]=c->r[29]|c->r[29]; // 80088B94
  c->r[3]=c->r[1]+0x00000040u; // 80088B98
  c->r[4]=c->r[31]+0x00000110u; // 80088B9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088BA0
  c->lr=0x80088BA8u; f_80074F3C(c); // 80088BA4
  c->r[3]=0u+0x80090000u; // 80088BA8
  c->r[4]=c->r[29]|c->r[29]; // 80088BAC
  c->r[3]=c->r[3]+0xFFFF8A20u; // 80088BB0
  c->r[5]=c->r[1]+0x00000040u; // 80088BB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088BB8
  c->lr=0x80088BC0u; f_80089710(c); // 80088BBC
  cmps(c,0,(int32_t)c->r[29],-23); // 80088BC0
  if (!crb(c,0)) { goto L_80088BCC; } // 80088BC4
  cmps(c,0,(int32_t)c->r[29],-100); // 80088BC8
L_80088BCC:;
  c->r[3]=0u+0xFFFFFFC0u; // 80088BCC
L_80088BD0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80088BD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80088BD4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80088BD8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80088BDC
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80088BE0
  c->lr=c->r[0]; // 80088BE4
  c->r[1]=c->r[10]|c->r[10]; // 80088BE8
  return; // 80088BEC
}

// nandGenerateAbsPath
void f_80088BF0(Ctx* __restrict c) {
  trace_call(0x80088BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088BF0
  c->r[0]=c->lr; // 80088BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80088BFC
  c->r[31]=c->r[4]|c->r[4]; // 80088C00
  W32(c->r[1]+0x00000008u,c->r[30]); // 80088C04
  c->r[30]=c->r[3]|c->r[3]; // 80088C08
  c->r[3]=c->r[31]|c->r[31]; // 80088C0C
  c->lr=0x80088C14u; f_8006DD10(c); // 80088C10
  cmps(c,0,(int32_t)c->r[3],0); // 80088C14
  if (!crb(c,2)) { goto L_80088C2C; } // 80088C18
  c->r[3]=c->r[30]|c->r[30]; // 80088C1C
  c->r[4]=c->r[13]+0xFFFF82F8u; // 80088C20
  c->lr=0x80088C28u; f_80075140(c); // 80088C24
  goto L_80088CA0; // 80088C28
L_80088C2C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80088C2C
  cmps(c,0,(int32_t)c->r[0],47); // 80088C30
  if (!crb(c,2)) { goto L_80088C40; } // 80088C34
  c->r[0]=0u+0x00000000u; // 80088C38
  goto L_80088C44; // 80088C3C
L_80088C40:;
  c->r[0]=0u+0x00000001u; // 80088C40
L_80088C44:;
  cmps(c,0,(int32_t)c->r[0],0); // 80088C44
  if (crb(c,2)) { goto L_80088C64; } // 80088C48
  c->r[4]=0u+0x80150000u; // 80088C4C
  c->r[3]=c->r[30]|c->r[30]; // 80088C50
  c->r[5]=c->r[31]|c->r[31]; // 80088C54
  c->r[4]=c->r[4]+0xFFFFE320u; // 80088C58
  c->lr=0x80088C60u; f_80088800(c); // 80088C5C
  goto L_80088CA0; // 80088C60
L_80088C64:;
  c->r[3]=c->r[30]|c->r[30]; // 80088C64
  c->r[4]=c->r[31]|c->r[31]; // 80088C68
  c->lr=0x80088C70u; f_80075140(c); // 80088C6C
  c->r[3]=c->r[30]|c->r[30]; // 80088C70
  c->lr=0x80088C78u; f_8006DD10(c); // 80088C74
  cmps(c,0,(int32_t)c->r[3],0); // 80088C78
  if (crb(c,2)) { goto L_80088CA0; } // 80088C7C
  c->r[4]=c->r[3]+c->r[30]; // 80088C80
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80088C84
  cmps(c,0,(int32_t)c->r[0],47); // 80088C88
  if (!crb(c,2)) { goto L_80088CA0; } // 80088C8C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80088C90
  if (crb(c,2)) { goto L_80088CA0; } // 80088C94
  c->r[0]=0u+0x00000000u; // 80088C98
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 80088C9C
L_80088CA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088CA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088CA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80088CA8
  c->lr=c->r[0]; // 80088CAC
  c->r[1]=c->r[1]+0x00000010u; // 80088CB0
  return; // 80088CB4
}

// fn_80088CC0
void f_80088CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088CC0
  c->r[0]=c->lr; // 80088CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80088CCC
  c->r[31]=0u+0x80150000u; // 80088CD0
  c->r[31]=c->r[31]+0xFFFFE2C0u; // 80088CD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80088CD8
  c->lr=0x80088CE0u; f_80049A20(c); // 80088CDC
  c->r[0]=R32(c->r[13]+0xFFFF9190u); // 80088CE0
  cmps(c,0,(int32_t)c->r[0],1); // 80088CE4
  if (!crb(c,2)) { goto L_80088CF8; } // 80088CE8
  c->lr=0x80088CF0u; f_80049A60(c); // 80088CEC
  c->r[3]=0u+0xFFFFFFFDu; // 80088CF0
  goto L_80088DDC; // 80088CF4
L_80088CF8:;
  cmps(c,0,(int32_t)c->r[0],2); // 80088CF8
  if (!crb(c,2)) { goto L_80088D0C; } // 80088CFC
  c->lr=0x80088D04u; f_80049A60(c); // 80088D00
  c->r[3]=0u+0x00000000u; // 80088D04
  goto L_80088DDC; // 80088D08
L_80088D0C:;
  c->r[0]=0u+0x00000001u; // 80088D0C
  W32(c->r[13]+0xFFFF9190u,c->r[0]); // 80088D10
  c->lr=0x80088D18u; f_80049A60(c); // 80088D14
  c->lr=0x80088D1Cu; f_80083120(c); // 80088D18
  cmps(c,0,(int32_t)c->r[3],0); // 80088D1C
  c->r[30]=c->r[3]|c->r[3]; // 80088D20
  if (!crb(c,2)) { goto L_80088DC4; } // 80088D24
  c->lr=0x80088D2Cu; f_800DB3E0(c); // 80088D28
  cmps(c,0,(int32_t)c->r[3],0); // 80088D2C
  c->r[30]=c->r[3]|c->r[3]; // 80088D30
  if (!crb(c,2)) { goto L_80088D44; } // 80088D34
  c->r[3]=c->r[1]+0x00000008u; // 80088D38
  c->lr=0x80088D40u; f_800DB9A0(c); // 80088D3C
  c->r[30]=c->r[3]|c->r[3]; // 80088D40
L_80088D44:;
  cmps(c,0,(int32_t)c->r[30],0); // 80088D44
  if (!crb(c,2)) { goto L_80088D64; } // 80088D48
  c->r[5]=0u+0x801C0000u; // 80088D4C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80088D50
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80088D54
  c->r[5]=c->r[5]+0xFFFFD5A0u; // 80088D58
  c->lr=0x80088D60u; f_800DB900(c); // 80088D5C
  c->r[30]=c->r[3]|c->r[3]; // 80088D60
L_80088D64:;
  cmps(c,0,(int32_t)c->r[30],0); // 80088D64
  if (!crb(c,2)) { goto L_80088D7C; } // 80088D68
  c->r[4]=0u+0x801C0000u; // 80088D6C
  c->r[3]=c->r[31]+0x00000060u; // 80088D70
  c->r[4]=c->r[4]+0xFFFFD5A0u; // 80088D74
  c->lr=0x80088D7Cu; f_80075140(c); // 80088D78
L_80088D7C:;
  c->lr=0x80088D80u; f_800DB440(c); // 80088D7C
  cmps(c,0,(int32_t)c->r[30],0); // 80088D80
  if (crb(c,2)) { goto L_80088D94; } // 80088D84
  c->r[3]=c->r[31]+0x00000130u; // 80088D88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80088D8C
  c->lr=0x80088D94u; f_80045C80(c); // 80088D90
L_80088D94:;
  c->r[3]=c->r[31]+0x000000A0u; // 80088D94
  c->lr=0x80088D9Cu; f_8004AF80(c); // 80088D98
  c->lr=0x80088DA0u; f_80049A20(c); // 80088D9C
  c->r[0]=0u+0x00000002u; // 80088DA0
  W32(c->r[13]+0xFFFF9190u,c->r[0]); // 80088DA4
  c->lr=0x80088DACu; f_80049A60(c); // 80088DA8
  c->r[3]=0u+0x00000001u; // 80088DAC
  c->lr=0x80088DB4u; f_80089F80(c); // 80088DB0
  c->r[3]=R32(c->r[13]+0xFFFF82F0u); // 80088DB4
  c->lr=0x80088DBCu; f_80043D50(c); // 80088DB8
  c->r[3]=0u+0x00000000u; // 80088DBC
  goto L_80088DDC; // 80088DC0
L_80088DC4:;
  c->lr=0x80088DC8u; f_80049A20(c); // 80088DC4
  c->r[0]=0u+0x00000000u; // 80088DC8
  W32(c->r[13]+0xFFFF9190u,c->r[0]); // 80088DCC
  c->lr=0x80088DD4u; f_80049A60(c); // 80088DD0
  c->r[3]=c->r[30]|c->r[30]; // 80088DD4
  c->lr=0x80088DDCu; f_80088A40(c); // 80088DD8
L_80088DDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80088DDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80088DE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088DE4
  c->lr=c->r[0]; // 80088DE8
  c->r[1]=c->r[1]+0x00000020u; // 80088DEC
  return; // 80088DF0
}

// fn_80088E00
void f_80088E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088E00
  c->r[0]=c->lr; // 80088E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 80088E08
  c->r[11]=c->r[1]+0x00000030u; // 80088E0C
  c->lr=0x80088E14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80088E10
  cmps(c,0,(int32_t)c->r[3],0); // 80088E14
  if (!crb(c,2)) { goto L_80088EB0; } // 80088E18
  cmpu(c,0,c->r[4],0x00000002u); // 80088E1C
  if (!crb(c,2)) { goto L_80088EA8; } // 80088E20
  c->r[26]=0u+0x00000000u; // 80088E24
  W32(c->r[1]+0x00000008u,c->r[26]); // 80088E28
  c->lr=0x80088E30u; f_8004DAA0(c); // 80088E2C
  c->r[5]=0u+0x80090000u; // 80088E30
  c->r[27]=c->r[4]|c->r[4]; // 80088E34
  c->r[28]=c->r[3]|c->r[3]; // 80088E38
  c->r[4]=c->r[1]+0x00000008u; // 80088E3C
  c->r[3]=c->r[5]+0xFFFF8ED0u; // 80088E40
  c->lr=0x80088E48u; f_80084770(c); // 80088E44
  c->r[3]=0u+0x10620000u; // 80088E48
  c->r[30]=0u+0x80000000u; // 80088E4C
  c->r[29]=c->r[3]+0x00004DD3u; // 80088E50
  c->r[31]=0u+0x000001F4u; // 80088E54
  goto L_80088E68; // 80088E58
L_80088E5C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80088E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80088E60
  if (!crb(c,2)) { goto L_80088EA8; } // 80088E64
L_80088E68:;
  c->lr=0x80088E6Cu; f_8004DAA0(c); // 80088E68
  c->r[0]=R32(c->r[30]+0x000000F8u); // 80088E6C
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 80088E70
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 80088E74
  c->r[5]=0u+0x00000000u; // 80088E78
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80088E7C
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 80088E80
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80088E84
  c->lr=0x80088E8Cu; f_8006E678(c); // 80088E88
  c->r[0]=c->r[3]^0x80000000u; // 80088E8C
  c->r[5]=c->r[26]^0x80000000u; // 80088E90
  c->r[3]=addc(c,~c->r[31],c->r[4],1); // 80088E94
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80088E98
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80088E9C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80088EA0
  if (!crb(c,2)) { IRQCHK(c); goto L_80088E5C; } // 80088EA4
L_80088EA8:;
  c->r[3]=0u+0x00000001u; // 80088EA8
  goto L_80088EB4; // 80088EAC
L_80088EB0:;
  c->r[3]=0u+0x00000001u; // 80088EB0
L_80088EB4:;
  c->r[11]=c->r[1]+0x00000030u; // 80088EB4
  c->lr=0x80088EBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80088EB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80088EBC
  c->lr=c->r[0]; // 80088EC0
  c->r[1]=c->r[1]+0x00000030u; // 80088EC4
  return; // 80088EC8
}

// fn_80088ED0
void f_80088ED0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80088ED0
  W32(c->r[4]+0x00000000u,c->r[0]); // 80088ED4
  return; // 80088ED8
}

// NANDGetHomeDir
void f_80088EE0(Ctx* __restrict c) {
  trace_call(0x80088EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088EE0
  c->r[0]=c->lr; // 80088EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088EE8
  c->r[0]=R32(c->r[13]+0xFFFF9190u); // 80088EEC
  cmps(c,0,(int32_t)c->r[0],2); // 80088EF0
  if (!crb(c,2)) { goto L_80088F00; } // 80088EF4
  c->r[0]=0u+0x00000001u; // 80088EF8
  goto L_80088F04; // 80088EFC
L_80088F00:;
  c->r[0]=0u+0x00000000u; // 80088F00
L_80088F04:;
  cmps(c,0,(int32_t)c->r[0],0); // 80088F04
  if (!crb(c,2)) { goto L_80088F14; } // 80088F08
  c->r[3]=0u+0xFFFFFF80u; // 80088F0C
  goto L_80088F24; // 80088F10
L_80088F14:;
  c->r[4]=0u+0x801C0000u; // 80088F14
  c->r[4]=c->r[4]+0xFFFFD5A0u; // 80088F18
  c->lr=0x80088F20u; f_80075140(c); // 80088F1C
  c->r[3]=0u+0x00000000u; // 80088F20
L_80088F24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088F24
  c->lr=c->r[0]; // 80088F28
  c->r[1]=c->r[1]+0x00000010u; // 80088F2C
  return; // 80088F30
}

// nandCallback
void f_80088F40(Ctx* __restrict c) {
  trace_call(0x80088F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088F40
  c->r[0]=c->lr; // 80088F44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088F48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80088F4C
  c->r[31]=c->r[4]|c->r[4]; // 80088F50
  c->lr=0x80088F58u; f_80088A40(c); // 80088F54
  c->r[12]=R32(c->r[31]+0x00000004u); // 80088F58
  c->r[4]=c->r[31]|c->r[31]; // 80088F5C
  c->ctr=c->r[12]; // 80088F60
  if (true) { c->lr=0x80088F68u; dispatch(c,c->ctr); } // 80088F64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088F6C
  c->lr=c->r[0]; // 80088F70
  c->r[1]=c->r[1]+0x00000010u; // 80088F74
  return; // 80088F78
}

// fn_80088F80
void f_80088F80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088F80
  c->r[0]=c->lr; // 80088F84
  W32(c->r[1]+0x00000074u,c->r[0]); // 80088F88
  c->r[11]=c->r[1]+0x00000070u; // 80088F8C
  c->lr=0x80088F94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80088F90
  c->r[27]=c->r[3]|c->r[3]; // 80088F94
  c->r[30]=c->r[4]|c->r[4]; // 80088F98
  c->r[28]=c->r[5]|c->r[5]; // 80088F9C
  c->r[29]=c->r[6]|c->r[6]; // 80088FA0
  c->r[31]=c->r[7]|c->r[7]; // 80088FA4
  c->lr=0x80088FACu; f_8006DD10(c); // 80088FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80088FAC
  if (!crb(c,2)) { goto L_80088FBC; } // 80088FB0
  c->r[3]=0u+0xFFFFFF9Bu; // 80088FB4
  goto L_8008923C; // 80088FB8
L_80088FBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80088FBC
  if (crb(c,2)) { goto L_800890C8; } // 80088FC0
  c->r[3]=c->r[27]|c->r[27]; // 80088FC4
  c->lr=0x80088FCCu; f_8006DD10(c); // 80088FC8
  cmps(c,0,(int32_t)c->r[3],0); // 80088FCC
  if (!crb(c,2)) { goto L_80088FE4; } // 80088FD0
  c->r[3]=c->r[28]+0x00000034u; // 80088FD4
  c->r[4]=c->r[13]+0xFFFF82F8u; // 80088FD8
  c->lr=0x80088FE0u; f_80075140(c); // 80088FDC
  goto L_80089058; // 80088FE0
L_80088FE4:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80088FE4
  cmps(c,0,(int32_t)c->r[0],47); // 80088FE8
  if (!crb(c,2)) { goto L_80088FF8; } // 80088FEC
  c->r[0]=0u+0x00000000u; // 80088FF0
  goto L_80088FFC; // 80088FF4
L_80088FF8:;
  c->r[0]=0u+0x00000001u; // 80088FF8
L_80088FFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80088FFC
  if (crb(c,2)) { goto L_8008901C; } // 80089000
  c->r[4]=0u+0x80150000u; // 80089004
  c->r[5]=c->r[27]|c->r[27]; // 80089008
  c->r[3]=c->r[28]+0x00000034u; // 8008900C
  c->r[4]=c->r[4]+0xFFFFE320u; // 80089010
  c->lr=0x80089018u; f_80088800(c); // 80089014
  goto L_80089058; // 80089018
L_8008901C:;
  c->r[4]=c->r[27]|c->r[27]; // 8008901C
  c->r[3]=c->r[28]+0x00000034u; // 80089020
  c->lr=0x80089028u; f_80075140(c); // 80089024
  c->r[3]=c->r[28]+0x00000034u; // 80089028
  c->lr=0x80089030u; f_8006DD10(c); // 8008902C
  cmps(c,0,(int32_t)c->r[3],0); // 80089030
  if (crb(c,2)) { goto L_80089058; } // 80089034
  c->r[4]=c->r[3]+c->r[28]; // 80089038
  c->r[0]=R8(c->r[4]+0x00000033u); // 8008903C
  cmps(c,0,(int32_t)c->r[0],47); // 80089040
  if (!crb(c,2)) { goto L_80089058; } // 80089044
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80089048
  if (crb(c,2)) { goto L_80089058; } // 8008904C
  c->r[0]=0u+0x00000000u; // 80089050
  W8(c->r[4]+0x00000033u,c->r[0]); // 80089054
L_80089058:;
  cmps(c,0,(int32_t)c->r[31],0); // 80089058
  if (!crb(c,2)) { goto L_800890A4; } // 8008905C
  c->r[4]=0u+0x80150000u; // 80089060
  c->r[3]=c->r[28]+0x00000034u; // 80089064
  c->r[4]=c->r[4]+0xFFFFE37Cu; // 80089068
  c->r[5]=0u+0x00000009u; // 8008906C
  c->lr=0x80089074u; f_8007538C(c); // 80089070
  cmps(c,0,(int32_t)c->r[3],0); // 80089074
  if (!crb(c,2)) { goto L_80089090; } // 80089078
  c->r[0]=R8(c->r[28]+0x0000003Du); // 8008907C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80089080
  if (crb(c,2)) { goto L_80089090; } // 80089084
  c->r[0]=0u+0x00000001u; // 80089088
  goto L_80089094; // 8008908C
L_80089090:;
  c->r[0]=0u+0x00000000u; // 80089090
L_80089094:;
  cmps(c,0,(int32_t)c->r[0],0); // 80089094
  if (crb(c,2)) { goto L_800890A4; } // 80089098
  c->r[3]=0u+0xFFFFFF9Au; // 8008909C
  goto L_8008923C; // 800890A0
L_800890A4:;
  c->r[6]=0u+0x80090000u; // 800890A4
  W32(c->r[28]+0x00000088u,c->r[30]); // 800890A8
  c->r[7]=c->r[28]|c->r[28]; // 800890AC
  c->r[3]=c->r[28]+0x00000034u; // 800890B0
  c->r[5]=c->r[28]+0x00000030u; // 800890B4
  c->r[6]=c->r[6]+0xFFFF92B0u; // 800890B8
  c->r[4]=0u+0x00000000u; // 800890BC
  c->lr=0x800890C4u; f_80083730(c); // 800890C0
  goto L_8008923C; // 800890C4
L_800890C8:;
  c->r[0]=0u+0x00000000u; // 800890C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800890CC
  c->r[3]=c->r[27]|c->r[27]; // 800890D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800890D4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800890D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800890DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800890E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800890E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800890E8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800890EC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800890F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800890F4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800890F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800890FC
  W32(c->r[1]+0x00000040u,c->r[0]); // 80089100
  W32(c->r[1]+0x00000044u,c->r[0]); // 80089104
  W32(c->r[1]+0x00000048u,c->r[0]); // 80089108
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8008910C
  c->lr=0x80089114u; f_8006DD10(c); // 80089110
  cmps(c,0,(int32_t)c->r[3],0); // 80089114
  if (!crb(c,2)) { goto L_8008912C; } // 80089118
  c->r[3]=c->r[1]+0x00000010u; // 8008911C
  c->r[4]=c->r[13]+0xFFFF82F8u; // 80089120
  c->lr=0x80089128u; f_80075140(c); // 80089124
  goto L_800891A4; // 80089128
L_8008912C:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 8008912C
  cmps(c,0,(int32_t)c->r[0],47); // 80089130
  if (!crb(c,2)) { goto L_80089140; } // 80089134
  c->r[0]=0u+0x00000000u; // 80089138
  goto L_80089144; // 8008913C
L_80089140:;
  c->r[0]=0u+0x00000001u; // 80089140
L_80089144:;
  cmps(c,0,(int32_t)c->r[0],0); // 80089144
  if (crb(c,2)) { goto L_80089164; } // 80089148
  c->r[4]=0u+0x80150000u; // 8008914C
  c->r[5]=c->r[27]|c->r[27]; // 80089150
  c->r[3]=c->r[1]+0x00000010u; // 80089154
  c->r[4]=c->r[4]+0xFFFFE320u; // 80089158
  c->lr=0x80089160u; f_80088800(c); // 8008915C
  goto L_800891A4; // 80089160
L_80089164:;
  c->r[4]=c->r[27]|c->r[27]; // 80089164
  c->r[3]=c->r[1]+0x00000010u; // 80089168
  c->lr=0x80089170u; f_80075140(c); // 8008916C
  c->r[3]=c->r[1]+0x00000010u; // 80089170
  c->lr=0x80089178u; f_8006DD10(c); // 80089174
  cmps(c,0,(int32_t)c->r[3],0); // 80089178
  if (crb(c,2)) { goto L_800891A4; } // 8008917C
  c->r[0]=c->r[1]+0x00000010u; // 80089180
  c->r[4]=c->r[3]+c->r[0]; // 80089184
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80089188
  cmps(c,0,(int32_t)c->r[0],47); // 8008918C
  if (!crb(c,2)) { goto L_800891A4; } // 80089190
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80089194
  if (crb(c,2)) { goto L_800891A4; } // 80089198
  c->r[0]=0u+0x00000000u; // 8008919C
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 800891A0
L_800891A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800891A4
  if (!crb(c,2)) { goto L_800891F0; } // 800891A8
  c->r[4]=0u+0x80150000u; // 800891AC
  c->r[3]=c->r[1]+0x00000010u; // 800891B0
  c->r[4]=c->r[4]+0xFFFFE37Cu; // 800891B4
  c->r[5]=0u+0x00000009u; // 800891B8
  c->lr=0x800891C0u; f_8007538C(c); // 800891BC
  cmps(c,0,(int32_t)c->r[3],0); // 800891C0
  if (!crb(c,2)) { goto L_800891DC; } // 800891C4
  c->r[0]=R8(c->r[1]+0x00000019u); // 800891C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800891CC
  if (crb(c,2)) { goto L_800891DC; } // 800891D0
  c->r[0]=0u+0x00000001u; // 800891D4
  goto L_800891E0; // 800891D8
L_800891DC:;
  c->r[0]=0u+0x00000000u; // 800891DC
L_800891E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800891E0
  if (crb(c,2)) { goto L_800891F0; } // 800891E4
  c->r[3]=0u+0xFFFFFF9Au; // 800891E8
  goto L_8008923C; // 800891EC
L_800891F0:;
  c->r[0]=0u+0x00000000u; // 800891F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800891F4
  c->r[3]=c->r[1]+0x00000010u; // 800891F8
  c->r[5]=c->r[1]+0x00000008u; // 800891FC
  c->r[4]=0u+0x00000000u; // 80089200
  c->lr=0x80089208u; f_800835D0(c); // 80089204
  cmps(c,0,(int32_t)c->r[3],0); // 80089208
  if (crb(c,2)) { goto L_80089218; } // 8008920C
  cmps(c,0,(int32_t)c->r[3],-102); // 80089210
  if (!crb(c,2)) { goto L_80089228; } // 80089214
L_80089218:;
  c->r[0]=0u+0x00000002u; // 80089218
  W8(c->r[30]+0x00000000u,c->r[0]); // 8008921C
  c->r[3]=0u+0x00000000u; // 80089220
  goto L_8008923C; // 80089224
L_80089228:;
  cmps(c,0,(int32_t)c->r[3],-101); // 80089228
  if (!crb(c,2)) { goto L_8008923C; } // 8008922C
  c->r[0]=0u+0x00000001u; // 80089230
  W8(c->r[30]+0x00000000u,c->r[0]); // 80089234
  c->r[3]=0u+0x00000000u; // 80089238
L_8008923C:;
  c->r[11]=c->r[1]+0x00000070u; // 8008923C
  c->lr=0x80089244u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80089240
  c->r[0]=R32(c->r[1]+0x00000074u); // 80089244
  c->lr=c->r[0]; // 80089248
  c->r[1]=c->r[1]+0x00000070u; // 8008924C
  return; // 80089250
}

// NANDPrivateGetTypeAsync
void f_80089260(Ctx* __restrict c) {
  trace_call(0x80089260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089260
  c->r[0]=c->lr; // 80089264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80089268
  c->r[0]=R32(c->r[13]+0xFFFF9190u); // 8008926C
  cmps(c,0,(int32_t)c->r[0],2); // 80089270
  if (crb(c,2)) { goto L_80089280; } // 80089274
  c->r[3]=0u+0xFFFFFF80u; // 80089278
  goto L_80089298; // 8008927C
L_80089280:;
  W32(c->r[6]+0x00000004u,c->r[5]); // 80089280
  c->r[5]=c->r[6]|c->r[6]; // 80089284
  c->r[6]=0u+0x00000001u; // 80089288
  c->r[7]=0u+0x00000001u; // 8008928C
  c->lr=0x80089294u; f_80088F80(c); // 80089290
  c->lr=0x80089298u; f_80088A40(c); // 80089294
L_80089298:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80089298
  c->lr=c->r[0]; // 8008929C
  c->r[1]=c->r[1]+0x00000010u; // 800892A0
  return; // 800892A4
}

// nandGetTypeCallback
void f_800892B0(Ctx* __restrict c) {
  trace_call(0x800892B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800892B0
  c->r[0]=c->lr; // 800892B4
  cmps(c,0,(int32_t)c->r[3],0); // 800892B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800892BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800892C0
  c->r[31]=c->r[4]|c->r[4]; // 800892C4
  if (crb(c,2)) { goto L_800892D4; } // 800892C8
  cmps(c,0,(int32_t)c->r[3],-102); // 800892CC
  if (!crb(c,2)) { goto L_800892E8; } // 800892D0
L_800892D4:;
  c->r[4]=R32(c->r[4]+0x00000088u); // 800892D4
  c->r[0]=0u+0x00000002u; // 800892D8
  c->r[3]=0u+0x00000000u; // 800892DC
  W8(c->r[4]+0x00000000u,c->r[0]); // 800892E0
  goto L_80089300; // 800892E4
L_800892E8:;
  cmps(c,0,(int32_t)c->r[3],-101); // 800892E8
  if (!crb(c,2)) { goto L_80089300; } // 800892EC
  c->r[4]=R32(c->r[4]+0x00000088u); // 800892F0
  c->r[0]=0u+0x00000001u; // 800892F4
  c->r[3]=0u+0x00000000u; // 800892F8
  W8(c->r[4]+0x00000000u,c->r[0]); // 800892FC
L_80089300:;
  c->lr=0x80089304u; f_80088A40(c); // 80089300
  c->r[12]=R32(c->r[31]+0x00000004u); // 80089304
  c->r[4]=c->r[31]|c->r[31]; // 80089308
  c->ctr=c->r[12]; // 8008930C
  if (true) { c->lr=0x80089314u; dispatch(c,c->ctr); } // 80089310
  c->r[0]=R32(c->r[1]+0x00000014u); // 80089314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80089318
  c->lr=c->r[0]; // 8008931C
  c->r[1]=c->r[1]+0x00000010u; // 80089320
  return; // 80089324
}

// fn_80089330
void f_80089330(Ctx* __restrict c) {
  c->r[3]=0u+0x801C0000u; // 80089330
  c->r[3]=c->r[3]+0xFFFFD5A0u; // 80089334
  return; // 80089338
}

// NANDInitBanner
void f_80089340(Ctx* __restrict c) {
  trace_call(0x80089340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089340
  c->r[0]=c->lr; // 80089344
  c->r[7]=0u+0x00010000u; // 80089348
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008934C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80089350
  c->r[31]=c->r[6]|c->r[6]; // 80089354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80089358
  c->r[30]=c->r[5]|c->r[5]; // 8008935C
  c->r[5]=c->r[7]+0xFFFFF0A0u; // 80089360
  W32(c->r[1]+0x00000014u,c->r[29]); // 80089364
  c->r[29]=c->r[4]|c->r[4]; // 80089368
  c->r[4]=0u+0x00000000u; // 8008936C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80089370
  c->r[28]=c->r[3]|c->r[3]; // 80089374
  c->lr=0x8008937Cu; f_80004714(c); // 80089378
  c->r[3]=0u+0x57490000u; // 8008937C
  W32(c->r[28]+0x00000004u,c->r[29]); // 80089380
  c->r[0]=c->r[3]+0x0000424Eu; // 80089384
  c->r[4]=c->r[13]+0xFFFF8310u; // 80089388
  W32(c->r[28]+0x00000000u,c->r[0]); // 8008938C
  c->r[3]=c->r[30]|c->r[30]; // 80089390
  c->lr=0x80089398u; f_800759A0(c); // 80089394
  cmps(c,0,(int32_t)c->r[3],0); // 80089398
  if (!crb(c,2)) { goto L_800893B4; } // 8008939C
  c->r[3]=c->r[28]+0x00000020u; // 800893A0
  c->r[4]=c->r[13]+0xFFFF8314u; // 800893A4
  c->r[5]=0u+0x00000020u; // 800893A8
  c->lr=0x800893B0u; f_8007595C(c); // 800893AC
  goto L_800893C4; // 800893B0
L_800893B4:;
  c->r[4]=c->r[30]|c->r[30]; // 800893B4
  c->r[3]=c->r[28]+0x00000020u; // 800893B8
  c->r[5]=0u+0x00000020u; // 800893BC
  c->lr=0x800893C4u; f_8007595C(c); // 800893C0
L_800893C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800893C4
  c->r[4]=c->r[13]+0xFFFF8310u; // 800893C8
  c->lr=0x800893D0u; f_800759A0(c); // 800893CC
  cmps(c,0,(int32_t)c->r[3],0); // 800893D0
  if (!crb(c,2)) { goto L_800893EC; } // 800893D4
  c->r[3]=c->r[28]+0x00000060u; // 800893D8
  c->r[4]=c->r[13]+0xFFFF8314u; // 800893DC
  c->r[5]=0u+0x00000020u; // 800893E0
  c->lr=0x800893E8u; f_8007595C(c); // 800893E4
  goto L_800893FC; // 800893E8
L_800893EC:;
  c->r[4]=c->r[31]|c->r[31]; // 800893EC
  c->r[3]=c->r[28]+0x00000060u; // 800893F0
  c->r[5]=0u+0x00000020u; // 800893F4
  c->lr=0x800893FCu; f_8007595C(c); // 800893F8
L_800893FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800893FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80089400
  c->r[30]=R32(c->r[1]+0x00000018u); // 80089404
  c->r[29]=R32(c->r[1]+0x00000014u); // 80089408
  c->r[28]=R32(c->r[1]+0x00000010u); // 8008940C
  c->lr=c->r[0]; // 80089410
  c->r[1]=c->r[1]+0x00000020u; // 80089414
  return; // 80089418
}

// fn_80089420
void f_80089420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80089420
  c->r[0]=c->lr; // 80089424
  W32(c->r[1]+0x00000064u,c->r[0]); // 80089428
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8008942C
  c->r[31]=c->r[5]|c->r[5]; // 80089430
  W32(c->r[1]+0x00000058u,c->r[30]); // 80089434
  c->r[30]=c->r[4]|c->r[4]; // 80089438
  W32(c->r[1]+0x00000054u,c->r[29]); // 8008943C
  c->r[29]=c->r[3]|c->r[3]; // 80089440
  c->lr=0x80089448u; f_80088A00(c); // 80089444
  cmps(c,0,(int32_t)c->r[3],0); // 80089448
  if (!crb(c,2)) { goto L_80089458; } // 8008944C
  c->r[3]=0u+0xFFFFFF80u; // 80089450
  goto L_800894BC; // 80089454
L_80089458:;
  c->r[0]=0u+0x00000000u; // 80089458
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008945C
  c->r[4]=c->r[29]|c->r[29]; // 80089460
  c->r[3]=c->r[1]+0x00000008u; // 80089464
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80089468
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008946C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80089470
  W32(c->r[1]+0x00000018u,c->r[0]); // 80089474
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80089478
  W32(c->r[1]+0x00000020u,c->r[0]); // 8008947C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80089480
  W32(c->r[1]+0x00000028u,c->r[0]); // 80089484
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80089488
  W32(c->r[1]+0x00000030u,c->r[0]); // 8008948C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80089490
  W32(c->r[1]+0x00000038u,c->r[0]); // 80089494
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80089498
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008949C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800894A0
  c->lr=0x800894A8u; f_80088BF0(c); // 800894A4
  c->r[4]=c->r[30]|c->r[30]; // 800894A8
  c->r[5]=c->r[31]|c->r[31]; // 800894AC
  c->r[3]=c->r[1]+0x00000008u; // 800894B0
  c->lr=0x800894B8u; f_80083EF0(c); // 800894B4
  c->lr=0x800894BCu; f_80088A40(c); // 800894B8
L_800894BC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800894BC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800894C0
  c->r[30]=R32(c->r[1]+0x00000058u); // 800894C4
  c->r[29]=R32(c->r[1]+0x00000054u); // 800894C8
  c->lr=c->r[0]; // 800894CC
  c->r[1]=c->r[1]+0x00000060u; // 800894D0
  return; // 800894D4
}

// nandCalcUsage
void f_800894E0(Ctx* __restrict c) {
  trace_call(0x800894E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800894E0
  c->r[0]=c->lr; // 800894E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800894E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800894EC
  c->r[31]=0u+0x00000000u; // 800894F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800894F4
  c->r[30]=c->r[5]|c->r[5]; // 800894F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800894FC
  c->r[29]=c->r[4]|c->r[4]; // 80089500
  W32(c->r[1]+0x00000010u,c->r[28]); // 80089504
  c->r[28]=c->r[3]|c->r[3]; // 80089508
  W32(c->r[3]+0x00000000u,c->r[31]); // 8008950C
  c->r[3]=0u+0xFFFFFF8Bu; // 80089510
  W32(c->r[4]+0x00000000u,c->r[31]); // 80089514
  goto L_80089570; // 80089518
L_8008951C:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008951C
  c->r[4]=c->r[1]+0x0000000Cu; // 80089520
  c->r[5]=c->r[1]+0x00000008u; // 80089524
  W32(c->r[1]+0x00000008u,c->r[31]); // 80089528
  c->r[3]=R32(c->r[30]+0x00000000u); // 8008952C
  c->lr=0x80089534u; f_80083EF0(c); // 80089530
  cmps(c,0,(int32_t)c->r[3],0); // 80089534
  if (!crb(c,2)) { goto L_80089560; } // 80089538
  c->r[4]=R32(c->r[28]+0x00000000u); // 8008953C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80089540
  c->r[0]=c->r[4]+c->r[0]; // 80089544
  W32(c->r[28]+0x00000000u,c->r[0]); // 80089548
  c->r[4]=R32(c->r[29]+0x00000000u); // 8008954C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80089550
  c->r[0]=c->r[4]+c->r[0]; // 80089554
  W32(c->r[29]+0x00000000u,c->r[0]); // 80089558
  goto L_8008956C; // 8008955C
L_80089560:;
  cmps(c,0,(int32_t)c->r[3],-106); // 80089560
  if (!crb(c,2)) { goto L_8008957C; } // 80089564
  c->r[3]=0u+0x00000000u; // 80089568
L_8008956C:;
  c->r[30]=c->r[30]+0x00000004u; // 8008956C
L_80089570:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80089570
  cmps(c,0,(int32_t)c->r[0],0); // 80089574
  if (!crb(c,2)) { IRQCHK(c); goto L_8008951C; } // 80089578
L_8008957C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008957C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80089580
  c->r[30]=R32(c->r[1]+0x00000018u); // 80089584
  c->r[29]=R32(c->r[1]+0x00000014u); // 80089588
  c->r[28]=R32(c->r[1]+0x00000010u); // 8008958C
  c->lr=c->r[0]; // 80089590
  c->r[1]=c->r[1]+0x00000020u; // 80089594
  return; // 80089598
}

// NANDCheck
void f_800895A0(Ctx* __restrict c) {
  trace_call(0x800895A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800895A0
  c->r[0]=c->lr; // 800895A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800895A8
  c->r[0]=0u+0xFFFFFFFFu; // 800895AC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800895B0
  c->r[31]=c->r[5]|c->r[5]; // 800895B4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800895B8
  c->r[30]=c->r[4]|c->r[4]; // 800895BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800895C0
  c->r[29]=c->r[3]|c->r[3]; // 800895C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800895C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800895CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800895D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800895D4
  c->lr=0x800895DCu; f_80088A00(c); // 800895D8
  cmps(c,0,(int32_t)c->r[3],0); // 800895DC
  if (!crb(c,2)) { goto L_800895EC; } // 800895E0
  c->r[3]=0u+0xFFFFFF80u; // 800895E4
  goto L_8008968C; // 800895E8
L_800895EC:;
  c->lr=0x800895F0u; f_80089330(c); // 800895EC
  c->r[4]=c->r[1]+0x00000014u; // 800895F0
  c->r[5]=c->r[1]+0x00000010u; // 800895F4
  c->lr=0x800895FCu; f_80083EF0(c); // 800895F8
  cmps(c,0,(int32_t)c->r[3],0); // 800895FC
  if (crb(c,2)) { goto L_8008960C; } // 80089600
  c->lr=0x80089608u; f_80088A40(c); // 80089604
  goto L_8008968C; // 80089608
L_8008960C:;
  c->r[5]=0u+0x80150000u; // 8008960C
  c->r[3]=c->r[1]+0x0000000Cu; // 80089610
  c->r[4]=c->r[1]+0x00000008u; // 80089614
  c->r[5]=c->r[5]+0xFFFFE490u; // 80089618
  c->lr=0x80089620u; f_800894E0(c); // 8008961C
  cmps(c,0,(int32_t)c->r[3],0); // 80089620
  if (crb(c,2)) { goto L_80089630; } // 80089624
  c->lr=0x8008962Cu; f_80088A40(c); // 80089628
  goto L_8008968C; // 8008962C
L_80089630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80089630
  c->r[5]=0u+0x00000000u; // 80089634
  c->r[4]=R32(c->r[1]+0x00000008u); // 80089638
  c->r[0]=c->r[0]+c->r[29]; // 8008963C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80089640
  cmpu(c,0,c->r[0],0x00000400u); // 80089644
  c->r[0]=R32(c->r[1]+0x00000010u); // 80089648
  if (!crb(c,1)) { goto L_80089654; } // 8008964C
  c->r[5]=c->r[5]|0x00000001u; // 80089650
L_80089654:;
  c->r[0]=c->r[0]+c->r[30]; // 80089654
  cmpu(c,0,c->r[0],0x00000021u); // 80089658
  if (!crb(c,1)) { goto L_80089664; } // 8008965C
  c->r[5]=c->r[5]|0x00000002u; // 80089660
L_80089664:;
  c->r[0]=c->r[3]+c->r[29]; // 80089664
  cmpu(c,0,c->r[0],0x00004400u); // 80089668
  if (!crb(c,1)) { goto L_80089674; } // 8008966C
  c->r[5]=c->r[5]|0x00000004u; // 80089670
L_80089674:;
  c->r[0]=c->r[4]+c->r[30]; // 80089674
  cmpu(c,0,c->r[0],0x00000FA0u); // 80089678
  if (!crb(c,1)) { goto L_80089684; } // 8008967C
  c->r[5]=c->r[5]|0x00000008u; // 80089680
L_80089684:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 80089684
  c->r[3]=0u+0x00000000u; // 80089688
L_8008968C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008968C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80089690
  c->r[30]=R32(c->r[1]+0x00000028u); // 80089694
  c->r[29]=R32(c->r[1]+0x00000024u); // 80089698
  c->lr=c->r[0]; // 8008969C
  c->r[1]=c->r[1]+0x00000030u; // 800896A0
  return; // 800896A4
}

