#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800F2D74
void f_800F2D74(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F2D74
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F2D78
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F2D7C
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F2D80
  c->r[0]=c->r[6]+c->r[0]; // 800F2D84
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2D88
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F2D8C
  c->r[6]=c->r[3]+c->r[5]; // 800F2D90
L_800F2D94:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F2D94
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F2D98
  c->r[0]=R8(c->r[6]+0x00000001u); // 800F2D9C
  c->r[0]=c->r[3]+c->r[0]; // 800F2DA0
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2DA4
  c->r[3]=c->r[0]&0x00007F7Fu; cr0(c,c->r[3]); // 800F2DA8
  c->r[0]=c->r[8]+c->r[3]; // 800F2DAC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2DB0
  c->r[8]=c->r[3]|c->r[3]; // 800F2DB4
  c->r[6]=c->r[6]+c->r[5]; // 800F2DB8
  c->r[4]=c->r[4]+c->r[5]; // 800F2DBC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F2DC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2D94; } // 800F2DC4
  return; // 800F2DC8
}

// fn_800F2DCC
void f_800F2DCC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F2DCC
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F2DD0
  c->r[0]=sraw(c,c->r[0],1); // 800F2DD4
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F2DD8
  c->r[6]=R8(c->r[3]+0x00000002u); // 800F2DDC
  c->r[0]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F2DE0
  c->r[6]=rotl(c->r[6],31)&0x0000FFFFu; // 800F2DE4
  c->r[0]=c->r[7]+c->r[0]; // 800F2DE8
  c->r[0]=c->r[6]+c->r[0]; // 800F2DEC
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2DF0
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F2DF4
  c->r[7]=c->r[3]+c->r[5]; // 800F2DF8
L_800F2DFC:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F2DFC
  c->r[0]=sraw(c,c->r[0],1); // 800F2E00
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F2E04
  c->r[3]=R8(c->r[7]+0x00000002u); // 800F2E08
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F2E0C
  c->r[3]=rotl(c->r[3],31)&0x0000FFFFu; // 800F2E10
  c->r[0]=c->r[6]+c->r[0]; // 800F2E14
  c->r[0]=c->r[3]+c->r[0]; // 800F2E18
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2E1C
  c->r[3]=c->r[0]&0x00007F7Fu; cr0(c,c->r[3]); // 800F2E20
  c->r[0]=c->r[9]+c->r[3]; // 800F2E24
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2E28
  c->r[9]=c->r[3]|c->r[3]; // 800F2E2C
  c->r[7]=c->r[7]+c->r[5]; // 800F2E30
  c->r[4]=c->r[4]+c->r[5]; // 800F2E34
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F2E38
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2DFC; } // 800F2E3C
  return; // 800F2E40
}

// fn_800F2E44
void f_800F2E44(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F2E44
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F2E48
  c->r[0]=sraw(c,c->r[0],1); // 800F2E4C
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F2E50
  c->r[3]=c->r[3]+c->r[5]; // 800F2E54
L_800F2E58:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F2E58
  c->r[0]=sraw(c,c->r[0],1); // 800F2E5C
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F2E60
  c->r[0]=c->r[8]+c->r[7]; // 800F2E64
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2E68
  c->r[8]=c->r[7]|c->r[7]; // 800F2E6C
  c->r[3]=c->r[3]+c->r[5]; // 800F2E70
  c->r[4]=c->r[4]+c->r[5]; // 800F2E74
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F2E78
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2E58; } // 800F2E7C
  return; // 800F2E80
}

// fn_800F2E84
void f_800F2E84(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F2E84
L_800F2E88:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F2E88
  c->r[0]=R16(c->r[3]+0x00000001u); // 800F2E8C
  c->r[0]=sraw(c,c->r[0],1); // 800F2E90
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F2E94
  c->r[0]=sraw(c,c->r[7],8); // 800F2E98
  c->r[6]=rotl(c->r[6],7)&0x00FFFF00u; // 800F2E9C
  c->r[0]=c->r[7]+c->r[0]; // 800F2EA0
  c->r[0]=c->r[6]+c->r[0]; // 800F2EA4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2EA8
  c->r[3]=c->r[3]+c->r[5]; // 800F2EAC
  c->r[4]=c->r[4]+c->r[5]; // 800F2EB0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F2EB4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2E88; } // 800F2EB8
  return; // 800F2EBC
}

// fn_800F2EC0
void f_800F2EC0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F2EC0
L_800F2EC4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F2EC4
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F2EC8
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F2ECC
  c->r[0]=c->r[6]+c->r[0]; // 800F2ED0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2ED4
  c->r[3]=c->r[3]+c->r[5]; // 800F2ED8
  c->r[4]=c->r[4]+c->r[5]; // 800F2EDC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F2EE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2EC4; } // 800F2EE4
  return; // 800F2EE8
}

// fn_800F2EEC
void f_800F2EEC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F2EEC
L_800F2EF0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F2EF0
  c->r[0]=sraw(c,c->r[0],1); // 800F2EF4
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F2EF8
  c->r[6]=R8(c->r[3]+0x00000002u); // 800F2EFC
  c->r[0]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F2F00
  c->r[6]=rotl(c->r[6],31)&0x0000FFFFu; // 800F2F04
  c->r[0]=c->r[7]+c->r[0]; // 800F2F08
  c->r[0]=c->r[6]+c->r[0]; // 800F2F0C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2F10
  c->r[3]=c->r[3]+c->r[5]; // 800F2F14
  c->r[4]=c->r[4]+c->r[5]; // 800F2F18
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F2F1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2EF0; } // 800F2F20
  return; // 800F2F24
}

// fn_800F2F28
void f_800F2F28(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F2F28
L_800F2F2C:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F2F2C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2F30
  c->r[3]=c->r[3]+c->r[5]; // 800F2F34
  c->r[4]=c->r[4]+c->r[5]; // 800F2F38
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F2F3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2F2C; } // 800F2F40
  return; // 800F2F44
}

// fn_800F2F48
void f_800F2F48(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F2F48
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F2F4C
  c->r[0]=R16(c->r[3]+0x00000001u); // 800F2F50
  c->r[0]=sraw(c,c->r[0],1); // 800F2F54
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F2F58
  c->r[0]=sraw(c,c->r[7],8); // 800F2F5C
  c->r[6]=rotl(c->r[6],7)&0x00FFFF00u; // 800F2F60
  c->r[0]=c->r[7]+c->r[0]; // 800F2F64
  c->r[0]=c->r[6]+c->r[0]; // 800F2F68
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2F6C
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F2F70
  c->r[7]=c->r[3]+c->r[5]; // 800F2F74
L_800F2F78:;
  c->r[3]=R8(c->r[7]+0x00000000u); // 800F2F78
  c->r[0]=R16(c->r[7]+0x00000001u); // 800F2F7C
  c->r[0]=sraw(c,c->r[0],1); // 800F2F80
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F2F84
  c->r[0]=sraw(c,c->r[6],8); // 800F2F88
  c->r[3]=rotl(c->r[3],7)&0x00FFFF00u; // 800F2F8C
  c->r[0]=c->r[6]+c->r[0]; // 800F2F90
  c->r[0]=c->r[3]+c->r[0]; // 800F2F94
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2F98
  c->r[3]=c->r[0]&0x00007F7Fu; cr0(c,c->r[3]); // 800F2F9C
  c->r[0]=c->r[9]+c->r[3]; // 800F2FA0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2FA4
  c->r[9]=c->r[3]|c->r[3]; // 800F2FA8
  c->r[7]=c->r[7]+c->r[5]; // 800F2FAC
  c->r[4]=c->r[4]+c->r[5]; // 800F2FB0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F2FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2F78; } // 800F2FB8
  return; // 800F2FBC
}

// fn_800F2FC0
void f_800F2FC0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F2FC0
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F2FC4
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F2FC8
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F2FCC
  c->r[0]=c->r[6]+c->r[0]; // 800F2FD0
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2FD4
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F2FD8
  c->r[6]=c->r[3]+c->r[5]; // 800F2FDC
L_800F2FE0:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F2FE0
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F2FE4
  c->r[0]=R8(c->r[6]+0x00000001u); // 800F2FE8
  c->r[0]=c->r[3]+c->r[0]; // 800F2FEC
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F2FF0
  c->r[3]=c->r[0]&0x00007F7Fu; cr0(c,c->r[3]); // 800F2FF4
  c->r[0]=c->r[8]+c->r[3]; // 800F2FF8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F2FFC
  c->r[8]=c->r[3]|c->r[3]; // 800F3000
  c->r[6]=c->r[6]+c->r[5]; // 800F3004
  c->r[4]=c->r[4]+c->r[5]; // 800F3008
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F300C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2FE0; } // 800F3010
  return; // 800F3014
}

// fn_800F3018
void f_800F3018(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F3018
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F301C
  c->r[0]=sraw(c,c->r[0],1); // 800F3020
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F3024
  c->r[6]=R8(c->r[3]+0x00000002u); // 800F3028
  c->r[0]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F302C
  c->r[6]=rotl(c->r[6],31)&0x0000FFFFu; // 800F3030
  c->r[0]=c->r[7]+c->r[0]; // 800F3034
  c->r[0]=c->r[6]+c->r[0]; // 800F3038
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F303C
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F3040
  c->r[7]=c->r[3]+c->r[5]; // 800F3044
L_800F3048:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F3048
  c->r[0]=sraw(c,c->r[0],1); // 800F304C
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F3050
  c->r[3]=R8(c->r[7]+0x00000002u); // 800F3054
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F3058
  c->r[3]=rotl(c->r[3],31)&0x0000FFFFu; // 800F305C
  c->r[0]=c->r[6]+c->r[0]; // 800F3060
  c->r[0]=c->r[3]+c->r[0]; // 800F3064
  c->r[0]=rotl(c->r[0],31)&0x00007FFFu; // 800F3068
  c->r[3]=c->r[0]&0x00007F7Fu; cr0(c,c->r[3]); // 800F306C
  c->r[0]=c->r[9]+c->r[3]; // 800F3070
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F3074
  c->r[9]=c->r[3]|c->r[3]; // 800F3078
  c->r[7]=c->r[7]+c->r[5]; // 800F307C
  c->r[4]=c->r[4]+c->r[5]; // 800F3080
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3084
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3048; } // 800F3088
  return; // 800F308C
}

// fn_800F3090
void f_800F3090(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F3090
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3094
  c->r[0]=sraw(c,c->r[0],1); // 800F3098
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F309C
  c->r[3]=c->r[3]+c->r[5]; // 800F30A0
L_800F30A4:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F30A4
  c->r[0]=sraw(c,c->r[0],1); // 800F30A8
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F30AC
  c->r[0]=c->r[8]+c->r[7]; // 800F30B0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F30B4
  c->r[8]=c->r[7]|c->r[7]; // 800F30B8
  c->r[3]=c->r[3]+c->r[5]; // 800F30BC
  c->r[4]=c->r[4]+c->r[5]; // 800F30C0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F30C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F30A4; } // 800F30C8
  return; // 800F30CC
}

// fn_800F30D0
void f_800F30D0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F30D0
L_800F30D4:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F30D4
  c->r[0]=R16(c->r[3]+0x00000001u); // 800F30D8
  c->r[0]=sraw(c,c->r[0],1); // 800F30DC
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F30E0
  c->r[0]=sraw(c,c->r[7],8); // 800F30E4
  c->r[6]=rotl(c->r[6],7)&0x00FFFF00u; // 800F30E8
  c->r[0]=c->r[7]+c->r[0]; // 800F30EC
  c->r[0]=c->r[6]+c->r[0]; // 800F30F0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F30F4
  c->r[3]=c->r[3]+c->r[5]; // 800F30F8
  c->r[4]=c->r[4]+c->r[5]; // 800F30FC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3100
  if (!crb(c,2)) { IRQCHK(c); goto L_800F30D4; } // 800F3104
  return; // 800F3108
}

// fn_800F310C
void f_800F310C(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F310C
L_800F3110:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3110
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3114
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F3118
  c->r[0]=c->r[6]+c->r[0]; // 800F311C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F3120
  c->r[3]=c->r[3]+c->r[5]; // 800F3124
  c->r[4]=c->r[4]+c->r[5]; // 800F3128
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F312C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3110; } // 800F3130
  return; // 800F3134
}

// fn_800F3138
void f_800F3138(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F3138
L_800F313C:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F313C
  c->r[0]=sraw(c,c->r[0],1); // 800F3140
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F3144
  c->r[6]=R8(c->r[3]+0x00000002u); // 800F3148
  c->r[0]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F314C
  c->r[6]=rotl(c->r[6],31)&0x0000FFFFu; // 800F3150
  c->r[0]=c->r[7]+c->r[0]; // 800F3154
  c->r[0]=c->r[6]+c->r[0]; // 800F3158
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F315C
  c->r[3]=c->r[3]+c->r[5]; // 800F3160
  c->r[4]=c->r[4]+c->r[5]; // 800F3164
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3168
  if (!crb(c,2)) { IRQCHK(c); goto L_800F313C; } // 800F316C
  return; // 800F3170
}

// fn_800F3174
void f_800F3174(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F3174
L_800F3178:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3178
  W16(c->r[4]+0x00000000u,c->r[0]); // 800F317C
  c->r[3]=c->r[3]+c->r[5]; // 800F3180
  c->r[4]=c->r[4]+c->r[5]; // 800F3184
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F3188
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3178; } // 800F318C
  return; // 800F3190
}

// fn_800F3194
void f_800F3194(Ctx* __restrict c) {
  c->r[9]=R8(c->r[3]+0x00000000u); // 800F3194
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3198
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F319C
  c->r[6]=0u+0x7F7F0000u; // 800F31A0
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F31A4
  c->r[8]=c->r[0]&c->r[7]; // 800F31A8
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F31AC
  c->r[6]=rotl(c->r[9],23)&0xFF000000u; // 800F31B0
  c->r[0]=c->r[8]+c->r[0]; // 800F31B4
  c->r[0]=c->r[6]+c->r[0]; // 800F31B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F31BC
  c->r[8]=c->r[0]&c->r[7]; // 800F31C0
  {uint32_t ea=c->r[3]+c->r[5]; c->r[6]=R8(ea); c->r[3]=ea;} // 800F31C4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F31C8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F31CC
  c->r[5]=c->r[0]&c->r[7]; // 800F31D0
  c->r[0]=rotl(c->r[5],24)&0x00FFFFFFu; // 800F31D4
  c->r[3]=rotl(c->r[6],23)&0xFF000000u; // 800F31D8
  c->r[0]=c->r[5]+c->r[0]; // 800F31DC
  c->r[0]=c->r[3]+c->r[0]; // 800F31E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F31E4
  c->r[0]=c->r[0]&c->r[7]; // 800F31E8
  c->r[0]=c->r[8]+c->r[0]; // 800F31EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F31F0
  return; // 800F31F4
}

// fn_800F31F8
void f_800F31F8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F31F8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F31FC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3200
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3204
  c->r[0]=c->r[6]+c->r[0]; // 800F3208
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F320C
  c->r[6]=0u+0x7F7F0000u; // 800F3210
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3214
  c->r[7]=c->r[0]&c->r[6]; // 800F3218
  {uint32_t ea=c->r[5]+c->r[3]; c->r[0]=R8(ea); c->r[5]=ea;} // 800F321C
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F3220
  c->r[0]=R32(c->r[5]+0x00000001u); // 800F3224
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3228
  c->r[0]=c->r[3]+c->r[0]; // 800F322C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3230
  c->r[0]=c->r[0]&c->r[6]; // 800F3234
  c->r[0]=c->r[7]+c->r[0]; // 800F3238
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F323C
  return; // 800F3240
}

// fn_800F3244
void f_800F3244(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3244
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3248
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F324C
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F3250
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3254
  c->r[6]=0u+0x7F7F0000u; // 800F3258
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F325C
  c->r[0]=c->r[0]&c->r[9]; // 800F3260
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F3264
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3268
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F326C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3270
  c->r[6]=c->r[8]+c->r[6]; // 800F3274
  c->r[0]=c->r[7]+c->r[0]; // 800F3278
  c->r[0]=c->r[6]+c->r[0]; // 800F327C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3280
  c->r[7]=c->r[0]&c->r[9]; // 800F3284
  {uint32_t ea=c->r[3]+c->r[5]; c->r[0]=R16(ea); c->r[3]=ea;} // 800F3288
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F328C
  c->r[5]=c->r[0]&0x00007F7Fu; cr0(c,c->r[5]); // 800F3290
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F3294
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3298
  c->r[0]=c->r[0]&c->r[9]; // 800F329C
  c->r[6]=rotl(c->r[5],16)&0xFFFF0000u; // 800F32A0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F32A4
  c->r[5]=rotl(c->r[5],24)&0xFF000000u; // 800F32A8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F32AC
  c->r[3]=c->r[6]+c->r[3]; // 800F32B0
  c->r[0]=c->r[5]+c->r[0]; // 800F32B4
  c->r[0]=c->r[3]+c->r[0]; // 800F32B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F32BC
  c->r[0]=c->r[0]&c->r[9]; // 800F32C0
  c->r[0]=c->r[7]+c->r[0]; // 800F32C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F32C8
  return; // 800F32CC
}

// fn_800F32D0
void f_800F32D0(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F32D0
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F32D4
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F32D8
  c->r[0]=c->r[6]+c->r[0]; // 800F32DC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F32E0
  c->r[6]=0u+0x7F7F0000u; // 800F32E4
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F32E8
  c->r[7]=c->r[0]&c->r[6]; // 800F32EC
  {uint32_t ea=c->r[5]+c->r[3]; c->r[0]=R16(ea); c->r[5]=ea;} // 800F32F0
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F32F4
  c->r[0]=R16(c->r[5]+0x00000002u); // 800F32F8
  c->r[0]=c->r[3]+c->r[0]; // 800F32FC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3300
  c->r[0]=c->r[0]&c->r[6]; // 800F3304
  c->r[0]=c->r[7]+c->r[0]; // 800F3308
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F330C
  return; // 800F3310
}

// fn_800F3314
void f_800F3314(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3314
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3318
  c->r[6]=0u+0x7F7F0000u; // 800F331C
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F3320
  c->r[9]=c->r[0]&c->r[8]; // 800F3324
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F3328
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F332C
  c->r[10]=c->r[0]&0x00007F7Fu; cr0(c,c->r[10]); // 800F3330
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F3334
  c->r[6]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F3338
  c->r[0]=rotl(c->r[9],16)&0xFFFF0000u; // 800F333C
  c->r[6]=c->r[7]+c->r[6]; // 800F3340
  c->r[0]=c->r[0]+c->r[10]; // 800F3344
  c->r[0]=c->r[6]+c->r[0]; // 800F3348
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F334C
  c->r[7]=c->r[0]&c->r[8]; // 800F3350
  c->r[3]=c->r[3]+c->r[5]; // 800F3354
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3358
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F335C
  c->r[6]=c->r[0]&c->r[8]; // 800F3360
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F3364
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3368
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F336C
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F3370
  c->r[3]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F3374
  c->r[0]=rotl(c->r[6],16)&0xFFFF0000u; // 800F3378
  c->r[3]=c->r[5]+c->r[3]; // 800F337C
  c->r[0]=c->r[0]+c->r[9]; // 800F3380
  c->r[0]=c->r[3]+c->r[0]; // 800F3384
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3388
  c->r[0]=c->r[0]&c->r[8]; // 800F338C
  c->r[0]=c->r[7]+c->r[0]; // 800F3390
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3394
  return; // 800F3398
}

// fn_800F339C
void f_800F339C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F339C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F33A0
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F33A4
  c->r[0]=c->r[6]+c->r[0]; // 800F33A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F33AC
  c->r[6]=0u+0x7F7F0000u; // 800F33B0
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F33B4
  c->r[7]=c->r[0]&c->r[6]; // 800F33B8
  c->r[5]=c->r[3]+c->r[5]; // 800F33BC
  c->r[0]=R32(c->r[5]+0xFFFFFFFFu); // 800F33C0
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F33C4
  c->r[0]=R8(c->r[5]+0x00000003u); // 800F33C8
  c->r[0]=c->r[3]+c->r[0]; // 800F33CC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F33D0
  c->r[0]=c->r[0]&c->r[6]; // 800F33D4
  c->r[0]=c->r[7]+c->r[0]; // 800F33D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F33DC
  return; // 800F33E0
}

// fn_800F33E4
void f_800F33E4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F33E4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F33E8
  c->r[6]=0u+0x7F7F0000u; // 800F33EC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F33F0
  c->r[8]=c->r[0]&c->r[7]; // 800F33F4
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F33F8
  c->r[0]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F33FC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F3400
  c->r[0]=c->r[8]+c->r[0]; // 800F3404
  c->r[0]=c->r[6]+c->r[0]; // 800F3408
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F340C
  c->r[6]=c->r[0]&c->r[7]; // 800F3410
  {uint32_t ea=c->r[3]+c->r[5]; c->r[0]=R32(ea); c->r[3]=ea;} // 800F3414
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3418
  c->r[5]=c->r[0]&c->r[7]; // 800F341C
  c->r[3]=R8(c->r[3]+0x00000004u); // 800F3420
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 800F3424
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F3428
  c->r[0]=c->r[5]+c->r[0]; // 800F342C
  c->r[0]=c->r[3]+c->r[0]; // 800F3430
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3434
  c->r[0]=c->r[0]&c->r[7]; // 800F3438
  c->r[0]=c->r[6]+c->r[0]; // 800F343C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3440
  return; // 800F3444
}

// fn_800F3448
void f_800F3448(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3448
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F344C
  c->r[6]=0u+0x7F7F0000u; // 800F3450
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3454
  c->r[7]=c->r[0]&c->r[6]; // 800F3458
  c->r[0]=R32(c->r[3]+c->r[5]); // 800F345C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3460
  c->r[0]=c->r[0]&c->r[6]; // 800F3464
  c->r[0]=c->r[7]+c->r[0]; // 800F3468
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F346C
  return; // 800F3470
}

// fn_800F3474
void f_800F3474(Ctx* __restrict c) {
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F3474
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3478
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F347C
  c->r[3]=0u+0x7F7F0000u; // 800F3480
  c->r[0]=c->r[3]+0x00007F7Fu; // 800F3484
  c->r[5]=c->r[5]&c->r[0]; // 800F3488
  c->r[0]=rotl(c->r[5],24)&0x00FFFFFFu; // 800F348C
  c->r[3]=rotl(c->r[6],23)&0xFF000000u; // 800F3490
  c->r[0]=c->r[5]+c->r[0]; // 800F3494
  c->r[0]=c->r[3]+c->r[0]; // 800F3498
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F349C
  return; // 800F34A0
}

// fn_800F34A4
void f_800F34A4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F34A4
  c->r[5]=rotl(c->r[0],24)&0xFF000000u; // 800F34A8
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F34AC
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F34B0
  c->r[0]=c->r[5]+c->r[0]; // 800F34B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F34B8
  return; // 800F34BC
}

// fn_800F34C0
void f_800F34C0(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F34C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F34C4
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F34C8
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F34CC
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F34D0
  c->r[3]=0u+0x7F7F0000u; // 800F34D4
  c->r[0]=c->r[3]+0x00007F7Fu; // 800F34D8
  c->r[0]=c->r[5]&c->r[0]; // 800F34DC
  c->r[6]=rotl(c->r[7],16)&0xFFFF0000u; // 800F34E0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F34E4
  c->r[5]=rotl(c->r[7],24)&0xFF000000u; // 800F34E8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F34EC
  c->r[3]=c->r[6]+c->r[3]; // 800F34F0
  c->r[0]=c->r[5]+c->r[0]; // 800F34F4
  c->r[0]=c->r[3]+c->r[0]; // 800F34F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F34FC
  return; // 800F3500
}

// fn_800F3504
void f_800F3504(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3504
  c->r[5]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3508
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F350C
  c->r[0]=c->r[5]+c->r[0]; // 800F3510
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3514
  return; // 800F3518
}

// fn_800F351C
void f_800F351C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F351C
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3520
  c->r[5]=0u+0x7F7F0000u; // 800F3524
  c->r[0]=c->r[5]+0x00007F7Fu; // 800F3528
  c->r[6]=c->r[6]&c->r[0]; // 800F352C
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F3530
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3534
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F3538
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F353C
  c->r[3]=rotl(c->r[7],24)&0x00FFFFFFu; // 800F3540
  c->r[0]=rotl(c->r[6],16)&0xFFFF0000u; // 800F3544
  c->r[3]=c->r[5]+c->r[3]; // 800F3548
  c->r[0]=c->r[0]+c->r[7]; // 800F354C
  c->r[0]=c->r[3]+c->r[0]; // 800F3550
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3554
  return; // 800F3558
}

// fn_800F355C
void f_800F355C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F355C
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3560
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F3564
  c->r[0]=c->r[5]+c->r[0]; // 800F3568
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F356C
  return; // 800F3570
}

// fn_800F3574
void f_800F3574(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3574
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3578
  c->r[5]=0u+0x7F7F0000u; // 800F357C
  c->r[0]=c->r[5]+0x00007F7Fu; // 800F3580
  c->r[5]=c->r[6]&c->r[0]; // 800F3584
  c->r[3]=R8(c->r[3]+0x00000004u); // 800F3588
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 800F358C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F3590
  c->r[0]=c->r[5]+c->r[0]; // 800F3594
  c->r[0]=c->r[3]+c->r[0]; // 800F3598
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F359C
  return; // 800F35A0
}

// fn_800F35A4
void f_800F35A4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F35A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F35A8
  return; // 800F35AC
}

// fn_800F35B0
void f_800F35B0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F35B0
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F35B4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F35B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F35BC
  c->r[6]=0u+0x7F7F0000u; // 800F35C0
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F35C4
  c->r[9]=c->r[0]&c->r[7]; // 800F35C8
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F35CC
  c->r[6]=rotl(c->r[10],23)&0xFF000000u; // 800F35D0
  c->r[0]=c->r[9]+c->r[0]; // 800F35D4
  c->r[0]=c->r[6]+c->r[0]; // 800F35D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F35DC
  c->r[10]=c->r[0]&c->r[7]; // 800F35E0
  c->r[6]=c->r[3]+c->r[5]; // 800F35E4
L_800F35E8:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800F35E8
  c->r[0]=R32(c->r[6]+0x00000001u); // 800F35EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F35F0
  c->r[9]=c->r[0]&c->r[7]; // 800F35F4
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F35F8
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 800F35FC
  c->r[0]=c->r[9]+c->r[0]; // 800F3600
  c->r[0]=c->r[3]+c->r[0]; // 800F3604
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3608
  c->r[3]=c->r[0]&c->r[7]; // 800F360C
  c->r[0]=c->r[10]+c->r[3]; // 800F3610
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3614
  c->r[10]=c->r[3]|c->r[3]; // 800F3618
  c->r[6]=c->r[6]+c->r[5]; // 800F361C
  c->r[4]=c->r[4]+c->r[5]; // 800F3620
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3624
  if (!crb(c,2)) { IRQCHK(c); goto L_800F35E8; } // 800F3628
  return; // 800F362C
}

// fn_800F3630
void f_800F3630(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F3630
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3634
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F3638
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F363C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3640
  c->r[0]=c->r[6]+c->r[0]; // 800F3644
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3648
  c->r[6]=0u+0x7F7F0000u; // 800F364C
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3650
  c->r[9]=c->r[0]&c->r[6]; // 800F3654
  c->r[7]=c->r[3]+c->r[5]; // 800F3658
L_800F365C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800F365C
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F3660
  c->r[0]=R32(c->r[7]+0x00000001u); // 800F3664
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3668
  c->r[0]=c->r[3]+c->r[0]; // 800F366C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3670
  c->r[3]=c->r[0]&c->r[6]; // 800F3674
  c->r[0]=c->r[9]+c->r[3]; // 800F3678
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F367C
  c->r[9]=c->r[3]|c->r[3]; // 800F3680
  c->r[7]=c->r[7]+c->r[5]; // 800F3684
  c->r[4]=c->r[4]+c->r[5]; // 800F3688
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F368C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F365C; } // 800F3690
  return; // 800F3694
}

// fn_800F3698
void f_800F3698(Ctx* __restrict c) {
  c->r[10]=0u+0x00000002u; // 800F3698
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F369C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F36A0
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F36A4
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F36A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F36AC
  c->r[6]=0u+0x7F7F0000u; // 800F36B0
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F36B4
  c->r[0]=c->r[0]&c->r[9]; // 800F36B8
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F36BC
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F36C0
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F36C4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F36C8
  c->r[6]=c->r[8]+c->r[6]; // 800F36CC
  c->r[0]=c->r[7]+c->r[0]; // 800F36D0
  c->r[0]=c->r[6]+c->r[0]; // 800F36D4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F36D8
  c->r[11]=c->r[0]&c->r[9]; // 800F36DC
  c->r[8]=c->r[3]+c->r[5]; // 800F36E0
L_800F36E4:;
  c->r[0]=R16(c->r[8]+0x00000000u); // 800F36E4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F36E8
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F36EC
  c->r[0]=R32(c->r[8]+0x00000002u); // 800F36F0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F36F4
  c->r[0]=c->r[0]&c->r[9]; // 800F36F8
  c->r[7]=rotl(c->r[6],16)&0xFFFF0000u; // 800F36FC
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3700
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800F3704
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3708
  c->r[3]=c->r[7]+c->r[3]; // 800F370C
  c->r[0]=c->r[6]+c->r[0]; // 800F3710
  c->r[0]=c->r[3]+c->r[0]; // 800F3714
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3718
  c->r[3]=c->r[0]&c->r[9]; // 800F371C
  c->r[0]=c->r[11]+c->r[3]; // 800F3720
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3724
  c->r[11]=c->r[3]|c->r[3]; // 800F3728
  c->r[8]=c->r[8]+c->r[5]; // 800F372C
  c->r[4]=c->r[4]+c->r[5]; // 800F3730
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F3734
  if (!crb(c,2)) { IRQCHK(c); goto L_800F36E4; } // 800F3738
  return; // 800F373C
}

// fn_800F3740
void f_800F3740(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F3740
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3744
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3748
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F374C
  c->r[0]=c->r[6]+c->r[0]; // 800F3750
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3754
  c->r[6]=0u+0x7F7F0000u; // 800F3758
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F375C
  c->r[9]=c->r[0]&c->r[6]; // 800F3760
  c->r[7]=c->r[3]+c->r[5]; // 800F3764
L_800F3768:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F3768
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F376C
  c->r[0]=R16(c->r[7]+0x00000002u); // 800F3770
  c->r[0]=c->r[3]+c->r[0]; // 800F3774
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3778
  c->r[3]=c->r[0]&c->r[6]; // 800F377C
  c->r[0]=c->r[9]+c->r[3]; // 800F3780
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3784
  c->r[9]=c->r[3]|c->r[3]; // 800F3788
  c->r[7]=c->r[7]+c->r[5]; // 800F378C
  c->r[4]=c->r[4]+c->r[5]; // 800F3790
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3794
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3768; } // 800F3798
  return; // 800F379C
}

// fn_800F37A0
void f_800F37A0(Ctx* __restrict c) {
  c->r[9]=0u+0x00000002u; // 800F37A0
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F37A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F37A8
  c->r[6]=0u+0x7F7F0000u; // 800F37AC
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F37B0
  c->r[10]=c->r[0]&c->r[8]; // 800F37B4
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F37B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F37BC
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F37C0
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F37C4
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F37C8
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F37CC
  c->r[6]=c->r[7]+c->r[6]; // 800F37D0
  c->r[0]=c->r[0]+c->r[11]; // 800F37D4
  c->r[0]=c->r[6]+c->r[0]; // 800F37D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F37DC
  c->r[11]=c->r[0]&c->r[8]; // 800F37E0
  c->r[7]=c->r[3]+c->r[5]; // 800F37E4
L_800F37E8:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F37E8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F37EC
  c->r[10]=c->r[0]&c->r[8]; // 800F37F0
  c->r[0]=R16(c->r[7]+0x00000003u); // 800F37F4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F37F8
  c->r[12]=c->r[0]&0x00007F7Fu; cr0(c,c->r[12]); // 800F37FC
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F3800
  c->r[3]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F3804
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F3808
  c->r[3]=c->r[6]+c->r[3]; // 800F380C
  c->r[0]=c->r[0]+c->r[12]; // 800F3810
  c->r[0]=c->r[3]+c->r[0]; // 800F3814
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3818
  c->r[3]=c->r[0]&c->r[8]; // 800F381C
  c->r[0]=c->r[11]+c->r[3]; // 800F3820
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3824
  c->r[11]=c->r[3]|c->r[3]; // 800F3828
  c->r[7]=c->r[7]+c->r[5]; // 800F382C
  c->r[4]=c->r[4]+c->r[5]; // 800F3830
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F3834
  if (!crb(c,2)) { IRQCHK(c); goto L_800F37E8; } // 800F3838
  return; // 800F383C
}

// fn_800F3840
void f_800F3840(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F3840
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3844
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3848
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F384C
  c->r[0]=c->r[6]+c->r[0]; // 800F3850
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3854
  c->r[6]=0u+0x7F7F0000u; // 800F3858
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F385C
  c->r[9]=c->r[0]&c->r[6]; // 800F3860
  c->r[7]=c->r[3]+c->r[5]; // 800F3864
L_800F3868:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F3868
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F386C
  c->r[0]=R8(c->r[7]+0x00000003u); // 800F3870
  c->r[0]=c->r[3]+c->r[0]; // 800F3874
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3878
  c->r[3]=c->r[0]&c->r[6]; // 800F387C
  c->r[0]=c->r[9]+c->r[3]; // 800F3880
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3884
  c->r[9]=c->r[3]|c->r[3]; // 800F3888
  c->r[7]=c->r[7]+c->r[5]; // 800F388C
  c->r[4]=c->r[4]+c->r[5]; // 800F3890
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3894
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3868; } // 800F3898
  return; // 800F389C
}

// fn_800F38A0
void f_800F38A0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F38A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F38A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F38A8
  c->r[6]=0u+0x7F7F0000u; // 800F38AC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F38B0
  c->r[9]=c->r[0]&c->r[7]; // 800F38B4
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F38B8
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F38BC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F38C0
  c->r[0]=c->r[9]+c->r[0]; // 800F38C4
  c->r[0]=c->r[6]+c->r[0]; // 800F38C8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F38CC
  c->r[10]=c->r[0]&c->r[7]; // 800F38D0
  c->r[6]=c->r[3]+c->r[5]; // 800F38D4
L_800F38D8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F38D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F38DC
  c->r[9]=c->r[0]&c->r[7]; // 800F38E0
  c->r[3]=R8(c->r[6]+0x00000004u); // 800F38E4
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F38E8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F38EC
  c->r[0]=c->r[9]+c->r[0]; // 800F38F0
  c->r[0]=c->r[3]+c->r[0]; // 800F38F4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F38F8
  c->r[3]=c->r[0]&c->r[7]; // 800F38FC
  c->r[0]=c->r[10]+c->r[3]; // 800F3900
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3904
  c->r[10]=c->r[3]|c->r[3]; // 800F3908
  c->r[6]=c->r[6]+c->r[5]; // 800F390C
  c->r[4]=c->r[4]+c->r[5]; // 800F3910
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3914
  if (!crb(c,2)) { IRQCHK(c); goto L_800F38D8; } // 800F3918
  return; // 800F391C
}

// fn_800F3920
void f_800F3920(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F3920
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3924
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3928
  c->r[6]=0u+0x7F7F0000u; // 800F392C
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3930
  c->r[9]=c->r[0]&c->r[6]; // 800F3934
  c->r[3]=c->r[3]+c->r[5]; // 800F3938
L_800F393C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F393C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3940
  c->r[8]=c->r[0]&c->r[6]; // 800F3944
  c->r[0]=c->r[9]+c->r[8]; // 800F3948
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F394C
  c->r[9]=c->r[8]|c->r[8]; // 800F3950
  c->r[3]=c->r[3]+c->r[5]; // 800F3954
  c->r[4]=c->r[4]+c->r[5]; // 800F3958
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F395C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F393C; } // 800F3960
  return; // 800F3964
}

// fn_800F3968
void f_800F3968(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F3968
  c->r[6]=0u+0x7F7F0000u; // 800F396C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F3970
L_800F3974:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F3974
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3978
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F397C
  c->r[9]=c->r[0]&c->r[7]; // 800F3980
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F3984
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F3988
  c->r[0]=c->r[9]+c->r[0]; // 800F398C
  c->r[0]=c->r[6]+c->r[0]; // 800F3990
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3994
  c->r[3]=c->r[3]+c->r[5]; // 800F3998
  c->r[4]=c->r[4]+c->r[5]; // 800F399C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F39A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3974; } // 800F39A4
  return; // 800F39A8
}

// fn_800F39AC
void f_800F39AC(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F39AC
L_800F39B0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F39B0
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F39B4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F39B8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F39BC
  c->r[0]=c->r[6]+c->r[0]; // 800F39C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F39C4
  c->r[3]=c->r[3]+c->r[5]; // 800F39C8
  c->r[4]=c->r[4]+c->r[5]; // 800F39CC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F39D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F39B0; } // 800F39D4
  return; // 800F39D8
}

// fn_800F39DC
void f_800F39DC(Ctx* __restrict c) {
  c->r[10]=0u+0x00000002u; // 800F39DC
  c->r[6]=0u+0x7F7F0000u; // 800F39E0
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F39E4
L_800F39E8:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F39E8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F39EC
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F39F0
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F39F4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F39F8
  c->r[0]=c->r[0]&c->r[9]; // 800F39FC
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F3A00
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3A04
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F3A08
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3A0C
  c->r[6]=c->r[8]+c->r[6]; // 800F3A10
  c->r[0]=c->r[7]+c->r[0]; // 800F3A14
  c->r[0]=c->r[6]+c->r[0]; // 800F3A18
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3A1C
  c->r[3]=c->r[3]+c->r[5]; // 800F3A20
  c->r[4]=c->r[4]+c->r[5]; // 800F3A24
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F3A28
  if (!crb(c,2)) { IRQCHK(c); goto L_800F39E8; } // 800F3A2C
  return; // 800F3A30
}

// fn_800F3A34
void f_800F3A34(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F3A34
L_800F3A38:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3A38
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3A3C
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F3A40
  c->r[0]=c->r[6]+c->r[0]; // 800F3A44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3A48
  c->r[3]=c->r[3]+c->r[5]; // 800F3A4C
  c->r[4]=c->r[4]+c->r[5]; // 800F3A50
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F3A54
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3A38; } // 800F3A58
  return; // 800F3A5C
}

// fn_800F3A60
void f_800F3A60(Ctx* __restrict c) {
  c->r[9]=0u+0x00000002u; // 800F3A60
  c->r[6]=0u+0x7F7F0000u; // 800F3A64
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F3A68
L_800F3A6C:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3A6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3A70
  c->r[10]=c->r[0]&c->r[8]; // 800F3A74
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F3A78
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3A7C
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F3A80
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F3A84
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F3A88
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F3A8C
  c->r[6]=c->r[7]+c->r[6]; // 800F3A90
  c->r[0]=c->r[0]+c->r[11]; // 800F3A94
  c->r[0]=c->r[6]+c->r[0]; // 800F3A98
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3A9C
  c->r[3]=c->r[3]+c->r[5]; // 800F3AA0
  c->r[4]=c->r[4]+c->r[5]; // 800F3AA4
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F3AA8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3A6C; } // 800F3AAC
  return; // 800F3AB0
}

// fn_800F3AB4
void f_800F3AB4(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F3AB4
L_800F3AB8:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3AB8
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3ABC
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F3AC0
  c->r[0]=c->r[6]+c->r[0]; // 800F3AC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3AC8
  c->r[3]=c->r[3]+c->r[5]; // 800F3ACC
  c->r[4]=c->r[4]+c->r[5]; // 800F3AD0
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F3AD4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3AB8; } // 800F3AD8
  return; // 800F3ADC
}

// fn_800F3AE0
void f_800F3AE0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F3AE0
  c->r[6]=0u+0x7F7F0000u; // 800F3AE4
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F3AE8
L_800F3AEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3AEC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3AF0
  c->r[9]=c->r[0]&c->r[7]; // 800F3AF4
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F3AF8
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F3AFC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F3B00
  c->r[0]=c->r[9]+c->r[0]; // 800F3B04
  c->r[0]=c->r[6]+c->r[0]; // 800F3B08
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3B0C
  c->r[3]=c->r[3]+c->r[5]; // 800F3B10
  c->r[4]=c->r[4]+c->r[5]; // 800F3B14
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3B18
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3AEC; } // 800F3B1C
  return; // 800F3B20
}

// fn_800F3B24
void f_800F3B24(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F3B24
L_800F3B28:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3B28
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3B2C
  c->r[3]=c->r[3]+c->r[5]; // 800F3B30
  c->r[4]=c->r[4]+c->r[5]; // 800F3B34
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F3B38
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3B28; } // 800F3B3C
  return; // 800F3B40
}

// fn_800F3B44
void f_800F3B44(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3B44
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F3B48
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3B4C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3B50
  c->r[6]=0u+0x7F7F0000u; // 800F3B54
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F3B58
  c->r[9]=c->r[0]&c->r[7]; // 800F3B5C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F3B60
  c->r[6]=rotl(c->r[10],23)&0xFF000000u; // 800F3B64
  c->r[0]=c->r[9]+c->r[0]; // 800F3B68
  c->r[0]=c->r[6]+c->r[0]; // 800F3B6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3B70
  c->r[10]=c->r[0]&c->r[7]; // 800F3B74
  c->r[6]=c->r[3]+c->r[5]; // 800F3B78
L_800F3B7C:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800F3B7C
  c->r[0]=R32(c->r[6]+0x00000001u); // 800F3B80
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3B84
  c->r[9]=c->r[0]&c->r[7]; // 800F3B88
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F3B8C
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 800F3B90
  c->r[0]=c->r[9]+c->r[0]; // 800F3B94
  c->r[0]=c->r[3]+c->r[0]; // 800F3B98
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3B9C
  c->r[3]=c->r[0]&c->r[7]; // 800F3BA0
  c->r[0]=c->r[10]+c->r[3]; // 800F3BA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3BA8
  c->r[10]=c->r[3]|c->r[3]; // 800F3BAC
  c->r[6]=c->r[6]+c->r[5]; // 800F3BB0
  c->r[4]=c->r[4]+c->r[5]; // 800F3BB4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3BB8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3B7C; } // 800F3BBC
  return; // 800F3BC0
}

// fn_800F3BC4
void f_800F3BC4(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3BC4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3BC8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F3BCC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3BD0
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3BD4
  c->r[0]=c->r[6]+c->r[0]; // 800F3BD8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3BDC
  c->r[6]=0u+0x7F7F0000u; // 800F3BE0
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3BE4
  c->r[9]=c->r[0]&c->r[6]; // 800F3BE8
  c->r[7]=c->r[3]+c->r[5]; // 800F3BEC
L_800F3BF0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800F3BF0
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F3BF4
  c->r[0]=R32(c->r[7]+0x00000001u); // 800F3BF8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3BFC
  c->r[0]=c->r[3]+c->r[0]; // 800F3C00
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C04
  c->r[3]=c->r[0]&c->r[6]; // 800F3C08
  c->r[0]=c->r[9]+c->r[3]; // 800F3C0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3C10
  c->r[9]=c->r[3]|c->r[3]; // 800F3C14
  c->r[7]=c->r[7]+c->r[5]; // 800F3C18
  c->r[4]=c->r[4]+c->r[5]; // 800F3C1C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3C20
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3BF0; } // 800F3C24
  return; // 800F3C28
}

// fn_800F3C2C
void f_800F3C2C(Ctx* __restrict c) {
  c->r[10]=0u+0x00000004u; // 800F3C2C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3C30
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C34
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F3C38
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F3C3C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C40
  c->r[6]=0u+0x7F7F0000u; // 800F3C44
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F3C48
  c->r[0]=c->r[0]&c->r[9]; // 800F3C4C
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F3C50
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3C54
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F3C58
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3C5C
  c->r[6]=c->r[8]+c->r[6]; // 800F3C60
  c->r[0]=c->r[7]+c->r[0]; // 800F3C64
  c->r[0]=c->r[6]+c->r[0]; // 800F3C68
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C6C
  c->r[11]=c->r[0]&c->r[9]; // 800F3C70
  c->r[8]=c->r[3]+c->r[5]; // 800F3C74
L_800F3C78:;
  c->r[0]=R16(c->r[8]+0x00000000u); // 800F3C78
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C7C
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F3C80
  c->r[0]=R32(c->r[8]+0x00000002u); // 800F3C84
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3C88
  c->r[0]=c->r[0]&c->r[9]; // 800F3C8C
  c->r[7]=rotl(c->r[6],16)&0xFFFF0000u; // 800F3C90
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3C94
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800F3C98
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3C9C
  c->r[3]=c->r[7]+c->r[3]; // 800F3CA0
  c->r[0]=c->r[6]+c->r[0]; // 800F3CA4
  c->r[0]=c->r[3]+c->r[0]; // 800F3CA8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3CAC
  c->r[3]=c->r[0]&c->r[9]; // 800F3CB0
  c->r[0]=c->r[11]+c->r[3]; // 800F3CB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3CB8
  c->r[11]=c->r[3]|c->r[3]; // 800F3CBC
  c->r[8]=c->r[8]+c->r[5]; // 800F3CC0
  c->r[4]=c->r[4]+c->r[5]; // 800F3CC4
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F3CC8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3C78; } // 800F3CCC
  return; // 800F3CD0
}

// fn_800F3CD4
void f_800F3CD4(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3CD4
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3CD8
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3CDC
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F3CE0
  c->r[0]=c->r[6]+c->r[0]; // 800F3CE4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3CE8
  c->r[6]=0u+0x7F7F0000u; // 800F3CEC
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3CF0
  c->r[9]=c->r[0]&c->r[6]; // 800F3CF4
  c->r[7]=c->r[3]+c->r[5]; // 800F3CF8
L_800F3CFC:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F3CFC
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3D00
  c->r[0]=R16(c->r[7]+0x00000002u); // 800F3D04
  c->r[0]=c->r[3]+c->r[0]; // 800F3D08
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D0C
  c->r[3]=c->r[0]&c->r[6]; // 800F3D10
  c->r[0]=c->r[9]+c->r[3]; // 800F3D14
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3D18
  c->r[9]=c->r[3]|c->r[3]; // 800F3D1C
  c->r[7]=c->r[7]+c->r[5]; // 800F3D20
  c->r[4]=c->r[4]+c->r[5]; // 800F3D24
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3D28
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3CFC; } // 800F3D2C
  return; // 800F3D30
}

// fn_800F3D34
void f_800F3D34(Ctx* __restrict c) {
  c->r[9]=0u+0x00000004u; // 800F3D34
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3D38
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D3C
  c->r[6]=0u+0x7F7F0000u; // 800F3D40
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F3D44
  c->r[10]=c->r[0]&c->r[8]; // 800F3D48
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F3D4C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D50
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F3D54
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F3D58
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F3D5C
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F3D60
  c->r[6]=c->r[7]+c->r[6]; // 800F3D64
  c->r[0]=c->r[0]+c->r[11]; // 800F3D68
  c->r[0]=c->r[6]+c->r[0]; // 800F3D6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D70
  c->r[11]=c->r[0]&c->r[8]; // 800F3D74
  c->r[7]=c->r[3]+c->r[5]; // 800F3D78
L_800F3D7C:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F3D7C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D80
  c->r[10]=c->r[0]&c->r[8]; // 800F3D84
  c->r[0]=R16(c->r[7]+0x00000003u); // 800F3D88
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3D8C
  c->r[12]=c->r[0]&0x00007F7Fu; cr0(c,c->r[12]); // 800F3D90
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F3D94
  c->r[3]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F3D98
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F3D9C
  c->r[3]=c->r[6]+c->r[3]; // 800F3DA0
  c->r[0]=c->r[0]+c->r[12]; // 800F3DA4
  c->r[0]=c->r[3]+c->r[0]; // 800F3DA8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3DAC
  c->r[3]=c->r[0]&c->r[8]; // 800F3DB0
  c->r[0]=c->r[11]+c->r[3]; // 800F3DB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3DB8
  c->r[11]=c->r[3]|c->r[3]; // 800F3DBC
  c->r[7]=c->r[7]+c->r[5]; // 800F3DC0
  c->r[4]=c->r[4]+c->r[5]; // 800F3DC4
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F3DC8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3D7C; } // 800F3DCC
  return; // 800F3DD0
}

// fn_800F3DD4
void f_800F3DD4(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3DD4
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F3DD8
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3DDC
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F3DE0
  c->r[0]=c->r[6]+c->r[0]; // 800F3DE4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3DE8
  c->r[6]=0u+0x7F7F0000u; // 800F3DEC
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3DF0
  c->r[9]=c->r[0]&c->r[6]; // 800F3DF4
  c->r[7]=c->r[3]+c->r[5]; // 800F3DF8
L_800F3DFC:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F3DFC
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F3E00
  c->r[0]=R8(c->r[7]+0x00000003u); // 800F3E04
  c->r[0]=c->r[3]+c->r[0]; // 800F3E08
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3E0C
  c->r[3]=c->r[0]&c->r[6]; // 800F3E10
  c->r[0]=c->r[9]+c->r[3]; // 800F3E14
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3E18
  c->r[9]=c->r[3]|c->r[3]; // 800F3E1C
  c->r[7]=c->r[7]+c->r[5]; // 800F3E20
  c->r[4]=c->r[4]+c->r[5]; // 800F3E24
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3E28
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3DFC; } // 800F3E2C
  return; // 800F3E30
}

// fn_800F3E34
void f_800F3E34(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3E34
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3E38
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3E3C
  c->r[6]=0u+0x7F7F0000u; // 800F3E40
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F3E44
  c->r[9]=c->r[0]&c->r[7]; // 800F3E48
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F3E4C
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F3E50
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F3E54
  c->r[0]=c->r[9]+c->r[0]; // 800F3E58
  c->r[0]=c->r[6]+c->r[0]; // 800F3E5C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3E60
  c->r[10]=c->r[0]&c->r[7]; // 800F3E64
  c->r[6]=c->r[3]+c->r[5]; // 800F3E68
L_800F3E6C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F3E6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3E70
  c->r[9]=c->r[0]&c->r[7]; // 800F3E74
  c->r[3]=R8(c->r[6]+0x00000004u); // 800F3E78
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F3E7C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F3E80
  c->r[0]=c->r[9]+c->r[0]; // 800F3E84
  c->r[0]=c->r[3]+c->r[0]; // 800F3E88
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3E8C
  c->r[3]=c->r[0]&c->r[7]; // 800F3E90
  c->r[0]=c->r[10]+c->r[3]; // 800F3E94
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3E98
  c->r[10]=c->r[3]|c->r[3]; // 800F3E9C
  c->r[6]=c->r[6]+c->r[5]; // 800F3EA0
  c->r[4]=c->r[4]+c->r[5]; // 800F3EA4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3EA8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3E6C; } // 800F3EAC
  return; // 800F3EB0
}

// fn_800F3EB4
void f_800F3EB4(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F3EB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3EB8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3EBC
  c->r[6]=0u+0x7F7F0000u; // 800F3EC0
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F3EC4
  c->r[9]=c->r[0]&c->r[6]; // 800F3EC8
  c->r[3]=c->r[3]+c->r[5]; // 800F3ECC
L_800F3ED0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3ED0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3ED4
  c->r[8]=c->r[0]&c->r[6]; // 800F3ED8
  c->r[0]=c->r[9]+c->r[8]; // 800F3EDC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3EE0
  c->r[9]=c->r[8]|c->r[8]; // 800F3EE4
  c->r[3]=c->r[3]+c->r[5]; // 800F3EE8
  c->r[4]=c->r[4]+c->r[5]; // 800F3EEC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F3EF0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3ED0; } // 800F3EF4
  return; // 800F3EF8
}

// fn_800F3EFC
void f_800F3EFC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F3EFC
  c->r[6]=0u+0x7F7F0000u; // 800F3F00
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F3F04
L_800F3F08:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F3F08
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3F0C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3F10
  c->r[9]=c->r[0]&c->r[7]; // 800F3F14
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F3F18
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F3F1C
  c->r[0]=c->r[9]+c->r[0]; // 800F3F20
  c->r[0]=c->r[6]+c->r[0]; // 800F3F24
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3F28
  c->r[3]=c->r[3]+c->r[5]; // 800F3F2C
  c->r[4]=c->r[4]+c->r[5]; // 800F3F30
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F3F34
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3F08; } // 800F3F38
  return; // 800F3F3C
}

// fn_800F3F40
void f_800F3F40(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F3F40
L_800F3F44:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3F44
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F3F48
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F3F4C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3F50
  c->r[0]=c->r[6]+c->r[0]; // 800F3F54
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3F58
  c->r[3]=c->r[3]+c->r[5]; // 800F3F5C
  c->r[4]=c->r[4]+c->r[5]; // 800F3F60
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F3F64
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3F44; } // 800F3F68
  return; // 800F3F6C
}

// fn_800F3F70
void f_800F3F70(Ctx* __restrict c) {
  c->r[10]=0u+0x00000004u; // 800F3F70
  c->r[6]=0u+0x7F7F0000u; // 800F3F74
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F3F78
L_800F3F7C:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3F7C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3F80
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F3F84
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F3F88
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F3F8C
  c->r[0]=c->r[0]&c->r[9]; // 800F3F90
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F3F94
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F3F98
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F3F9C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F3FA0
  c->r[6]=c->r[8]+c->r[6]; // 800F3FA4
  c->r[0]=c->r[7]+c->r[0]; // 800F3FA8
  c->r[0]=c->r[6]+c->r[0]; // 800F3FAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3FB0
  c->r[3]=c->r[3]+c->r[5]; // 800F3FB4
  c->r[4]=c->r[4]+c->r[5]; // 800F3FB8
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F3FBC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3F7C; } // 800F3FC0
  return; // 800F3FC4
}

// fn_800F3FC8
void f_800F3FC8(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F3FC8
L_800F3FCC:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F3FCC
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F3FD0
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F3FD4
  c->r[0]=c->r[6]+c->r[0]; // 800F3FD8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3FDC
  c->r[3]=c->r[3]+c->r[5]; // 800F3FE0
  c->r[4]=c->r[4]+c->r[5]; // 800F3FE4
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F3FE8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3FCC; } // 800F3FEC
  return; // 800F3FF0
}

// fn_800F3FF4
void f_800F3FF4(Ctx* __restrict c) {
  c->r[9]=0u+0x00000004u; // 800F3FF4
  c->r[6]=0u+0x7F7F0000u; // 800F3FF8
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F3FFC
L_800F4000:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4000
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4004
  c->r[10]=c->r[0]&c->r[8]; // 800F4008
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F400C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4010
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F4014
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F4018
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F401C
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F4020
  c->r[6]=c->r[7]+c->r[6]; // 800F4024
  c->r[0]=c->r[0]+c->r[11]; // 800F4028
  c->r[0]=c->r[6]+c->r[0]; // 800F402C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4030
  c->r[3]=c->r[3]+c->r[5]; // 800F4034
  c->r[4]=c->r[4]+c->r[5]; // 800F4038
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F403C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4000; } // 800F4040
  return; // 800F4044
}

// fn_800F4048
void f_800F4048(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F4048
L_800F404C:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F404C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4050
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F4054
  c->r[0]=c->r[6]+c->r[0]; // 800F4058
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F405C
  c->r[3]=c->r[3]+c->r[5]; // 800F4060
  c->r[4]=c->r[4]+c->r[5]; // 800F4064
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4068
  if (!crb(c,2)) { IRQCHK(c); goto L_800F404C; } // 800F406C
  return; // 800F4070
}

// fn_800F4074
void f_800F4074(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F4074
  c->r[6]=0u+0x7F7F0000u; // 800F4078
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F407C
L_800F4080:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4080
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4084
  c->r[9]=c->r[0]&c->r[7]; // 800F4088
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F408C
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F4090
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4094
  c->r[0]=c->r[9]+c->r[0]; // 800F4098
  c->r[0]=c->r[6]+c->r[0]; // 800F409C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F40A0
  c->r[3]=c->r[3]+c->r[5]; // 800F40A4
  c->r[4]=c->r[4]+c->r[5]; // 800F40A8
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F40AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4080; } // 800F40B0
  return; // 800F40B4
}

// fn_800F40B8
void f_800F40B8(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F40B8
L_800F40BC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F40BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F40C0
  c->r[3]=c->r[3]+c->r[5]; // 800F40C4
  c->r[4]=c->r[4]+c->r[5]; // 800F40C8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F40CC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F40BC; } // 800F40D0
  return; // 800F40D4
}

// fn_800F40D8
void f_800F40D8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F40D8
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F40DC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F40E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F40E4
  c->r[6]=0u+0x7F7F0000u; // 800F40E8
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F40EC
  c->r[9]=c->r[0]&c->r[7]; // 800F40F0
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F40F4
  c->r[6]=rotl(c->r[10],23)&0xFF000000u; // 800F40F8
  c->r[0]=c->r[9]+c->r[0]; // 800F40FC
  c->r[0]=c->r[6]+c->r[0]; // 800F4100
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4104
  c->r[10]=c->r[0]&c->r[7]; // 800F4108
  c->r[6]=c->r[3]+c->r[5]; // 800F410C
L_800F4110:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800F4110
  c->r[0]=R32(c->r[6]+0x00000001u); // 800F4114
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4118
  c->r[9]=c->r[0]&c->r[7]; // 800F411C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F4120
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 800F4124
  c->r[0]=c->r[9]+c->r[0]; // 800F4128
  c->r[0]=c->r[3]+c->r[0]; // 800F412C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4130
  c->r[3]=c->r[0]&c->r[7]; // 800F4134
  c->r[0]=c->r[10]+c->r[3]; // 800F4138
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F413C
  c->r[10]=c->r[3]|c->r[3]; // 800F4140
  c->r[6]=c->r[6]+c->r[5]; // 800F4144
  c->r[4]=c->r[4]+c->r[5]; // 800F4148
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F414C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4110; } // 800F4150
  return; // 800F4154
}

// fn_800F4158
void f_800F4158(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F4158
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F415C
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F4160
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F4164
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4168
  c->r[0]=c->r[6]+c->r[0]; // 800F416C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4170
  c->r[6]=0u+0x7F7F0000u; // 800F4174
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4178
  c->r[9]=c->r[0]&c->r[6]; // 800F417C
  c->r[7]=c->r[3]+c->r[5]; // 800F4180
L_800F4184:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800F4184
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F4188
  c->r[0]=R32(c->r[7]+0x00000001u); // 800F418C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4190
  c->r[0]=c->r[3]+c->r[0]; // 800F4194
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4198
  c->r[3]=c->r[0]&c->r[6]; // 800F419C
  c->r[0]=c->r[9]+c->r[3]; // 800F41A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F41A4
  c->r[9]=c->r[3]|c->r[3]; // 800F41A8
  c->r[7]=c->r[7]+c->r[5]; // 800F41AC
  c->r[4]=c->r[4]+c->r[5]; // 800F41B0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F41B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4184; } // 800F41B8
  return; // 800F41BC
}

// fn_800F41C0
void f_800F41C0(Ctx* __restrict c) {
  c->r[10]=0u+0x00000008u; // 800F41C0
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F41C4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F41C8
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F41CC
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F41D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F41D4
  c->r[6]=0u+0x7F7F0000u; // 800F41D8
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F41DC
  c->r[0]=c->r[0]&c->r[9]; // 800F41E0
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F41E4
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F41E8
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F41EC
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F41F0
  c->r[6]=c->r[8]+c->r[6]; // 800F41F4
  c->r[0]=c->r[7]+c->r[0]; // 800F41F8
  c->r[0]=c->r[6]+c->r[0]; // 800F41FC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4200
  c->r[11]=c->r[0]&c->r[9]; // 800F4204
  c->r[8]=c->r[3]+c->r[5]; // 800F4208
L_800F420C:;
  c->r[0]=R16(c->r[8]+0x00000000u); // 800F420C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4210
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F4214
  c->r[0]=R32(c->r[8]+0x00000002u); // 800F4218
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F421C
  c->r[0]=c->r[0]&c->r[9]; // 800F4220
  c->r[7]=rotl(c->r[6],16)&0xFFFF0000u; // 800F4224
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F4228
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800F422C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4230
  c->r[3]=c->r[7]+c->r[3]; // 800F4234
  c->r[0]=c->r[6]+c->r[0]; // 800F4238
  c->r[0]=c->r[3]+c->r[0]; // 800F423C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4240
  c->r[3]=c->r[0]&c->r[9]; // 800F4244
  c->r[0]=c->r[11]+c->r[3]; // 800F4248
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F424C
  c->r[11]=c->r[3]|c->r[3]; // 800F4250
  c->r[8]=c->r[8]+c->r[5]; // 800F4254
  c->r[4]=c->r[4]+c->r[5]; // 800F4258
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F425C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F420C; } // 800F4260
  return; // 800F4264
}

// fn_800F4268
void f_800F4268(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F4268
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F426C
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4270
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F4274
  c->r[0]=c->r[6]+c->r[0]; // 800F4278
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F427C
  c->r[6]=0u+0x7F7F0000u; // 800F4280
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4284
  c->r[9]=c->r[0]&c->r[6]; // 800F4288
  c->r[7]=c->r[3]+c->r[5]; // 800F428C
L_800F4290:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F4290
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4294
  c->r[0]=R16(c->r[7]+0x00000002u); // 800F4298
  c->r[0]=c->r[3]+c->r[0]; // 800F429C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F42A0
  c->r[3]=c->r[0]&c->r[6]; // 800F42A4
  c->r[0]=c->r[9]+c->r[3]; // 800F42A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F42AC
  c->r[9]=c->r[3]|c->r[3]; // 800F42B0
  c->r[7]=c->r[7]+c->r[5]; // 800F42B4
  c->r[4]=c->r[4]+c->r[5]; // 800F42B8
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F42BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4290; } // 800F42C0
  return; // 800F42C4
}

// fn_800F42C8
void f_800F42C8(Ctx* __restrict c) {
  c->r[9]=0u+0x00000008u; // 800F42C8
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F42CC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F42D0
  c->r[6]=0u+0x7F7F0000u; // 800F42D4
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F42D8
  c->r[10]=c->r[0]&c->r[8]; // 800F42DC
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F42E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F42E4
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F42E8
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F42EC
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F42F0
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F42F4
  c->r[6]=c->r[7]+c->r[6]; // 800F42F8
  c->r[0]=c->r[0]+c->r[11]; // 800F42FC
  c->r[0]=c->r[6]+c->r[0]; // 800F4300
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4304
  c->r[11]=c->r[0]&c->r[8]; // 800F4308
  c->r[7]=c->r[3]+c->r[5]; // 800F430C
L_800F4310:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F4310
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4314
  c->r[10]=c->r[0]&c->r[8]; // 800F4318
  c->r[0]=R16(c->r[7]+0x00000003u); // 800F431C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4320
  c->r[12]=c->r[0]&0x00007F7Fu; cr0(c,c->r[12]); // 800F4324
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F4328
  c->r[3]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F432C
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F4330
  c->r[3]=c->r[6]+c->r[3]; // 800F4334
  c->r[0]=c->r[0]+c->r[12]; // 800F4338
  c->r[0]=c->r[3]+c->r[0]; // 800F433C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4340
  c->r[3]=c->r[0]&c->r[8]; // 800F4344
  c->r[0]=c->r[11]+c->r[3]; // 800F4348
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F434C
  c->r[11]=c->r[3]|c->r[3]; // 800F4350
  c->r[7]=c->r[7]+c->r[5]; // 800F4354
  c->r[4]=c->r[4]+c->r[5]; // 800F4358
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F435C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4310; } // 800F4360
  return; // 800F4364
}

// fn_800F4368
void f_800F4368(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F4368
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F436C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4370
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F4374
  c->r[0]=c->r[6]+c->r[0]; // 800F4378
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F437C
  c->r[6]=0u+0x7F7F0000u; // 800F4380
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4384
  c->r[9]=c->r[0]&c->r[6]; // 800F4388
  c->r[7]=c->r[3]+c->r[5]; // 800F438C
L_800F4390:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F4390
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4394
  c->r[0]=R8(c->r[7]+0x00000003u); // 800F4398
  c->r[0]=c->r[3]+c->r[0]; // 800F439C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F43A0
  c->r[3]=c->r[0]&c->r[6]; // 800F43A4
  c->r[0]=c->r[9]+c->r[3]; // 800F43A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F43AC
  c->r[9]=c->r[3]|c->r[3]; // 800F43B0
  c->r[7]=c->r[7]+c->r[5]; // 800F43B4
  c->r[4]=c->r[4]+c->r[5]; // 800F43B8
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F43BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4390; } // 800F43C0
  return; // 800F43C4
}

// fn_800F43C8
void f_800F43C8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F43C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F43CC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F43D0
  c->r[6]=0u+0x7F7F0000u; // 800F43D4
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F43D8
  c->r[9]=c->r[0]&c->r[7]; // 800F43DC
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F43E0
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F43E4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F43E8
  c->r[0]=c->r[9]+c->r[0]; // 800F43EC
  c->r[0]=c->r[6]+c->r[0]; // 800F43F0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F43F4
  c->r[10]=c->r[0]&c->r[7]; // 800F43F8
  c->r[6]=c->r[3]+c->r[5]; // 800F43FC
L_800F4400:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F4400
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4404
  c->r[9]=c->r[0]&c->r[7]; // 800F4408
  c->r[3]=R8(c->r[6]+0x00000004u); // 800F440C
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F4410
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4414
  c->r[0]=c->r[9]+c->r[0]; // 800F4418
  c->r[0]=c->r[3]+c->r[0]; // 800F441C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4420
  c->r[3]=c->r[0]&c->r[7]; // 800F4424
  c->r[0]=c->r[10]+c->r[3]; // 800F4428
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F442C
  c->r[10]=c->r[3]|c->r[3]; // 800F4430
  c->r[6]=c->r[6]+c->r[5]; // 800F4434
  c->r[4]=c->r[4]+c->r[5]; // 800F4438
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F443C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4400; } // 800F4440
  return; // 800F4444
}

// fn_800F4448
void f_800F4448(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F4448
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F444C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4450
  c->r[6]=0u+0x7F7F0000u; // 800F4454
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4458
  c->r[9]=c->r[0]&c->r[6]; // 800F445C
  c->r[3]=c->r[3]+c->r[5]; // 800F4460
L_800F4464:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4464
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4468
  c->r[8]=c->r[0]&c->r[6]; // 800F446C
  c->r[0]=c->r[9]+c->r[8]; // 800F4470
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4474
  c->r[9]=c->r[8]|c->r[8]; // 800F4478
  c->r[3]=c->r[3]+c->r[5]; // 800F447C
  c->r[4]=c->r[4]+c->r[5]; // 800F4480
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4484
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4464; } // 800F4488
  return; // 800F448C
}

// fn_800F4490
void f_800F4490(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F4490
  c->r[6]=0u+0x7F7F0000u; // 800F4494
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4498
L_800F449C:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F449C
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F44A0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F44A4
  c->r[9]=c->r[0]&c->r[7]; // 800F44A8
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F44AC
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F44B0
  c->r[0]=c->r[9]+c->r[0]; // 800F44B4
  c->r[0]=c->r[6]+c->r[0]; // 800F44B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F44BC
  c->r[3]=c->r[3]+c->r[5]; // 800F44C0
  c->r[4]=c->r[4]+c->r[5]; // 800F44C4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F44C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F449C; } // 800F44CC
  return; // 800F44D0
}

// fn_800F44D4
void f_800F44D4(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F44D4
L_800F44D8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F44D8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F44DC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F44E0
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F44E4
  c->r[0]=c->r[6]+c->r[0]; // 800F44E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F44EC
  c->r[3]=c->r[3]+c->r[5]; // 800F44F0
  c->r[4]=c->r[4]+c->r[5]; // 800F44F4
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F44F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F44D8; } // 800F44FC
  return; // 800F4500
}

// fn_800F4504
void f_800F4504(Ctx* __restrict c) {
  c->r[10]=0u+0x00000008u; // 800F4504
  c->r[6]=0u+0x7F7F0000u; // 800F4508
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F450C
L_800F4510:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4510
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4514
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F4518
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F451C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4520
  c->r[0]=c->r[0]&c->r[9]; // 800F4524
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F4528
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F452C
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F4530
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4534
  c->r[6]=c->r[8]+c->r[6]; // 800F4538
  c->r[0]=c->r[7]+c->r[0]; // 800F453C
  c->r[0]=c->r[6]+c->r[0]; // 800F4540
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4544
  c->r[3]=c->r[3]+c->r[5]; // 800F4548
  c->r[4]=c->r[4]+c->r[5]; // 800F454C
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F4550
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4510; } // 800F4554
  return; // 800F4558
}

// fn_800F455C
void f_800F455C(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F455C
L_800F4560:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4560
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4564
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F4568
  c->r[0]=c->r[6]+c->r[0]; // 800F456C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4570
  c->r[3]=c->r[3]+c->r[5]; // 800F4574
  c->r[4]=c->r[4]+c->r[5]; // 800F4578
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F457C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4560; } // 800F4580
  return; // 800F4584
}

// fn_800F4588
void f_800F4588(Ctx* __restrict c) {
  c->r[9]=0u+0x00000008u; // 800F4588
  c->r[6]=0u+0x7F7F0000u; // 800F458C
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F4590
L_800F4594:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4594
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4598
  c->r[10]=c->r[0]&c->r[8]; // 800F459C
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F45A0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F45A4
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F45A8
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F45AC
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F45B0
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F45B4
  c->r[6]=c->r[7]+c->r[6]; // 800F45B8
  c->r[0]=c->r[0]+c->r[11]; // 800F45BC
  c->r[0]=c->r[6]+c->r[0]; // 800F45C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F45C4
  c->r[3]=c->r[3]+c->r[5]; // 800F45C8
  c->r[4]=c->r[4]+c->r[5]; // 800F45CC
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F45D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4594; } // 800F45D4
  return; // 800F45D8
}

// fn_800F45DC
void f_800F45DC(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F45DC
L_800F45E0:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F45E0
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F45E4
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F45E8
  c->r[0]=c->r[6]+c->r[0]; // 800F45EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F45F0
  c->r[3]=c->r[3]+c->r[5]; // 800F45F4
  c->r[4]=c->r[4]+c->r[5]; // 800F45F8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F45FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F45E0; } // 800F4600
  return; // 800F4604
}

// fn_800F4608
void f_800F4608(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F4608
  c->r[6]=0u+0x7F7F0000u; // 800F460C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4610
L_800F4614:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4614
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4618
  c->r[9]=c->r[0]&c->r[7]; // 800F461C
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F4620
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F4624
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4628
  c->r[0]=c->r[9]+c->r[0]; // 800F462C
  c->r[0]=c->r[6]+c->r[0]; // 800F4630
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4634
  c->r[3]=c->r[3]+c->r[5]; // 800F4638
  c->r[4]=c->r[4]+c->r[5]; // 800F463C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4640
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4614; } // 800F4644
  return; // 800F4648
}

// fn_800F464C
void f_800F464C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F464C
L_800F4650:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4650
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4654
  c->r[3]=c->r[3]+c->r[5]; // 800F4658
  c->r[4]=c->r[4]+c->r[5]; // 800F465C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F4660
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4650; } // 800F4664
  return; // 800F4668
}

// fn_800F466C
void f_800F466C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F466C
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F4670
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F4674
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4678
  c->r[6]=0u+0x7F7F0000u; // 800F467C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4680
  c->r[9]=c->r[0]&c->r[7]; // 800F4684
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F4688
  c->r[6]=rotl(c->r[10],23)&0xFF000000u; // 800F468C
  c->r[0]=c->r[9]+c->r[0]; // 800F4690
  c->r[0]=c->r[6]+c->r[0]; // 800F4694
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4698
  c->r[10]=c->r[0]&c->r[7]; // 800F469C
  c->r[6]=c->r[3]+c->r[5]; // 800F46A0
L_800F46A4:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800F46A4
  c->r[0]=R32(c->r[6]+0x00000001u); // 800F46A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F46AC
  c->r[9]=c->r[0]&c->r[7]; // 800F46B0
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F46B4
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 800F46B8
  c->r[0]=c->r[9]+c->r[0]; // 800F46BC
  c->r[0]=c->r[3]+c->r[0]; // 800F46C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F46C4
  c->r[3]=c->r[0]&c->r[7]; // 800F46C8
  c->r[0]=c->r[10]+c->r[3]; // 800F46CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F46D0
  c->r[10]=c->r[3]|c->r[3]; // 800F46D4
  c->r[6]=c->r[6]+c->r[5]; // 800F46D8
  c->r[4]=c->r[4]+c->r[5]; // 800F46DC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F46E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F46A4; } // 800F46E4
  return; // 800F46E8
}

// fn_800F46EC
void f_800F46EC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F46EC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F46F0
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F46F4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F46F8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F46FC
  c->r[0]=c->r[6]+c->r[0]; // 800F4700
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4704
  c->r[6]=0u+0x7F7F0000u; // 800F4708
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F470C
  c->r[9]=c->r[0]&c->r[6]; // 800F4710
  c->r[7]=c->r[3]+c->r[5]; // 800F4714
L_800F4718:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800F4718
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F471C
  c->r[0]=R32(c->r[7]+0x00000001u); // 800F4720
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4724
  c->r[0]=c->r[3]+c->r[0]; // 800F4728
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F472C
  c->r[3]=c->r[0]&c->r[6]; // 800F4730
  c->r[0]=c->r[9]+c->r[3]; // 800F4734
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4738
  c->r[9]=c->r[3]|c->r[3]; // 800F473C
  c->r[7]=c->r[7]+c->r[5]; // 800F4740
  c->r[4]=c->r[4]+c->r[5]; // 800F4744
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4748
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4718; } // 800F474C
  return; // 800F4750
}

// fn_800F4754
void f_800F4754(Ctx* __restrict c) {
  c->r[10]=0u+0x00000010u; // 800F4754
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4758
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F475C
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F4760
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F4764
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4768
  c->r[6]=0u+0x7F7F0000u; // 800F476C
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F4770
  c->r[0]=c->r[0]&c->r[9]; // 800F4774
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F4778
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F477C
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F4780
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4784
  c->r[6]=c->r[8]+c->r[6]; // 800F4788
  c->r[0]=c->r[7]+c->r[0]; // 800F478C
  c->r[0]=c->r[6]+c->r[0]; // 800F4790
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4794
  c->r[11]=c->r[0]&c->r[9]; // 800F4798
  c->r[8]=c->r[3]+c->r[5]; // 800F479C
L_800F47A0:;
  c->r[0]=R16(c->r[8]+0x00000000u); // 800F47A0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F47A4
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F47A8
  c->r[0]=R32(c->r[8]+0x00000002u); // 800F47AC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F47B0
  c->r[0]=c->r[0]&c->r[9]; // 800F47B4
  c->r[7]=rotl(c->r[6],16)&0xFFFF0000u; // 800F47B8
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F47BC
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800F47C0
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F47C4
  c->r[3]=c->r[7]+c->r[3]; // 800F47C8
  c->r[0]=c->r[6]+c->r[0]; // 800F47CC
  c->r[0]=c->r[3]+c->r[0]; // 800F47D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F47D4
  c->r[3]=c->r[0]&c->r[9]; // 800F47D8
  c->r[0]=c->r[11]+c->r[3]; // 800F47DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F47E0
  c->r[11]=c->r[3]|c->r[3]; // 800F47E4
  c->r[8]=c->r[8]+c->r[5]; // 800F47E8
  c->r[4]=c->r[4]+c->r[5]; // 800F47EC
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F47F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F47A0; } // 800F47F4
  return; // 800F47F8
}

// fn_800F47FC
void f_800F47FC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F47FC
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4800
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4804
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F4808
  c->r[0]=c->r[6]+c->r[0]; // 800F480C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4810
  c->r[6]=0u+0x7F7F0000u; // 800F4814
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4818
  c->r[9]=c->r[0]&c->r[6]; // 800F481C
  c->r[7]=c->r[3]+c->r[5]; // 800F4820
L_800F4824:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 800F4824
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4828
  c->r[0]=R16(c->r[7]+0x00000002u); // 800F482C
  c->r[0]=c->r[3]+c->r[0]; // 800F4830
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4834
  c->r[3]=c->r[0]&c->r[6]; // 800F4838
  c->r[0]=c->r[9]+c->r[3]; // 800F483C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4840
  c->r[9]=c->r[3]|c->r[3]; // 800F4844
  c->r[7]=c->r[7]+c->r[5]; // 800F4848
  c->r[4]=c->r[4]+c->r[5]; // 800F484C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4850
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4824; } // 800F4854
  return; // 800F4858
}

// fn_800F485C
void f_800F485C(Ctx* __restrict c) {
  c->r[9]=0u+0x00000010u; // 800F485C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4860
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4864
  c->r[6]=0u+0x7F7F0000u; // 800F4868
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F486C
  c->r[10]=c->r[0]&c->r[8]; // 800F4870
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F4874
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4878
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F487C
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F4880
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F4884
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F4888
  c->r[6]=c->r[7]+c->r[6]; // 800F488C
  c->r[0]=c->r[0]+c->r[11]; // 800F4890
  c->r[0]=c->r[6]+c->r[0]; // 800F4894
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4898
  c->r[11]=c->r[0]&c->r[8]; // 800F489C
  c->r[7]=c->r[3]+c->r[5]; // 800F48A0
L_800F48A4:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F48A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F48A8
  c->r[10]=c->r[0]&c->r[8]; // 800F48AC
  c->r[0]=R16(c->r[7]+0x00000003u); // 800F48B0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F48B4
  c->r[12]=c->r[0]&0x00007F7Fu; cr0(c,c->r[12]); // 800F48B8
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F48BC
  c->r[3]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F48C0
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F48C4
  c->r[3]=c->r[6]+c->r[3]; // 800F48C8
  c->r[0]=c->r[0]+c->r[12]; // 800F48CC
  c->r[0]=c->r[3]+c->r[0]; // 800F48D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F48D4
  c->r[3]=c->r[0]&c->r[8]; // 800F48D8
  c->r[0]=c->r[11]+c->r[3]; // 800F48DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F48E0
  c->r[11]=c->r[3]|c->r[3]; // 800F48E4
  c->r[7]=c->r[7]+c->r[5]; // 800F48E8
  c->r[4]=c->r[4]+c->r[5]; // 800F48EC
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F48F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F48A4; } // 800F48F4
  return; // 800F48F8
}

// fn_800F48FC
void f_800F48FC(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F48FC
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4900
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4904
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F4908
  c->r[0]=c->r[6]+c->r[0]; // 800F490C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4910
  c->r[6]=0u+0x7F7F0000u; // 800F4914
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F4918
  c->r[9]=c->r[0]&c->r[6]; // 800F491C
  c->r[7]=c->r[3]+c->r[5]; // 800F4920
L_800F4924:;
  c->r[0]=R32(c->r[7]+0xFFFFFFFFu); // 800F4924
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4928
  c->r[0]=R8(c->r[7]+0x00000003u); // 800F492C
  c->r[0]=c->r[3]+c->r[0]; // 800F4930
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4934
  c->r[3]=c->r[0]&c->r[6]; // 800F4938
  c->r[0]=c->r[9]+c->r[3]; // 800F493C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4940
  c->r[9]=c->r[3]|c->r[3]; // 800F4944
  c->r[7]=c->r[7]+c->r[5]; // 800F4948
  c->r[4]=c->r[4]+c->r[5]; // 800F494C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4950
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4924; } // 800F4954
  return; // 800F4958
}

// fn_800F495C
void f_800F495C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F495C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4960
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4964
  c->r[6]=0u+0x7F7F0000u; // 800F4968
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F496C
  c->r[9]=c->r[0]&c->r[7]; // 800F4970
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F4974
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F4978
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F497C
  c->r[0]=c->r[9]+c->r[0]; // 800F4980
  c->r[0]=c->r[6]+c->r[0]; // 800F4984
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4988
  c->r[10]=c->r[0]&c->r[7]; // 800F498C
  c->r[6]=c->r[3]+c->r[5]; // 800F4990
L_800F4994:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F4994
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4998
  c->r[9]=c->r[0]&c->r[7]; // 800F499C
  c->r[3]=R8(c->r[6]+0x00000004u); // 800F49A0
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F49A4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F49A8
  c->r[0]=c->r[9]+c->r[0]; // 800F49AC
  c->r[0]=c->r[3]+c->r[0]; // 800F49B0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F49B4
  c->r[3]=c->r[0]&c->r[7]; // 800F49B8
  c->r[0]=c->r[10]+c->r[3]; // 800F49BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F49C0
  c->r[10]=c->r[3]|c->r[3]; // 800F49C4
  c->r[6]=c->r[6]+c->r[5]; // 800F49C8
  c->r[4]=c->r[4]+c->r[5]; // 800F49CC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F49D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4994; } // 800F49D4
  return; // 800F49D8
}

// fn_800F49DC
void f_800F49DC(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F49DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F49E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F49E4
  c->r[6]=0u+0x7F7F0000u; // 800F49E8
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F49EC
  c->r[9]=c->r[0]&c->r[6]; // 800F49F0
  c->r[3]=c->r[3]+c->r[5]; // 800F49F4
L_800F49F8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F49F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F49FC
  c->r[8]=c->r[0]&c->r[6]; // 800F4A00
  c->r[0]=c->r[9]+c->r[8]; // 800F4A04
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4A08
  c->r[9]=c->r[8]|c->r[8]; // 800F4A0C
  c->r[3]=c->r[3]+c->r[5]; // 800F4A10
  c->r[4]=c->r[4]+c->r[5]; // 800F4A14
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4A18
  if (!crb(c,2)) { IRQCHK(c); goto L_800F49F8; } // 800F4A1C
  return; // 800F4A20
}

// fn_800F4A24
void f_800F4A24(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F4A24
  c->r[6]=0u+0x7F7F0000u; // 800F4A28
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4A2C
L_800F4A30:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F4A30
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F4A34
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4A38
  c->r[9]=c->r[0]&c->r[7]; // 800F4A3C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F4A40
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F4A44
  c->r[0]=c->r[9]+c->r[0]; // 800F4A48
  c->r[0]=c->r[6]+c->r[0]; // 800F4A4C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4A50
  c->r[3]=c->r[3]+c->r[5]; // 800F4A54
  c->r[4]=c->r[4]+c->r[5]; // 800F4A58
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4A5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4A30; } // 800F4A60
  return; // 800F4A64
}

// fn_800F4A68
void f_800F4A68(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F4A68
L_800F4A6C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F4A6C
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F4A70
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F4A74
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4A78
  c->r[0]=c->r[6]+c->r[0]; // 800F4A7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4A80
  c->r[3]=c->r[3]+c->r[5]; // 800F4A84
  c->r[4]=c->r[4]+c->r[5]; // 800F4A88
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4A8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4A6C; } // 800F4A90
  return; // 800F4A94
}

// fn_800F4A98
void f_800F4A98(Ctx* __restrict c) {
  c->r[10]=0u+0x00000010u; // 800F4A98
  c->r[6]=0u+0x7F7F0000u; // 800F4A9C
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F4AA0
L_800F4AA4:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4AA4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4AA8
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F4AAC
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F4AB0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4AB4
  c->r[0]=c->r[0]&c->r[9]; // 800F4AB8
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F4ABC
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F4AC0
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F4AC4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4AC8
  c->r[6]=c->r[8]+c->r[6]; // 800F4ACC
  c->r[0]=c->r[7]+c->r[0]; // 800F4AD0
  c->r[0]=c->r[6]+c->r[0]; // 800F4AD4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4AD8
  c->r[3]=c->r[3]+c->r[5]; // 800F4ADC
  c->r[4]=c->r[4]+c->r[5]; // 800F4AE0
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F4AE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4AA4; } // 800F4AE8
  return; // 800F4AEC
}

// fn_800F4AF0
void f_800F4AF0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F4AF0
L_800F4AF4:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4AF4
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4AF8
  c->r[0]=R16(c->r[3]+0x00000002u); // 800F4AFC
  c->r[0]=c->r[6]+c->r[0]; // 800F4B00
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4B04
  c->r[3]=c->r[3]+c->r[5]; // 800F4B08
  c->r[4]=c->r[4]+c->r[5]; // 800F4B0C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4B10
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4AF4; } // 800F4B14
  return; // 800F4B18
}

// fn_800F4B1C
void f_800F4B1C(Ctx* __restrict c) {
  c->r[9]=0u+0x00000010u; // 800F4B1C
  c->r[6]=0u+0x7F7F0000u; // 800F4B20
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F4B24
L_800F4B28:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4B28
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4B2C
  c->r[10]=c->r[0]&c->r[8]; // 800F4B30
  c->r[0]=R16(c->r[3]+0x00000003u); // 800F4B34
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4B38
  c->r[11]=c->r[0]&0x00007F7Fu; cr0(c,c->r[11]); // 800F4B3C
  c->r[7]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F4B40
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F4B44
  c->r[0]=rotl(c->r[10],16)&0xFFFF0000u; // 800F4B48
  c->r[6]=c->r[7]+c->r[6]; // 800F4B4C
  c->r[0]=c->r[0]+c->r[11]; // 800F4B50
  c->r[0]=c->r[6]+c->r[0]; // 800F4B54
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4B58
  c->r[3]=c->r[3]+c->r[5]; // 800F4B5C
  c->r[4]=c->r[4]+c->r[5]; // 800F4B60
  c->r[9]=addc(c,c->r[9],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800F4B64
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4B28; } // 800F4B68
  return; // 800F4B6C
}

// fn_800F4B70
void f_800F4B70(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F4B70
L_800F4B74:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4B74
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4B78
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F4B7C
  c->r[0]=c->r[6]+c->r[0]; // 800F4B80
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4B84
  c->r[3]=c->r[3]+c->r[5]; // 800F4B88
  c->r[4]=c->r[4]+c->r[5]; // 800F4B8C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F4B90
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4B74; } // 800F4B94
  return; // 800F4B98
}

// fn_800F4B9C
void f_800F4B9C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F4B9C
  c->r[6]=0u+0x7F7F0000u; // 800F4BA0
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4BA4
L_800F4BA8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4BA8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4BAC
  c->r[9]=c->r[0]&c->r[7]; // 800F4BB0
  c->r[6]=R8(c->r[3]+0x00000004u); // 800F4BB4
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F4BB8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4BBC
  c->r[0]=c->r[9]+c->r[0]; // 800F4BC0
  c->r[0]=c->r[6]+c->r[0]; // 800F4BC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4BC8
  c->r[3]=c->r[3]+c->r[5]; // 800F4BCC
  c->r[4]=c->r[4]+c->r[5]; // 800F4BD0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F4BD4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4BA8; } // 800F4BD8
  return; // 800F4BDC
}

// fn_800F4BE0
void f_800F4BE0(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F4BE0
L_800F4BE4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4BE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4BE8
  c->r[3]=c->r[3]+c->r[5]; // 800F4BEC
  c->r[4]=c->r[4]+c->r[5]; // 800F4BF0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F4BF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4BE4; } // 800F4BF8
  return; // 800F4BFC
}

// fn_800F4C00
void f_800F4C00(Ctx* __restrict c) {
  c->r[8]=R8(c->r[3]+0x00000000u); // 800F4C00
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F4C04
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C08
  c->r[6]=0u+0x7F7F0000u; // 800F4C0C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4C10
  c->r[9]=c->r[0]&c->r[7]; // 800F4C14
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F4C18
  c->r[6]=rotl(c->r[8],23)&0xFF000000u; // 800F4C1C
  c->r[0]=c->r[9]+c->r[0]; // 800F4C20
  c->r[0]=c->r[6]+c->r[0]; // 800F4C24
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C28
  c->r[10]=c->r[0]&c->r[7]; // 800F4C2C
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F4C30
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C34
  c->r[8]=c->r[0]&c->r[7]; // 800F4C38
  c->r[0]=rotl(c->r[9],24)&0xFF000000u; // 800F4C3C
  c->r[6]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F4C40
  c->r[0]=c->r[8]+c->r[0]; // 800F4C44
  c->r[0]=c->r[6]+c->r[0]; // 800F4C48
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C4C
  c->r[8]=c->r[0]&c->r[7]; // 800F4C50
  {uint32_t ea=c->r[5]+c->r[3]; c->r[3]=R8(ea); c->r[5]=ea;} // 800F4C54
  c->r[0]=R32(c->r[5]+0x00000001u); // 800F4C58
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C5C
  c->r[6]=c->r[0]&c->r[7]; // 800F4C60
  c->r[0]=rotl(c->r[6],24)&0x00FFFFFFu; // 800F4C64
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 800F4C68
  c->r[0]=c->r[6]+c->r[0]; // 800F4C6C
  c->r[0]=c->r[3]+c->r[0]; // 800F4C70
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C74
  c->r[0]=c->r[0]&c->r[7]; // 800F4C78
  c->r[0]=c->r[10]+c->r[0]; // 800F4C7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4C80
  c->r[0]=R32(c->r[5]+0x00000005u); // 800F4C84
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4C88
  c->r[5]=c->r[0]&c->r[7]; // 800F4C8C
  c->r[0]=rotl(c->r[6],24)&0xFF000000u; // 800F4C90
  c->r[3]=rotl(c->r[5],24)&0x00FFFFFFu; // 800F4C94
  c->r[0]=c->r[5]+c->r[0]; // 800F4C98
  c->r[0]=c->r[3]+c->r[0]; // 800F4C9C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4CA0
  c->r[0]=c->r[0]&c->r[7]; // 800F4CA4
  c->r[0]=c->r[8]+c->r[0]; // 800F4CA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4CAC
  return; // 800F4CB0
}

// fn_800F4CB4
void f_800F4CB4(Ctx* __restrict c) {
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F4CB4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F4CB8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F4CBC
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F4CC0
  c->r[0]=c->r[6]+c->r[0]; // 800F4CC4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4CC8
  c->r[6]=0u+0x7F7F0000u; // 800F4CCC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4CD0
  c->r[9]=c->r[0]&c->r[7]; // 800F4CD4
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F4CD8
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F4CDC
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4CE0
  c->r[0]=c->r[6]+c->r[0]; // 800F4CE4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4CE8
  c->r[8]=c->r[0]&c->r[7]; // 800F4CEC
  c->r[5]=c->r[3]+c->r[5]; // 800F4CF0
  c->r[6]=R32(c->r[5]+0x00000001u); // 800F4CF4
  c->r[0]=R8(c->r[5]+0x00000000u); // 800F4CF8
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F4CFC
  c->r[0]=rotl(c->r[6],24)&0x00FFFFFFu; // 800F4D00
  c->r[0]=c->r[3]+c->r[0]; // 800F4D04
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4D08
  c->r[0]=c->r[0]&c->r[7]; // 800F4D0C
  c->r[0]=c->r[9]+c->r[0]; // 800F4D10
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4D14
  c->r[3]=rotl(c->r[6],24)&0xFF000000u; // 800F4D18
  c->r[0]=R32(c->r[5]+0x00000005u); // 800F4D1C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F4D20
  c->r[0]=c->r[3]+c->r[0]; // 800F4D24
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4D28
  c->r[0]=c->r[0]&c->r[7]; // 800F4D2C
  c->r[0]=c->r[8]+c->r[0]; // 800F4D30
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4D34
  return; // 800F4D38
}

// fn_800F4D3C
void f_800F4D3C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4D3C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4D40
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F4D44
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F4D48
  c->r[7]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4D4C
  c->r[6]=0u+0x7F7F0000u; // 800F4D50
  c->r[0]=c->r[6]+0x00007F7Fu; // 800F4D54
  c->r[11]=c->r[7]&c->r[0]; // 800F4D58
  c->r[9]=rotl(c->r[8],16)&0xFFFF0000u; // 800F4D5C
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F4D60
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 800F4D64
  c->r[6]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F4D68
  c->r[7]=c->r[9]+c->r[7]; // 800F4D6C
  c->r[6]=c->r[8]+c->r[6]; // 800F4D70
  c->r[6]=c->r[7]+c->r[6]; // 800F4D74
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4D78
  c->r[6]=c->r[6]&c->r[0]; // 800F4D7C
  c->r[7]=R32(c->r[3]+0x00000006u); // 800F4D80
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F4D84
  c->r[7]=c->r[7]&c->r[0]; // 800F4D88
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800F4D8C
  c->r[8]=rotl(c->r[7],16)&0x0000FFFFu; // 800F4D90
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800F4D94
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 800F4D98
  c->r[8]=c->r[10]+c->r[8]; // 800F4D9C
  c->r[7]=c->r[9]+c->r[7]; // 800F4DA0
  c->r[7]=c->r[8]+c->r[7]; // 800F4DA4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F4DA8
  c->r[7]=c->r[7]&c->r[0]; // 800F4DAC
  c->r[10]=c->r[3]+c->r[5]; // 800F4DB0
  c->r[3]=R16(c->r[3]+c->r[5]); // 800F4DB4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4DB8
  c->r[8]=c->r[3]&0x00007F7Fu; cr0(c,c->r[8]); // 800F4DBC
  c->r[3]=R32(c->r[10]+0x00000002u); // 800F4DC0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4DC4
  c->r[11]=c->r[3]&c->r[0]; // 800F4DC8
  c->r[9]=rotl(c->r[8],16)&0xFFFF0000u; // 800F4DCC
  c->r[5]=rotl(c->r[11],16)&0x0000FFFFu; // 800F4DD0
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 800F4DD4
  c->r[3]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F4DD8
  c->r[5]=c->r[9]+c->r[5]; // 800F4DDC
  c->r[3]=c->r[8]+c->r[3]; // 800F4DE0
  c->r[3]=c->r[5]+c->r[3]; // 800F4DE4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4DE8
  c->r[3]=c->r[3]&c->r[0]; // 800F4DEC
  c->r[3]=c->r[6]+c->r[3]; // 800F4DF0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F4DF4
  c->r[3]=R32(c->r[10]+0x00000006u); // 800F4DF8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4DFC
  c->r[3]=c->r[3]&c->r[0]; // 800F4E00
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F4E04
  c->r[5]=rotl(c->r[3],16)&0x0000FFFFu; // 800F4E08
  c->r[6]=rotl(c->r[11],24)&0xFF000000u; // 800F4E0C
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 800F4E10
  c->r[5]=c->r[8]+c->r[5]; // 800F4E14
  c->r[3]=c->r[6]+c->r[3]; // 800F4E18
  c->r[3]=c->r[5]+c->r[3]; // 800F4E1C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4E20
  c->r[0]=c->r[3]&c->r[0]; // 800F4E24
  c->r[0]=c->r[7]+c->r[0]; // 800F4E28
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4E2C
  return; // 800F4E30
}

// fn_800F4E34
void f_800F4E34(Ctx* __restrict c) {
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F4E34
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F4E38
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4E3C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F4E40
  c->r[0]=c->r[6]+c->r[0]; // 800F4E44
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4E48
  c->r[6]=0u+0x7F7F0000u; // 800F4E4C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4E50
  c->r[9]=c->r[0]&c->r[7]; // 800F4E54
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F4E58
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F4E5C
  c->r[0]=c->r[6]+c->r[0]; // 800F4E60
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4E64
  c->r[8]=c->r[0]&c->r[7]; // 800F4E68
  c->r[5]=c->r[3]+c->r[5]; // 800F4E6C
  c->r[6]=R32(c->r[5]+0x00000002u); // 800F4E70
  c->r[0]=R16(c->r[5]+0x00000000u); // 800F4E74
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F4E78
  c->r[0]=rotl(c->r[6],16)&0x0000FFFFu; // 800F4E7C
  c->r[0]=c->r[3]+c->r[0]; // 800F4E80
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4E84
  c->r[0]=c->r[0]&c->r[7]; // 800F4E88
  c->r[0]=c->r[9]+c->r[0]; // 800F4E8C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F4E90
  c->r[3]=rotl(c->r[6],16)&0xFFFF0000u; // 800F4E94
  c->r[0]=R16(c->r[5]+0x00000006u); // 800F4E98
  c->r[0]=c->r[3]+c->r[0]; // 800F4E9C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4EA0
  c->r[0]=c->r[0]&c->r[7]; // 800F4EA4
  c->r[0]=c->r[8]+c->r[0]; // 800F4EA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4EAC
  return; // 800F4EB0
}

// fn_800F4EB4
void f_800F4EB4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4EB4
  c->r[7]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4EB8
  c->r[6]=0u+0x7F7F0000u; // 800F4EBC
  c->r[0]=c->r[6]+0x00007F7Fu; // 800F4EC0
  c->r[8]=c->r[7]&c->r[0]; // 800F4EC4
  c->r[6]=R32(c->r[3]+0x00000003u); // 800F4EC8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4ECC
  c->r[10]=c->r[6]&c->r[0]; // 800F4ED0
  c->r[9]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F4ED4
  c->r[7]=rotl(c->r[10],8)&0x000000FFu; // 800F4ED8
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 800F4EDC
  c->r[6]=rotl(c->r[10],16)&0x0000FFFFu; // 800F4EE0
  c->r[7]=c->r[9]+c->r[7]; // 800F4EE4
  c->r[6]=c->r[8]+c->r[6]; // 800F4EE8
  c->r[6]=c->r[7]+c->r[6]; // 800F4EEC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F4EF0
  c->r[6]=c->r[6]&c->r[0]; // 800F4EF4
  c->r[7]=R16(c->r[3]+0x00000007u); // 800F4EF8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F4EFC
  c->r[11]=c->r[7]&0x00007F7Fu; cr0(c,c->r[11]); // 800F4F00
  c->r[9]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F4F04
  c->r[8]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F4F08
  c->r[7]=rotl(c->r[10],16)&0xFFFF0000u; // 800F4F0C
  c->r[8]=c->r[9]+c->r[8]; // 800F4F10
  c->r[7]=c->r[7]+c->r[11]; // 800F4F14
  c->r[7]=c->r[8]+c->r[7]; // 800F4F18
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F4F1C
  c->r[7]=c->r[7]&c->r[0]; // 800F4F20
  c->r[10]=c->r[3]+c->r[5]; // 800F4F24
  c->r[3]=R32(c->r[10]+0xFFFFFFFFu); // 800F4F28
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4F2C
  c->r[8]=c->r[3]&c->r[0]; // 800F4F30
  c->r[3]=R32(c->r[10]+0x00000003u); // 800F4F34
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4F38
  c->r[11]=c->r[3]&c->r[0]; // 800F4F3C
  c->r[9]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F4F40
  c->r[5]=rotl(c->r[11],8)&0x000000FFu; // 800F4F44
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 800F4F48
  c->r[3]=rotl(c->r[11],16)&0x0000FFFFu; // 800F4F4C
  c->r[5]=c->r[9]+c->r[5]; // 800F4F50
  c->r[3]=c->r[8]+c->r[3]; // 800F4F54
  c->r[3]=c->r[5]+c->r[3]; // 800F4F58
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4F5C
  c->r[3]=c->r[3]&c->r[0]; // 800F4F60
  c->r[3]=c->r[6]+c->r[3]; // 800F4F64
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F4F68
  c->r[3]=R16(c->r[10]+0x00000007u); // 800F4F6C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4F70
  c->r[8]=c->r[3]&0x00007F7Fu; cr0(c,c->r[8]); // 800F4F74
  c->r[6]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F4F78
  c->r[5]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F4F7C
  c->r[3]=rotl(c->r[11],16)&0xFFFF0000u; // 800F4F80
  c->r[5]=c->r[6]+c->r[5]; // 800F4F84
  c->r[3]=c->r[3]+c->r[8]; // 800F4F88
  c->r[3]=c->r[5]+c->r[3]; // 800F4F8C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F4F90
  c->r[0]=c->r[3]&c->r[0]; // 800F4F94
  c->r[0]=c->r[7]+c->r[0]; // 800F4F98
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4F9C
  return; // 800F4FA0
}

// fn_800F4FA4
void f_800F4FA4(Ctx* __restrict c) {
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F4FA4
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F4FA8
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4FAC
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F4FB0
  c->r[0]=c->r[6]+c->r[0]; // 800F4FB4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4FB8
  c->r[6]=0u+0x7F7F0000u; // 800F4FBC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F4FC0
  c->r[9]=c->r[0]&c->r[7]; // 800F4FC4
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F4FC8
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F4FCC
  c->r[0]=c->r[6]+c->r[0]; // 800F4FD0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4FD4
  c->r[8]=c->r[0]&c->r[7]; // 800F4FD8
  c->r[5]=c->r[3]+c->r[5]; // 800F4FDC
  c->r[6]=R32(c->r[5]+0x00000003u); // 800F4FE0
  c->r[0]=R32(c->r[5]+0xFFFFFFFFu); // 800F4FE4
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F4FE8
  c->r[0]=rotl(c->r[6],8)&0x000000FFu; // 800F4FEC
  c->r[0]=c->r[3]+c->r[0]; // 800F4FF0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F4FF4
  c->r[0]=c->r[0]&c->r[7]; // 800F4FF8
  c->r[0]=c->r[9]+c->r[0]; // 800F4FFC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5000
  c->r[3]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F5004
  c->r[0]=R8(c->r[5]+0x00000007u); // 800F5008
  c->r[0]=c->r[3]+c->r[0]; // 800F500C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5010
  c->r[0]=c->r[0]&c->r[7]; // 800F5014
  c->r[0]=c->r[8]+c->r[0]; // 800F5018
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F501C
  return; // 800F5020
}

// fn_800F5024
void f_800F5024(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5024
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5028
  c->r[6]=0u+0x7F7F0000u; // 800F502C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5030
  c->r[9]=c->r[0]&c->r[7]; // 800F5034
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5038
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F503C
  c->r[8]=c->r[0]&c->r[7]; // 800F5040
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F5044
  c->r[6]=rotl(c->r[8],8)&0x000000FFu; // 800F5048
  c->r[0]=c->r[9]+c->r[0]; // 800F504C
  c->r[0]=c->r[6]+c->r[0]; // 800F5050
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5054
  c->r[9]=c->r[0]&c->r[7]; // 800F5058
  c->r[6]=R8(c->r[3]+0x00000008u); // 800F505C
  c->r[0]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F5060
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F5064
  c->r[0]=c->r[8]+c->r[0]; // 800F5068
  c->r[0]=c->r[6]+c->r[0]; // 800F506C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5070
  c->r[10]=c->r[0]&c->r[7]; // 800F5074
  {uint32_t ea=c->r[5]+c->r[3]; c->r[0]=R32(ea); c->r[5]=ea;} // 800F5078
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F507C
  c->r[8]=c->r[0]&c->r[7]; // 800F5080
  c->r[0]=R32(c->r[5]+0x00000004u); // 800F5084
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5088
  c->r[6]=c->r[0]&c->r[7]; // 800F508C
  c->r[0]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F5090
  c->r[3]=rotl(c->r[6],8)&0x000000FFu; // 800F5094
  c->r[0]=c->r[8]+c->r[0]; // 800F5098
  c->r[0]=c->r[3]+c->r[0]; // 800F509C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F50A0
  c->r[0]=c->r[0]&c->r[7]; // 800F50A4
  c->r[0]=c->r[9]+c->r[0]; // 800F50A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F50AC
  c->r[3]=R8(c->r[5]+0x00000008u); // 800F50B0
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F50B4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F50B8
  c->r[0]=c->r[6]+c->r[0]; // 800F50BC
  c->r[0]=c->r[3]+c->r[0]; // 800F50C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F50C4
  c->r[0]=c->r[0]&c->r[7]; // 800F50C8
  c->r[0]=c->r[10]+c->r[0]; // 800F50CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F50D0
  return; // 800F50D4
}

// fn_800F50D8
void f_800F50D8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F50D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F50DC
  c->r[6]=0u+0x7F7F0000u; // 800F50E0
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F50E4
  c->r[8]=c->r[0]&c->r[6]; // 800F50E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F50EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F50F0
  c->r[7]=c->r[0]&c->r[6]; // 800F50F4
  {uint32_t ea=c->r[3]+c->r[5]; c->r[0]=R32(ea); c->r[3]=ea;} // 800F50F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F50FC
  c->r[0]=c->r[0]&c->r[6]; // 800F5100
  c->r[0]=c->r[8]+c->r[0]; // 800F5104
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5108
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F510C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5110
  c->r[0]=c->r[0]&c->r[6]; // 800F5114
  c->r[0]=c->r[7]+c->r[0]; // 800F5118
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F511C
  return; // 800F5120
}

// fn_800F5124
void f_800F5124(Ctx* __restrict c) {
  c->r[8]=R8(c->r[3]+0x00000000u); // 800F5124
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F5128
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F512C
  c->r[5]=0u+0x7F7F0000u; // 800F5130
  c->r[6]=c->r[5]+0x00007F7Fu; // 800F5134
  c->r[7]=c->r[0]&c->r[6]; // 800F5138
  c->r[0]=rotl(c->r[7],24)&0x00FFFFFFu; // 800F513C
  c->r[5]=rotl(c->r[8],23)&0xFF000000u; // 800F5140
  c->r[0]=c->r[7]+c->r[0]; // 800F5144
  c->r[0]=c->r[5]+c->r[0]; // 800F5148
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F514C
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F5150
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5154
  c->r[5]=c->r[0]&c->r[6]; // 800F5158
  c->r[0]=rotl(c->r[7],24)&0xFF000000u; // 800F515C
  c->r[3]=rotl(c->r[5],24)&0x00FFFFFFu; // 800F5160
  c->r[0]=c->r[5]+c->r[0]; // 800F5164
  c->r[0]=c->r[3]+c->r[0]; // 800F5168
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F516C
  return; // 800F5170
}

// fn_800F5174
void f_800F5174(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000001u); // 800F5174
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F5178
  c->r[5]=rotl(c->r[0],24)&0xFF000000u; // 800F517C
  c->r[0]=rotl(c->r[6],24)&0x00FFFFFFu; // 800F5180
  c->r[0]=c->r[5]+c->r[0]; // 800F5184
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5188
  c->r[5]=rotl(c->r[6],24)&0xFF000000u; // 800F518C
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F5190
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5194
  c->r[0]=c->r[5]+c->r[0]; // 800F5198
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F519C
  return; // 800F51A0
}

// fn_800F51A4
void f_800F51A4(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F51A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F51A8
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F51AC
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F51B0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F51B4
  c->r[5]=0u+0x7F7F0000u; // 800F51B8
  c->r[8]=c->r[5]+0x00007F7Fu; // 800F51BC
  c->r[9]=c->r[0]&c->r[8]; // 800F51C0
  c->r[7]=rotl(c->r[6],16)&0xFFFF0000u; // 800F51C4
  c->r[5]=rotl(c->r[9],16)&0x0000FFFFu; // 800F51C8
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 800F51CC
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F51D0
  c->r[5]=c->r[7]+c->r[5]; // 800F51D4
  c->r[0]=c->r[6]+c->r[0]; // 800F51D8
  c->r[0]=c->r[5]+c->r[0]; // 800F51DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F51E0
  c->r[0]=R32(c->r[3]+0x00000006u); // 800F51E4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F51E8
  c->r[0]=c->r[0]&c->r[8]; // 800F51EC
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F51F0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800F51F4
  c->r[5]=rotl(c->r[9],24)&0xFF000000u; // 800F51F8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F51FC
  c->r[3]=c->r[6]+c->r[3]; // 800F5200
  c->r[0]=c->r[5]+c->r[0]; // 800F5204
  c->r[0]=c->r[3]+c->r[0]; // 800F5208
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F520C
  return; // 800F5210
}

// fn_800F5214
void f_800F5214(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000002u); // 800F5214
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F5218
  c->r[5]=rotl(c->r[0],16)&0xFFFF0000u; // 800F521C
  c->r[0]=rotl(c->r[6],16)&0x0000FFFFu; // 800F5220
  c->r[0]=c->r[5]+c->r[0]; // 800F5224
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5228
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 800F522C
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F5230
  c->r[0]=c->r[5]+c->r[0]; // 800F5234
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5238
  return; // 800F523C
}

// fn_800F5240
void f_800F5240(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5240
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5244
  c->r[5]=0u+0x7F7F0000u; // 800F5248
  c->r[5]=c->r[5]+0x00007F7Fu; // 800F524C
  c->r[6]=c->r[0]&c->r[5]; // 800F5250
  c->r[0]=R32(c->r[3]+0x00000003u); // 800F5254
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5258
  c->r[8]=c->r[0]&c->r[5]; // 800F525C
  c->r[7]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F5260
  c->r[5]=rotl(c->r[8],8)&0x000000FFu; // 800F5264
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 800F5268
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F526C
  c->r[5]=c->r[7]+c->r[5]; // 800F5270
  c->r[0]=c->r[6]+c->r[0]; // 800F5274
  c->r[0]=c->r[5]+c->r[0]; // 800F5278
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F527C
  c->r[0]=R16(c->r[3]+0x00000007u); // 800F5280
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5284
  c->r[6]=c->r[0]&0x00007F7Fu; cr0(c,c->r[6]); // 800F5288
  c->r[5]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F528C
  c->r[3]=rotl(c->r[6],24)&0x00FFFFFFu; // 800F5290
  c->r[0]=rotl(c->r[8],16)&0xFFFF0000u; // 800F5294
  c->r[3]=c->r[5]+c->r[3]; // 800F5298
  c->r[0]=c->r[0]+c->r[6]; // 800F529C
  c->r[0]=c->r[3]+c->r[0]; // 800F52A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F52A4
  return; // 800F52A8
}

// fn_800F52AC
void f_800F52AC(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000003u); // 800F52AC
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F52B0
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F52B4
  c->r[0]=rotl(c->r[6],8)&0x000000FFu; // 800F52B8
  c->r[0]=c->r[5]+c->r[0]; // 800F52BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F52C0
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F52C4
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F52C8
  c->r[0]=c->r[5]+c->r[0]; // 800F52CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F52D0
  return; // 800F52D4
}

// fn_800F52D8
void f_800F52D8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F52D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F52DC
  c->r[5]=0u+0x7F7F0000u; // 800F52E0
  c->r[5]=c->r[5]+0x00007F7Fu; // 800F52E4
  c->r[7]=c->r[0]&c->r[5]; // 800F52E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F52EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F52F0
  c->r[6]=c->r[0]&c->r[5]; // 800F52F4
  c->r[0]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F52F8
  c->r[5]=rotl(c->r[6],8)&0x000000FFu; // 800F52FC
  c->r[0]=c->r[7]+c->r[0]; // 800F5300
  c->r[0]=c->r[5]+c->r[0]; // 800F5304
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5308
  c->r[3]=R8(c->r[3]+0x00000008u); // 800F530C
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F5310
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5314
  c->r[0]=c->r[6]+c->r[0]; // 800F5318
  c->r[0]=c->r[3]+c->r[0]; // 800F531C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5320
  return; // 800F5324
}

// fn_800F5328
void f_800F5328(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5328
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F532C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5330
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5334
  return; // 800F5338
}

// fn_800F533C
void f_800F533C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F533C
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F5340
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F5344
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5348
  c->r[7]=0u+0x7F7F0000u; // 800F534C
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F5350
  c->r[9]=c->r[8]&c->r[0]; // 800F5354
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5358
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F535C
  c->r[7]=c->r[9]+c->r[7]; // 800F5360
  c->r[7]=c->r[8]+c->r[7]; // 800F5364
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5368
  c->r[7]=c->r[7]&c->r[0]; // 800F536C
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F5370
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5374
  c->r[10]=c->r[8]&c->r[0]; // 800F5378
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F537C
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F5380
  c->r[8]=c->r[10]+c->r[8]; // 800F5384
  c->r[8]=c->r[9]+c->r[8]; // 800F5388
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F538C
  c->r[12]=c->r[8]&c->r[0]; // 800F5390
  c->r[9]=c->r[3]+c->r[5]; // 800F5394
L_800F5398:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 800F5398
  c->r[3]=R32(c->r[9]+0x00000001u); // 800F539C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F53A0
  c->r[11]=c->r[3]&c->r[0]; // 800F53A4
  c->r[3]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F53A8
  c->r[8]=rotl(c->r[8],23)&0xFF000000u; // 800F53AC
  c->r[3]=c->r[11]+c->r[3]; // 800F53B0
  c->r[3]=c->r[8]+c->r[3]; // 800F53B4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F53B8
  c->r[8]=c->r[3]&c->r[0]; // 800F53BC
  c->r[3]=c->r[7]+c->r[8]; // 800F53C0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F53C4
  c->r[7]=c->r[8]|c->r[8]; // 800F53C8
  c->r[3]=R32(c->r[9]+0x00000005u); // 800F53CC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F53D0
  c->r[10]=c->r[3]&c->r[0]; // 800F53D4
  c->r[3]=rotl(c->r[11],24)&0xFF000000u; // 800F53D8
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F53DC
  c->r[3]=c->r[10]+c->r[3]; // 800F53E0
  c->r[3]=c->r[8]+c->r[3]; // 800F53E4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F53E8
  c->r[8]=c->r[3]&c->r[0]; // 800F53EC
  c->r[3]=c->r[12]+c->r[8]; // 800F53F0
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F53F4
  c->r[12]=c->r[8]|c->r[8]; // 800F53F8
  c->r[9]=c->r[9]+c->r[5]; // 800F53FC
  c->r[4]=c->r[4]+c->r[5]; // 800F5400
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F5404
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5398; } // 800F5408
  return; // 800F540C
}

// fn_800F5410
void f_800F5410(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F5410
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F5414
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F5418
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F541C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5420
  c->r[0]=c->r[6]+c->r[0]; // 800F5424
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5428
  c->r[6]=0u+0x7F7F0000u; // 800F542C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5430
  c->r[10]=c->r[0]&c->r[7]; // 800F5434
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F5438
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F543C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5440
  c->r[0]=c->r[6]+c->r[0]; // 800F5444
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5448
  c->r[11]=c->r[0]&c->r[7]; // 800F544C
  c->r[6]=c->r[3]+c->r[5]; // 800F5450
L_800F5454:;
  c->r[9]=R32(c->r[6]+0x00000001u); // 800F5454
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F5458
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F545C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5460
  c->r[0]=c->r[3]+c->r[0]; // 800F5464
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5468
  c->r[3]=c->r[0]&c->r[7]; // 800F546C
  c->r[0]=c->r[10]+c->r[3]; // 800F5470
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5474
  c->r[10]=c->r[3]|c->r[3]; // 800F5478
  c->r[3]=rotl(c->r[9],24)&0xFF000000u; // 800F547C
  c->r[0]=R32(c->r[6]+0x00000005u); // 800F5480
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5484
  c->r[0]=c->r[3]+c->r[0]; // 800F5488
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F548C
  c->r[3]=c->r[0]&c->r[7]; // 800F5490
  c->r[0]=c->r[11]+c->r[3]; // 800F5494
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5498
  c->r[11]=c->r[3]|c->r[3]; // 800F549C
  c->r[6]=c->r[6]+c->r[5]; // 800F54A0
  c->r[4]=c->r[4]+c->r[5]; // 800F54A4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F54A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5454; } // 800F54AC
  return; // 800F54B0
}

// fn_800F54B4
void f_800F54B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F54B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F54B8
  c->r[6]=0u+0x00000002u; // 800F54BC
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F54C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F54C4
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F54C8
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F54CC
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F54D0
  c->r[7]=0u+0x7F7F0000u; // 800F54D4
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F54D8
  c->r[12]=c->r[8]&c->r[0]; // 800F54DC
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F54E0
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F54E4
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F54E8
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F54EC
  c->r[8]=c->r[10]+c->r[8]; // 800F54F0
  c->r[7]=c->r[9]+c->r[7]; // 800F54F4
  c->r[7]=c->r[8]+c->r[7]; // 800F54F8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F54FC
  c->r[7]=c->r[7]&c->r[0]; // 800F5500
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F5504
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5508
  c->r[8]=c->r[8]&c->r[0]; // 800F550C
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F5510
  c->r[9]=rotl(c->r[8],16)&0x0000FFFFu; // 800F5514
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F5518
  c->r[8]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F551C
  c->r[9]=c->r[11]+c->r[9]; // 800F5520
  c->r[8]=c->r[10]+c->r[8]; // 800F5524
  c->r[8]=c->r[9]+c->r[8]; // 800F5528
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F552C
  c->r[8]=c->r[8]&c->r[0]; // 800F5530
  c->r[3]=c->r[3]+c->r[5]; // 800F5534
L_800F5538:;
  c->r[9]=R16(c->r[3]+0x00000000u); // 800F5538
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F553C
  c->r[11]=c->r[9]&0x00007F7Fu; cr0(c,c->r[11]); // 800F5540
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F5544
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5548
  c->r[31]=c->r[9]&c->r[0]; // 800F554C
  c->r[12]=rotl(c->r[11],16)&0xFFFF0000u; // 800F5550
  c->r[10]=rotl(c->r[31],16)&0x0000FFFFu; // 800F5554
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F5558
  c->r[9]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F555C
  c->r[10]=c->r[12]+c->r[10]; // 800F5560
  c->r[9]=c->r[11]+c->r[9]; // 800F5564
  c->r[9]=c->r[10]+c->r[9]; // 800F5568
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F556C
  c->r[9]=c->r[9]&c->r[0]; // 800F5570
  c->r[7]=c->r[7]+c->r[9]; // 800F5574
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F5578
  c->r[7]=c->r[9]|c->r[9]; // 800F557C
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F5580
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5584
  c->r[9]=c->r[9]&c->r[0]; // 800F5588
  c->r[12]=rotl(c->r[31],16)&0xFFFF0000u; // 800F558C
  c->r[10]=rotl(c->r[9],16)&0x0000FFFFu; // 800F5590
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F5594
  c->r[9]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5598
  c->r[10]=c->r[12]+c->r[10]; // 800F559C
  c->r[9]=c->r[11]+c->r[9]; // 800F55A0
  c->r[9]=c->r[10]+c->r[9]; // 800F55A4
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F55A8
  c->r[9]=c->r[9]&c->r[0]; // 800F55AC
  c->r[8]=c->r[8]+c->r[9]; // 800F55B0
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F55B4
  c->r[8]=c->r[9]|c->r[9]; // 800F55B8
  c->r[3]=c->r[3]+c->r[5]; // 800F55BC
  c->r[4]=c->r[4]+c->r[5]; // 800F55C0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F55C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5538; } // 800F55C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F55CC
  c->r[1]=c->r[1]+0x00000010u; // 800F55D0
  return; // 800F55D4
}

// fn_800F55D8
void f_800F55D8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F55D8
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F55DC
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F55E0
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F55E4
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F55E8
  c->r[0]=c->r[6]+c->r[0]; // 800F55EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F55F0
  c->r[6]=0u+0x7F7F0000u; // 800F55F4
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F55F8
  c->r[10]=c->r[0]&c->r[7]; // 800F55FC
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5600
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F5604
  c->r[0]=c->r[6]+c->r[0]; // 800F5608
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F560C
  c->r[11]=c->r[0]&c->r[7]; // 800F5610
  c->r[6]=c->r[3]+c->r[5]; // 800F5614
L_800F5618:;
  c->r[9]=R32(c->r[6]+0x00000002u); // 800F5618
  c->r[0]=R16(c->r[6]+0x00000000u); // 800F561C
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F5620
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F5624
  c->r[0]=c->r[3]+c->r[0]; // 800F5628
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F562C
  c->r[3]=c->r[0]&c->r[7]; // 800F5630
  c->r[0]=c->r[10]+c->r[3]; // 800F5634
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5638
  c->r[10]=c->r[3]|c->r[3]; // 800F563C
  c->r[3]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5640
  c->r[0]=R16(c->r[6]+0x00000006u); // 800F5644
  c->r[0]=c->r[3]+c->r[0]; // 800F5648
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F564C
  c->r[3]=c->r[0]&c->r[7]; // 800F5650
  c->r[0]=c->r[11]+c->r[3]; // 800F5654
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5658
  c->r[11]=c->r[3]|c->r[3]; // 800F565C
  c->r[6]=c->r[6]+c->r[5]; // 800F5660
  c->r[4]=c->r[4]+c->r[5]; // 800F5664
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F5668
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5618; } // 800F566C
  return; // 800F5670
}

// fn_800F5674
void f_800F5674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5678
  c->r[6]=0u+0x00000002u; // 800F567C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5680
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5684
  c->r[7]=0u+0x7F7F0000u; // 800F5688
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F568C
  c->r[9]=c->r[8]&c->r[0]; // 800F5690
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F5694
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5698
  c->r[11]=c->r[7]&c->r[0]; // 800F569C
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F56A0
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F56A4
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F56A8
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F56AC
  c->r[8]=c->r[10]+c->r[8]; // 800F56B0
  c->r[7]=c->r[9]+c->r[7]; // 800F56B4
  c->r[7]=c->r[8]+c->r[7]; // 800F56B8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F56BC
  c->r[7]=c->r[7]&c->r[0]; // 800F56C0
  c->r[8]=R16(c->r[3]+0x00000007u); // 800F56C4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F56C8
  c->r[12]=c->r[8]&0x00007F7Fu; cr0(c,c->r[12]); // 800F56CC
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F56D0
  c->r[9]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F56D4
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F56D8
  c->r[9]=c->r[10]+c->r[9]; // 800F56DC
  c->r[8]=c->r[8]+c->r[12]; // 800F56E0
  c->r[8]=c->r[9]+c->r[8]; // 800F56E4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F56E8
  c->r[8]=c->r[8]&c->r[0]; // 800F56EC
  c->r[12]=c->r[3]+c->r[5]; // 800F56F0
L_800F56F4:;
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F56F4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F56F8
  c->r[10]=c->r[3]&c->r[0]; // 800F56FC
  c->r[3]=R32(c->r[12]+0x00000003u); // 800F5700
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5704
  c->r[31]=c->r[3]&c->r[0]; // 800F5708
  c->r[11]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F570C
  c->r[9]=rotl(c->r[31],8)&0x000000FFu; // 800F5710
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F5714
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F5718
  c->r[9]=c->r[11]+c->r[9]; // 800F571C
  c->r[3]=c->r[10]+c->r[3]; // 800F5720
  c->r[3]=c->r[9]+c->r[3]; // 800F5724
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5728
  c->r[9]=c->r[3]&c->r[0]; // 800F572C
  c->r[3]=c->r[7]+c->r[9]; // 800F5730
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F5734
  c->r[7]=c->r[9]|c->r[9]; // 800F5738
  c->r[3]=R16(c->r[12]+0x00000007u); // 800F573C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5740
  c->r[11]=c->r[3]&0x00007F7Fu; cr0(c,c->r[11]); // 800F5744
  c->r[10]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F5748
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F574C
  c->r[3]=rotl(c->r[31],16)&0xFFFF0000u; // 800F5750
  c->r[9]=c->r[10]+c->r[9]; // 800F5754
  c->r[3]=c->r[3]+c->r[11]; // 800F5758
  c->r[3]=c->r[9]+c->r[3]; // 800F575C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5760
  c->r[9]=c->r[3]&c->r[0]; // 800F5764
  c->r[3]=c->r[8]+c->r[9]; // 800F5768
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F576C
  c->r[8]=c->r[9]|c->r[9]; // 800F5770
  c->r[12]=c->r[12]+c->r[5]; // 800F5774
  c->r[4]=c->r[4]+c->r[5]; // 800F5778
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F577C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F56F4; } // 800F5780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5784
  c->r[1]=c->r[1]+0x00000010u; // 800F5788
  return; // 800F578C
}

// fn_800F5790
void f_800F5790(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F5790
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F5794
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5798
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F579C
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F57A0
  c->r[0]=c->r[6]+c->r[0]; // 800F57A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F57A8
  c->r[6]=0u+0x7F7F0000u; // 800F57AC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F57B0
  c->r[10]=c->r[0]&c->r[7]; // 800F57B4
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F57B8
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F57BC
  c->r[0]=c->r[6]+c->r[0]; // 800F57C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F57C4
  c->r[11]=c->r[0]&c->r[7]; // 800F57C8
  c->r[6]=c->r[3]+c->r[5]; // 800F57CC
L_800F57D0:;
  c->r[9]=R32(c->r[6]+0x00000003u); // 800F57D0
  c->r[0]=R32(c->r[6]+0xFFFFFFFFu); // 800F57D4
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F57D8
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F57DC
  c->r[0]=c->r[3]+c->r[0]; // 800F57E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F57E4
  c->r[3]=c->r[0]&c->r[7]; // 800F57E8
  c->r[0]=c->r[10]+c->r[3]; // 800F57EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F57F0
  c->r[10]=c->r[3]|c->r[3]; // 800F57F4
  c->r[3]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F57F8
  c->r[0]=R8(c->r[6]+0x00000007u); // 800F57FC
  c->r[0]=c->r[3]+c->r[0]; // 800F5800
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5804
  c->r[3]=c->r[0]&c->r[7]; // 800F5808
  c->r[0]=c->r[11]+c->r[3]; // 800F580C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5810
  c->r[11]=c->r[3]|c->r[3]; // 800F5814
  c->r[6]=c->r[6]+c->r[5]; // 800F5818
  c->r[4]=c->r[4]+c->r[5]; // 800F581C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F5820
  if (!crb(c,2)) { IRQCHK(c); goto L_800F57D0; } // 800F5824
  return; // 800F5828
}

// fn_800F582C
void f_800F582C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F582C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5830
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5834
  c->r[7]=0u+0x7F7F0000u; // 800F5838
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F583C
  c->r[9]=c->r[8]&c->r[0]; // 800F5840
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F5844
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5848
  c->r[10]=c->r[7]&c->r[0]; // 800F584C
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F5850
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F5854
  c->r[7]=c->r[9]+c->r[7]; // 800F5858
  c->r[7]=c->r[8]+c->r[7]; // 800F585C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5860
  c->r[7]=c->r[7]&c->r[0]; // 800F5864
  c->r[9]=R8(c->r[3]+0x00000008u); // 800F5868
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F586C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5870
  c->r[8]=c->r[10]+c->r[8]; // 800F5874
  c->r[8]=c->r[9]+c->r[8]; // 800F5878
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F587C
  c->r[12]=c->r[8]&c->r[0]; // 800F5880
  c->r[9]=c->r[3]+c->r[5]; // 800F5884
L_800F5888:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 800F5888
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F588C
  c->r[11]=c->r[3]&c->r[0]; // 800F5890
  c->r[3]=R32(c->r[9]+0x00000004u); // 800F5894
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5898
  c->r[10]=c->r[3]&c->r[0]; // 800F589C
  c->r[3]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F58A0
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F58A4
  c->r[3]=c->r[11]+c->r[3]; // 800F58A8
  c->r[3]=c->r[8]+c->r[3]; // 800F58AC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F58B0
  c->r[8]=c->r[3]&c->r[0]; // 800F58B4
  c->r[3]=c->r[7]+c->r[8]; // 800F58B8
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F58BC
  c->r[7]=c->r[8]|c->r[8]; // 800F58C0
  c->r[8]=R8(c->r[9]+0x00000008u); // 800F58C4
  c->r[3]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F58C8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F58CC
  c->r[3]=c->r[10]+c->r[3]; // 800F58D0
  c->r[3]=c->r[8]+c->r[3]; // 800F58D4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F58D8
  c->r[8]=c->r[3]&c->r[0]; // 800F58DC
  c->r[3]=c->r[12]+c->r[8]; // 800F58E0
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F58E4
  c->r[12]=c->r[8]|c->r[8]; // 800F58E8
  c->r[9]=c->r[9]+c->r[5]; // 800F58EC
  c->r[4]=c->r[4]+c->r[5]; // 800F58F0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F58F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5888; } // 800F58F8
  return; // 800F58FC
}

// fn_800F5900
void f_800F5900(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F5900
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5904
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5908
  c->r[6]=0u+0x7F7F0000u; // 800F590C
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F5910
  c->r[10]=c->r[0]&c->r[6]; // 800F5914
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5918
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F591C
  c->r[9]=c->r[0]&c->r[6]; // 800F5920
  c->r[3]=c->r[3]+c->r[5]; // 800F5924
L_800F5928:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5928
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F592C
  c->r[8]=c->r[0]&c->r[6]; // 800F5930
  c->r[0]=c->r[10]+c->r[8]; // 800F5934
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5938
  c->r[10]=c->r[8]|c->r[8]; // 800F593C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5940
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5944
  c->r[8]=c->r[0]&c->r[6]; // 800F5948
  c->r[0]=c->r[9]+c->r[8]; // 800F594C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5950
  c->r[9]=c->r[8]|c->r[8]; // 800F5954
  c->r[3]=c->r[3]+c->r[5]; // 800F5958
  c->r[4]=c->r[4]+c->r[5]; // 800F595C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F5960
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5928; } // 800F5964
  return; // 800F5968
}

// fn_800F596C
void f_800F596C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F596C
  c->r[6]=0u+0x7F7F0000u; // 800F5970
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5974
L_800F5978:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F5978
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F597C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5980
  c->r[10]=c->r[0]&c->r[7]; // 800F5984
  c->r[0]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F5988
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F598C
  c->r[0]=c->r[10]+c->r[0]; // 800F5990
  c->r[0]=c->r[6]+c->r[0]; // 800F5994
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5998
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F599C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F59A0
  c->r[9]=c->r[0]&c->r[7]; // 800F59A4
  c->r[0]=rotl(c->r[10],24)&0xFF000000u; // 800F59A8
  c->r[6]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F59AC
  c->r[0]=c->r[9]+c->r[0]; // 800F59B0
  c->r[0]=c->r[6]+c->r[0]; // 800F59B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F59B8
  c->r[3]=c->r[3]+c->r[5]; // 800F59BC
  c->r[4]=c->r[4]+c->r[5]; // 800F59C0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F59C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5978; } // 800F59C8
  return; // 800F59CC
}

// fn_800F59D0
void f_800F59D0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F59D0
L_800F59D4:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F59D4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F59D8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F59DC
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F59E0
  c->r[0]=c->r[6]+c->r[0]; // 800F59E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F59E8
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F59EC
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F59F0
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F59F4
  c->r[0]=c->r[6]+c->r[0]; // 800F59F8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F59FC
  c->r[3]=c->r[3]+c->r[5]; // 800F5A00
  c->r[4]=c->r[4]+c->r[5]; // 800F5A04
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F5A08
  if (!crb(c,2)) { IRQCHK(c); goto L_800F59D4; } // 800F5A0C
  return; // 800F5A10
}

// fn_800F5A14
void f_800F5A14(Ctx* __restrict c) {
  c->r[10]=0u+0x00000002u; // 800F5A14
  c->r[6]=0u+0x7F7F0000u; // 800F5A18
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F5A1C
L_800F5A20:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F5A20
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5A24
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F5A28
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F5A2C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5A30
  c->r[11]=c->r[0]&c->r[9]; // 800F5A34
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F5A38
  c->r[6]=rotl(c->r[11],16)&0x0000FFFFu; // 800F5A3C
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F5A40
  c->r[0]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F5A44
  c->r[6]=c->r[8]+c->r[6]; // 800F5A48
  c->r[0]=c->r[7]+c->r[0]; // 800F5A4C
  c->r[0]=c->r[6]+c->r[0]; // 800F5A50
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5A54
  c->r[0]=R32(c->r[3]+0x00000006u); // 800F5A58
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5A5C
  c->r[0]=c->r[0]&c->r[9]; // 800F5A60
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F5A64
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F5A68
  c->r[7]=rotl(c->r[11],24)&0xFF000000u; // 800F5A6C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5A70
  c->r[6]=c->r[8]+c->r[6]; // 800F5A74
  c->r[0]=c->r[7]+c->r[0]; // 800F5A78
  c->r[0]=c->r[6]+c->r[0]; // 800F5A7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5A80
  c->r[3]=c->r[3]+c->r[5]; // 800F5A84
  c->r[4]=c->r[4]+c->r[5]; // 800F5A88
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F5A8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5A20; } // 800F5A90
  return; // 800F5A94
}

// fn_800F5A98
void f_800F5A98(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F5A98
L_800F5A9C:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F5A9C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F5AA0
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F5AA4
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F5AA8
  c->r[0]=c->r[6]+c->r[0]; // 800F5AAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5AB0
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F5AB4
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F5AB8
  c->r[0]=c->r[6]+c->r[0]; // 800F5ABC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5AC0
  c->r[3]=c->r[3]+c->r[5]; // 800F5AC4
  c->r[4]=c->r[4]+c->r[5]; // 800F5AC8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F5ACC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5A9C; } // 800F5AD0
  return; // 800F5AD4
}

// fn_800F5AD8
void f_800F5AD8(Ctx* __restrict c) {
  c->r[10]=0u+0x00000002u; // 800F5AD8
  c->r[6]=0u+0x7F7F0000u; // 800F5ADC
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F5AE0
L_800F5AE4:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5AE4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5AE8
  c->r[7]=c->r[0]&c->r[9]; // 800F5AEC
  c->r[0]=R32(c->r[3]+0x00000003u); // 800F5AF0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5AF4
  c->r[11]=c->r[0]&c->r[9]; // 800F5AF8
  c->r[8]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F5AFC
  c->r[6]=rotl(c->r[11],8)&0x000000FFu; // 800F5B00
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 800F5B04
  c->r[0]=rotl(c->r[11],16)&0x0000FFFFu; // 800F5B08
  c->r[6]=c->r[8]+c->r[6]; // 800F5B0C
  c->r[0]=c->r[7]+c->r[0]; // 800F5B10
  c->r[0]=c->r[6]+c->r[0]; // 800F5B14
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5B18
  c->r[0]=R16(c->r[3]+0x00000007u); // 800F5B1C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5B20
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F5B24
  c->r[7]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F5B28
  c->r[6]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F5B2C
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 800F5B30
  c->r[6]=c->r[7]+c->r[6]; // 800F5B34
  c->r[0]=c->r[0]+c->r[8]; // 800F5B38
  c->r[0]=c->r[6]+c->r[0]; // 800F5B3C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5B40
  c->r[3]=c->r[3]+c->r[5]; // 800F5B44
  c->r[4]=c->r[4]+c->r[5]; // 800F5B48
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F5B4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5AE4; } // 800F5B50
  return; // 800F5B54
}

// fn_800F5B58
void f_800F5B58(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F5B58
L_800F5B5C:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F5B5C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5B60
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F5B64
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F5B68
  c->r[0]=c->r[6]+c->r[0]; // 800F5B6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5B70
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F5B74
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F5B78
  c->r[0]=c->r[6]+c->r[0]; // 800F5B7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5B80
  c->r[3]=c->r[3]+c->r[5]; // 800F5B84
  c->r[4]=c->r[4]+c->r[5]; // 800F5B88
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F5B8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5B5C; } // 800F5B90
  return; // 800F5B94
}

// fn_800F5B98
void f_800F5B98(Ctx* __restrict c) {
  c->r[8]=0u+0x00000002u; // 800F5B98
  c->r[6]=0u+0x7F7F0000u; // 800F5B9C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5BA0
L_800F5BA4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5BA4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5BA8
  c->r[10]=c->r[0]&c->r[7]; // 800F5BAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5BB0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5BB4
  c->r[9]=c->r[0]&c->r[7]; // 800F5BB8
  c->r[0]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F5BBC
  c->r[6]=rotl(c->r[9],8)&0x000000FFu; // 800F5BC0
  c->r[0]=c->r[10]+c->r[0]; // 800F5BC4
  c->r[0]=c->r[6]+c->r[0]; // 800F5BC8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5BCC
  c->r[6]=R8(c->r[3]+0x00000008u); // 800F5BD0
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F5BD4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F5BD8
  c->r[0]=c->r[9]+c->r[0]; // 800F5BDC
  c->r[0]=c->r[6]+c->r[0]; // 800F5BE0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5BE4
  c->r[3]=c->r[3]+c->r[5]; // 800F5BE8
  c->r[4]=c->r[4]+c->r[5]; // 800F5BEC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F5BF0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5BA4; } // 800F5BF4
  return; // 800F5BF8
}

// fn_800F5BFC
void f_800F5BFC(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F5BFC
L_800F5C00:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5C00
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5C04
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5C08
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5C0C
  c->r[3]=c->r[3]+c->r[5]; // 800F5C10
  c->r[4]=c->r[4]+c->r[5]; // 800F5C14
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F5C18
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5C00; } // 800F5C1C
  return; // 800F5C20
}

// fn_800F5C24
void f_800F5C24(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F5C24
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F5C28
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F5C2C
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5C30
  c->r[7]=0u+0x7F7F0000u; // 800F5C34
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F5C38
  c->r[9]=c->r[8]&c->r[0]; // 800F5C3C
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5C40
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F5C44
  c->r[7]=c->r[9]+c->r[7]; // 800F5C48
  c->r[7]=c->r[8]+c->r[7]; // 800F5C4C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5C50
  c->r[7]=c->r[7]&c->r[0]; // 800F5C54
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F5C58
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5C5C
  c->r[10]=c->r[8]&c->r[0]; // 800F5C60
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F5C64
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F5C68
  c->r[8]=c->r[10]+c->r[8]; // 800F5C6C
  c->r[8]=c->r[9]+c->r[8]; // 800F5C70
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5C74
  c->r[12]=c->r[8]&c->r[0]; // 800F5C78
  c->r[9]=c->r[3]+c->r[5]; // 800F5C7C
L_800F5C80:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 800F5C80
  c->r[3]=R32(c->r[9]+0x00000001u); // 800F5C84
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5C88
  c->r[11]=c->r[3]&c->r[0]; // 800F5C8C
  c->r[3]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F5C90
  c->r[8]=rotl(c->r[8],23)&0xFF000000u; // 800F5C94
  c->r[3]=c->r[11]+c->r[3]; // 800F5C98
  c->r[3]=c->r[8]+c->r[3]; // 800F5C9C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5CA0
  c->r[8]=c->r[3]&c->r[0]; // 800F5CA4
  c->r[3]=c->r[7]+c->r[8]; // 800F5CA8
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F5CAC
  c->r[7]=c->r[8]|c->r[8]; // 800F5CB0
  c->r[3]=R32(c->r[9]+0x00000005u); // 800F5CB4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5CB8
  c->r[10]=c->r[3]&c->r[0]; // 800F5CBC
  c->r[3]=rotl(c->r[11],24)&0xFF000000u; // 800F5CC0
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F5CC4
  c->r[3]=c->r[10]+c->r[3]; // 800F5CC8
  c->r[3]=c->r[8]+c->r[3]; // 800F5CCC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5CD0
  c->r[8]=c->r[3]&c->r[0]; // 800F5CD4
  c->r[3]=c->r[12]+c->r[8]; // 800F5CD8
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F5CDC
  c->r[12]=c->r[8]|c->r[8]; // 800F5CE0
  c->r[9]=c->r[9]+c->r[5]; // 800F5CE4
  c->r[4]=c->r[4]+c->r[5]; // 800F5CE8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F5CEC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5C80; } // 800F5CF0
  return; // 800F5CF4
}

// fn_800F5CF8
void f_800F5CF8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F5CF8
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F5CFC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F5D00
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F5D04
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5D08
  c->r[0]=c->r[6]+c->r[0]; // 800F5D0C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5D10
  c->r[6]=0u+0x7F7F0000u; // 800F5D14
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5D18
  c->r[10]=c->r[0]&c->r[7]; // 800F5D1C
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F5D20
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F5D24
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5D28
  c->r[0]=c->r[6]+c->r[0]; // 800F5D2C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5D30
  c->r[11]=c->r[0]&c->r[7]; // 800F5D34
  c->r[6]=c->r[3]+c->r[5]; // 800F5D38
L_800F5D3C:;
  c->r[9]=R32(c->r[6]+0x00000001u); // 800F5D3C
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F5D40
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F5D44
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5D48
  c->r[0]=c->r[3]+c->r[0]; // 800F5D4C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5D50
  c->r[3]=c->r[0]&c->r[7]; // 800F5D54
  c->r[0]=c->r[10]+c->r[3]; // 800F5D58
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5D5C
  c->r[10]=c->r[3]|c->r[3]; // 800F5D60
  c->r[3]=rotl(c->r[9],24)&0xFF000000u; // 800F5D64
  c->r[0]=R32(c->r[6]+0x00000005u); // 800F5D68
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F5D6C
  c->r[0]=c->r[3]+c->r[0]; // 800F5D70
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5D74
  c->r[3]=c->r[0]&c->r[7]; // 800F5D78
  c->r[0]=c->r[11]+c->r[3]; // 800F5D7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5D80
  c->r[11]=c->r[3]|c->r[3]; // 800F5D84
  c->r[6]=c->r[6]+c->r[5]; // 800F5D88
  c->r[4]=c->r[4]+c->r[5]; // 800F5D8C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F5D90
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5D3C; } // 800F5D94
  return; // 800F5D98
}

// fn_800F5D9C
void f_800F5D9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5DA0
  c->r[6]=0u+0x00000004u; // 800F5DA4
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F5DA8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5DAC
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F5DB0
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F5DB4
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5DB8
  c->r[7]=0u+0x7F7F0000u; // 800F5DBC
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F5DC0
  c->r[12]=c->r[8]&c->r[0]; // 800F5DC4
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5DC8
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F5DCC
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F5DD0
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F5DD4
  c->r[8]=c->r[10]+c->r[8]; // 800F5DD8
  c->r[7]=c->r[9]+c->r[7]; // 800F5DDC
  c->r[7]=c->r[8]+c->r[7]; // 800F5DE0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5DE4
  c->r[7]=c->r[7]&c->r[0]; // 800F5DE8
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F5DEC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5DF0
  c->r[8]=c->r[8]&c->r[0]; // 800F5DF4
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F5DF8
  c->r[9]=rotl(c->r[8],16)&0x0000FFFFu; // 800F5DFC
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F5E00
  c->r[8]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F5E04
  c->r[9]=c->r[11]+c->r[9]; // 800F5E08
  c->r[8]=c->r[10]+c->r[8]; // 800F5E0C
  c->r[8]=c->r[9]+c->r[8]; // 800F5E10
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5E14
  c->r[8]=c->r[8]&c->r[0]; // 800F5E18
  c->r[3]=c->r[3]+c->r[5]; // 800F5E1C
L_800F5E20:;
  c->r[9]=R16(c->r[3]+0x00000000u); // 800F5E20
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5E24
  c->r[11]=c->r[9]&0x00007F7Fu; cr0(c,c->r[11]); // 800F5E28
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F5E2C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5E30
  c->r[31]=c->r[9]&c->r[0]; // 800F5E34
  c->r[12]=rotl(c->r[11],16)&0xFFFF0000u; // 800F5E38
  c->r[10]=rotl(c->r[31],16)&0x0000FFFFu; // 800F5E3C
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F5E40
  c->r[9]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F5E44
  c->r[10]=c->r[12]+c->r[10]; // 800F5E48
  c->r[9]=c->r[11]+c->r[9]; // 800F5E4C
  c->r[9]=c->r[10]+c->r[9]; // 800F5E50
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5E54
  c->r[9]=c->r[9]&c->r[0]; // 800F5E58
  c->r[7]=c->r[7]+c->r[9]; // 800F5E5C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F5E60
  c->r[7]=c->r[9]|c->r[9]; // 800F5E64
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F5E68
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5E6C
  c->r[9]=c->r[9]&c->r[0]; // 800F5E70
  c->r[12]=rotl(c->r[31],16)&0xFFFF0000u; // 800F5E74
  c->r[10]=rotl(c->r[9],16)&0x0000FFFFu; // 800F5E78
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F5E7C
  c->r[9]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F5E80
  c->r[10]=c->r[12]+c->r[10]; // 800F5E84
  c->r[9]=c->r[11]+c->r[9]; // 800F5E88
  c->r[9]=c->r[10]+c->r[9]; // 800F5E8C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F5E90
  c->r[9]=c->r[9]&c->r[0]; // 800F5E94
  c->r[8]=c->r[8]+c->r[9]; // 800F5E98
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F5E9C
  c->r[8]=c->r[9]|c->r[9]; // 800F5EA0
  c->r[3]=c->r[3]+c->r[5]; // 800F5EA4
  c->r[4]=c->r[4]+c->r[5]; // 800F5EA8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F5EAC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5E20; } // 800F5EB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5EB4
  c->r[1]=c->r[1]+0x00000010u; // 800F5EB8
  return; // 800F5EBC
}

// fn_800F5EC0
void f_800F5EC0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F5EC0
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F5EC4
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F5EC8
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F5ECC
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F5ED0
  c->r[0]=c->r[6]+c->r[0]; // 800F5ED4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5ED8
  c->r[6]=0u+0x7F7F0000u; // 800F5EDC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F5EE0
  c->r[10]=c->r[0]&c->r[7]; // 800F5EE4
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5EE8
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F5EEC
  c->r[0]=c->r[6]+c->r[0]; // 800F5EF0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5EF4
  c->r[11]=c->r[0]&c->r[7]; // 800F5EF8
  c->r[6]=c->r[3]+c->r[5]; // 800F5EFC
L_800F5F00:;
  c->r[9]=R32(c->r[6]+0x00000002u); // 800F5F00
  c->r[0]=R16(c->r[6]+0x00000000u); // 800F5F04
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F5F08
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F5F0C
  c->r[0]=c->r[3]+c->r[0]; // 800F5F10
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5F14
  c->r[3]=c->r[0]&c->r[7]; // 800F5F18
  c->r[0]=c->r[10]+c->r[3]; // 800F5F1C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5F20
  c->r[10]=c->r[3]|c->r[3]; // 800F5F24
  c->r[3]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5F28
  c->r[0]=R16(c->r[6]+0x00000006u); // 800F5F2C
  c->r[0]=c->r[3]+c->r[0]; // 800F5F30
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5F34
  c->r[3]=c->r[0]&c->r[7]; // 800F5F38
  c->r[0]=c->r[11]+c->r[3]; // 800F5F3C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5F40
  c->r[11]=c->r[3]|c->r[3]; // 800F5F44
  c->r[6]=c->r[6]+c->r[5]; // 800F5F48
  c->r[4]=c->r[4]+c->r[5]; // 800F5F4C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F5F50
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5F00; } // 800F5F54
  return; // 800F5F58
}

// fn_800F5F5C
void f_800F5F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5F60
  c->r[6]=0u+0x00000004u; // 800F5F64
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F5F68
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F5F6C
  c->r[7]=0u+0x7F7F0000u; // 800F5F70
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F5F74
  c->r[9]=c->r[8]&c->r[0]; // 800F5F78
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F5F7C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5F80
  c->r[11]=c->r[7]&c->r[0]; // 800F5F84
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F5F88
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F5F8C
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F5F90
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F5F94
  c->r[8]=c->r[10]+c->r[8]; // 800F5F98
  c->r[7]=c->r[9]+c->r[7]; // 800F5F9C
  c->r[7]=c->r[8]+c->r[7]; // 800F5FA0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F5FA4
  c->r[7]=c->r[7]&c->r[0]; // 800F5FA8
  c->r[8]=R16(c->r[3]+0x00000007u); // 800F5FAC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5FB0
  c->r[12]=c->r[8]&0x00007F7Fu; cr0(c,c->r[12]); // 800F5FB4
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F5FB8
  c->r[9]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F5FBC
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F5FC0
  c->r[9]=c->r[10]+c->r[9]; // 800F5FC4
  c->r[8]=c->r[8]+c->r[12]; // 800F5FC8
  c->r[8]=c->r[9]+c->r[8]; // 800F5FCC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F5FD0
  c->r[8]=c->r[8]&c->r[0]; // 800F5FD4
  c->r[12]=c->r[3]+c->r[5]; // 800F5FD8
L_800F5FDC:;
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F5FDC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5FE0
  c->r[10]=c->r[3]&c->r[0]; // 800F5FE4
  c->r[3]=R32(c->r[12]+0x00000003u); // 800F5FE8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F5FEC
  c->r[31]=c->r[3]&c->r[0]; // 800F5FF0
  c->r[11]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F5FF4
  c->r[9]=rotl(c->r[31],8)&0x000000FFu; // 800F5FF8
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F5FFC
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F6000
  c->r[9]=c->r[11]+c->r[9]; // 800F6004
  c->r[3]=c->r[10]+c->r[3]; // 800F6008
  c->r[3]=c->r[9]+c->r[3]; // 800F600C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6010
  c->r[9]=c->r[3]&c->r[0]; // 800F6014
  c->r[3]=c->r[7]+c->r[9]; // 800F6018
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F601C
  c->r[7]=c->r[9]|c->r[9]; // 800F6020
  c->r[3]=R16(c->r[12]+0x00000007u); // 800F6024
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6028
  c->r[11]=c->r[3]&0x00007F7Fu; cr0(c,c->r[11]); // 800F602C
  c->r[10]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F6030
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F6034
  c->r[3]=rotl(c->r[31],16)&0xFFFF0000u; // 800F6038
  c->r[9]=c->r[10]+c->r[9]; // 800F603C
  c->r[3]=c->r[3]+c->r[11]; // 800F6040
  c->r[3]=c->r[9]+c->r[3]; // 800F6044
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6048
  c->r[9]=c->r[3]&c->r[0]; // 800F604C
  c->r[3]=c->r[8]+c->r[9]; // 800F6050
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F6054
  c->r[8]=c->r[9]|c->r[9]; // 800F6058
  c->r[12]=c->r[12]+c->r[5]; // 800F605C
  c->r[4]=c->r[4]+c->r[5]; // 800F6060
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6064
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5FDC; } // 800F6068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F606C
  c->r[1]=c->r[1]+0x00000010u; // 800F6070
  return; // 800F6074
}

// fn_800F6078
void f_800F6078(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F6078
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F607C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6080
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F6084
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F6088
  c->r[0]=c->r[6]+c->r[0]; // 800F608C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6090
  c->r[6]=0u+0x7F7F0000u; // 800F6094
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6098
  c->r[10]=c->r[0]&c->r[7]; // 800F609C
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F60A0
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F60A4
  c->r[0]=c->r[6]+c->r[0]; // 800F60A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F60AC
  c->r[11]=c->r[0]&c->r[7]; // 800F60B0
  c->r[6]=c->r[3]+c->r[5]; // 800F60B4
L_800F60B8:;
  c->r[9]=R32(c->r[6]+0x00000003u); // 800F60B8
  c->r[0]=R32(c->r[6]+0xFFFFFFFFu); // 800F60BC
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F60C0
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F60C4
  c->r[0]=c->r[3]+c->r[0]; // 800F60C8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F60CC
  c->r[3]=c->r[0]&c->r[7]; // 800F60D0
  c->r[0]=c->r[10]+c->r[3]; // 800F60D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F60D8
  c->r[10]=c->r[3]|c->r[3]; // 800F60DC
  c->r[3]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F60E0
  c->r[0]=R8(c->r[6]+0x00000007u); // 800F60E4
  c->r[0]=c->r[3]+c->r[0]; // 800F60E8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F60EC
  c->r[3]=c->r[0]&c->r[7]; // 800F60F0
  c->r[0]=c->r[11]+c->r[3]; // 800F60F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F60F8
  c->r[11]=c->r[3]|c->r[3]; // 800F60FC
  c->r[6]=c->r[6]+c->r[5]; // 800F6100
  c->r[4]=c->r[4]+c->r[5]; // 800F6104
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6108
  if (!crb(c,2)) { IRQCHK(c); goto L_800F60B8; } // 800F610C
  return; // 800F6110
}

// fn_800F6114
void f_800F6114(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F6114
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6118
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F611C
  c->r[7]=0u+0x7F7F0000u; // 800F6120
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F6124
  c->r[9]=c->r[8]&c->r[0]; // 800F6128
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F612C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6130
  c->r[10]=c->r[7]&c->r[0]; // 800F6134
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F6138
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F613C
  c->r[7]=c->r[9]+c->r[7]; // 800F6140
  c->r[7]=c->r[8]+c->r[7]; // 800F6144
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6148
  c->r[7]=c->r[7]&c->r[0]; // 800F614C
  c->r[9]=R8(c->r[3]+0x00000008u); // 800F6150
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F6154
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6158
  c->r[8]=c->r[10]+c->r[8]; // 800F615C
  c->r[8]=c->r[9]+c->r[8]; // 800F6160
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6164
  c->r[12]=c->r[8]&c->r[0]; // 800F6168
  c->r[9]=c->r[3]+c->r[5]; // 800F616C
L_800F6170:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 800F6170
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6174
  c->r[11]=c->r[3]&c->r[0]; // 800F6178
  c->r[3]=R32(c->r[9]+0x00000004u); // 800F617C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6180
  c->r[10]=c->r[3]&c->r[0]; // 800F6184
  c->r[3]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F6188
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F618C
  c->r[3]=c->r[11]+c->r[3]; // 800F6190
  c->r[3]=c->r[8]+c->r[3]; // 800F6194
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6198
  c->r[8]=c->r[3]&c->r[0]; // 800F619C
  c->r[3]=c->r[7]+c->r[8]; // 800F61A0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F61A4
  c->r[7]=c->r[8]|c->r[8]; // 800F61A8
  c->r[8]=R8(c->r[9]+0x00000008u); // 800F61AC
  c->r[3]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F61B0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F61B4
  c->r[3]=c->r[10]+c->r[3]; // 800F61B8
  c->r[3]=c->r[8]+c->r[3]; // 800F61BC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F61C0
  c->r[8]=c->r[3]&c->r[0]; // 800F61C4
  c->r[3]=c->r[12]+c->r[8]; // 800F61C8
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F61CC
  c->r[12]=c->r[8]|c->r[8]; // 800F61D0
  c->r[9]=c->r[9]+c->r[5]; // 800F61D4
  c->r[4]=c->r[4]+c->r[5]; // 800F61D8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F61DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6170; } // 800F61E0
  return; // 800F61E4
}

// fn_800F61E8
void f_800F61E8(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F61E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F61EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F61F0
  c->r[6]=0u+0x7F7F0000u; // 800F61F4
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F61F8
  c->r[10]=c->r[0]&c->r[6]; // 800F61FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6200
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6204
  c->r[9]=c->r[0]&c->r[6]; // 800F6208
  c->r[3]=c->r[3]+c->r[5]; // 800F620C
L_800F6210:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6210
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6214
  c->r[8]=c->r[0]&c->r[6]; // 800F6218
  c->r[0]=c->r[10]+c->r[8]; // 800F621C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6220
  c->r[10]=c->r[8]|c->r[8]; // 800F6224
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6228
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F622C
  c->r[8]=c->r[0]&c->r[6]; // 800F6230
  c->r[0]=c->r[9]+c->r[8]; // 800F6234
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6238
  c->r[9]=c->r[8]|c->r[8]; // 800F623C
  c->r[3]=c->r[3]+c->r[5]; // 800F6240
  c->r[4]=c->r[4]+c->r[5]; // 800F6244
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6248
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6210; } // 800F624C
  return; // 800F6250
}

// fn_800F6254
void f_800F6254(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F6254
  c->r[6]=0u+0x7F7F0000u; // 800F6258
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F625C
L_800F6260:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F6260
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F6264
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6268
  c->r[10]=c->r[0]&c->r[7]; // 800F626C
  c->r[0]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F6270
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F6274
  c->r[0]=c->r[10]+c->r[0]; // 800F6278
  c->r[0]=c->r[6]+c->r[0]; // 800F627C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6280
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F6284
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6288
  c->r[9]=c->r[0]&c->r[7]; // 800F628C
  c->r[0]=rotl(c->r[10],24)&0xFF000000u; // 800F6290
  c->r[6]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6294
  c->r[0]=c->r[9]+c->r[0]; // 800F6298
  c->r[0]=c->r[6]+c->r[0]; // 800F629C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F62A0
  c->r[3]=c->r[3]+c->r[5]; // 800F62A4
  c->r[4]=c->r[4]+c->r[5]; // 800F62A8
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F62AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6260; } // 800F62B0
  return; // 800F62B4
}

// fn_800F62B8
void f_800F62B8(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F62B8
L_800F62BC:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F62BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F62C0
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F62C4
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F62C8
  c->r[0]=c->r[6]+c->r[0]; // 800F62CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F62D0
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F62D4
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F62D8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F62DC
  c->r[0]=c->r[6]+c->r[0]; // 800F62E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F62E4
  c->r[3]=c->r[3]+c->r[5]; // 800F62E8
  c->r[4]=c->r[4]+c->r[5]; // 800F62EC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F62F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F62BC; } // 800F62F4
  return; // 800F62F8
}

// fn_800F62FC
void f_800F62FC(Ctx* __restrict c) {
  c->r[10]=0u+0x00000004u; // 800F62FC
  c->r[6]=0u+0x7F7F0000u; // 800F6300
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F6304
L_800F6308:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6308
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F630C
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F6310
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F6314
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6318
  c->r[11]=c->r[0]&c->r[9]; // 800F631C
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F6320
  c->r[6]=rotl(c->r[11],16)&0x0000FFFFu; // 800F6324
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F6328
  c->r[0]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F632C
  c->r[6]=c->r[8]+c->r[6]; // 800F6330
  c->r[0]=c->r[7]+c->r[0]; // 800F6334
  c->r[0]=c->r[6]+c->r[0]; // 800F6338
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F633C
  c->r[0]=R32(c->r[3]+0x00000006u); // 800F6340
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6344
  c->r[0]=c->r[0]&c->r[9]; // 800F6348
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F634C
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F6350
  c->r[7]=rotl(c->r[11],24)&0xFF000000u; // 800F6354
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6358
  c->r[6]=c->r[8]+c->r[6]; // 800F635C
  c->r[0]=c->r[7]+c->r[0]; // 800F6360
  c->r[0]=c->r[6]+c->r[0]; // 800F6364
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6368
  c->r[3]=c->r[3]+c->r[5]; // 800F636C
  c->r[4]=c->r[4]+c->r[5]; // 800F6370
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F6374
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6308; } // 800F6378
  return; // 800F637C
}

// fn_800F6380
void f_800F6380(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F6380
L_800F6384:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F6384
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6388
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F638C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F6390
  c->r[0]=c->r[6]+c->r[0]; // 800F6394
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6398
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F639C
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F63A0
  c->r[0]=c->r[6]+c->r[0]; // 800F63A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F63A8
  c->r[3]=c->r[3]+c->r[5]; // 800F63AC
  c->r[4]=c->r[4]+c->r[5]; // 800F63B0
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F63B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6384; } // 800F63B8
  return; // 800F63BC
}

// fn_800F63C0
void f_800F63C0(Ctx* __restrict c) {
  c->r[10]=0u+0x00000004u; // 800F63C0
  c->r[6]=0u+0x7F7F0000u; // 800F63C4
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F63C8
L_800F63CC:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F63CC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F63D0
  c->r[7]=c->r[0]&c->r[9]; // 800F63D4
  c->r[0]=R32(c->r[3]+0x00000003u); // 800F63D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F63DC
  c->r[11]=c->r[0]&c->r[9]; // 800F63E0
  c->r[8]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F63E4
  c->r[6]=rotl(c->r[11],8)&0x000000FFu; // 800F63E8
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 800F63EC
  c->r[0]=rotl(c->r[11],16)&0x0000FFFFu; // 800F63F0
  c->r[6]=c->r[8]+c->r[6]; // 800F63F4
  c->r[0]=c->r[7]+c->r[0]; // 800F63F8
  c->r[0]=c->r[6]+c->r[0]; // 800F63FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6400
  c->r[0]=R16(c->r[3]+0x00000007u); // 800F6404
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6408
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F640C
  c->r[7]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F6410
  c->r[6]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F6414
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 800F6418
  c->r[6]=c->r[7]+c->r[6]; // 800F641C
  c->r[0]=c->r[0]+c->r[8]; // 800F6420
  c->r[0]=c->r[6]+c->r[0]; // 800F6424
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6428
  c->r[3]=c->r[3]+c->r[5]; // 800F642C
  c->r[4]=c->r[4]+c->r[5]; // 800F6430
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F6434
  if (!crb(c,2)) { IRQCHK(c); goto L_800F63CC; } // 800F6438
  return; // 800F643C
}

// fn_800F6440
void f_800F6440(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F6440
L_800F6444:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F6444
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6448
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F644C
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F6450
  c->r[0]=c->r[6]+c->r[0]; // 800F6454
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6458
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F645C
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F6460
  c->r[0]=c->r[6]+c->r[0]; // 800F6464
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6468
  c->r[3]=c->r[3]+c->r[5]; // 800F646C
  c->r[4]=c->r[4]+c->r[5]; // 800F6470
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6474
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6444; } // 800F6478
  return; // 800F647C
}

// fn_800F6480
void f_800F6480(Ctx* __restrict c) {
  c->r[8]=0u+0x00000004u; // 800F6480
  c->r[6]=0u+0x7F7F0000u; // 800F6484
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6488
L_800F648C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F648C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6490
  c->r[10]=c->r[0]&c->r[7]; // 800F6494
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6498
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F649C
  c->r[9]=c->r[0]&c->r[7]; // 800F64A0
  c->r[0]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F64A4
  c->r[6]=rotl(c->r[9],8)&0x000000FFu; // 800F64A8
  c->r[0]=c->r[10]+c->r[0]; // 800F64AC
  c->r[0]=c->r[6]+c->r[0]; // 800F64B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F64B4
  c->r[6]=R8(c->r[3]+0x00000008u); // 800F64B8
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F64BC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F64C0
  c->r[0]=c->r[9]+c->r[0]; // 800F64C4
  c->r[0]=c->r[6]+c->r[0]; // 800F64C8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F64CC
  c->r[3]=c->r[3]+c->r[5]; // 800F64D0
  c->r[4]=c->r[4]+c->r[5]; // 800F64D4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F64D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F648C; } // 800F64DC
  return; // 800F64E0
}

// fn_800F64E4
void f_800F64E4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F64E4
L_800F64E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F64E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F64EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F64F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F64F4
  c->r[3]=c->r[3]+c->r[5]; // 800F64F8
  c->r[4]=c->r[4]+c->r[5]; // 800F64FC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6500
  if (!crb(c,2)) { IRQCHK(c); goto L_800F64E8; } // 800F6504
  return; // 800F6508
}

// fn_800F650C
void f_800F650C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F650C
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F6510
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F6514
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6518
  c->r[7]=0u+0x7F7F0000u; // 800F651C
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F6520
  c->r[9]=c->r[8]&c->r[0]; // 800F6524
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6528
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F652C
  c->r[7]=c->r[9]+c->r[7]; // 800F6530
  c->r[7]=c->r[8]+c->r[7]; // 800F6534
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6538
  c->r[7]=c->r[7]&c->r[0]; // 800F653C
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F6540
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6544
  c->r[10]=c->r[8]&c->r[0]; // 800F6548
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F654C
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F6550
  c->r[8]=c->r[10]+c->r[8]; // 800F6554
  c->r[8]=c->r[9]+c->r[8]; // 800F6558
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F655C
  c->r[12]=c->r[8]&c->r[0]; // 800F6560
  c->r[9]=c->r[3]+c->r[5]; // 800F6564
L_800F6568:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 800F6568
  c->r[3]=R32(c->r[9]+0x00000001u); // 800F656C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6570
  c->r[11]=c->r[3]&c->r[0]; // 800F6574
  c->r[3]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F6578
  c->r[8]=rotl(c->r[8],23)&0xFF000000u; // 800F657C
  c->r[3]=c->r[11]+c->r[3]; // 800F6580
  c->r[3]=c->r[8]+c->r[3]; // 800F6584
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6588
  c->r[8]=c->r[3]&c->r[0]; // 800F658C
  c->r[3]=c->r[7]+c->r[8]; // 800F6590
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F6594
  c->r[7]=c->r[8]|c->r[8]; // 800F6598
  c->r[3]=R32(c->r[9]+0x00000005u); // 800F659C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F65A0
  c->r[10]=c->r[3]&c->r[0]; // 800F65A4
  c->r[3]=rotl(c->r[11],24)&0xFF000000u; // 800F65A8
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F65AC
  c->r[3]=c->r[10]+c->r[3]; // 800F65B0
  c->r[3]=c->r[8]+c->r[3]; // 800F65B4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F65B8
  c->r[8]=c->r[3]&c->r[0]; // 800F65BC
  c->r[3]=c->r[12]+c->r[8]; // 800F65C0
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F65C4
  c->r[12]=c->r[8]|c->r[8]; // 800F65C8
  c->r[9]=c->r[9]+c->r[5]; // 800F65CC
  c->r[4]=c->r[4]+c->r[5]; // 800F65D0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F65D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6568; } // 800F65D8
  return; // 800F65DC
}

// fn_800F65E0
void f_800F65E0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F65E0
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F65E4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F65E8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F65EC
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F65F0
  c->r[0]=c->r[6]+c->r[0]; // 800F65F4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F65F8
  c->r[6]=0u+0x7F7F0000u; // 800F65FC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6600
  c->r[10]=c->r[0]&c->r[7]; // 800F6604
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F6608
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F660C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6610
  c->r[0]=c->r[6]+c->r[0]; // 800F6614
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6618
  c->r[11]=c->r[0]&c->r[7]; // 800F661C
  c->r[6]=c->r[3]+c->r[5]; // 800F6620
L_800F6624:;
  c->r[9]=R32(c->r[6]+0x00000001u); // 800F6624
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F6628
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F662C
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6630
  c->r[0]=c->r[3]+c->r[0]; // 800F6634
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6638
  c->r[3]=c->r[0]&c->r[7]; // 800F663C
  c->r[0]=c->r[10]+c->r[3]; // 800F6640
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6644
  c->r[10]=c->r[3]|c->r[3]; // 800F6648
  c->r[3]=rotl(c->r[9],24)&0xFF000000u; // 800F664C
  c->r[0]=R32(c->r[6]+0x00000005u); // 800F6650
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6654
  c->r[0]=c->r[3]+c->r[0]; // 800F6658
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F665C
  c->r[3]=c->r[0]&c->r[7]; // 800F6660
  c->r[0]=c->r[11]+c->r[3]; // 800F6664
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6668
  c->r[11]=c->r[3]|c->r[3]; // 800F666C
  c->r[6]=c->r[6]+c->r[5]; // 800F6670
  c->r[4]=c->r[4]+c->r[5]; // 800F6674
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6678
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6624; } // 800F667C
  return; // 800F6680
}

// fn_800F6684
void f_800F6684(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6688
  c->r[6]=0u+0x00000008u; // 800F668C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6690
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6694
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F6698
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F669C
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F66A0
  c->r[7]=0u+0x7F7F0000u; // 800F66A4
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F66A8
  c->r[12]=c->r[8]&c->r[0]; // 800F66AC
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F66B0
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F66B4
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F66B8
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F66BC
  c->r[8]=c->r[10]+c->r[8]; // 800F66C0
  c->r[7]=c->r[9]+c->r[7]; // 800F66C4
  c->r[7]=c->r[8]+c->r[7]; // 800F66C8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F66CC
  c->r[7]=c->r[7]&c->r[0]; // 800F66D0
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F66D4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F66D8
  c->r[8]=c->r[8]&c->r[0]; // 800F66DC
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F66E0
  c->r[9]=rotl(c->r[8],16)&0x0000FFFFu; // 800F66E4
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F66E8
  c->r[8]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F66EC
  c->r[9]=c->r[11]+c->r[9]; // 800F66F0
  c->r[8]=c->r[10]+c->r[8]; // 800F66F4
  c->r[8]=c->r[9]+c->r[8]; // 800F66F8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F66FC
  c->r[8]=c->r[8]&c->r[0]; // 800F6700
  c->r[3]=c->r[3]+c->r[5]; // 800F6704
L_800F6708:;
  c->r[9]=R16(c->r[3]+0x00000000u); // 800F6708
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F670C
  c->r[11]=c->r[9]&0x00007F7Fu; cr0(c,c->r[11]); // 800F6710
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F6714
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6718
  c->r[31]=c->r[9]&c->r[0]; // 800F671C
  c->r[12]=rotl(c->r[11],16)&0xFFFF0000u; // 800F6720
  c->r[10]=rotl(c->r[31],16)&0x0000FFFFu; // 800F6724
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F6728
  c->r[9]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F672C
  c->r[10]=c->r[12]+c->r[10]; // 800F6730
  c->r[9]=c->r[11]+c->r[9]; // 800F6734
  c->r[9]=c->r[10]+c->r[9]; // 800F6738
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F673C
  c->r[9]=c->r[9]&c->r[0]; // 800F6740
  c->r[7]=c->r[7]+c->r[9]; // 800F6744
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F6748
  c->r[7]=c->r[9]|c->r[9]; // 800F674C
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F6750
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6754
  c->r[9]=c->r[9]&c->r[0]; // 800F6758
  c->r[12]=rotl(c->r[31],16)&0xFFFF0000u; // 800F675C
  c->r[10]=rotl(c->r[9],16)&0x0000FFFFu; // 800F6760
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F6764
  c->r[9]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6768
  c->r[10]=c->r[12]+c->r[10]; // 800F676C
  c->r[9]=c->r[11]+c->r[9]; // 800F6770
  c->r[9]=c->r[10]+c->r[9]; // 800F6774
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6778
  c->r[9]=c->r[9]&c->r[0]; // 800F677C
  c->r[8]=c->r[8]+c->r[9]; // 800F6780
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F6784
  c->r[8]=c->r[9]|c->r[9]; // 800F6788
  c->r[3]=c->r[3]+c->r[5]; // 800F678C
  c->r[4]=c->r[4]+c->r[5]; // 800F6790
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6794
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6708; } // 800F6798
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F679C
  c->r[1]=c->r[1]+0x00000010u; // 800F67A0
  return; // 800F67A4
}

// fn_800F67A8
void f_800F67A8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F67A8
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F67AC
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F67B0
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F67B4
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F67B8
  c->r[0]=c->r[6]+c->r[0]; // 800F67BC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F67C0
  c->r[6]=0u+0x7F7F0000u; // 800F67C4
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F67C8
  c->r[10]=c->r[0]&c->r[7]; // 800F67CC
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F67D0
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F67D4
  c->r[0]=c->r[6]+c->r[0]; // 800F67D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F67DC
  c->r[11]=c->r[0]&c->r[7]; // 800F67E0
  c->r[6]=c->r[3]+c->r[5]; // 800F67E4
L_800F67E8:;
  c->r[9]=R32(c->r[6]+0x00000002u); // 800F67E8
  c->r[0]=R16(c->r[6]+0x00000000u); // 800F67EC
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F67F0
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F67F4
  c->r[0]=c->r[3]+c->r[0]; // 800F67F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F67FC
  c->r[3]=c->r[0]&c->r[7]; // 800F6800
  c->r[0]=c->r[10]+c->r[3]; // 800F6804
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6808
  c->r[10]=c->r[3]|c->r[3]; // 800F680C
  c->r[3]=rotl(c->r[9],16)&0xFFFF0000u; // 800F6810
  c->r[0]=R16(c->r[6]+0x00000006u); // 800F6814
  c->r[0]=c->r[3]+c->r[0]; // 800F6818
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F681C
  c->r[3]=c->r[0]&c->r[7]; // 800F6820
  c->r[0]=c->r[11]+c->r[3]; // 800F6824
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6828
  c->r[11]=c->r[3]|c->r[3]; // 800F682C
  c->r[6]=c->r[6]+c->r[5]; // 800F6830
  c->r[4]=c->r[4]+c->r[5]; // 800F6834
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6838
  if (!crb(c,2)) { IRQCHK(c); goto L_800F67E8; } // 800F683C
  return; // 800F6840
}

// fn_800F6844
void f_800F6844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6848
  c->r[6]=0u+0x00000008u; // 800F684C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6850
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6854
  c->r[7]=0u+0x7F7F0000u; // 800F6858
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F685C
  c->r[9]=c->r[8]&c->r[0]; // 800F6860
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F6864
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6868
  c->r[11]=c->r[7]&c->r[0]; // 800F686C
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F6870
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F6874
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F6878
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F687C
  c->r[8]=c->r[10]+c->r[8]; // 800F6880
  c->r[7]=c->r[9]+c->r[7]; // 800F6884
  c->r[7]=c->r[8]+c->r[7]; // 800F6888
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F688C
  c->r[7]=c->r[7]&c->r[0]; // 800F6890
  c->r[8]=R16(c->r[3]+0x00000007u); // 800F6894
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6898
  c->r[12]=c->r[8]&0x00007F7Fu; cr0(c,c->r[12]); // 800F689C
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F68A0
  c->r[9]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F68A4
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F68A8
  c->r[9]=c->r[10]+c->r[9]; // 800F68AC
  c->r[8]=c->r[8]+c->r[12]; // 800F68B0
  c->r[8]=c->r[9]+c->r[8]; // 800F68B4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F68B8
  c->r[8]=c->r[8]&c->r[0]; // 800F68BC
  c->r[12]=c->r[3]+c->r[5]; // 800F68C0
L_800F68C4:;
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F68C4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F68C8
  c->r[10]=c->r[3]&c->r[0]; // 800F68CC
  c->r[3]=R32(c->r[12]+0x00000003u); // 800F68D0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F68D4
  c->r[31]=c->r[3]&c->r[0]; // 800F68D8
  c->r[11]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F68DC
  c->r[9]=rotl(c->r[31],8)&0x000000FFu; // 800F68E0
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F68E4
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F68E8
  c->r[9]=c->r[11]+c->r[9]; // 800F68EC
  c->r[3]=c->r[10]+c->r[3]; // 800F68F0
  c->r[3]=c->r[9]+c->r[3]; // 800F68F4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F68F8
  c->r[9]=c->r[3]&c->r[0]; // 800F68FC
  c->r[3]=c->r[7]+c->r[9]; // 800F6900
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F6904
  c->r[7]=c->r[9]|c->r[9]; // 800F6908
  c->r[3]=R16(c->r[12]+0x00000007u); // 800F690C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6910
  c->r[11]=c->r[3]&0x00007F7Fu; cr0(c,c->r[11]); // 800F6914
  c->r[10]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F6918
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F691C
  c->r[3]=rotl(c->r[31],16)&0xFFFF0000u; // 800F6920
  c->r[9]=c->r[10]+c->r[9]; // 800F6924
  c->r[3]=c->r[3]+c->r[11]; // 800F6928
  c->r[3]=c->r[9]+c->r[3]; // 800F692C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6930
  c->r[9]=c->r[3]&c->r[0]; // 800F6934
  c->r[3]=c->r[8]+c->r[9]; // 800F6938
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F693C
  c->r[8]=c->r[9]|c->r[9]; // 800F6940
  c->r[12]=c->r[12]+c->r[5]; // 800F6944
  c->r[4]=c->r[4]+c->r[5]; // 800F6948
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F694C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F68C4; } // 800F6950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6954
  c->r[1]=c->r[1]+0x00000010u; // 800F6958
  return; // 800F695C
}

// fn_800F6960
void f_800F6960(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F6960
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F6964
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6968
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F696C
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F6970
  c->r[0]=c->r[6]+c->r[0]; // 800F6974
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6978
  c->r[6]=0u+0x7F7F0000u; // 800F697C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6980
  c->r[10]=c->r[0]&c->r[7]; // 800F6984
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F6988
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F698C
  c->r[0]=c->r[6]+c->r[0]; // 800F6990
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6994
  c->r[11]=c->r[0]&c->r[7]; // 800F6998
  c->r[6]=c->r[3]+c->r[5]; // 800F699C
L_800F69A0:;
  c->r[9]=R32(c->r[6]+0x00000003u); // 800F69A0
  c->r[0]=R32(c->r[6]+0xFFFFFFFFu); // 800F69A4
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F69A8
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F69AC
  c->r[0]=c->r[3]+c->r[0]; // 800F69B0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F69B4
  c->r[3]=c->r[0]&c->r[7]; // 800F69B8
  c->r[0]=c->r[10]+c->r[3]; // 800F69BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F69C0
  c->r[10]=c->r[3]|c->r[3]; // 800F69C4
  c->r[3]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F69C8
  c->r[0]=R8(c->r[6]+0x00000007u); // 800F69CC
  c->r[0]=c->r[3]+c->r[0]; // 800F69D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F69D4
  c->r[3]=c->r[0]&c->r[7]; // 800F69D8
  c->r[0]=c->r[11]+c->r[3]; // 800F69DC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F69E0
  c->r[11]=c->r[3]|c->r[3]; // 800F69E4
  c->r[6]=c->r[6]+c->r[5]; // 800F69E8
  c->r[4]=c->r[4]+c->r[5]; // 800F69EC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F69F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F69A0; } // 800F69F4
  return; // 800F69F8
}

// fn_800F69FC
void f_800F69FC(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F69FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6A00
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6A04
  c->r[7]=0u+0x7F7F0000u; // 800F6A08
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F6A0C
  c->r[9]=c->r[8]&c->r[0]; // 800F6A10
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F6A14
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6A18
  c->r[10]=c->r[7]&c->r[0]; // 800F6A1C
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F6A20
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F6A24
  c->r[7]=c->r[9]+c->r[7]; // 800F6A28
  c->r[7]=c->r[8]+c->r[7]; // 800F6A2C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6A30
  c->r[7]=c->r[7]&c->r[0]; // 800F6A34
  c->r[9]=R8(c->r[3]+0x00000008u); // 800F6A38
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F6A3C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6A40
  c->r[8]=c->r[10]+c->r[8]; // 800F6A44
  c->r[8]=c->r[9]+c->r[8]; // 800F6A48
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6A4C
  c->r[12]=c->r[8]&c->r[0]; // 800F6A50
  c->r[9]=c->r[3]+c->r[5]; // 800F6A54
L_800F6A58:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 800F6A58
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6A5C
  c->r[11]=c->r[3]&c->r[0]; // 800F6A60
  c->r[3]=R32(c->r[9]+0x00000004u); // 800F6A64
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6A68
  c->r[10]=c->r[3]&c->r[0]; // 800F6A6C
  c->r[3]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F6A70
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F6A74
  c->r[3]=c->r[11]+c->r[3]; // 800F6A78
  c->r[3]=c->r[8]+c->r[3]; // 800F6A7C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6A80
  c->r[8]=c->r[3]&c->r[0]; // 800F6A84
  c->r[3]=c->r[7]+c->r[8]; // 800F6A88
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F6A8C
  c->r[7]=c->r[8]|c->r[8]; // 800F6A90
  c->r[8]=R8(c->r[9]+0x00000008u); // 800F6A94
  c->r[3]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F6A98
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6A9C
  c->r[3]=c->r[10]+c->r[3]; // 800F6AA0
  c->r[3]=c->r[8]+c->r[3]; // 800F6AA4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6AA8
  c->r[8]=c->r[3]&c->r[0]; // 800F6AAC
  c->r[3]=c->r[12]+c->r[8]; // 800F6AB0
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F6AB4
  c->r[12]=c->r[8]|c->r[8]; // 800F6AB8
  c->r[9]=c->r[9]+c->r[5]; // 800F6ABC
  c->r[4]=c->r[4]+c->r[5]; // 800F6AC0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6AC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6A58; } // 800F6AC8
  return; // 800F6ACC
}

// fn_800F6AD0
void f_800F6AD0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F6AD0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6AD4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6AD8
  c->r[6]=0u+0x7F7F0000u; // 800F6ADC
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F6AE0
  c->r[10]=c->r[0]&c->r[6]; // 800F6AE4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6AE8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6AEC
  c->r[9]=c->r[0]&c->r[6]; // 800F6AF0
  c->r[3]=c->r[3]+c->r[5]; // 800F6AF4
L_800F6AF8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6AF8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6AFC
  c->r[8]=c->r[0]&c->r[6]; // 800F6B00
  c->r[0]=c->r[10]+c->r[8]; // 800F6B04
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6B08
  c->r[10]=c->r[8]|c->r[8]; // 800F6B0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6B10
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6B14
  c->r[8]=c->r[0]&c->r[6]; // 800F6B18
  c->r[0]=c->r[9]+c->r[8]; // 800F6B1C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6B20
  c->r[9]=c->r[8]|c->r[8]; // 800F6B24
  c->r[3]=c->r[3]+c->r[5]; // 800F6B28
  c->r[4]=c->r[4]+c->r[5]; // 800F6B2C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6B30
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6AF8; } // 800F6B34
  return; // 800F6B38
}

// fn_800F6B3C
void f_800F6B3C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F6B3C
  c->r[6]=0u+0x7F7F0000u; // 800F6B40
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6B44
L_800F6B48:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F6B48
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F6B4C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6B50
  c->r[10]=c->r[0]&c->r[7]; // 800F6B54
  c->r[0]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F6B58
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F6B5C
  c->r[0]=c->r[10]+c->r[0]; // 800F6B60
  c->r[0]=c->r[6]+c->r[0]; // 800F6B64
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6B68
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F6B6C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6B70
  c->r[9]=c->r[0]&c->r[7]; // 800F6B74
  c->r[0]=rotl(c->r[10],24)&0xFF000000u; // 800F6B78
  c->r[6]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6B7C
  c->r[0]=c->r[9]+c->r[0]; // 800F6B80
  c->r[0]=c->r[6]+c->r[0]; // 800F6B84
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6B88
  c->r[3]=c->r[3]+c->r[5]; // 800F6B8C
  c->r[4]=c->r[4]+c->r[5]; // 800F6B90
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6B94
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6B48; } // 800F6B98
  return; // 800F6B9C
}

// fn_800F6BA0
void f_800F6BA0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F6BA0
L_800F6BA4:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F6BA4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F6BA8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F6BAC
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F6BB0
  c->r[0]=c->r[6]+c->r[0]; // 800F6BB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6BB8
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F6BBC
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F6BC0
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6BC4
  c->r[0]=c->r[6]+c->r[0]; // 800F6BC8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6BCC
  c->r[3]=c->r[3]+c->r[5]; // 800F6BD0
  c->r[4]=c->r[4]+c->r[5]; // 800F6BD4
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6BD8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6BA4; } // 800F6BDC
  return; // 800F6BE0
}

// fn_800F6BE4
void f_800F6BE4(Ctx* __restrict c) {
  c->r[10]=0u+0x00000008u; // 800F6BE4
  c->r[6]=0u+0x7F7F0000u; // 800F6BE8
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F6BEC
L_800F6BF0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6BF0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6BF4
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F6BF8
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F6BFC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6C00
  c->r[11]=c->r[0]&c->r[9]; // 800F6C04
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F6C08
  c->r[6]=rotl(c->r[11],16)&0x0000FFFFu; // 800F6C0C
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F6C10
  c->r[0]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F6C14
  c->r[6]=c->r[8]+c->r[6]; // 800F6C18
  c->r[0]=c->r[7]+c->r[0]; // 800F6C1C
  c->r[0]=c->r[6]+c->r[0]; // 800F6C20
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6C24
  c->r[0]=R32(c->r[3]+0x00000006u); // 800F6C28
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6C2C
  c->r[0]=c->r[0]&c->r[9]; // 800F6C30
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F6C34
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F6C38
  c->r[7]=rotl(c->r[11],24)&0xFF000000u; // 800F6C3C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6C40
  c->r[6]=c->r[8]+c->r[6]; // 800F6C44
  c->r[0]=c->r[7]+c->r[0]; // 800F6C48
  c->r[0]=c->r[6]+c->r[0]; // 800F6C4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6C50
  c->r[3]=c->r[3]+c->r[5]; // 800F6C54
  c->r[4]=c->r[4]+c->r[5]; // 800F6C58
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F6C5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6BF0; } // 800F6C60
  return; // 800F6C64
}

// fn_800F6C68
void f_800F6C68(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F6C68
L_800F6C6C:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F6C6C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6C70
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F6C74
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F6C78
  c->r[0]=c->r[6]+c->r[0]; // 800F6C7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6C80
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F6C84
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F6C88
  c->r[0]=c->r[6]+c->r[0]; // 800F6C8C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6C90
  c->r[3]=c->r[3]+c->r[5]; // 800F6C94
  c->r[4]=c->r[4]+c->r[5]; // 800F6C98
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6C9C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6C6C; } // 800F6CA0
  return; // 800F6CA4
}

// fn_800F6CA8
void f_800F6CA8(Ctx* __restrict c) {
  c->r[10]=0u+0x00000008u; // 800F6CA8
  c->r[6]=0u+0x7F7F0000u; // 800F6CAC
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F6CB0
L_800F6CB4:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6CB4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6CB8
  c->r[7]=c->r[0]&c->r[9]; // 800F6CBC
  c->r[0]=R32(c->r[3]+0x00000003u); // 800F6CC0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6CC4
  c->r[11]=c->r[0]&c->r[9]; // 800F6CC8
  c->r[8]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F6CCC
  c->r[6]=rotl(c->r[11],8)&0x000000FFu; // 800F6CD0
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 800F6CD4
  c->r[0]=rotl(c->r[11],16)&0x0000FFFFu; // 800F6CD8
  c->r[6]=c->r[8]+c->r[6]; // 800F6CDC
  c->r[0]=c->r[7]+c->r[0]; // 800F6CE0
  c->r[0]=c->r[6]+c->r[0]; // 800F6CE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6CE8
  c->r[0]=R16(c->r[3]+0x00000007u); // 800F6CEC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6CF0
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F6CF4
  c->r[7]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F6CF8
  c->r[6]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F6CFC
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 800F6D00
  c->r[6]=c->r[7]+c->r[6]; // 800F6D04
  c->r[0]=c->r[0]+c->r[8]; // 800F6D08
  c->r[0]=c->r[6]+c->r[0]; // 800F6D0C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6D10
  c->r[3]=c->r[3]+c->r[5]; // 800F6D14
  c->r[4]=c->r[4]+c->r[5]; // 800F6D18
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F6D1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6CB4; } // 800F6D20
  return; // 800F6D24
}

// fn_800F6D28
void f_800F6D28(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800F6D28
L_800F6D2C:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F6D2C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F6D30
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F6D34
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F6D38
  c->r[0]=c->r[6]+c->r[0]; // 800F6D3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6D40
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F6D44
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F6D48
  c->r[0]=c->r[6]+c->r[0]; // 800F6D4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6D50
  c->r[3]=c->r[3]+c->r[5]; // 800F6D54
  c->r[4]=c->r[4]+c->r[5]; // 800F6D58
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F6D5C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6D2C; } // 800F6D60
  return; // 800F6D64
}

// fn_800F6D68
void f_800F6D68(Ctx* __restrict c) {
  c->r[8]=0u+0x00000008u; // 800F6D68
  c->r[6]=0u+0x7F7F0000u; // 800F6D6C
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6D70
L_800F6D74:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6D74
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6D78
  c->r[10]=c->r[0]&c->r[7]; // 800F6D7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6D80
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6D84
  c->r[9]=c->r[0]&c->r[7]; // 800F6D88
  c->r[0]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F6D8C
  c->r[6]=rotl(c->r[9],8)&0x000000FFu; // 800F6D90
  c->r[0]=c->r[10]+c->r[0]; // 800F6D94
  c->r[0]=c->r[6]+c->r[0]; // 800F6D98
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6D9C
  c->r[6]=R8(c->r[3]+0x00000008u); // 800F6DA0
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F6DA4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F6DA8
  c->r[0]=c->r[9]+c->r[0]; // 800F6DAC
  c->r[0]=c->r[6]+c->r[0]; // 800F6DB0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6DB4
  c->r[3]=c->r[3]+c->r[5]; // 800F6DB8
  c->r[4]=c->r[4]+c->r[5]; // 800F6DBC
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6DC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6D74; } // 800F6DC4
  return; // 800F6DC8
}

// fn_800F6DCC
void f_800F6DCC(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800F6DCC
L_800F6DD0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6DD0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6DD4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6DD8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6DDC
  c->r[3]=c->r[3]+c->r[5]; // 800F6DE0
  c->r[4]=c->r[4]+c->r[5]; // 800F6DE4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6DE8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6DD0; } // 800F6DEC
  return; // 800F6DF0
}

// fn_800F6DF4
void f_800F6DF4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F6DF4
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F6DF8
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F6DFC
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6E00
  c->r[7]=0u+0x7F7F0000u; // 800F6E04
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F6E08
  c->r[9]=c->r[8]&c->r[0]; // 800F6E0C
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6E10
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F6E14
  c->r[7]=c->r[9]+c->r[7]; // 800F6E18
  c->r[7]=c->r[8]+c->r[7]; // 800F6E1C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6E20
  c->r[7]=c->r[7]&c->r[0]; // 800F6E24
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F6E28
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6E2C
  c->r[10]=c->r[8]&c->r[0]; // 800F6E30
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F6E34
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F6E38
  c->r[8]=c->r[10]+c->r[8]; // 800F6E3C
  c->r[8]=c->r[9]+c->r[8]; // 800F6E40
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6E44
  c->r[12]=c->r[8]&c->r[0]; // 800F6E48
  c->r[9]=c->r[3]+c->r[5]; // 800F6E4C
L_800F6E50:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 800F6E50
  c->r[3]=R32(c->r[9]+0x00000001u); // 800F6E54
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6E58
  c->r[11]=c->r[3]&c->r[0]; // 800F6E5C
  c->r[3]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F6E60
  c->r[8]=rotl(c->r[8],23)&0xFF000000u; // 800F6E64
  c->r[3]=c->r[11]+c->r[3]; // 800F6E68
  c->r[3]=c->r[8]+c->r[3]; // 800F6E6C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6E70
  c->r[8]=c->r[3]&c->r[0]; // 800F6E74
  c->r[3]=c->r[7]+c->r[8]; // 800F6E78
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F6E7C
  c->r[7]=c->r[8]|c->r[8]; // 800F6E80
  c->r[3]=R32(c->r[9]+0x00000005u); // 800F6E84
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6E88
  c->r[10]=c->r[3]&c->r[0]; // 800F6E8C
  c->r[3]=rotl(c->r[11],24)&0xFF000000u; // 800F6E90
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F6E94
  c->r[3]=c->r[10]+c->r[3]; // 800F6E98
  c->r[3]=c->r[8]+c->r[3]; // 800F6E9C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F6EA0
  c->r[8]=c->r[3]&c->r[0]; // 800F6EA4
  c->r[3]=c->r[12]+c->r[8]; // 800F6EA8
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F6EAC
  c->r[12]=c->r[8]|c->r[8]; // 800F6EB0
  c->r[9]=c->r[9]+c->r[5]; // 800F6EB4
  c->r[4]=c->r[4]+c->r[5]; // 800F6EB8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F6EBC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6E50; } // 800F6EC0
  return; // 800F6EC4
}

// fn_800F6EC8
void f_800F6EC8(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F6EC8
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F6ECC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F6ED0
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F6ED4
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6ED8
  c->r[0]=c->r[6]+c->r[0]; // 800F6EDC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6EE0
  c->r[6]=0u+0x7F7F0000u; // 800F6EE4
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F6EE8
  c->r[10]=c->r[0]&c->r[7]; // 800F6EEC
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F6EF0
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F6EF4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6EF8
  c->r[0]=c->r[6]+c->r[0]; // 800F6EFC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6F00
  c->r[11]=c->r[0]&c->r[7]; // 800F6F04
  c->r[6]=c->r[3]+c->r[5]; // 800F6F08
L_800F6F0C:;
  c->r[9]=R32(c->r[6]+0x00000001u); // 800F6F0C
  c->r[0]=R8(c->r[6]+0x00000000u); // 800F6F10
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 800F6F14
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F6F18
  c->r[0]=c->r[3]+c->r[0]; // 800F6F1C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6F20
  c->r[3]=c->r[0]&c->r[7]; // 800F6F24
  c->r[0]=c->r[10]+c->r[3]; // 800F6F28
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6F2C
  c->r[10]=c->r[3]|c->r[3]; // 800F6F30
  c->r[3]=rotl(c->r[9],24)&0xFF000000u; // 800F6F34
  c->r[0]=R32(c->r[6]+0x00000005u); // 800F6F38
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F6F3C
  c->r[0]=c->r[3]+c->r[0]; // 800F6F40
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6F44
  c->r[3]=c->r[0]&c->r[7]; // 800F6F48
  c->r[0]=c->r[11]+c->r[3]; // 800F6F4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6F50
  c->r[11]=c->r[3]|c->r[3]; // 800F6F54
  c->r[6]=c->r[6]+c->r[5]; // 800F6F58
  c->r[4]=c->r[4]+c->r[5]; // 800F6F5C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F6F60
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6F0C; } // 800F6F64
  return; // 800F6F68
}

// fn_800F6F6C
void f_800F6F6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6F70
  c->r[6]=0u+0x00000010u; // 800F6F74
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F6F78
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6F7C
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F6F80
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F6F84
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F6F88
  c->r[7]=0u+0x7F7F0000u; // 800F6F8C
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F6F90
  c->r[12]=c->r[8]&c->r[0]; // 800F6F94
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F6F98
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F6F9C
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F6FA0
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F6FA4
  c->r[8]=c->r[10]+c->r[8]; // 800F6FA8
  c->r[7]=c->r[9]+c->r[7]; // 800F6FAC
  c->r[7]=c->r[8]+c->r[7]; // 800F6FB0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F6FB4
  c->r[7]=c->r[7]&c->r[0]; // 800F6FB8
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F6FBC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6FC0
  c->r[8]=c->r[8]&c->r[0]; // 800F6FC4
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F6FC8
  c->r[9]=rotl(c->r[8],16)&0x0000FFFFu; // 800F6FCC
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F6FD0
  c->r[8]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F6FD4
  c->r[9]=c->r[11]+c->r[9]; // 800F6FD8
  c->r[8]=c->r[10]+c->r[8]; // 800F6FDC
  c->r[8]=c->r[9]+c->r[8]; // 800F6FE0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F6FE4
  c->r[8]=c->r[8]&c->r[0]; // 800F6FE8
  c->r[3]=c->r[3]+c->r[5]; // 800F6FEC
L_800F6FF0:;
  c->r[9]=R16(c->r[3]+0x00000000u); // 800F6FF0
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F6FF4
  c->r[11]=c->r[9]&0x00007F7Fu; cr0(c,c->r[11]); // 800F6FF8
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F6FFC
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7000
  c->r[31]=c->r[9]&c->r[0]; // 800F7004
  c->r[12]=rotl(c->r[11],16)&0xFFFF0000u; // 800F7008
  c->r[10]=rotl(c->r[31],16)&0x0000FFFFu; // 800F700C
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F7010
  c->r[9]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F7014
  c->r[10]=c->r[12]+c->r[10]; // 800F7018
  c->r[9]=c->r[11]+c->r[9]; // 800F701C
  c->r[9]=c->r[10]+c->r[9]; // 800F7020
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7024
  c->r[9]=c->r[9]&c->r[0]; // 800F7028
  c->r[7]=c->r[7]+c->r[9]; // 800F702C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F7030
  c->r[7]=c->r[9]|c->r[9]; // 800F7034
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F7038
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F703C
  c->r[9]=c->r[9]&c->r[0]; // 800F7040
  c->r[12]=rotl(c->r[31],16)&0xFFFF0000u; // 800F7044
  c->r[10]=rotl(c->r[9],16)&0x0000FFFFu; // 800F7048
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F704C
  c->r[9]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F7050
  c->r[10]=c->r[12]+c->r[10]; // 800F7054
  c->r[9]=c->r[11]+c->r[9]; // 800F7058
  c->r[9]=c->r[10]+c->r[9]; // 800F705C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7060
  c->r[9]=c->r[9]&c->r[0]; // 800F7064
  c->r[8]=c->r[8]+c->r[9]; // 800F7068
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F706C
  c->r[8]=c->r[9]|c->r[9]; // 800F7070
  c->r[3]=c->r[3]+c->r[5]; // 800F7074
  c->r[4]=c->r[4]+c->r[5]; // 800F7078
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F707C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6FF0; } // 800F7080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7084
  c->r[1]=c->r[1]+0x00000010u; // 800F7088
  return; // 800F708C
}

// fn_800F7090
void f_800F7090(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F7090
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F7094
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F7098
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F709C
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F70A0
  c->r[0]=c->r[6]+c->r[0]; // 800F70A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F70A8
  c->r[6]=0u+0x7F7F0000u; // 800F70AC
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F70B0
  c->r[10]=c->r[0]&c->r[7]; // 800F70B4
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F70B8
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F70BC
  c->r[0]=c->r[6]+c->r[0]; // 800F70C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F70C4
  c->r[11]=c->r[0]&c->r[7]; // 800F70C8
  c->r[6]=c->r[3]+c->r[5]; // 800F70CC
L_800F70D0:;
  c->r[9]=R32(c->r[6]+0x00000002u); // 800F70D0
  c->r[0]=R16(c->r[6]+0x00000000u); // 800F70D4
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800F70D8
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F70DC
  c->r[0]=c->r[3]+c->r[0]; // 800F70E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F70E4
  c->r[3]=c->r[0]&c->r[7]; // 800F70E8
  c->r[0]=c->r[10]+c->r[3]; // 800F70EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F70F0
  c->r[10]=c->r[3]|c->r[3]; // 800F70F4
  c->r[3]=rotl(c->r[9],16)&0xFFFF0000u; // 800F70F8
  c->r[0]=R16(c->r[6]+0x00000006u); // 800F70FC
  c->r[0]=c->r[3]+c->r[0]; // 800F7100
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7104
  c->r[3]=c->r[0]&c->r[7]; // 800F7108
  c->r[0]=c->r[11]+c->r[3]; // 800F710C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7110
  c->r[11]=c->r[3]|c->r[3]; // 800F7114
  c->r[6]=c->r[6]+c->r[5]; // 800F7118
  c->r[4]=c->r[4]+c->r[5]; // 800F711C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F7120
  if (!crb(c,2)) { IRQCHK(c); goto L_800F70D0; } // 800F7124
  return; // 800F7128
}

// fn_800F712C
void f_800F712C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F712C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7130
  c->r[6]=0u+0x00000010u; // 800F7134
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F7138
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F713C
  c->r[7]=0u+0x7F7F0000u; // 800F7140
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F7144
  c->r[9]=c->r[8]&c->r[0]; // 800F7148
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F714C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7150
  c->r[11]=c->r[7]&c->r[0]; // 800F7154
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F7158
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F715C
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F7160
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F7164
  c->r[8]=c->r[10]+c->r[8]; // 800F7168
  c->r[7]=c->r[9]+c->r[7]; // 800F716C
  c->r[7]=c->r[8]+c->r[7]; // 800F7170
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7174
  c->r[7]=c->r[7]&c->r[0]; // 800F7178
  c->r[8]=R16(c->r[3]+0x00000007u); // 800F717C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7180
  c->r[12]=c->r[8]&0x00007F7Fu; cr0(c,c->r[12]); // 800F7184
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F7188
  c->r[9]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F718C
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F7190
  c->r[9]=c->r[10]+c->r[9]; // 800F7194
  c->r[8]=c->r[8]+c->r[12]; // 800F7198
  c->r[8]=c->r[9]+c->r[8]; // 800F719C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F71A0
  c->r[8]=c->r[8]&c->r[0]; // 800F71A4
  c->r[12]=c->r[3]+c->r[5]; // 800F71A8
L_800F71AC:;
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F71AC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F71B0
  c->r[10]=c->r[3]&c->r[0]; // 800F71B4
  c->r[3]=R32(c->r[12]+0x00000003u); // 800F71B8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F71BC
  c->r[31]=c->r[3]&c->r[0]; // 800F71C0
  c->r[11]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F71C4
  c->r[9]=rotl(c->r[31],8)&0x000000FFu; // 800F71C8
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F71CC
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F71D0
  c->r[9]=c->r[11]+c->r[9]; // 800F71D4
  c->r[3]=c->r[10]+c->r[3]; // 800F71D8
  c->r[3]=c->r[9]+c->r[3]; // 800F71DC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F71E0
  c->r[9]=c->r[3]&c->r[0]; // 800F71E4
  c->r[3]=c->r[7]+c->r[9]; // 800F71E8
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F71EC
  c->r[7]=c->r[9]|c->r[9]; // 800F71F0
  c->r[3]=R16(c->r[12]+0x00000007u); // 800F71F4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F71F8
  c->r[11]=c->r[3]&0x00007F7Fu; cr0(c,c->r[11]); // 800F71FC
  c->r[10]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F7200
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F7204
  c->r[3]=rotl(c->r[31],16)&0xFFFF0000u; // 800F7208
  c->r[9]=c->r[10]+c->r[9]; // 800F720C
  c->r[3]=c->r[3]+c->r[11]; // 800F7210
  c->r[3]=c->r[9]+c->r[3]; // 800F7214
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7218
  c->r[9]=c->r[3]&c->r[0]; // 800F721C
  c->r[3]=c->r[8]+c->r[9]; // 800F7220
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F7224
  c->r[8]=c->r[9]|c->r[9]; // 800F7228
  c->r[12]=c->r[12]+c->r[5]; // 800F722C
  c->r[4]=c->r[4]+c->r[5]; // 800F7230
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F7234
  if (!crb(c,2)) { IRQCHK(c); goto L_800F71AC; } // 800F7238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F723C
  c->r[1]=c->r[1]+0x00000010u; // 800F7240
  return; // 800F7244
}

// fn_800F7248
void f_800F7248(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F7248
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F724C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F7250
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F7254
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F7258
  c->r[0]=c->r[6]+c->r[0]; // 800F725C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7260
  c->r[6]=0u+0x7F7F0000u; // 800F7264
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F7268
  c->r[10]=c->r[0]&c->r[7]; // 800F726C
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F7270
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F7274
  c->r[0]=c->r[6]+c->r[0]; // 800F7278
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F727C
  c->r[11]=c->r[0]&c->r[7]; // 800F7280
  c->r[6]=c->r[3]+c->r[5]; // 800F7284
L_800F7288:;
  c->r[9]=R32(c->r[6]+0x00000003u); // 800F7288
  c->r[0]=R32(c->r[6]+0xFFFFFFFFu); // 800F728C
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F7290
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F7294
  c->r[0]=c->r[3]+c->r[0]; // 800F7298
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F729C
  c->r[3]=c->r[0]&c->r[7]; // 800F72A0
  c->r[0]=c->r[10]+c->r[3]; // 800F72A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F72A8
  c->r[10]=c->r[3]|c->r[3]; // 800F72AC
  c->r[3]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F72B0
  c->r[0]=R8(c->r[6]+0x00000007u); // 800F72B4
  c->r[0]=c->r[3]+c->r[0]; // 800F72B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F72BC
  c->r[3]=c->r[0]&c->r[7]; // 800F72C0
  c->r[0]=c->r[11]+c->r[3]; // 800F72C4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F72C8
  c->r[11]=c->r[3]|c->r[3]; // 800F72CC
  c->r[6]=c->r[6]+c->r[5]; // 800F72D0
  c->r[4]=c->r[4]+c->r[5]; // 800F72D4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F72D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7288; } // 800F72DC
  return; // 800F72E0
}

// fn_800F72E4
void f_800F72E4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F72E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F72E8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F72EC
  c->r[7]=0u+0x7F7F0000u; // 800F72F0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F72F4
  c->r[9]=c->r[8]&c->r[0]; // 800F72F8
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F72FC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7300
  c->r[10]=c->r[7]&c->r[0]; // 800F7304
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F7308
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F730C
  c->r[7]=c->r[9]+c->r[7]; // 800F7310
  c->r[7]=c->r[8]+c->r[7]; // 800F7314
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7318
  c->r[7]=c->r[7]&c->r[0]; // 800F731C
  c->r[9]=R8(c->r[3]+0x00000008u); // 800F7320
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F7324
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7328
  c->r[8]=c->r[10]+c->r[8]; // 800F732C
  c->r[8]=c->r[9]+c->r[8]; // 800F7330
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7334
  c->r[12]=c->r[8]&c->r[0]; // 800F7338
  c->r[9]=c->r[3]+c->r[5]; // 800F733C
L_800F7340:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 800F7340
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7344
  c->r[11]=c->r[3]&c->r[0]; // 800F7348
  c->r[3]=R32(c->r[9]+0x00000004u); // 800F734C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7350
  c->r[10]=c->r[3]&c->r[0]; // 800F7354
  c->r[3]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F7358
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F735C
  c->r[3]=c->r[11]+c->r[3]; // 800F7360
  c->r[3]=c->r[8]+c->r[3]; // 800F7364
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7368
  c->r[8]=c->r[3]&c->r[0]; // 800F736C
  c->r[3]=c->r[7]+c->r[8]; // 800F7370
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F7374
  c->r[7]=c->r[8]|c->r[8]; // 800F7378
  c->r[8]=R8(c->r[9]+0x00000008u); // 800F737C
  c->r[3]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F7380
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7384
  c->r[3]=c->r[10]+c->r[3]; // 800F7388
  c->r[3]=c->r[8]+c->r[3]; // 800F738C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7390
  c->r[8]=c->r[3]&c->r[0]; // 800F7394
  c->r[3]=c->r[12]+c->r[8]; // 800F7398
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F739C
  c->r[12]=c->r[8]|c->r[8]; // 800F73A0
  c->r[9]=c->r[9]+c->r[5]; // 800F73A4
  c->r[4]=c->r[4]+c->r[5]; // 800F73A8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F73AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7340; } // 800F73B0
  return; // 800F73B4
}

// fn_800F73B8
void f_800F73B8(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F73B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F73BC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F73C0
  c->r[6]=0u+0x7F7F0000u; // 800F73C4
  c->r[6]=c->r[6]+0x00007F7Fu; // 800F73C8
  c->r[10]=c->r[0]&c->r[6]; // 800F73CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F73D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F73D4
  c->r[9]=c->r[0]&c->r[6]; // 800F73D8
  c->r[3]=c->r[3]+c->r[5]; // 800F73DC
L_800F73E0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F73E0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F73E4
  c->r[8]=c->r[0]&c->r[6]; // 800F73E8
  c->r[0]=c->r[10]+c->r[8]; // 800F73EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F73F0
  c->r[10]=c->r[8]|c->r[8]; // 800F73F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F73F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F73FC
  c->r[8]=c->r[0]&c->r[6]; // 800F7400
  c->r[0]=c->r[9]+c->r[8]; // 800F7404
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7408
  c->r[9]=c->r[8]|c->r[8]; // 800F740C
  c->r[3]=c->r[3]+c->r[5]; // 800F7410
  c->r[4]=c->r[4]+c->r[5]; // 800F7414
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F7418
  if (!crb(c,2)) { IRQCHK(c); goto L_800F73E0; } // 800F741C
  return; // 800F7420
}

// fn_800F7424
void f_800F7424(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F7424
  c->r[6]=0u+0x7F7F0000u; // 800F7428
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F742C
L_800F7430:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800F7430
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F7434
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7438
  c->r[10]=c->r[0]&c->r[7]; // 800F743C
  c->r[0]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F7440
  c->r[6]=rotl(c->r[6],23)&0xFF000000u; // 800F7444
  c->r[0]=c->r[10]+c->r[0]; // 800F7448
  c->r[0]=c->r[6]+c->r[0]; // 800F744C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7450
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F7454
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7458
  c->r[9]=c->r[0]&c->r[7]; // 800F745C
  c->r[0]=rotl(c->r[10],24)&0xFF000000u; // 800F7460
  c->r[6]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F7464
  c->r[0]=c->r[9]+c->r[0]; // 800F7468
  c->r[0]=c->r[6]+c->r[0]; // 800F746C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7470
  c->r[3]=c->r[3]+c->r[5]; // 800F7474
  c->r[4]=c->r[4]+c->r[5]; // 800F7478
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F747C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7430; } // 800F7480
  return; // 800F7484
}

// fn_800F7488
void f_800F7488(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F7488
L_800F748C:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F748C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F7490
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F7494
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F7498
  c->r[0]=c->r[6]+c->r[0]; // 800F749C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F74A0
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F74A4
  c->r[0]=R32(c->r[3]+0x00000005u); // 800F74A8
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F74AC
  c->r[0]=c->r[6]+c->r[0]; // 800F74B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F74B4
  c->r[3]=c->r[3]+c->r[5]; // 800F74B8
  c->r[4]=c->r[4]+c->r[5]; // 800F74BC
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F74C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F748C; } // 800F74C4
  return; // 800F74C8
}

// fn_800F74CC
void f_800F74CC(Ctx* __restrict c) {
  c->r[10]=0u+0x00000010u; // 800F74CC
  c->r[6]=0u+0x7F7F0000u; // 800F74D0
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F74D4
L_800F74D8:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F74D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F74DC
  c->r[7]=c->r[0]&0x00007F7Fu; cr0(c,c->r[7]); // 800F74E0
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F74E4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F74E8
  c->r[11]=c->r[0]&c->r[9]; // 800F74EC
  c->r[8]=rotl(c->r[7],16)&0xFFFF0000u; // 800F74F0
  c->r[6]=rotl(c->r[11],16)&0x0000FFFFu; // 800F74F4
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 800F74F8
  c->r[0]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F74FC
  c->r[6]=c->r[8]+c->r[6]; // 800F7500
  c->r[0]=c->r[7]+c->r[0]; // 800F7504
  c->r[0]=c->r[6]+c->r[0]; // 800F7508
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F750C
  c->r[0]=R32(c->r[3]+0x00000006u); // 800F7510
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7514
  c->r[0]=c->r[0]&c->r[9]; // 800F7518
  c->r[8]=rotl(c->r[11],16)&0xFFFF0000u; // 800F751C
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 800F7520
  c->r[7]=rotl(c->r[11],24)&0xFF000000u; // 800F7524
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F7528
  c->r[6]=c->r[8]+c->r[6]; // 800F752C
  c->r[0]=c->r[7]+c->r[0]; // 800F7530
  c->r[0]=c->r[6]+c->r[0]; // 800F7534
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7538
  c->r[3]=c->r[3]+c->r[5]; // 800F753C
  c->r[4]=c->r[4]+c->r[5]; // 800F7540
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F7544
  if (!crb(c,2)) { IRQCHK(c); goto L_800F74D8; } // 800F7548
  return; // 800F754C
}

// fn_800F7550
void f_800F7550(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F7550
L_800F7554:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F7554
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F7558
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F755C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F7560
  c->r[0]=c->r[6]+c->r[0]; // 800F7564
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7568
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F756C
  c->r[0]=R16(c->r[3]+0x00000006u); // 800F7570
  c->r[0]=c->r[6]+c->r[0]; // 800F7574
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7578
  c->r[3]=c->r[3]+c->r[5]; // 800F757C
  c->r[4]=c->r[4]+c->r[5]; // 800F7580
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F7584
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7554; } // 800F7588
  return; // 800F758C
}

// fn_800F7590
void f_800F7590(Ctx* __restrict c) {
  c->r[10]=0u+0x00000010u; // 800F7590
  c->r[6]=0u+0x7F7F0000u; // 800F7594
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F7598
L_800F759C:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F759C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F75A0
  c->r[7]=c->r[0]&c->r[9]; // 800F75A4
  c->r[0]=R32(c->r[3]+0x00000003u); // 800F75A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F75AC
  c->r[11]=c->r[0]&c->r[9]; // 800F75B0
  c->r[8]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F75B4
  c->r[6]=rotl(c->r[11],8)&0x000000FFu; // 800F75B8
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 800F75BC
  c->r[0]=rotl(c->r[11],16)&0x0000FFFFu; // 800F75C0
  c->r[6]=c->r[8]+c->r[6]; // 800F75C4
  c->r[0]=c->r[7]+c->r[0]; // 800F75C8
  c->r[0]=c->r[6]+c->r[0]; // 800F75CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F75D0
  c->r[0]=R16(c->r[3]+0x00000007u); // 800F75D4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F75D8
  c->r[8]=c->r[0]&0x00007F7Fu; cr0(c,c->r[8]); // 800F75DC
  c->r[7]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F75E0
  c->r[6]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F75E4
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 800F75E8
  c->r[6]=c->r[7]+c->r[6]; // 800F75EC
  c->r[0]=c->r[0]+c->r[8]; // 800F75F0
  c->r[0]=c->r[6]+c->r[0]; // 800F75F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F75F8
  c->r[3]=c->r[3]+c->r[5]; // 800F75FC
  c->r[4]=c->r[4]+c->r[5]; // 800F7600
  c->r[10]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[10]); // 800F7604
  if (!crb(c,2)) { IRQCHK(c); goto L_800F759C; } // 800F7608
  return; // 800F760C
}

// fn_800F7610
void f_800F7610(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800F7610
L_800F7614:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F7614
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F7618
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F761C
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F7620
  c->r[0]=c->r[6]+c->r[0]; // 800F7624
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7628
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F762C
  c->r[0]=R8(c->r[3]+0x00000007u); // 800F7630
  c->r[0]=c->r[6]+c->r[0]; // 800F7634
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7638
  c->r[3]=c->r[3]+c->r[5]; // 800F763C
  c->r[4]=c->r[4]+c->r[5]; // 800F7640
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F7644
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7614; } // 800F7648
  return; // 800F764C
}

// fn_800F7650
void f_800F7650(Ctx* __restrict c) {
  c->r[8]=0u+0x00000010u; // 800F7650
  c->r[6]=0u+0x7F7F0000u; // 800F7654
  c->r[7]=c->r[6]+0x00007F7Fu; // 800F7658
L_800F765C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F765C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7660
  c->r[10]=c->r[0]&c->r[7]; // 800F7664
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7668
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F766C
  c->r[9]=c->r[0]&c->r[7]; // 800F7670
  c->r[0]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F7674
  c->r[6]=rotl(c->r[9],8)&0x000000FFu; // 800F7678
  c->r[0]=c->r[10]+c->r[0]; // 800F767C
  c->r[0]=c->r[6]+c->r[0]; // 800F7680
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7684
  c->r[6]=R8(c->r[3]+0x00000008u); // 800F7688
  c->r[0]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F768C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F7690
  c->r[0]=c->r[9]+c->r[0]; // 800F7694
  c->r[0]=c->r[6]+c->r[0]; // 800F7698
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F769C
  c->r[3]=c->r[3]+c->r[5]; // 800F76A0
  c->r[4]=c->r[4]+c->r[5]; // 800F76A4
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800F76A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F765C; } // 800F76AC
  return; // 800F76B0
}

// fn_800F76B4
void f_800F76B4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800F76B4
L_800F76B8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F76B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F76BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F76C0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F76C4
  c->r[3]=c->r[3]+c->r[5]; // 800F76C8
  c->r[4]=c->r[4]+c->r[5]; // 800F76CC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F76D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F76B8; } // 800F76D4
  return; // 800F76D8
}

// fn_800F76DC
void f_800F76DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F76DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F76E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F76E4
  c->r[6]=0u+0x00000002u; // 800F76E8
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F76EC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F76F0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F76F4
  c->r[7]=0u+0x7F7F0000u; // 800F76F8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F76FC
  c->r[9]=c->r[8]&c->r[0]; // 800F7700
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F7704
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F7708
  c->r[7]=c->r[9]+c->r[7]; // 800F770C
  c->r[7]=c->r[8]+c->r[7]; // 800F7710
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7714
  c->r[7]=c->r[7]&c->r[0]; // 800F7718
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F771C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7720
  c->r[10]=c->r[8]&c->r[0]; // 800F7724
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F7728
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F772C
  c->r[8]=c->r[10]+c->r[8]; // 800F7730
  c->r[8]=c->r[9]+c->r[8]; // 800F7734
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7738
  c->r[8]=c->r[8]&c->r[0]; // 800F773C
  c->r[9]=R32(c->r[3]+0x00000009u); // 800F7740
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7744
  c->r[11]=c->r[9]&c->r[0]; // 800F7748
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 800F774C
  c->r[10]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F7750
  c->r[9]=c->r[11]+c->r[9]; // 800F7754
  c->r[9]=c->r[10]+c->r[9]; // 800F7758
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F775C
  c->r[9]=c->r[9]&c->r[0]; // 800F7760
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F7764
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7768
  c->r[12]=c->r[10]&c->r[0]; // 800F776C
  c->r[10]=rotl(c->r[11],24)&0xFF000000u; // 800F7770
  c->r[11]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F7774
  c->r[10]=c->r[12]+c->r[10]; // 800F7778
  c->r[10]=c->r[11]+c->r[10]; // 800F777C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7780
  c->r[10]=c->r[10]&c->r[0]; // 800F7784
  c->r[3]=c->r[3]+c->r[5]; // 800F7788
L_800F778C:;
  c->r[12]=R8(c->r[3]+0x00000000u); // 800F778C
  c->r[11]=R32(c->r[3]+0x00000001u); // 800F7790
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7794
  c->r[30]=c->r[11]&c->r[0]; // 800F7798
  c->r[11]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F779C
  c->r[12]=rotl(c->r[12],23)&0xFF000000u; // 800F77A0
  c->r[11]=c->r[30]+c->r[11]; // 800F77A4
  c->r[11]=c->r[12]+c->r[11]; // 800F77A8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F77AC
  c->r[11]=c->r[11]&c->r[0]; // 800F77B0
  c->r[7]=c->r[7]+c->r[11]; // 800F77B4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F77B8
  c->r[7]=c->r[11]|c->r[11]; // 800F77BC
  c->r[11]=R32(c->r[3]+0x00000005u); // 800F77C0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F77C4
  c->r[31]=c->r[11]&c->r[0]; // 800F77C8
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F77CC
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F77D0
  c->r[11]=c->r[31]+c->r[11]; // 800F77D4
  c->r[11]=c->r[12]+c->r[11]; // 800F77D8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F77DC
  c->r[11]=c->r[11]&c->r[0]; // 800F77E0
  c->r[8]=c->r[8]+c->r[11]; // 800F77E4
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F77E8
  c->r[8]=c->r[11]|c->r[11]; // 800F77EC
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F77F0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F77F4
  c->r[30]=c->r[11]&c->r[0]; // 800F77F8
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F77FC
  c->r[12]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F7800
  c->r[11]=c->r[30]+c->r[11]; // 800F7804
  c->r[11]=c->r[12]+c->r[11]; // 800F7808
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F780C
  c->r[11]=c->r[11]&c->r[0]; // 800F7810
  c->r[9]=c->r[9]+c->r[11]; // 800F7814
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F7818
  c->r[9]=c->r[11]|c->r[11]; // 800F781C
  c->r[11]=R32(c->r[3]+0x0000000Du); // 800F7820
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7824
  c->r[31]=c->r[11]&c->r[0]; // 800F7828
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F782C
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F7830
  c->r[11]=c->r[31]+c->r[11]; // 800F7834
  c->r[11]=c->r[12]+c->r[11]; // 800F7838
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F783C
  c->r[11]=c->r[11]&c->r[0]; // 800F7840
  c->r[10]=c->r[10]+c->r[11]; // 800F7844
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F7848
  c->r[10]=c->r[11]|c->r[11]; // 800F784C
  c->r[3]=c->r[3]+c->r[5]; // 800F7850
  c->r[4]=c->r[4]+c->r[5]; // 800F7854
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F7858
  if (!crb(c,2)) { IRQCHK(c); goto L_800F778C; } // 800F785C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7860
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7864
  c->r[1]=c->r[1]+0x00000010u; // 800F7868
  return; // 800F786C
}

// fn_800F7870
void f_800F7870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7874
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7878
  c->r[6]=0u+0x00000002u; // 800F787C
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F7880
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F7884
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800F7888
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F788C
  c->r[0]=c->r[7]+c->r[0]; // 800F7890
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7894
  c->r[7]=0u+0x7F7F0000u; // 800F7898
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F789C
  c->r[7]=c->r[8]&c->r[0]; // 800F78A0
  c->r[10]=R32(c->r[3]+0x00000005u); // 800F78A4
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F78A8
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F78AC
  c->r[8]=c->r[9]+c->r[8]; // 800F78B0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F78B4
  c->r[8]=c->r[8]&c->r[0]; // 800F78B8
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F78BC
  c->r[10]=rotl(c->r[10],24)&0xFF000000u; // 800F78C0
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F78C4
  c->r[9]=c->r[10]+c->r[9]; // 800F78C8
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F78CC
  c->r[9]=c->r[9]&c->r[0]; // 800F78D0
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F78D4
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F78D8
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F78DC
  c->r[10]=c->r[11]+c->r[10]; // 800F78E0
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F78E4
  c->r[10]=c->r[10]&c->r[0]; // 800F78E8
  c->r[12]=c->r[3]+c->r[5]; // 800F78EC
L_800F78F0:;
  c->r[31]=R32(c->r[12]+0x00000001u); // 800F78F0
  c->r[3]=R8(c->r[12]+0x00000000u); // 800F78F4
  c->r[11]=rotl(c->r[3],24)&0xFF000000u; // 800F78F8
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F78FC
  c->r[3]=c->r[11]+c->r[3]; // 800F7900
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7904
  c->r[11]=c->r[3]&c->r[0]; // 800F7908
  c->r[3]=c->r[7]+c->r[11]; // 800F790C
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F7910
  c->r[7]=c->r[11]|c->r[11]; // 800F7914
  c->r[30]=R32(c->r[12]+0x00000005u); // 800F7918
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F791C
  c->r[3]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F7920
  c->r[3]=c->r[11]+c->r[3]; // 800F7924
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7928
  c->r[11]=c->r[3]&c->r[0]; // 800F792C
  c->r[3]=c->r[8]+c->r[11]; // 800F7930
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F7934
  c->r[8]=c->r[11]|c->r[11]; // 800F7938
  c->r[31]=R32(c->r[12]+0x00000009u); // 800F793C
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F7940
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F7944
  c->r[3]=c->r[11]+c->r[3]; // 800F7948
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F794C
  c->r[11]=c->r[3]&c->r[0]; // 800F7950
  c->r[3]=c->r[9]+c->r[11]; // 800F7954
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F7958
  c->r[9]=c->r[11]|c->r[11]; // 800F795C
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F7960
  c->r[3]=R32(c->r[12]+0x0000000Du); // 800F7964
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 800F7968
  c->r[3]=c->r[11]+c->r[3]; // 800F796C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7970
  c->r[11]=c->r[3]&c->r[0]; // 800F7974
  c->r[3]=c->r[10]+c->r[11]; // 800F7978
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F797C
  c->r[10]=c->r[11]|c->r[11]; // 800F7980
  c->r[12]=c->r[12]+c->r[5]; // 800F7984
  c->r[4]=c->r[4]+c->r[5]; // 800F7988
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F798C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F78F0; } // 800F7990
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7994
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7998
  c->r[1]=c->r[1]+0x00000010u; // 800F799C
  return; // 800F79A0
}

// fn_800F79A4
void f_800F79A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F79A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F79A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F79AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F79B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F79B4
  c->r[6]=0u+0x00000002u; // 800F79B8
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F79BC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F79C0
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F79C4
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F79C8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F79CC
  c->r[7]=0u+0x7F7F0000u; // 800F79D0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F79D4
  c->r[12]=c->r[8]&c->r[0]; // 800F79D8
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F79DC
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F79E0
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F79E4
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F79E8
  c->r[8]=c->r[10]+c->r[8]; // 800F79EC
  c->r[7]=c->r[9]+c->r[7]; // 800F79F0
  c->r[7]=c->r[8]+c->r[7]; // 800F79F4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F79F8
  c->r[7]=c->r[7]&c->r[0]; // 800F79FC
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F7A00
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7A04
  c->r[29]=c->r[8]&c->r[0]; // 800F7A08
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F7A0C
  c->r[9]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7A10
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F7A14
  c->r[8]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F7A18
  c->r[9]=c->r[11]+c->r[9]; // 800F7A1C
  c->r[8]=c->r[10]+c->r[8]; // 800F7A20
  c->r[8]=c->r[9]+c->r[8]; // 800F7A24
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7A28
  c->r[8]=c->r[8]&c->r[0]; // 800F7A2C
  c->r[9]=R32(c->r[3]+0x0000000Au); // 800F7A30
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7A34
  c->r[28]=c->r[9]&c->r[0]; // 800F7A38
  c->r[12]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7A3C
  c->r[10]=rotl(c->r[28],16)&0x0000FFFFu; // 800F7A40
  c->r[11]=rotl(c->r[29],24)&0xFF000000u; // 800F7A44
  c->r[9]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F7A48
  c->r[10]=c->r[12]+c->r[10]; // 800F7A4C
  c->r[9]=c->r[11]+c->r[9]; // 800F7A50
  c->r[9]=c->r[10]+c->r[9]; // 800F7A54
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7A58
  c->r[9]=c->r[9]&c->r[0]; // 800F7A5C
  c->r[10]=R32(c->r[3]+0x0000000Eu); // 800F7A60
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7A64
  c->r[10]=c->r[10]&c->r[0]; // 800F7A68
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7A6C
  c->r[11]=rotl(c->r[10],16)&0x0000FFFFu; // 800F7A70
  c->r[12]=rotl(c->r[28],24)&0xFF000000u; // 800F7A74
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F7A78
  c->r[11]=c->r[30]+c->r[11]; // 800F7A7C
  c->r[10]=c->r[12]+c->r[10]; // 800F7A80
  c->r[10]=c->r[11]+c->r[10]; // 800F7A84
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7A88
  c->r[10]=c->r[10]&c->r[0]; // 800F7A8C
  c->r[3]=c->r[3]+c->r[5]; // 800F7A90
L_800F7A94:;
  c->r[11]=R16(c->r[3]+0x00000000u); // 800F7A94
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7A98
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F7A9C
  c->r[11]=R32(c->r[3]+0x00000002u); // 800F7AA0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7AA4
  c->r[29]=c->r[11]&c->r[0]; // 800F7AA8
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7AAC
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7AB0
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F7AB4
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F7AB8
  c->r[12]=c->r[31]+c->r[12]; // 800F7ABC
  c->r[11]=c->r[30]+c->r[11]; // 800F7AC0
  c->r[11]=c->r[12]+c->r[11]; // 800F7AC4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7AC8
  c->r[11]=c->r[11]&c->r[0]; // 800F7ACC
  c->r[7]=c->r[7]+c->r[11]; // 800F7AD0
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F7AD4
  c->r[7]=c->r[11]|c->r[11]; // 800F7AD8
  c->r[11]=R32(c->r[3]+0x00000006u); // 800F7ADC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7AE0
  c->r[28]=c->r[11]&c->r[0]; // 800F7AE4
  c->r[31]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7AE8
  c->r[12]=rotl(c->r[28],16)&0x0000FFFFu; // 800F7AEC
  c->r[30]=rotl(c->r[29],24)&0xFF000000u; // 800F7AF0
  c->r[11]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F7AF4
  c->r[12]=c->r[31]+c->r[12]; // 800F7AF8
  c->r[11]=c->r[30]+c->r[11]; // 800F7AFC
  c->r[11]=c->r[12]+c->r[11]; // 800F7B00
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7B04
  c->r[11]=c->r[11]&c->r[0]; // 800F7B08
  c->r[8]=c->r[8]+c->r[11]; // 800F7B0C
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F7B10
  c->r[8]=c->r[11]|c->r[11]; // 800F7B14
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F7B18
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7B1C
  c->r[29]=c->r[11]&c->r[0]; // 800F7B20
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7B24
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7B28
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F7B2C
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F7B30
  c->r[12]=c->r[31]+c->r[12]; // 800F7B34
  c->r[11]=c->r[30]+c->r[11]; // 800F7B38
  c->r[11]=c->r[12]+c->r[11]; // 800F7B3C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7B40
  c->r[11]=c->r[11]&c->r[0]; // 800F7B44
  c->r[9]=c->r[9]+c->r[11]; // 800F7B48
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F7B4C
  c->r[9]=c->r[11]|c->r[11]; // 800F7B50
  c->r[11]=R32(c->r[3]+0x0000000Eu); // 800F7B54
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7B58
  c->r[11]=c->r[11]&c->r[0]; // 800F7B5C
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7B60
  c->r[12]=rotl(c->r[11],16)&0x0000FFFFu; // 800F7B64
  c->r[31]=rotl(c->r[29],24)&0xFF000000u; // 800F7B68
  c->r[11]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F7B6C
  c->r[12]=c->r[30]+c->r[12]; // 800F7B70
  c->r[11]=c->r[31]+c->r[11]; // 800F7B74
  c->r[11]=c->r[12]+c->r[11]; // 800F7B78
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7B7C
  c->r[11]=c->r[11]&c->r[0]; // 800F7B80
  c->r[10]=c->r[10]+c->r[11]; // 800F7B84
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F7B88
  c->r[10]=c->r[11]|c->r[11]; // 800F7B8C
  c->r[3]=c->r[3]+c->r[5]; // 800F7B90
  c->r[4]=c->r[4]+c->r[5]; // 800F7B94
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F7B98
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7A94; } // 800F7B9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7BA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F7BA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F7BA8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F7BAC
  c->r[1]=c->r[1]+0x00000020u; // 800F7BB0
  return; // 800F7BB4
}

// fn_800F7BB8
void f_800F7BB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7BBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7BC0
  c->r[6]=0u+0x00000002u; // 800F7BC4
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F7BC8
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F7BCC
  c->r[7]=rotl(c->r[0],16)&0xFFFF0000u; // 800F7BD0
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F7BD4
  c->r[0]=c->r[7]+c->r[0]; // 800F7BD8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7BDC
  c->r[7]=0u+0x7F7F0000u; // 800F7BE0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F7BE4
  c->r[7]=c->r[8]&c->r[0]; // 800F7BE8
  c->r[10]=R32(c->r[3]+0x00000006u); // 800F7BEC
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F7BF0
  c->r[8]=rotl(c->r[10],16)&0x0000FFFFu; // 800F7BF4
  c->r[8]=c->r[9]+c->r[8]; // 800F7BF8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7BFC
  c->r[8]=c->r[8]&c->r[0]; // 800F7C00
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F7C04
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F7C08
  c->r[9]=rotl(c->r[11],16)&0x0000FFFFu; // 800F7C0C
  c->r[9]=c->r[10]+c->r[9]; // 800F7C10
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7C14
  c->r[9]=c->r[9]&c->r[0]; // 800F7C18
  c->r[11]=rotl(c->r[11],16)&0xFFFF0000u; // 800F7C1C
  c->r[10]=R16(c->r[3]+0x0000000Eu); // 800F7C20
  c->r[10]=c->r[11]+c->r[10]; // 800F7C24
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7C28
  c->r[10]=c->r[10]&c->r[0]; // 800F7C2C
  c->r[12]=c->r[3]+c->r[5]; // 800F7C30
L_800F7C34:;
  c->r[31]=R32(c->r[12]+0x00000002u); // 800F7C34
  c->r[3]=R16(c->r[12]+0x00000000u); // 800F7C38
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 800F7C3C
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F7C40
  c->r[3]=c->r[11]+c->r[3]; // 800F7C44
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7C48
  c->r[11]=c->r[3]&c->r[0]; // 800F7C4C
  c->r[3]=c->r[7]+c->r[11]; // 800F7C50
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F7C54
  c->r[7]=c->r[11]|c->r[11]; // 800F7C58
  c->r[30]=R32(c->r[12]+0x00000006u); // 800F7C5C
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F7C60
  c->r[3]=rotl(c->r[30],16)&0x0000FFFFu; // 800F7C64
  c->r[3]=c->r[11]+c->r[3]; // 800F7C68
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7C6C
  c->r[11]=c->r[3]&c->r[0]; // 800F7C70
  c->r[3]=c->r[8]+c->r[11]; // 800F7C74
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F7C78
  c->r[8]=c->r[11]|c->r[11]; // 800F7C7C
  c->r[31]=R32(c->r[12]+0x0000000Au); // 800F7C80
  c->r[11]=rotl(c->r[30],16)&0xFFFF0000u; // 800F7C84
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F7C88
  c->r[3]=c->r[11]+c->r[3]; // 800F7C8C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7C90
  c->r[11]=c->r[3]&c->r[0]; // 800F7C94
  c->r[3]=c->r[9]+c->r[11]; // 800F7C98
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F7C9C
  c->r[9]=c->r[11]|c->r[11]; // 800F7CA0
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F7CA4
  c->r[3]=R16(c->r[12]+0x0000000Eu); // 800F7CA8
  c->r[3]=c->r[11]+c->r[3]; // 800F7CAC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7CB0
  c->r[11]=c->r[3]&c->r[0]; // 800F7CB4
  c->r[3]=c->r[10]+c->r[11]; // 800F7CB8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F7CBC
  c->r[10]=c->r[11]|c->r[11]; // 800F7CC0
  c->r[12]=c->r[12]+c->r[5]; // 800F7CC4
  c->r[4]=c->r[4]+c->r[5]; // 800F7CC8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F7CCC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7C34; } // 800F7CD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7CD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7CD8
  c->r[1]=c->r[1]+0x00000010u; // 800F7CDC
  return; // 800F7CE0
}

// fn_800F7CE4
void f_800F7CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7CE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7CE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7CEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7CF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F7CF4
  c->r[6]=0u+0x00000002u; // 800F7CF8
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F7CFC
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7D00
  c->r[7]=0u+0x7F7F0000u; // 800F7D04
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F7D08
  c->r[9]=c->r[8]&c->r[0]; // 800F7D0C
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F7D10
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7D14
  c->r[12]=c->r[7]&c->r[0]; // 800F7D18
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F7D1C
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800F7D20
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F7D24
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800F7D28
  c->r[8]=c->r[10]+c->r[8]; // 800F7D2C
  c->r[7]=c->r[9]+c->r[7]; // 800F7D30
  c->r[7]=c->r[8]+c->r[7]; // 800F7D34
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F7D38
  c->r[7]=c->r[7]&c->r[0]; // 800F7D3C
  c->r[8]=R32(c->r[3]+0x00000007u); // 800F7D40
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7D44
  c->r[29]=c->r[8]&c->r[0]; // 800F7D48
  c->r[11]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F7D4C
  c->r[9]=rotl(c->r[29],8)&0x000000FFu; // 800F7D50
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800F7D54
  c->r[8]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7D58
  c->r[9]=c->r[11]+c->r[9]; // 800F7D5C
  c->r[8]=c->r[10]+c->r[8]; // 800F7D60
  c->r[8]=c->r[9]+c->r[8]; // 800F7D64
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7D68
  c->r[8]=c->r[8]&c->r[0]; // 800F7D6C
  c->r[9]=R32(c->r[3]+0x0000000Bu); // 800F7D70
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7D74
  c->r[28]=c->r[9]&c->r[0]; // 800F7D78
  c->r[12]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F7D7C
  c->r[10]=rotl(c->r[28],8)&0x000000FFu; // 800F7D80
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7D84
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 800F7D88
  c->r[10]=c->r[12]+c->r[10]; // 800F7D8C
  c->r[9]=c->r[11]+c->r[9]; // 800F7D90
  c->r[9]=c->r[10]+c->r[9]; // 800F7D94
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7D98
  c->r[9]=c->r[9]&c->r[0]; // 800F7D9C
  c->r[10]=R16(c->r[3]+0x0000000Fu); // 800F7DA0
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7DA4
  c->r[29]=c->r[10]&0x00007F7Fu; cr0(c,c->r[29]); // 800F7DA8
  c->r[12]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F7DAC
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F7DB0
  c->r[10]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7DB4
  c->r[11]=c->r[12]+c->r[11]; // 800F7DB8
  c->r[10]=c->r[10]+c->r[29]; // 800F7DBC
  c->r[10]=c->r[11]+c->r[10]; // 800F7DC0
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7DC4
  c->r[10]=c->r[10]&c->r[0]; // 800F7DC8
  c->r[3]=c->r[3]+c->r[5]; // 800F7DCC
L_800F7DD0:;
  c->r[11]=R32(c->r[3]+0xFFFFFFFFu); // 800F7DD0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7DD4
  c->r[28]=c->r[11]&c->r[0]; // 800F7DD8
  c->r[11]=R32(c->r[3]+0x00000003u); // 800F7DDC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7DE0
  c->r[29]=c->r[11]&c->r[0]; // 800F7DE4
  c->r[31]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F7DE8
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F7DEC
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7DF0
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7DF4
  c->r[12]=c->r[31]+c->r[12]; // 800F7DF8
  c->r[11]=c->r[30]+c->r[11]; // 800F7DFC
  c->r[11]=c->r[12]+c->r[11]; // 800F7E00
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E04
  c->r[11]=c->r[11]&c->r[0]; // 800F7E08
  c->r[7]=c->r[7]+c->r[11]; // 800F7E0C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F7E10
  c->r[7]=c->r[11]|c->r[11]; // 800F7E14
  c->r[11]=R32(c->r[3]+0x00000007u); // 800F7E18
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E1C
  c->r[28]=c->r[11]&c->r[0]; // 800F7E20
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F7E24
  c->r[12]=rotl(c->r[28],8)&0x000000FFu; // 800F7E28
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7E2C
  c->r[11]=rotl(c->r[28],16)&0x0000FFFFu; // 800F7E30
  c->r[12]=c->r[31]+c->r[12]; // 800F7E34
  c->r[11]=c->r[30]+c->r[11]; // 800F7E38
  c->r[11]=c->r[12]+c->r[11]; // 800F7E3C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E40
  c->r[11]=c->r[11]&c->r[0]; // 800F7E44
  c->r[8]=c->r[8]+c->r[11]; // 800F7E48
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F7E4C
  c->r[8]=c->r[11]|c->r[11]; // 800F7E50
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F7E54
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E58
  c->r[29]=c->r[11]&c->r[0]; // 800F7E5C
  c->r[30]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F7E60
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F7E64
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F7E68
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F7E6C
  c->r[12]=c->r[30]+c->r[12]; // 800F7E70
  c->r[11]=c->r[31]+c->r[11]; // 800F7E74
  c->r[11]=c->r[12]+c->r[11]; // 800F7E78
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E7C
  c->r[11]=c->r[11]&c->r[0]; // 800F7E80
  c->r[9]=c->r[9]+c->r[11]; // 800F7E84
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F7E88
  c->r[9]=c->r[11]|c->r[11]; // 800F7E8C
  c->r[11]=R16(c->r[3]+0x0000000Fu); // 800F7E90
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7E94
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F7E98
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F7E9C
  c->r[12]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F7EA0
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F7EA4
  c->r[12]=c->r[31]+c->r[12]; // 800F7EA8
  c->r[11]=c->r[11]+c->r[28]; // 800F7EAC
  c->r[11]=c->r[12]+c->r[11]; // 800F7EB0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F7EB4
  c->r[11]=c->r[11]&c->r[0]; // 800F7EB8
  c->r[10]=c->r[10]+c->r[11]; // 800F7EBC
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F7EC0
  c->r[10]=c->r[11]|c->r[11]; // 800F7EC4
  c->r[3]=c->r[3]+c->r[5]; // 800F7EC8
  c->r[4]=c->r[4]+c->r[5]; // 800F7ECC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F7ED0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7DD0; } // 800F7ED4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7ED8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F7EDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F7EE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F7EE4
  c->r[1]=c->r[1]+0x00000020u; // 800F7EE8
  return; // 800F7EEC
}

// fn_800F7EF0
void f_800F7EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7EF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7EF8
  c->r[6]=0u+0x00000002u; // 800F7EFC
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F7F00
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F7F04
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F7F08
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F7F0C
  c->r[0]=c->r[7]+c->r[0]; // 800F7F10
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F7F14
  c->r[7]=0u+0x7F7F0000u; // 800F7F18
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F7F1C
  c->r[7]=c->r[8]&c->r[0]; // 800F7F20
  c->r[10]=R32(c->r[3]+0x00000007u); // 800F7F24
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F7F28
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F7F2C
  c->r[8]=c->r[9]+c->r[8]; // 800F7F30
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F7F34
  c->r[8]=c->r[8]&c->r[0]; // 800F7F38
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F7F3C
  c->r[10]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F7F40
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800F7F44
  c->r[9]=c->r[10]+c->r[9]; // 800F7F48
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F7F4C
  c->r[9]=c->r[9]&c->r[0]; // 800F7F50
  c->r[11]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F7F54
  c->r[10]=R8(c->r[3]+0x0000000Fu); // 800F7F58
  c->r[10]=c->r[11]+c->r[10]; // 800F7F5C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F7F60
  c->r[10]=c->r[10]&c->r[0]; // 800F7F64
  c->r[12]=c->r[3]+c->r[5]; // 800F7F68
L_800F7F6C:;
  c->r[31]=R32(c->r[12]+0x00000003u); // 800F7F6C
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F7F70
  c->r[11]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F7F74
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F7F78
  c->r[3]=c->r[11]+c->r[3]; // 800F7F7C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7F80
  c->r[11]=c->r[3]&c->r[0]; // 800F7F84
  c->r[3]=c->r[7]+c->r[11]; // 800F7F88
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F7F8C
  c->r[7]=c->r[11]|c->r[11]; // 800F7F90
  c->r[30]=R32(c->r[12]+0x00000007u); // 800F7F94
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F7F98
  c->r[3]=rotl(c->r[30],8)&0x000000FFu; // 800F7F9C
  c->r[3]=c->r[11]+c->r[3]; // 800F7FA0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7FA4
  c->r[11]=c->r[3]&c->r[0]; // 800F7FA8
  c->r[3]=c->r[8]+c->r[11]; // 800F7FAC
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F7FB0
  c->r[8]=c->r[11]|c->r[11]; // 800F7FB4
  c->r[31]=R32(c->r[12]+0x0000000Bu); // 800F7FB8
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F7FBC
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F7FC0
  c->r[3]=c->r[11]+c->r[3]; // 800F7FC4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7FC8
  c->r[11]=c->r[3]&c->r[0]; // 800F7FCC
  c->r[3]=c->r[9]+c->r[11]; // 800F7FD0
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F7FD4
  c->r[9]=c->r[11]|c->r[11]; // 800F7FD8
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F7FDC
  c->r[3]=R8(c->r[12]+0x0000000Fu); // 800F7FE0
  c->r[3]=c->r[11]+c->r[3]; // 800F7FE4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F7FE8
  c->r[11]=c->r[3]&c->r[0]; // 800F7FEC
  c->r[3]=c->r[10]+c->r[11]; // 800F7FF0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F7FF4
  c->r[10]=c->r[11]|c->r[11]; // 800F7FF8
  c->r[12]=c->r[12]+c->r[5]; // 800F7FFC
  c->r[4]=c->r[4]+c->r[5]; // 800F8000
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8004
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7F6C; } // 800F8008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F800C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8010
  c->r[1]=c->r[1]+0x00000010u; // 800F8014
  return; // 800F8018
}

// fn_800F801C
void f_800F801C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F801C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8020
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8024
  c->r[6]=0u+0x00000002u; // 800F8028
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F802C
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F8030
  c->r[7]=0u+0x7F7F0000u; // 800F8034
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F8038
  c->r[9]=c->r[8]&c->r[0]; // 800F803C
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F8040
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8044
  c->r[10]=c->r[7]&c->r[0]; // 800F8048
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F804C
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F8050
  c->r[7]=c->r[9]+c->r[7]; // 800F8054
  c->r[7]=c->r[8]+c->r[7]; // 800F8058
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F805C
  c->r[7]=c->r[7]&c->r[0]; // 800F8060
  c->r[8]=R32(c->r[3]+0x00000008u); // 800F8064
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8068
  c->r[11]=c->r[8]&c->r[0]; // 800F806C
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F8070
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800F8074
  c->r[8]=c->r[10]+c->r[8]; // 800F8078
  c->r[8]=c->r[9]+c->r[8]; // 800F807C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8080
  c->r[8]=c->r[8]&c->r[0]; // 800F8084
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800F8088
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F808C
  c->r[12]=c->r[9]&c->r[0]; // 800F8090
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F8094
  c->r[10]=rotl(c->r[12],8)&0x000000FFu; // 800F8098
  c->r[9]=c->r[11]+c->r[9]; // 800F809C
  c->r[9]=c->r[10]+c->r[9]; // 800F80A0
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F80A4
  c->r[9]=c->r[9]&c->r[0]; // 800F80A8
  c->r[11]=R8(c->r[3]+0x00000010u); // 800F80AC
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F80B0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F80B4
  c->r[10]=c->r[12]+c->r[10]; // 800F80B8
  c->r[10]=c->r[11]+c->r[10]; // 800F80BC
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F80C0
  c->r[10]=c->r[10]&c->r[0]; // 800F80C4
  c->r[3]=c->r[3]+c->r[5]; // 800F80C8
L_800F80CC:;
  c->r[11]=R32(c->r[3]+0x00000000u); // 800F80CC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F80D0
  c->r[30]=c->r[11]&c->r[0]; // 800F80D4
  c->r[11]=R32(c->r[3]+0x00000004u); // 800F80D8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F80DC
  c->r[31]=c->r[11]&c->r[0]; // 800F80E0
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F80E4
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800F80E8
  c->r[11]=c->r[30]+c->r[11]; // 800F80EC
  c->r[11]=c->r[12]+c->r[11]; // 800F80F0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F80F4
  c->r[11]=c->r[11]&c->r[0]; // 800F80F8
  c->r[7]=c->r[7]+c->r[11]; // 800F80FC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F8100
  c->r[7]=c->r[11]|c->r[11]; // 800F8104
  c->r[11]=R32(c->r[3]+0x00000008u); // 800F8108
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F810C
  c->r[30]=c->r[11]&c->r[0]; // 800F8110
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F8114
  c->r[12]=rotl(c->r[30],8)&0x000000FFu; // 800F8118
  c->r[11]=c->r[31]+c->r[11]; // 800F811C
  c->r[11]=c->r[12]+c->r[11]; // 800F8120
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8124
  c->r[11]=c->r[11]&c->r[0]; // 800F8128
  c->r[8]=c->r[8]+c->r[11]; // 800F812C
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F8130
  c->r[8]=c->r[11]|c->r[11]; // 800F8134
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 800F8138
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F813C
  c->r[31]=c->r[11]&c->r[0]; // 800F8140
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F8144
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800F8148
  c->r[11]=c->r[30]+c->r[11]; // 800F814C
  c->r[11]=c->r[12]+c->r[11]; // 800F8150
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8154
  c->r[11]=c->r[11]&c->r[0]; // 800F8158
  c->r[9]=c->r[9]+c->r[11]; // 800F815C
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F8160
  c->r[9]=c->r[11]|c->r[11]; // 800F8164
  c->r[12]=R8(c->r[3]+0x00000010u); // 800F8168
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F816C
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 800F8170
  c->r[11]=c->r[31]+c->r[11]; // 800F8174
  c->r[11]=c->r[12]+c->r[11]; // 800F8178
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F817C
  c->r[11]=c->r[11]&c->r[0]; // 800F8180
  c->r[10]=c->r[10]+c->r[11]; // 800F8184
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F8188
  c->r[10]=c->r[11]|c->r[11]; // 800F818C
  c->r[3]=c->r[3]+c->r[5]; // 800F8190
  c->r[4]=c->r[4]+c->r[5]; // 800F8194
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8198
  if (!crb(c,2)) { IRQCHK(c); goto L_800F80CC; } // 800F819C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F81A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F81A4
  c->r[1]=c->r[1]+0x00000010u; // 800F81A8
  return; // 800F81AC
}

// fn_800F81B0
void f_800F81B0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 800F81B0
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F81B4
  c->r[7]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F81B8
  c->r[6]=0u+0x7F7F0000u; // 800F81BC
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F81C0
  c->r[7]=c->r[7]&c->r[9]; // 800F81C4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F81C8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F81CC
  c->r[6]=c->r[6]&c->r[9]; // 800F81D0
  c->r[8]=R32(c->r[3]+0x00000008u); // 800F81D4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F81D8
  c->r[12]=c->r[8]&c->r[9]; // 800F81DC
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 800F81E0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F81E4
  c->r[11]=c->r[8]&c->r[9]; // 800F81E8
  c->r[8]=c->r[3]+c->r[5]; // 800F81EC
L_800F81F0:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 800F81F0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F81F4
  c->r[10]=c->r[3]&c->r[9]; // 800F81F8
  c->r[3]=c->r[7]+c->r[10]; // 800F81FC
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F8200
  c->r[7]=c->r[10]|c->r[10]; // 800F8204
  c->r[3]=R32(c->r[8]+0x00000004u); // 800F8208
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F820C
  c->r[10]=c->r[3]&c->r[9]; // 800F8210
  c->r[3]=c->r[6]+c->r[10]; // 800F8214
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F8218
  c->r[6]=c->r[10]|c->r[10]; // 800F821C
  c->r[3]=R32(c->r[8]+0x00000008u); // 800F8220
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8224
  c->r[10]=c->r[3]&c->r[9]; // 800F8228
  c->r[3]=c->r[12]+c->r[10]; // 800F822C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F8230
  c->r[12]=c->r[10]|c->r[10]; // 800F8234
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 800F8238
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F823C
  c->r[10]=c->r[3]&c->r[9]; // 800F8240
  c->r[3]=c->r[11]+c->r[10]; // 800F8244
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F8248
  c->r[11]=c->r[10]|c->r[10]; // 800F824C
  c->r[8]=c->r[8]+c->r[5]; // 800F8250
  c->r[4]=c->r[4]+c->r[5]; // 800F8254
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F8258
  if (!crb(c,2)) { IRQCHK(c); goto L_800F81F0; } // 800F825C
  return; // 800F8260
}

// fn_800F8264
void f_800F8264(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 800F8264
  c->r[6]=0u+0x7F7F0000u; // 800F8268
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F826C
L_800F8270:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 800F8270
  c->r[6]=R32(c->r[3]+0x00000001u); // 800F8274
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8278
  c->r[10]=c->r[6]&c->r[8]; // 800F827C
  c->r[6]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F8280
  c->r[7]=rotl(c->r[7],23)&0xFF000000u; // 800F8284
  c->r[6]=c->r[10]+c->r[6]; // 800F8288
  c->r[6]=c->r[7]+c->r[6]; // 800F828C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F8290
  c->r[6]=R32(c->r[3]+0x00000005u); // 800F8294
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8298
  c->r[9]=c->r[6]&c->r[8]; // 800F829C
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800F82A0
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F82A4
  c->r[6]=c->r[9]+c->r[6]; // 800F82A8
  c->r[6]=c->r[7]+c->r[6]; // 800F82AC
  W32(c->r[4]+0x00000004u,c->r[6]); // 800F82B0
  c->r[6]=R32(c->r[3]+0x00000009u); // 800F82B4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F82B8
  c->r[10]=c->r[6]&c->r[8]; // 800F82BC
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F82C0
  c->r[7]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F82C4
  c->r[6]=c->r[10]+c->r[6]; // 800F82C8
  c->r[6]=c->r[7]+c->r[6]; // 800F82CC
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F82D0
  c->r[6]=R32(c->r[3]+0x0000000Du); // 800F82D4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F82D8
  c->r[9]=c->r[6]&c->r[8]; // 800F82DC
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800F82E0
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F82E4
  c->r[6]=c->r[9]+c->r[6]; // 800F82E8
  c->r[6]=c->r[7]+c->r[6]; // 800F82EC
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800F82F0
  c->r[3]=c->r[3]+c->r[5]; // 800F82F4
  c->r[4]=c->r[4]+c->r[5]; // 800F82F8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F82FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8270; } // 800F8300
  return; // 800F8304
}

// fn_800F8308
void f_800F8308(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F8308
L_800F830C:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F830C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F8310
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F8314
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F8318
  c->r[0]=c->r[6]+c->r[0]; // 800F831C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8320
  c->r[9]=R32(c->r[3]+0x00000005u); // 800F8324
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F8328
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F832C
  c->r[0]=c->r[6]+c->r[0]; // 800F8330
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8334
  c->r[8]=R32(c->r[3]+0x00000009u); // 800F8338
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F833C
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F8340
  c->r[0]=c->r[6]+c->r[0]; // 800F8344
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F8348
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F834C
  c->r[0]=R32(c->r[3]+0x0000000Du); // 800F8350
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F8354
  c->r[0]=c->r[6]+c->r[0]; // 800F8358
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F835C
  c->r[3]=c->r[3]+c->r[5]; // 800F8360
  c->r[4]=c->r[4]+c->r[5]; // 800F8364
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F8368
  if (!crb(c,2)) { IRQCHK(c); goto L_800F830C; } // 800F836C
  return; // 800F8370
}

// fn_800F8374
void f_800F8374(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F8374
  c->r[7]=0u+0x7F7F0000u; // 800F8378
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F837C
L_800F8380:;
  c->r[7]=R16(c->r[3]+0x00000000u); // 800F8380
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8384
  c->r[9]=c->r[7]&0x00007F7Fu; cr0(c,c->r[9]); // 800F8388
  c->r[7]=R32(c->r[3]+0x00000002u); // 800F838C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8390
  c->r[11]=c->r[7]&c->r[0]; // 800F8394
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F8398
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800F839C
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F83A0
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F83A4
  c->r[8]=c->r[10]+c->r[8]; // 800F83A8
  c->r[7]=c->r[9]+c->r[7]; // 800F83AC
  c->r[7]=c->r[8]+c->r[7]; // 800F83B0
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F83B4
  c->r[7]=R32(c->r[3]+0x00000006u); // 800F83B8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F83BC
  c->r[12]=c->r[7]&c->r[0]; // 800F83C0
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800F83C4
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F83C8
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800F83CC
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F83D0
  c->r[8]=c->r[10]+c->r[8]; // 800F83D4
  c->r[7]=c->r[9]+c->r[7]; // 800F83D8
  c->r[7]=c->r[8]+c->r[7]; // 800F83DC
  W32(c->r[4]+0x00000004u,c->r[7]); // 800F83E0
  c->r[7]=R32(c->r[3]+0x0000000Au); // 800F83E4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F83E8
  c->r[11]=c->r[7]&c->r[0]; // 800F83EC
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800F83F0
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800F83F4
  c->r[9]=rotl(c->r[12],24)&0xFF000000u; // 800F83F8
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F83FC
  c->r[8]=c->r[10]+c->r[8]; // 800F8400
  c->r[7]=c->r[9]+c->r[7]; // 800F8404
  c->r[7]=c->r[8]+c->r[7]; // 800F8408
  W32(c->r[4]+0x00000008u,c->r[7]); // 800F840C
  c->r[7]=R32(c->r[3]+0x0000000Eu); // 800F8410
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8414
  c->r[7]=c->r[7]&c->r[0]; // 800F8418
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800F841C
  c->r[8]=rotl(c->r[7],16)&0x0000FFFFu; // 800F8420
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800F8424
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 800F8428
  c->r[8]=c->r[10]+c->r[8]; // 800F842C
  c->r[7]=c->r[9]+c->r[7]; // 800F8430
  c->r[7]=c->r[8]+c->r[7]; // 800F8434
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800F8438
  c->r[3]=c->r[3]+c->r[5]; // 800F843C
  c->r[4]=c->r[4]+c->r[5]; // 800F8440
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8444
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8380; } // 800F8448
  return; // 800F844C
}

// fn_800F8450
void f_800F8450(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F8450
L_800F8454:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F8454
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F8458
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F845C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F8460
  c->r[0]=c->r[6]+c->r[0]; // 800F8464
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8468
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F846C
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F8470
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F8474
  c->r[0]=c->r[6]+c->r[0]; // 800F8478
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F847C
  c->r[8]=R32(c->r[3]+0x0000000Au); // 800F8480
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F8484
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F8488
  c->r[0]=c->r[6]+c->r[0]; // 800F848C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F8490
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F8494
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800F8498
  c->r[0]=c->r[6]+c->r[0]; // 800F849C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F84A0
  c->r[3]=c->r[3]+c->r[5]; // 800F84A4
  c->r[4]=c->r[4]+c->r[5]; // 800F84A8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F84AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8454; } // 800F84B0
  return; // 800F84B4
}

// fn_800F84B8
void f_800F84B8(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F84B8
  c->r[7]=0u+0x7F7F0000u; // 800F84BC
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F84C0
L_800F84C4:;
  c->r[7]=R32(c->r[3]+0xFFFFFFFFu); // 800F84C4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F84C8
  c->r[9]=c->r[7]&c->r[0]; // 800F84CC
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F84D0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F84D4
  c->r[11]=c->r[7]&c->r[0]; // 800F84D8
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F84DC
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F84E0
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F84E4
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F84E8
  c->r[8]=c->r[10]+c->r[8]; // 800F84EC
  c->r[7]=c->r[9]+c->r[7]; // 800F84F0
  c->r[7]=c->r[8]+c->r[7]; // 800F84F4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F84F8
  c->r[7]=R32(c->r[3]+0x00000007u); // 800F84FC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8500
  c->r[12]=c->r[7]&c->r[0]; // 800F8504
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F8508
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800F850C
  c->r[9]=rotl(c->r[11],16)&0xFFFF0000u; // 800F8510
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800F8514
  c->r[8]=c->r[10]+c->r[8]; // 800F8518
  c->r[7]=c->r[9]+c->r[7]; // 800F851C
  c->r[7]=c->r[8]+c->r[7]; // 800F8520
  W32(c->r[4]+0x00000004u,c->r[7]); // 800F8524
  c->r[7]=R32(c->r[3]+0x0000000Bu); // 800F8528
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F852C
  c->r[11]=c->r[7]&c->r[0]; // 800F8530
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F8534
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F8538
  c->r[9]=rotl(c->r[12],16)&0xFFFF0000u; // 800F853C
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F8540
  c->r[8]=c->r[10]+c->r[8]; // 800F8544
  c->r[7]=c->r[9]+c->r[7]; // 800F8548
  c->r[7]=c->r[8]+c->r[7]; // 800F854C
  W32(c->r[4]+0x00000008u,c->r[7]); // 800F8550
  c->r[7]=R16(c->r[3]+0x0000000Fu); // 800F8554
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8558
  c->r[10]=c->r[7]&0x00007F7Fu; cr0(c,c->r[10]); // 800F855C
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F8560
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F8564
  c->r[7]=rotl(c->r[11],16)&0xFFFF0000u; // 800F8568
  c->r[8]=c->r[9]+c->r[8]; // 800F856C
  c->r[7]=c->r[7]+c->r[10]; // 800F8570
  c->r[7]=c->r[8]+c->r[7]; // 800F8574
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800F8578
  c->r[3]=c->r[3]+c->r[5]; // 800F857C
  c->r[4]=c->r[4]+c->r[5]; // 800F8580
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8584
  if (!crb(c,2)) { IRQCHK(c); goto L_800F84C4; } // 800F8588
  return; // 800F858C
}

// fn_800F8590
void f_800F8590(Ctx* __restrict c) {
  c->r[7]=0u+0x00000002u; // 800F8590
L_800F8594:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F8594
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F8598
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F859C
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F85A0
  c->r[0]=c->r[6]+c->r[0]; // 800F85A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F85A8
  c->r[9]=R32(c->r[3]+0x00000007u); // 800F85AC
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F85B0
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F85B4
  c->r[0]=c->r[6]+c->r[0]; // 800F85B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F85BC
  c->r[8]=R32(c->r[3]+0x0000000Bu); // 800F85C0
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F85C4
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F85C8
  c->r[0]=c->r[6]+c->r[0]; // 800F85CC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F85D0
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F85D4
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800F85D8
  c->r[0]=c->r[6]+c->r[0]; // 800F85DC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F85E0
  c->r[3]=c->r[3]+c->r[5]; // 800F85E4
  c->r[4]=c->r[4]+c->r[5]; // 800F85E8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F85EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8594; } // 800F85F0
  return; // 800F85F4
}

// fn_800F85F8
void f_800F85F8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 800F85F8
  c->r[6]=0u+0x7F7F0000u; // 800F85FC
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F8600
L_800F8604:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F8604
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8608
  c->r[10]=c->r[6]&c->r[8]; // 800F860C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F8610
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8614
  c->r[9]=c->r[6]&c->r[8]; // 800F8618
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F861C
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800F8620
  c->r[6]=c->r[10]+c->r[6]; // 800F8624
  c->r[6]=c->r[7]+c->r[6]; // 800F8628
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F862C
  c->r[6]=R32(c->r[3]+0x00000008u); // 800F8630
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8634
  c->r[10]=c->r[6]&c->r[8]; // 800F8638
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F863C
  c->r[7]=rotl(c->r[10],8)&0x000000FFu; // 800F8640
  c->r[6]=c->r[9]+c->r[6]; // 800F8644
  c->r[6]=c->r[7]+c->r[6]; // 800F8648
  W32(c->r[4]+0x00000004u,c->r[6]); // 800F864C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800F8650
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F8654
  c->r[9]=c->r[6]&c->r[8]; // 800F8658
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F865C
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800F8660
  c->r[6]=c->r[10]+c->r[6]; // 800F8664
  c->r[6]=c->r[7]+c->r[6]; // 800F8668
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F866C
  c->r[7]=R8(c->r[3]+0x00000010u); // 800F8670
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F8674
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8678
  c->r[6]=c->r[9]+c->r[6]; // 800F867C
  c->r[6]=c->r[7]+c->r[6]; // 800F8680
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800F8684
  c->r[3]=c->r[3]+c->r[5]; // 800F8688
  c->r[4]=c->r[4]+c->r[5]; // 800F868C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F8690
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8604; } // 800F8694
  return; // 800F8698
}

// fn_800F869C
void f_800F869C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000002u; // 800F869C
L_800F86A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F86A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F86A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F86A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F86AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F86B0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F86B4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800F86B8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F86BC
  c->r[3]=c->r[3]+c->r[5]; // 800F86C0
  c->r[4]=c->r[4]+c->r[5]; // 800F86C4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F86C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F86A0; } // 800F86CC
  return; // 800F86D0
}

// fn_800F86D4
void f_800F86D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F86D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F86D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F86DC
  c->r[6]=0u+0x00000004u; // 800F86E0
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F86E4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F86E8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F86EC
  c->r[7]=0u+0x7F7F0000u; // 800F86F0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F86F4
  c->r[9]=c->r[8]&c->r[0]; // 800F86F8
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F86FC
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F8700
  c->r[7]=c->r[9]+c->r[7]; // 800F8704
  c->r[7]=c->r[8]+c->r[7]; // 800F8708
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F870C
  c->r[7]=c->r[7]&c->r[0]; // 800F8710
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F8714
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8718
  c->r[10]=c->r[8]&c->r[0]; // 800F871C
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F8720
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F8724
  c->r[8]=c->r[10]+c->r[8]; // 800F8728
  c->r[8]=c->r[9]+c->r[8]; // 800F872C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8730
  c->r[8]=c->r[8]&c->r[0]; // 800F8734
  c->r[9]=R32(c->r[3]+0x00000009u); // 800F8738
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F873C
  c->r[11]=c->r[9]&c->r[0]; // 800F8740
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 800F8744
  c->r[10]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F8748
  c->r[9]=c->r[11]+c->r[9]; // 800F874C
  c->r[9]=c->r[10]+c->r[9]; // 800F8750
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8754
  c->r[9]=c->r[9]&c->r[0]; // 800F8758
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F875C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8760
  c->r[12]=c->r[10]&c->r[0]; // 800F8764
  c->r[10]=rotl(c->r[11],24)&0xFF000000u; // 800F8768
  c->r[11]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F876C
  c->r[10]=c->r[12]+c->r[10]; // 800F8770
  c->r[10]=c->r[11]+c->r[10]; // 800F8774
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8778
  c->r[10]=c->r[10]&c->r[0]; // 800F877C
  c->r[3]=c->r[3]+c->r[5]; // 800F8780
L_800F8784:;
  c->r[12]=R8(c->r[3]+0x00000000u); // 800F8784
  c->r[11]=R32(c->r[3]+0x00000001u); // 800F8788
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F878C
  c->r[30]=c->r[11]&c->r[0]; // 800F8790
  c->r[11]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F8794
  c->r[12]=rotl(c->r[12],23)&0xFF000000u; // 800F8798
  c->r[11]=c->r[30]+c->r[11]; // 800F879C
  c->r[11]=c->r[12]+c->r[11]; // 800F87A0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F87A4
  c->r[11]=c->r[11]&c->r[0]; // 800F87A8
  c->r[7]=c->r[7]+c->r[11]; // 800F87AC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F87B0
  c->r[7]=c->r[11]|c->r[11]; // 800F87B4
  c->r[11]=R32(c->r[3]+0x00000005u); // 800F87B8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F87BC
  c->r[31]=c->r[11]&c->r[0]; // 800F87C0
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F87C4
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F87C8
  c->r[11]=c->r[31]+c->r[11]; // 800F87CC
  c->r[11]=c->r[12]+c->r[11]; // 800F87D0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F87D4
  c->r[11]=c->r[11]&c->r[0]; // 800F87D8
  c->r[8]=c->r[8]+c->r[11]; // 800F87DC
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F87E0
  c->r[8]=c->r[11]|c->r[11]; // 800F87E4
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F87E8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F87EC
  c->r[30]=c->r[11]&c->r[0]; // 800F87F0
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F87F4
  c->r[12]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F87F8
  c->r[11]=c->r[30]+c->r[11]; // 800F87FC
  c->r[11]=c->r[12]+c->r[11]; // 800F8800
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8804
  c->r[11]=c->r[11]&c->r[0]; // 800F8808
  c->r[9]=c->r[9]+c->r[11]; // 800F880C
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F8810
  c->r[9]=c->r[11]|c->r[11]; // 800F8814
  c->r[11]=R32(c->r[3]+0x0000000Du); // 800F8818
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F881C
  c->r[31]=c->r[11]&c->r[0]; // 800F8820
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F8824
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F8828
  c->r[11]=c->r[31]+c->r[11]; // 800F882C
  c->r[11]=c->r[12]+c->r[11]; // 800F8830
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8834
  c->r[11]=c->r[11]&c->r[0]; // 800F8838
  c->r[10]=c->r[10]+c->r[11]; // 800F883C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F8840
  c->r[10]=c->r[11]|c->r[11]; // 800F8844
  c->r[3]=c->r[3]+c->r[5]; // 800F8848
  c->r[4]=c->r[4]+c->r[5]; // 800F884C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8850
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8784; } // 800F8854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8858
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F885C
  c->r[1]=c->r[1]+0x00000010u; // 800F8860
  return; // 800F8864
}

// fn_800F8868
void f_800F8868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F886C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8870
  c->r[6]=0u+0x00000004u; // 800F8874
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F8878
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F887C
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800F8880
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F8884
  c->r[0]=c->r[7]+c->r[0]; // 800F8888
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F888C
  c->r[7]=0u+0x7F7F0000u; // 800F8890
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F8894
  c->r[7]=c->r[8]&c->r[0]; // 800F8898
  c->r[10]=R32(c->r[3]+0x00000005u); // 800F889C
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F88A0
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F88A4
  c->r[8]=c->r[9]+c->r[8]; // 800F88A8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F88AC
  c->r[8]=c->r[8]&c->r[0]; // 800F88B0
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F88B4
  c->r[10]=rotl(c->r[10],24)&0xFF000000u; // 800F88B8
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F88BC
  c->r[9]=c->r[10]+c->r[9]; // 800F88C0
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F88C4
  c->r[9]=c->r[9]&c->r[0]; // 800F88C8
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F88CC
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F88D0
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F88D4
  c->r[10]=c->r[11]+c->r[10]; // 800F88D8
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F88DC
  c->r[10]=c->r[10]&c->r[0]; // 800F88E0
  c->r[12]=c->r[3]+c->r[5]; // 800F88E4
L_800F88E8:;
  c->r[31]=R32(c->r[12]+0x00000001u); // 800F88E8
  c->r[3]=R8(c->r[12]+0x00000000u); // 800F88EC
  c->r[11]=rotl(c->r[3],24)&0xFF000000u; // 800F88F0
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F88F4
  c->r[3]=c->r[11]+c->r[3]; // 800F88F8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F88FC
  c->r[11]=c->r[3]&c->r[0]; // 800F8900
  c->r[3]=c->r[7]+c->r[11]; // 800F8904
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F8908
  c->r[7]=c->r[11]|c->r[11]; // 800F890C
  c->r[30]=R32(c->r[12]+0x00000005u); // 800F8910
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F8914
  c->r[3]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F8918
  c->r[3]=c->r[11]+c->r[3]; // 800F891C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8920
  c->r[11]=c->r[3]&c->r[0]; // 800F8924
  c->r[3]=c->r[8]+c->r[11]; // 800F8928
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F892C
  c->r[8]=c->r[11]|c->r[11]; // 800F8930
  c->r[31]=R32(c->r[12]+0x00000009u); // 800F8934
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F8938
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F893C
  c->r[3]=c->r[11]+c->r[3]; // 800F8940
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8944
  c->r[11]=c->r[3]&c->r[0]; // 800F8948
  c->r[3]=c->r[9]+c->r[11]; // 800F894C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F8950
  c->r[9]=c->r[11]|c->r[11]; // 800F8954
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F8958
  c->r[3]=R32(c->r[12]+0x0000000Du); // 800F895C
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 800F8960
  c->r[3]=c->r[11]+c->r[3]; // 800F8964
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8968
  c->r[11]=c->r[3]&c->r[0]; // 800F896C
  c->r[3]=c->r[10]+c->r[11]; // 800F8970
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F8974
  c->r[10]=c->r[11]|c->r[11]; // 800F8978
  c->r[12]=c->r[12]+c->r[5]; // 800F897C
  c->r[4]=c->r[4]+c->r[5]; // 800F8980
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8984
  if (!crb(c,2)) { IRQCHK(c); goto L_800F88E8; } // 800F8988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F898C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8990
  c->r[1]=c->r[1]+0x00000010u; // 800F8994
  return; // 800F8998
}

// fn_800F899C
void f_800F899C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F899C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F89A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F89A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F89A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F89AC
  c->r[6]=0u+0x00000004u; // 800F89B0
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F89B4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F89B8
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F89BC
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F89C0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F89C4
  c->r[7]=0u+0x7F7F0000u; // 800F89C8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F89CC
  c->r[12]=c->r[8]&c->r[0]; // 800F89D0
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F89D4
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F89D8
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F89DC
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F89E0
  c->r[8]=c->r[10]+c->r[8]; // 800F89E4
  c->r[7]=c->r[9]+c->r[7]; // 800F89E8
  c->r[7]=c->r[8]+c->r[7]; // 800F89EC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F89F0
  c->r[7]=c->r[7]&c->r[0]; // 800F89F4
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F89F8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F89FC
  c->r[29]=c->r[8]&c->r[0]; // 800F8A00
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F8A04
  c->r[9]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8A08
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F8A0C
  c->r[8]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F8A10
  c->r[9]=c->r[11]+c->r[9]; // 800F8A14
  c->r[8]=c->r[10]+c->r[8]; // 800F8A18
  c->r[8]=c->r[9]+c->r[8]; // 800F8A1C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8A20
  c->r[8]=c->r[8]&c->r[0]; // 800F8A24
  c->r[9]=R32(c->r[3]+0x0000000Au); // 800F8A28
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8A2C
  c->r[28]=c->r[9]&c->r[0]; // 800F8A30
  c->r[12]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8A34
  c->r[10]=rotl(c->r[28],16)&0x0000FFFFu; // 800F8A38
  c->r[11]=rotl(c->r[29],24)&0xFF000000u; // 800F8A3C
  c->r[9]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F8A40
  c->r[10]=c->r[12]+c->r[10]; // 800F8A44
  c->r[9]=c->r[11]+c->r[9]; // 800F8A48
  c->r[9]=c->r[10]+c->r[9]; // 800F8A4C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8A50
  c->r[9]=c->r[9]&c->r[0]; // 800F8A54
  c->r[10]=R32(c->r[3]+0x0000000Eu); // 800F8A58
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8A5C
  c->r[10]=c->r[10]&c->r[0]; // 800F8A60
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8A64
  c->r[11]=rotl(c->r[10],16)&0x0000FFFFu; // 800F8A68
  c->r[12]=rotl(c->r[28],24)&0xFF000000u; // 800F8A6C
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F8A70
  c->r[11]=c->r[30]+c->r[11]; // 800F8A74
  c->r[10]=c->r[12]+c->r[10]; // 800F8A78
  c->r[10]=c->r[11]+c->r[10]; // 800F8A7C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8A80
  c->r[10]=c->r[10]&c->r[0]; // 800F8A84
  c->r[3]=c->r[3]+c->r[5]; // 800F8A88
L_800F8A8C:;
  c->r[11]=R16(c->r[3]+0x00000000u); // 800F8A8C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8A90
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F8A94
  c->r[11]=R32(c->r[3]+0x00000002u); // 800F8A98
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8A9C
  c->r[29]=c->r[11]&c->r[0]; // 800F8AA0
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8AA4
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8AA8
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F8AAC
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F8AB0
  c->r[12]=c->r[31]+c->r[12]; // 800F8AB4
  c->r[11]=c->r[30]+c->r[11]; // 800F8AB8
  c->r[11]=c->r[12]+c->r[11]; // 800F8ABC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8AC0
  c->r[11]=c->r[11]&c->r[0]; // 800F8AC4
  c->r[7]=c->r[7]+c->r[11]; // 800F8AC8
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F8ACC
  c->r[7]=c->r[11]|c->r[11]; // 800F8AD0
  c->r[11]=R32(c->r[3]+0x00000006u); // 800F8AD4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8AD8
  c->r[28]=c->r[11]&c->r[0]; // 800F8ADC
  c->r[31]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8AE0
  c->r[12]=rotl(c->r[28],16)&0x0000FFFFu; // 800F8AE4
  c->r[30]=rotl(c->r[29],24)&0xFF000000u; // 800F8AE8
  c->r[11]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F8AEC
  c->r[12]=c->r[31]+c->r[12]; // 800F8AF0
  c->r[11]=c->r[30]+c->r[11]; // 800F8AF4
  c->r[11]=c->r[12]+c->r[11]; // 800F8AF8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8AFC
  c->r[11]=c->r[11]&c->r[0]; // 800F8B00
  c->r[8]=c->r[8]+c->r[11]; // 800F8B04
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F8B08
  c->r[8]=c->r[11]|c->r[11]; // 800F8B0C
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F8B10
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8B14
  c->r[29]=c->r[11]&c->r[0]; // 800F8B18
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8B1C
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8B20
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F8B24
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F8B28
  c->r[12]=c->r[31]+c->r[12]; // 800F8B2C
  c->r[11]=c->r[30]+c->r[11]; // 800F8B30
  c->r[11]=c->r[12]+c->r[11]; // 800F8B34
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8B38
  c->r[11]=c->r[11]&c->r[0]; // 800F8B3C
  c->r[9]=c->r[9]+c->r[11]; // 800F8B40
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F8B44
  c->r[9]=c->r[11]|c->r[11]; // 800F8B48
  c->r[11]=R32(c->r[3]+0x0000000Eu); // 800F8B4C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8B50
  c->r[11]=c->r[11]&c->r[0]; // 800F8B54
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8B58
  c->r[12]=rotl(c->r[11],16)&0x0000FFFFu; // 800F8B5C
  c->r[31]=rotl(c->r[29],24)&0xFF000000u; // 800F8B60
  c->r[11]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F8B64
  c->r[12]=c->r[30]+c->r[12]; // 800F8B68
  c->r[11]=c->r[31]+c->r[11]; // 800F8B6C
  c->r[11]=c->r[12]+c->r[11]; // 800F8B70
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8B74
  c->r[11]=c->r[11]&c->r[0]; // 800F8B78
  c->r[10]=c->r[10]+c->r[11]; // 800F8B7C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F8B80
  c->r[10]=c->r[11]|c->r[11]; // 800F8B84
  c->r[3]=c->r[3]+c->r[5]; // 800F8B88
  c->r[4]=c->r[4]+c->r[5]; // 800F8B8C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8B90
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8A8C; } // 800F8B94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8B98
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8B9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8BA0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F8BA4
  c->r[1]=c->r[1]+0x00000020u; // 800F8BA8
  return; // 800F8BAC
}

// fn_800F8BB0
void f_800F8BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8BB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8BB8
  c->r[6]=0u+0x00000004u; // 800F8BBC
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F8BC0
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F8BC4
  c->r[7]=rotl(c->r[0],16)&0xFFFF0000u; // 800F8BC8
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F8BCC
  c->r[0]=c->r[7]+c->r[0]; // 800F8BD0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F8BD4
  c->r[7]=0u+0x7F7F0000u; // 800F8BD8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F8BDC
  c->r[7]=c->r[8]&c->r[0]; // 800F8BE0
  c->r[10]=R32(c->r[3]+0x00000006u); // 800F8BE4
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F8BE8
  c->r[8]=rotl(c->r[10],16)&0x0000FFFFu; // 800F8BEC
  c->r[8]=c->r[9]+c->r[8]; // 800F8BF0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8BF4
  c->r[8]=c->r[8]&c->r[0]; // 800F8BF8
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F8BFC
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F8C00
  c->r[9]=rotl(c->r[11],16)&0x0000FFFFu; // 800F8C04
  c->r[9]=c->r[10]+c->r[9]; // 800F8C08
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8C0C
  c->r[9]=c->r[9]&c->r[0]; // 800F8C10
  c->r[11]=rotl(c->r[11],16)&0xFFFF0000u; // 800F8C14
  c->r[10]=R16(c->r[3]+0x0000000Eu); // 800F8C18
  c->r[10]=c->r[11]+c->r[10]; // 800F8C1C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8C20
  c->r[10]=c->r[10]&c->r[0]; // 800F8C24
  c->r[12]=c->r[3]+c->r[5]; // 800F8C28
L_800F8C2C:;
  c->r[31]=R32(c->r[12]+0x00000002u); // 800F8C2C
  c->r[3]=R16(c->r[12]+0x00000000u); // 800F8C30
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 800F8C34
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F8C38
  c->r[3]=c->r[11]+c->r[3]; // 800F8C3C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8C40
  c->r[11]=c->r[3]&c->r[0]; // 800F8C44
  c->r[3]=c->r[7]+c->r[11]; // 800F8C48
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F8C4C
  c->r[7]=c->r[11]|c->r[11]; // 800F8C50
  c->r[30]=R32(c->r[12]+0x00000006u); // 800F8C54
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F8C58
  c->r[3]=rotl(c->r[30],16)&0x0000FFFFu; // 800F8C5C
  c->r[3]=c->r[11]+c->r[3]; // 800F8C60
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8C64
  c->r[11]=c->r[3]&c->r[0]; // 800F8C68
  c->r[3]=c->r[8]+c->r[11]; // 800F8C6C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F8C70
  c->r[8]=c->r[11]|c->r[11]; // 800F8C74
  c->r[31]=R32(c->r[12]+0x0000000Au); // 800F8C78
  c->r[11]=rotl(c->r[30],16)&0xFFFF0000u; // 800F8C7C
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F8C80
  c->r[3]=c->r[11]+c->r[3]; // 800F8C84
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8C88
  c->r[11]=c->r[3]&c->r[0]; // 800F8C8C
  c->r[3]=c->r[9]+c->r[11]; // 800F8C90
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F8C94
  c->r[9]=c->r[11]|c->r[11]; // 800F8C98
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F8C9C
  c->r[3]=R16(c->r[12]+0x0000000Eu); // 800F8CA0
  c->r[3]=c->r[11]+c->r[3]; // 800F8CA4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8CA8
  c->r[11]=c->r[3]&c->r[0]; // 800F8CAC
  c->r[3]=c->r[10]+c->r[11]; // 800F8CB0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F8CB4
  c->r[10]=c->r[11]|c->r[11]; // 800F8CB8
  c->r[12]=c->r[12]+c->r[5]; // 800F8CBC
  c->r[4]=c->r[4]+c->r[5]; // 800F8CC0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8CC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8C2C; } // 800F8CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8CD0
  c->r[1]=c->r[1]+0x00000010u; // 800F8CD4
  return; // 800F8CD8
}

// fn_800F8CDC
void f_800F8CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8CDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F8CE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F8CE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F8CE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F8CEC
  c->r[6]=0u+0x00000004u; // 800F8CF0
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F8CF4
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F8CF8
  c->r[7]=0u+0x7F7F0000u; // 800F8CFC
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F8D00
  c->r[9]=c->r[8]&c->r[0]; // 800F8D04
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F8D08
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8D0C
  c->r[12]=c->r[7]&c->r[0]; // 800F8D10
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F8D14
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800F8D18
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F8D1C
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800F8D20
  c->r[8]=c->r[10]+c->r[8]; // 800F8D24
  c->r[7]=c->r[9]+c->r[7]; // 800F8D28
  c->r[7]=c->r[8]+c->r[7]; // 800F8D2C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F8D30
  c->r[7]=c->r[7]&c->r[0]; // 800F8D34
  c->r[8]=R32(c->r[3]+0x00000007u); // 800F8D38
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8D3C
  c->r[29]=c->r[8]&c->r[0]; // 800F8D40
  c->r[11]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F8D44
  c->r[9]=rotl(c->r[29],8)&0x000000FFu; // 800F8D48
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800F8D4C
  c->r[8]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8D50
  c->r[9]=c->r[11]+c->r[9]; // 800F8D54
  c->r[8]=c->r[10]+c->r[8]; // 800F8D58
  c->r[8]=c->r[9]+c->r[8]; // 800F8D5C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8D60
  c->r[8]=c->r[8]&c->r[0]; // 800F8D64
  c->r[9]=R32(c->r[3]+0x0000000Bu); // 800F8D68
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8D6C
  c->r[28]=c->r[9]&c->r[0]; // 800F8D70
  c->r[12]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F8D74
  c->r[10]=rotl(c->r[28],8)&0x000000FFu; // 800F8D78
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8D7C
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 800F8D80
  c->r[10]=c->r[12]+c->r[10]; // 800F8D84
  c->r[9]=c->r[11]+c->r[9]; // 800F8D88
  c->r[9]=c->r[10]+c->r[9]; // 800F8D8C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8D90
  c->r[9]=c->r[9]&c->r[0]; // 800F8D94
  c->r[10]=R16(c->r[3]+0x0000000Fu); // 800F8D98
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8D9C
  c->r[29]=c->r[10]&0x00007F7Fu; cr0(c,c->r[29]); // 800F8DA0
  c->r[12]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F8DA4
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F8DA8
  c->r[10]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8DAC
  c->r[11]=c->r[12]+c->r[11]; // 800F8DB0
  c->r[10]=c->r[10]+c->r[29]; // 800F8DB4
  c->r[10]=c->r[11]+c->r[10]; // 800F8DB8
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8DBC
  c->r[10]=c->r[10]&c->r[0]; // 800F8DC0
  c->r[3]=c->r[3]+c->r[5]; // 800F8DC4
L_800F8DC8:;
  c->r[11]=R32(c->r[3]+0xFFFFFFFFu); // 800F8DC8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8DCC
  c->r[28]=c->r[11]&c->r[0]; // 800F8DD0
  c->r[11]=R32(c->r[3]+0x00000003u); // 800F8DD4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8DD8
  c->r[29]=c->r[11]&c->r[0]; // 800F8DDC
  c->r[31]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F8DE0
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F8DE4
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8DE8
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8DEC
  c->r[12]=c->r[31]+c->r[12]; // 800F8DF0
  c->r[11]=c->r[30]+c->r[11]; // 800F8DF4
  c->r[11]=c->r[12]+c->r[11]; // 800F8DF8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8DFC
  c->r[11]=c->r[11]&c->r[0]; // 800F8E00
  c->r[7]=c->r[7]+c->r[11]; // 800F8E04
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F8E08
  c->r[7]=c->r[11]|c->r[11]; // 800F8E0C
  c->r[11]=R32(c->r[3]+0x00000007u); // 800F8E10
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8E14
  c->r[28]=c->r[11]&c->r[0]; // 800F8E18
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F8E1C
  c->r[12]=rotl(c->r[28],8)&0x000000FFu; // 800F8E20
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8E24
  c->r[11]=rotl(c->r[28],16)&0x0000FFFFu; // 800F8E28
  c->r[12]=c->r[31]+c->r[12]; // 800F8E2C
  c->r[11]=c->r[30]+c->r[11]; // 800F8E30
  c->r[11]=c->r[12]+c->r[11]; // 800F8E34
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8E38
  c->r[11]=c->r[11]&c->r[0]; // 800F8E3C
  c->r[8]=c->r[8]+c->r[11]; // 800F8E40
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F8E44
  c->r[8]=c->r[11]|c->r[11]; // 800F8E48
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F8E4C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8E50
  c->r[29]=c->r[11]&c->r[0]; // 800F8E54
  c->r[30]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F8E58
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F8E5C
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F8E60
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F8E64
  c->r[12]=c->r[30]+c->r[12]; // 800F8E68
  c->r[11]=c->r[31]+c->r[11]; // 800F8E6C
  c->r[11]=c->r[12]+c->r[11]; // 800F8E70
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8E74
  c->r[11]=c->r[11]&c->r[0]; // 800F8E78
  c->r[9]=c->r[9]+c->r[11]; // 800F8E7C
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F8E80
  c->r[9]=c->r[11]|c->r[11]; // 800F8E84
  c->r[11]=R16(c->r[3]+0x0000000Fu); // 800F8E88
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8E8C
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F8E90
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F8E94
  c->r[12]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F8E98
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F8E9C
  c->r[12]=c->r[31]+c->r[12]; // 800F8EA0
  c->r[11]=c->r[11]+c->r[28]; // 800F8EA4
  c->r[11]=c->r[12]+c->r[11]; // 800F8EA8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F8EAC
  c->r[11]=c->r[11]&c->r[0]; // 800F8EB0
  c->r[10]=c->r[10]+c->r[11]; // 800F8EB4
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F8EB8
  c->r[10]=c->r[11]|c->r[11]; // 800F8EBC
  c->r[3]=c->r[3]+c->r[5]; // 800F8EC0
  c->r[4]=c->r[4]+c->r[5]; // 800F8EC4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8DC8; } // 800F8ECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8ED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8ED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8ED8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F8EDC
  c->r[1]=c->r[1]+0x00000020u; // 800F8EE0
  return; // 800F8EE4
}

// fn_800F8EE8
void f_800F8EE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8EEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8EF0
  c->r[6]=0u+0x00000004u; // 800F8EF4
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F8EF8
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F8EFC
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F8F00
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F8F04
  c->r[0]=c->r[7]+c->r[0]; // 800F8F08
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F8F0C
  c->r[7]=0u+0x7F7F0000u; // 800F8F10
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F8F14
  c->r[7]=c->r[8]&c->r[0]; // 800F8F18
  c->r[10]=R32(c->r[3]+0x00000007u); // 800F8F1C
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F8F20
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F8F24
  c->r[8]=c->r[9]+c->r[8]; // 800F8F28
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F8F2C
  c->r[8]=c->r[8]&c->r[0]; // 800F8F30
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F8F34
  c->r[10]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F8F38
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800F8F3C
  c->r[9]=c->r[10]+c->r[9]; // 800F8F40
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F8F44
  c->r[9]=c->r[9]&c->r[0]; // 800F8F48
  c->r[11]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F8F4C
  c->r[10]=R8(c->r[3]+0x0000000Fu); // 800F8F50
  c->r[10]=c->r[11]+c->r[10]; // 800F8F54
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F8F58
  c->r[10]=c->r[10]&c->r[0]; // 800F8F5C
  c->r[12]=c->r[3]+c->r[5]; // 800F8F60
L_800F8F64:;
  c->r[31]=R32(c->r[12]+0x00000003u); // 800F8F64
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F8F68
  c->r[11]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F8F6C
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F8F70
  c->r[3]=c->r[11]+c->r[3]; // 800F8F74
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8F78
  c->r[11]=c->r[3]&c->r[0]; // 800F8F7C
  c->r[3]=c->r[7]+c->r[11]; // 800F8F80
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F8F84
  c->r[7]=c->r[11]|c->r[11]; // 800F8F88
  c->r[30]=R32(c->r[12]+0x00000007u); // 800F8F8C
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F8F90
  c->r[3]=rotl(c->r[30],8)&0x000000FFu; // 800F8F94
  c->r[3]=c->r[11]+c->r[3]; // 800F8F98
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8F9C
  c->r[11]=c->r[3]&c->r[0]; // 800F8FA0
  c->r[3]=c->r[8]+c->r[11]; // 800F8FA4
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F8FA8
  c->r[8]=c->r[11]|c->r[11]; // 800F8FAC
  c->r[31]=R32(c->r[12]+0x0000000Bu); // 800F8FB0
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F8FB4
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F8FB8
  c->r[3]=c->r[11]+c->r[3]; // 800F8FBC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8FC0
  c->r[11]=c->r[3]&c->r[0]; // 800F8FC4
  c->r[3]=c->r[9]+c->r[11]; // 800F8FC8
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F8FCC
  c->r[9]=c->r[11]|c->r[11]; // 800F8FD0
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F8FD4
  c->r[3]=R8(c->r[12]+0x0000000Fu); // 800F8FD8
  c->r[3]=c->r[11]+c->r[3]; // 800F8FDC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F8FE0
  c->r[11]=c->r[3]&c->r[0]; // 800F8FE4
  c->r[3]=c->r[10]+c->r[11]; // 800F8FE8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F8FEC
  c->r[10]=c->r[11]|c->r[11]; // 800F8FF0
  c->r[12]=c->r[12]+c->r[5]; // 800F8FF4
  c->r[4]=c->r[4]+c->r[5]; // 800F8FF8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F8FFC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8F64; } // 800F9000
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9004
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9008
  c->r[1]=c->r[1]+0x00000010u; // 800F900C
  return; // 800F9010
}

// fn_800F9014
void f_800F9014(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9018
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F901C
  c->r[6]=0u+0x00000004u; // 800F9020
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9024
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F9028
  c->r[7]=0u+0x7F7F0000u; // 800F902C
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F9030
  c->r[9]=c->r[8]&c->r[0]; // 800F9034
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F9038
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F903C
  c->r[10]=c->r[7]&c->r[0]; // 800F9040
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F9044
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F9048
  c->r[7]=c->r[9]+c->r[7]; // 800F904C
  c->r[7]=c->r[8]+c->r[7]; // 800F9050
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9054
  c->r[7]=c->r[7]&c->r[0]; // 800F9058
  c->r[8]=R32(c->r[3]+0x00000008u); // 800F905C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9060
  c->r[11]=c->r[8]&c->r[0]; // 800F9064
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F9068
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800F906C
  c->r[8]=c->r[10]+c->r[8]; // 800F9070
  c->r[8]=c->r[9]+c->r[8]; // 800F9074
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9078
  c->r[8]=c->r[8]&c->r[0]; // 800F907C
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800F9080
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9084
  c->r[12]=c->r[9]&c->r[0]; // 800F9088
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F908C
  c->r[10]=rotl(c->r[12],8)&0x000000FFu; // 800F9090
  c->r[9]=c->r[11]+c->r[9]; // 800F9094
  c->r[9]=c->r[10]+c->r[9]; // 800F9098
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F909C
  c->r[9]=c->r[9]&c->r[0]; // 800F90A0
  c->r[11]=R8(c->r[3]+0x00000010u); // 800F90A4
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F90A8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F90AC
  c->r[10]=c->r[12]+c->r[10]; // 800F90B0
  c->r[10]=c->r[11]+c->r[10]; // 800F90B4
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F90B8
  c->r[10]=c->r[10]&c->r[0]; // 800F90BC
  c->r[3]=c->r[3]+c->r[5]; // 800F90C0
L_800F90C4:;
  c->r[11]=R32(c->r[3]+0x00000000u); // 800F90C4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F90C8
  c->r[30]=c->r[11]&c->r[0]; // 800F90CC
  c->r[11]=R32(c->r[3]+0x00000004u); // 800F90D0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F90D4
  c->r[31]=c->r[11]&c->r[0]; // 800F90D8
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F90DC
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800F90E0
  c->r[11]=c->r[30]+c->r[11]; // 800F90E4
  c->r[11]=c->r[12]+c->r[11]; // 800F90E8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F90EC
  c->r[11]=c->r[11]&c->r[0]; // 800F90F0
  c->r[7]=c->r[7]+c->r[11]; // 800F90F4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F90F8
  c->r[7]=c->r[11]|c->r[11]; // 800F90FC
  c->r[11]=R32(c->r[3]+0x00000008u); // 800F9100
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9104
  c->r[30]=c->r[11]&c->r[0]; // 800F9108
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F910C
  c->r[12]=rotl(c->r[30],8)&0x000000FFu; // 800F9110
  c->r[11]=c->r[31]+c->r[11]; // 800F9114
  c->r[11]=c->r[12]+c->r[11]; // 800F9118
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F911C
  c->r[11]=c->r[11]&c->r[0]; // 800F9120
  c->r[8]=c->r[8]+c->r[11]; // 800F9124
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F9128
  c->r[8]=c->r[11]|c->r[11]; // 800F912C
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 800F9130
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9134
  c->r[31]=c->r[11]&c->r[0]; // 800F9138
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F913C
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800F9140
  c->r[11]=c->r[30]+c->r[11]; // 800F9144
  c->r[11]=c->r[12]+c->r[11]; // 800F9148
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F914C
  c->r[11]=c->r[11]&c->r[0]; // 800F9150
  c->r[9]=c->r[9]+c->r[11]; // 800F9154
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F9158
  c->r[9]=c->r[11]|c->r[11]; // 800F915C
  c->r[12]=R8(c->r[3]+0x00000010u); // 800F9160
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F9164
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 800F9168
  c->r[11]=c->r[31]+c->r[11]; // 800F916C
  c->r[11]=c->r[12]+c->r[11]; // 800F9170
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9174
  c->r[11]=c->r[11]&c->r[0]; // 800F9178
  c->r[10]=c->r[10]+c->r[11]; // 800F917C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F9180
  c->r[10]=c->r[11]|c->r[11]; // 800F9184
  c->r[3]=c->r[3]+c->r[5]; // 800F9188
  c->r[4]=c->r[4]+c->r[5]; // 800F918C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9190
  if (!crb(c,2)) { IRQCHK(c); goto L_800F90C4; } // 800F9194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9198
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F919C
  c->r[1]=c->r[1]+0x00000010u; // 800F91A0
  return; // 800F91A4
}

// fn_800F91A8
void f_800F91A8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000004u; // 800F91A8
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F91AC
  c->r[7]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F91B0
  c->r[6]=0u+0x7F7F0000u; // 800F91B4
  c->r[9]=c->r[6]+0x00007F7Fu; // 800F91B8
  c->r[7]=c->r[7]&c->r[9]; // 800F91BC
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F91C0
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F91C4
  c->r[6]=c->r[6]&c->r[9]; // 800F91C8
  c->r[8]=R32(c->r[3]+0x00000008u); // 800F91CC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F91D0
  c->r[12]=c->r[8]&c->r[9]; // 800F91D4
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 800F91D8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F91DC
  c->r[11]=c->r[8]&c->r[9]; // 800F91E0
  c->r[8]=c->r[3]+c->r[5]; // 800F91E4
L_800F91E8:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 800F91E8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F91EC
  c->r[10]=c->r[3]&c->r[9]; // 800F91F0
  c->r[3]=c->r[7]+c->r[10]; // 800F91F4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F91F8
  c->r[7]=c->r[10]|c->r[10]; // 800F91FC
  c->r[3]=R32(c->r[8]+0x00000004u); // 800F9200
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9204
  c->r[10]=c->r[3]&c->r[9]; // 800F9208
  c->r[3]=c->r[6]+c->r[10]; // 800F920C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F9210
  c->r[6]=c->r[10]|c->r[10]; // 800F9214
  c->r[3]=R32(c->r[8]+0x00000008u); // 800F9218
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F921C
  c->r[10]=c->r[3]&c->r[9]; // 800F9220
  c->r[3]=c->r[12]+c->r[10]; // 800F9224
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F9228
  c->r[12]=c->r[10]|c->r[10]; // 800F922C
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 800F9230
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9234
  c->r[10]=c->r[3]&c->r[9]; // 800F9238
  c->r[3]=c->r[11]+c->r[10]; // 800F923C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F9240
  c->r[11]=c->r[10]|c->r[10]; // 800F9244
  c->r[8]=c->r[8]+c->r[5]; // 800F9248
  c->r[4]=c->r[4]+c->r[5]; // 800F924C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F9250
  if (!crb(c,2)) { IRQCHK(c); goto L_800F91E8; } // 800F9254
  return; // 800F9258
}

// fn_800F925C
void f_800F925C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000004u; // 800F925C
  c->r[6]=0u+0x7F7F0000u; // 800F9260
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F9264
L_800F9268:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 800F9268
  c->r[6]=R32(c->r[3]+0x00000001u); // 800F926C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F9270
  c->r[10]=c->r[6]&c->r[8]; // 800F9274
  c->r[6]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F9278
  c->r[7]=rotl(c->r[7],23)&0xFF000000u; // 800F927C
  c->r[6]=c->r[10]+c->r[6]; // 800F9280
  c->r[6]=c->r[7]+c->r[6]; // 800F9284
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F9288
  c->r[6]=R32(c->r[3]+0x00000005u); // 800F928C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F9290
  c->r[9]=c->r[6]&c->r[8]; // 800F9294
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800F9298
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F929C
  c->r[6]=c->r[9]+c->r[6]; // 800F92A0
  c->r[6]=c->r[7]+c->r[6]; // 800F92A4
  W32(c->r[4]+0x00000004u,c->r[6]); // 800F92A8
  c->r[6]=R32(c->r[3]+0x00000009u); // 800F92AC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F92B0
  c->r[10]=c->r[6]&c->r[8]; // 800F92B4
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F92B8
  c->r[7]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F92BC
  c->r[6]=c->r[10]+c->r[6]; // 800F92C0
  c->r[6]=c->r[7]+c->r[6]; // 800F92C4
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F92C8
  c->r[6]=R32(c->r[3]+0x0000000Du); // 800F92CC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F92D0
  c->r[9]=c->r[6]&c->r[8]; // 800F92D4
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800F92D8
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F92DC
  c->r[6]=c->r[9]+c->r[6]; // 800F92E0
  c->r[6]=c->r[7]+c->r[6]; // 800F92E4
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800F92E8
  c->r[3]=c->r[3]+c->r[5]; // 800F92EC
  c->r[4]=c->r[4]+c->r[5]; // 800F92F0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F92F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9268; } // 800F92F8
  return; // 800F92FC
}

// fn_800F9300
void f_800F9300(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F9300
L_800F9304:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800F9304
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F9308
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800F930C
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F9310
  c->r[0]=c->r[6]+c->r[0]; // 800F9314
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9318
  c->r[9]=R32(c->r[3]+0x00000005u); // 800F931C
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F9320
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F9324
  c->r[0]=c->r[6]+c->r[0]; // 800F9328
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F932C
  c->r[8]=R32(c->r[3]+0x00000009u); // 800F9330
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800F9334
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800F9338
  c->r[0]=c->r[6]+c->r[0]; // 800F933C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F9340
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800F9344
  c->r[0]=R32(c->r[3]+0x0000000Du); // 800F9348
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800F934C
  c->r[0]=c->r[6]+c->r[0]; // 800F9350
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F9354
  c->r[3]=c->r[3]+c->r[5]; // 800F9358
  c->r[4]=c->r[4]+c->r[5]; // 800F935C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F9360
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9304; } // 800F9364
  return; // 800F9368
}

// fn_800F936C
void f_800F936C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F936C
  c->r[7]=0u+0x7F7F0000u; // 800F9370
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F9374
L_800F9378:;
  c->r[7]=R16(c->r[3]+0x00000000u); // 800F9378
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F937C
  c->r[9]=c->r[7]&0x00007F7Fu; cr0(c,c->r[9]); // 800F9380
  c->r[7]=R32(c->r[3]+0x00000002u); // 800F9384
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9388
  c->r[11]=c->r[7]&c->r[0]; // 800F938C
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F9390
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800F9394
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F9398
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F939C
  c->r[8]=c->r[10]+c->r[8]; // 800F93A0
  c->r[7]=c->r[9]+c->r[7]; // 800F93A4
  c->r[7]=c->r[8]+c->r[7]; // 800F93A8
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F93AC
  c->r[7]=R32(c->r[3]+0x00000006u); // 800F93B0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F93B4
  c->r[12]=c->r[7]&c->r[0]; // 800F93B8
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800F93BC
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F93C0
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800F93C4
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F93C8
  c->r[8]=c->r[10]+c->r[8]; // 800F93CC
  c->r[7]=c->r[9]+c->r[7]; // 800F93D0
  c->r[7]=c->r[8]+c->r[7]; // 800F93D4
  W32(c->r[4]+0x00000004u,c->r[7]); // 800F93D8
  c->r[7]=R32(c->r[3]+0x0000000Au); // 800F93DC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F93E0
  c->r[11]=c->r[7]&c->r[0]; // 800F93E4
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800F93E8
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800F93EC
  c->r[9]=rotl(c->r[12],24)&0xFF000000u; // 800F93F0
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F93F4
  c->r[8]=c->r[10]+c->r[8]; // 800F93F8
  c->r[7]=c->r[9]+c->r[7]; // 800F93FC
  c->r[7]=c->r[8]+c->r[7]; // 800F9400
  W32(c->r[4]+0x00000008u,c->r[7]); // 800F9404
  c->r[7]=R32(c->r[3]+0x0000000Eu); // 800F9408
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F940C
  c->r[7]=c->r[7]&c->r[0]; // 800F9410
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800F9414
  c->r[8]=rotl(c->r[7],16)&0x0000FFFFu; // 800F9418
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800F941C
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 800F9420
  c->r[8]=c->r[10]+c->r[8]; // 800F9424
  c->r[7]=c->r[9]+c->r[7]; // 800F9428
  c->r[7]=c->r[8]+c->r[7]; // 800F942C
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800F9430
  c->r[3]=c->r[3]+c->r[5]; // 800F9434
  c->r[4]=c->r[4]+c->r[5]; // 800F9438
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F943C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9378; } // 800F9440
  return; // 800F9444
}

// fn_800F9448
void f_800F9448(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F9448
L_800F944C:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800F944C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F9450
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800F9454
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F9458
  c->r[0]=c->r[6]+c->r[0]; // 800F945C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9460
  c->r[9]=R32(c->r[3]+0x00000006u); // 800F9464
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F9468
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F946C
  c->r[0]=c->r[6]+c->r[0]; // 800F9470
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F9474
  c->r[8]=R32(c->r[3]+0x0000000Au); // 800F9478
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800F947C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800F9480
  c->r[0]=c->r[6]+c->r[0]; // 800F9484
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F9488
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800F948C
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800F9490
  c->r[0]=c->r[6]+c->r[0]; // 800F9494
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F9498
  c->r[3]=c->r[3]+c->r[5]; // 800F949C
  c->r[4]=c->r[4]+c->r[5]; // 800F94A0
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F94A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F944C; } // 800F94A8
  return; // 800F94AC
}

// fn_800F94B0
void f_800F94B0(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F94B0
  c->r[7]=0u+0x7F7F0000u; // 800F94B4
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F94B8
L_800F94BC:;
  c->r[7]=R32(c->r[3]+0xFFFFFFFFu); // 800F94BC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F94C0
  c->r[9]=c->r[7]&c->r[0]; // 800F94C4
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F94C8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F94CC
  c->r[11]=c->r[7]&c->r[0]; // 800F94D0
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F94D4
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F94D8
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F94DC
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F94E0
  c->r[8]=c->r[10]+c->r[8]; // 800F94E4
  c->r[7]=c->r[9]+c->r[7]; // 800F94E8
  c->r[7]=c->r[8]+c->r[7]; // 800F94EC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F94F0
  c->r[7]=R32(c->r[3]+0x00000007u); // 800F94F4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F94F8
  c->r[12]=c->r[7]&c->r[0]; // 800F94FC
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F9500
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800F9504
  c->r[9]=rotl(c->r[11],16)&0xFFFF0000u; // 800F9508
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800F950C
  c->r[8]=c->r[10]+c->r[8]; // 800F9510
  c->r[7]=c->r[9]+c->r[7]; // 800F9514
  c->r[7]=c->r[8]+c->r[7]; // 800F9518
  W32(c->r[4]+0x00000004u,c->r[7]); // 800F951C
  c->r[7]=R32(c->r[3]+0x0000000Bu); // 800F9520
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9524
  c->r[11]=c->r[7]&c->r[0]; // 800F9528
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F952C
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800F9530
  c->r[9]=rotl(c->r[12],16)&0xFFFF0000u; // 800F9534
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800F9538
  c->r[8]=c->r[10]+c->r[8]; // 800F953C
  c->r[7]=c->r[9]+c->r[7]; // 800F9540
  c->r[7]=c->r[8]+c->r[7]; // 800F9544
  W32(c->r[4]+0x00000008u,c->r[7]); // 800F9548
  c->r[7]=R16(c->r[3]+0x0000000Fu); // 800F954C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9550
  c->r[10]=c->r[7]&0x00007F7Fu; cr0(c,c->r[10]); // 800F9554
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F9558
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F955C
  c->r[7]=rotl(c->r[11],16)&0xFFFF0000u; // 800F9560
  c->r[8]=c->r[9]+c->r[8]; // 800F9564
  c->r[7]=c->r[7]+c->r[10]; // 800F9568
  c->r[7]=c->r[8]+c->r[7]; // 800F956C
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800F9570
  c->r[3]=c->r[3]+c->r[5]; // 800F9574
  c->r[4]=c->r[4]+c->r[5]; // 800F9578
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F957C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F94BC; } // 800F9580
  return; // 800F9584
}

// fn_800F9588
void f_800F9588(Ctx* __restrict c) {
  c->r[7]=0u+0x00000004u; // 800F9588
L_800F958C:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800F958C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F9590
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F9594
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F9598
  c->r[0]=c->r[6]+c->r[0]; // 800F959C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F95A0
  c->r[9]=R32(c->r[3]+0x00000007u); // 800F95A4
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F95A8
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F95AC
  c->r[0]=c->r[6]+c->r[0]; // 800F95B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F95B4
  c->r[8]=R32(c->r[3]+0x0000000Bu); // 800F95B8
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F95BC
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800F95C0
  c->r[0]=c->r[6]+c->r[0]; // 800F95C4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F95C8
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800F95CC
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800F95D0
  c->r[0]=c->r[6]+c->r[0]; // 800F95D4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F95D8
  c->r[3]=c->r[3]+c->r[5]; // 800F95DC
  c->r[4]=c->r[4]+c->r[5]; // 800F95E0
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800F95E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F958C; } // 800F95E8
  return; // 800F95EC
}

// fn_800F95F0
void f_800F95F0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000004u; // 800F95F0
  c->r[6]=0u+0x7F7F0000u; // 800F95F4
  c->r[8]=c->r[6]+0x00007F7Fu; // 800F95F8
L_800F95FC:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F95FC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F9600
  c->r[10]=c->r[6]&c->r[8]; // 800F9604
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F9608
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F960C
  c->r[9]=c->r[6]&c->r[8]; // 800F9610
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F9614
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800F9618
  c->r[6]=c->r[10]+c->r[6]; // 800F961C
  c->r[6]=c->r[7]+c->r[6]; // 800F9620
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F9624
  c->r[6]=R32(c->r[3]+0x00000008u); // 800F9628
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F962C
  c->r[10]=c->r[6]&c->r[8]; // 800F9630
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F9634
  c->r[7]=rotl(c->r[10],8)&0x000000FFu; // 800F9638
  c->r[6]=c->r[9]+c->r[6]; // 800F963C
  c->r[6]=c->r[7]+c->r[6]; // 800F9640
  W32(c->r[4]+0x00000004u,c->r[6]); // 800F9644
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800F9648
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800F964C
  c->r[9]=c->r[6]&c->r[8]; // 800F9650
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F9654
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800F9658
  c->r[6]=c->r[10]+c->r[6]; // 800F965C
  c->r[6]=c->r[7]+c->r[6]; // 800F9660
  W32(c->r[4]+0x00000008u,c->r[6]); // 800F9664
  c->r[7]=R8(c->r[3]+0x00000010u); // 800F9668
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F966C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9670
  c->r[6]=c->r[9]+c->r[6]; // 800F9674
  c->r[6]=c->r[7]+c->r[6]; // 800F9678
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800F967C
  c->r[3]=c->r[3]+c->r[5]; // 800F9680
  c->r[4]=c->r[4]+c->r[5]; // 800F9684
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F9688
  if (!crb(c,2)) { IRQCHK(c); goto L_800F95FC; } // 800F968C
  return; // 800F9690
}

// fn_800F9694
void f_800F9694(Ctx* __restrict c) {
  c->r[6]=0u+0x00000004u; // 800F9694
L_800F9698:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9698
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F969C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F96A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F96A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F96A8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F96AC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800F96B0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F96B4
  c->r[3]=c->r[3]+c->r[5]; // 800F96B8
  c->r[4]=c->r[4]+c->r[5]; // 800F96BC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F96C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9698; } // 800F96C4
  return; // 800F96C8
}

// fn_800F96CC
void f_800F96CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F96CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F96D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F96D4
  c->r[6]=0u+0x00000008u; // 800F96D8
  c->r[10]=R8(c->r[3]+0x00000000u); // 800F96DC
  c->r[0]=R32(c->r[3]+0x00000001u); // 800F96E0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F96E4
  c->r[7]=0u+0x7F7F0000u; // 800F96E8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F96EC
  c->r[9]=c->r[8]&c->r[0]; // 800F96F0
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F96F4
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800F96F8
  c->r[7]=c->r[9]+c->r[7]; // 800F96FC
  c->r[7]=c->r[8]+c->r[7]; // 800F9700
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9704
  c->r[7]=c->r[7]&c->r[0]; // 800F9708
  c->r[8]=R32(c->r[3]+0x00000005u); // 800F970C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9710
  c->r[10]=c->r[8]&c->r[0]; // 800F9714
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800F9718
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F971C
  c->r[8]=c->r[10]+c->r[8]; // 800F9720
  c->r[8]=c->r[9]+c->r[8]; // 800F9724
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9728
  c->r[8]=c->r[8]&c->r[0]; // 800F972C
  c->r[9]=R32(c->r[3]+0x00000009u); // 800F9730
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9734
  c->r[11]=c->r[9]&c->r[0]; // 800F9738
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 800F973C
  c->r[10]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F9740
  c->r[9]=c->r[11]+c->r[9]; // 800F9744
  c->r[9]=c->r[10]+c->r[9]; // 800F9748
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F974C
  c->r[9]=c->r[9]&c->r[0]; // 800F9750
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F9754
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9758
  c->r[12]=c->r[10]&c->r[0]; // 800F975C
  c->r[10]=rotl(c->r[11],24)&0xFF000000u; // 800F9760
  c->r[11]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F9764
  c->r[10]=c->r[12]+c->r[10]; // 800F9768
  c->r[10]=c->r[11]+c->r[10]; // 800F976C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9770
  c->r[10]=c->r[10]&c->r[0]; // 800F9774
  c->r[3]=c->r[3]+c->r[5]; // 800F9778
L_800F977C:;
  c->r[12]=R8(c->r[3]+0x00000000u); // 800F977C
  c->r[11]=R32(c->r[3]+0x00000001u); // 800F9780
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9784
  c->r[30]=c->r[11]&c->r[0]; // 800F9788
  c->r[11]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F978C
  c->r[12]=rotl(c->r[12],23)&0xFF000000u; // 800F9790
  c->r[11]=c->r[30]+c->r[11]; // 800F9794
  c->r[11]=c->r[12]+c->r[11]; // 800F9798
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F979C
  c->r[11]=c->r[11]&c->r[0]; // 800F97A0
  c->r[7]=c->r[7]+c->r[11]; // 800F97A4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F97A8
  c->r[7]=c->r[11]|c->r[11]; // 800F97AC
  c->r[11]=R32(c->r[3]+0x00000005u); // 800F97B0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F97B4
  c->r[31]=c->r[11]&c->r[0]; // 800F97B8
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F97BC
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F97C0
  c->r[11]=c->r[31]+c->r[11]; // 800F97C4
  c->r[11]=c->r[12]+c->r[11]; // 800F97C8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F97CC
  c->r[11]=c->r[11]&c->r[0]; // 800F97D0
  c->r[8]=c->r[8]+c->r[11]; // 800F97D4
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F97D8
  c->r[8]=c->r[11]|c->r[11]; // 800F97DC
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F97E0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F97E4
  c->r[30]=c->r[11]&c->r[0]; // 800F97E8
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F97EC
  c->r[12]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F97F0
  c->r[11]=c->r[30]+c->r[11]; // 800F97F4
  c->r[11]=c->r[12]+c->r[11]; // 800F97F8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F97FC
  c->r[11]=c->r[11]&c->r[0]; // 800F9800
  c->r[9]=c->r[9]+c->r[11]; // 800F9804
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F9808
  c->r[9]=c->r[11]|c->r[11]; // 800F980C
  c->r[11]=R32(c->r[3]+0x0000000Du); // 800F9810
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9814
  c->r[31]=c->r[11]&c->r[0]; // 800F9818
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F981C
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F9820
  c->r[11]=c->r[31]+c->r[11]; // 800F9824
  c->r[11]=c->r[12]+c->r[11]; // 800F9828
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F982C
  c->r[11]=c->r[11]&c->r[0]; // 800F9830
  c->r[10]=c->r[10]+c->r[11]; // 800F9834
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F9838
  c->r[10]=c->r[11]|c->r[11]; // 800F983C
  c->r[3]=c->r[3]+c->r[5]; // 800F9840
  c->r[4]=c->r[4]+c->r[5]; // 800F9844
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9848
  if (!crb(c,2)) { IRQCHK(c); goto L_800F977C; } // 800F984C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9850
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9854
  c->r[1]=c->r[1]+0x00000010u; // 800F9858
  return; // 800F985C
}

// fn_800F9860
void f_800F9860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9864
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F9868
  c->r[6]=0u+0x00000008u; // 800F986C
  c->r[9]=R32(c->r[3]+0x00000001u); // 800F9870
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F9874
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800F9878
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800F987C
  c->r[0]=c->r[7]+c->r[0]; // 800F9880
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F9884
  c->r[7]=0u+0x7F7F0000u; // 800F9888
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F988C
  c->r[7]=c->r[8]&c->r[0]; // 800F9890
  c->r[10]=R32(c->r[3]+0x00000005u); // 800F9894
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F9898
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F989C
  c->r[8]=c->r[9]+c->r[8]; // 800F98A0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F98A4
  c->r[8]=c->r[8]&c->r[0]; // 800F98A8
  c->r[11]=R32(c->r[3]+0x00000009u); // 800F98AC
  c->r[10]=rotl(c->r[10],24)&0xFF000000u; // 800F98B0
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F98B4
  c->r[9]=c->r[10]+c->r[9]; // 800F98B8
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F98BC
  c->r[9]=c->r[9]&c->r[0]; // 800F98C0
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800F98C4
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800F98C8
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F98CC
  c->r[10]=c->r[11]+c->r[10]; // 800F98D0
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F98D4
  c->r[10]=c->r[10]&c->r[0]; // 800F98D8
  c->r[12]=c->r[3]+c->r[5]; // 800F98DC
L_800F98E0:;
  c->r[31]=R32(c->r[12]+0x00000001u); // 800F98E0
  c->r[3]=R8(c->r[12]+0x00000000u); // 800F98E4
  c->r[11]=rotl(c->r[3],24)&0xFF000000u; // 800F98E8
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F98EC
  c->r[3]=c->r[11]+c->r[3]; // 800F98F0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F98F4
  c->r[11]=c->r[3]&c->r[0]; // 800F98F8
  c->r[3]=c->r[7]+c->r[11]; // 800F98FC
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F9900
  c->r[7]=c->r[11]|c->r[11]; // 800F9904
  c->r[30]=R32(c->r[12]+0x00000005u); // 800F9908
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F990C
  c->r[3]=rotl(c->r[30],24)&0x00FFFFFFu; // 800F9910
  c->r[3]=c->r[11]+c->r[3]; // 800F9914
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9918
  c->r[11]=c->r[3]&c->r[0]; // 800F991C
  c->r[3]=c->r[8]+c->r[11]; // 800F9920
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F9924
  c->r[8]=c->r[11]|c->r[11]; // 800F9928
  c->r[31]=R32(c->r[12]+0x00000009u); // 800F992C
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800F9930
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800F9934
  c->r[3]=c->r[11]+c->r[3]; // 800F9938
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F993C
  c->r[11]=c->r[3]&c->r[0]; // 800F9940
  c->r[3]=c->r[9]+c->r[11]; // 800F9944
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F9948
  c->r[9]=c->r[11]|c->r[11]; // 800F994C
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800F9950
  c->r[3]=R32(c->r[12]+0x0000000Du); // 800F9954
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 800F9958
  c->r[3]=c->r[11]+c->r[3]; // 800F995C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9960
  c->r[11]=c->r[3]&c->r[0]; // 800F9964
  c->r[3]=c->r[10]+c->r[11]; // 800F9968
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F996C
  c->r[10]=c->r[11]|c->r[11]; // 800F9970
  c->r[12]=c->r[12]+c->r[5]; // 800F9974
  c->r[4]=c->r[4]+c->r[5]; // 800F9978
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F997C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F98E0; } // 800F9980
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9984
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9988
  c->r[1]=c->r[1]+0x00000010u; // 800F998C
  return; // 800F9990
}

// fn_800F9994
void f_800F9994(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9994
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9998
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F999C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F99A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F99A4
  c->r[6]=0u+0x00000008u; // 800F99A8
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F99AC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F99B0
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800F99B4
  c->r[0]=R32(c->r[3]+0x00000002u); // 800F99B8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F99BC
  c->r[7]=0u+0x7F7F0000u; // 800F99C0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F99C4
  c->r[12]=c->r[8]&c->r[0]; // 800F99C8
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800F99CC
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800F99D0
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800F99D4
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800F99D8
  c->r[8]=c->r[10]+c->r[8]; // 800F99DC
  c->r[7]=c->r[9]+c->r[7]; // 800F99E0
  c->r[7]=c->r[8]+c->r[7]; // 800F99E4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F99E8
  c->r[7]=c->r[7]&c->r[0]; // 800F99EC
  c->r[8]=R32(c->r[3]+0x00000006u); // 800F99F0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F99F4
  c->r[29]=c->r[8]&c->r[0]; // 800F99F8
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800F99FC
  c->r[9]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9A00
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800F9A04
  c->r[8]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F9A08
  c->r[9]=c->r[11]+c->r[9]; // 800F9A0C
  c->r[8]=c->r[10]+c->r[8]; // 800F9A10
  c->r[8]=c->r[9]+c->r[8]; // 800F9A14
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9A18
  c->r[8]=c->r[8]&c->r[0]; // 800F9A1C
  c->r[9]=R32(c->r[3]+0x0000000Au); // 800F9A20
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9A24
  c->r[28]=c->r[9]&c->r[0]; // 800F9A28
  c->r[12]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9A2C
  c->r[10]=rotl(c->r[28],16)&0x0000FFFFu; // 800F9A30
  c->r[11]=rotl(c->r[29],24)&0xFF000000u; // 800F9A34
  c->r[9]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F9A38
  c->r[10]=c->r[12]+c->r[10]; // 800F9A3C
  c->r[9]=c->r[11]+c->r[9]; // 800F9A40
  c->r[9]=c->r[10]+c->r[9]; // 800F9A44
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9A48
  c->r[9]=c->r[9]&c->r[0]; // 800F9A4C
  c->r[10]=R32(c->r[3]+0x0000000Eu); // 800F9A50
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9A54
  c->r[10]=c->r[10]&c->r[0]; // 800F9A58
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9A5C
  c->r[11]=rotl(c->r[10],16)&0x0000FFFFu; // 800F9A60
  c->r[12]=rotl(c->r[28],24)&0xFF000000u; // 800F9A64
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800F9A68
  c->r[11]=c->r[30]+c->r[11]; // 800F9A6C
  c->r[10]=c->r[12]+c->r[10]; // 800F9A70
  c->r[10]=c->r[11]+c->r[10]; // 800F9A74
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9A78
  c->r[10]=c->r[10]&c->r[0]; // 800F9A7C
  c->r[3]=c->r[3]+c->r[5]; // 800F9A80
L_800F9A84:;
  c->r[11]=R16(c->r[3]+0x00000000u); // 800F9A84
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9A88
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F9A8C
  c->r[11]=R32(c->r[3]+0x00000002u); // 800F9A90
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9A94
  c->r[29]=c->r[11]&c->r[0]; // 800F9A98
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9A9C
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9AA0
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F9AA4
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F9AA8
  c->r[12]=c->r[31]+c->r[12]; // 800F9AAC
  c->r[11]=c->r[30]+c->r[11]; // 800F9AB0
  c->r[11]=c->r[12]+c->r[11]; // 800F9AB4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9AB8
  c->r[11]=c->r[11]&c->r[0]; // 800F9ABC
  c->r[7]=c->r[7]+c->r[11]; // 800F9AC0
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F9AC4
  c->r[7]=c->r[11]|c->r[11]; // 800F9AC8
  c->r[11]=R32(c->r[3]+0x00000006u); // 800F9ACC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9AD0
  c->r[28]=c->r[11]&c->r[0]; // 800F9AD4
  c->r[31]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9AD8
  c->r[12]=rotl(c->r[28],16)&0x0000FFFFu; // 800F9ADC
  c->r[30]=rotl(c->r[29],24)&0xFF000000u; // 800F9AE0
  c->r[11]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F9AE4
  c->r[12]=c->r[31]+c->r[12]; // 800F9AE8
  c->r[11]=c->r[30]+c->r[11]; // 800F9AEC
  c->r[11]=c->r[12]+c->r[11]; // 800F9AF0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9AF4
  c->r[11]=c->r[11]&c->r[0]; // 800F9AF8
  c->r[8]=c->r[8]+c->r[11]; // 800F9AFC
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F9B00
  c->r[8]=c->r[11]|c->r[11]; // 800F9B04
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F9B08
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9B0C
  c->r[29]=c->r[11]&c->r[0]; // 800F9B10
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9B14
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9B18
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800F9B1C
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F9B20
  c->r[12]=c->r[31]+c->r[12]; // 800F9B24
  c->r[11]=c->r[30]+c->r[11]; // 800F9B28
  c->r[11]=c->r[12]+c->r[11]; // 800F9B2C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9B30
  c->r[11]=c->r[11]&c->r[0]; // 800F9B34
  c->r[9]=c->r[9]+c->r[11]; // 800F9B38
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F9B3C
  c->r[9]=c->r[11]|c->r[11]; // 800F9B40
  c->r[11]=R32(c->r[3]+0x0000000Eu); // 800F9B44
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9B48
  c->r[11]=c->r[11]&c->r[0]; // 800F9B4C
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9B50
  c->r[12]=rotl(c->r[11],16)&0x0000FFFFu; // 800F9B54
  c->r[31]=rotl(c->r[29],24)&0xFF000000u; // 800F9B58
  c->r[11]=rotl(c->r[11],24)&0x00FFFFFFu; // 800F9B5C
  c->r[12]=c->r[30]+c->r[12]; // 800F9B60
  c->r[11]=c->r[31]+c->r[11]; // 800F9B64
  c->r[11]=c->r[12]+c->r[11]; // 800F9B68
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9B6C
  c->r[11]=c->r[11]&c->r[0]; // 800F9B70
  c->r[10]=c->r[10]+c->r[11]; // 800F9B74
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F9B78
  c->r[10]=c->r[11]|c->r[11]; // 800F9B7C
  c->r[3]=c->r[3]+c->r[5]; // 800F9B80
  c->r[4]=c->r[4]+c->r[5]; // 800F9B84
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9B88
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9A84; } // 800F9B8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9B90
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9B94
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9B98
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F9B9C
  c->r[1]=c->r[1]+0x00000020u; // 800F9BA0
  return; // 800F9BA4
}

// fn_800F9BA8
void f_800F9BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9BAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F9BB0
  c->r[6]=0u+0x00000008u; // 800F9BB4
  c->r[9]=R32(c->r[3]+0x00000002u); // 800F9BB8
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F9BBC
  c->r[7]=rotl(c->r[0],16)&0xFFFF0000u; // 800F9BC0
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800F9BC4
  c->r[0]=c->r[7]+c->r[0]; // 800F9BC8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F9BCC
  c->r[7]=0u+0x7F7F0000u; // 800F9BD0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F9BD4
  c->r[7]=c->r[8]&c->r[0]; // 800F9BD8
  c->r[10]=R32(c->r[3]+0x00000006u); // 800F9BDC
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F9BE0
  c->r[8]=rotl(c->r[10],16)&0x0000FFFFu; // 800F9BE4
  c->r[8]=c->r[9]+c->r[8]; // 800F9BE8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9BEC
  c->r[8]=c->r[8]&c->r[0]; // 800F9BF0
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800F9BF4
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800F9BF8
  c->r[9]=rotl(c->r[11],16)&0x0000FFFFu; // 800F9BFC
  c->r[9]=c->r[10]+c->r[9]; // 800F9C00
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9C04
  c->r[9]=c->r[9]&c->r[0]; // 800F9C08
  c->r[11]=rotl(c->r[11],16)&0xFFFF0000u; // 800F9C0C
  c->r[10]=R16(c->r[3]+0x0000000Eu); // 800F9C10
  c->r[10]=c->r[11]+c->r[10]; // 800F9C14
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9C18
  c->r[10]=c->r[10]&c->r[0]; // 800F9C1C
  c->r[12]=c->r[3]+c->r[5]; // 800F9C20
L_800F9C24:;
  c->r[31]=R32(c->r[12]+0x00000002u); // 800F9C24
  c->r[3]=R16(c->r[12]+0x00000000u); // 800F9C28
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 800F9C2C
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F9C30
  c->r[3]=c->r[11]+c->r[3]; // 800F9C34
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9C38
  c->r[11]=c->r[3]&c->r[0]; // 800F9C3C
  c->r[3]=c->r[7]+c->r[11]; // 800F9C40
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F9C44
  c->r[7]=c->r[11]|c->r[11]; // 800F9C48
  c->r[30]=R32(c->r[12]+0x00000006u); // 800F9C4C
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F9C50
  c->r[3]=rotl(c->r[30],16)&0x0000FFFFu; // 800F9C54
  c->r[3]=c->r[11]+c->r[3]; // 800F9C58
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9C5C
  c->r[11]=c->r[3]&c->r[0]; // 800F9C60
  c->r[3]=c->r[8]+c->r[11]; // 800F9C64
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F9C68
  c->r[8]=c->r[11]|c->r[11]; // 800F9C6C
  c->r[31]=R32(c->r[12]+0x0000000Au); // 800F9C70
  c->r[11]=rotl(c->r[30],16)&0xFFFF0000u; // 800F9C74
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800F9C78
  c->r[3]=c->r[11]+c->r[3]; // 800F9C7C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9C80
  c->r[11]=c->r[3]&c->r[0]; // 800F9C84
  c->r[3]=c->r[9]+c->r[11]; // 800F9C88
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F9C8C
  c->r[9]=c->r[11]|c->r[11]; // 800F9C90
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800F9C94
  c->r[3]=R16(c->r[12]+0x0000000Eu); // 800F9C98
  c->r[3]=c->r[11]+c->r[3]; // 800F9C9C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9CA0
  c->r[11]=c->r[3]&c->r[0]; // 800F9CA4
  c->r[3]=c->r[10]+c->r[11]; // 800F9CA8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F9CAC
  c->r[10]=c->r[11]|c->r[11]; // 800F9CB0
  c->r[12]=c->r[12]+c->r[5]; // 800F9CB4
  c->r[4]=c->r[4]+c->r[5]; // 800F9CB8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9CBC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9C24; } // 800F9CC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9CC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9CC8
  c->r[1]=c->r[1]+0x00000010u; // 800F9CCC
  return; // 800F9CD0
}

// fn_800F9CD4
void f_800F9CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9CD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9CD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9CDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9CE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F9CE4
  c->r[6]=0u+0x00000008u; // 800F9CE8
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F9CEC
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F9CF0
  c->r[7]=0u+0x7F7F0000u; // 800F9CF4
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F9CF8
  c->r[9]=c->r[8]&c->r[0]; // 800F9CFC
  c->r[7]=R32(c->r[3]+0x00000003u); // 800F9D00
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9D04
  c->r[12]=c->r[7]&c->r[0]; // 800F9D08
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F9D0C
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800F9D10
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800F9D14
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800F9D18
  c->r[8]=c->r[10]+c->r[8]; // 800F9D1C
  c->r[7]=c->r[9]+c->r[7]; // 800F9D20
  c->r[7]=c->r[8]+c->r[7]; // 800F9D24
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800F9D28
  c->r[7]=c->r[7]&c->r[0]; // 800F9D2C
  c->r[8]=R32(c->r[3]+0x00000007u); // 800F9D30
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9D34
  c->r[29]=c->r[8]&c->r[0]; // 800F9D38
  c->r[11]=rotl(c->r[12],8)&0xFFFFFF00u; // 800F9D3C
  c->r[9]=rotl(c->r[29],8)&0x000000FFu; // 800F9D40
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800F9D44
  c->r[8]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9D48
  c->r[9]=c->r[11]+c->r[9]; // 800F9D4C
  c->r[8]=c->r[10]+c->r[8]; // 800F9D50
  c->r[8]=c->r[9]+c->r[8]; // 800F9D54
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9D58
  c->r[8]=c->r[8]&c->r[0]; // 800F9D5C
  c->r[9]=R32(c->r[3]+0x0000000Bu); // 800F9D60
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9D64
  c->r[28]=c->r[9]&c->r[0]; // 800F9D68
  c->r[12]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F9D6C
  c->r[10]=rotl(c->r[28],8)&0x000000FFu; // 800F9D70
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9D74
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 800F9D78
  c->r[10]=c->r[12]+c->r[10]; // 800F9D7C
  c->r[9]=c->r[11]+c->r[9]; // 800F9D80
  c->r[9]=c->r[10]+c->r[9]; // 800F9D84
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9D88
  c->r[9]=c->r[9]&c->r[0]; // 800F9D8C
  c->r[10]=R16(c->r[3]+0x0000000Fu); // 800F9D90
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9D94
  c->r[29]=c->r[10]&0x00007F7Fu; cr0(c,c->r[29]); // 800F9D98
  c->r[12]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F9D9C
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800F9DA0
  c->r[10]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9DA4
  c->r[11]=c->r[12]+c->r[11]; // 800F9DA8
  c->r[10]=c->r[10]+c->r[29]; // 800F9DAC
  c->r[10]=c->r[11]+c->r[10]; // 800F9DB0
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9DB4
  c->r[10]=c->r[10]&c->r[0]; // 800F9DB8
  c->r[3]=c->r[3]+c->r[5]; // 800F9DBC
L_800F9DC0:;
  c->r[11]=R32(c->r[3]+0xFFFFFFFFu); // 800F9DC0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9DC4
  c->r[28]=c->r[11]&c->r[0]; // 800F9DC8
  c->r[11]=R32(c->r[3]+0x00000003u); // 800F9DCC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9DD0
  c->r[29]=c->r[11]&c->r[0]; // 800F9DD4
  c->r[31]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F9DD8
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F9DDC
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9DE0
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9DE4
  c->r[12]=c->r[31]+c->r[12]; // 800F9DE8
  c->r[11]=c->r[30]+c->r[11]; // 800F9DEC
  c->r[11]=c->r[12]+c->r[11]; // 800F9DF0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9DF4
  c->r[11]=c->r[11]&c->r[0]; // 800F9DF8
  c->r[7]=c->r[7]+c->r[11]; // 800F9DFC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800F9E00
  c->r[7]=c->r[11]|c->r[11]; // 800F9E04
  c->r[11]=R32(c->r[3]+0x00000007u); // 800F9E08
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9E0C
  c->r[28]=c->r[11]&c->r[0]; // 800F9E10
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F9E14
  c->r[12]=rotl(c->r[28],8)&0x000000FFu; // 800F9E18
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9E1C
  c->r[11]=rotl(c->r[28],16)&0x0000FFFFu; // 800F9E20
  c->r[12]=c->r[31]+c->r[12]; // 800F9E24
  c->r[11]=c->r[30]+c->r[11]; // 800F9E28
  c->r[11]=c->r[12]+c->r[11]; // 800F9E2C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9E30
  c->r[11]=c->r[11]&c->r[0]; // 800F9E34
  c->r[8]=c->r[8]+c->r[11]; // 800F9E38
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F9E3C
  c->r[8]=c->r[11]|c->r[11]; // 800F9E40
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F9E44
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9E48
  c->r[29]=c->r[11]&c->r[0]; // 800F9E4C
  c->r[30]=rotl(c->r[28],8)&0xFFFFFF00u; // 800F9E50
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800F9E54
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800F9E58
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800F9E5C
  c->r[12]=c->r[30]+c->r[12]; // 800F9E60
  c->r[11]=c->r[31]+c->r[11]; // 800F9E64
  c->r[11]=c->r[12]+c->r[11]; // 800F9E68
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9E6C
  c->r[11]=c->r[11]&c->r[0]; // 800F9E70
  c->r[9]=c->r[9]+c->r[11]; // 800F9E74
  W32(c->r[4]+0x00000008u,c->r[9]); // 800F9E78
  c->r[9]=c->r[11]|c->r[11]; // 800F9E7C
  c->r[11]=R16(c->r[3]+0x0000000Fu); // 800F9E80
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9E84
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800F9E88
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800F9E8C
  c->r[12]=rotl(c->r[28],24)&0x00FFFFFFu; // 800F9E90
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800F9E94
  c->r[12]=c->r[31]+c->r[12]; // 800F9E98
  c->r[11]=c->r[11]+c->r[28]; // 800F9E9C
  c->r[11]=c->r[12]+c->r[11]; // 800F9EA0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800F9EA4
  c->r[11]=c->r[11]&c->r[0]; // 800F9EA8
  c->r[10]=c->r[10]+c->r[11]; // 800F9EAC
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800F9EB0
  c->r[10]=c->r[11]|c->r[11]; // 800F9EB4
  c->r[3]=c->r[3]+c->r[5]; // 800F9EB8
  c->r[4]=c->r[4]+c->r[5]; // 800F9EBC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9EC0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9DC0; } // 800F9EC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9EC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9ECC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9ED0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F9ED4
  c->r[1]=c->r[1]+0x00000020u; // 800F9ED8
  return; // 800F9EDC
}

// fn_800F9EE0
void f_800F9EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9EE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F9EE8
  c->r[6]=0u+0x00000008u; // 800F9EEC
  c->r[9]=R32(c->r[3]+0x00000003u); // 800F9EF0
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800F9EF4
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 800F9EF8
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800F9EFC
  c->r[0]=c->r[7]+c->r[0]; // 800F9F00
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800F9F04
  c->r[7]=0u+0x7F7F0000u; // 800F9F08
  c->r[0]=c->r[7]+0x00007F7Fu; // 800F9F0C
  c->r[7]=c->r[8]&c->r[0]; // 800F9F10
  c->r[10]=R32(c->r[3]+0x00000007u); // 800F9F14
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 800F9F18
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800F9F1C
  c->r[8]=c->r[9]+c->r[8]; // 800F9F20
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800F9F24
  c->r[8]=c->r[8]&c->r[0]; // 800F9F28
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800F9F2C
  c->r[10]=rotl(c->r[10],8)&0xFFFFFF00u; // 800F9F30
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800F9F34
  c->r[9]=c->r[10]+c->r[9]; // 800F9F38
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800F9F3C
  c->r[9]=c->r[9]&c->r[0]; // 800F9F40
  c->r[11]=rotl(c->r[11],8)&0xFFFFFF00u; // 800F9F44
  c->r[10]=R8(c->r[3]+0x0000000Fu); // 800F9F48
  c->r[10]=c->r[11]+c->r[10]; // 800F9F4C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800F9F50
  c->r[10]=c->r[10]&c->r[0]; // 800F9F54
  c->r[12]=c->r[3]+c->r[5]; // 800F9F58
L_800F9F5C:;
  c->r[31]=R32(c->r[12]+0x00000003u); // 800F9F5C
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800F9F60
  c->r[11]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F9F64
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F9F68
  c->r[3]=c->r[11]+c->r[3]; // 800F9F6C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9F70
  c->r[11]=c->r[3]&c->r[0]; // 800F9F74
  c->r[3]=c->r[7]+c->r[11]; // 800F9F78
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F9F7C
  c->r[7]=c->r[11]|c->r[11]; // 800F9F80
  c->r[30]=R32(c->r[12]+0x00000007u); // 800F9F84
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F9F88
  c->r[3]=rotl(c->r[30],8)&0x000000FFu; // 800F9F8C
  c->r[3]=c->r[11]+c->r[3]; // 800F9F90
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9F94
  c->r[11]=c->r[3]&c->r[0]; // 800F9F98
  c->r[3]=c->r[8]+c->r[11]; // 800F9F9C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F9FA0
  c->r[8]=c->r[11]|c->r[11]; // 800F9FA4
  c->r[31]=R32(c->r[12]+0x0000000Bu); // 800F9FA8
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800F9FAC
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800F9FB0
  c->r[3]=c->r[11]+c->r[3]; // 800F9FB4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9FB8
  c->r[11]=c->r[3]&c->r[0]; // 800F9FBC
  c->r[3]=c->r[9]+c->r[11]; // 800F9FC0
  W32(c->r[4]+0x00000008u,c->r[3]); // 800F9FC4
  c->r[9]=c->r[11]|c->r[11]; // 800F9FC8
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800F9FCC
  c->r[3]=R8(c->r[12]+0x0000000Fu); // 800F9FD0
  c->r[3]=c->r[11]+c->r[3]; // 800F9FD4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800F9FD8
  c->r[11]=c->r[3]&c->r[0]; // 800F9FDC
  c->r[3]=c->r[10]+c->r[11]; // 800F9FE0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800F9FE4
  c->r[10]=c->r[11]|c->r[11]; // 800F9FE8
  c->r[12]=c->r[12]+c->r[5]; // 800F9FEC
  c->r[4]=c->r[4]+c->r[5]; // 800F9FF0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800F9FF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F9F5C; } // 800F9FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9FFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA000
  c->r[1]=c->r[1]+0x00000010u; // 800FA004
  return; // 800FA008
}

// fn_800FA00C
void f_800FA00C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA00C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA010
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA014
  c->r[6]=0u+0x00000008u; // 800FA018
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA01C
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FA020
  c->r[7]=0u+0x7F7F0000u; // 800FA024
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA028
  c->r[9]=c->r[8]&c->r[0]; // 800FA02C
  c->r[7]=R32(c->r[3]+0x00000004u); // 800FA030
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA034
  c->r[10]=c->r[7]&c->r[0]; // 800FA038
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FA03C
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800FA040
  c->r[7]=c->r[9]+c->r[7]; // 800FA044
  c->r[7]=c->r[8]+c->r[7]; // 800FA048
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA04C
  c->r[7]=c->r[7]&c->r[0]; // 800FA050
  c->r[8]=R32(c->r[3]+0x00000008u); // 800FA054
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA058
  c->r[11]=c->r[8]&c->r[0]; // 800FA05C
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FA060
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800FA064
  c->r[8]=c->r[10]+c->r[8]; // 800FA068
  c->r[8]=c->r[9]+c->r[8]; // 800FA06C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA070
  c->r[8]=c->r[8]&c->r[0]; // 800FA074
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800FA078
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FA07C
  c->r[12]=c->r[9]&c->r[0]; // 800FA080
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FA084
  c->r[10]=rotl(c->r[12],8)&0x000000FFu; // 800FA088
  c->r[9]=c->r[11]+c->r[9]; // 800FA08C
  c->r[9]=c->r[10]+c->r[9]; // 800FA090
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FA094
  c->r[9]=c->r[9]&c->r[0]; // 800FA098
  c->r[11]=R8(c->r[3]+0x00000010u); // 800FA09C
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800FA0A0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA0A4
  c->r[10]=c->r[12]+c->r[10]; // 800FA0A8
  c->r[10]=c->r[11]+c->r[10]; // 800FA0AC
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FA0B0
  c->r[10]=c->r[10]&c->r[0]; // 800FA0B4
  c->r[3]=c->r[3]+c->r[5]; // 800FA0B8
L_800FA0BC:;
  c->r[11]=R32(c->r[3]+0x00000000u); // 800FA0BC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA0C0
  c->r[30]=c->r[11]&c->r[0]; // 800FA0C4
  c->r[11]=R32(c->r[3]+0x00000004u); // 800FA0C8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA0CC
  c->r[31]=c->r[11]&c->r[0]; // 800FA0D0
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800FA0D4
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800FA0D8
  c->r[11]=c->r[30]+c->r[11]; // 800FA0DC
  c->r[11]=c->r[12]+c->r[11]; // 800FA0E0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA0E4
  c->r[11]=c->r[11]&c->r[0]; // 800FA0E8
  c->r[7]=c->r[7]+c->r[11]; // 800FA0EC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FA0F0
  c->r[7]=c->r[11]|c->r[11]; // 800FA0F4
  c->r[11]=R32(c->r[3]+0x00000008u); // 800FA0F8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA0FC
  c->r[30]=c->r[11]&c->r[0]; // 800FA100
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FA104
  c->r[12]=rotl(c->r[30],8)&0x000000FFu; // 800FA108
  c->r[11]=c->r[31]+c->r[11]; // 800FA10C
  c->r[11]=c->r[12]+c->r[11]; // 800FA110
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA114
  c->r[11]=c->r[11]&c->r[0]; // 800FA118
  c->r[8]=c->r[8]+c->r[11]; // 800FA11C
  W32(c->r[4]+0x00000004u,c->r[8]); // 800FA120
  c->r[8]=c->r[11]|c->r[11]; // 800FA124
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 800FA128
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA12C
  c->r[31]=c->r[11]&c->r[0]; // 800FA130
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800FA134
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800FA138
  c->r[11]=c->r[30]+c->r[11]; // 800FA13C
  c->r[11]=c->r[12]+c->r[11]; // 800FA140
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA144
  c->r[11]=c->r[11]&c->r[0]; // 800FA148
  c->r[9]=c->r[9]+c->r[11]; // 800FA14C
  W32(c->r[4]+0x00000008u,c->r[9]); // 800FA150
  c->r[9]=c->r[11]|c->r[11]; // 800FA154
  c->r[12]=R8(c->r[3]+0x00000010u); // 800FA158
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FA15C
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 800FA160
  c->r[11]=c->r[31]+c->r[11]; // 800FA164
  c->r[11]=c->r[12]+c->r[11]; // 800FA168
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA16C
  c->r[11]=c->r[11]&c->r[0]; // 800FA170
  c->r[10]=c->r[10]+c->r[11]; // 800FA174
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800FA178
  c->r[10]=c->r[11]|c->r[11]; // 800FA17C
  c->r[3]=c->r[3]+c->r[5]; // 800FA180
  c->r[4]=c->r[4]+c->r[5]; // 800FA184
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA188
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA0BC; } // 800FA18C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA190
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA194
  c->r[1]=c->r[1]+0x00000010u; // 800FA198
  return; // 800FA19C
}

// fn_800FA1A0
void f_800FA1A0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000008u; // 800FA1A0
  c->r[6]=R32(c->r[3]+0x00000000u); // 800FA1A4
  c->r[7]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA1A8
  c->r[6]=0u+0x7F7F0000u; // 800FA1AC
  c->r[9]=c->r[6]+0x00007F7Fu; // 800FA1B0
  c->r[7]=c->r[7]&c->r[9]; // 800FA1B4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800FA1B8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA1BC
  c->r[6]=c->r[6]&c->r[9]; // 800FA1C0
  c->r[8]=R32(c->r[3]+0x00000008u); // 800FA1C4
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA1C8
  c->r[12]=c->r[8]&c->r[9]; // 800FA1CC
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 800FA1D0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA1D4
  c->r[11]=c->r[8]&c->r[9]; // 800FA1D8
  c->r[8]=c->r[3]+c->r[5]; // 800FA1DC
L_800FA1E0:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 800FA1E0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA1E4
  c->r[10]=c->r[3]&c->r[9]; // 800FA1E8
  c->r[3]=c->r[7]+c->r[10]; // 800FA1EC
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FA1F0
  c->r[7]=c->r[10]|c->r[10]; // 800FA1F4
  c->r[3]=R32(c->r[8]+0x00000004u); // 800FA1F8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA1FC
  c->r[10]=c->r[3]&c->r[9]; // 800FA200
  c->r[3]=c->r[6]+c->r[10]; // 800FA204
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FA208
  c->r[6]=c->r[10]|c->r[10]; // 800FA20C
  c->r[3]=R32(c->r[8]+0x00000008u); // 800FA210
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA214
  c->r[10]=c->r[3]&c->r[9]; // 800FA218
  c->r[3]=c->r[12]+c->r[10]; // 800FA21C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FA220
  c->r[12]=c->r[10]|c->r[10]; // 800FA224
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 800FA228
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA22C
  c->r[10]=c->r[3]&c->r[9]; // 800FA230
  c->r[3]=c->r[11]+c->r[10]; // 800FA234
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FA238
  c->r[11]=c->r[10]|c->r[10]; // 800FA23C
  c->r[8]=c->r[8]+c->r[5]; // 800FA240
  c->r[4]=c->r[4]+c->r[5]; // 800FA244
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FA248
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA1E0; } // 800FA24C
  return; // 800FA250
}

// fn_800FA254
void f_800FA254(Ctx* __restrict c) {
  c->r[0]=0u+0x00000008u; // 800FA254
  c->r[6]=0u+0x7F7F0000u; // 800FA258
  c->r[8]=c->r[6]+0x00007F7Fu; // 800FA25C
L_800FA260:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 800FA260
  c->r[6]=R32(c->r[3]+0x00000001u); // 800FA264
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA268
  c->r[10]=c->r[6]&c->r[8]; // 800FA26C
  c->r[6]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA270
  c->r[7]=rotl(c->r[7],23)&0xFF000000u; // 800FA274
  c->r[6]=c->r[10]+c->r[6]; // 800FA278
  c->r[6]=c->r[7]+c->r[6]; // 800FA27C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800FA280
  c->r[6]=R32(c->r[3]+0x00000005u); // 800FA284
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA288
  c->r[9]=c->r[6]&c->r[8]; // 800FA28C
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800FA290
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FA294
  c->r[6]=c->r[9]+c->r[6]; // 800FA298
  c->r[6]=c->r[7]+c->r[6]; // 800FA29C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800FA2A0
  c->r[6]=R32(c->r[3]+0x00000009u); // 800FA2A4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA2A8
  c->r[10]=c->r[6]&c->r[8]; // 800FA2AC
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800FA2B0
  c->r[7]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA2B4
  c->r[6]=c->r[10]+c->r[6]; // 800FA2B8
  c->r[6]=c->r[7]+c->r[6]; // 800FA2BC
  W32(c->r[4]+0x00000008u,c->r[6]); // 800FA2C0
  c->r[6]=R32(c->r[3]+0x0000000Du); // 800FA2C4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA2C8
  c->r[9]=c->r[6]&c->r[8]; // 800FA2CC
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800FA2D0
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FA2D4
  c->r[6]=c->r[9]+c->r[6]; // 800FA2D8
  c->r[6]=c->r[7]+c->r[6]; // 800FA2DC
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800FA2E0
  c->r[3]=c->r[3]+c->r[5]; // 800FA2E4
  c->r[4]=c->r[4]+c->r[5]; // 800FA2E8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FA2EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA260; } // 800FA2F0
  return; // 800FA2F4
}

// fn_800FA2F8
void f_800FA2F8(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800FA2F8
L_800FA2FC:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800FA2FC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FA300
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800FA304
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800FA308
  c->r[0]=c->r[6]+c->r[0]; // 800FA30C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA310
  c->r[9]=R32(c->r[3]+0x00000005u); // 800FA314
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800FA318
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FA31C
  c->r[0]=c->r[6]+c->r[0]; // 800FA320
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA324
  c->r[8]=R32(c->r[3]+0x00000009u); // 800FA328
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800FA32C
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800FA330
  c->r[0]=c->r[6]+c->r[0]; // 800FA334
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FA338
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800FA33C
  c->r[0]=R32(c->r[3]+0x0000000Du); // 800FA340
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800FA344
  c->r[0]=c->r[6]+c->r[0]; // 800FA348
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FA34C
  c->r[3]=c->r[3]+c->r[5]; // 800FA350
  c->r[4]=c->r[4]+c->r[5]; // 800FA354
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FA358
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA2FC; } // 800FA35C
  return; // 800FA360
}

// fn_800FA364
void f_800FA364(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800FA364
  c->r[7]=0u+0x7F7F0000u; // 800FA368
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA36C
L_800FA370:;
  c->r[7]=R16(c->r[3]+0x00000000u); // 800FA370
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA374
  c->r[9]=c->r[7]&0x00007F7Fu; cr0(c,c->r[9]); // 800FA378
  c->r[7]=R32(c->r[3]+0x00000002u); // 800FA37C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA380
  c->r[11]=c->r[7]&c->r[0]; // 800FA384
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800FA388
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800FA38C
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800FA390
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FA394
  c->r[8]=c->r[10]+c->r[8]; // 800FA398
  c->r[7]=c->r[9]+c->r[7]; // 800FA39C
  c->r[7]=c->r[8]+c->r[7]; // 800FA3A0
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FA3A4
  c->r[7]=R32(c->r[3]+0x00000006u); // 800FA3A8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA3AC
  c->r[12]=c->r[7]&c->r[0]; // 800FA3B0
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800FA3B4
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800FA3B8
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800FA3BC
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800FA3C0
  c->r[8]=c->r[10]+c->r[8]; // 800FA3C4
  c->r[7]=c->r[9]+c->r[7]; // 800FA3C8
  c->r[7]=c->r[8]+c->r[7]; // 800FA3CC
  W32(c->r[4]+0x00000004u,c->r[7]); // 800FA3D0
  c->r[7]=R32(c->r[3]+0x0000000Au); // 800FA3D4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA3D8
  c->r[11]=c->r[7]&c->r[0]; // 800FA3DC
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800FA3E0
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800FA3E4
  c->r[9]=rotl(c->r[12],24)&0xFF000000u; // 800FA3E8
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FA3EC
  c->r[8]=c->r[10]+c->r[8]; // 800FA3F0
  c->r[7]=c->r[9]+c->r[7]; // 800FA3F4
  c->r[7]=c->r[8]+c->r[7]; // 800FA3F8
  W32(c->r[4]+0x00000008u,c->r[7]); // 800FA3FC
  c->r[7]=R32(c->r[3]+0x0000000Eu); // 800FA400
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA404
  c->r[7]=c->r[7]&c->r[0]; // 800FA408
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800FA40C
  c->r[8]=rotl(c->r[7],16)&0x0000FFFFu; // 800FA410
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800FA414
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 800FA418
  c->r[8]=c->r[10]+c->r[8]; // 800FA41C
  c->r[7]=c->r[9]+c->r[7]; // 800FA420
  c->r[7]=c->r[8]+c->r[7]; // 800FA424
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800FA428
  c->r[3]=c->r[3]+c->r[5]; // 800FA42C
  c->r[4]=c->r[4]+c->r[5]; // 800FA430
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA434
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA370; } // 800FA438
  return; // 800FA43C
}

// fn_800FA440
void f_800FA440(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800FA440
L_800FA444:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800FA444
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FA448
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800FA44C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800FA450
  c->r[0]=c->r[6]+c->r[0]; // 800FA454
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA458
  c->r[9]=R32(c->r[3]+0x00000006u); // 800FA45C
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800FA460
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800FA464
  c->r[0]=c->r[6]+c->r[0]; // 800FA468
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA46C
  c->r[8]=R32(c->r[3]+0x0000000Au); // 800FA470
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800FA474
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800FA478
  c->r[0]=c->r[6]+c->r[0]; // 800FA47C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FA480
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800FA484
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800FA488
  c->r[0]=c->r[6]+c->r[0]; // 800FA48C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FA490
  c->r[3]=c->r[3]+c->r[5]; // 800FA494
  c->r[4]=c->r[4]+c->r[5]; // 800FA498
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FA49C
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA444; } // 800FA4A0
  return; // 800FA4A4
}

// fn_800FA4A8
void f_800FA4A8(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800FA4A8
  c->r[7]=0u+0x7F7F0000u; // 800FA4AC
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA4B0
L_800FA4B4:;
  c->r[7]=R32(c->r[3]+0xFFFFFFFFu); // 800FA4B4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA4B8
  c->r[9]=c->r[7]&c->r[0]; // 800FA4BC
  c->r[7]=R32(c->r[3]+0x00000003u); // 800FA4C0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA4C4
  c->r[11]=c->r[7]&c->r[0]; // 800FA4C8
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FA4CC
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800FA4D0
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800FA4D4
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800FA4D8
  c->r[8]=c->r[10]+c->r[8]; // 800FA4DC
  c->r[7]=c->r[9]+c->r[7]; // 800FA4E0
  c->r[7]=c->r[8]+c->r[7]; // 800FA4E4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FA4E8
  c->r[7]=R32(c->r[3]+0x00000007u); // 800FA4EC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA4F0
  c->r[12]=c->r[7]&c->r[0]; // 800FA4F4
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FA4F8
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800FA4FC
  c->r[9]=rotl(c->r[11],16)&0xFFFF0000u; // 800FA500
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800FA504
  c->r[8]=c->r[10]+c->r[8]; // 800FA508
  c->r[7]=c->r[9]+c->r[7]; // 800FA50C
  c->r[7]=c->r[8]+c->r[7]; // 800FA510
  W32(c->r[4]+0x00000004u,c->r[7]); // 800FA514
  c->r[7]=R32(c->r[3]+0x0000000Bu); // 800FA518
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA51C
  c->r[11]=c->r[7]&c->r[0]; // 800FA520
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800FA524
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800FA528
  c->r[9]=rotl(c->r[12],16)&0xFFFF0000u; // 800FA52C
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800FA530
  c->r[8]=c->r[10]+c->r[8]; // 800FA534
  c->r[7]=c->r[9]+c->r[7]; // 800FA538
  c->r[7]=c->r[8]+c->r[7]; // 800FA53C
  W32(c->r[4]+0x00000008u,c->r[7]); // 800FA540
  c->r[7]=R16(c->r[3]+0x0000000Fu); // 800FA544
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA548
  c->r[10]=c->r[7]&0x00007F7Fu; cr0(c,c->r[10]); // 800FA54C
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FA550
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA554
  c->r[7]=rotl(c->r[11],16)&0xFFFF0000u; // 800FA558
  c->r[8]=c->r[9]+c->r[8]; // 800FA55C
  c->r[7]=c->r[7]+c->r[10]; // 800FA560
  c->r[7]=c->r[8]+c->r[7]; // 800FA564
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800FA568
  c->r[3]=c->r[3]+c->r[5]; // 800FA56C
  c->r[4]=c->r[4]+c->r[5]; // 800FA570
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA574
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA4B4; } // 800FA578
  return; // 800FA57C
}

// fn_800FA580
void f_800FA580(Ctx* __restrict c) {
  c->r[7]=0u+0x00000008u; // 800FA580
L_800FA584:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800FA584
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800FA588
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FA58C
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800FA590
  c->r[0]=c->r[6]+c->r[0]; // 800FA594
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA598
  c->r[9]=R32(c->r[3]+0x00000007u); // 800FA59C
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800FA5A0
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800FA5A4
  c->r[0]=c->r[6]+c->r[0]; // 800FA5A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA5AC
  c->r[8]=R32(c->r[3]+0x0000000Bu); // 800FA5B0
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FA5B4
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800FA5B8
  c->r[0]=c->r[6]+c->r[0]; // 800FA5BC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FA5C0
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800FA5C4
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800FA5C8
  c->r[0]=c->r[6]+c->r[0]; // 800FA5CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FA5D0
  c->r[3]=c->r[3]+c->r[5]; // 800FA5D4
  c->r[4]=c->r[4]+c->r[5]; // 800FA5D8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FA5DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA584; } // 800FA5E0
  return; // 800FA5E4
}

// fn_800FA5E8
void f_800FA5E8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000008u; // 800FA5E8
  c->r[6]=0u+0x7F7F0000u; // 800FA5EC
  c->r[8]=c->r[6]+0x00007F7Fu; // 800FA5F0
L_800FA5F4:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800FA5F4
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA5F8
  c->r[10]=c->r[6]&c->r[8]; // 800FA5FC
  c->r[6]=R32(c->r[3]+0x00000004u); // 800FA600
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA604
  c->r[9]=c->r[6]&c->r[8]; // 800FA608
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FA60C
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800FA610
  c->r[6]=c->r[10]+c->r[6]; // 800FA614
  c->r[6]=c->r[7]+c->r[6]; // 800FA618
  W32(c->r[4]+0x00000000u,c->r[6]); // 800FA61C
  c->r[6]=R32(c->r[3]+0x00000008u); // 800FA620
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA624
  c->r[10]=c->r[6]&c->r[8]; // 800FA628
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FA62C
  c->r[7]=rotl(c->r[10],8)&0x000000FFu; // 800FA630
  c->r[6]=c->r[9]+c->r[6]; // 800FA634
  c->r[6]=c->r[7]+c->r[6]; // 800FA638
  W32(c->r[4]+0x00000004u,c->r[6]); // 800FA63C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FA640
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FA644
  c->r[9]=c->r[6]&c->r[8]; // 800FA648
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FA64C
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800FA650
  c->r[6]=c->r[10]+c->r[6]; // 800FA654
  c->r[6]=c->r[7]+c->r[6]; // 800FA658
  W32(c->r[4]+0x00000008u,c->r[6]); // 800FA65C
  c->r[7]=R8(c->r[3]+0x00000010u); // 800FA660
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FA664
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA668
  c->r[6]=c->r[9]+c->r[6]; // 800FA66C
  c->r[6]=c->r[7]+c->r[6]; // 800FA670
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800FA674
  c->r[3]=c->r[3]+c->r[5]; // 800FA678
  c->r[4]=c->r[4]+c->r[5]; // 800FA67C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FA680
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA5F4; } // 800FA684
  return; // 800FA688
}

// fn_800FA68C
void f_800FA68C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000008u; // 800FA68C
L_800FA690:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA690
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA694
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA698
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA69C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FA6A0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FA6A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FA6A8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FA6AC
  c->r[3]=c->r[3]+c->r[5]; // 800FA6B0
  c->r[4]=c->r[4]+c->r[5]; // 800FA6B4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA6B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA690; } // 800FA6BC
  return; // 800FA6C0
}

// fn_800FA6C4
void f_800FA6C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA6C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA6C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA6CC
  c->r[6]=0u+0x00000010u; // 800FA6D0
  c->r[10]=R8(c->r[3]+0x00000000u); // 800FA6D4
  c->r[0]=R32(c->r[3]+0x00000001u); // 800FA6D8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FA6DC
  c->r[7]=0u+0x7F7F0000u; // 800FA6E0
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA6E4
  c->r[9]=c->r[8]&c->r[0]; // 800FA6E8
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FA6EC
  c->r[8]=rotl(c->r[10],23)&0xFF000000u; // 800FA6F0
  c->r[7]=c->r[9]+c->r[7]; // 800FA6F4
  c->r[7]=c->r[8]+c->r[7]; // 800FA6F8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA6FC
  c->r[7]=c->r[7]&c->r[0]; // 800FA700
  c->r[8]=R32(c->r[3]+0x00000005u); // 800FA704
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA708
  c->r[10]=c->r[8]&c->r[0]; // 800FA70C
  c->r[8]=rotl(c->r[9],24)&0xFF000000u; // 800FA710
  c->r[9]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA714
  c->r[8]=c->r[10]+c->r[8]; // 800FA718
  c->r[8]=c->r[9]+c->r[8]; // 800FA71C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA720
  c->r[8]=c->r[8]&c->r[0]; // 800FA724
  c->r[9]=R32(c->r[3]+0x00000009u); // 800FA728
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FA72C
  c->r[11]=c->r[9]&c->r[0]; // 800FA730
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 800FA734
  c->r[10]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FA738
  c->r[9]=c->r[11]+c->r[9]; // 800FA73C
  c->r[9]=c->r[10]+c->r[9]; // 800FA740
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FA744
  c->r[9]=c->r[9]&c->r[0]; // 800FA748
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800FA74C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FA750
  c->r[12]=c->r[10]&c->r[0]; // 800FA754
  c->r[10]=rotl(c->r[11],24)&0xFF000000u; // 800FA758
  c->r[11]=rotl(c->r[12],24)&0x00FFFFFFu; // 800FA75C
  c->r[10]=c->r[12]+c->r[10]; // 800FA760
  c->r[10]=c->r[11]+c->r[10]; // 800FA764
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FA768
  c->r[10]=c->r[10]&c->r[0]; // 800FA76C
  c->r[3]=c->r[3]+c->r[5]; // 800FA770
L_800FA774:;
  c->r[12]=R8(c->r[3]+0x00000000u); // 800FA774
  c->r[11]=R32(c->r[3]+0x00000001u); // 800FA778
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA77C
  c->r[30]=c->r[11]&c->r[0]; // 800FA780
  c->r[11]=rotl(c->r[30],24)&0x00FFFFFFu; // 800FA784
  c->r[12]=rotl(c->r[12],23)&0xFF000000u; // 800FA788
  c->r[11]=c->r[30]+c->r[11]; // 800FA78C
  c->r[11]=c->r[12]+c->r[11]; // 800FA790
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA794
  c->r[11]=c->r[11]&c->r[0]; // 800FA798
  c->r[7]=c->r[7]+c->r[11]; // 800FA79C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FA7A0
  c->r[7]=c->r[11]|c->r[11]; // 800FA7A4
  c->r[11]=R32(c->r[3]+0x00000005u); // 800FA7A8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA7AC
  c->r[31]=c->r[11]&c->r[0]; // 800FA7B0
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800FA7B4
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800FA7B8
  c->r[11]=c->r[31]+c->r[11]; // 800FA7BC
  c->r[11]=c->r[12]+c->r[11]; // 800FA7C0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA7C4
  c->r[11]=c->r[11]&c->r[0]; // 800FA7C8
  c->r[8]=c->r[8]+c->r[11]; // 800FA7CC
  W32(c->r[4]+0x00000004u,c->r[8]); // 800FA7D0
  c->r[8]=c->r[11]|c->r[11]; // 800FA7D4
  c->r[11]=R32(c->r[3]+0x00000009u); // 800FA7D8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA7DC
  c->r[30]=c->r[11]&c->r[0]; // 800FA7E0
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800FA7E4
  c->r[12]=rotl(c->r[30],24)&0x00FFFFFFu; // 800FA7E8
  c->r[11]=c->r[30]+c->r[11]; // 800FA7EC
  c->r[11]=c->r[12]+c->r[11]; // 800FA7F0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA7F4
  c->r[11]=c->r[11]&c->r[0]; // 800FA7F8
  c->r[9]=c->r[9]+c->r[11]; // 800FA7FC
  W32(c->r[4]+0x00000008u,c->r[9]); // 800FA800
  c->r[9]=c->r[11]|c->r[11]; // 800FA804
  c->r[11]=R32(c->r[3]+0x0000000Du); // 800FA808
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA80C
  c->r[31]=c->r[11]&c->r[0]; // 800FA810
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800FA814
  c->r[12]=rotl(c->r[31],24)&0x00FFFFFFu; // 800FA818
  c->r[11]=c->r[31]+c->r[11]; // 800FA81C
  c->r[11]=c->r[12]+c->r[11]; // 800FA820
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FA824
  c->r[11]=c->r[11]&c->r[0]; // 800FA828
  c->r[10]=c->r[10]+c->r[11]; // 800FA82C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800FA830
  c->r[10]=c->r[11]|c->r[11]; // 800FA834
  c->r[3]=c->r[3]+c->r[5]; // 800FA838
  c->r[4]=c->r[4]+c->r[5]; // 800FA83C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA840
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA774; } // 800FA844
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA848
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA84C
  c->r[1]=c->r[1]+0x00000010u; // 800FA850
  return; // 800FA854
}

// fn_800FA858
void f_800FA858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA85C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA860
  c->r[6]=0u+0x00000010u; // 800FA864
  c->r[9]=R32(c->r[3]+0x00000001u); // 800FA868
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FA86C
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800FA870
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FA874
  c->r[0]=c->r[7]+c->r[0]; // 800FA878
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FA87C
  c->r[7]=0u+0x7F7F0000u; // 800FA880
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA884
  c->r[7]=c->r[8]&c->r[0]; // 800FA888
  c->r[10]=R32(c->r[3]+0x00000005u); // 800FA88C
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800FA890
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA894
  c->r[8]=c->r[9]+c->r[8]; // 800FA898
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA89C
  c->r[8]=c->r[8]&c->r[0]; // 800FA8A0
  c->r[11]=R32(c->r[3]+0x00000009u); // 800FA8A4
  c->r[10]=rotl(c->r[10],24)&0xFF000000u; // 800FA8A8
  c->r[9]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FA8AC
  c->r[9]=c->r[10]+c->r[9]; // 800FA8B0
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FA8B4
  c->r[9]=c->r[9]&c->r[0]; // 800FA8B8
  c->r[11]=rotl(c->r[11],24)&0xFF000000u; // 800FA8BC
  c->r[10]=R32(c->r[3]+0x0000000Du); // 800FA8C0
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FA8C4
  c->r[10]=c->r[11]+c->r[10]; // 800FA8C8
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FA8CC
  c->r[10]=c->r[10]&c->r[0]; // 800FA8D0
  c->r[12]=c->r[3]+c->r[5]; // 800FA8D4
L_800FA8D8:;
  c->r[31]=R32(c->r[12]+0x00000001u); // 800FA8D8
  c->r[3]=R8(c->r[12]+0x00000000u); // 800FA8DC
  c->r[11]=rotl(c->r[3],24)&0xFF000000u; // 800FA8E0
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800FA8E4
  c->r[3]=c->r[11]+c->r[3]; // 800FA8E8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA8EC
  c->r[11]=c->r[3]&c->r[0]; // 800FA8F0
  c->r[3]=c->r[7]+c->r[11]; // 800FA8F4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FA8F8
  c->r[7]=c->r[11]|c->r[11]; // 800FA8FC
  c->r[30]=R32(c->r[12]+0x00000005u); // 800FA900
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800FA904
  c->r[3]=rotl(c->r[30],24)&0x00FFFFFFu; // 800FA908
  c->r[3]=c->r[11]+c->r[3]; // 800FA90C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA910
  c->r[11]=c->r[3]&c->r[0]; // 800FA914
  c->r[3]=c->r[8]+c->r[11]; // 800FA918
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FA91C
  c->r[8]=c->r[11]|c->r[11]; // 800FA920
  c->r[31]=R32(c->r[12]+0x00000009u); // 800FA924
  c->r[11]=rotl(c->r[30],24)&0xFF000000u; // 800FA928
  c->r[3]=rotl(c->r[31],24)&0x00FFFFFFu; // 800FA92C
  c->r[3]=c->r[11]+c->r[3]; // 800FA930
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA934
  c->r[11]=c->r[3]&c->r[0]; // 800FA938
  c->r[3]=c->r[9]+c->r[11]; // 800FA93C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FA940
  c->r[9]=c->r[11]|c->r[11]; // 800FA944
  c->r[11]=rotl(c->r[31],24)&0xFF000000u; // 800FA948
  c->r[3]=R32(c->r[12]+0x0000000Du); // 800FA94C
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 800FA950
  c->r[3]=c->r[11]+c->r[3]; // 800FA954
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FA958
  c->r[11]=c->r[3]&c->r[0]; // 800FA95C
  c->r[3]=c->r[10]+c->r[11]; // 800FA960
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FA964
  c->r[10]=c->r[11]|c->r[11]; // 800FA968
  c->r[12]=c->r[12]+c->r[5]; // 800FA96C
  c->r[4]=c->r[4]+c->r[5]; // 800FA970
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FA974
  if (!crb(c,2)) { IRQCHK(c); goto L_800FA8D8; } // 800FA978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA97C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA980
  c->r[1]=c->r[1]+0x00000010u; // 800FA984
  return; // 800FA988
}

// fn_800FA98C
void f_800FA98C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA98C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA990
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FA994
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FA998
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA99C
  c->r[6]=0u+0x00000010u; // 800FA9A0
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FA9A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FA9A8
  c->r[9]=c->r[0]&0x00007F7Fu; cr0(c,c->r[9]); // 800FA9AC
  c->r[0]=R32(c->r[3]+0x00000002u); // 800FA9B0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FA9B4
  c->r[7]=0u+0x7F7F0000u; // 800FA9B8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FA9BC
  c->r[12]=c->r[8]&c->r[0]; // 800FA9C0
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800FA9C4
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800FA9C8
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800FA9CC
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800FA9D0
  c->r[8]=c->r[10]+c->r[8]; // 800FA9D4
  c->r[7]=c->r[9]+c->r[7]; // 800FA9D8
  c->r[7]=c->r[8]+c->r[7]; // 800FA9DC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FA9E0
  c->r[7]=c->r[7]&c->r[0]; // 800FA9E4
  c->r[8]=R32(c->r[3]+0x00000006u); // 800FA9E8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FA9EC
  c->r[29]=c->r[8]&c->r[0]; // 800FA9F0
  c->r[11]=rotl(c->r[12],16)&0xFFFF0000u; // 800FA9F4
  c->r[9]=rotl(c->r[29],16)&0x0000FFFFu; // 800FA9F8
  c->r[10]=rotl(c->r[12],24)&0xFF000000u; // 800FA9FC
  c->r[8]=rotl(c->r[29],24)&0x00FFFFFFu; // 800FAA00
  c->r[9]=c->r[11]+c->r[9]; // 800FAA04
  c->r[8]=c->r[10]+c->r[8]; // 800FAA08
  c->r[8]=c->r[9]+c->r[8]; // 800FAA0C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FAA10
  c->r[8]=c->r[8]&c->r[0]; // 800FAA14
  c->r[9]=R32(c->r[3]+0x0000000Au); // 800FAA18
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FAA1C
  c->r[28]=c->r[9]&c->r[0]; // 800FAA20
  c->r[12]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAA24
  c->r[10]=rotl(c->r[28],16)&0x0000FFFFu; // 800FAA28
  c->r[11]=rotl(c->r[29],24)&0xFF000000u; // 800FAA2C
  c->r[9]=rotl(c->r[28],24)&0x00FFFFFFu; // 800FAA30
  c->r[10]=c->r[12]+c->r[10]; // 800FAA34
  c->r[9]=c->r[11]+c->r[9]; // 800FAA38
  c->r[9]=c->r[10]+c->r[9]; // 800FAA3C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FAA40
  c->r[9]=c->r[9]&c->r[0]; // 800FAA44
  c->r[10]=R32(c->r[3]+0x0000000Eu); // 800FAA48
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FAA4C
  c->r[10]=c->r[10]&c->r[0]; // 800FAA50
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800FAA54
  c->r[11]=rotl(c->r[10],16)&0x0000FFFFu; // 800FAA58
  c->r[12]=rotl(c->r[28],24)&0xFF000000u; // 800FAA5C
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FAA60
  c->r[11]=c->r[30]+c->r[11]; // 800FAA64
  c->r[10]=c->r[12]+c->r[10]; // 800FAA68
  c->r[10]=c->r[11]+c->r[10]; // 800FAA6C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FAA70
  c->r[10]=c->r[10]&c->r[0]; // 800FAA74
  c->r[3]=c->r[3]+c->r[5]; // 800FAA78
L_800FAA7C:;
  c->r[11]=R16(c->r[3]+0x00000000u); // 800FAA7C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAA80
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800FAA84
  c->r[11]=R32(c->r[3]+0x00000002u); // 800FAA88
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAA8C
  c->r[29]=c->r[11]&c->r[0]; // 800FAA90
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800FAA94
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800FAA98
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800FAA9C
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800FAAA0
  c->r[12]=c->r[31]+c->r[12]; // 800FAAA4
  c->r[11]=c->r[30]+c->r[11]; // 800FAAA8
  c->r[11]=c->r[12]+c->r[11]; // 800FAAAC
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAAB0
  c->r[11]=c->r[11]&c->r[0]; // 800FAAB4
  c->r[7]=c->r[7]+c->r[11]; // 800FAAB8
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FAABC
  c->r[7]=c->r[11]|c->r[11]; // 800FAAC0
  c->r[11]=R32(c->r[3]+0x00000006u); // 800FAAC4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAAC8
  c->r[28]=c->r[11]&c->r[0]; // 800FAACC
  c->r[31]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAAD0
  c->r[12]=rotl(c->r[28],16)&0x0000FFFFu; // 800FAAD4
  c->r[30]=rotl(c->r[29],24)&0xFF000000u; // 800FAAD8
  c->r[11]=rotl(c->r[28],24)&0x00FFFFFFu; // 800FAADC
  c->r[12]=c->r[31]+c->r[12]; // 800FAAE0
  c->r[11]=c->r[30]+c->r[11]; // 800FAAE4
  c->r[11]=c->r[12]+c->r[11]; // 800FAAE8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAAEC
  c->r[11]=c->r[11]&c->r[0]; // 800FAAF0
  c->r[8]=c->r[8]+c->r[11]; // 800FAAF4
  W32(c->r[4]+0x00000004u,c->r[8]); // 800FAAF8
  c->r[8]=c->r[11]|c->r[11]; // 800FAAFC
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800FAB00
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAB04
  c->r[29]=c->r[11]&c->r[0]; // 800FAB08
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800FAB0C
  c->r[12]=rotl(c->r[29],16)&0x0000FFFFu; // 800FAB10
  c->r[30]=rotl(c->r[28],24)&0xFF000000u; // 800FAB14
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800FAB18
  c->r[12]=c->r[31]+c->r[12]; // 800FAB1C
  c->r[11]=c->r[30]+c->r[11]; // 800FAB20
  c->r[11]=c->r[12]+c->r[11]; // 800FAB24
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAB28
  c->r[11]=c->r[11]&c->r[0]; // 800FAB2C
  c->r[9]=c->r[9]+c->r[11]; // 800FAB30
  W32(c->r[4]+0x00000008u,c->r[9]); // 800FAB34
  c->r[9]=c->r[11]|c->r[11]; // 800FAB38
  c->r[11]=R32(c->r[3]+0x0000000Eu); // 800FAB3C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAB40
  c->r[11]=c->r[11]&c->r[0]; // 800FAB44
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAB48
  c->r[12]=rotl(c->r[11],16)&0x0000FFFFu; // 800FAB4C
  c->r[31]=rotl(c->r[29],24)&0xFF000000u; // 800FAB50
  c->r[11]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FAB54
  c->r[12]=c->r[30]+c->r[12]; // 800FAB58
  c->r[11]=c->r[31]+c->r[11]; // 800FAB5C
  c->r[11]=c->r[12]+c->r[11]; // 800FAB60
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAB64
  c->r[11]=c->r[11]&c->r[0]; // 800FAB68
  c->r[10]=c->r[10]+c->r[11]; // 800FAB6C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800FAB70
  c->r[10]=c->r[11]|c->r[11]; // 800FAB74
  c->r[3]=c->r[3]+c->r[5]; // 800FAB78
  c->r[4]=c->r[4]+c->r[5]; // 800FAB7C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FAB80
  if (!crb(c,2)) { IRQCHK(c); goto L_800FAA7C; } // 800FAB84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FAB88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FAB8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FAB90
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FAB94
  c->r[1]=c->r[1]+0x00000020u; // 800FAB98
  return; // 800FAB9C
}

// fn_800FABA0
void f_800FABA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FABA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FABA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FABA8
  c->r[6]=0u+0x00000010u; // 800FABAC
  c->r[9]=R32(c->r[3]+0x00000002u); // 800FABB0
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FABB4
  c->r[7]=rotl(c->r[0],16)&0xFFFF0000u; // 800FABB8
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800FABBC
  c->r[0]=c->r[7]+c->r[0]; // 800FABC0
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FABC4
  c->r[7]=0u+0x7F7F0000u; // 800FABC8
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FABCC
  c->r[7]=c->r[8]&c->r[0]; // 800FABD0
  c->r[10]=R32(c->r[3]+0x00000006u); // 800FABD4
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800FABD8
  c->r[8]=rotl(c->r[10],16)&0x0000FFFFu; // 800FABDC
  c->r[8]=c->r[9]+c->r[8]; // 800FABE0
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FABE4
  c->r[8]=c->r[8]&c->r[0]; // 800FABE8
  c->r[11]=R32(c->r[3]+0x0000000Au); // 800FABEC
  c->r[10]=rotl(c->r[10],16)&0xFFFF0000u; // 800FABF0
  c->r[9]=rotl(c->r[11],16)&0x0000FFFFu; // 800FABF4
  c->r[9]=c->r[10]+c->r[9]; // 800FABF8
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FABFC
  c->r[9]=c->r[9]&c->r[0]; // 800FAC00
  c->r[11]=rotl(c->r[11],16)&0xFFFF0000u; // 800FAC04
  c->r[10]=R16(c->r[3]+0x0000000Eu); // 800FAC08
  c->r[10]=c->r[11]+c->r[10]; // 800FAC0C
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FAC10
  c->r[10]=c->r[10]&c->r[0]; // 800FAC14
  c->r[12]=c->r[3]+c->r[5]; // 800FAC18
L_800FAC1C:;
  c->r[31]=R32(c->r[12]+0x00000002u); // 800FAC1C
  c->r[3]=R16(c->r[12]+0x00000000u); // 800FAC20
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 800FAC24
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800FAC28
  c->r[3]=c->r[11]+c->r[3]; // 800FAC2C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAC30
  c->r[11]=c->r[3]&c->r[0]; // 800FAC34
  c->r[3]=c->r[7]+c->r[11]; // 800FAC38
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FAC3C
  c->r[7]=c->r[11]|c->r[11]; // 800FAC40
  c->r[30]=R32(c->r[12]+0x00000006u); // 800FAC44
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800FAC48
  c->r[3]=rotl(c->r[30],16)&0x0000FFFFu; // 800FAC4C
  c->r[3]=c->r[11]+c->r[3]; // 800FAC50
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAC54
  c->r[11]=c->r[3]&c->r[0]; // 800FAC58
  c->r[3]=c->r[8]+c->r[11]; // 800FAC5C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FAC60
  c->r[8]=c->r[11]|c->r[11]; // 800FAC64
  c->r[31]=R32(c->r[12]+0x0000000Au); // 800FAC68
  c->r[11]=rotl(c->r[30],16)&0xFFFF0000u; // 800FAC6C
  c->r[3]=rotl(c->r[31],16)&0x0000FFFFu; // 800FAC70
  c->r[3]=c->r[11]+c->r[3]; // 800FAC74
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAC78
  c->r[11]=c->r[3]&c->r[0]; // 800FAC7C
  c->r[3]=c->r[9]+c->r[11]; // 800FAC80
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FAC84
  c->r[9]=c->r[11]|c->r[11]; // 800FAC88
  c->r[11]=rotl(c->r[31],16)&0xFFFF0000u; // 800FAC8C
  c->r[3]=R16(c->r[12]+0x0000000Eu); // 800FAC90
  c->r[3]=c->r[11]+c->r[3]; // 800FAC94
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAC98
  c->r[11]=c->r[3]&c->r[0]; // 800FAC9C
  c->r[3]=c->r[10]+c->r[11]; // 800FACA0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FACA4
  c->r[10]=c->r[11]|c->r[11]; // 800FACA8
  c->r[12]=c->r[12]+c->r[5]; // 800FACAC
  c->r[4]=c->r[4]+c->r[5]; // 800FACB0
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FACB4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FAC1C; } // 800FACB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FACBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FACC0
  c->r[1]=c->r[1]+0x00000010u; // 800FACC4
  return; // 800FACC8
}

// fn_800FACCC
void f_800FACCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FACCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FACD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FACD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FACD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FACDC
  c->r[6]=0u+0x00000010u; // 800FACE0
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800FACE4
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FACE8
  c->r[7]=0u+0x7F7F0000u; // 800FACEC
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FACF0
  c->r[9]=c->r[8]&c->r[0]; // 800FACF4
  c->r[7]=R32(c->r[3]+0x00000003u); // 800FACF8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FACFC
  c->r[12]=c->r[7]&c->r[0]; // 800FAD00
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FAD04
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800FAD08
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800FAD0C
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800FAD10
  c->r[8]=c->r[10]+c->r[8]; // 800FAD14
  c->r[7]=c->r[9]+c->r[7]; // 800FAD18
  c->r[7]=c->r[8]+c->r[7]; // 800FAD1C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FAD20
  c->r[7]=c->r[7]&c->r[0]; // 800FAD24
  c->r[8]=R32(c->r[3]+0x00000007u); // 800FAD28
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FAD2C
  c->r[29]=c->r[8]&c->r[0]; // 800FAD30
  c->r[11]=rotl(c->r[12],8)&0xFFFFFF00u; // 800FAD34
  c->r[9]=rotl(c->r[29],8)&0x000000FFu; // 800FAD38
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800FAD3C
  c->r[8]=rotl(c->r[29],16)&0x0000FFFFu; // 800FAD40
  c->r[9]=c->r[11]+c->r[9]; // 800FAD44
  c->r[8]=c->r[10]+c->r[8]; // 800FAD48
  c->r[8]=c->r[9]+c->r[8]; // 800FAD4C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FAD50
  c->r[8]=c->r[8]&c->r[0]; // 800FAD54
  c->r[9]=R32(c->r[3]+0x0000000Bu); // 800FAD58
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FAD5C
  c->r[28]=c->r[9]&c->r[0]; // 800FAD60
  c->r[12]=rotl(c->r[29],8)&0xFFFFFF00u; // 800FAD64
  c->r[10]=rotl(c->r[28],8)&0x000000FFu; // 800FAD68
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAD6C
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 800FAD70
  c->r[10]=c->r[12]+c->r[10]; // 800FAD74
  c->r[9]=c->r[11]+c->r[9]; // 800FAD78
  c->r[9]=c->r[10]+c->r[9]; // 800FAD7C
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FAD80
  c->r[9]=c->r[9]&c->r[0]; // 800FAD84
  c->r[10]=R16(c->r[3]+0x0000000Fu); // 800FAD88
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FAD8C
  c->r[29]=c->r[10]&0x00007F7Fu; cr0(c,c->r[29]); // 800FAD90
  c->r[12]=rotl(c->r[28],8)&0xFFFFFF00u; // 800FAD94
  c->r[11]=rotl(c->r[29],24)&0x00FFFFFFu; // 800FAD98
  c->r[10]=rotl(c->r[28],16)&0xFFFF0000u; // 800FAD9C
  c->r[11]=c->r[12]+c->r[11]; // 800FADA0
  c->r[10]=c->r[10]+c->r[29]; // 800FADA4
  c->r[10]=c->r[11]+c->r[10]; // 800FADA8
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FADAC
  c->r[10]=c->r[10]&c->r[0]; // 800FADB0
  c->r[3]=c->r[3]+c->r[5]; // 800FADB4
L_800FADB8:;
  c->r[11]=R32(c->r[3]+0xFFFFFFFFu); // 800FADB8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FADBC
  c->r[28]=c->r[11]&c->r[0]; // 800FADC0
  c->r[11]=R32(c->r[3]+0x00000003u); // 800FADC4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FADC8
  c->r[29]=c->r[11]&c->r[0]; // 800FADCC
  c->r[31]=rotl(c->r[28],8)&0xFFFFFF00u; // 800FADD0
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800FADD4
  c->r[30]=rotl(c->r[28],16)&0xFFFF0000u; // 800FADD8
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800FADDC
  c->r[12]=c->r[31]+c->r[12]; // 800FADE0
  c->r[11]=c->r[30]+c->r[11]; // 800FADE4
  c->r[11]=c->r[12]+c->r[11]; // 800FADE8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FADEC
  c->r[11]=c->r[11]&c->r[0]; // 800FADF0
  c->r[7]=c->r[7]+c->r[11]; // 800FADF4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FADF8
  c->r[7]=c->r[11]|c->r[11]; // 800FADFC
  c->r[11]=R32(c->r[3]+0x00000007u); // 800FAE00
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE04
  c->r[28]=c->r[11]&c->r[0]; // 800FAE08
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800FAE0C
  c->r[12]=rotl(c->r[28],8)&0x000000FFu; // 800FAE10
  c->r[30]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAE14
  c->r[11]=rotl(c->r[28],16)&0x0000FFFFu; // 800FAE18
  c->r[12]=c->r[31]+c->r[12]; // 800FAE1C
  c->r[11]=c->r[30]+c->r[11]; // 800FAE20
  c->r[11]=c->r[12]+c->r[11]; // 800FAE24
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE28
  c->r[11]=c->r[11]&c->r[0]; // 800FAE2C
  c->r[8]=c->r[8]+c->r[11]; // 800FAE30
  W32(c->r[4]+0x00000004u,c->r[8]); // 800FAE34
  c->r[8]=c->r[11]|c->r[11]; // 800FAE38
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800FAE3C
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE40
  c->r[29]=c->r[11]&c->r[0]; // 800FAE44
  c->r[30]=rotl(c->r[28],8)&0xFFFFFF00u; // 800FAE48
  c->r[12]=rotl(c->r[29],8)&0x000000FFu; // 800FAE4C
  c->r[31]=rotl(c->r[28],16)&0xFFFF0000u; // 800FAE50
  c->r[11]=rotl(c->r[29],16)&0x0000FFFFu; // 800FAE54
  c->r[12]=c->r[30]+c->r[12]; // 800FAE58
  c->r[11]=c->r[31]+c->r[11]; // 800FAE5C
  c->r[11]=c->r[12]+c->r[11]; // 800FAE60
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE64
  c->r[11]=c->r[11]&c->r[0]; // 800FAE68
  c->r[9]=c->r[9]+c->r[11]; // 800FAE6C
  W32(c->r[4]+0x00000008u,c->r[9]); // 800FAE70
  c->r[9]=c->r[11]|c->r[11]; // 800FAE74
  c->r[11]=R16(c->r[3]+0x0000000Fu); // 800FAE78
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE7C
  c->r[28]=c->r[11]&0x00007F7Fu; cr0(c,c->r[28]); // 800FAE80
  c->r[31]=rotl(c->r[29],8)&0xFFFFFF00u; // 800FAE84
  c->r[12]=rotl(c->r[28],24)&0x00FFFFFFu; // 800FAE88
  c->r[11]=rotl(c->r[29],16)&0xFFFF0000u; // 800FAE8C
  c->r[12]=c->r[31]+c->r[12]; // 800FAE90
  c->r[11]=c->r[11]+c->r[28]; // 800FAE94
  c->r[11]=c->r[12]+c->r[11]; // 800FAE98
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FAE9C
  c->r[11]=c->r[11]&c->r[0]; // 800FAEA0
  c->r[10]=c->r[10]+c->r[11]; // 800FAEA4
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800FAEA8
  c->r[10]=c->r[11]|c->r[11]; // 800FAEAC
  c->r[3]=c->r[3]+c->r[5]; // 800FAEB0
  c->r[4]=c->r[4]+c->r[5]; // 800FAEB4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FAEB8
  if (!crb(c,2)) { IRQCHK(c); goto L_800FADB8; } // 800FAEBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FAEC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FAEC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FAEC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FAECC
  c->r[1]=c->r[1]+0x00000020u; // 800FAED0
  return; // 800FAED4
}

// fn_800FAED8
void f_800FAED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAED8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAEDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FAEE0
  c->r[6]=0u+0x00000010u; // 800FAEE4
  c->r[9]=R32(c->r[3]+0x00000003u); // 800FAEE8
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800FAEEC
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FAEF0
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800FAEF4
  c->r[0]=c->r[7]+c->r[0]; // 800FAEF8
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FAEFC
  c->r[7]=0u+0x7F7F0000u; // 800FAF00
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FAF04
  c->r[7]=c->r[8]&c->r[0]; // 800FAF08
  c->r[10]=R32(c->r[3]+0x00000007u); // 800FAF0C
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FAF10
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800FAF14
  c->r[8]=c->r[9]+c->r[8]; // 800FAF18
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FAF1C
  c->r[8]=c->r[8]&c->r[0]; // 800FAF20
  c->r[11]=R32(c->r[3]+0x0000000Bu); // 800FAF24
  c->r[10]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FAF28
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800FAF2C
  c->r[9]=c->r[10]+c->r[9]; // 800FAF30
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FAF34
  c->r[9]=c->r[9]&c->r[0]; // 800FAF38
  c->r[11]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FAF3C
  c->r[10]=R8(c->r[3]+0x0000000Fu); // 800FAF40
  c->r[10]=c->r[11]+c->r[10]; // 800FAF44
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FAF48
  c->r[10]=c->r[10]&c->r[0]; // 800FAF4C
  c->r[12]=c->r[3]+c->r[5]; // 800FAF50
L_800FAF54:;
  c->r[31]=R32(c->r[12]+0x00000003u); // 800FAF54
  c->r[3]=R32(c->r[12]+0xFFFFFFFFu); // 800FAF58
  c->r[11]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FAF5C
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800FAF60
  c->r[3]=c->r[11]+c->r[3]; // 800FAF64
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAF68
  c->r[11]=c->r[3]&c->r[0]; // 800FAF6C
  c->r[3]=c->r[7]+c->r[11]; // 800FAF70
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FAF74
  c->r[7]=c->r[11]|c->r[11]; // 800FAF78
  c->r[30]=R32(c->r[12]+0x00000007u); // 800FAF7C
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FAF80
  c->r[3]=rotl(c->r[30],8)&0x000000FFu; // 800FAF84
  c->r[3]=c->r[11]+c->r[3]; // 800FAF88
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAF8C
  c->r[11]=c->r[3]&c->r[0]; // 800FAF90
  c->r[3]=c->r[8]+c->r[11]; // 800FAF94
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FAF98
  c->r[8]=c->r[11]|c->r[11]; // 800FAF9C
  c->r[31]=R32(c->r[12]+0x0000000Bu); // 800FAFA0
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800FAFA4
  c->r[3]=rotl(c->r[31],8)&0x000000FFu; // 800FAFA8
  c->r[3]=c->r[11]+c->r[3]; // 800FAFAC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAFB0
  c->r[11]=c->r[3]&c->r[0]; // 800FAFB4
  c->r[3]=c->r[9]+c->r[11]; // 800FAFB8
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FAFBC
  c->r[9]=c->r[11]|c->r[11]; // 800FAFC0
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FAFC4
  c->r[3]=R8(c->r[12]+0x0000000Fu); // 800FAFC8
  c->r[3]=c->r[11]+c->r[3]; // 800FAFCC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FAFD0
  c->r[11]=c->r[3]&c->r[0]; // 800FAFD4
  c->r[3]=c->r[10]+c->r[11]; // 800FAFD8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FAFDC
  c->r[10]=c->r[11]|c->r[11]; // 800FAFE0
  c->r[12]=c->r[12]+c->r[5]; // 800FAFE4
  c->r[4]=c->r[4]+c->r[5]; // 800FAFE8
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FAFEC
  if (!crb(c,2)) { IRQCHK(c); goto L_800FAF54; } // 800FAFF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAFF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FAFF8
  c->r[1]=c->r[1]+0x00000010u; // 800FAFFC
  return; // 800FB000
}

// fn_800FB004
void f_800FB004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB008
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB00C
  c->r[6]=0u+0x00000010u; // 800FB010
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FB014
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FB018
  c->r[7]=0u+0x7F7F0000u; // 800FB01C
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FB020
  c->r[9]=c->r[8]&c->r[0]; // 800FB024
  c->r[7]=R32(c->r[3]+0x00000004u); // 800FB028
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB02C
  c->r[10]=c->r[7]&c->r[0]; // 800FB030
  c->r[7]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FB034
  c->r[8]=rotl(c->r[10],8)&0x000000FFu; // 800FB038
  c->r[7]=c->r[9]+c->r[7]; // 800FB03C
  c->r[7]=c->r[8]+c->r[7]; // 800FB040
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB044
  c->r[7]=c->r[7]&c->r[0]; // 800FB048
  c->r[8]=R32(c->r[3]+0x00000008u); // 800FB04C
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FB050
  c->r[11]=c->r[8]&c->r[0]; // 800FB054
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FB058
  c->r[9]=rotl(c->r[11],8)&0x000000FFu; // 800FB05C
  c->r[8]=c->r[10]+c->r[8]; // 800FB060
  c->r[8]=c->r[9]+c->r[8]; // 800FB064
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FB068
  c->r[8]=c->r[8]&c->r[0]; // 800FB06C
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800FB070
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FB074
  c->r[12]=c->r[9]&c->r[0]; // 800FB078
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FB07C
  c->r[10]=rotl(c->r[12],8)&0x000000FFu; // 800FB080
  c->r[9]=c->r[11]+c->r[9]; // 800FB084
  c->r[9]=c->r[10]+c->r[9]; // 800FB088
  c->r[9]=rotl(c->r[9],31)&0x7FFFFFFFu; // 800FB08C
  c->r[9]=c->r[9]&c->r[0]; // 800FB090
  c->r[11]=R8(c->r[3]+0x00000010u); // 800FB094
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800FB098
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB09C
  c->r[10]=c->r[12]+c->r[10]; // 800FB0A0
  c->r[10]=c->r[11]+c->r[10]; // 800FB0A4
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800FB0A8
  c->r[10]=c->r[10]&c->r[0]; // 800FB0AC
  c->r[3]=c->r[3]+c->r[5]; // 800FB0B0
L_800FB0B4:;
  c->r[11]=R32(c->r[3]+0x00000000u); // 800FB0B4
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB0B8
  c->r[30]=c->r[11]&c->r[0]; // 800FB0BC
  c->r[11]=R32(c->r[3]+0x00000004u); // 800FB0C0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB0C4
  c->r[31]=c->r[11]&c->r[0]; // 800FB0C8
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800FB0CC
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800FB0D0
  c->r[11]=c->r[30]+c->r[11]; // 800FB0D4
  c->r[11]=c->r[12]+c->r[11]; // 800FB0D8
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB0DC
  c->r[11]=c->r[11]&c->r[0]; // 800FB0E0
  c->r[7]=c->r[7]+c->r[11]; // 800FB0E4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FB0E8
  c->r[7]=c->r[11]|c->r[11]; // 800FB0EC
  c->r[11]=R32(c->r[3]+0x00000008u); // 800FB0F0
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB0F4
  c->r[30]=c->r[11]&c->r[0]; // 800FB0F8
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FB0FC
  c->r[12]=rotl(c->r[30],8)&0x000000FFu; // 800FB100
  c->r[11]=c->r[31]+c->r[11]; // 800FB104
  c->r[11]=c->r[12]+c->r[11]; // 800FB108
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB10C
  c->r[11]=c->r[11]&c->r[0]; // 800FB110
  c->r[8]=c->r[8]+c->r[11]; // 800FB114
  W32(c->r[4]+0x00000004u,c->r[8]); // 800FB118
  c->r[8]=c->r[11]|c->r[11]; // 800FB11C
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 800FB120
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB124
  c->r[31]=c->r[11]&c->r[0]; // 800FB128
  c->r[11]=rotl(c->r[30],8)&0xFFFFFF00u; // 800FB12C
  c->r[12]=rotl(c->r[31],8)&0x000000FFu; // 800FB130
  c->r[11]=c->r[30]+c->r[11]; // 800FB134
  c->r[11]=c->r[12]+c->r[11]; // 800FB138
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB13C
  c->r[11]=c->r[11]&c->r[0]; // 800FB140
  c->r[9]=c->r[9]+c->r[11]; // 800FB144
  W32(c->r[4]+0x00000008u,c->r[9]); // 800FB148
  c->r[9]=c->r[11]|c->r[11]; // 800FB14C
  c->r[12]=R8(c->r[3]+0x00000010u); // 800FB150
  c->r[11]=rotl(c->r[31],8)&0xFFFFFF00u; // 800FB154
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 800FB158
  c->r[11]=c->r[31]+c->r[11]; // 800FB15C
  c->r[11]=c->r[12]+c->r[11]; // 800FB160
  c->r[11]=rotl(c->r[11],31)&0x7FFFFFFFu; // 800FB164
  c->r[11]=c->r[11]&c->r[0]; // 800FB168
  c->r[10]=c->r[10]+c->r[11]; // 800FB16C
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 800FB170
  c->r[10]=c->r[11]|c->r[11]; // 800FB174
  c->r[3]=c->r[3]+c->r[5]; // 800FB178
  c->r[4]=c->r[4]+c->r[5]; // 800FB17C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FB180
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB0B4; } // 800FB184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB188
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB18C
  c->r[1]=c->r[1]+0x00000010u; // 800FB190
  return; // 800FB194
}

// fn_800FB198
void f_800FB198(Ctx* __restrict c) {
  c->r[0]=0u+0x00000010u; // 800FB198
  c->r[6]=R32(c->r[3]+0x00000000u); // 800FB19C
  c->r[7]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB1A0
  c->r[6]=0u+0x7F7F0000u; // 800FB1A4
  c->r[9]=c->r[6]+0x00007F7Fu; // 800FB1A8
  c->r[7]=c->r[7]&c->r[9]; // 800FB1AC
  c->r[6]=R32(c->r[3]+0x00000004u); // 800FB1B0
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB1B4
  c->r[6]=c->r[6]&c->r[9]; // 800FB1B8
  c->r[8]=R32(c->r[3]+0x00000008u); // 800FB1BC
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FB1C0
  c->r[12]=c->r[8]&c->r[9]; // 800FB1C4
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 800FB1C8
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800FB1CC
  c->r[11]=c->r[8]&c->r[9]; // 800FB1D0
  c->r[8]=c->r[3]+c->r[5]; // 800FB1D4
L_800FB1D8:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 800FB1D8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FB1DC
  c->r[10]=c->r[3]&c->r[9]; // 800FB1E0
  c->r[3]=c->r[7]+c->r[10]; // 800FB1E4
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FB1E8
  c->r[7]=c->r[10]|c->r[10]; // 800FB1EC
  c->r[3]=R32(c->r[8]+0x00000004u); // 800FB1F0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FB1F4
  c->r[10]=c->r[3]&c->r[9]; // 800FB1F8
  c->r[3]=c->r[6]+c->r[10]; // 800FB1FC
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FB200
  c->r[6]=c->r[10]|c->r[10]; // 800FB204
  c->r[3]=R32(c->r[8]+0x00000008u); // 800FB208
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FB20C
  c->r[10]=c->r[3]&c->r[9]; // 800FB210
  c->r[3]=c->r[12]+c->r[10]; // 800FB214
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FB218
  c->r[12]=c->r[10]|c->r[10]; // 800FB21C
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 800FB220
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FB224
  c->r[10]=c->r[3]&c->r[9]; // 800FB228
  c->r[3]=c->r[11]+c->r[10]; // 800FB22C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FB230
  c->r[11]=c->r[10]|c->r[10]; // 800FB234
  c->r[8]=c->r[8]+c->r[5]; // 800FB238
  c->r[4]=c->r[4]+c->r[5]; // 800FB23C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FB240
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB1D8; } // 800FB244
  return; // 800FB248
}

// fn_800FB24C
void f_800FB24C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000010u; // 800FB24C
  c->r[6]=0u+0x7F7F0000u; // 800FB250
  c->r[8]=c->r[6]+0x00007F7Fu; // 800FB254
L_800FB258:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 800FB258
  c->r[6]=R32(c->r[3]+0x00000001u); // 800FB25C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB260
  c->r[10]=c->r[6]&c->r[8]; // 800FB264
  c->r[6]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FB268
  c->r[7]=rotl(c->r[7],23)&0xFF000000u; // 800FB26C
  c->r[6]=c->r[10]+c->r[6]; // 800FB270
  c->r[6]=c->r[7]+c->r[6]; // 800FB274
  W32(c->r[4]+0x00000000u,c->r[6]); // 800FB278
  c->r[6]=R32(c->r[3]+0x00000005u); // 800FB27C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB280
  c->r[9]=c->r[6]&c->r[8]; // 800FB284
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800FB288
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FB28C
  c->r[6]=c->r[9]+c->r[6]; // 800FB290
  c->r[6]=c->r[7]+c->r[6]; // 800FB294
  W32(c->r[4]+0x00000004u,c->r[6]); // 800FB298
  c->r[6]=R32(c->r[3]+0x00000009u); // 800FB29C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB2A0
  c->r[10]=c->r[6]&c->r[8]; // 800FB2A4
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800FB2A8
  c->r[7]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FB2AC
  c->r[6]=c->r[10]+c->r[6]; // 800FB2B0
  c->r[6]=c->r[7]+c->r[6]; // 800FB2B4
  W32(c->r[4]+0x00000008u,c->r[6]); // 800FB2B8
  c->r[6]=R32(c->r[3]+0x0000000Du); // 800FB2BC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB2C0
  c->r[9]=c->r[6]&c->r[8]; // 800FB2C4
  c->r[6]=rotl(c->r[10],24)&0xFF000000u; // 800FB2C8
  c->r[7]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FB2CC
  c->r[6]=c->r[9]+c->r[6]; // 800FB2D0
  c->r[6]=c->r[7]+c->r[6]; // 800FB2D4
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800FB2D8
  c->r[3]=c->r[3]+c->r[5]; // 800FB2DC
  c->r[4]=c->r[4]+c->r[5]; // 800FB2E0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FB2E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB258; } // 800FB2E8
  return; // 800FB2EC
}

// fn_800FB2F0
void f_800FB2F0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800FB2F0
L_800FB2F4:;
  c->r[8]=R32(c->r[3]+0x00000001u); // 800FB2F4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FB2F8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800FB2FC
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800FB300
  c->r[0]=c->r[6]+c->r[0]; // 800FB304
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB308
  c->r[9]=R32(c->r[3]+0x00000005u); // 800FB30C
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800FB310
  c->r[0]=rotl(c->r[9],24)&0x00FFFFFFu; // 800FB314
  c->r[0]=c->r[6]+c->r[0]; // 800FB318
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB31C
  c->r[8]=R32(c->r[3]+0x00000009u); // 800FB320
  c->r[6]=rotl(c->r[9],24)&0xFF000000u; // 800FB324
  c->r[0]=rotl(c->r[8],24)&0x00FFFFFFu; // 800FB328
  c->r[0]=c->r[6]+c->r[0]; // 800FB32C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FB330
  c->r[6]=rotl(c->r[8],24)&0xFF000000u; // 800FB334
  c->r[0]=R32(c->r[3]+0x0000000Du); // 800FB338
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 800FB33C
  c->r[0]=c->r[6]+c->r[0]; // 800FB340
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FB344
  c->r[3]=c->r[3]+c->r[5]; // 800FB348
  c->r[4]=c->r[4]+c->r[5]; // 800FB34C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FB350
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB2F4; } // 800FB354
  return; // 800FB358
}

// fn_800FB35C
void f_800FB35C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800FB35C
  c->r[7]=0u+0x7F7F0000u; // 800FB360
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FB364
L_800FB368:;
  c->r[7]=R16(c->r[3]+0x00000000u); // 800FB368
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB36C
  c->r[9]=c->r[7]&0x00007F7Fu; cr0(c,c->r[9]); // 800FB370
  c->r[7]=R32(c->r[3]+0x00000002u); // 800FB374
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB378
  c->r[11]=c->r[7]&c->r[0]; // 800FB37C
  c->r[10]=rotl(c->r[9],16)&0xFFFF0000u; // 800FB380
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800FB384
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 800FB388
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FB38C
  c->r[8]=c->r[10]+c->r[8]; // 800FB390
  c->r[7]=c->r[9]+c->r[7]; // 800FB394
  c->r[7]=c->r[8]+c->r[7]; // 800FB398
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FB39C
  c->r[7]=R32(c->r[3]+0x00000006u); // 800FB3A0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB3A4
  c->r[12]=c->r[7]&c->r[0]; // 800FB3A8
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800FB3AC
  c->r[8]=rotl(c->r[12],16)&0x0000FFFFu; // 800FB3B0
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800FB3B4
  c->r[7]=rotl(c->r[12],24)&0x00FFFFFFu; // 800FB3B8
  c->r[8]=c->r[10]+c->r[8]; // 800FB3BC
  c->r[7]=c->r[9]+c->r[7]; // 800FB3C0
  c->r[7]=c->r[8]+c->r[7]; // 800FB3C4
  W32(c->r[4]+0x00000004u,c->r[7]); // 800FB3C8
  c->r[7]=R32(c->r[3]+0x0000000Au); // 800FB3CC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB3D0
  c->r[11]=c->r[7]&c->r[0]; // 800FB3D4
  c->r[10]=rotl(c->r[12],16)&0xFFFF0000u; // 800FB3D8
  c->r[8]=rotl(c->r[11],16)&0x0000FFFFu; // 800FB3DC
  c->r[9]=rotl(c->r[12],24)&0xFF000000u; // 800FB3E0
  c->r[7]=rotl(c->r[11],24)&0x00FFFFFFu; // 800FB3E4
  c->r[8]=c->r[10]+c->r[8]; // 800FB3E8
  c->r[7]=c->r[9]+c->r[7]; // 800FB3EC
  c->r[7]=c->r[8]+c->r[7]; // 800FB3F0
  W32(c->r[4]+0x00000008u,c->r[7]); // 800FB3F4
  c->r[7]=R32(c->r[3]+0x0000000Eu); // 800FB3F8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB3FC
  c->r[7]=c->r[7]&c->r[0]; // 800FB400
  c->r[10]=rotl(c->r[11],16)&0xFFFF0000u; // 800FB404
  c->r[8]=rotl(c->r[7],16)&0x0000FFFFu; // 800FB408
  c->r[9]=rotl(c->r[11],24)&0xFF000000u; // 800FB40C
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 800FB410
  c->r[8]=c->r[10]+c->r[8]; // 800FB414
  c->r[7]=c->r[9]+c->r[7]; // 800FB418
  c->r[7]=c->r[8]+c->r[7]; // 800FB41C
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800FB420
  c->r[3]=c->r[3]+c->r[5]; // 800FB424
  c->r[4]=c->r[4]+c->r[5]; // 800FB428
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FB42C
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB368; } // 800FB430
  return; // 800FB434
}

// fn_800FB438
void f_800FB438(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800FB438
L_800FB43C:;
  c->r[8]=R32(c->r[3]+0x00000002u); // 800FB43C
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FB440
  c->r[6]=rotl(c->r[0],16)&0xFFFF0000u; // 800FB444
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800FB448
  c->r[0]=c->r[6]+c->r[0]; // 800FB44C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB450
  c->r[9]=R32(c->r[3]+0x00000006u); // 800FB454
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800FB458
  c->r[0]=rotl(c->r[9],16)&0x0000FFFFu; // 800FB45C
  c->r[0]=c->r[6]+c->r[0]; // 800FB460
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB464
  c->r[8]=R32(c->r[3]+0x0000000Au); // 800FB468
  c->r[6]=rotl(c->r[9],16)&0xFFFF0000u; // 800FB46C
  c->r[0]=rotl(c->r[8],16)&0x0000FFFFu; // 800FB470
  c->r[0]=c->r[6]+c->r[0]; // 800FB474
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FB478
  c->r[6]=rotl(c->r[8],16)&0xFFFF0000u; // 800FB47C
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 800FB480
  c->r[0]=c->r[6]+c->r[0]; // 800FB484
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FB488
  c->r[3]=c->r[3]+c->r[5]; // 800FB48C
  c->r[4]=c->r[4]+c->r[5]; // 800FB490
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FB494
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB43C; } // 800FB498
  return; // 800FB49C
}

// fn_800FB4A0
void f_800FB4A0(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800FB4A0
  c->r[7]=0u+0x7F7F0000u; // 800FB4A4
  c->r[0]=c->r[7]+0x00007F7Fu; // 800FB4A8
L_800FB4AC:;
  c->r[7]=R32(c->r[3]+0xFFFFFFFFu); // 800FB4AC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB4B0
  c->r[9]=c->r[7]&c->r[0]; // 800FB4B4
  c->r[7]=R32(c->r[3]+0x00000003u); // 800FB4B8
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB4BC
  c->r[11]=c->r[7]&c->r[0]; // 800FB4C0
  c->r[10]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FB4C4
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800FB4C8
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 800FB4CC
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800FB4D0
  c->r[8]=c->r[10]+c->r[8]; // 800FB4D4
  c->r[7]=c->r[9]+c->r[7]; // 800FB4D8
  c->r[7]=c->r[8]+c->r[7]; // 800FB4DC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FB4E0
  c->r[7]=R32(c->r[3]+0x00000007u); // 800FB4E4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB4E8
  c->r[12]=c->r[7]&c->r[0]; // 800FB4EC
  c->r[10]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FB4F0
  c->r[8]=rotl(c->r[12],8)&0x000000FFu; // 800FB4F4
  c->r[9]=rotl(c->r[11],16)&0xFFFF0000u; // 800FB4F8
  c->r[7]=rotl(c->r[12],16)&0x0000FFFFu; // 800FB4FC
  c->r[8]=c->r[10]+c->r[8]; // 800FB500
  c->r[7]=c->r[9]+c->r[7]; // 800FB504
  c->r[7]=c->r[8]+c->r[7]; // 800FB508
  W32(c->r[4]+0x00000004u,c->r[7]); // 800FB50C
  c->r[7]=R32(c->r[3]+0x0000000Bu); // 800FB510
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB514
  c->r[11]=c->r[7]&c->r[0]; // 800FB518
  c->r[10]=rotl(c->r[12],8)&0xFFFFFF00u; // 800FB51C
  c->r[8]=rotl(c->r[11],8)&0x000000FFu; // 800FB520
  c->r[9]=rotl(c->r[12],16)&0xFFFF0000u; // 800FB524
  c->r[7]=rotl(c->r[11],16)&0x0000FFFFu; // 800FB528
  c->r[8]=c->r[10]+c->r[8]; // 800FB52C
  c->r[7]=c->r[9]+c->r[7]; // 800FB530
  c->r[7]=c->r[8]+c->r[7]; // 800FB534
  W32(c->r[4]+0x00000008u,c->r[7]); // 800FB538
  c->r[7]=R16(c->r[3]+0x0000000Fu); // 800FB53C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB540
  c->r[10]=c->r[7]&0x00007F7Fu; cr0(c,c->r[10]); // 800FB544
  c->r[9]=rotl(c->r[11],8)&0xFFFFFF00u; // 800FB548
  c->r[8]=rotl(c->r[10],24)&0x00FFFFFFu; // 800FB54C
  c->r[7]=rotl(c->r[11],16)&0xFFFF0000u; // 800FB550
  c->r[8]=c->r[9]+c->r[8]; // 800FB554
  c->r[7]=c->r[7]+c->r[10]; // 800FB558
  c->r[7]=c->r[8]+c->r[7]; // 800FB55C
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 800FB560
  c->r[3]=c->r[3]+c->r[5]; // 800FB564
  c->r[4]=c->r[4]+c->r[5]; // 800FB568
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FB56C
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB4AC; } // 800FB570
  return; // 800FB574
}

// fn_800FB578
void f_800FB578(Ctx* __restrict c) {
  c->r[7]=0u+0x00000010u; // 800FB578
L_800FB57C:;
  c->r[8]=R32(c->r[3]+0x00000003u); // 800FB57C
  c->r[0]=R32(c->r[3]+0xFFFFFFFFu); // 800FB580
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FB584
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800FB588
  c->r[0]=c->r[6]+c->r[0]; // 800FB58C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB590
  c->r[9]=R32(c->r[3]+0x00000007u); // 800FB594
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800FB598
  c->r[0]=rotl(c->r[9],8)&0x000000FFu; // 800FB59C
  c->r[0]=c->r[6]+c->r[0]; // 800FB5A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB5A4
  c->r[8]=R32(c->r[3]+0x0000000Bu); // 800FB5A8
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FB5AC
  c->r[0]=rotl(c->r[8],8)&0x000000FFu; // 800FB5B0
  c->r[0]=c->r[6]+c->r[0]; // 800FB5B4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FB5B8
  c->r[6]=rotl(c->r[8],8)&0xFFFFFF00u; // 800FB5BC
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800FB5C0
  c->r[0]=c->r[6]+c->r[0]; // 800FB5C4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FB5C8
  c->r[3]=c->r[3]+c->r[5]; // 800FB5CC
  c->r[4]=c->r[4]+c->r[5]; // 800FB5D0
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800FB5D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB57C; } // 800FB5D8
  return; // 800FB5DC
}

// fn_800FB5E0
void f_800FB5E0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000010u; // 800FB5E0
  c->r[6]=0u+0x7F7F0000u; // 800FB5E4
  c->r[8]=c->r[6]+0x00007F7Fu; // 800FB5E8
L_800FB5EC:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800FB5EC
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB5F0
  c->r[10]=c->r[6]&c->r[8]; // 800FB5F4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800FB5F8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB5FC
  c->r[9]=c->r[6]&c->r[8]; // 800FB600
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FB604
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800FB608
  c->r[6]=c->r[10]+c->r[6]; // 800FB60C
  c->r[6]=c->r[7]+c->r[6]; // 800FB610
  W32(c->r[4]+0x00000000u,c->r[6]); // 800FB614
  c->r[6]=R32(c->r[3]+0x00000008u); // 800FB618
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB61C
  c->r[10]=c->r[6]&c->r[8]; // 800FB620
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FB624
  c->r[7]=rotl(c->r[10],8)&0x000000FFu; // 800FB628
  c->r[6]=c->r[9]+c->r[6]; // 800FB62C
  c->r[6]=c->r[7]+c->r[6]; // 800FB630
  W32(c->r[4]+0x00000004u,c->r[6]); // 800FB634
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FB638
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800FB63C
  c->r[9]=c->r[6]&c->r[8]; // 800FB640
  c->r[6]=rotl(c->r[10],8)&0xFFFFFF00u; // 800FB644
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 800FB648
  c->r[6]=c->r[10]+c->r[6]; // 800FB64C
  c->r[6]=c->r[7]+c->r[6]; // 800FB650
  W32(c->r[4]+0x00000008u,c->r[6]); // 800FB654
  c->r[7]=R8(c->r[3]+0x00000010u); // 800FB658
  c->r[6]=rotl(c->r[9],8)&0xFFFFFF00u; // 800FB65C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800FB660
  c->r[6]=c->r[9]+c->r[6]; // 800FB664
  c->r[6]=c->r[7]+c->r[6]; // 800FB668
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800FB66C
  c->r[3]=c->r[3]+c->r[5]; // 800FB670
  c->r[4]=c->r[4]+c->r[5]; // 800FB674
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800FB678
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB5EC; } // 800FB67C
  return; // 800FB680
}

// fn_800FB684
void f_800FB684(Ctx* __restrict c) {
  c->r[6]=0u+0x00000010u; // 800FB684
L_800FB688:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FB688
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB68C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FB690
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB694
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FB698
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FB69C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FB6A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FB6A4
  c->r[3]=c->r[3]+c->r[5]; // 800FB6A8
  c->r[4]=c->r[4]+c->r[5]; // 800FB6AC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FB6B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800FB688; } // 800FB6B4
  return; // 800FB6B8
}

// fn_800FB6BC
void f_800FB6BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB6BC
  c->r[0]=c->lr; // 800FB6C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB6C4
  c->r[11]=c->r[1]+0x00000020u; // 800FB6C8
  c->lr=0x800FB6D0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FB6CC
  c->r[6]=c->r[3]|c->r[3]; // 800FB6D0
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FB6D4
  c->r[0]=c->r[7]+0x00000020u; // 800FB6D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FB6DC
  c->r[0]=0u+0x00000008u; // 800FB6E0
  c->ctr=c->r[0]; // 800FB6E4
L_800FB6E8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000040u); // 800FB6E8
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 800FB6EC
  c->r[9]=c->r[7]+c->r[0]; // 800FB6F0
  c->r[10]=c->r[7]-c->r[0]; // 800FB6F4
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000060u); // 800FB6F8
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000020u); // 800FB6FC
  c->r[0]=sraw(c,c->r[8],1); // 800FB700
  c->r[11]=c->r[0]-c->r[7]; // 800FB704
  c->r[0]=sraw(c,c->r[7],1); // 800FB708
  c->r[12]=c->r[8]+c->r[0]; // 800FB70C
  c->r[0]=c->r[9]+c->r[12]; // 800FB710
  c->r[7]=c->r[10]+c->r[11]; // 800FB714
  c->r[8]=c->r[10]-c->r[11]; // 800FB718
  c->r[9]=c->r[9]-c->r[12]; // 800FB71C
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000050u); // 800FB720
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000030u); // 800FB724
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000070u); // 800FB728
  c->r[11]=sraw(c,c->r[12],1); // 800FB72C
  c->r[10]=c->r[29]-c->r[30]; // 800FB730
  c->r[10]=c->r[10]-c->r[12]; // 800FB734
  c->r[28]=c->r[10]-c->r[11]; // 800FB738
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000010u); // 800FB73C
  c->r[11]=sraw(c,c->r[30],1); // 800FB740
  c->r[10]=c->r[31]+c->r[12]; // 800FB744
  c->r[10]=c->r[10]-c->r[30]; // 800FB748
  c->r[27]=c->r[10]-c->r[11]; // 800FB74C
  c->r[10]=sraw(c,c->r[29],1); // 800FB750
  c->r[11]=c->r[12]-c->r[31]; // 800FB754
  c->r[10]=c->r[10]+c->r[29]; // 800FB758
  c->r[12]=c->r[11]+c->r[10]; // 800FB75C
  c->r[10]=sraw(c,c->r[31],1); // 800FB760
  c->r[11]=c->r[31]+c->r[30]; // 800FB764
  c->r[10]=c->r[10]+c->r[29]; // 800FB768
  c->r[11]=c->r[11]+c->r[10]; // 800FB76C
  c->r[10]=sraw(c,c->r[11],2); // 800FB770
  c->r[29]=c->r[28]+c->r[10]; // 800FB774
  c->r[10]=sraw(c,c->r[28],2); // 800FB778
  c->r[11]=c->r[11]-c->r[10]; // 800FB77C
  c->r[10]=sraw(c,c->r[12],2); // 800FB780
  c->r[28]=c->r[27]+c->r[10]; // 800FB784
  c->r[10]=sraw(c,c->r[27],2); // 800FB788
  c->r[12]=c->r[10]-c->r[12]; // 800FB78C
  c->r[10]=c->r[0]+c->r[11]; // 800FB790
  W16(c->r[6]+0x00000000u,c->r[10]); // 800FB794
  c->r[10]=c->r[7]+c->r[12]; // 800FB798
  W16(c->r[6]+0x00000010u,c->r[10]); // 800FB79C
  c->r[10]=c->r[8]+c->r[28]; // 800FB7A0
  W16(c->r[6]+0x00000020u,c->r[10]); // 800FB7A4
  c->r[10]=c->r[9]+c->r[29]; // 800FB7A8
  W16(c->r[6]+0x00000030u,c->r[10]); // 800FB7AC
  c->r[9]=c->r[9]-c->r[29]; // 800FB7B0
  W16(c->r[6]+0x00000040u,c->r[9]); // 800FB7B4
  c->r[8]=c->r[8]-c->r[28]; // 800FB7B8
  W16(c->r[6]+0x00000050u,c->r[8]); // 800FB7BC
  c->r[7]=c->r[7]-c->r[12]; // 800FB7C0
  W16(c->r[6]+0x00000060u,c->r[7]); // 800FB7C4
  c->r[0]=c->r[0]-c->r[11]; // 800FB7C8
  W16(c->r[6]+0x00000070u,c->r[0]); // 800FB7CC
  c->r[6]=c->r[6]+0x00000002u; // 800FB7D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FB6E8; } // 800FB7D4
  c->r[31]=0u+0x00000000u; // 800FB7D8
  c->r[0]=0u+0x00000008u; // 800FB7DC
  c->ctr=c->r[0]; // 800FB7E0
L_800FB7E4:;
  c->r[11]=c->r[3]+c->r[31]; // 800FB7E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000008u); // 800FB7E8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[31]); // 800FB7EC
  c->r[8]=c->r[6]+c->r[0]; // 800FB7F0
  c->r[9]=c->r[6]-c->r[0]; // 800FB7F4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x0000000Cu); // 800FB7F8
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000004u); // 800FB7FC
  c->r[0]=sraw(c,c->r[7],1); // 800FB800
  c->r[10]=c->r[0]-c->r[6]; // 800FB804
  c->r[0]=sraw(c,c->r[6],1); // 800FB808
  c->r[12]=c->r[7]+c->r[0]; // 800FB80C
  c->r[0]=c->r[8]+c->r[12]; // 800FB810
  c->r[6]=c->r[9]+c->r[10]; // 800FB814
  c->r[7]=c->r[9]-c->r[10]; // 800FB818
  c->r[8]=c->r[8]-c->r[12]; // 800FB81C
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x0000000Au); // 800FB820
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000006u); // 800FB824
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x0000000Eu); // 800FB828
  c->r[10]=sraw(c,c->r[12],1); // 800FB82C
  c->r[9]=c->r[30]-c->r[29]; // 800FB830
  c->r[9]=c->r[9]-c->r[12]; // 800FB834
  c->r[27]=c->r[9]-c->r[10]; // 800FB838
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000002u); // 800FB83C
  c->r[10]=sraw(c,c->r[29],1); // 800FB840
  c->r[9]=c->r[11]+c->r[12]; // 800FB844
  c->r[9]=c->r[9]-c->r[29]; // 800FB848
  c->r[28]=c->r[9]-c->r[10]; // 800FB84C
  c->r[9]=sraw(c,c->r[30],1); // 800FB850
  c->r[10]=c->r[12]-c->r[11]; // 800FB854
  c->r[9]=c->r[9]+c->r[30]; // 800FB858
  c->r[26]=c->r[10]+c->r[9]; // 800FB85C
  c->r[9]=sraw(c,c->r[11],1); // 800FB860
  c->r[10]=c->r[11]+c->r[29]; // 800FB864
  c->r[9]=c->r[9]+c->r[30]; // 800FB868
  c->r[11]=c->r[10]+c->r[9]; // 800FB86C
  c->r[9]=sraw(c,c->r[11],2); // 800FB870
  c->r[9]=c->r[27]+c->r[9]; // 800FB874
  c->r[10]=sraw(c,c->r[27],2); // 800FB878
  c->r[10]=c->r[11]-c->r[10]; // 800FB87C
  c->r[11]=sraw(c,c->r[26],2); // 800FB880
  c->r[11]=c->r[28]+c->r[11]; // 800FB884
  c->r[12]=sraw(c,c->r[28],2); // 800FB888
  c->r[12]=c->r[12]-c->r[26]; // 800FB88C
  c->r[29]=c->r[0]+c->r[10]; // 800FB890
  c->r[29]=sraw(c,c->r[29],6); // 800FB894
  c->r[30]=R8(c->r[4]+0x00000000u); // 800FB898
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FB89C
  if (!crb(c,0)) { goto L_800FB8AC; } // 800FB8A0
  c->r[30]=0u+0x00000000u; // 800FB8A4
  goto L_800FB8BC; // 800FB8A8
L_800FB8AC:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FB8AC
  c->r[30]=0u+0x000000FFu; // 800FB8B0
  if (crb(c,1)) { goto L_800FB8BC; } // 800FB8B4
  c->r[30]=c->r[29]|c->r[29]; // 800FB8B8
L_800FB8BC:;
  W8(c->r[4]+0x00000000u,c->r[30]); // 800FB8BC
  c->r[29]=c->r[6]+c->r[12]; // 800FB8C0
  c->r[29]=sraw(c,c->r[29],6); // 800FB8C4
  c->r[30]=R8(c->r[4]+0x00000001u); // 800FB8C8
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FB8CC
  if (!crb(c,0)) { goto L_800FB8DC; } // 800FB8D0
  c->r[30]=0u+0x00000000u; // 800FB8D4
  goto L_800FB8EC; // 800FB8D8
L_800FB8DC:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FB8DC
  c->r[30]=0u+0x000000FFu; // 800FB8E0
  if (crb(c,1)) { goto L_800FB8EC; } // 800FB8E4
  c->r[30]=c->r[29]|c->r[29]; // 800FB8E8
L_800FB8EC:;
  W8(c->r[4]+0x00000001u,c->r[30]); // 800FB8EC
  c->r[29]=c->r[7]+c->r[11]; // 800FB8F0
  c->r[29]=sraw(c,c->r[29],6); // 800FB8F4
  c->r[30]=R8(c->r[4]+0x00000002u); // 800FB8F8
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FB8FC
  if (!crb(c,0)) { goto L_800FB90C; } // 800FB900
  c->r[30]=0u+0x00000000u; // 800FB904
  goto L_800FB91C; // 800FB908
L_800FB90C:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FB90C
  c->r[30]=0u+0x000000FFu; // 800FB910
  if (crb(c,1)) { goto L_800FB91C; } // 800FB914
  c->r[30]=c->r[29]|c->r[29]; // 800FB918
L_800FB91C:;
  W8(c->r[4]+0x00000002u,c->r[30]); // 800FB91C
  c->r[29]=c->r[8]+c->r[9]; // 800FB920
  c->r[29]=sraw(c,c->r[29],6); // 800FB924
  c->r[30]=R8(c->r[4]+0x00000003u); // 800FB928
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FB92C
  if (!crb(c,0)) { goto L_800FB93C; } // 800FB930
  c->r[30]=0u+0x00000000u; // 800FB934
  goto L_800FB94C; // 800FB938
L_800FB93C:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FB93C
  c->r[30]=0u+0x000000FFu; // 800FB940
  if (crb(c,1)) { goto L_800FB94C; } // 800FB944
  c->r[30]=c->r[29]|c->r[29]; // 800FB948
L_800FB94C:;
  W8(c->r[4]+0x00000003u,c->r[30]); // 800FB94C
  c->r[8]=c->r[8]-c->r[9]; // 800FB950
  c->r[8]=sraw(c,c->r[8],6); // 800FB954
  c->r[9]=R8(c->r[4]+0x00000004u); // 800FB958
  c->r[9]=c->r[9]+c->r[8]; cr0(c,c->r[9]); // 800FB95C
  if (!crb(c,0)) { goto L_800FB96C; } // 800FB960
  c->r[8]=0u+0x00000000u; // 800FB964
  goto L_800FB97C; // 800FB968
L_800FB96C:;
  cmps(c,0,(int32_t)c->r[9],255); // 800FB96C
  c->r[8]=0u+0x000000FFu; // 800FB970
  if (crb(c,1)) { goto L_800FB97C; } // 800FB974
  c->r[8]=c->r[9]|c->r[9]; // 800FB978
L_800FB97C:;
  W8(c->r[4]+0x00000004u,c->r[8]); // 800FB97C
  c->r[7]=c->r[7]-c->r[11]; // 800FB980
  c->r[7]=sraw(c,c->r[7],6); // 800FB984
  c->r[8]=R8(c->r[4]+0x00000005u); // 800FB988
  c->r[8]=c->r[8]+c->r[7]; cr0(c,c->r[8]); // 800FB98C
  if (!crb(c,0)) { goto L_800FB99C; } // 800FB990
  c->r[7]=0u+0x00000000u; // 800FB994
  goto L_800FB9AC; // 800FB998
L_800FB99C:;
  cmps(c,0,(int32_t)c->r[8],255); // 800FB99C
  c->r[7]=0u+0x000000FFu; // 800FB9A0
  if (crb(c,1)) { goto L_800FB9AC; } // 800FB9A4
  c->r[7]=c->r[8]|c->r[8]; // 800FB9A8
L_800FB9AC:;
  W8(c->r[4]+0x00000005u,c->r[7]); // 800FB9AC
  c->r[6]=c->r[6]-c->r[12]; // 800FB9B0
  c->r[6]=sraw(c,c->r[6],6); // 800FB9B4
  c->r[7]=R8(c->r[4]+0x00000006u); // 800FB9B8
  c->r[7]=c->r[7]+c->r[6]; cr0(c,c->r[7]); // 800FB9BC
  if (!crb(c,0)) { goto L_800FB9CC; } // 800FB9C0
  c->r[6]=0u+0x00000000u; // 800FB9C4
  goto L_800FB9DC; // 800FB9C8
L_800FB9CC:;
  cmps(c,0,(int32_t)c->r[7],255); // 800FB9CC
  c->r[6]=0u+0x000000FFu; // 800FB9D0
  if (crb(c,1)) { goto L_800FB9DC; } // 800FB9D4
  c->r[6]=c->r[7]|c->r[7]; // 800FB9D8
L_800FB9DC:;
  W8(c->r[4]+0x00000006u,c->r[6]); // 800FB9DC
  c->r[0]=c->r[0]-c->r[10]; // 800FB9E0
  c->r[0]=sraw(c,c->r[0],6); // 800FB9E4
  c->r[6]=R8(c->r[4]+0x00000007u); // 800FB9E8
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FB9EC
  if (!crb(c,0)) { goto L_800FB9FC; } // 800FB9F0
  c->r[0]=0u+0x00000000u; // 800FB9F4
  goto L_800FBA0C; // 800FB9F8
L_800FB9FC:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FB9FC
  c->r[0]=0u+0x000000FFu; // 800FBA00
  if (crb(c,1)) { goto L_800FBA0C; } // 800FBA04
  c->r[0]=c->r[6]|c->r[6]; // 800FBA08
L_800FBA0C:;
  W8(c->r[4]+0x00000007u,c->r[0]); // 800FBA0C
  c->r[4]=c->r[4]+c->r[5]; // 800FBA10
  c->r[31]=c->r[31]+0x00000010u; // 800FBA14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FB7E4; } // 800FBA18
  c->r[11]=c->r[1]+0x00000020u; // 800FBA1C
  c->lr=0x800FBA24u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FBA20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBA24
  c->lr=c->r[0]; // 800FBA28
  c->r[1]=c->r[1]+0x00000020u; // 800FBA2C
  return; // 800FBA30
}

// fn_800FBA34
void f_800FBA34(Ctx* __restrict c) {
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FBA34
  c->r[0]=c->r[3]+0x00000020u; // 800FBA38
  c->r[0]=sraw(c,c->r[0],6); // 800FBA3C
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800FBA40
  c->r[0]=0u+0x00000008u; // 800FBA44
  c->ctr=c->r[0]; // 800FBA48
L_800FBA4C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800FBA4C
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBA50
  if (!crb(c,0)) { goto L_800FBA60; } // 800FBA54
  c->r[0]=0u+0x00000000u; // 800FBA58
  goto L_800FBA70; // 800FBA5C
L_800FBA60:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBA60
  c->r[0]=0u+0x000000FFu; // 800FBA64
  if (crb(c,1)) { goto L_800FBA70; } // 800FBA68
  c->r[0]=c->r[3]|c->r[3]; // 800FBA6C
L_800FBA70:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FBA70
  c->r[0]=R8(c->r[4]+0x00000001u); // 800FBA74
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBA78
  if (!crb(c,0)) { goto L_800FBA88; } // 800FBA7C
  c->r[0]=0u+0x00000000u; // 800FBA80
  goto L_800FBA98; // 800FBA84
L_800FBA88:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBA88
  c->r[0]=0u+0x000000FFu; // 800FBA8C
  if (crb(c,1)) { goto L_800FBA98; } // 800FBA90
  c->r[0]=c->r[3]|c->r[3]; // 800FBA94
L_800FBA98:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FBA98
  c->r[0]=R8(c->r[4]+0x00000002u); // 800FBA9C
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBAA0
  if (!crb(c,0)) { goto L_800FBAB0; } // 800FBAA4
  c->r[0]=0u+0x00000000u; // 800FBAA8
  goto L_800FBAC0; // 800FBAAC
L_800FBAB0:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBAB0
  c->r[0]=0u+0x000000FFu; // 800FBAB4
  if (crb(c,1)) { goto L_800FBAC0; } // 800FBAB8
  c->r[0]=c->r[3]|c->r[3]; // 800FBABC
L_800FBAC0:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FBAC0
  c->r[0]=R8(c->r[4]+0x00000003u); // 800FBAC4
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBAC8
  if (!crb(c,0)) { goto L_800FBAD8; } // 800FBACC
  c->r[0]=0u+0x00000000u; // 800FBAD0
  goto L_800FBAE8; // 800FBAD4
L_800FBAD8:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBAD8
  c->r[0]=0u+0x000000FFu; // 800FBADC
  if (crb(c,1)) { goto L_800FBAE8; } // 800FBAE0
  c->r[0]=c->r[3]|c->r[3]; // 800FBAE4
L_800FBAE8:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FBAE8
  c->r[0]=R8(c->r[4]+0x00000004u); // 800FBAEC
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBAF0
  if (!crb(c,0)) { goto L_800FBB00; } // 800FBAF4
  c->r[0]=0u+0x00000000u; // 800FBAF8
  goto L_800FBB10; // 800FBAFC
L_800FBB00:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBB00
  c->r[0]=0u+0x000000FFu; // 800FBB04
  if (crb(c,1)) { goto L_800FBB10; } // 800FBB08
  c->r[0]=c->r[3]|c->r[3]; // 800FBB0C
L_800FBB10:;
  W8(c->r[4]+0x00000004u,c->r[0]); // 800FBB10
  c->r[0]=R8(c->r[4]+0x00000005u); // 800FBB14
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBB18
  if (!crb(c,0)) { goto L_800FBB28; } // 800FBB1C
  c->r[0]=0u+0x00000000u; // 800FBB20
  goto L_800FBB38; // 800FBB24
L_800FBB28:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBB28
  c->r[0]=0u+0x000000FFu; // 800FBB2C
  if (crb(c,1)) { goto L_800FBB38; } // 800FBB30
  c->r[0]=c->r[3]|c->r[3]; // 800FBB34
L_800FBB38:;
  W8(c->r[4]+0x00000005u,c->r[0]); // 800FBB38
  c->r[0]=R8(c->r[4]+0x00000006u); // 800FBB3C
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBB40
  if (!crb(c,0)) { goto L_800FBB50; } // 800FBB44
  c->r[0]=0u+0x00000000u; // 800FBB48
  goto L_800FBB60; // 800FBB4C
L_800FBB50:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBB50
  c->r[0]=0u+0x000000FFu; // 800FBB54
  if (crb(c,1)) { goto L_800FBB60; } // 800FBB58
  c->r[0]=c->r[3]|c->r[3]; // 800FBB5C
L_800FBB60:;
  W8(c->r[4]+0x00000006u,c->r[0]); // 800FBB60
  c->r[0]=R8(c->r[4]+0x00000007u); // 800FBB64
  c->r[3]=c->r[0]+c->r[6]; cr0(c,c->r[3]); // 800FBB68
  if (!crb(c,0)) { goto L_800FBB78; } // 800FBB6C
  c->r[0]=0u+0x00000000u; // 800FBB70
  goto L_800FBB88; // 800FBB74
L_800FBB78:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FBB78
  c->r[0]=0u+0x000000FFu; // 800FBB7C
  if (crb(c,1)) { goto L_800FBB88; } // 800FBB80
  c->r[0]=c->r[3]|c->r[3]; // 800FBB84
L_800FBB88:;
  W8(c->r[4]+0x00000007u,c->r[0]); // 800FBB88
  c->r[4]=c->r[4]+c->r[5]; // 800FBB8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FBA4C; } // 800FBB90
  return; // 800FBB94
}

// fn_800FBB98
void f_800FBB98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB98
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FBB9C
  c->r[0]=c->r[6]+0x00000020u; // 800FBBA0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FBBA4
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800FBBA8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 800FBBAC
  c->r[0]=sraw(c,c->r[6],1); // 800FBBB0
  c->r[8]=c->r[6]+c->r[0]; // 800FBBB4
  c->r[9]=sraw(c,c->r[8],2); // 800FBBB8
  c->r[0]=0u-c->r[6]; // 800FBBBC
  c->r[0]=sraw(c,c->r[0],2); // 800FBBC0
  c->r[10]=c->r[6]+c->r[0]; // 800FBBC4
  c->r[0]=sraw(c,c->r[6],2); // 800FBBC8
  c->r[6]=c->r[6]+c->r[0]; // 800FBBCC
  c->r[0]=c->r[7]+c->r[8]; // 800FBBD0
  W16(c->r[1]+0x00000008u,c->r[0]); // 800FBBD4
  c->r[0]=c->r[7]+c->r[6]; // 800FBBD8
  W16(c->r[1]+0x0000000Au,c->r[0]); // 800FBBDC
  c->r[0]=c->r[7]+c->r[10]; // 800FBBE0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800FBBE4
  c->r[0]=c->r[7]+c->r[9]; // 800FBBE8
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800FBBEC
  c->r[0]=c->r[7]-c->r[9]; // 800FBBF0
  W16(c->r[1]+0x00000010u,c->r[0]); // 800FBBF4
  c->r[0]=c->r[7]-c->r[10]; // 800FBBF8
  W16(c->r[1]+0x00000012u,c->r[0]); // 800FBBFC
  c->r[0]=c->r[7]-c->r[6]; // 800FBC00
  W16(c->r[1]+0x00000014u,c->r[0]); // 800FBC04
  c->r[0]=c->r[7]-c->r[8]; // 800FBC08
  W16(c->r[1]+0x00000016u,c->r[0]); // 800FBC0C
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800FBC10
  c->r[0]=sraw(c,c->r[8],1); // 800FBC14
  c->r[0]=c->r[8]+c->r[0]; // 800FBC18
  c->r[3]=sraw(c,c->r[0],2); // 800FBC1C
  c->r[6]=0u-c->r[8]; // 800FBC20
  c->r[6]=sraw(c,c->r[6],2); // 800FBC24
  c->r[6]=c->r[8]+c->r[6]; // 800FBC28
  c->r[7]=sraw(c,c->r[8],2); // 800FBC2C
  c->r[7]=c->r[8]+c->r[7]; // 800FBC30
  c->r[10]=c->r[1]+0x00000008u; // 800FBC34
  c->r[8]=0u+0x00000008u; // 800FBC38
  c->ctr=c->r[8]; // 800FBC3C
L_800FBC40:;
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x00000000u); // 800FBC40
  c->r[9]=c->r[8]+c->r[0]; // 800FBC44
  c->r[9]=sraw(c,c->r[9],6); // 800FBC48
  c->r[11]=R8(c->r[4]+0x00000000u); // 800FBC4C
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBC50
  if (!crb(c,0)) { goto L_800FBC60; } // 800FBC54
  c->r[9]=0u+0x00000000u; // 800FBC58
  goto L_800FBC70; // 800FBC5C
L_800FBC60:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBC60
  c->r[9]=0u+0x000000FFu; // 800FBC64
  if (crb(c,1)) { goto L_800FBC70; } // 800FBC68
  c->r[9]=c->r[11]|c->r[11]; // 800FBC6C
L_800FBC70:;
  W8(c->r[4]+0x00000000u,c->r[9]); // 800FBC70
  c->r[9]=c->r[8]+c->r[7]; // 800FBC74
  c->r[9]=sraw(c,c->r[9],6); // 800FBC78
  c->r[11]=R8(c->r[4]+0x00000001u); // 800FBC7C
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBC80
  if (!crb(c,0)) { goto L_800FBC90; } // 800FBC84
  c->r[9]=0u+0x00000000u; // 800FBC88
  goto L_800FBCA0; // 800FBC8C
L_800FBC90:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBC90
  c->r[9]=0u+0x000000FFu; // 800FBC94
  if (crb(c,1)) { goto L_800FBCA0; } // 800FBC98
  c->r[9]=c->r[11]|c->r[11]; // 800FBC9C
L_800FBCA0:;
  W8(c->r[4]+0x00000001u,c->r[9]); // 800FBCA0
  c->r[9]=c->r[8]+c->r[6]; // 800FBCA4
  c->r[9]=sraw(c,c->r[9],6); // 800FBCA8
  c->r[11]=R8(c->r[4]+0x00000002u); // 800FBCAC
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBCB0
  if (!crb(c,0)) { goto L_800FBCC0; } // 800FBCB4
  c->r[9]=0u+0x00000000u; // 800FBCB8
  goto L_800FBCD0; // 800FBCBC
L_800FBCC0:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBCC0
  c->r[9]=0u+0x000000FFu; // 800FBCC4
  if (crb(c,1)) { goto L_800FBCD0; } // 800FBCC8
  c->r[9]=c->r[11]|c->r[11]; // 800FBCCC
L_800FBCD0:;
  W8(c->r[4]+0x00000002u,c->r[9]); // 800FBCD0
  c->r[9]=c->r[8]+c->r[3]; // 800FBCD4
  c->r[9]=sraw(c,c->r[9],6); // 800FBCD8
  c->r[11]=R8(c->r[4]+0x00000003u); // 800FBCDC
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBCE0
  if (!crb(c,0)) { goto L_800FBCF0; } // 800FBCE4
  c->r[9]=0u+0x00000000u; // 800FBCE8
  goto L_800FBD00; // 800FBCEC
L_800FBCF0:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBCF0
  c->r[9]=0u+0x000000FFu; // 800FBCF4
  if (crb(c,1)) { goto L_800FBD00; } // 800FBCF8
  c->r[9]=c->r[11]|c->r[11]; // 800FBCFC
L_800FBD00:;
  W8(c->r[4]+0x00000003u,c->r[9]); // 800FBD00
  c->r[9]=c->r[8]-c->r[3]; // 800FBD04
  c->r[9]=sraw(c,c->r[9],6); // 800FBD08
  c->r[11]=R8(c->r[4]+0x00000004u); // 800FBD0C
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBD10
  if (!crb(c,0)) { goto L_800FBD20; } // 800FBD14
  c->r[9]=0u+0x00000000u; // 800FBD18
  goto L_800FBD30; // 800FBD1C
L_800FBD20:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBD20
  c->r[9]=0u+0x000000FFu; // 800FBD24
  if (crb(c,1)) { goto L_800FBD30; } // 800FBD28
  c->r[9]=c->r[11]|c->r[11]; // 800FBD2C
L_800FBD30:;
  W8(c->r[4]+0x00000004u,c->r[9]); // 800FBD30
  c->r[9]=c->r[8]-c->r[6]; // 800FBD34
  c->r[9]=sraw(c,c->r[9],6); // 800FBD38
  c->r[11]=R8(c->r[4]+0x00000005u); // 800FBD3C
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBD40
  if (!crb(c,0)) { goto L_800FBD50; } // 800FBD44
  c->r[9]=0u+0x00000000u; // 800FBD48
  goto L_800FBD60; // 800FBD4C
L_800FBD50:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBD50
  c->r[9]=0u+0x000000FFu; // 800FBD54
  if (crb(c,1)) { goto L_800FBD60; } // 800FBD58
  c->r[9]=c->r[11]|c->r[11]; // 800FBD5C
L_800FBD60:;
  W8(c->r[4]+0x00000005u,c->r[9]); // 800FBD60
  c->r[9]=c->r[8]-c->r[7]; // 800FBD64
  c->r[9]=sraw(c,c->r[9],6); // 800FBD68
  c->r[11]=R8(c->r[4]+0x00000006u); // 800FBD6C
  c->r[11]=c->r[11]+c->r[9]; cr0(c,c->r[11]); // 800FBD70
  if (!crb(c,0)) { goto L_800FBD80; } // 800FBD74
  c->r[9]=0u+0x00000000u; // 800FBD78
  goto L_800FBD90; // 800FBD7C
L_800FBD80:;
  cmps(c,0,(int32_t)c->r[11],255); // 800FBD80
  c->r[9]=0u+0x000000FFu; // 800FBD84
  if (crb(c,1)) { goto L_800FBD90; } // 800FBD88
  c->r[9]=c->r[11]|c->r[11]; // 800FBD8C
L_800FBD90:;
  W8(c->r[4]+0x00000006u,c->r[9]); // 800FBD90
  c->r[8]=c->r[8]-c->r[0]; // 800FBD94
  c->r[8]=sraw(c,c->r[8],6); // 800FBD98
  c->r[9]=R8(c->r[4]+0x00000007u); // 800FBD9C
  c->r[9]=c->r[9]+c->r[8]; cr0(c,c->r[9]); // 800FBDA0
  if (!crb(c,0)) { goto L_800FBDB0; } // 800FBDA4
  c->r[8]=0u+0x00000000u; // 800FBDA8
  goto L_800FBDC0; // 800FBDAC
L_800FBDB0:;
  cmps(c,0,(int32_t)c->r[9],255); // 800FBDB0
  c->r[8]=0u+0x000000FFu; // 800FBDB4
  if (crb(c,1)) { goto L_800FBDC0; } // 800FBDB8
  c->r[8]=c->r[9]|c->r[9]; // 800FBDBC
L_800FBDC0:;
  W8(c->r[4]+0x00000007u,c->r[8]); // 800FBDC0
  c->r[4]=c->r[4]+c->r[5]; // 800FBDC4
  c->r[10]=c->r[10]+0x00000002u; // 800FBDC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FBC40; } // 800FBDCC
  c->r[1]=c->r[1]+0x00000020u; // 800FBDD0
  return; // 800FBDD4
}

// fn_800FBDD8
void f_800FBDD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBDD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBDDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBDE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FBDE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FBDE8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FBDEC
  c->r[0]=c->r[6]+0x00000020u; // 800FBDF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800FBDF4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000020u); // 800FBDF8
  c->r[7]=sraw(c,c->r[6],1); // 800FBDFC
  c->r[9]=c->r[0]+c->r[6]; // 800FBE00
  c->r[10]=c->r[0]+c->r[7]; // 800FBE04
  c->r[11]=c->r[0]-c->r[7]; // 800FBE08
  c->r[12]=c->r[0]-c->r[6]; // 800FBE0C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000030u); // 800FBE10
  c->r[29]=0u-c->r[7]; // 800FBE14
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 800FBE18
  c->r[6]=sraw(c,c->r[7],1); // 800FBE1C
  c->r[0]=c->r[8]-c->r[7]; // 800FBE20
  c->r[6]=c->r[0]-c->r[6]; // 800FBE24
  c->r[30]=0u-c->r[8]; // 800FBE28
  c->r[0]=sraw(c,c->r[8],1); // 800FBE2C
  c->r[0]=c->r[0]+c->r[7]; // 800FBE30
  c->r[7]=c->r[8]+c->r[0]; // 800FBE34
  c->r[0]=sraw(c,c->r[7],2); // 800FBE38
  c->r[8]=c->r[29]+c->r[0]; // 800FBE3C
  c->r[0]=sraw(c,c->r[29],2); // 800FBE40
  c->r[7]=c->r[7]-c->r[0]; // 800FBE44
  c->r[0]=sraw(c,c->r[30],2); // 800FBE48
  c->r[29]=c->r[6]+c->r[0]; // 800FBE4C
  c->r[0]=sraw(c,c->r[6],2); // 800FBE50
  c->r[6]=c->r[0]-c->r[30]; // 800FBE54
  c->r[0]=c->r[9]+c->r[7]; // 800FBE58
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FBE5C
  c->r[0]=c->r[10]+c->r[6]; // 800FBE60
  W16(c->r[3]+0x00000010u,c->r[0]); // 800FBE64
  c->r[0]=c->r[11]+c->r[29]; // 800FBE68
  W16(c->r[3]+0x00000020u,c->r[0]); // 800FBE6C
  c->r[0]=c->r[12]+c->r[8]; // 800FBE70
  W16(c->r[3]+0x00000030u,c->r[0]); // 800FBE74
  c->r[0]=c->r[12]-c->r[8]; // 800FBE78
  W16(c->r[3]+0x00000040u,c->r[0]); // 800FBE7C
  c->r[0]=c->r[11]-c->r[29]; // 800FBE80
  W16(c->r[3]+0x00000050u,c->r[0]); // 800FBE84
  c->r[0]=c->r[10]-c->r[6]; // 800FBE88
  W16(c->r[3]+0x00000060u,c->r[0]); // 800FBE8C
  c->r[0]=c->r[9]-c->r[7]; // 800FBE90
  W16(c->r[3]+0x00000070u,c->r[0]); // 800FBE94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000022u); // 800FBE98
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800FBE9C
  c->r[8]=c->r[6]+c->r[0]; // 800FBEA0
  c->r[7]=sraw(c,c->r[0],1); // 800FBEA4
  c->r[9]=c->r[6]+c->r[7]; // 800FBEA8
  c->r[7]=c->r[6]-c->r[7]; // 800FBEAC
  c->r[10]=c->r[6]-c->r[0]; // 800FBEB0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 800FBEB4
  c->r[0]=sraw(c,c->r[6],1); // 800FBEB8
  c->r[11]=c->r[6]+c->r[0]; // 800FBEBC
  c->r[12]=sraw(c,c->r[11],2); // 800FBEC0
  c->r[0]=0u-c->r[6]; // 800FBEC4
  c->r[0]=sraw(c,c->r[0],2); // 800FBEC8
  c->r[29]=c->r[6]+c->r[0]; // 800FBECC
  c->r[0]=sraw(c,c->r[6],2); // 800FBED0
  c->r[6]=c->r[6]+c->r[0]; // 800FBED4
  c->r[0]=c->r[8]+c->r[11]; // 800FBED8
  W16(c->r[3]+0x00000002u,c->r[0]); // 800FBEDC
  c->r[0]=c->r[9]+c->r[6]; // 800FBEE0
  W16(c->r[3]+0x00000012u,c->r[0]); // 800FBEE4
  c->r[0]=c->r[7]+c->r[29]; // 800FBEE8
  W16(c->r[3]+0x00000022u,c->r[0]); // 800FBEEC
  c->r[0]=c->r[10]+c->r[12]; // 800FBEF0
  W16(c->r[3]+0x00000032u,c->r[0]); // 800FBEF4
  c->r[0]=c->r[10]-c->r[12]; // 800FBEF8
  W16(c->r[3]+0x00000042u,c->r[0]); // 800FBEFC
  c->r[0]=c->r[7]-c->r[29]; // 800FBF00
  W16(c->r[3]+0x00000052u,c->r[0]); // 800FBF04
  c->r[0]=c->r[9]-c->r[6]; // 800FBF08
  W16(c->r[3]+0x00000062u,c->r[0]); // 800FBF0C
  c->r[0]=c->r[8]-c->r[11]; // 800FBF10
  W16(c->r[3]+0x00000072u,c->r[0]); // 800FBF14
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 800FBF18
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000014u); // 800FBF1C
  c->r[0]=sraw(c,c->r[6],1); // 800FBF20
  c->r[8]=c->r[6]+c->r[0]; // 800FBF24
  c->r[9]=sraw(c,c->r[8],2); // 800FBF28
  c->r[0]=0u-c->r[6]; // 800FBF2C
  c->r[0]=sraw(c,c->r[0],2); // 800FBF30
  c->r[10]=c->r[6]+c->r[0]; // 800FBF34
  c->r[0]=sraw(c,c->r[6],2); // 800FBF38
  c->r[6]=c->r[6]+c->r[0]; // 800FBF3C
  c->r[0]=c->r[7]+c->r[8]; // 800FBF40
  W16(c->r[3]+0x00000004u,c->r[0]); // 800FBF44
  c->r[0]=c->r[7]+c->r[6]; // 800FBF48
  W16(c->r[3]+0x00000014u,c->r[0]); // 800FBF4C
  c->r[0]=c->r[7]+c->r[10]; // 800FBF50
  W16(c->r[3]+0x00000024u,c->r[0]); // 800FBF54
  c->r[0]=c->r[7]+c->r[9]; // 800FBF58
  W16(c->r[3]+0x00000034u,c->r[0]); // 800FBF5C
  c->r[0]=c->r[7]-c->r[9]; // 800FBF60
  W16(c->r[3]+0x00000044u,c->r[0]); // 800FBF64
  c->r[0]=c->r[7]-c->r[10]; // 800FBF68
  W16(c->r[3]+0x00000054u,c->r[0]); // 800FBF6C
  c->r[0]=c->r[7]-c->r[6]; // 800FBF70
  W16(c->r[3]+0x00000064u,c->r[0]); // 800FBF74
  c->r[0]=c->r[7]-c->r[8]; // 800FBF78
  W16(c->r[3]+0x00000074u,c->r[0]); // 800FBF7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 800FBF80
  W16(c->r[3]+0x00000016u,c->r[0]); // 800FBF84
  W16(c->r[3]+0x00000026u,c->r[0]); // 800FBF88
  W16(c->r[3]+0x00000036u,c->r[0]); // 800FBF8C
  W16(c->r[3]+0x00000046u,c->r[0]); // 800FBF90
  W16(c->r[3]+0x00000056u,c->r[0]); // 800FBF94
  W16(c->r[3]+0x00000066u,c->r[0]); // 800FBF98
  W16(c->r[3]+0x00000076u,c->r[0]); // 800FBF9C
  c->r[31]=0u+0x00000000u; // 800FBFA0
  c->r[0]=0u+0x00000008u; // 800FBFA4
  c->ctr=c->r[0]; // 800FBFA8
L_800FBFAC:;
  c->r[9]=c->r[3]+c->r[31]; // 800FBFAC
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[31]); // 800FBFB0
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000004u); // 800FBFB4
  c->r[7]=sraw(c,c->r[10],1); // 800FBFB8
  c->r[0]=c->r[8]+c->r[10]; // 800FBFBC
  c->r[6]=c->r[8]+c->r[7]; // 800FBFC0
  c->r[7]=c->r[8]-c->r[7]; // 800FBFC4
  c->r[8]=c->r[8]-c->r[10]; // 800FBFC8
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000006u); // 800FBFCC
  c->r[29]=0u-c->r[11]; // 800FBFD0
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000002u); // 800FBFD4
  c->r[10]=sraw(c,c->r[11],1); // 800FBFD8
  c->r[9]=c->r[12]-c->r[11]; // 800FBFDC
  c->r[30]=c->r[9]-c->r[10]; // 800FBFE0
  c->r[28]=0u-c->r[12]; // 800FBFE4
  c->r[9]=sraw(c,c->r[12],1); // 800FBFE8
  c->r[9]=c->r[9]+c->r[11]; // 800FBFEC
  c->r[11]=c->r[12]+c->r[9]; // 800FBFF0
  c->r[9]=sraw(c,c->r[11],2); // 800FBFF4
  c->r[9]=c->r[29]+c->r[9]; // 800FBFF8
  c->r[10]=sraw(c,c->r[29],2); // 800FBFFC
  c->r[10]=c->r[11]-c->r[10]; // 800FC000
  c->r[11]=sraw(c,c->r[28],2); // 800FC004
  c->r[11]=c->r[30]+c->r[11]; // 800FC008
  c->r[12]=sraw(c,c->r[30],2); // 800FC00C
  c->r[12]=c->r[12]-c->r[28]; // 800FC010
  c->r[30]=c->r[0]+c->r[10]; // 800FC014
  c->r[30]=sraw(c,c->r[30],6); // 800FC018
  c->r[29]=R8(c->r[4]+0x00000000u); // 800FC01C
  c->r[29]=c->r[29]+c->r[30]; cr0(c,c->r[29]); // 800FC020
  if (!crb(c,0)) { goto L_800FC030; } // 800FC024
  c->r[30]=0u+0x00000000u; // 800FC028
  goto L_800FC040; // 800FC02C
L_800FC030:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FC030
  c->r[30]=0u+0x000000FFu; // 800FC034
  if (crb(c,1)) { goto L_800FC040; } // 800FC038
  c->r[30]=c->r[29]|c->r[29]; // 800FC03C
L_800FC040:;
  W8(c->r[4]+0x00000000u,c->r[30]); // 800FC040
  c->r[29]=c->r[6]+c->r[12]; // 800FC044
  c->r[29]=sraw(c,c->r[29],6); // 800FC048
  c->r[30]=R8(c->r[4]+0x00000001u); // 800FC04C
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FC050
  if (!crb(c,0)) { goto L_800FC060; } // 800FC054
  c->r[30]=0u+0x00000000u; // 800FC058
  goto L_800FC070; // 800FC05C
L_800FC060:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FC060
  c->r[30]=0u+0x000000FFu; // 800FC064
  if (crb(c,1)) { goto L_800FC070; } // 800FC068
  c->r[30]=c->r[29]|c->r[29]; // 800FC06C
L_800FC070:;
  W8(c->r[4]+0x00000001u,c->r[30]); // 800FC070
  c->r[29]=c->r[7]+c->r[11]; // 800FC074
  c->r[29]=sraw(c,c->r[29],6); // 800FC078
  c->r[30]=R8(c->r[4]+0x00000002u); // 800FC07C
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FC080
  if (!crb(c,0)) { goto L_800FC090; } // 800FC084
  c->r[30]=0u+0x00000000u; // 800FC088
  goto L_800FC0A0; // 800FC08C
L_800FC090:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FC090
  c->r[30]=0u+0x000000FFu; // 800FC094
  if (crb(c,1)) { goto L_800FC0A0; } // 800FC098
  c->r[30]=c->r[29]|c->r[29]; // 800FC09C
L_800FC0A0:;
  W8(c->r[4]+0x00000002u,c->r[30]); // 800FC0A0
  c->r[29]=c->r[8]+c->r[9]; // 800FC0A4
  c->r[29]=sraw(c,c->r[29],6); // 800FC0A8
  c->r[30]=R8(c->r[4]+0x00000003u); // 800FC0AC
  c->r[29]=c->r[30]+c->r[29]; cr0(c,c->r[29]); // 800FC0B0
  if (!crb(c,0)) { goto L_800FC0C0; } // 800FC0B4
  c->r[30]=0u+0x00000000u; // 800FC0B8
  goto L_800FC0D0; // 800FC0BC
L_800FC0C0:;
  cmps(c,0,(int32_t)c->r[29],255); // 800FC0C0
  c->r[30]=0u+0x000000FFu; // 800FC0C4
  if (crb(c,1)) { goto L_800FC0D0; } // 800FC0C8
  c->r[30]=c->r[29]|c->r[29]; // 800FC0CC
L_800FC0D0:;
  W8(c->r[4]+0x00000003u,c->r[30]); // 800FC0D0
  c->r[8]=c->r[8]-c->r[9]; // 800FC0D4
  c->r[8]=sraw(c,c->r[8],6); // 800FC0D8
  c->r[9]=R8(c->r[4]+0x00000004u); // 800FC0DC
  c->r[9]=c->r[9]+c->r[8]; cr0(c,c->r[9]); // 800FC0E0
  if (!crb(c,0)) { goto L_800FC0F0; } // 800FC0E4
  c->r[8]=0u+0x00000000u; // 800FC0E8
  goto L_800FC100; // 800FC0EC
L_800FC0F0:;
  cmps(c,0,(int32_t)c->r[9],255); // 800FC0F0
  c->r[8]=0u+0x000000FFu; // 800FC0F4
  if (crb(c,1)) { goto L_800FC100; } // 800FC0F8
  c->r[8]=c->r[9]|c->r[9]; // 800FC0FC
L_800FC100:;
  W8(c->r[4]+0x00000004u,c->r[8]); // 800FC100
  c->r[7]=c->r[7]-c->r[11]; // 800FC104
  c->r[7]=sraw(c,c->r[7],6); // 800FC108
  c->r[8]=R8(c->r[4]+0x00000005u); // 800FC10C
  c->r[8]=c->r[8]+c->r[7]; cr0(c,c->r[8]); // 800FC110
  if (!crb(c,0)) { goto L_800FC120; } // 800FC114
  c->r[7]=0u+0x00000000u; // 800FC118
  goto L_800FC130; // 800FC11C
L_800FC120:;
  cmps(c,0,(int32_t)c->r[8],255); // 800FC120
  c->r[7]=0u+0x000000FFu; // 800FC124
  if (crb(c,1)) { goto L_800FC130; } // 800FC128
  c->r[7]=c->r[8]|c->r[8]; // 800FC12C
L_800FC130:;
  W8(c->r[4]+0x00000005u,c->r[7]); // 800FC130
  c->r[6]=c->r[6]-c->r[12]; // 800FC134
  c->r[6]=sraw(c,c->r[6],6); // 800FC138
  c->r[7]=R8(c->r[4]+0x00000006u); // 800FC13C
  c->r[7]=c->r[7]+c->r[6]; cr0(c,c->r[7]); // 800FC140
  if (!crb(c,0)) { goto L_800FC150; } // 800FC144
  c->r[6]=0u+0x00000000u; // 800FC148
  goto L_800FC160; // 800FC14C
L_800FC150:;
  cmps(c,0,(int32_t)c->r[7],255); // 800FC150
  c->r[6]=0u+0x000000FFu; // 800FC154
  if (crb(c,1)) { goto L_800FC160; } // 800FC158
  c->r[6]=c->r[7]|c->r[7]; // 800FC15C
L_800FC160:;
  W8(c->r[4]+0x00000006u,c->r[6]); // 800FC160
  c->r[0]=c->r[0]-c->r[10]; // 800FC164
  c->r[0]=sraw(c,c->r[0],6); // 800FC168
  c->r[6]=R8(c->r[4]+0x00000007u); // 800FC16C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC170
  if (!crb(c,0)) { goto L_800FC180; } // 800FC174
  c->r[0]=0u+0x00000000u; // 800FC178
  goto L_800FC190; // 800FC17C
L_800FC180:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC180
  c->r[0]=0u+0x000000FFu; // 800FC184
  if (crb(c,1)) { goto L_800FC190; } // 800FC188
  c->r[0]=c->r[6]|c->r[6]; // 800FC18C
L_800FC190:;
  W8(c->r[4]+0x00000007u,c->r[0]); // 800FC190
  c->r[4]=c->r[4]+c->r[5]; // 800FC194
  c->r[31]=c->r[31]+0x00000010u; // 800FC198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FBFAC; } // 800FC19C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC1A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC1A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FC1A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FC1AC
  c->r[1]=c->r[1]+0x00000020u; // 800FC1B0
  return; // 800FC1B4
}

// fn_800FC1B8
void f_800FC1B8(Ctx* __restrict c) {
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FC1B8
  c->r[0]=c->r[3]+0x00000020u; // 800FC1BC
  c->r[0]=sraw(c,c->r[0],6); // 800FC1C0
  c->r[3]=R8(c->r[4]+0x00000000u); // 800FC1C4
  c->r[6]=c->r[3]+c->r[0]; cr0(c,c->r[6]); // 800FC1C8
  if (!crb(c,0)) { goto L_800FC1D8; } // 800FC1CC
  c->r[3]=0u+0x00000000u; // 800FC1D0
  goto L_800FC1E8; // 800FC1D4
L_800FC1D8:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC1D8
  c->r[3]=0u+0x000000FFu; // 800FC1DC
  if (crb(c,1)) { goto L_800FC1E8; } // 800FC1E0
  c->r[3]=c->r[6]|c->r[6]; // 800FC1E4
L_800FC1E8:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800FC1E8
  c->r[3]=R8(c->r[4]+0x00000001u); // 800FC1EC
  c->r[6]=c->r[3]+c->r[0]; cr0(c,c->r[6]); // 800FC1F0
  if (!crb(c,0)) { goto L_800FC200; } // 800FC1F4
  c->r[3]=0u+0x00000000u; // 800FC1F8
  goto L_800FC210; // 800FC1FC
L_800FC200:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC200
  c->r[3]=0u+0x000000FFu; // 800FC204
  if (crb(c,1)) { goto L_800FC210; } // 800FC208
  c->r[3]=c->r[6]|c->r[6]; // 800FC20C
L_800FC210:;
  W8(c->r[4]+0x00000001u,c->r[3]); // 800FC210
  c->r[3]=R8(c->r[4]+0x00000002u); // 800FC214
  c->r[6]=c->r[3]+c->r[0]; cr0(c,c->r[6]); // 800FC218
  if (!crb(c,0)) { goto L_800FC228; } // 800FC21C
  c->r[3]=0u+0x00000000u; // 800FC220
  goto L_800FC238; // 800FC224
L_800FC228:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC228
  c->r[3]=0u+0x000000FFu; // 800FC22C
  if (crb(c,1)) { goto L_800FC238; } // 800FC230
  c->r[3]=c->r[6]|c->r[6]; // 800FC234
L_800FC238:;
  W8(c->r[4]+0x00000002u,c->r[3]); // 800FC238
  c->r[3]=R8(c->r[4]+0x00000003u); // 800FC23C
  c->r[6]=c->r[3]+c->r[0]; cr0(c,c->r[6]); // 800FC240
  if (!crb(c,0)) { goto L_800FC250; } // 800FC244
  c->r[3]=0u+0x00000000u; // 800FC248
  goto L_800FC260; // 800FC24C
L_800FC250:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC250
  c->r[3]=0u+0x000000FFu; // 800FC254
  if (crb(c,1)) { goto L_800FC260; } // 800FC258
  c->r[3]=c->r[6]|c->r[6]; // 800FC25C
L_800FC260:;
  W8(c->r[4]+0x00000003u,c->r[3]); // 800FC260
  c->r[3]=c->r[4]+c->r[5]; // 800FC264
  c->r[4]=R8(c->r[4]+c->r[5]); // 800FC268
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC26C
  if (!crb(c,0)) { goto L_800FC27C; } // 800FC270
  c->r[4]=0u+0x00000000u; // 800FC274
  goto L_800FC28C; // 800FC278
L_800FC27C:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC27C
  c->r[4]=0u+0x000000FFu; // 800FC280
  if (crb(c,1)) { goto L_800FC28C; } // 800FC284
  c->r[4]=c->r[6]|c->r[6]; // 800FC288
L_800FC28C:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 800FC28C
  c->r[4]=R8(c->r[3]+0x00000001u); // 800FC290
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC294
  if (!crb(c,0)) { goto L_800FC2A4; } // 800FC298
  c->r[4]=0u+0x00000000u; // 800FC29C
  goto L_800FC2B4; // 800FC2A0
L_800FC2A4:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC2A4
  c->r[4]=0u+0x000000FFu; // 800FC2A8
  if (crb(c,1)) { goto L_800FC2B4; } // 800FC2AC
  c->r[4]=c->r[6]|c->r[6]; // 800FC2B0
L_800FC2B4:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 800FC2B4
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FC2B8
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC2BC
  if (!crb(c,0)) { goto L_800FC2CC; } // 800FC2C0
  c->r[4]=0u+0x00000000u; // 800FC2C4
  goto L_800FC2DC; // 800FC2C8
L_800FC2CC:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC2CC
  c->r[4]=0u+0x000000FFu; // 800FC2D0
  if (crb(c,1)) { goto L_800FC2DC; } // 800FC2D4
  c->r[4]=c->r[6]|c->r[6]; // 800FC2D8
L_800FC2DC:;
  W8(c->r[3]+0x00000002u,c->r[4]); // 800FC2DC
  c->r[4]=R8(c->r[3]+0x00000003u); // 800FC2E0
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC2E4
  if (!crb(c,0)) { goto L_800FC2F4; } // 800FC2E8
  c->r[4]=0u+0x00000000u; // 800FC2EC
  goto L_800FC304; // 800FC2F0
L_800FC2F4:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC2F4
  c->r[4]=0u+0x000000FFu; // 800FC2F8
  if (crb(c,1)) { goto L_800FC304; } // 800FC2FC
  c->r[4]=c->r[6]|c->r[6]; // 800FC300
L_800FC304:;
  W8(c->r[3]+0x00000003u,c->r[4]); // 800FC304
  {uint32_t ea=c->r[3]+c->r[5]; c->r[4]=R8(ea); c->r[3]=ea;} // 800FC308
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC30C
  if (!crb(c,0)) { goto L_800FC31C; } // 800FC310
  c->r[4]=0u+0x00000000u; // 800FC314
  goto L_800FC32C; // 800FC318
L_800FC31C:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC31C
  c->r[4]=0u+0x000000FFu; // 800FC320
  if (crb(c,1)) { goto L_800FC32C; } // 800FC324
  c->r[4]=c->r[6]|c->r[6]; // 800FC328
L_800FC32C:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 800FC32C
  c->r[4]=R8(c->r[3]+0x00000001u); // 800FC330
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC334
  if (!crb(c,0)) { goto L_800FC344; } // 800FC338
  c->r[4]=0u+0x00000000u; // 800FC33C
  goto L_800FC354; // 800FC340
L_800FC344:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC344
  c->r[4]=0u+0x000000FFu; // 800FC348
  if (crb(c,1)) { goto L_800FC354; } // 800FC34C
  c->r[4]=c->r[6]|c->r[6]; // 800FC350
L_800FC354:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 800FC354
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FC358
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC35C
  if (!crb(c,0)) { goto L_800FC36C; } // 800FC360
  c->r[4]=0u+0x00000000u; // 800FC364
  goto L_800FC37C; // 800FC368
L_800FC36C:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC36C
  c->r[4]=0u+0x000000FFu; // 800FC370
  if (crb(c,1)) { goto L_800FC37C; } // 800FC374
  c->r[4]=c->r[6]|c->r[6]; // 800FC378
L_800FC37C:;
  W8(c->r[3]+0x00000002u,c->r[4]); // 800FC37C
  c->r[4]=R8(c->r[3]+0x00000003u); // 800FC380
  c->r[6]=c->r[4]+c->r[0]; cr0(c,c->r[6]); // 800FC384
  if (!crb(c,0)) { goto L_800FC394; } // 800FC388
  c->r[4]=0u+0x00000000u; // 800FC38C
  goto L_800FC3A4; // 800FC390
L_800FC394:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC394
  c->r[4]=0u+0x000000FFu; // 800FC398
  if (crb(c,1)) { goto L_800FC3A4; } // 800FC39C
  c->r[4]=c->r[6]|c->r[6]; // 800FC3A0
L_800FC3A4:;
  W8(c->r[3]+0x00000003u,c->r[4]); // 800FC3A4
  {uint32_t ea=c->r[3]+c->r[5]; c->r[4]=R8(ea); c->r[3]=ea;} // 800FC3A8
  c->r[5]=c->r[4]+c->r[0]; cr0(c,c->r[5]); // 800FC3AC
  if (!crb(c,0)) { goto L_800FC3BC; } // 800FC3B0
  c->r[4]=0u+0x00000000u; // 800FC3B4
  goto L_800FC3CC; // 800FC3B8
L_800FC3BC:;
  cmps(c,0,(int32_t)c->r[5],255); // 800FC3BC
  c->r[4]=0u+0x000000FFu; // 800FC3C0
  if (crb(c,1)) { goto L_800FC3CC; } // 800FC3C4
  c->r[4]=c->r[5]|c->r[5]; // 800FC3C8
L_800FC3CC:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 800FC3CC
  c->r[4]=R8(c->r[3]+0x00000001u); // 800FC3D0
  c->r[5]=c->r[4]+c->r[0]; cr0(c,c->r[5]); // 800FC3D4
  if (!crb(c,0)) { goto L_800FC3E4; } // 800FC3D8
  c->r[4]=0u+0x00000000u; // 800FC3DC
  goto L_800FC3F4; // 800FC3E0
L_800FC3E4:;
  cmps(c,0,(int32_t)c->r[5],255); // 800FC3E4
  c->r[4]=0u+0x000000FFu; // 800FC3E8
  if (crb(c,1)) { goto L_800FC3F4; } // 800FC3EC
  c->r[4]=c->r[5]|c->r[5]; // 800FC3F0
L_800FC3F4:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 800FC3F4
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FC3F8
  c->r[5]=c->r[4]+c->r[0]; cr0(c,c->r[5]); // 800FC3FC
  if (!crb(c,0)) { goto L_800FC40C; } // 800FC400
  c->r[4]=0u+0x00000000u; // 800FC404
  goto L_800FC41C; // 800FC408
L_800FC40C:;
  cmps(c,0,(int32_t)c->r[5],255); // 800FC40C
  c->r[4]=0u+0x000000FFu; // 800FC410
  if (crb(c,1)) { goto L_800FC41C; } // 800FC414
  c->r[4]=c->r[5]|c->r[5]; // 800FC418
L_800FC41C:;
  W8(c->r[3]+0x00000002u,c->r[4]); // 800FC41C
  c->r[4]=R8(c->r[3]+0x00000003u); // 800FC420
  c->r[4]=c->r[4]+c->r[0]; cr0(c,c->r[4]); // 800FC424
  if (!crb(c,0)) { goto L_800FC434; } // 800FC428
  c->r[0]=0u+0x00000000u; // 800FC42C
  goto L_800FC444; // 800FC430
L_800FC434:;
  cmps(c,0,(int32_t)c->r[4],255); // 800FC434
  c->r[0]=0u+0x000000FFu; // 800FC438
  if (crb(c,1)) { goto L_800FC444; } // 800FC43C
  c->r[0]=c->r[4]|c->r[4]; // 800FC440
L_800FC444:;
  W8(c->r[3]+0x00000003u,c->r[0]); // 800FC444
  return; // 800FC448
}

// fn_800FC44C
void f_800FC44C(Ctx* __restrict c) {
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FC44C
  c->r[0]=c->r[6]+0x00000020u; // 800FC450
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800FC454
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000008u); // 800FC458
  c->r[8]=sraw(c,c->r[7],1); // 800FC45C
  c->r[9]=c->r[6]+c->r[7]; // 800FC460
  W16(c->r[3]+0x00000000u,c->r[9]); // 800FC464
  c->r[0]=c->r[6]+c->r[8]; // 800FC468
  W16(c->r[3]+0x00000008u,c->r[0]); // 800FC46C
  c->r[0]=c->r[6]-c->r[8]; // 800FC470
  W16(c->r[3]+0x00000010u,c->r[0]); // 800FC474
  c->r[0]=c->r[6]-c->r[7]; // 800FC478
  W16(c->r[3]+0x00000018u,c->r[0]); // 800FC47C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800FC480
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Au); // 800FC484
  c->r[10]=sraw(c,c->r[7],1); // 800FC488
  c->r[8]=c->r[6]+c->r[7]; // 800FC48C
  W16(c->r[3]+0x00000002u,c->r[8]); // 800FC490
  c->r[0]=c->r[6]+c->r[10]; // 800FC494
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800FC498
  c->r[0]=c->r[6]-c->r[10]; // 800FC49C
  W16(c->r[3]+0x00000012u,c->r[0]); // 800FC4A0
  c->r[0]=c->r[6]-c->r[7]; // 800FC4A4
  W16(c->r[3]+0x0000001Au,c->r[0]); // 800FC4A8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 800FC4AC
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800FC4B0
  c->r[11]=sraw(c,c->r[10],1); // 800FC4B4
  c->r[7]=c->r[6]+c->r[10]; // 800FC4B8
  W16(c->r[3]+0x00000004u,c->r[7]); // 800FC4BC
  c->r[0]=c->r[6]+c->r[11]; // 800FC4C0
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 800FC4C4
  c->r[0]=c->r[6]-c->r[11]; // 800FC4C8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800FC4CC
  c->r[0]=c->r[6]-c->r[10]; // 800FC4D0
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800FC4D4
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 800FC4D8
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 800FC4DC
  c->r[12]=sraw(c,c->r[11],1); // 800FC4E0
  c->r[6]=c->r[10]+c->r[11]; // 800FC4E4
  W16(c->r[3]+0x00000006u,c->r[6]); // 800FC4E8
  c->r[0]=c->r[10]+c->r[12]; // 800FC4EC
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 800FC4F0
  c->r[0]=c->r[10]-c->r[12]; // 800FC4F4
  W16(c->r[3]+0x00000016u,c->r[0]); // 800FC4F8
  c->r[0]=c->r[10]-c->r[11]; // 800FC4FC
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 800FC500
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 800FC504
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800FC508
  c->r[9]=c->r[0]+c->r[7]; // 800FC50C
  c->r[7]=c->r[0]-c->r[7]; // 800FC510
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800FC514
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800FC518
  c->r[0]=sraw(c,c->r[8],1); // 800FC51C
  c->r[10]=c->r[0]-c->r[6]; // 800FC520
  c->r[0]=sraw(c,c->r[6],1); // 800FC524
  c->r[8]=c->r[8]+c->r[0]; // 800FC528
  c->r[0]=c->r[9]+c->r[8]; // 800FC52C
  c->r[0]=sraw(c,c->r[0],6); // 800FC530
  c->r[6]=R8(c->r[4]+0x00000000u); // 800FC534
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC538
  if (!crb(c,0)) { goto L_800FC548; } // 800FC53C
  c->r[0]=0u+0x00000000u; // 800FC540
  goto L_800FC558; // 800FC544
L_800FC548:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC548
  c->r[0]=0u+0x000000FFu; // 800FC54C
  if (crb(c,1)) { goto L_800FC558; } // 800FC550
  c->r[0]=c->r[6]|c->r[6]; // 800FC554
L_800FC558:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FC558
  c->r[0]=c->r[7]+c->r[10]; // 800FC55C
  c->r[0]=sraw(c,c->r[0],6); // 800FC560
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FC564
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC568
  if (!crb(c,0)) { goto L_800FC578; } // 800FC56C
  c->r[0]=0u+0x00000000u; // 800FC570
  goto L_800FC588; // 800FC574
L_800FC578:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC578
  c->r[0]=0u+0x000000FFu; // 800FC57C
  if (crb(c,1)) { goto L_800FC588; } // 800FC580
  c->r[0]=c->r[6]|c->r[6]; // 800FC584
L_800FC588:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FC588
  c->r[0]=c->r[7]-c->r[10]; // 800FC58C
  c->r[0]=sraw(c,c->r[0],6); // 800FC590
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FC594
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC598
  if (!crb(c,0)) { goto L_800FC5A8; } // 800FC59C
  c->r[0]=0u+0x00000000u; // 800FC5A0
  goto L_800FC5B8; // 800FC5A4
L_800FC5A8:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC5A8
  c->r[0]=0u+0x000000FFu; // 800FC5AC
  if (crb(c,1)) { goto L_800FC5B8; } // 800FC5B0
  c->r[0]=c->r[6]|c->r[6]; // 800FC5B4
L_800FC5B8:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FC5B8
  c->r[0]=c->r[9]-c->r[8]; // 800FC5BC
  c->r[0]=sraw(c,c->r[0],6); // 800FC5C0
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FC5C4
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC5C8
  if (!crb(c,0)) { goto L_800FC5D8; } // 800FC5CC
  c->r[0]=0u+0x00000000u; // 800FC5D0
  goto L_800FC5E8; // 800FC5D4
L_800FC5D8:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC5D8
  c->r[0]=0u+0x000000FFu; // 800FC5DC
  if (crb(c,1)) { goto L_800FC5E8; } // 800FC5E0
  c->r[0]=c->r[6]|c->r[6]; // 800FC5E4
L_800FC5E8:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FC5E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000008u); // 800FC5EC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800FC5F0
  c->r[7]=c->r[0]+c->r[6]; // 800FC5F4
  c->r[8]=c->r[0]-c->r[6]; // 800FC5F8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Au); // 800FC5FC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 800FC600
  c->r[0]=sraw(c,c->r[6],1); // 800FC604
  c->r[10]=c->r[0]-c->r[9]; // 800FC608
  c->r[0]=sraw(c,c->r[9],1); // 800FC60C
  c->r[9]=c->r[6]+c->r[0]; // 800FC610
  c->r[0]=c->r[7]+c->r[9]; // 800FC614
  c->r[0]=sraw(c,c->r[0],6); // 800FC618
  {uint32_t ea=c->r[4]+c->r[5]; c->r[6]=R8(ea); c->r[4]=ea;} // 800FC61C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC620
  if (!crb(c,0)) { goto L_800FC630; } // 800FC624
  c->r[0]=0u+0x00000000u; // 800FC628
  goto L_800FC640; // 800FC62C
L_800FC630:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC630
  c->r[0]=0u+0x000000FFu; // 800FC634
  if (crb(c,1)) { goto L_800FC640; } // 800FC638
  c->r[0]=c->r[6]|c->r[6]; // 800FC63C
L_800FC640:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FC640
  c->r[0]=c->r[8]+c->r[10]; // 800FC644
  c->r[0]=sraw(c,c->r[0],6); // 800FC648
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FC64C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC650
  if (!crb(c,0)) { goto L_800FC660; } // 800FC654
  c->r[0]=0u+0x00000000u; // 800FC658
  goto L_800FC670; // 800FC65C
L_800FC660:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC660
  c->r[0]=0u+0x000000FFu; // 800FC664
  if (crb(c,1)) { goto L_800FC670; } // 800FC668
  c->r[0]=c->r[6]|c->r[6]; // 800FC66C
L_800FC670:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FC670
  c->r[0]=c->r[8]-c->r[10]; // 800FC674
  c->r[0]=sraw(c,c->r[0],6); // 800FC678
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FC67C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC680
  if (!crb(c,0)) { goto L_800FC690; } // 800FC684
  c->r[0]=0u+0x00000000u; // 800FC688
  goto L_800FC6A0; // 800FC68C
L_800FC690:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC690
  c->r[0]=0u+0x000000FFu; // 800FC694
  if (crb(c,1)) { goto L_800FC6A0; } // 800FC698
  c->r[0]=c->r[6]|c->r[6]; // 800FC69C
L_800FC6A0:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FC6A0
  c->r[0]=c->r[7]-c->r[9]; // 800FC6A4
  c->r[0]=sraw(c,c->r[0],6); // 800FC6A8
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FC6AC
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC6B0
  if (!crb(c,0)) { goto L_800FC6C0; } // 800FC6B4
  c->r[0]=0u+0x00000000u; // 800FC6B8
  goto L_800FC6D0; // 800FC6BC
L_800FC6C0:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC6C0
  c->r[0]=0u+0x000000FFu; // 800FC6C4
  if (crb(c,1)) { goto L_800FC6D0; } // 800FC6C8
  c->r[0]=c->r[6]|c->r[6]; // 800FC6CC
L_800FC6D0:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FC6D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 800FC6D4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000014u); // 800FC6D8
  c->r[7]=c->r[0]+c->r[6]; // 800FC6DC
  c->r[8]=c->r[0]-c->r[6]; // 800FC6E0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 800FC6E4
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000016u); // 800FC6E8
  c->r[0]=sraw(c,c->r[6],1); // 800FC6EC
  c->r[10]=c->r[0]-c->r[9]; // 800FC6F0
  c->r[0]=sraw(c,c->r[9],1); // 800FC6F4
  c->r[9]=c->r[6]+c->r[0]; // 800FC6F8
  c->r[0]=c->r[7]+c->r[9]; // 800FC6FC
  c->r[0]=sraw(c,c->r[0],6); // 800FC700
  {uint32_t ea=c->r[4]+c->r[5]; c->r[6]=R8(ea); c->r[4]=ea;} // 800FC704
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC708
  if (!crb(c,0)) { goto L_800FC718; } // 800FC70C
  c->r[0]=0u+0x00000000u; // 800FC710
  goto L_800FC728; // 800FC714
L_800FC718:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC718
  c->r[0]=0u+0x000000FFu; // 800FC71C
  if (crb(c,1)) { goto L_800FC728; } // 800FC720
  c->r[0]=c->r[6]|c->r[6]; // 800FC724
L_800FC728:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FC728
  c->r[0]=c->r[8]+c->r[10]; // 800FC72C
  c->r[0]=sraw(c,c->r[0],6); // 800FC730
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FC734
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC738
  if (!crb(c,0)) { goto L_800FC748; } // 800FC73C
  c->r[0]=0u+0x00000000u; // 800FC740
  goto L_800FC758; // 800FC744
L_800FC748:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC748
  c->r[0]=0u+0x000000FFu; // 800FC74C
  if (crb(c,1)) { goto L_800FC758; } // 800FC750
  c->r[0]=c->r[6]|c->r[6]; // 800FC754
L_800FC758:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FC758
  c->r[0]=c->r[8]-c->r[10]; // 800FC75C
  c->r[0]=sraw(c,c->r[0],6); // 800FC760
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FC764
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC768
  if (!crb(c,0)) { goto L_800FC778; } // 800FC76C
  c->r[0]=0u+0x00000000u; // 800FC770
  goto L_800FC788; // 800FC774
L_800FC778:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC778
  c->r[0]=0u+0x000000FFu; // 800FC77C
  if (crb(c,1)) { goto L_800FC788; } // 800FC780
  c->r[0]=c->r[6]|c->r[6]; // 800FC784
L_800FC788:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FC788
  c->r[0]=c->r[7]-c->r[9]; // 800FC78C
  c->r[0]=sraw(c,c->r[0],6); // 800FC790
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FC794
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FC798
  if (!crb(c,0)) { goto L_800FC7A8; } // 800FC79C
  c->r[0]=0u+0x00000000u; // 800FC7A0
  goto L_800FC7B8; // 800FC7A4
L_800FC7A8:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FC7A8
  c->r[0]=0u+0x000000FFu; // 800FC7AC
  if (crb(c,1)) { goto L_800FC7B8; } // 800FC7B0
  c->r[0]=c->r[6]|c->r[6]; // 800FC7B4
L_800FC7B8:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FC7B8
  c->r[4]=c->r[4]+c->r[5]; // 800FC7BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000018u); // 800FC7C0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Cu); // 800FC7C4
  c->r[6]=c->r[0]+c->r[5]; // 800FC7C8
  c->r[5]=c->r[0]-c->r[5]; // 800FC7CC
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Au); // 800FC7D0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Eu); // 800FC7D4
  c->r[0]=sraw(c,c->r[7],1); // 800FC7D8
  c->r[8]=c->r[0]-c->r[3]; // 800FC7DC
  c->r[0]=sraw(c,c->r[3],1); // 800FC7E0
  c->r[7]=c->r[7]+c->r[0]; // 800FC7E4
  c->r[0]=c->r[6]+c->r[7]; // 800FC7E8
  c->r[0]=sraw(c,c->r[0],6); // 800FC7EC
  c->r[3]=R8(c->r[4]+0x00000000u); // 800FC7F0
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FC7F4
  if (!crb(c,0)) { goto L_800FC804; } // 800FC7F8
  c->r[0]=0u+0x00000000u; // 800FC7FC
  goto L_800FC814; // 800FC800
L_800FC804:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FC804
  c->r[0]=0u+0x000000FFu; // 800FC808
  if (crb(c,1)) { goto L_800FC814; } // 800FC80C
  c->r[0]=c->r[3]|c->r[3]; // 800FC810
L_800FC814:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FC814
  c->r[0]=c->r[5]+c->r[8]; // 800FC818
  c->r[0]=sraw(c,c->r[0],6); // 800FC81C
  c->r[3]=R8(c->r[4]+0x00000001u); // 800FC820
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FC824
  if (!crb(c,0)) { goto L_800FC834; } // 800FC828
  c->r[0]=0u+0x00000000u; // 800FC82C
  goto L_800FC844; // 800FC830
L_800FC834:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FC834
  c->r[0]=0u+0x000000FFu; // 800FC838
  if (crb(c,1)) { goto L_800FC844; } // 800FC83C
  c->r[0]=c->r[3]|c->r[3]; // 800FC840
L_800FC844:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FC844
  c->r[0]=c->r[5]-c->r[8]; // 800FC848
  c->r[0]=sraw(c,c->r[0],6); // 800FC84C
  c->r[3]=R8(c->r[4]+0x00000002u); // 800FC850
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FC854
  if (!crb(c,0)) { goto L_800FC864; } // 800FC858
  c->r[0]=0u+0x00000000u; // 800FC85C
  goto L_800FC874; // 800FC860
L_800FC864:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FC864
  c->r[0]=0u+0x000000FFu; // 800FC868
  if (crb(c,1)) { goto L_800FC874; } // 800FC86C
  c->r[0]=c->r[3]|c->r[3]; // 800FC870
L_800FC874:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FC874
  c->r[0]=c->r[6]-c->r[7]; // 800FC878
  c->r[0]=sraw(c,c->r[0],6); // 800FC87C
  c->r[3]=R8(c->r[4]+0x00000003u); // 800FC880
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FC884
  if (!crb(c,0)) { goto L_800FC894; } // 800FC888
  c->r[0]=0u+0x00000000u; // 800FC88C
  goto L_800FC8A4; // 800FC890
L_800FC894:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FC894
  c->r[0]=0u+0x000000FFu; // 800FC898
  if (crb(c,1)) { goto L_800FC8A4; } // 800FC89C
  c->r[0]=c->r[3]|c->r[3]; // 800FC8A0
L_800FC8A4:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FC8A4
  return; // 800FC8A8
}

// fn_800FC8AC
void f_800FC8AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC8B0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800FC8B4
  c->r[0]=c->r[6]+0x00000020u; // 800FC8B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800FC8BC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 800FC8C0
  c->r[7]=c->r[0]+c->r[6]; // 800FC8C4
  c->r[6]=c->r[0]-c->r[6]; // 800FC8C8
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000008u); // 800FC8CC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000018u); // 800FC8D0
  c->r[0]=sraw(c,c->r[8],1); // 800FC8D4
  c->r[10]=c->r[0]-c->r[9]; // 800FC8D8
  c->r[0]=sraw(c,c->r[9],1); // 800FC8DC
  c->r[8]=c->r[8]+c->r[0]; // 800FC8E0
  c->r[9]=c->r[7]+c->r[8]; // 800FC8E4
  W16(c->r[3]+0x00000000u,c->r[9]); // 800FC8E8
  c->r[0]=c->r[6]+c->r[10]; // 800FC8EC
  W16(c->r[3]+0x00000008u,c->r[0]); // 800FC8F0
  c->r[0]=c->r[6]-c->r[10]; // 800FC8F4
  W16(c->r[3]+0x00000010u,c->r[0]); // 800FC8F8
  c->r[0]=c->r[7]-c->r[8]; // 800FC8FC
  W16(c->r[3]+0x00000018u,c->r[0]); // 800FC900
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800FC904
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 800FC908
  c->r[7]=c->r[0]+c->r[6]; // 800FC90C
  c->r[6]=c->r[0]-c->r[6]; // 800FC910
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Au); // 800FC914
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Au); // 800FC918
  c->r[0]=sraw(c,c->r[8],1); // 800FC91C
  c->r[11]=c->r[0]-c->r[10]; // 800FC920
  c->r[0]=sraw(c,c->r[10],1); // 800FC924
  c->r[10]=c->r[8]+c->r[0]; // 800FC928
  c->r[8]=c->r[7]+c->r[10]; // 800FC92C
  W16(c->r[3]+0x00000002u,c->r[8]); // 800FC930
  c->r[0]=c->r[6]+c->r[11]; // 800FC934
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800FC938
  c->r[0]=c->r[6]-c->r[11]; // 800FC93C
  W16(c->r[3]+0x00000012u,c->r[0]); // 800FC940
  c->r[0]=c->r[7]-c->r[10]; // 800FC944
  W16(c->r[3]+0x0000001Au,c->r[0]); // 800FC948
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 800FC94C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000014u); // 800FC950
  c->r[10]=c->r[0]+c->r[6]; // 800FC954
  c->r[6]=c->r[0]-c->r[6]; // 800FC958
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800FC95C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Cu); // 800FC960
  c->r[0]=sraw(c,c->r[7],1); // 800FC964
  c->r[12]=c->r[0]-c->r[11]; // 800FC968
  c->r[0]=sraw(c,c->r[11],1); // 800FC96C
  c->r[11]=c->r[7]+c->r[0]; // 800FC970
  c->r[7]=c->r[10]+c->r[11]; // 800FC974
  W16(c->r[3]+0x00000004u,c->r[7]); // 800FC978
  c->r[0]=c->r[6]+c->r[12]; // 800FC97C
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 800FC980
  c->r[0]=c->r[6]-c->r[12]; // 800FC984
  W16(c->r[3]+0x00000014u,c->r[0]); // 800FC988
  c->r[0]=c->r[10]-c->r[11]; // 800FC98C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800FC990
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 800FC994
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000016u); // 800FC998
  c->r[10]=c->r[0]+c->r[6]; // 800FC99C
  c->r[11]=c->r[0]-c->r[6]; // 800FC9A0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 800FC9A4
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Eu); // 800FC9A8
  c->r[0]=sraw(c,c->r[6],1); // 800FC9AC
  c->r[31]=c->r[0]-c->r[12]; // 800FC9B0
  c->r[0]=sraw(c,c->r[12],1); // 800FC9B4
  c->r[12]=c->r[6]+c->r[0]; // 800FC9B8
  c->r[6]=c->r[10]+c->r[12]; // 800FC9BC
  W16(c->r[3]+0x00000006u,c->r[6]); // 800FC9C0
  c->r[0]=c->r[11]+c->r[31]; // 800FC9C4
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 800FC9C8
  c->r[0]=c->r[11]-c->r[31]; // 800FC9CC
  W16(c->r[3]+0x00000016u,c->r[0]); // 800FC9D0
  c->r[0]=c->r[10]-c->r[12]; // 800FC9D4
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 800FC9D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 800FC9DC
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800FC9E0
  c->r[9]=c->r[0]+c->r[7]; // 800FC9E4
  c->r[7]=c->r[0]-c->r[7]; // 800FC9E8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800FC9EC
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 800FC9F0
  c->r[0]=sraw(c,c->r[8],1); // 800FC9F4
  c->r[10]=c->r[0]-c->r[6]; // 800FC9F8
  c->r[0]=sraw(c,c->r[6],1); // 800FC9FC
  c->r[8]=c->r[8]+c->r[0]; // 800FCA00
  c->r[0]=c->r[9]+c->r[8]; // 800FCA04
  c->r[0]=sraw(c,c->r[0],6); // 800FCA08
  c->r[6]=R8(c->r[4]+0x00000000u); // 800FCA0C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCA10
  if (!crb(c,0)) { goto L_800FCA20; } // 800FCA14
  c->r[0]=0u+0x00000000u; // 800FCA18
  goto L_800FCA30; // 800FCA1C
L_800FCA20:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCA20
  c->r[0]=0u+0x000000FFu; // 800FCA24
  if (crb(c,1)) { goto L_800FCA30; } // 800FCA28
  c->r[0]=c->r[6]|c->r[6]; // 800FCA2C
L_800FCA30:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FCA30
  c->r[0]=c->r[7]+c->r[10]; // 800FCA34
  c->r[0]=sraw(c,c->r[0],6); // 800FCA38
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FCA3C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCA40
  if (!crb(c,0)) { goto L_800FCA50; } // 800FCA44
  c->r[0]=0u+0x00000000u; // 800FCA48
  goto L_800FCA60; // 800FCA4C
L_800FCA50:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCA50
  c->r[0]=0u+0x000000FFu; // 800FCA54
  if (crb(c,1)) { goto L_800FCA60; } // 800FCA58
  c->r[0]=c->r[6]|c->r[6]; // 800FCA5C
L_800FCA60:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FCA60
  c->r[0]=c->r[7]-c->r[10]; // 800FCA64
  c->r[0]=sraw(c,c->r[0],6); // 800FCA68
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FCA6C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCA70
  if (!crb(c,0)) { goto L_800FCA80; } // 800FCA74
  c->r[0]=0u+0x00000000u; // 800FCA78
  goto L_800FCA90; // 800FCA7C
L_800FCA80:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCA80
  c->r[0]=0u+0x000000FFu; // 800FCA84
  if (crb(c,1)) { goto L_800FCA90; } // 800FCA88
  c->r[0]=c->r[6]|c->r[6]; // 800FCA8C
L_800FCA90:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FCA90
  c->r[0]=c->r[9]-c->r[8]; // 800FCA94
  c->r[0]=sraw(c,c->r[0],6); // 800FCA98
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FCA9C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCAA0
  if (!crb(c,0)) { goto L_800FCAB0; } // 800FCAA4
  c->r[0]=0u+0x00000000u; // 800FCAA8
  goto L_800FCAC0; // 800FCAAC
L_800FCAB0:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCAB0
  c->r[0]=0u+0x000000FFu; // 800FCAB4
  if (crb(c,1)) { goto L_800FCAC0; } // 800FCAB8
  c->r[0]=c->r[6]|c->r[6]; // 800FCABC
L_800FCAC0:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FCAC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000008u); // 800FCAC4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800FCAC8
  c->r[7]=c->r[0]+c->r[6]; // 800FCACC
  c->r[8]=c->r[0]-c->r[6]; // 800FCAD0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Au); // 800FCAD4
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 800FCAD8
  c->r[0]=sraw(c,c->r[6],1); // 800FCADC
  c->r[10]=c->r[0]-c->r[9]; // 800FCAE0
  c->r[0]=sraw(c,c->r[9],1); // 800FCAE4
  c->r[9]=c->r[6]+c->r[0]; // 800FCAE8
  c->r[0]=c->r[7]+c->r[9]; // 800FCAEC
  c->r[0]=sraw(c,c->r[0],6); // 800FCAF0
  {uint32_t ea=c->r[4]+c->r[5]; c->r[6]=R8(ea); c->r[4]=ea;} // 800FCAF4
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCAF8
  if (!crb(c,0)) { goto L_800FCB08; } // 800FCAFC
  c->r[0]=0u+0x00000000u; // 800FCB00
  goto L_800FCB18; // 800FCB04
L_800FCB08:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCB08
  c->r[0]=0u+0x000000FFu; // 800FCB0C
  if (crb(c,1)) { goto L_800FCB18; } // 800FCB10
  c->r[0]=c->r[6]|c->r[6]; // 800FCB14
L_800FCB18:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FCB18
  c->r[0]=c->r[8]+c->r[10]; // 800FCB1C
  c->r[0]=sraw(c,c->r[0],6); // 800FCB20
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FCB24
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCB28
  if (!crb(c,0)) { goto L_800FCB38; } // 800FCB2C
  c->r[0]=0u+0x00000000u; // 800FCB30
  goto L_800FCB48; // 800FCB34
L_800FCB38:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCB38
  c->r[0]=0u+0x000000FFu; // 800FCB3C
  if (crb(c,1)) { goto L_800FCB48; } // 800FCB40
  c->r[0]=c->r[6]|c->r[6]; // 800FCB44
L_800FCB48:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FCB48
  c->r[0]=c->r[8]-c->r[10]; // 800FCB4C
  c->r[0]=sraw(c,c->r[0],6); // 800FCB50
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FCB54
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCB58
  if (!crb(c,0)) { goto L_800FCB68; } // 800FCB5C
  c->r[0]=0u+0x00000000u; // 800FCB60
  goto L_800FCB78; // 800FCB64
L_800FCB68:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCB68
  c->r[0]=0u+0x000000FFu; // 800FCB6C
  if (crb(c,1)) { goto L_800FCB78; } // 800FCB70
  c->r[0]=c->r[6]|c->r[6]; // 800FCB74
L_800FCB78:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FCB78
  c->r[0]=c->r[7]-c->r[9]; // 800FCB7C
  c->r[0]=sraw(c,c->r[0],6); // 800FCB80
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FCB84
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCB88
  if (!crb(c,0)) { goto L_800FCB98; } // 800FCB8C
  c->r[0]=0u+0x00000000u; // 800FCB90
  goto L_800FCBA8; // 800FCB94
L_800FCB98:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCB98
  c->r[0]=0u+0x000000FFu; // 800FCB9C
  if (crb(c,1)) { goto L_800FCBA8; } // 800FCBA0
  c->r[0]=c->r[6]|c->r[6]; // 800FCBA4
L_800FCBA8:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FCBA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 800FCBAC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000014u); // 800FCBB0
  c->r[7]=c->r[0]+c->r[6]; // 800FCBB4
  c->r[8]=c->r[0]-c->r[6]; // 800FCBB8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 800FCBBC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000016u); // 800FCBC0
  c->r[0]=sraw(c,c->r[6],1); // 800FCBC4
  c->r[10]=c->r[0]-c->r[9]; // 800FCBC8
  c->r[0]=sraw(c,c->r[9],1); // 800FCBCC
  c->r[9]=c->r[6]+c->r[0]; // 800FCBD0
  c->r[0]=c->r[7]+c->r[9]; // 800FCBD4
  c->r[0]=sraw(c,c->r[0],6); // 800FCBD8
  {uint32_t ea=c->r[4]+c->r[5]; c->r[6]=R8(ea); c->r[4]=ea;} // 800FCBDC
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCBE0
  if (!crb(c,0)) { goto L_800FCBF0; } // 800FCBE4
  c->r[0]=0u+0x00000000u; // 800FCBE8
  goto L_800FCC00; // 800FCBEC
L_800FCBF0:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCBF0
  c->r[0]=0u+0x000000FFu; // 800FCBF4
  if (crb(c,1)) { goto L_800FCC00; } // 800FCBF8
  c->r[0]=c->r[6]|c->r[6]; // 800FCBFC
L_800FCC00:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FCC00
  c->r[0]=c->r[8]+c->r[10]; // 800FCC04
  c->r[0]=sraw(c,c->r[0],6); // 800FCC08
  c->r[6]=R8(c->r[4]+0x00000001u); // 800FCC0C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCC10
  if (!crb(c,0)) { goto L_800FCC20; } // 800FCC14
  c->r[0]=0u+0x00000000u; // 800FCC18
  goto L_800FCC30; // 800FCC1C
L_800FCC20:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCC20
  c->r[0]=0u+0x000000FFu; // 800FCC24
  if (crb(c,1)) { goto L_800FCC30; } // 800FCC28
  c->r[0]=c->r[6]|c->r[6]; // 800FCC2C
L_800FCC30:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FCC30
  c->r[0]=c->r[8]-c->r[10]; // 800FCC34
  c->r[0]=sraw(c,c->r[0],6); // 800FCC38
  c->r[6]=R8(c->r[4]+0x00000002u); // 800FCC3C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCC40
  if (!crb(c,0)) { goto L_800FCC50; } // 800FCC44
  c->r[0]=0u+0x00000000u; // 800FCC48
  goto L_800FCC60; // 800FCC4C
L_800FCC50:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCC50
  c->r[0]=0u+0x000000FFu; // 800FCC54
  if (crb(c,1)) { goto L_800FCC60; } // 800FCC58
  c->r[0]=c->r[6]|c->r[6]; // 800FCC5C
L_800FCC60:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FCC60
  c->r[0]=c->r[7]-c->r[9]; // 800FCC64
  c->r[0]=sraw(c,c->r[0],6); // 800FCC68
  c->r[6]=R8(c->r[4]+0x00000003u); // 800FCC6C
  c->r[6]=c->r[6]+c->r[0]; cr0(c,c->r[6]); // 800FCC70
  if (!crb(c,0)) { goto L_800FCC80; } // 800FCC74
  c->r[0]=0u+0x00000000u; // 800FCC78
  goto L_800FCC90; // 800FCC7C
L_800FCC80:;
  cmps(c,0,(int32_t)c->r[6],255); // 800FCC80
  c->r[0]=0u+0x000000FFu; // 800FCC84
  if (crb(c,1)) { goto L_800FCC90; } // 800FCC88
  c->r[0]=c->r[6]|c->r[6]; // 800FCC8C
L_800FCC90:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FCC90
  c->r[4]=c->r[4]+c->r[5]; // 800FCC94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000018u); // 800FCC98
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Cu); // 800FCC9C
  c->r[6]=c->r[0]+c->r[5]; // 800FCCA0
  c->r[5]=c->r[0]-c->r[5]; // 800FCCA4
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Au); // 800FCCA8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Eu); // 800FCCAC
  c->r[0]=sraw(c,c->r[7],1); // 800FCCB0
  c->r[8]=c->r[0]-c->r[3]; // 800FCCB4
  c->r[0]=sraw(c,c->r[3],1); // 800FCCB8
  c->r[7]=c->r[7]+c->r[0]; // 800FCCBC
  c->r[0]=c->r[6]+c->r[7]; // 800FCCC0
  c->r[0]=sraw(c,c->r[0],6); // 800FCCC4
  c->r[3]=R8(c->r[4]+0x00000000u); // 800FCCC8
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FCCCC
  if (!crb(c,0)) { goto L_800FCCDC; } // 800FCCD0
  c->r[0]=0u+0x00000000u; // 800FCCD4
  goto L_800FCCEC; // 800FCCD8
L_800FCCDC:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FCCDC
  c->r[0]=0u+0x000000FFu; // 800FCCE0
  if (crb(c,1)) { goto L_800FCCEC; } // 800FCCE4
  c->r[0]=c->r[3]|c->r[3]; // 800FCCE8
L_800FCCEC:;
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FCCEC
  c->r[0]=c->r[5]+c->r[8]; // 800FCCF0
  c->r[0]=sraw(c,c->r[0],6); // 800FCCF4
  c->r[3]=R8(c->r[4]+0x00000001u); // 800FCCF8
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FCCFC
  if (!crb(c,0)) { goto L_800FCD0C; } // 800FCD00
  c->r[0]=0u+0x00000000u; // 800FCD04
  goto L_800FCD1C; // 800FCD08
L_800FCD0C:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FCD0C
  c->r[0]=0u+0x000000FFu; // 800FCD10
  if (crb(c,1)) { goto L_800FCD1C; } // 800FCD14
  c->r[0]=c->r[3]|c->r[3]; // 800FCD18
L_800FCD1C:;
  W8(c->r[4]+0x00000001u,c->r[0]); // 800FCD1C
  c->r[0]=c->r[5]-c->r[8]; // 800FCD20
  c->r[0]=sraw(c,c->r[0],6); // 800FCD24
  c->r[3]=R8(c->r[4]+0x00000002u); // 800FCD28
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FCD2C
  if (!crb(c,0)) { goto L_800FCD3C; } // 800FCD30
  c->r[0]=0u+0x00000000u; // 800FCD34
  goto L_800FCD4C; // 800FCD38
L_800FCD3C:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FCD3C
  c->r[0]=0u+0x000000FFu; // 800FCD40
  if (crb(c,1)) { goto L_800FCD4C; } // 800FCD44
  c->r[0]=c->r[3]|c->r[3]; // 800FCD48
L_800FCD4C:;
  W8(c->r[4]+0x00000002u,c->r[0]); // 800FCD4C
  c->r[0]=c->r[6]-c->r[7]; // 800FCD50
  c->r[0]=sraw(c,c->r[0],6); // 800FCD54
  c->r[3]=R8(c->r[4]+0x00000003u); // 800FCD58
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800FCD5C
  if (!crb(c,0)) { goto L_800FCD6C; } // 800FCD60
  c->r[0]=0u+0x00000000u; // 800FCD64
  goto L_800FCD7C; // 800FCD68
L_800FCD6C:;
  cmps(c,0,(int32_t)c->r[3],255); // 800FCD6C
  c->r[0]=0u+0x000000FFu; // 800FCD70
  if (crb(c,1)) { goto L_800FCD7C; } // 800FCD74
  c->r[0]=c->r[3]|c->r[3]; // 800FCD78
L_800FCD7C:;
  W8(c->r[4]+0x00000003u,c->r[0]); // 800FCD7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCD80
  c->r[1]=c->r[1]+0x00000010u; // 800FCD84
  return; // 800FCD88
}

// fn_800FCD8C
void f_800FCD8C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800FCD8C
  c->r[0]=0u+0x00000002u; // 800FCD90
  c->ctr=c->r[0]; // 800FCD94
L_800FCD98:;
  W16(c->r[3]+0x00000000u,c->r[4]); // 800FCD98
  W16(c->r[3]+0x00000002u,c->r[4]); // 800FCD9C
  W16(c->r[3]+0x00000004u,c->r[4]); // 800FCDA0
  W16(c->r[3]+0x00000006u,c->r[4]); // 800FCDA4
  W16(c->r[3]+0x00000008u,c->r[4]); // 800FCDA8
  W16(c->r[3]+0x0000000Au,c->r[4]); // 800FCDAC
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 800FCDB0
  W16(c->r[3]+0x0000000Eu,c->r[4]); // 800FCDB4
  W16(c->r[3]+0x00000010u,c->r[4]); // 800FCDB8
  W16(c->r[3]+0x00000012u,c->r[4]); // 800FCDBC
  W16(c->r[3]+0x00000014u,c->r[4]); // 800FCDC0
  W16(c->r[3]+0x00000016u,c->r[4]); // 800FCDC4
  W16(c->r[3]+0x00000018u,c->r[4]); // 800FCDC8
  W16(c->r[3]+0x0000001Au,c->r[4]); // 800FCDCC
  W16(c->r[3]+0x0000001Cu,c->r[4]); // 800FCDD0
  W16(c->r[3]+0x0000001Eu,c->r[4]); // 800FCDD4
  W16(c->r[3]+0x00000020u,c->r[4]); // 800FCDD8
  W16(c->r[3]+0x00000022u,c->r[4]); // 800FCDDC
  W16(c->r[3]+0x00000024u,c->r[4]); // 800FCDE0
  W16(c->r[3]+0x00000026u,c->r[4]); // 800FCDE4
  W16(c->r[3]+0x00000028u,c->r[4]); // 800FCDE8
  W16(c->r[3]+0x0000002Au,c->r[4]); // 800FCDEC
  W16(c->r[3]+0x0000002Cu,c->r[4]); // 800FCDF0
  W16(c->r[3]+0x0000002Eu,c->r[4]); // 800FCDF4
  W16(c->r[3]+0x00000030u,c->r[4]); // 800FCDF8
  W16(c->r[3]+0x00000032u,c->r[4]); // 800FCDFC
  W16(c->r[3]+0x00000034u,c->r[4]); // 800FCE00
  W16(c->r[3]+0x00000036u,c->r[4]); // 800FCE04
  W16(c->r[3]+0x00000038u,c->r[4]); // 800FCE08
  W16(c->r[3]+0x0000003Au,c->r[4]); // 800FCE0C
  W16(c->r[3]+0x0000003Cu,c->r[4]); // 800FCE10
  W16(c->r[3]+0x0000003Eu,c->r[4]); // 800FCE14
  c->r[3]=c->r[3]+0x00000040u; // 800FCE18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FCD98; } // 800FCE1C
  return; // 800FCE20
}

// fn_800FCE24
void f_800FCE24(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800FCE24
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FCE28
  W16(c->r[3]+0x00000002u,c->r[0]); // 800FCE2C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800FCE30
  W16(c->r[3]+0x00000006u,c->r[0]); // 800FCE34
  W16(c->r[3]+0x00000008u,c->r[0]); // 800FCE38
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800FCE3C
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 800FCE40
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 800FCE44
  W16(c->r[3]+0x00000010u,c->r[0]); // 800FCE48
  W16(c->r[3]+0x00000012u,c->r[0]); // 800FCE4C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800FCE50
  W16(c->r[3]+0x00000016u,c->r[0]); // 800FCE54
  W16(c->r[3]+0x00000018u,c->r[0]); // 800FCE58
  W16(c->r[3]+0x0000001Au,c->r[0]); // 800FCE5C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800FCE60
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 800FCE64
  return; // 800FCE68
}

// fn_800FCE6C
void f_800FCE6C(Ctx* __restrict c) {
  c->r[4]=0u+0x80100000u; // 800FCE6C
  c->r[4]=c->r[4]+0xFFFFBA34u; // 800FCE70
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FCE74
  c->r[4]=0u+0x80100000u; // 800FCE78
  c->r[4]=c->r[4]+0xFFFFBB98u; // 800FCE7C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FCE80
  c->r[4]=0u+0x80100000u; // 800FCE84
  c->r[4]=c->r[4]+0xFFFFBDD8u; // 800FCE88
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FCE8C
  c->r[4]=0u+0x80100000u; // 800FCE90
  c->r[4]=c->r[4]+0xFFFFB6BCu; // 800FCE94
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800FCE98
  c->r[4]=0u+0x80100000u; // 800FCE9C
  c->r[4]=c->r[4]+0xFFFFCD8Cu; // 800FCEA0
  W32(c->r[3]+0x00000010u,c->r[4]); // 800FCEA4
  c->r[4]=0u+0x80100000u; // 800FCEA8
  c->r[4]=c->r[4]+0xFFFFC1B8u; // 800FCEAC
  W32(c->r[3]+0x00000014u,c->r[4]); // 800FCEB0
  c->r[4]=0u+0x80100000u; // 800FCEB4
  c->r[4]=c->r[4]+0xFFFFC44Cu; // 800FCEB8
  W32(c->r[3]+0x00000018u,c->r[4]); // 800FCEBC
  c->r[4]=0u+0x80100000u; // 800FCEC0
  c->r[4]=c->r[4]+0xFFFFC8ACu; // 800FCEC4
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800FCEC8
  c->r[4]=0u+0x80100000u; // 800FCECC
  c->r[4]=c->r[4]+0xFFFFCE24u; // 800FCED0
  W32(c->r[3]+0x00000020u,c->r[4]); // 800FCED4
  return; // 800FCED8
}

// fn_800FCEDC
void f_800FCEDC(Ctx* __restrict c) {
  c->r[6]=0u+0x80130000u; // 800FCEDC
  c->r[6]=c->r[6]+0x00004A50u; // 800FCEE0
  c->r[5]=0u+0x2AAB0000u; // 800FCEE4
  c->r[0]=c->r[5]+0xFFFFAAABu; // 800FCEE8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 800FCEEC
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 800FCEF0
  c->r[5]=c->r[5]+c->r[0]; // 800FCEF4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)6); // 800FCEF8
  c->r[0]=c->r[4]-c->r[0]; // 800FCEFC
  c->r[7]=c->r[6]+0x00000880u; // 800FCF00
  c->r[9]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800FCF04
  c->r[8]=c->r[6]+0x00000000u; // 800FCF08
  c->r[8]=c->r[8]+c->r[9]; // 800FCF0C
  c->r[9]=0u+0x00000002u; // 800FCF10
  c->ctr=c->r[9]; // 800FCF14
L_800FCF18:;
  c->r[9]=R32(c->r[8]+0x00000000u); // 800FCF18
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF1C
  c->r[9]=R32(c->r[7]+0x00000000u); // 800FCF20
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF24
  c->r[9]=c->r[3]+c->r[9]; // 800FCF28
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCF2C
  c->r[9]=R32(c->r[8]+0x00000004u); // 800FCF30
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF34
  c->r[9]=R32(c->r[7]+0x00000004u); // 800FCF38
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF3C
  c->r[9]=c->r[3]+c->r[9]; // 800FCF40
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCF44
  c->r[9]=R32(c->r[8]+0x00000008u); // 800FCF48
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF4C
  c->r[9]=R32(c->r[7]+0x00000008u); // 800FCF50
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF54
  c->r[9]=c->r[3]+c->r[9]; // 800FCF58
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCF5C
  c->r[9]=R32(c->r[8]+0x0000000Cu); // 800FCF60
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF64
  c->r[9]=R32(c->r[7]+0x0000000Cu); // 800FCF68
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF6C
  c->r[9]=c->r[3]+c->r[9]; // 800FCF70
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCF74
  c->r[9]=R32(c->r[8]+0x00000010u); // 800FCF78
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF7C
  c->r[9]=R32(c->r[7]+0x00000010u); // 800FCF80
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF84
  c->r[9]=c->r[3]+c->r[9]; // 800FCF88
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCF8C
  c->r[9]=R32(c->r[8]+0x00000014u); // 800FCF90
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCF94
  c->r[9]=R32(c->r[7]+0x00000014u); // 800FCF98
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCF9C
  c->r[9]=c->r[3]+c->r[9]; // 800FCFA0
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCFA4
  c->r[9]=R32(c->r[8]+0x00000018u); // 800FCFA8
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCFAC
  c->r[9]=R32(c->r[7]+0x00000018u); // 800FCFB0
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCFB4
  c->r[9]=c->r[3]+c->r[9]; // 800FCFB8
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCFBC
  c->r[9]=R32(c->r[8]+0x0000001Cu); // 800FCFC0
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[9]<<((c->r[5])&31)); // 800FCFC4
  c->r[9]=R32(c->r[7]+0x0000001Cu); // 800FCFC8
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FCFCC
  c->r[9]=c->r[3]+c->r[9]; // 800FCFD0
  W32(c->r[9]+0x000009C0u,c->r[10]); // 800FCFD4
  c->r[8]=c->r[8]+0x00000020u; // 800FCFD8
  c->r[7]=c->r[7]+0x00000020u; // 800FCFDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FCF18; } // 800FCFE0
  c->r[7]=c->r[6]+0x00000780u; // 800FCFE4
  c->r[8]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FCFE8
  c->r[0]=c->r[6]+0x00000180u; // 800FCFEC
  c->r[6]=c->r[0]+c->r[8]; // 800FCFF0
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 800FCFF4
  c->r[5]=0u+0x00000008u; // 800FCFF8
  c->ctr=c->r[5]; // 800FCFFC
L_800FD000:;
  c->r[5]=R32(c->r[6]+0x00000000u); // 800FD000
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD004
  c->r[5]=R32(c->r[7]+0x00000000u); // 800FD008
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD00C
  c->r[5]=c->r[3]+c->r[5]; // 800FD010
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD014
  c->r[5]=R32(c->r[6]+0x00000004u); // 800FD018
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD01C
  c->r[5]=R32(c->r[7]+0x00000004u); // 800FD020
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD024
  c->r[5]=c->r[3]+c->r[5]; // 800FD028
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD02C
  c->r[5]=R32(c->r[6]+0x00000008u); // 800FD030
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD034
  c->r[5]=R32(c->r[7]+0x00000008u); // 800FD038
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD03C
  c->r[5]=c->r[3]+c->r[5]; // 800FD040
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD044
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800FD048
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD04C
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 800FD050
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD054
  c->r[5]=c->r[3]+c->r[5]; // 800FD058
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD05C
  c->r[5]=R32(c->r[6]+0x00000010u); // 800FD060
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD064
  c->r[5]=R32(c->r[7]+0x00000010u); // 800FD068
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD06C
  c->r[5]=c->r[3]+c->r[5]; // 800FD070
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD074
  c->r[5]=R32(c->r[6]+0x00000014u); // 800FD078
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD07C
  c->r[5]=R32(c->r[7]+0x00000014u); // 800FD080
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD084
  c->r[5]=c->r[3]+c->r[5]; // 800FD088
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD08C
  c->r[5]=R32(c->r[6]+0x00000018u); // 800FD090
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD094
  c->r[5]=R32(c->r[7]+0x00000018u); // 800FD098
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD09C
  c->r[5]=c->r[3]+c->r[5]; // 800FD0A0
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD0A4
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 800FD0A8
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD0AC
  c->r[5]=R32(c->r[7]+0x0000001Cu); // 800FD0B0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FD0B4
  c->r[5]=c->r[3]+c->r[5]; // 800FD0B8
  W32(c->r[5]+0x000008C0u,c->r[8]); // 800FD0BC
  c->r[6]=c->r[6]+0x00000020u; // 800FD0C0
  c->r[7]=c->r[7]+0x00000020u; // 800FD0C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FD000; } // 800FD0C8
  W32(c->r[3]+0x00000A00u,c->r[4]); // 800FD0CC
  return; // 800FD0D0
}

// fn_800FD0D4
void f_800FD0D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD0D4
  c->r[10]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FD0D8
  W32(c->r[3]+0x00000A08u,c->r[10]); // 800FD0DC
  c->r[7]=R32(c->r[3]+0x00000A04u); // 800FD0E0
  c->r[9]=addc(c,c->r[7],0xFFFFFFF8u,0); cr0(c,c->r[9]); // 800FD0E4
  W32(c->r[3]+0x00000A04u,c->r[9]); // 800FD0E8
  if (!crb(c,0)) { goto L_800FD118; } // 800FD0EC
  c->r[7]=R32(c->r[3]+0x00000A0Cu); // 800FD0F0
  c->r[8]=__builtin_bswap16(R16(0u+c->r[7])); // 800FD0F4
  c->r[0]=0u-c->r[9]; // 800FD0F8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800FD0FC
  c->r[0]=c->r[10]|c->r[0]; // 800FD100
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD104
  c->r[0]=c->r[7]+0x00000002u; // 800FD108
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD10C
  c->r[0]=c->r[9]+0x00000010u; // 800FD110
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD114
L_800FD118:;
  c->r[0]=R32(c->r[3]+0x00000A14u); // 800FD118
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD11C
  c->r[7]=c->r[3]+c->r[0]; // 800FD120
  c->r[7]=R32(c->r[7]+0x00000A90u); // 800FD124
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD128
  c->r[0]=rotl(c->r[0],13)&0x00001FFEu; // 800FD12C
  c->r[7]=R16(c->r[7]+c->r[0]); // 800FD130
  c->r[10]=rotl(c->r[7],0)&0x0000000Fu; // 800FD134
  c->r[0]=rotl(c->r[7],28)&0x0000001Fu; // 800FD138
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FD13C
  c->r[0]=rotl(c->r[7],23)&0x0000003Fu; // 800FD140
  W32(c->r[5]+0x00000000u,c->r[0]); // 800FD144
  c->r[9]=sraw(c,c->r[7],15); // 800FD148
  W32(c->r[4]+0x00000000u,c->r[9]); // 800FD14C
  c->r[8]=R32(c->r[6]+0x00000000u); // 800FD150
  c->r[0]=R32(c->r[3]+0x00000A14u); // 800FD154
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD158
  c->r[4]=c->r[3]+c->r[0]; // 800FD15C
  c->r[7]=R32(c->r[4]+0x00000A98u); // 800FD160
  c->r[0]=R32(c->r[5]+0x00000000u); // 800FD164
  c->r[4]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FD168
  c->r[0]=c->r[7]+c->r[0]; // 800FD16C
  c->r[0]=R8(c->r[4]+c->r[0]); // 800FD170
  c->r[5]=c->r[8]+c->r[0]; // 800FD174
  W32(c->r[6]+0x00000000u,c->r[5]); // 800FD178
  c->r[4]=R32(c->r[3]+0x00000A08u); // 800FD17C
  c->r[0]=addc(c,~c->r[10],0x00000020u,1); // 800FD180
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 800FD184
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800FD188
  if (crb(c,2)) { goto L_800FD198; } // 800FD18C
  c->r[0]=0u-c->r[5]; // 800FD190
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FD194
L_800FD198:;
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD198
  c->r[7]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 800FD19C
  W32(c->r[3]+0x00000A08u,c->r[7]); // 800FD1A0
  c->r[0]=R32(c->r[3]+0x00000A04u); // 800FD1A4
  c->r[6]=c->r[0]-c->r[10]; cr0(c,c->r[6]); // 800FD1A8
  W32(c->r[3]+0x00000A04u,c->r[6]); // 800FD1AC
  if (!crb(c,0)) return; // 800FD1B0
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD1B4
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD1B8
  c->r[0]=0u-c->r[6]; // 800FD1BC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD1C0
  c->r[0]=c->r[7]|c->r[0]; // 800FD1C4
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD1C8
  c->r[0]=c->r[4]+0x00000002u; // 800FD1CC
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD1D0
  c->r[0]=c->r[6]+0x00000010u; // 800FD1D4
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD1D8
  return; // 800FD1DC
}

// fn_800FD1E0
void f_800FD1E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD1E0
  c->r[10]=rotl(c->r[0],9)&0xFFFFFE00u; // 800FD1E4
  W32(c->r[3]+0x00000A08u,c->r[10]); // 800FD1E8
  c->r[7]=R32(c->r[3]+0x00000A04u); // 800FD1EC
  c->r[9]=addc(c,c->r[7],0xFFFFFFF7u,0); cr0(c,c->r[9]); // 800FD1F0
  W32(c->r[3]+0x00000A04u,c->r[9]); // 800FD1F4
  if (!crb(c,0)) { goto L_800FD224; } // 800FD1F8
  c->r[7]=R32(c->r[3]+0x00000A0Cu); // 800FD1FC
  c->r[8]=__builtin_bswap16(R16(0u+c->r[7])); // 800FD200
  c->r[0]=0u-c->r[9]; // 800FD204
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800FD208
  c->r[0]=c->r[10]|c->r[0]; // 800FD20C
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD210
  c->r[0]=c->r[7]+0x00000002u; // 800FD214
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD218
  c->r[0]=c->r[9]+0x00000010u; // 800FD21C
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD220
L_800FD224:;
  c->r[0]=R32(c->r[3]+0x00000A14u); // 800FD224
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD228
  c->r[7]=c->r[3]+c->r[0]; // 800FD22C
  c->r[7]=R32(c->r[7]+0x00000A90u); // 800FD230
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD234
  c->r[0]=rotl(c->r[0],13)&0x00001FFEu; // 800FD238
  c->r[7]=R16(c->r[7]+c->r[0]); // 800FD23C
  c->r[10]=rotl(c->r[7],0)&0x0000000Fu; // 800FD240
  c->r[0]=rotl(c->r[7],28)&0x0000001Fu; // 800FD244
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FD248
  c->r[0]=rotl(c->r[7],23)&0x0000003Fu; // 800FD24C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800FD250
  c->r[9]=sraw(c,c->r[7],15); // 800FD254
  W32(c->r[4]+0x00000000u,c->r[9]); // 800FD258
  c->r[8]=R32(c->r[5]+0x00000000u); // 800FD25C
  c->r[0]=R32(c->r[3]+0x00000A14u); // 800FD260
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD264
  c->r[4]=c->r[3]+c->r[0]; // 800FD268
  c->r[7]=R32(c->r[4]+0x00000AA0u); // 800FD26C
  c->r[0]=R32(c->r[6]+0x00000000u); // 800FD270
  c->r[4]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FD274
  c->r[0]=c->r[7]+c->r[0]; // 800FD278
  c->r[0]=R8(c->r[4]+c->r[0]); // 800FD27C
  c->r[0]=c->r[8]+c->r[0]; // 800FD280
  W32(c->r[5]+0x00000000u,c->r[0]); // 800FD284
  c->r[4]=R32(c->r[3]+0x00000A08u); // 800FD288
  c->r[0]=addc(c,~c->r[10],0x00000020u,1); // 800FD28C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 800FD290
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800FD294
  if (crb(c,2)) { goto L_800FD2A8; } // 800FD298
  c->r[0]=R32(c->r[6]+0x00000000u); // 800FD29C
  c->r[0]=0u-c->r[0]; // 800FD2A0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FD2A4
L_800FD2A8:;
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD2A8
  c->r[7]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 800FD2AC
  W32(c->r[3]+0x00000A08u,c->r[7]); // 800FD2B0
  c->r[0]=R32(c->r[3]+0x00000A04u); // 800FD2B4
  c->r[6]=c->r[0]-c->r[10]; cr0(c,c->r[6]); // 800FD2B8
  W32(c->r[3]+0x00000A04u,c->r[6]); // 800FD2BC
  if (!crb(c,0)) return; // 800FD2C0
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD2C4
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD2C8
  c->r[0]=0u-c->r[6]; // 800FD2CC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD2D0
  c->r[0]=c->r[7]|c->r[0]; // 800FD2D4
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD2D8
  c->r[0]=c->r[4]+0x00000002u; // 800FD2DC
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD2E0
  c->r[0]=c->r[6]+0x00000010u; // 800FD2E4
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD2E8
  return; // 800FD2EC
}

// fn_800FD2F0
void f_800FD2F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD2F0
  c->r[10]=rotl(c->r[0],9)&0xFFFFFE00u; // 800FD2F4
  W32(c->r[3]+0x00000A08u,c->r[10]); // 800FD2F8
  c->r[7]=R32(c->r[3]+0x00000A04u); // 800FD2FC
  c->r[9]=addc(c,c->r[7],0xFFFFFFF7u,0); cr0(c,c->r[9]); // 800FD300
  W32(c->r[3]+0x00000A04u,c->r[9]); // 800FD304
  if (!crb(c,0)) { goto L_800FD334; } // 800FD308
  c->r[7]=R32(c->r[3]+0x00000A0Cu); // 800FD30C
  c->r[8]=__builtin_bswap16(R16(0u+c->r[7])); // 800FD310
  c->r[0]=0u-c->r[9]; // 800FD314
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800FD318
  c->r[0]=c->r[10]|c->r[0]; // 800FD31C
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD320
  c->r[0]=c->r[7]+0x00000002u; // 800FD324
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD328
  c->r[0]=c->r[9]+0x00000010u; // 800FD32C
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD330
L_800FD334:;
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD334
  c->r[11]=rotl(c->r[0],1)&0x00000001u; // 800FD338
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD33C
  c->r[10]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FD340
  W32(c->r[3]+0x00000A08u,c->r[10]); // 800FD344
  c->r[7]=R32(c->r[3]+0x00000A04u); // 800FD348
  c->r[9]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 800FD34C
  W32(c->r[3]+0x00000A04u,c->r[9]); // 800FD350
  if (!crb(c,0)) { goto L_800FD380; } // 800FD354
  c->r[7]=R32(c->r[3]+0x00000A0Cu); // 800FD358
  c->r[8]=__builtin_bswap16(R16(0u+c->r[7])); // 800FD35C
  c->r[0]=0u-c->r[9]; // 800FD360
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800FD364
  c->r[0]=c->r[10]|c->r[0]; // 800FD368
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD36C
  c->r[0]=c->r[7]+0x00000002u; // 800FD370
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD374
  c->r[0]=c->r[9]+0x00000010u; // 800FD378
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD37C
L_800FD380:;
  W32(c->r[4]+0x00000000u,c->r[11]); // 800FD380
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD384
  c->r[10]=rotl(c->r[0],6)&0x0000003Fu; // 800FD388
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD38C
  c->r[9]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800FD390
  W32(c->r[3]+0x00000A08u,c->r[9]); // 800FD394
  c->r[4]=R32(c->r[3]+0x00000A04u); // 800FD398
  c->r[8]=addc(c,c->r[4],0xFFFFFFFAu,0); cr0(c,c->r[8]); // 800FD39C
  W32(c->r[3]+0x00000A04u,c->r[8]); // 800FD3A0
  if (!crb(c,0)) { goto L_800FD3D0; } // 800FD3A4
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD3A8
  c->r[7]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD3AC
  c->r[0]=0u-c->r[8]; // 800FD3B0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]<<((c->r[0])&31)); // 800FD3B4
  c->r[0]=c->r[9]|c->r[0]; // 800FD3B8
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD3BC
  c->r[0]=c->r[4]+0x00000002u; // 800FD3C0
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD3C4
  c->r[0]=c->r[8]+0x00000010u; // 800FD3C8
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD3CC
L_800FD3D0:;
  W32(c->r[5]+0x00000000u,c->r[10]); // 800FD3D0
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD3D4
  c->r[0]=sraw(c,c->r[0],20); // 800FD3D8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FD3DC
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD3E0
  c->r[7]=rotl(c->r[0],12)&0xFFFFF000u; // 800FD3E4
  W32(c->r[3]+0x00000A08u,c->r[7]); // 800FD3E8
  c->r[4]=R32(c->r[3]+0x00000A04u); // 800FD3EC
  c->r[6]=addc(c,c->r[4],0xFFFFFFF4u,0); cr0(c,c->r[6]); // 800FD3F0
  W32(c->r[3]+0x00000A04u,c->r[6]); // 800FD3F4
  if (!crb(c,0)) return; // 800FD3F8
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD3FC
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD400
  c->r[0]=0u-c->r[6]; // 800FD404
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD408
  c->r[0]=c->r[7]|c->r[0]; // 800FD40C
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD410
  c->r[0]=c->r[4]+0x00000002u; // 800FD414
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD418
  c->r[0]=c->r[6]+0x00000010u; // 800FD41C
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD420
  return; // 800FD424
}

// fn_800FD428
void f_800FD428(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000F74u); // 800FD428
  c->r[4]=0u+0x80200000u; // 800FD42C
  W32(c->r[4]+0x00002418u,c->r[0]); // 800FD430
  c->r[0]=R32(c->r[3]+0x00000F78u); // 800FD434
  c->r[4]=c->r[4]+0x00002418u; // 800FD438
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FD43C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FD440
  c->r[0]=R32(c->r[3]+0x00000F7Cu); // 800FD444
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FD448
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FD44C
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FD450
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FD454
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800FD458
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FD45C
  W32(c->r[4]+0x00000024u,c->r[0]); // 800FD460
  c->r[0]=R32(c->r[3]+0x00000F88u); // 800FD464
  c->r[4]=0u+0x80200000u; // 800FD468
  W32(c->r[4]+0x00002440u,c->r[0]); // 800FD46C
  c->r[0]=R32(c->r[3]+0x00000F8Cu); // 800FD470
  c->r[4]=c->r[4]+0x00002440u; // 800FD474
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FD478
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FD47C
  c->r[0]=R32(c->r[3]+0x00000F90u); // 800FD480
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FD484
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FD488
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FD48C
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FD490
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800FD494
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FD498
  W32(c->r[4]+0x00000024u,c->r[0]); // 800FD49C
  W32(c->r[4]+0x00000028u,c->r[0]); // 800FD4A0
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 800FD4A4
  W32(c->r[4]+0x00000030u,c->r[0]); // 800FD4A8
  W32(c->r[4]+0x00000034u,c->r[0]); // 800FD4AC
  W32(c->r[4]+0x00000038u,c->r[0]); // 800FD4B0
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 800FD4B4
  return; // 800FD4B8
}

// fn_800FD4BC
void f_800FD4BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD4BC
  c->r[0]=c->lr; // 800FD4C0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800FD4C4
  c->r[11]=c->r[1]+0x000000E0u; // 800FD4C8
  c->lr=0x800FD4D0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD4CC
  c->r[25]=c->r[3]|c->r[3]; // 800FD4D0
  c->r[26]=c->r[4]|c->r[4]; // 800FD4D4
  c->r[27]=c->r[5]|c->r[5]; // 800FD4D8
  c->r[0]=c->r[1]+0x00000027u; // 800FD4DC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFF0u; // 800FD4E0
  c->r[3]=c->r[30]|c->r[30]; // 800FD4E4
  c->r[12]=R32(c->r[25]+0x00000F84u); // 800FD4E8
  c->ctr=c->r[12]; // 800FD4EC
  if (true) { c->lr=0x800FD4F4u; dispatch(c,c->ctr); } // 800FD4F0
  c->r[29]=c->r[25]+0x000008C0u; // 800FD4F4
  c->r[28]=0u+0x80130000u; // 800FD4F8
  c->r[28]=c->r[28]+0x000055A8u; // 800FD4FC
  c->r[31]=0u+0x80130000u; // 800FD500
  c->r[31]=c->r[31]+0x00005598u; // 800FD504
L_800FD508:;
  c->r[4]=R32(c->r[25]+0x00000A08u); // 800FD508
  c->r[0]=rotl(c->r[4],7)&0x0000007Fu; // 800FD50C
  cmpu(c,0,c->r[0],0x00000003u); // 800FD510
  if (!crb(c,2)) { goto L_800FD540; } // 800FD514
  c->r[3]=c->r[25]|c->r[25]; // 800FD518
  c->r[4]=c->r[1]+0x00000010u; // 800FD51C
  c->r[5]=c->r[1]+0x0000000Cu; // 800FD520
  c->r[6]=c->r[1]+0x00000008u; // 800FD524
  c->r[0]=R32(c->r[25]+0x00000A08u); // 800FD528
  c->r[0]=rotl(c->r[0],11)&0x0000000Cu; // 800FD52C
  c->r[12]=R32(c->r[31]+c->r[0]); // 800FD530
  c->ctr=c->r[12]; // 800FD534
  if (true) { c->lr=0x800FD53Cu; dispatch(c,c->ctr); } // 800FD538
  goto L_800FD5D0; // 800FD53C
L_800FD540:;
  c->r[0]=R32(c->r[25]+0x00000A14u); // 800FD540
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD544
  c->r[3]=c->r[25]+c->r[0]; // 800FD548
  c->r[3]=R32(c->r[3]+0x00000A90u); // 800FD54C
  c->r[0]=rotl(c->r[4],13)&0x00001FFEu; // 800FD550
  c->r[5]=R16(c->r[3]+c->r[0]); // 800FD554
  c->r[7]=rotl(c->r[5],0)&0x0000000Fu; // 800FD558
  c->r[3]=rotl(c->r[5],28)&0x0000001Fu; // 800FD55C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FD560
  c->r[0]=rotl(c->r[5],23)&0x0000003Fu; // 800FD564
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FD568
  c->r[0]=sraw(c,c->r[5],15); // 800FD56C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD570
  c->r[0]=addc(c,~c->r[7],0x00000020u,1); // 800FD574
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 800FD578
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800FD57C
  if (crb(c,2)) { goto L_800FD58C; } // 800FD580
  c->r[0]=0u-c->r[3]; // 800FD584
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FD588
L_800FD58C:;
  c->r[0]=R32(c->r[25]+0x00000A08u); // 800FD58C
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800FD590
  W32(c->r[25]+0x00000A08u,c->r[6]); // 800FD594
  c->r[0]=R32(c->r[25]+0x00000A04u); // 800FD598
  c->r[5]=c->r[0]-c->r[7]; cr0(c,c->r[5]); // 800FD59C
  W32(c->r[25]+0x00000A04u,c->r[5]); // 800FD5A0
  if (!crb(c,0)) { goto L_800FD5D0; } // 800FD5A4
  c->r[3]=R32(c->r[25]+0x00000A0Cu); // 800FD5A8
  c->r[4]=__builtin_bswap16(R16(0u+c->r[3])); // 800FD5AC
  c->r[0]=0u-c->r[5]; // 800FD5B0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800FD5B4
  c->r[0]=c->r[6]|c->r[0]; // 800FD5B8
  W32(c->r[25]+0x00000A08u,c->r[0]); // 800FD5BC
  c->r[0]=c->r[3]+0x00000002u; // 800FD5C0
  W32(c->r[25]+0x00000A0Cu,c->r[0]); // 800FD5C4
  c->r[0]=c->r[5]+0x00000010u; // 800FD5C8
  W32(c->r[25]+0x00000A04u,c->r[0]); // 800FD5CC
L_800FD5D0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800FD5D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD5D4
  c->r[28]=c->r[28]+c->r[0]; // 800FD5D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800FD5DC
  {uint32_t ea=c->r[29]+c->r[0]; c->r[0]=R32(ea); c->r[29]=ea;} // 800FD5E0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800FD5E4
  c->r[0]=R32(c->r[28]+0x00000000u); // 800FD5E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FD5EC
  W16(c->r[30]+c->r[0],c->r[3]); // 800FD5F0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800FD5F4
  cmps(c,0,(int32_t)c->r[0],0); // 800FD5F8
  c->r[29]=c->r[29]+0x00000004u; // 800FD5FC
  c->r[28]=c->r[28]+0x00000004u; // 800FD600
  if (crb(c,2)) { IRQCHK(c); goto L_800FD508; } // 800FD604
  c->r[3]=0u+0x80130000u; // 800FD608
  c->r[3]=c->r[3]+0x000055A8u; // 800FD60C
  c->r[0]=c->r[28]-c->r[3]; // 800FD610
  c->r[0]=sraw(c,c->r[0],2); // 800FD614
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 800FD618
  cmps(c,0,(int32_t)c->r[6],10); // 800FD61C
  if (crb(c,1)) { goto L_800FD650; } // 800FD620
  c->r[3]=c->r[30]|c->r[30]; // 800FD624
  c->r[4]=c->r[26]|c->r[26]; // 800FD628
  c->r[5]=c->r[27]|c->r[27]; // 800FD62C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FD630
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD634
  c->r[6]=0u+0x80200000u; // 800FD638
  c->r[6]=c->r[6]+0x00002418u; // 800FD63C
  c->r[12]=R32(c->r[6]+c->r[0]); // 800FD640
  c->ctr=c->r[12]; // 800FD644
  if (true) { c->lr=0x800FD64Cu; dispatch(c,c->ctr); } // 800FD648
  goto L_800FD668; // 800FD64C
L_800FD650:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD650
  c->r[4]=c->r[26]|c->r[26]; // 800FD654
  c->r[5]=c->r[27]|c->r[27]; // 800FD658
  c->r[12]=R32(c->r[25]+0x00000F80u); // 800FD65C
  c->ctr=c->r[12]; // 800FD660
  if (true) { c->lr=0x800FD668u; dispatch(c,c->ctr); } // 800FD664
L_800FD668:;
  c->r[11]=c->r[1]+0x000000E0u; // 800FD668
  c->lr=0x800FD670u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FD66C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800FD670
  c->lr=c->r[0]; // 800FD674
  c->r[1]=c->r[1]+0x000000E0u; // 800FD678
  return; // 800FD67C
}

// fn_800FD680
void f_800FD680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD680
  c->r[0]=c->lr; // 800FD684
  W32(c->r[1]+0x00000064u,c->r[0]); // 800FD688
  c->r[11]=c->r[1]+0x00000060u; // 800FD68C
  c->lr=0x800FD694u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD690
  c->r[26]=c->r[3]|c->r[3]; // 800FD694
  c->r[27]=c->r[4]|c->r[4]; // 800FD698
  c->r[28]=c->r[5]|c->r[5]; // 800FD69C
  c->r[3]=c->r[1]+0x00000018u; // 800FD6A0
  c->r[12]=R32(c->r[26]+0x00000F94u); // 800FD6A4
  c->ctr=c->r[12]; // 800FD6A8
  if (true) { c->lr=0x800FD6B0u; dispatch(c,c->ctr); } // 800FD6AC
  c->r[30]=c->r[26]+0x000009C0u; // 800FD6B0
  c->r[29]=0u+0x80130000u; // 800FD6B4
  c->r[29]=c->r[29]+0x000056A8u; // 800FD6B8
  c->r[31]=0u+0x80130000u; // 800FD6BC
  c->r[31]=c->r[31]+0x00005598u; // 800FD6C0
  c->r[25]=c->r[1]+0x00000018u; // 800FD6C4
L_800FD6C8:;
  c->r[4]=R32(c->r[26]+0x00000A08u); // 800FD6C8
  c->r[0]=rotl(c->r[4],7)&0x0000007Fu; // 800FD6CC
  cmpu(c,0,c->r[0],0x00000003u); // 800FD6D0
  if (!crb(c,2)) { goto L_800FD700; } // 800FD6D4
  c->r[3]=c->r[26]|c->r[26]; // 800FD6D8
  c->r[4]=c->r[1]+0x00000010u; // 800FD6DC
  c->r[5]=c->r[1]+0x0000000Cu; // 800FD6E0
  c->r[6]=c->r[1]+0x00000008u; // 800FD6E4
  c->r[0]=R32(c->r[26]+0x00000A08u); // 800FD6E8
  c->r[0]=rotl(c->r[0],11)&0x0000000Cu; // 800FD6EC
  c->r[12]=R32(c->r[31]+c->r[0]); // 800FD6F0
  c->ctr=c->r[12]; // 800FD6F4
  if (true) { c->lr=0x800FD6FCu; dispatch(c,c->ctr); } // 800FD6F8
  goto L_800FD790; // 800FD6FC
L_800FD700:;
  c->r[0]=R32(c->r[26]+0x00000A14u); // 800FD700
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD704
  c->r[3]=c->r[26]+c->r[0]; // 800FD708
  c->r[3]=R32(c->r[3]+0x00000A90u); // 800FD70C
  c->r[0]=rotl(c->r[4],13)&0x00001FFEu; // 800FD710
  c->r[5]=R16(c->r[3]+c->r[0]); // 800FD714
  c->r[7]=rotl(c->r[5],0)&0x0000000Fu; // 800FD718
  c->r[3]=rotl(c->r[5],28)&0x0000001Fu; // 800FD71C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FD720
  c->r[0]=rotl(c->r[5],23)&0x0000003Fu; // 800FD724
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FD728
  c->r[0]=sraw(c,c->r[5],15); // 800FD72C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FD730
  c->r[0]=addc(c,~c->r[7],0x00000020u,1); // 800FD734
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 800FD738
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800FD73C
  if (crb(c,2)) { goto L_800FD74C; } // 800FD740
  c->r[0]=0u-c->r[3]; // 800FD744
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FD748
L_800FD74C:;
  c->r[0]=R32(c->r[26]+0x00000A08u); // 800FD74C
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800FD750
  W32(c->r[26]+0x00000A08u,c->r[6]); // 800FD754
  c->r[0]=R32(c->r[26]+0x00000A04u); // 800FD758
  c->r[5]=c->r[0]-c->r[7]; cr0(c,c->r[5]); // 800FD75C
  W32(c->r[26]+0x00000A04u,c->r[5]); // 800FD760
  if (!crb(c,0)) { goto L_800FD790; } // 800FD764
  c->r[3]=R32(c->r[26]+0x00000A0Cu); // 800FD768
  c->r[4]=__builtin_bswap16(R16(0u+c->r[3])); // 800FD76C
  c->r[0]=0u-c->r[5]; // 800FD770
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800FD774
  c->r[0]=c->r[6]|c->r[0]; // 800FD778
  W32(c->r[26]+0x00000A08u,c->r[0]); // 800FD77C
  c->r[0]=c->r[3]+0x00000002u; // 800FD780
  W32(c->r[26]+0x00000A0Cu,c->r[0]); // 800FD784
  c->r[0]=c->r[5]+0x00000010u; // 800FD788
  W32(c->r[26]+0x00000A04u,c->r[0]); // 800FD78C
L_800FD790:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800FD790
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD794
  c->r[29]=c->r[29]+c->r[0]; // 800FD798
  c->r[3]=R32(c->r[1]+0x00000008u); // 800FD79C
  {uint32_t ea=c->r[30]+c->r[0]; c->r[0]=R32(ea); c->r[30]=ea;} // 800FD7A0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800FD7A4
  c->r[0]=R32(c->r[29]+0x00000000u); // 800FD7A8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FD7AC
  W16(c->r[25]+c->r[0],c->r[3]); // 800FD7B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800FD7B4
  cmps(c,0,(int32_t)c->r[0],0); // 800FD7B8
  c->r[30]=c->r[30]+0x00000004u; // 800FD7BC
  c->r[29]=c->r[29]+0x00000004u; // 800FD7C0
  if (crb(c,2)) { IRQCHK(c); goto L_800FD6C8; } // 800FD7C4
  c->r[3]=c->r[25]|c->r[25]; // 800FD7C8
  c->r[4]=c->r[27]|c->r[27]; // 800FD7CC
  c->r[5]=c->r[28]|c->r[28]; // 800FD7D0
  c->r[6]=0u+0x80130000u; // 800FD7D4
  c->r[6]=c->r[6]+0x000056A8u; // 800FD7D8
  c->r[0]=c->r[29]-c->r[6]; // 800FD7DC
  c->r[0]=sraw(c,c->r[0],2); // 800FD7E0
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 800FD7E4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FD7E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD7EC
  c->r[6]=0u+0x80200000u; // 800FD7F0
  c->r[6]=c->r[6]+0x00002440u; // 800FD7F4
  c->r[12]=R32(c->r[6]+c->r[0]); // 800FD7F8
  c->ctr=c->r[12]; // 800FD7FC
  if (true) { c->lr=0x800FD804u; dispatch(c,c->ctr); } // 800FD800
  c->r[11]=c->r[1]+0x00000060u; // 800FD804
  c->lr=0x800FD80Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FD808
  c->r[0]=R32(c->r[1]+0x00000064u); // 800FD80C
  c->lr=c->r[0]; // 800FD810
  c->r[1]=c->r[1]+0x00000060u; // 800FD814
  return; // 800FD818
}

// fn_800FD81C
void f_800FD81C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD81C
  c->r[0]=c->lr; // 800FD820
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD824
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD828
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FD82C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FD830
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FD834
  c->r[29]=c->r[3]|c->r[3]; // 800FD838
  c->r[30]=c->r[4]|c->r[4]; // 800FD83C
  c->r[31]=c->r[5]|c->r[5]; // 800FD840
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD844
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800FD848
  if (!crb(c,2)) { goto L_800FD940; } // 800FD84C
  c->r[5]=R32(c->r[3]+0x00000A08u); // 800FD850
  c->r[0]=rotl(c->r[5],13)&0x00001FFFu; // 800FD854
  c->r[4]=0u+0x80160000u; // 800FD858
  c->r[4]=c->r[4]+0x00001028u; // 800FD85C
  c->r[9]=R8(c->r[4]+c->r[0]); // 800FD860
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FD864
  c->r[4]=0u+0x80160000u; // 800FD868
  c->r[4]=c->r[4]+0x00003028u; // 800FD86C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800FD870
  c->r[8]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800FD874
  W32(c->r[3]+0x00000A08u,c->r[8]); // 800FD878
  c->r[0]=R32(c->r[3]+0x00000A04u); // 800FD87C
  c->r[7]=c->r[0]-c->r[4]; cr0(c,c->r[7]); // 800FD880
  W32(c->r[3]+0x00000A04u,c->r[7]); // 800FD884
  if (!crb(c,0)) { goto L_800FD8B4; } // 800FD888
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD88C
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD890
  c->r[0]=0u-c->r[7]; // 800FD894
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD898
  c->r[0]=c->r[8]|c->r[0]; // 800FD89C
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD8A0
  c->r[0]=c->r[4]+0x00000002u; // 800FD8A4
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD8A8
  c->r[0]=c->r[7]+0x00000010u; // 800FD8AC
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD8B0
L_800FD8B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)68); // 800FD8B4
  c->r[4]=0u+0x80130000u; // 800FD8B8
  c->r[4]=c->r[4]+0x00005510u; // 800FD8BC
  c->r[3]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FD8C0
  c->r[0]=c->r[4]+c->r[0]; // 800FD8C4
  c->r[28]=R32(c->r[3]+c->r[0]); // 800FD8C8
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 800FD8CC
  if (crb(c,2)) { goto L_800FD8E4; } // 800FD8D0
  c->r[3]=c->r[29]|c->r[29]; // 800FD8D4
  c->r[4]=c->r[30]|c->r[30]; // 800FD8D8
  c->r[5]=c->r[31]|c->r[31]; // 800FD8DC
  c->lr=0x800FD8E4u; f_800FD680(c); // 800FD8E0
L_800FD8E4:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 800FD8E4
  c->r[30]=c->r[30]+0x00000004u; // 800FD8E8
  if (crb(c,2)) { goto L_800FD900; } // 800FD8EC
  c->r[3]=c->r[29]|c->r[29]; // 800FD8F0
  c->r[4]=c->r[30]|c->r[30]; // 800FD8F4
  c->r[5]=c->r[31]|c->r[31]; // 800FD8F8
  c->lr=0x800FD900u; f_800FD680(c); // 800FD8FC
L_800FD900:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800FD900
  c->r[3]=c->r[0]+c->r[30]; // 800FD904
  c->r[30]=c->r[3]+0xFFFFFFFCu; // 800FD908
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 800FD90C
  if (crb(c,2)) { goto L_800FD924; } // 800FD910
  c->r[3]=c->r[29]|c->r[29]; // 800FD914
  c->r[4]=c->r[30]|c->r[30]; // 800FD918
  c->r[5]=c->r[31]|c->r[31]; // 800FD91C
  c->lr=0x800FD924u; f_800FD680(c); // 800FD920
L_800FD924:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 800FD924
  if (crb(c,2)) { goto L_800FD994; } // 800FD928
  c->r[3]=c->r[29]|c->r[29]; // 800FD92C
  c->r[4]=c->r[30]+0x00000004u; // 800FD930
  c->r[5]=c->r[31]|c->r[31]; // 800FD934
  c->lr=0x800FD93Cu; f_800FD680(c); // 800FD938
  goto L_800FD994; // 800FD93C
L_800FD940:;
  c->r[0]=R32(c->r[3]+0x00000A08u); // 800FD940
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FD944
  W32(c->r[3]+0x00000A08u,c->r[7]); // 800FD948
  c->r[4]=R32(c->r[3]+0x00000A04u); // 800FD94C
  c->r[6]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800FD950
  W32(c->r[3]+0x00000A04u,c->r[6]); // 800FD954
  if (!crb(c,0)) { goto L_800FD984; } // 800FD958
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FD95C
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FD960
  c->r[0]=0u-c->r[6]; // 800FD964
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FD968
  c->r[0]=c->r[7]|c->r[0]; // 800FD96C
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FD970
  c->r[0]=c->r[4]+0x00000002u; // 800FD974
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FD978
  c->r[0]=c->r[6]+0x00000010u; // 800FD97C
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FD980
L_800FD984:;
  c->r[3]=c->r[29]|c->r[29]; // 800FD984
  c->r[4]=c->r[30]|c->r[30]; // 800FD988
  c->r[5]=c->r[31]|c->r[31]; // 800FD98C
  c->lr=0x800FD994u; f_800FD4BC(c); // 800FD990
L_800FD994:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD994
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FD998
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FD99C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FD9A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD9A4
  c->lr=c->r[0]; // 800FD9A8
  c->r[1]=c->r[1]+0x00000020u; // 800FD9AC
  return; // 800FD9B0
}

// fn_800FD9B4
void f_800FD9B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD9B4
  c->r[0]=c->lr; // 800FD9B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD9BC
  c->r[11]=c->r[1]+0x00000020u; // 800FD9C0
  c->lr=0x800FD9C8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD9C4
  c->r[28]=c->r[3]|c->r[3]; // 800FD9C8
  c->r[4]=R32(c->r[3]+0x00000068u); // 800FD9CC
  c->r[0]=R32(c->r[3]+0x000008B4u); // 800FD9D0
  c->r[31]=c->r[4]+c->r[0]; // 800FD9D4
  c->r[4]=R32(c->r[3]+0x000008B8u); // 800FD9D8
  c->r[0]=R32(c->r[3]+0x00000080u); // 800FD9DC
  c->r[30]=c->r[0]+c->r[4]; // 800FD9E0
  c->r[0]=R32(c->r[3]+0x00000098u); // 800FD9E4
  c->r[29]=c->r[0]+c->r[4]; // 800FD9E8
  c->r[5]=R32(c->r[3]+0x00000A08u); // 800FD9EC
  c->r[0]=rotl(c->r[5],13)&0x00001FFFu; // 800FD9F0
  c->r[4]=0u+0x80160000u; // 800FD9F4
  c->r[4]=c->r[4]+0x00001028u; // 800FD9F8
  c->r[8]=R8(c->r[4]+c->r[0]); // 800FD9FC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800FDA00
  c->r[4]=0u+0x80160000u; // 800FDA04
  c->r[4]=c->r[4]+0x00003028u; // 800FDA08
  c->r[4]=R32(c->r[4]+c->r[0]); // 800FDA0C
  c->r[7]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800FDA10
  W32(c->r[3]+0x00000A08u,c->r[7]); // 800FDA14
  c->r[0]=R32(c->r[3]+0x00000A04u); // 800FDA18
  c->r[6]=c->r[0]-c->r[4]; cr0(c,c->r[6]); // 800FDA1C
  W32(c->r[3]+0x00000A04u,c->r[6]); // 800FDA20
  if (!crb(c,0)) { goto L_800FDA50; } // 800FDA24
  c->r[4]=R32(c->r[3]+0x00000A0Cu); // 800FDA28
  c->r[5]=__builtin_bswap16(R16(0u+c->r[4])); // 800FDA2C
  c->r[0]=0u-c->r[6]; // 800FDA30
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800FDA34
  c->r[0]=c->r[7]|c->r[0]; // 800FDA38
  W32(c->r[3]+0x00000A08u,c->r[0]); // 800FDA3C
  c->r[0]=c->r[4]+0x00000002u; // 800FDA40
  W32(c->r[3]+0x00000A0Cu,c->r[0]); // 800FDA44
  c->r[0]=c->r[6]+0x00000010u; // 800FDA48
  W32(c->r[3]+0x00000A04u,c->r[0]); // 800FDA4C
L_800FDA50:;
  c->r[3]=0u+0x80130000u; // 800FDA50
  c->r[3]=c->r[3]+0x00005310u; // 800FDA54
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800FDA58
  c->r[3]=c->r[3]+c->r[0]; // 800FDA5C
  c->r[27]=R32(c->r[3]+0x00000100u); // 800FDA60
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 800FDA64
  if (crb(c,2)) { goto L_800FDA80; } // 800FDA68
  c->r[3]=c->r[28]|c->r[28]; // 800FDA6C
  c->r[4]=c->r[31]|c->r[31]; // 800FDA70
  c->r[5]=R32(c->r[28]+0x00000000u); // 800FDA74
  c->r[6]=0u+0x00000001u; // 800FDA78
  c->lr=0x800FDA80u; f_800FD81C(c); // 800FDA7C
L_800FDA80:;
  c->r[0]=rotl(c->r[27],0)&0x00000002u; cr0(c,c->r[0]); // 800FDA80
  c->r[31]=c->r[31]+0x00000008u; // 800FDA84
  if (crb(c,2)) { goto L_800FDAA0; } // 800FDA88
  c->r[3]=c->r[28]|c->r[28]; // 800FDA8C
  c->r[4]=c->r[31]|c->r[31]; // 800FDA90
  c->r[5]=R32(c->r[28]+0x00000000u); // 800FDA94
  c->r[6]=0u+0x00000001u; // 800FDA98
  c->lr=0x800FDAA0u; f_800FD81C(c); // 800FDA9C
L_800FDAA0:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 800FDAA0
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800FDAA4
  c->r[3]=c->r[0]+c->r[31]; // 800FDAA8
  c->r[31]=c->r[3]+0xFFFFFFF8u; // 800FDAAC
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 800FDAB0
  if (crb(c,2)) { goto L_800FDAC8; } // 800FDAB4
  c->r[3]=c->r[28]|c->r[28]; // 800FDAB8
  c->r[4]=c->r[31]|c->r[31]; // 800FDABC
  c->r[6]=0u+0x00000001u; // 800FDAC0
  c->lr=0x800FDAC8u; f_800FD81C(c); // 800FDAC4
L_800FDAC8:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 800FDAC8
  if (crb(c,2)) { goto L_800FDAE4; } // 800FDACC
  c->r[3]=c->r[28]|c->r[28]; // 800FDAD0
  c->r[4]=c->r[31]+0x00000008u; // 800FDAD4
  c->r[5]=R32(c->r[28]+0x00000000u); // 800FDAD8
  c->r[6]=0u+0x00000001u; // 800FDADC
  c->lr=0x800FDAE4u; f_800FD81C(c); // 800FDAE0
L_800FDAE4:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 800FDAE4
  if (crb(c,2)) { goto L_800FDB04; } // 800FDAE8
  c->r[3]=c->r[28]|c->r[28]; // 800FDAEC
  c->r[4]=c->r[30]|c->r[30]; // 800FDAF0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800FDAF4
  c->r[5]=sraw(c,c->r[0],1); // 800FDAF8
  c->r[6]=0u+0x00000001u; // 800FDAFC
  c->lr=0x800FDB04u; f_800FD81C(c); // 800FDB00
L_800FDB04:;
  c->r[0]=rotl(c->r[27],0)&0x00000020u; cr0(c,c->r[0]); // 800FDB04
  if (crb(c,2)) { goto L_800FDB24; } // 800FDB08
  c->r[3]=c->r[28]|c->r[28]; // 800FDB0C
  c->r[4]=c->r[29]|c->r[29]; // 800FDB10
  c->r[0]=R32(c->r[28]+0x00000000u); // 800FDB14
  c->r[5]=sraw(c,c->r[0],1); // 800FDB18
  c->r[6]=0u+0x00000001u; // 800FDB1C
  c->lr=0x800FDB24u; f_800FD81C(c); // 800FDB20
L_800FDB24:;
  c->r[11]=c->r[1]+0x00000020u; // 800FDB24
  c->lr=0x800FDB2Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FDB28
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FDB2C
  c->lr=c->r[0]; // 800FDB30
  c->r[1]=c->r[1]+0x00000020u; // 800FDB34
  return; // 800FDB38
}

// fn_800FDB3C
void f_800FDB3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDB3C
  c->r[0]=c->lr; // 800FDB40
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDB44
  c->r[11]=c->r[1]+0x00000030u; // 800FDB48
  c->lr=0x800FDB50u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FDB4C
  c->r[9]=c->r[4]+c->r[3]; // 800FDB50
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FDB54
  c->r[0]=R8(c->r[9]+0xFFFFFFFFu); // 800FDB58
  c->r[5]=c->r[0]+c->r[5]; // 800FDB5C
  c->r[0]=c->r[5]+0x00000001u; // 800FDB60
  c->r[0]=sraw(c,c->r[0],1); // 800FDB64
  W8(c->r[3]+0x00000000u,c->r[0]); // 800FDB68
  c->r[7]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FDB6C
  c->r[10]=c->r[7]+0xFFFFFFFFu; // 800FDB70
  c->r[5]=R8(c->r[9]+0xFFFFFFFFu); // 800FDB74
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FDB78
  c->r[5]=c->r[5]+c->r[0]; // 800FDB7C
  c->r[0]=c->r[5]+0x00000001u; // 800FDB80
  c->r[0]=sraw(c,c->r[0],1); // 800FDB84
  W8(c->r[3]+0x00000002u,c->r[0]); // 800FDB88
  W8(c->r[3]+c->r[4],c->r[0]); // 800FDB8C
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FDB90
  c->r[25]=c->r[5]-c->r[4]; // 800FDB94
  c->r[11]=c->r[25]+0xFFFFFFFFu; // 800FDB98
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FDB9C
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FDBA0
  c->r[6]=c->r[6]+c->r[0]; // 800FDBA4
  c->r[0]=c->r[6]+0x00000001u; // 800FDBA8
  c->r[0]=sraw(c,c->r[0],1); // 800FDBAC
  W8(c->r[3]+0x00000004u,c->r[0]); // 800FDBB0
  W8(c->r[9]+0x00000002u,c->r[0]); // 800FDBB4
  W8(c->r[3]+c->r[7],c->r[0]); // 800FDBB8
  c->r[12]=c->r[5]+0xFFFFFFFFu; // 800FDBBC
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FDBC0
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FDBC4
  c->r[6]=c->r[6]+c->r[0]; // 800FDBC8
  c->r[0]=c->r[6]+0x00000001u; // 800FDBCC
  c->r[0]=sraw(c,c->r[0],1); // 800FDBD0
  W8(c->r[3]+0x00000006u,c->r[0]); // 800FDBD4
  W8(c->r[9]+0x00000004u,c->r[0]); // 800FDBD8
  c->r[8]=c->r[7]+c->r[3]; // 800FDBDC
  W8(c->r[8]+0x00000002u,c->r[0]); // 800FDBE0
  W8(c->r[3]+c->r[25],c->r[0]); // 800FDBE4
  c->r[31]=c->r[5]+c->r[4]; // 800FDBE8
  c->r[30]=c->r[31]+0xFFFFFFFFu; // 800FDBEC
  c->r[6]=R8(c->r[3]+c->r[12]); // 800FDBF0
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FDBF4
  c->r[6]=c->r[6]+c->r[0]; // 800FDBF8
  c->r[0]=c->r[6]+0x00000001u; // 800FDBFC
  c->r[0]=sraw(c,c->r[0],1); // 800FDC00
  W8(c->r[9]+0x00000006u,c->r[0]); // 800FDC04
  W8(c->r[8]+0x00000004u,c->r[0]); // 800FDC08
  c->r[7]=c->r[25]+c->r[3]; // 800FDC0C
  W8(c->r[7]+0x00000002u,c->r[0]); // 800FDC10
  W8(c->r[3]+c->r[5],c->r[0]); // 800FDC14
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FDC18
  c->r[28]=c->r[29]+0xFFFFFFFFu; // 800FDC1C
  c->r[6]=R8(c->r[3]+c->r[30]); // 800FDC20
  c->r[0]=R8(c->r[3]+c->r[28]); // 800FDC24
  c->r[6]=c->r[6]+c->r[0]; // 800FDC28
  c->r[0]=c->r[6]+0x00000001u; // 800FDC2C
  c->r[0]=sraw(c,c->r[0],1); // 800FDC30
  W8(c->r[8]+0x00000006u,c->r[0]); // 800FDC34
  W8(c->r[7]+0x00000004u,c->r[0]); // 800FDC38
  c->r[6]=c->r[5]+c->r[3]; // 800FDC3C
  W8(c->r[6]+0x00000002u,c->r[0]); // 800FDC40
  W8(c->r[3]+c->r[31],c->r[0]); // 800FDC44
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FDC48
  c->r[24]=c->r[0]-c->r[4]; // 800FDC4C
  c->r[27]=c->r[24]+0xFFFFFFFFu; // 800FDC50
  c->r[5]=R8(c->r[3]+c->r[28]); // 800FDC54
  c->r[0]=R8(c->r[3]+c->r[27]); // 800FDC58
  c->r[5]=c->r[5]+c->r[0]; // 800FDC5C
  c->r[0]=c->r[5]+0x00000001u; // 800FDC60
  c->r[0]=sraw(c,c->r[0],1); // 800FDC64
  W8(c->r[7]+0x00000006u,c->r[0]); // 800FDC68
  W8(c->r[6]+0x00000004u,c->r[0]); // 800FDC6C
  c->r[5]=c->r[31]+c->r[3]; // 800FDC70
  W8(c->r[5]+0x00000002u,c->r[0]); // 800FDC74
  W8(c->r[3]+c->r[29],c->r[0]); // 800FDC78
  c->r[25]=R8(c->r[3]+c->r[27]); // 800FDC7C
  c->r[4]=c->r[4]+0x00000001u; // 800FDC80
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FDC84
  c->r[0]=c->r[0]-c->r[4]; // 800FDC88
  W8(c->r[3]+c->r[0],c->r[25]); // 800FDC8C
  c->r[26]=c->r[24]+c->r[3]; // 800FDC90
  W8(c->r[26]+0x00000006u,c->r[25]); // 800FDC94
  W8(c->r[26]+0x00000005u,c->r[25]); // 800FDC98
  W8(c->r[26]+0x00000004u,c->r[25]); // 800FDC9C
  W8(c->r[26]+0x00000003u,c->r[25]); // 800FDCA0
  W8(c->r[26]+0x00000002u,c->r[25]); // 800FDCA4
  W8(c->r[26]+0x00000001u,c->r[25]); // 800FDCA8
  W8(c->r[3]+c->r[24],c->r[25]); // 800FDCAC
  c->r[31]=c->r[29]+c->r[3]; // 800FDCB0
  W8(c->r[31]+0x00000007u,c->r[25]); // 800FDCB4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FDCB8
  W8(c->r[3]+c->r[0],c->r[25]); // 800FDCBC
  W8(c->r[31]+0x00000005u,c->r[25]); // 800FDCC0
  W8(c->r[31]+0x00000004u,c->r[25]); // 800FDCC4
  W8(c->r[31]+0x00000003u,c->r[25]); // 800FDCC8
  W8(c->r[31]+0x00000002u,c->r[25]); // 800FDCCC
  W8(c->r[5]+0x00000007u,c->r[25]); // 800FDCD0
  W8(c->r[5]+0x00000006u,c->r[25]); // 800FDCD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FDCD8
  c->r[26]=c->r[0]+c->r[4]; // 800FDCDC
  W8(c->r[3]+c->r[26],c->r[25]); // 800FDCE0
  W8(c->r[5]+0x00000004u,c->r[25]); // 800FDCE4
  W8(c->r[6]+0x00000007u,c->r[25]); // 800FDCE8
  W8(c->r[6]+0x00000006u,c->r[25]); // 800FDCEC
  c->r[24]=R8(c->r[3]+c->r[27]); // 800FDCF0
  c->r[26]=R8(c->r[3]+c->r[28]); // 800FDCF4
  c->r[29]=rotl(c->r[24],1)&0xFFFFFFFEu; // 800FDCF8
  c->r[26]=c->r[24]+c->r[26]; // 800FDCFC
  c->r[26]=c->r[29]+c->r[26]; // 800FDD00
  c->r[26]=c->r[26]+0x00000002u; // 800FDD04
  c->r[26]=sraw(c,c->r[26],2); // 800FDD08
  W8(c->r[7]+0x00000007u,c->r[26]); // 800FDD0C
  W8(c->r[6]+0x00000005u,c->r[26]); // 800FDD10
  W8(c->r[5]+0x00000003u,c->r[26]); // 800FDD14
  W8(c->r[31]+0x00000001u,c->r[26]); // 800FDD18
  c->r[26]=R8(c->r[3]+c->r[27]); // 800FDD1C
  c->r[31]=R8(c->r[3]+c->r[30]); // 800FDD20
  c->r[27]=R8(c->r[3]+c->r[28]); // 800FDD24
  c->r[29]=rotl(c->r[27],1)&0xFFFFFFFEu; // 800FDD28
  c->r[27]=c->r[26]+c->r[31]; // 800FDD2C
  c->r[27]=c->r[29]+c->r[27]; // 800FDD30
  c->r[27]=c->r[27]+0x00000002u; // 800FDD34
  c->r[27]=sraw(c,c->r[27],2); // 800FDD38
  W8(c->r[8]+0x00000007u,c->r[27]); // 800FDD3C
  W8(c->r[7]+0x00000005u,c->r[27]); // 800FDD40
  W8(c->r[6]+0x00000003u,c->r[27]); // 800FDD44
  W8(c->r[5]+0x00000001u,c->r[27]); // 800FDD48
  c->r[29]=R8(c->r[3]+c->r[28]); // 800FDD4C
  c->r[28]=R8(c->r[3]+c->r[12]); // 800FDD50
  c->r[5]=R8(c->r[3]+c->r[30]); // 800FDD54
  c->r[27]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FDD58
  c->r[5]=c->r[29]+c->r[28]; // 800FDD5C
  c->r[5]=c->r[27]+c->r[5]; // 800FDD60
  c->r[5]=c->r[5]+0x00000002u; // 800FDD64
  c->r[5]=sraw(c,c->r[5],2); // 800FDD68
  W8(c->r[9]+0x00000007u,c->r[5]); // 800FDD6C
  W8(c->r[8]+0x00000005u,c->r[5]); // 800FDD70
  c->r[0]=c->r[0]-c->r[4]; // 800FDD74
  W8(c->r[3]+c->r[0],c->r[5]); // 800FDD78
  W8(c->r[6]+0x00000001u,c->r[5]); // 800FDD7C
  c->r[6]=R8(c->r[3]+c->r[30]); // 800FDD80
  c->r[5]=R8(c->r[3]+c->r[11]); // 800FDD84
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FDD88
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FDD8C
  c->r[0]=c->r[6]+c->r[5]; // 800FDD90
  c->r[4]=c->r[4]+c->r[0]; // 800FDD94
  c->r[0]=c->r[4]+0x00000002u; // 800FDD98
  c->r[0]=sraw(c,c->r[0],2); // 800FDD9C
  W8(c->r[3]+0x00000007u,c->r[0]); // 800FDDA0
  W8(c->r[9]+0x00000005u,c->r[0]); // 800FDDA4
  W8(c->r[8]+0x00000003u,c->r[0]); // 800FDDA8
  W8(c->r[7]+0x00000001u,c->r[0]); // 800FDDAC
  c->r[6]=R8(c->r[3]+c->r[12]); // 800FDDB0
  c->r[5]=R8(c->r[3]+c->r[10]); // 800FDDB4
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FDDB8
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FDDBC
  c->r[0]=c->r[6]+c->r[5]; // 800FDDC0
  c->r[4]=c->r[4]+c->r[0]; // 800FDDC4
  c->r[0]=c->r[4]+0x00000002u; // 800FDDC8
  c->r[0]=sraw(c,c->r[0],2); // 800FDDCC
  W8(c->r[3]+0x00000005u,c->r[0]); // 800FDDD0
  W8(c->r[9]+0x00000003u,c->r[0]); // 800FDDD4
  W8(c->r[8]+0x00000001u,c->r[0]); // 800FDDD8
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FDDDC
  c->r[5]=R8(c->r[9]+0xFFFFFFFFu); // 800FDDE0
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FDDE4
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FDDE8
  c->r[0]=c->r[6]+c->r[5]; // 800FDDEC
  c->r[4]=c->r[4]+c->r[0]; // 800FDDF0
  c->r[0]=c->r[4]+0x00000002u; // 800FDDF4
  c->r[0]=sraw(c,c->r[0],2); // 800FDDF8
  W8(c->r[3]+0x00000003u,c->r[0]); // 800FDDFC
  W8(c->r[9]+0x00000001u,c->r[0]); // 800FDE00
  c->r[6]=R8(c->r[3]+0xFFFFFFFFu); // 800FDE04
  c->r[5]=R8(c->r[3]+c->r[10]); // 800FDE08
  c->r[0]=R8(c->r[9]+0xFFFFFFFFu); // 800FDE0C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FDE10
  c->r[0]=c->r[6]+c->r[5]; // 800FDE14
  c->r[4]=c->r[0]+c->r[4]; // 800FDE18
  c->r[0]=c->r[4]+0x00000002u; // 800FDE1C
  c->r[0]=sraw(c,c->r[0],2); // 800FDE20
  W8(c->r[3]+0x00000001u,c->r[0]); // 800FDE24
  c->r[11]=c->r[1]+0x00000030u; // 800FDE28
  c->lr=0x800FDE30u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FDE2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDE30
  c->lr=c->r[0]; // 800FDE34
  c->r[1]=c->r[1]+0x00000030u; // 800FDE38
  return; // 800FDE3C
}

// fn_800FDE40
void f_800FDE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDE40
  c->r[0]=c->lr; // 800FDE44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FDE48
  c->r[11]=c->r[1]+0x00000040u; // 800FDE4C
  c->lr=0x800FDE54u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FDE50
  c->r[25]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FDE54
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FDE58
  c->r[5]=c->r[12]-c->r[4]; // 800FDE5C
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FDE60
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FDE64
  c->r[0]=R8(c->r[3]+c->r[25]); // 800FDE68
  c->r[7]=c->r[0]+c->r[7]; // 800FDE6C
  c->r[0]=c->r[7]+0x00000001u; // 800FDE70
  c->r[0]=sraw(c,c->r[0],1); // 800FDE74
  c->r[11]=c->r[5]+c->r[3]; // 800FDE78
  W8(c->r[11]+0x00000006u,c->r[0]); // 800FDE7C
  c->r[10]=c->r[6]+c->r[3]; // 800FDE80
  W8(c->r[10]+0x00000004u,c->r[0]); // 800FDE84
  c->r[9]=c->r[4]+c->r[3]; // 800FDE88
  W8(c->r[9]+0x00000002u,c->r[0]); // 800FDE8C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800FDE90
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FDE94
  c->r[0]=R8(c->r[9]+0xFFFFFFFFu); // 800FDE98
  c->r[7]=c->r[0]+c->r[7]; // 800FDE9C
  c->r[0]=c->r[7]+0x00000001u; // 800FDEA0
  c->r[0]=sraw(c,c->r[0],1); // 800FDEA4
  c->r[8]=c->r[12]+c->r[3]; // 800FDEA8
  W8(c->r[8]+0x00000006u,c->r[0]); // 800FDEAC
  W8(c->r[11]+0x00000004u,c->r[0]); // 800FDEB0
  W8(c->r[10]+0x00000002u,c->r[0]); // 800FDEB4
  W8(c->r[3]+c->r[4],c->r[0]); // 800FDEB8
  c->r[31]=c->r[6]+0xFFFFFFFFu; // 800FDEBC
  c->r[30]=c->r[12]+c->r[4]; // 800FDEC0
  c->r[7]=R8(c->r[3]+c->r[31]); // 800FDEC4
  c->r[0]=R8(c->r[9]+0xFFFFFFFFu); // 800FDEC8
  c->r[7]=c->r[7]+c->r[0]; // 800FDECC
  c->r[0]=c->r[7]+0x00000001u; // 800FDED0
  c->r[0]=sraw(c,c->r[0],1); // 800FDED4
  c->r[7]=c->r[30]+c->r[3]; // 800FDED8
  W8(c->r[7]+0x00000006u,c->r[0]); // 800FDEDC
  W8(c->r[8]+0x00000004u,c->r[0]); // 800FDEE0
  W8(c->r[11]+0x00000002u,c->r[0]); // 800FDEE4
  W8(c->r[3]+c->r[6],c->r[0]); // 800FDEE8
  c->r[29]=c->r[5]+0xFFFFFFFFu; // 800FDEEC
  c->r[6]=R8(c->r[3]+c->r[29]); // 800FDEF0
  c->r[0]=R8(c->r[3]+c->r[31]); // 800FDEF4
  c->r[6]=c->r[6]+c->r[0]; // 800FDEF8
  c->r[0]=c->r[6]+0x00000001u; // 800FDEFC
  c->r[20]=sraw(c,c->r[0],1); // 800FDF00
  c->r[0]=c->r[4]+0x00000001u; // 800FDF04
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 800FDF08
  W8(c->r[3]+c->r[6],c->r[20]); // 800FDF0C
  W8(c->r[7]+0x00000004u,c->r[20]); // 800FDF10
  W8(c->r[8]+0x00000002u,c->r[20]); // 800FDF14
  W8(c->r[3]+c->r[5],c->r[20]); // 800FDF18
  c->r[28]=c->r[12]+0xFFFFFFFFu; // 800FDF1C
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FDF20
  c->r[27]=c->r[5]-c->r[4]; // 800FDF24
  c->r[26]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FDF28
  c->r[6]=R8(c->r[3]+c->r[28]); // 800FDF2C
  c->r[5]=R8(c->r[3]+c->r[29]); // 800FDF30
  c->r[5]=c->r[6]+c->r[5]; // 800FDF34
  c->r[5]=c->r[5]+0x00000001u; // 800FDF38
  c->r[20]=sraw(c,c->r[5],1); // 800FDF3C
  c->r[6]=c->r[27]+c->r[3]; // 800FDF40
  W8(c->r[6]+0x00000006u,c->r[20]); // 800FDF44
  c->r[5]=c->r[26]+c->r[3]; // 800FDF48
  W8(c->r[5]+0x00000004u,c->r[20]); // 800FDF4C
  W8(c->r[7]+0x00000002u,c->r[20]); // 800FDF50
  W8(c->r[3]+c->r[12],c->r[20]); // 800FDF54
  c->r[12]=c->r[30]+0xFFFFFFFFu; // 800FDF58
  c->r[21]=R8(c->r[3]+c->r[12]); // 800FDF5C
  c->r[20]=R8(c->r[3]+c->r[28]); // 800FDF60
  c->r[20]=c->r[21]+c->r[20]; // 800FDF64
  c->r[20]=c->r[20]+0x00000001u; // 800FDF68
  c->r[20]=sraw(c,c->r[20],1); // 800FDF6C
  W8(c->r[6]+0x00000004u,c->r[20]); // 800FDF70
  W8(c->r[5]+0x00000002u,c->r[20]); // 800FDF74
  W8(c->r[3]+c->r[30],c->r[20]); // 800FDF78
  c->r[30]=c->r[26]+0xFFFFFFFFu; // 800FDF7C
  c->r[21]=R8(c->r[3]+c->r[30]); // 800FDF80
  c->r[20]=R8(c->r[3]+c->r[12]); // 800FDF84
  c->r[20]=c->r[21]+c->r[20]; // 800FDF88
  c->r[20]=c->r[20]+0x00000001u; // 800FDF8C
  c->r[20]=sraw(c,c->r[20],1); // 800FDF90
  W8(c->r[6]+0x00000002u,c->r[20]); // 800FDF94
  W8(c->r[3]+c->r[26],c->r[20]); // 800FDF98
  c->r[26]=c->r[27]+0xFFFFFFFFu; // 800FDF9C
  c->r[21]=R8(c->r[3]+c->r[26]); // 800FDFA0
  c->r[20]=R8(c->r[3]+c->r[30]); // 800FDFA4
  c->r[20]=c->r[21]+c->r[20]; // 800FDFA8
  c->r[20]=c->r[20]+0x00000001u; // 800FDFAC
  c->r[20]=sraw(c,c->r[20],1); // 800FDFB0
  W8(c->r[3]+c->r[27],c->r[20]); // 800FDFB4
  c->r[27]=0u-c->r[4]; // 800FDFB8
  c->r[23]=R8(c->r[3]+0xFFFFFFFFu); // 800FDFBC
  c->r[22]=R8(c->r[3]+c->r[27]); // 800FDFC0
  c->r[20]=R8(c->r[3]+c->r[25]); // 800FDFC4
  c->r[21]=rotl(c->r[20],1)&0xFFFFFFFEu; // 800FDFC8
  c->r[20]=c->r[23]+c->r[22]; // 800FDFCC
  c->r[20]=c->r[20]+c->r[21]; // 800FDFD0
  c->r[20]=c->r[20]+0x00000002u; // 800FDFD4
  c->r[20]=sraw(c,c->r[20],2); // 800FDFD8
  W8(c->r[11]+0x00000007u,c->r[20]); // 800FDFDC
  W8(c->r[10]+0x00000005u,c->r[20]); // 800FDFE0
  W8(c->r[9]+0x00000003u,c->r[20]); // 800FDFE4
  W8(c->r[3]+0x00000001u,c->r[20]); // 800FDFE8
  c->r[20]=R8(c->r[3]+0xFFFFFFFFu); // 800FDFEC
  c->r[22]=rotl(c->r[20],1)&0xFFFFFFFEu; // 800FDFF0
  c->r[21]=R8(c->r[3]+c->r[25]); // 800FDFF4
  c->r[20]=R8(c->r[9]+0xFFFFFFFFu); // 800FDFF8
  c->r[20]=c->r[21]+c->r[20]; // 800FDFFC
  c->r[20]=c->r[20]+c->r[22]; // 800FE000
  c->r[20]=c->r[20]+0x00000002u; // 800FE004
  c->r[20]=sraw(c,c->r[20],2); // 800FE008
  W8(c->r[8]+0x00000007u,c->r[20]); // 800FE00C
  W8(c->r[11]+0x00000005u,c->r[20]); // 800FE010
  W8(c->r[10]+0x00000003u,c->r[20]); // 800FE014
  W8(c->r[9]+0x00000001u,c->r[20]); // 800FE018
  c->r[23]=R8(c->r[3]+0xFFFFFFFFu); // 800FE01C
  c->r[22]=R8(c->r[3]+c->r[31]); // 800FE020
  c->r[20]=R8(c->r[9]+0xFFFFFFFFu); // 800FE024
  c->r[21]=rotl(c->r[20],1)&0xFFFFFFFEu; // 800FE028
  c->r[20]=c->r[23]+c->r[22]; // 800FE02C
  c->r[20]=c->r[20]+c->r[21]; // 800FE030
  c->r[20]=c->r[20]+0x00000002u; // 800FE034
  c->r[22]=sraw(c,c->r[20],2); // 800FE038
  W8(c->r[7]+0x00000007u,c->r[22]); // 800FE03C
  W8(c->r[8]+0x00000005u,c->r[22]); // 800FE040
  c->r[20]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE044
  c->r[21]=c->r[20]-c->r[0]; // 800FE048
  W8(c->r[3]+c->r[21],c->r[22]); // 800FE04C
  W8(c->r[10]+0x00000001u,c->r[22]); // 800FE050
  c->r[21]=R8(c->r[9]+0xFFFFFFFFu); // 800FE054
  c->r[22]=R8(c->r[3]+c->r[29]); // 800FE058
  c->r[23]=R8(c->r[3]+c->r[31]); // 800FE05C
  c->r[24]=rotl(c->r[23],1)&0xFFFFFFFEu; // 800FE060
  c->r[23]=c->r[21]+c->r[22]; // 800FE064
  c->r[23]=c->r[24]+c->r[23]; // 800FE068
  c->r[23]=c->r[23]+0x00000002u; // 800FE06C
  c->r[24]=sraw(c,c->r[23],2); // 800FE070
  W8(c->r[5]+0x00000007u,c->r[24]); // 800FE074
  c->r[23]=c->r[20]+c->r[0]; // 800FE078
  W8(c->r[3]+c->r[23],c->r[24]); // 800FE07C
  W8(c->r[8]+0x00000003u,c->r[24]); // 800FE080
  W8(c->r[11]+0x00000001u,c->r[24]); // 800FE084
  c->r[23]=R8(c->r[3]+c->r[31]); // 800FE088
  c->r[24]=R8(c->r[3]+c->r[28]); // 800FE08C
  c->r[11]=R8(c->r[3]+c->r[29]); // 800FE090
  c->r[31]=rotl(c->r[11],1)&0xFFFFFFFEu; // 800FE094
  c->r[11]=c->r[23]+c->r[24]; // 800FE098
  c->r[11]=c->r[31]+c->r[11]; // 800FE09C
  c->r[11]=c->r[11]+0x00000002u; // 800FE0A0
  c->r[31]=sraw(c,c->r[11],2); // 800FE0A4
  c->r[11]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FE0A8
  c->r[0]=c->r[11]-c->r[0]; // 800FE0AC
  W8(c->r[3]+c->r[0],c->r[31]); // 800FE0B0
  W8(c->r[5]+0x00000005u,c->r[31]); // 800FE0B4
  W8(c->r[7]+0x00000003u,c->r[31]); // 800FE0B8
  W8(c->r[8]+0x00000001u,c->r[31]); // 800FE0BC
  c->r[29]=R8(c->r[3]+c->r[29]); // 800FE0C0
  c->r[11]=R8(c->r[3]+c->r[12]); // 800FE0C4
  c->r[0]=R8(c->r[3]+c->r[28]); // 800FE0C8
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE0CC
  c->r[0]=c->r[29]+c->r[11]; // 800FE0D0
  c->r[8]=c->r[8]+c->r[0]; // 800FE0D4
  c->r[0]=c->r[8]+0x00000002u; // 800FE0D8
  c->r[0]=sraw(c,c->r[0],2); // 800FE0DC
  W8(c->r[6]+0x00000005u,c->r[0]); // 800FE0E0
  W8(c->r[5]+0x00000003u,c->r[0]); // 800FE0E4
  W8(c->r[7]+0x00000001u,c->r[0]); // 800FE0E8
  c->r[11]=R8(c->r[3]+c->r[28]); // 800FE0EC
  c->r[8]=R8(c->r[3]+c->r[30]); // 800FE0F0
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FE0F4
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE0F8
  c->r[0]=c->r[11]+c->r[8]; // 800FE0FC
  c->r[7]=c->r[7]+c->r[0]; // 800FE100
  c->r[0]=c->r[7]+0x00000002u; // 800FE104
  c->r[0]=sraw(c,c->r[0],2); // 800FE108
  W8(c->r[6]+0x00000003u,c->r[0]); // 800FE10C
  W8(c->r[5]+0x00000001u,c->r[0]); // 800FE110
  c->r[8]=R8(c->r[3]+c->r[12]); // 800FE114
  c->r[7]=R8(c->r[3]+c->r[26]); // 800FE118
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FE11C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE120
  c->r[0]=c->r[8]+c->r[7]; // 800FE124
  c->r[5]=c->r[5]+c->r[0]; // 800FE128
  c->r[0]=c->r[5]+0x00000002u; // 800FE12C
  c->r[0]=sraw(c,c->r[0],2); // 800FE130
  W8(c->r[6]+0x00000001u,c->r[0]); // 800FE134
  c->r[8]=addc(c,~c->r[4],0x00000001u,1); // 800FE138
  c->r[7]=R8(c->r[3]+c->r[25]); // 800FE13C
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FE140
  c->r[0]=R8(c->r[3]+c->r[27]); // 800FE144
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE148
  c->r[0]=c->r[7]+c->r[6]; // 800FE14C
  c->r[5]=c->r[5]+c->r[0]; // 800FE150
  c->r[0]=c->r[5]+0x00000002u; // 800FE154
  c->r[0]=sraw(c,c->r[0],2); // 800FE158
  W8(c->r[10]+0x00000006u,c->r[0]); // 800FE15C
  W8(c->r[9]+0x00000004u,c->r[0]); // 800FE160
  W8(c->r[3]+0x00000002u,c->r[0]); // 800FE164
  c->r[11]=addc(c,~c->r[4],0x00000002u,1); // 800FE168
  c->r[7]=R8(c->r[3]+c->r[27]); // 800FE16C
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FE170
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FE174
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE178
  c->r[0]=c->r[7]+c->r[6]; // 800FE17C
  c->r[5]=c->r[5]+c->r[0]; // 800FE180
  c->r[0]=c->r[5]+0x00000002u; // 800FE184
  c->r[0]=sraw(c,c->r[0],2); // 800FE188
  W8(c->r[10]+0x00000007u,c->r[0]); // 800FE18C
  W8(c->r[9]+0x00000005u,c->r[0]); // 800FE190
  W8(c->r[3]+0x00000003u,c->r[0]); // 800FE194
  c->r[10]=addc(c,~c->r[4],0x00000003u,1); // 800FE198
  c->r[7]=R8(c->r[3]+c->r[8]); // 800FE19C
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FE1A0
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FE1A4
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE1A8
  c->r[0]=c->r[7]+c->r[6]; // 800FE1AC
  c->r[5]=c->r[5]+c->r[0]; // 800FE1B0
  c->r[0]=c->r[5]+0x00000002u; // 800FE1B4
  c->r[0]=sraw(c,c->r[0],2); // 800FE1B8
  W8(c->r[9]+0x00000006u,c->r[0]); // 800FE1BC
  W8(c->r[3]+0x00000004u,c->r[0]); // 800FE1C0
  c->r[8]=addc(c,~c->r[4],0x00000004u,1); // 800FE1C4
  c->r[7]=R8(c->r[3]+c->r[11]); // 800FE1C8
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FE1CC
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FE1D0
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE1D4
  c->r[0]=c->r[7]+c->r[6]; // 800FE1D8
  c->r[5]=c->r[5]+c->r[0]; // 800FE1DC
  c->r[0]=c->r[5]+0x00000002u; // 800FE1E0
  c->r[0]=sraw(c,c->r[0],2); // 800FE1E4
  W8(c->r[9]+0x00000007u,c->r[0]); // 800FE1E8
  W8(c->r[3]+0x00000005u,c->r[0]); // 800FE1EC
  c->r[9]=addc(c,~c->r[4],0x00000005u,1); // 800FE1F0
  c->r[7]=R8(c->r[3]+c->r[10]); // 800FE1F4
  c->r[6]=R8(c->r[3]+c->r[9]); // 800FE1F8
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FE1FC
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE200
  c->r[0]=c->r[7]+c->r[6]; // 800FE204
  c->r[5]=c->r[5]+c->r[0]; // 800FE208
  c->r[0]=c->r[5]+0x00000002u; // 800FE20C
  c->r[0]=sraw(c,c->r[0],2); // 800FE210
  W8(c->r[3]+0x00000006u,c->r[0]); // 800FE214
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FE218
  c->r[0]=R8(c->r[3]+c->r[9]); // 800FE21C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE220
  c->r[0]=addc(c,~c->r[4],0x00000006u,1); // 800FE224
  c->r[4]=R8(c->r[3]+c->r[0]); // 800FE228
  c->r[0]=c->r[6]+c->r[5]; // 800FE22C
  c->r[4]=c->r[0]+c->r[4]; // 800FE230
  c->r[0]=c->r[4]+0x00000002u; // 800FE234
  c->r[0]=sraw(c,c->r[0],2); // 800FE238
  W8(c->r[3]+0x00000007u,c->r[0]); // 800FE23C
  c->r[11]=c->r[1]+0x00000040u; // 800FE240
  c->lr=0x800FE248u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FE244
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FE248
  c->lr=c->r[0]; // 800FE24C
  c->r[1]=c->r[1]+0x00000040u; // 800FE250
  return; // 800FE254
}

// fn_800FE258
void f_800FE258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE258
  c->r[0]=c->lr; // 800FE25C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800FE260
  c->r[11]=c->r[1]+0x00000050u; // 800FE264
  c->lr=0x800FE26Cu; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FE268
  c->r[0]=0u-c->r[4]; // 800FE26C
  c->r[24]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FE270
  c->r[11]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FE274
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FE278
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FE27C
  c->r[6]=R8(c->r[3]+c->r[24]); // 800FE280
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FE284
  c->r[5]=c->r[6]+c->r[5]; // 800FE288
  c->r[5]=c->r[5]+0x00000001u; // 800FE28C
  c->r[6]=sraw(c,c->r[5],1); // 800FE290
  c->r[10]=c->r[11]+c->r[3]; // 800FE294
  W8(c->r[10]+0x00000003u,c->r[6]); // 800FE298
  c->r[9]=c->r[12]+c->r[3]; // 800FE29C
  W8(c->r[9]+0x00000002u,c->r[6]); // 800FE2A0
  c->r[5]=c->r[31]+c->r[3]; // 800FE2A4
  W8(c->r[5]+0x00000001u,c->r[6]); // 800FE2A8
  W8(c->r[3]+0x00000000u,c->r[6]); // 800FE2AC
  c->r[30]=addc(c,~c->r[4],0x00000001u,1); // 800FE2B0
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FE2B4
  c->r[6]=R8(c->r[3]+c->r[30]); // 800FE2B8
  c->r[6]=c->r[7]+c->r[6]; // 800FE2BC
  c->r[6]=c->r[6]+0x00000001u; // 800FE2C0
  c->r[6]=sraw(c,c->r[6],1); // 800FE2C4
  W8(c->r[10]+0x00000004u,c->r[6]); // 800FE2C8
  W8(c->r[9]+0x00000003u,c->r[6]); // 800FE2CC
  W8(c->r[5]+0x00000002u,c->r[6]); // 800FE2D0
  W8(c->r[3]+0x00000001u,c->r[6]); // 800FE2D4
  c->r[29]=addc(c,~c->r[4],0x00000002u,1); // 800FE2D8
  c->r[7]=R8(c->r[3]+c->r[30]); // 800FE2DC
  c->r[6]=R8(c->r[3]+c->r[29]); // 800FE2E0
  c->r[6]=c->r[7]+c->r[6]; // 800FE2E4
  c->r[6]=c->r[6]+0x00000001u; // 800FE2E8
  c->r[6]=sraw(c,c->r[6],1); // 800FE2EC
  W8(c->r[10]+0x00000005u,c->r[6]); // 800FE2F0
  W8(c->r[9]+0x00000004u,c->r[6]); // 800FE2F4
  W8(c->r[5]+0x00000003u,c->r[6]); // 800FE2F8
  W8(c->r[3]+0x00000002u,c->r[6]); // 800FE2FC
  c->r[28]=addc(c,~c->r[4],0x00000003u,1); // 800FE300
  c->r[7]=R8(c->r[3]+c->r[29]); // 800FE304
  c->r[6]=R8(c->r[3]+c->r[28]); // 800FE308
  c->r[6]=c->r[7]+c->r[6]; // 800FE30C
  c->r[6]=c->r[6]+0x00000001u; // 800FE310
  c->r[7]=sraw(c,c->r[6],1); // 800FE314
  c->r[8]=c->r[4]+0x00000001u; // 800FE318
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)6); // 800FE31C
  W8(c->r[3]+c->r[6],c->r[7]); // 800FE320
  W8(c->r[9]+0x00000005u,c->r[7]); // 800FE324
  W8(c->r[5]+0x00000004u,c->r[7]); // 800FE328
  W8(c->r[3]+0x00000003u,c->r[7]); // 800FE32C
  c->r[27]=addc(c,~c->r[4],0x00000004u,1); // 800FE330
  c->r[7]=R8(c->r[3]+c->r[28]); // 800FE334
  c->r[6]=R8(c->r[3]+c->r[27]); // 800FE338
  c->r[6]=c->r[7]+c->r[6]; // 800FE33C
  c->r[6]=c->r[6]+0x00000001u; // 800FE340
  c->r[6]=sraw(c,c->r[6],1); // 800FE344
  W8(c->r[10]+0x00000007u,c->r[6]); // 800FE348
  W8(c->r[9]+0x00000006u,c->r[6]); // 800FE34C
  W8(c->r[5]+0x00000005u,c->r[6]); // 800FE350
  W8(c->r[3]+0x00000004u,c->r[6]); // 800FE354
  c->r[26]=addc(c,~c->r[4],0x00000005u,1); // 800FE358
  c->r[7]=R8(c->r[3]+c->r[27]); // 800FE35C
  c->r[6]=R8(c->r[3]+c->r[26]); // 800FE360
  c->r[6]=c->r[7]+c->r[6]; // 800FE364
  c->r[6]=c->r[6]+0x00000001u; // 800FE368
  c->r[6]=sraw(c,c->r[6],1); // 800FE36C
  W8(c->r[9]+0x00000007u,c->r[6]); // 800FE370
  W8(c->r[5]+0x00000006u,c->r[6]); // 800FE374
  W8(c->r[3]+0x00000005u,c->r[6]); // 800FE378
  c->r[25]=addc(c,~c->r[4],0x00000006u,1); // 800FE37C
  c->r[7]=R8(c->r[3]+c->r[26]); // 800FE380
  c->r[6]=R8(c->r[3]+c->r[25]); // 800FE384
  c->r[6]=c->r[7]+c->r[6]; // 800FE388
  c->r[6]=c->r[6]+0x00000001u; // 800FE38C
  c->r[6]=sraw(c,c->r[6],1); // 800FE390
  W8(c->r[5]+0x00000007u,c->r[6]); // 800FE394
  W8(c->r[3]+0x00000006u,c->r[6]); // 800FE398
  c->r[20]=addc(c,~c->r[4],0x00000007u,1); // 800FE39C
  c->r[6]=R8(c->r[3]+c->r[25]); // 800FE3A0
  c->r[5]=R8(c->r[3]+c->r[20]); // 800FE3A4
  c->r[5]=c->r[6]+c->r[5]; // 800FE3A8
  c->r[5]=c->r[5]+0x00000001u; // 800FE3AC
  c->r[5]=sraw(c,c->r[5],1); // 800FE3B0
  W8(c->r[3]+0x00000007u,c->r[5]); // 800FE3B4
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FE3B8
  c->r[23]=c->r[5]-c->r[4]; // 800FE3BC
  c->r[22]=c->r[12]+c->r[4]; // 800FE3C0
  c->r[21]=c->r[12]-c->r[4]; // 800FE3C4
  c->r[16]=R8(c->r[3]+0xFFFFFFFFu); // 800FE3C8
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FE3CC
  c->r[5]=R8(c->r[3]+c->r[24]); // 800FE3D0
  c->r[6]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FE3D4
  c->r[5]=c->r[16]+c->r[7]; // 800FE3D8
  c->r[5]=c->r[5]+c->r[6]; // 800FE3DC
  c->r[5]=c->r[5]+0x00000002u; // 800FE3E0
  c->r[16]=sraw(c,c->r[5],2); // 800FE3E4
  c->r[7]=c->r[23]+c->r[3]; // 800FE3E8
  W8(c->r[7]+0x00000003u,c->r[16]); // 800FE3EC
  c->r[6]=c->r[22]+c->r[3]; // 800FE3F0
  W8(c->r[6]+0x00000002u,c->r[16]); // 800FE3F4
  c->r[5]=c->r[21]+c->r[3]; // 800FE3F8
  W8(c->r[5]+0x00000001u,c->r[16]); // 800FE3FC
  W8(c->r[3]+c->r[4],c->r[16]); // 800FE400
  c->r[16]=R8(c->r[3]+c->r[24]); // 800FE404
  c->r[19]=R8(c->r[3]+c->r[30]); // 800FE408
  c->r[17]=R8(c->r[3]+c->r[0]); // 800FE40C
  c->r[18]=rotl(c->r[17],1)&0xFFFFFFFEu; // 800FE410
  c->r[17]=c->r[16]+c->r[19]; // 800FE414
  c->r[17]=c->r[18]+c->r[17]; // 800FE418
  c->r[17]=c->r[17]+0x00000002u; // 800FE41C
  c->r[17]=sraw(c,c->r[17],2); // 800FE420
  W8(c->r[7]+0x00000004u,c->r[17]); // 800FE424
  W8(c->r[6]+0x00000003u,c->r[17]); // 800FE428
  W8(c->r[5]+0x00000002u,c->r[17]); // 800FE42C
  c->r[4]=c->r[4]+c->r[3]; // 800FE430
  W8(c->r[4]+0x00000001u,c->r[17]); // 800FE434
  c->r[19]=R8(c->r[3]+c->r[0]); // 800FE438
  c->r[18]=R8(c->r[3]+c->r[29]); // 800FE43C
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FE440
  c->r[17]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE444
  c->r[0]=c->r[19]+c->r[18]; // 800FE448
  c->r[17]=c->r[17]+c->r[0]; // 800FE44C
  c->r[0]=c->r[17]+0x00000002u; // 800FE450
  c->r[18]=sraw(c,c->r[0],2); // 800FE454
  W8(c->r[7]+0x00000005u,c->r[18]); // 800FE458
  W8(c->r[6]+0x00000004u,c->r[18]); // 800FE45C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800FE460
  c->r[17]=c->r[0]-c->r[8]; // 800FE464
  W8(c->r[3]+c->r[17],c->r[18]); // 800FE468
  W8(c->r[4]+0x00000002u,c->r[18]); // 800FE46C
  c->r[17]=R8(c->r[3]+c->r[30]); // 800FE470
  c->r[18]=R8(c->r[3]+c->r[28]); // 800FE474
  c->r[19]=R8(c->r[3]+c->r[29]); // 800FE478
  c->r[30]=rotl(c->r[19],1)&0xFFFFFFFEu; // 800FE47C
  c->r[19]=c->r[17]+c->r[18]; // 800FE480
  c->r[19]=c->r[30]+c->r[19]; // 800FE484
  c->r[19]=c->r[19]+0x00000002u; // 800FE488
  c->r[19]=sraw(c,c->r[19],2); // 800FE48C
  W8(c->r[7]+0x00000006u,c->r[19]); // 800FE490
  c->r[0]=c->r[0]+c->r[8]; // 800FE494
  W8(c->r[3]+c->r[0],c->r[19]); // 800FE498
  W8(c->r[5]+0x00000004u,c->r[19]); // 800FE49C
  W8(c->r[4]+0x00000003u,c->r[19]); // 800FE4A0
  c->r[19]=R8(c->r[3]+c->r[29]); // 800FE4A4
  c->r[30]=R8(c->r[3]+c->r[27]); // 800FE4A8
  c->r[0]=R8(c->r[3]+c->r[28]); // 800FE4AC
  c->r[29]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE4B0
  c->r[0]=c->r[19]+c->r[30]; // 800FE4B4
  c->r[29]=c->r[29]+c->r[0]; // 800FE4B8
  c->r[0]=c->r[29]+0x00000002u; // 800FE4BC
  c->r[29]=sraw(c,c->r[0],2); // 800FE4C0
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800FE4C4
  c->r[0]=c->r[0]-c->r[8]; // 800FE4C8
  W8(c->r[3]+c->r[0],c->r[29]); // 800FE4CC
  W8(c->r[6]+0x00000006u,c->r[29]); // 800FE4D0
  W8(c->r[5]+0x00000005u,c->r[29]); // 800FE4D4
  W8(c->r[4]+0x00000004u,c->r[29]); // 800FE4D8
  c->r[29]=R8(c->r[3]+c->r[28]); // 800FE4DC
  c->r[28]=R8(c->r[3]+c->r[26]); // 800FE4E0
  c->r[0]=R8(c->r[3]+c->r[27]); // 800FE4E4
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE4E8
  c->r[0]=c->r[29]+c->r[28]; // 800FE4EC
  c->r[8]=c->r[8]+c->r[0]; // 800FE4F0
  c->r[0]=c->r[8]+0x00000002u; // 800FE4F4
  c->r[0]=sraw(c,c->r[0],2); // 800FE4F8
  W8(c->r[6]+0x00000007u,c->r[0]); // 800FE4FC
  W8(c->r[5]+0x00000006u,c->r[0]); // 800FE500
  W8(c->r[4]+0x00000005u,c->r[0]); // 800FE504
  c->r[28]=R8(c->r[3]+c->r[27]); // 800FE508
  c->r[27]=R8(c->r[3]+c->r[25]); // 800FE50C
  c->r[0]=R8(c->r[3]+c->r[26]); // 800FE510
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE514
  c->r[0]=c->r[28]+c->r[27]; // 800FE518
  c->r[8]=c->r[8]+c->r[0]; // 800FE51C
  c->r[0]=c->r[8]+0x00000002u; // 800FE520
  c->r[0]=sraw(c,c->r[0],2); // 800FE524
  W8(c->r[5]+0x00000007u,c->r[0]); // 800FE528
  W8(c->r[4]+0x00000006u,c->r[0]); // 800FE52C
  c->r[26]=R8(c->r[3]+c->r[26]); // 800FE530
  c->r[8]=R8(c->r[3]+c->r[20]); // 800FE534
  c->r[0]=R8(c->r[3]+c->r[25]); // 800FE538
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE53C
  c->r[0]=c->r[26]+c->r[8]; // 800FE540
  c->r[5]=c->r[5]+c->r[0]; // 800FE544
  c->r[0]=c->r[5]+0x00000002u; // 800FE548
  c->r[0]=sraw(c,c->r[0],2); // 800FE54C
  W8(c->r[4]+0x00000007u,c->r[0]); // 800FE550
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800FE554
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE558
  c->r[5]=R8(c->r[4]+0xFFFFFFFFu); // 800FE55C
  c->r[0]=R8(c->r[3]+c->r[24]); // 800FE560
  c->r[0]=c->r[5]+c->r[0]; // 800FE564
  c->r[5]=c->r[0]+c->r[8]; // 800FE568
  c->r[0]=c->r[5]+0x00000002u; // 800FE56C
  c->r[0]=sraw(c,c->r[0],2); // 800FE570
  W8(c->r[10]+0x00000002u,c->r[0]); // 800FE574
  W8(c->r[9]+0x00000001u,c->r[0]); // 800FE578
  W8(c->r[3]+c->r[31],c->r[0]); // 800FE57C
  c->r[16]=c->r[31]+0xFFFFFFFFu; // 800FE580
  c->r[9]=R8(c->r[3]+0xFFFFFFFFu); // 800FE584
  c->r[8]=R8(c->r[3]+c->r[16]); // 800FE588
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 800FE58C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE590
  c->r[0]=c->r[9]+c->r[8]; // 800FE594
  c->r[5]=c->r[0]+c->r[5]; // 800FE598
  c->r[0]=c->r[5]+0x00000002u; // 800FE59C
  c->r[0]=sraw(c,c->r[0],2); // 800FE5A0
  W8(c->r[7]+0x00000002u,c->r[0]); // 800FE5A4
  W8(c->r[6]+0x00000001u,c->r[0]); // 800FE5A8
  W8(c->r[3]+c->r[21],c->r[0]); // 800FE5AC
  c->r[8]=c->r[21]+0xFFFFFFFFu; // 800FE5B0
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FE5B4
  c->r[5]=R8(c->r[4]+0xFFFFFFFFu); // 800FE5B8
  c->r[0]=R8(c->r[3]+c->r[16]); // 800FE5BC
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE5C0
  c->r[0]=c->r[6]+c->r[5]; // 800FE5C4
  c->r[4]=c->r[4]+c->r[0]; // 800FE5C8
  c->r[0]=c->r[4]+0x00000002u; // 800FE5CC
  c->r[0]=sraw(c,c->r[0],2); // 800FE5D0
  W8(c->r[10]+0x00000001u,c->r[0]); // 800FE5D4
  W8(c->r[3]+c->r[12],c->r[0]); // 800FE5D8
  c->r[9]=c->r[12]+0xFFFFFFFFu; // 800FE5DC
  c->r[6]=R8(c->r[3]+c->r[9]); // 800FE5E0
  c->r[5]=R8(c->r[3]+c->r[16]); // 800FE5E4
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FE5E8
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE5EC
  c->r[0]=c->r[6]+c->r[5]; // 800FE5F0
  c->r[4]=c->r[4]+c->r[0]; // 800FE5F4
  c->r[0]=c->r[4]+0x00000002u; // 800FE5F8
  c->r[0]=sraw(c,c->r[0],2); // 800FE5FC
  W8(c->r[7]+0x00000001u,c->r[0]); // 800FE600
  W8(c->r[3]+c->r[22],c->r[0]); // 800FE604
  c->r[7]=c->r[22]+0xFFFFFFFFu; // 800FE608
  c->r[6]=R8(c->r[3]+c->r[7]); // 800FE60C
  c->r[5]=R8(c->r[3]+c->r[8]); // 800FE610
  c->r[0]=R8(c->r[3]+c->r[9]); // 800FE614
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE618
  c->r[0]=c->r[6]+c->r[5]; // 800FE61C
  c->r[4]=c->r[4]+c->r[0]; // 800FE620
  c->r[0]=c->r[4]+0x00000002u; // 800FE624
  c->r[0]=sraw(c,c->r[0],2); // 800FE628
  W8(c->r[3]+c->r[11],c->r[0]); // 800FE62C
  c->r[5]=R8(c->r[3]+c->r[9]); // 800FE630
  c->r[0]=R8(c->r[3]+c->r[7]); // 800FE634
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE638
  c->r[4]=R8(c->r[10]+0xFFFFFFFFu); // 800FE63C
  c->r[0]=c->r[5]+c->r[0]; // 800FE640
  c->r[4]=c->r[0]+c->r[4]; // 800FE644
  c->r[0]=c->r[4]+0x00000002u; // 800FE648
  c->r[0]=sraw(c,c->r[0],2); // 800FE64C
  W8(c->r[3]+c->r[23],c->r[0]); // 800FE650
  c->r[11]=c->r[1]+0x00000050u; // 800FE654
  c->lr=0x800FE65Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FE658
  c->r[0]=R32(c->r[1]+0x00000054u); // 800FE65C
  c->lr=c->r[0]; // 800FE660
  c->r[1]=c->r[1]+0x00000050u; // 800FE664
  return; // 800FE668
}

// fn_800FE66C
void f_800FE66C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE66C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE670
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE674
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE678
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FE67C
  c->r[12]=c->r[8]+0xFFFFFFFFu; // 800FE680
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FE684
  c->r[7]=c->r[6]+c->r[4]; // 800FE688
  c->r[29]=c->r[7]+0xFFFFFFFFu; // 800FE68C
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FE690
  c->r[11]=c->r[0]-c->r[4]; // 800FE694
  c->r[10]=R8(c->r[3]+c->r[29]); // 800FE698
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FE69C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE6A0
  c->r[5]=c->r[11]+c->r[3]; // 800FE6A4
  c->r[9]=R8(c->r[5]+0xFFFFFFFFu); // 800FE6A8
  c->r[0]=c->r[10]+c->r[0]; // 800FE6AC
  c->r[9]=c->r[0]+c->r[9]; // 800FE6B0
  c->r[0]=c->r[9]+0x00000002u; // 800FE6B4
  c->r[0]=sraw(c,c->r[0],2); // 800FE6B8
  W8(c->r[3]+c->r[11],c->r[0]); // 800FE6BC
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FE6C0
  c->r[12]=R8(c->r[3]+c->r[12]); // 800FE6C4
  c->r[11]=R8(c->r[3]+c->r[0]); // 800FE6C8
  c->r[9]=R8(c->r[3]+c->r[29]); // 800FE6CC
  c->r[10]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800FE6D0
  c->r[9]=c->r[12]+c->r[11]; // 800FE6D4
  c->r[9]=c->r[10]+c->r[9]; // 800FE6D8
  c->r[9]=c->r[9]+0x00000002u; // 800FE6DC
  c->r[9]=sraw(c,c->r[9],2); // 800FE6E0
  W8(c->r[5]+0x00000001u,c->r[9]); // 800FE6E4
  W8(c->r[3]+c->r[8],c->r[9]); // 800FE6E8
  c->r[11]=c->r[6]-c->r[4]; // 800FE6EC
  c->r[12]=c->r[11]+0xFFFFFFFFu; // 800FE6F0
  c->r[30]=R8(c->r[3]+c->r[29]); // 800FE6F4
  c->r[29]=R8(c->r[3]+c->r[12]); // 800FE6F8
  c->r[9]=R8(c->r[3]+c->r[0]); // 800FE6FC
  c->r[10]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800FE700
  c->r[9]=c->r[30]+c->r[29]; // 800FE704
  c->r[9]=c->r[10]+c->r[9]; // 800FE708
  c->r[9]=c->r[9]+0x00000002u; // 800FE70C
  c->r[9]=sraw(c,c->r[9],2); // 800FE710
  W8(c->r[5]+0x00000002u,c->r[9]); // 800FE714
  c->r[10]=c->r[8]+c->r[3]; // 800FE718
  W8(c->r[10]+0x00000001u,c->r[9]); // 800FE71C
  W8(c->r[3]+c->r[7],c->r[9]); // 800FE720
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FE724
  c->r[30]=c->r[31]+0xFFFFFFFFu; // 800FE728
  c->r[29]=R8(c->r[3]+c->r[0]); // 800FE72C
  c->r[9]=R8(c->r[3]+c->r[30]); // 800FE730
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FE734
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE738
  c->r[0]=c->r[29]+c->r[9]; // 800FE73C
  c->r[8]=c->r[8]+c->r[0]; // 800FE740
  c->r[0]=c->r[8]+0x00000002u; // 800FE744
  c->r[0]=sraw(c,c->r[0],2); // 800FE748
  W8(c->r[5]+0x00000003u,c->r[0]); // 800FE74C
  W8(c->r[10]+0x00000002u,c->r[0]); // 800FE750
  c->r[9]=c->r[7]+c->r[3]; // 800FE754
  W8(c->r[9]+0x00000001u,c->r[0]); // 800FE758
  W8(c->r[3]+c->r[6],c->r[0]); // 800FE75C
  c->r[8]=c->r[4]+c->r[3]; // 800FE760
  c->r[29]=R8(c->r[3]+c->r[12]); // 800FE764
  c->r[12]=R8(c->r[8]+0xFFFFFFFFu); // 800FE768
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FE76C
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE770
  c->r[0]=c->r[29]+c->r[12]; // 800FE774
  c->r[7]=c->r[7]+c->r[0]; // 800FE778
  c->r[0]=c->r[7]+0x00000002u; // 800FE77C
  c->r[0]=sraw(c,c->r[0],2); // 800FE780
  W8(c->r[5]+0x00000004u,c->r[0]); // 800FE784
  W8(c->r[10]+0x00000003u,c->r[0]); // 800FE788
  W8(c->r[9]+0x00000002u,c->r[0]); // 800FE78C
  c->r[7]=c->r[6]+c->r[3]; // 800FE790
  W8(c->r[7]+0x00000001u,c->r[0]); // 800FE794
  W8(c->r[3]+c->r[11],c->r[0]); // 800FE798
  c->r[29]=R8(c->r[3]+0xFFFFFFFFu); // 800FE79C
  c->r[12]=R8(c->r[3]+c->r[30]); // 800FE7A0
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 800FE7A4
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE7A8
  c->r[0]=c->r[29]+c->r[12]; // 800FE7AC
  c->r[6]=c->r[0]+c->r[6]; // 800FE7B0
  c->r[0]=c->r[6]+0x00000002u; // 800FE7B4
  c->r[0]=sraw(c,c->r[0],2); // 800FE7B8
  W8(c->r[5]+0x00000005u,c->r[0]); // 800FE7BC
  W8(c->r[10]+0x00000004u,c->r[0]); // 800FE7C0
  W8(c->r[9]+0x00000003u,c->r[0]); // 800FE7C4
  W8(c->r[7]+0x00000002u,c->r[0]); // 800FE7C8
  c->r[6]=c->r[11]+c->r[3]; // 800FE7CC
  W8(c->r[6]+0x00000001u,c->r[0]); // 800FE7D0
  W8(c->r[3]+c->r[31],c->r[0]); // 800FE7D4
  c->r[0]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FE7D8
  c->r[11]=R8(c->r[3]+0xFFFFFFFFu); // 800FE7DC
  c->r[29]=rotl(c->r[11],1)&0xFFFFFFFEu; // 800FE7E0
  c->r[12]=R8(c->r[8]+0xFFFFFFFFu); // 800FE7E4
  c->r[11]=R8(c->r[3]+c->r[0]); // 800FE7E8
  c->r[11]=c->r[12]+c->r[11]; // 800FE7EC
  c->r[11]=c->r[11]+c->r[29]; // 800FE7F0
  c->r[11]=c->r[11]+0x00000002u; // 800FE7F4
  c->r[11]=sraw(c,c->r[11],2); // 800FE7F8
  W8(c->r[5]+0x00000006u,c->r[11]); // 800FE7FC
  W8(c->r[10]+0x00000005u,c->r[11]); // 800FE800
  W8(c->r[9]+0x00000004u,c->r[11]); // 800FE804
  W8(c->r[7]+0x00000003u,c->r[11]); // 800FE808
  W8(c->r[6]+0x00000002u,c->r[11]); // 800FE80C
  c->r[5]=c->r[31]+c->r[3]; // 800FE810
  W8(c->r[5]+0x00000001u,c->r[11]); // 800FE814
  W8(c->r[3]+c->r[4],c->r[11]); // 800FE818
  c->r[11]=0u-c->r[4]; // 800FE81C
  c->r[31]=R8(c->r[3]+0xFFFFFFFFu); // 800FE820
  c->r[30]=R8(c->r[3]+c->r[11]); // 800FE824
  c->r[12]=R8(c->r[3]+c->r[0]); // 800FE828
  c->r[29]=rotl(c->r[12],1)&0xFFFFFFFEu; // 800FE82C
  c->r[12]=c->r[31]+c->r[30]; // 800FE830
  c->r[12]=c->r[12]+c->r[29]; // 800FE834
  c->r[12]=c->r[12]+0x00000002u; // 800FE838
  c->r[29]=sraw(c,c->r[12],2); // 800FE83C
  c->r[31]=c->r[4]+0x00000001u; // 800FE840
  c->r[12]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800FE844
  c->r[12]=c->r[12]-c->r[31]; // 800FE848
  W8(c->r[3]+c->r[12],c->r[29]); // 800FE84C
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)6); // 800FE850
  W8(c->r[3]+c->r[12],c->r[29]); // 800FE854
  c->r[30]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800FE858
  c->r[12]=c->r[30]+c->r[31]; // 800FE85C
  W8(c->r[3]+c->r[12],c->r[29]); // 800FE860
  W8(c->r[7]+0x00000004u,c->r[29]); // 800FE864
  c->r[12]=c->r[30]-c->r[31]; // 800FE868
  W8(c->r[3]+c->r[12],c->r[29]); // 800FE86C
  W8(c->r[5]+0x00000002u,c->r[29]); // 800FE870
  W8(c->r[8]+0x00000001u,c->r[29]); // 800FE874
  W8(c->r[3]+0x00000000u,c->r[29]); // 800FE878
  c->r[29]=addc(c,~c->r[4],0x00000001u,1); // 800FE87C
  c->r[31]=R8(c->r[3]+c->r[0]); // 800FE880
  c->r[30]=R8(c->r[3]+c->r[29]); // 800FE884
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FE888
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE88C
  c->r[0]=c->r[31]+c->r[30]; // 800FE890
  c->r[12]=c->r[12]+c->r[0]; // 800FE894
  c->r[0]=c->r[12]+0x00000002u; // 800FE898
  c->r[0]=sraw(c,c->r[0],2); // 800FE89C
  W8(c->r[10]+0x00000007u,c->r[0]); // 800FE8A0
  W8(c->r[9]+0x00000006u,c->r[0]); // 800FE8A4
  W8(c->r[7]+0x00000005u,c->r[0]); // 800FE8A8
  W8(c->r[6]+0x00000004u,c->r[0]); // 800FE8AC
  W8(c->r[5]+0x00000003u,c->r[0]); // 800FE8B0
  W8(c->r[8]+0x00000002u,c->r[0]); // 800FE8B4
  W8(c->r[3]+0x00000001u,c->r[0]); // 800FE8B8
  c->r[30]=addc(c,~c->r[4],0x00000002u,1); // 800FE8BC
  c->r[12]=R8(c->r[3]+c->r[11]); // 800FE8C0
  c->r[11]=R8(c->r[3]+c->r[30]); // 800FE8C4
  c->r[0]=R8(c->r[3]+c->r[29]); // 800FE8C8
  c->r[10]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE8CC
  c->r[0]=c->r[12]+c->r[11]; // 800FE8D0
  c->r[10]=c->r[10]+c->r[0]; // 800FE8D4
  c->r[0]=c->r[10]+0x00000002u; // 800FE8D8
  c->r[0]=sraw(c,c->r[0],2); // 800FE8DC
  W8(c->r[9]+0x00000007u,c->r[0]); // 800FE8E0
  W8(c->r[7]+0x00000006u,c->r[0]); // 800FE8E4
  W8(c->r[6]+0x00000005u,c->r[0]); // 800FE8E8
  W8(c->r[5]+0x00000004u,c->r[0]); // 800FE8EC
  W8(c->r[8]+0x00000003u,c->r[0]); // 800FE8F0
  W8(c->r[3]+0x00000002u,c->r[0]); // 800FE8F4
  c->r[12]=addc(c,~c->r[4],0x00000003u,1); // 800FE8F8
  c->r[11]=R8(c->r[3]+c->r[29]); // 800FE8FC
  c->r[10]=R8(c->r[3]+c->r[12]); // 800FE900
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FE904
  c->r[9]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE908
  c->r[0]=c->r[11]+c->r[10]; // 800FE90C
  c->r[9]=c->r[9]+c->r[0]; // 800FE910
  c->r[0]=c->r[9]+0x00000002u; // 800FE914
  c->r[0]=sraw(c,c->r[0],2); // 800FE918
  W8(c->r[7]+0x00000007u,c->r[0]); // 800FE91C
  W8(c->r[6]+0x00000006u,c->r[0]); // 800FE920
  W8(c->r[5]+0x00000005u,c->r[0]); // 800FE924
  W8(c->r[8]+0x00000004u,c->r[0]); // 800FE928
  W8(c->r[3]+0x00000003u,c->r[0]); // 800FE92C
  c->r[11]=addc(c,~c->r[4],0x00000004u,1); // 800FE930
  c->r[10]=R8(c->r[3]+c->r[30]); // 800FE934
  c->r[9]=R8(c->r[3]+c->r[11]); // 800FE938
  c->r[0]=R8(c->r[3]+c->r[12]); // 800FE93C
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE940
  c->r[0]=c->r[10]+c->r[9]; // 800FE944
  c->r[7]=c->r[7]+c->r[0]; // 800FE948
  c->r[0]=c->r[7]+0x00000002u; // 800FE94C
  c->r[0]=sraw(c,c->r[0],2); // 800FE950
  W8(c->r[6]+0x00000007u,c->r[0]); // 800FE954
  W8(c->r[5]+0x00000006u,c->r[0]); // 800FE958
  W8(c->r[8]+0x00000005u,c->r[0]); // 800FE95C
  W8(c->r[3]+0x00000004u,c->r[0]); // 800FE960
  c->r[10]=addc(c,~c->r[4],0x00000005u,1); // 800FE964
  c->r[9]=R8(c->r[3]+c->r[12]); // 800FE968
  c->r[7]=R8(c->r[3]+c->r[10]); // 800FE96C
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FE970
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE974
  c->r[0]=c->r[9]+c->r[7]; // 800FE978
  c->r[6]=c->r[6]+c->r[0]; // 800FE97C
  c->r[0]=c->r[6]+0x00000002u; // 800FE980
  c->r[0]=sraw(c,c->r[0],2); // 800FE984
  W8(c->r[5]+0x00000007u,c->r[0]); // 800FE988
  W8(c->r[8]+0x00000006u,c->r[0]); // 800FE98C
  W8(c->r[3]+0x00000005u,c->r[0]); // 800FE990
  c->r[9]=addc(c,~c->r[4],0x00000006u,1); // 800FE994
  c->r[7]=R8(c->r[3]+c->r[11]); // 800FE998
  c->r[6]=R8(c->r[3]+c->r[9]); // 800FE99C
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FE9A0
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE9A4
  c->r[0]=c->r[7]+c->r[6]; // 800FE9A8
  c->r[5]=c->r[5]+c->r[0]; // 800FE9AC
  c->r[0]=c->r[5]+0x00000002u; // 800FE9B0
  c->r[0]=sraw(c,c->r[0],2); // 800FE9B4
  W8(c->r[8]+0x00000007u,c->r[0]); // 800FE9B8
  W8(c->r[3]+0x00000006u,c->r[0]); // 800FE9BC
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FE9C0
  c->r[0]=R8(c->r[3]+c->r[9]); // 800FE9C4
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE9C8
  c->r[0]=addc(c,~c->r[4],0x00000007u,1); // 800FE9CC
  c->r[4]=R8(c->r[3]+c->r[0]); // 800FE9D0
  c->r[0]=c->r[6]+c->r[5]; // 800FE9D4
  c->r[4]=c->r[0]+c->r[4]; // 800FE9D8
  c->r[0]=c->r[4]+0x00000002u; // 800FE9DC
  c->r[0]=sraw(c,c->r[0],2); // 800FE9E0
  W8(c->r[3]+0x00000007u,c->r[0]); // 800FE9E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE9E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE9EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE9F0
  c->r[1]=c->r[1]+0x00000020u; // 800FE9F4
  return; // 800FE9F8
}

// fn_800FE9FC
void f_800FE9FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE9FC
  c->r[0]=c->lr; // 800FEA00
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FEA04
  c->r[11]=c->r[1]+0x00000030u; // 800FEA08
  c->lr=0x800FEA10u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FEA0C
  c->r[0]=addc(c,~c->r[4],0x00000001u,1); // 800FEA10
  c->r[8]=0u-c->r[4]; // 800FEA14
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FEA18
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FEA1C
  c->r[5]=c->r[6]+c->r[5]; // 800FEA20
  c->r[5]=c->r[5]+0x00000001u; // 800FEA24
  c->r[5]=sraw(c,c->r[5],1); // 800FEA28
  W8(c->r[3]+0x00000000u,c->r[5]); // 800FEA2C
  c->r[10]=addc(c,~c->r[4],0x00000002u,1); // 800FEA30
  c->r[7]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FEA34
  c->r[6]=R8(c->r[3]+c->r[0]); // 800FEA38
  c->r[5]=R8(c->r[3]+c->r[10]); // 800FEA3C
  c->r[5]=c->r[6]+c->r[5]; // 800FEA40
  c->r[5]=c->r[5]+0x00000001u; // 800FEA44
  c->r[5]=sraw(c,c->r[5],1); // 800FEA48
  W8(c->r[3]+c->r[7],c->r[5]); // 800FEA4C
  W8(c->r[3]+0x00000001u,c->r[5]); // 800FEA50
  c->r[11]=addc(c,~c->r[4],0x00000003u,1); // 800FEA54
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FEA58
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FEA5C
  c->r[5]=R8(c->r[3]+c->r[11]); // 800FEA60
  c->r[5]=c->r[6]+c->r[5]; // 800FEA64
  c->r[5]=c->r[5]+0x00000001u; // 800FEA68
  c->r[5]=sraw(c,c->r[5],1); // 800FEA6C
  W8(c->r[3]+c->r[12],c->r[5]); // 800FEA70
  c->r[7]=c->r[7]+c->r[3]; // 800FEA74
  W8(c->r[7]+0x00000001u,c->r[5]); // 800FEA78
  W8(c->r[3]+0x00000002u,c->r[5]); // 800FEA7C
  c->r[31]=addc(c,~c->r[4],0x00000004u,1); // 800FEA80
  c->r[24]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 800FEA84
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FEA88
  c->r[5]=R8(c->r[3]+c->r[31]); // 800FEA8C
  c->r[5]=c->r[6]+c->r[5]; // 800FEA90
  c->r[5]=c->r[5]+0x00000001u; // 800FEA94
  c->r[5]=sraw(c,c->r[5],1); // 800FEA98
  W8(c->r[3]+c->r[24],c->r[5]); // 800FEA9C
  c->r[6]=c->r[12]+c->r[3]; // 800FEAA0
  W8(c->r[6]+0x00000001u,c->r[5]); // 800FEAA4
  W8(c->r[7]+0x00000002u,c->r[5]); // 800FEAA8
  W8(c->r[3]+0x00000003u,c->r[5]); // 800FEAAC
  c->r[30]=addc(c,~c->r[4],0x00000005u,1); // 800FEAB0
  c->r[9]=R8(c->r[3]+c->r[31]); // 800FEAB4
  c->r[5]=R8(c->r[3]+c->r[30]); // 800FEAB8
  c->r[5]=c->r[9]+c->r[5]; // 800FEABC
  c->r[5]=c->r[5]+0x00000001u; // 800FEAC0
  c->r[9]=sraw(c,c->r[5],1); // 800FEAC4
  c->r[5]=c->r[24]+c->r[3]; // 800FEAC8
  W8(c->r[5]+0x00000001u,c->r[9]); // 800FEACC
  W8(c->r[6]+0x00000002u,c->r[9]); // 800FEAD0
  W8(c->r[7]+0x00000003u,c->r[9]); // 800FEAD4
  W8(c->r[3]+0x00000004u,c->r[9]); // 800FEAD8
  c->r[29]=addc(c,~c->r[4],0x00000006u,1); // 800FEADC
  c->r[24]=R8(c->r[3]+c->r[30]); // 800FEAE0
  c->r[9]=R8(c->r[3]+c->r[29]); // 800FEAE4
  c->r[9]=c->r[24]+c->r[9]; // 800FEAE8
  c->r[9]=c->r[9]+0x00000001u; // 800FEAEC
  c->r[9]=sraw(c,c->r[9],1); // 800FEAF0
  W8(c->r[5]+0x00000002u,c->r[9]); // 800FEAF4
  W8(c->r[6]+0x00000003u,c->r[9]); // 800FEAF8
  W8(c->r[7]+0x00000004u,c->r[9]); // 800FEAFC
  W8(c->r[3]+0x00000005u,c->r[9]); // 800FEB00
  c->r[28]=addc(c,~c->r[4],0x00000007u,1); // 800FEB04
  c->r[24]=R8(c->r[3]+c->r[29]); // 800FEB08
  c->r[9]=R8(c->r[3]+c->r[28]); // 800FEB0C
  c->r[9]=c->r[24]+c->r[9]; // 800FEB10
  c->r[9]=c->r[9]+0x00000001u; // 800FEB14
  c->r[9]=sraw(c,c->r[9],1); // 800FEB18
  W8(c->r[5]+0x00000003u,c->r[9]); // 800FEB1C
  W8(c->r[6]+0x00000004u,c->r[9]); // 800FEB20
  W8(c->r[7]+0x00000005u,c->r[9]); // 800FEB24
  W8(c->r[3]+0x00000006u,c->r[9]); // 800FEB28
  c->r[27]=addc(c,~c->r[4],0x00000008u,1); // 800FEB2C
  c->r[24]=R8(c->r[3]+c->r[28]); // 800FEB30
  c->r[9]=R8(c->r[3]+c->r[27]); // 800FEB34
  c->r[9]=c->r[24]+c->r[9]; // 800FEB38
  c->r[9]=c->r[9]+0x00000001u; // 800FEB3C
  c->r[9]=sraw(c,c->r[9],1); // 800FEB40
  W8(c->r[5]+0x00000004u,c->r[9]); // 800FEB44
  W8(c->r[6]+0x00000005u,c->r[9]); // 800FEB48
  W8(c->r[7]+0x00000006u,c->r[9]); // 800FEB4C
  W8(c->r[3]+0x00000007u,c->r[9]); // 800FEB50
  c->r[26]=addc(c,~c->r[4],0x00000009u,1); // 800FEB54
  c->r[24]=R8(c->r[3]+c->r[27]); // 800FEB58
  c->r[9]=R8(c->r[3]+c->r[26]); // 800FEB5C
  c->r[9]=c->r[24]+c->r[9]; // 800FEB60
  c->r[9]=c->r[9]+0x00000001u; // 800FEB64
  c->r[9]=sraw(c,c->r[9],1); // 800FEB68
  W8(c->r[5]+0x00000005u,c->r[9]); // 800FEB6C
  W8(c->r[6]+0x00000006u,c->r[9]); // 800FEB70
  W8(c->r[7]+0x00000007u,c->r[9]); // 800FEB74
  c->r[25]=addc(c,~c->r[4],0x0000000Au,1); // 800FEB78
  c->r[9]=R8(c->r[3]+c->r[26]); // 800FEB7C
  c->r[7]=R8(c->r[3]+c->r[25]); // 800FEB80
  c->r[7]=c->r[9]+c->r[7]; // 800FEB84
  c->r[7]=c->r[7]+0x00000001u; // 800FEB88
  c->r[24]=sraw(c,c->r[7],1); // 800FEB8C
  c->r[9]=c->r[4]+0x00000001u; // 800FEB90
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)6); // 800FEB94
  W8(c->r[3]+c->r[7],c->r[24]); // 800FEB98
  W8(c->r[6]+0x00000007u,c->r[24]); // 800FEB9C
  c->r[24]=addc(c,~c->r[4],0x0000000Bu,1); // 800FEBA0
  c->r[7]=R8(c->r[3]+c->r[25]); // 800FEBA4
  c->r[6]=R8(c->r[3]+c->r[24]); // 800FEBA8
  c->r[6]=c->r[7]+c->r[6]; // 800FEBAC
  c->r[6]=c->r[6]+0x00000001u; // 800FEBB0
  c->r[6]=sraw(c,c->r[6],1); // 800FEBB4
  W8(c->r[5]+0x00000007u,c->r[6]); // 800FEBB8
  c->r[8]=R8(c->r[3]+c->r[8]); // 800FEBBC
  c->r[7]=R8(c->r[3]+c->r[10]); // 800FEBC0
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FEBC4
  c->r[6]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FEBC8
  c->r[5]=c->r[8]+c->r[7]; // 800FEBCC
  c->r[5]=c->r[6]+c->r[5]; // 800FEBD0
  c->r[5]=c->r[5]+0x00000002u; // 800FEBD4
  c->r[5]=sraw(c,c->r[5],2); // 800FEBD8
  W8(c->r[3]+c->r[4],c->r[5]); // 800FEBDC
  c->r[5]=c->r[12]-c->r[4]; // 800FEBE0
  c->r[8]=R8(c->r[3]+c->r[0]); // 800FEBE4
  c->r[7]=R8(c->r[3]+c->r[11]); // 800FEBE8
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FEBEC
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FEBF0
  c->r[0]=c->r[8]+c->r[7]; // 800FEBF4
  c->r[6]=c->r[6]+c->r[0]; // 800FEBF8
  c->r[0]=c->r[6]+0x00000002u; // 800FEBFC
  c->r[0]=sraw(c,c->r[0],2); // 800FEC00
  W8(c->r[3]+c->r[5],c->r[0]); // 800FEC04
  c->r[8]=c->r[4]+c->r[3]; // 800FEC08
  W8(c->r[8]+0x00000001u,c->r[0]); // 800FEC0C
  c->r[0]=c->r[12]+c->r[4]; // 800FEC10
  c->r[12]=R8(c->r[3]+c->r[10]); // 800FEC14
  c->r[10]=R8(c->r[3]+c->r[31]); // 800FEC18
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FEC1C
  c->r[7]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800FEC20
  c->r[6]=c->r[12]+c->r[10]; // 800FEC24
  c->r[6]=c->r[7]+c->r[6]; // 800FEC28
  c->r[6]=c->r[6]+0x00000002u; // 800FEC2C
  c->r[6]=sraw(c,c->r[6],2); // 800FEC30
  W8(c->r[3]+c->r[0],c->r[6]); // 800FEC34
  c->r[7]=c->r[5]+c->r[3]; // 800FEC38
  W8(c->r[7]+0x00000001u,c->r[6]); // 800FEC3C
  W8(c->r[8]+0x00000002u,c->r[6]); // 800FEC40
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FEC44
  c->r[5]=c->r[5]-c->r[4]; // 800FEC48
  c->r[12]=R8(c->r[3]+c->r[11]); // 800FEC4C
  c->r[11]=R8(c->r[3]+c->r[30]); // 800FEC50
  c->r[6]=R8(c->r[3]+c->r[31]); // 800FEC54
  c->r[10]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800FEC58
  c->r[6]=c->r[12]+c->r[11]; // 800FEC5C
  c->r[6]=c->r[10]+c->r[6]; // 800FEC60
  c->r[6]=c->r[6]+0x00000002u; // 800FEC64
  c->r[10]=sraw(c,c->r[6],2); // 800FEC68
  W8(c->r[3]+c->r[5],c->r[10]); // 800FEC6C
  c->r[6]=c->r[0]+c->r[3]; // 800FEC70
  W8(c->r[6]+0x00000001u,c->r[10]); // 800FEC74
  W8(c->r[7]+0x00000002u,c->r[10]); // 800FEC78
  W8(c->r[8]+0x00000003u,c->r[10]); // 800FEC7C
  c->r[12]=R8(c->r[3]+c->r[31]); // 800FEC80
  c->r[11]=R8(c->r[3]+c->r[29]); // 800FEC84
  c->r[0]=R8(c->r[3]+c->r[30]); // 800FEC88
  c->r[10]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FEC8C
  c->r[0]=c->r[12]+c->r[11]; // 800FEC90
  c->r[10]=c->r[10]+c->r[0]; // 800FEC94
  c->r[0]=c->r[10]+0x00000002u; // 800FEC98
  c->r[11]=sraw(c,c->r[0],2); // 800FEC9C
  c->r[5]=c->r[5]+c->r[3]; // 800FECA0
  W8(c->r[5]+0x00000001u,c->r[11]); // 800FECA4
  W8(c->r[6]+0x00000002u,c->r[11]); // 800FECA8
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800FECAC
  c->r[10]=c->r[0]-c->r[9]; // 800FECB0
  W8(c->r[3]+c->r[10],c->r[11]); // 800FECB4
  W8(c->r[8]+0x00000004u,c->r[11]); // 800FECB8
  c->r[30]=R8(c->r[3]+c->r[30]); // 800FECBC
  c->r[12]=R8(c->r[3]+c->r[28]); // 800FECC0
  c->r[10]=R8(c->r[3]+c->r[29]); // 800FECC4
  c->r[11]=rotl(c->r[10],1)&0xFFFFFFFEu; // 800FECC8
  c->r[10]=c->r[30]+c->r[12]; // 800FECCC
  c->r[10]=c->r[11]+c->r[10]; // 800FECD0
  c->r[10]=c->r[10]+0x00000002u; // 800FECD4
  c->r[10]=sraw(c,c->r[10],2); // 800FECD8
  W8(c->r[5]+0x00000002u,c->r[10]); // 800FECDC
  W8(c->r[6]+0x00000003u,c->r[10]); // 800FECE0
  W8(c->r[7]+0x00000004u,c->r[10]); // 800FECE4
  W8(c->r[8]+0x00000005u,c->r[10]); // 800FECE8
  c->r[29]=R8(c->r[3]+c->r[29]); // 800FECEC
  c->r[12]=R8(c->r[3]+c->r[27]); // 800FECF0
  c->r[10]=R8(c->r[3]+c->r[28]); // 800FECF4
  c->r[11]=rotl(c->r[10],1)&0xFFFFFFFEu; // 800FECF8
  c->r[10]=c->r[29]+c->r[12]; // 800FECFC
  c->r[10]=c->r[11]+c->r[10]; // 800FED00
  c->r[10]=c->r[10]+0x00000002u; // 800FED04
  c->r[10]=sraw(c,c->r[10],2); // 800FED08
  W8(c->r[5]+0x00000003u,c->r[10]); // 800FED0C
  W8(c->r[6]+0x00000004u,c->r[10]); // 800FED10
  W8(c->r[7]+0x00000005u,c->r[10]); // 800FED14
  W8(c->r[8]+0x00000006u,c->r[10]); // 800FED18
  c->r[28]=R8(c->r[3]+c->r[28]); // 800FED1C
  c->r[12]=R8(c->r[3]+c->r[26]); // 800FED20
  c->r[10]=R8(c->r[3]+c->r[27]); // 800FED24
  c->r[11]=rotl(c->r[10],1)&0xFFFFFFFEu; // 800FED28
  c->r[10]=c->r[28]+c->r[12]; // 800FED2C
  c->r[10]=c->r[11]+c->r[10]; // 800FED30
  c->r[10]=c->r[10]+0x00000002u; // 800FED34
  c->r[10]=sraw(c,c->r[10],2); // 800FED38
  W8(c->r[5]+0x00000004u,c->r[10]); // 800FED3C
  c->r[0]=c->r[0]+c->r[9]; // 800FED40
  W8(c->r[3]+c->r[0],c->r[10]); // 800FED44
  W8(c->r[7]+0x00000006u,c->r[10]); // 800FED48
  W8(c->r[8]+0x00000007u,c->r[10]); // 800FED4C
  c->r[11]=R8(c->r[3]+c->r[27]); // 800FED50
  c->r[10]=R8(c->r[3]+c->r[25]); // 800FED54
  c->r[0]=R8(c->r[3]+c->r[26]); // 800FED58
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FED5C
  c->r[0]=c->r[11]+c->r[10]; // 800FED60
  c->r[8]=c->r[8]+c->r[0]; // 800FED64
  c->r[0]=c->r[8]+0x00000002u; // 800FED68
  c->r[0]=sraw(c,c->r[0],2); // 800FED6C
  W8(c->r[5]+0x00000005u,c->r[0]); // 800FED70
  W8(c->r[6]+0x00000006u,c->r[0]); // 800FED74
  W8(c->r[7]+0x00000007u,c->r[0]); // 800FED78
  c->r[10]=R8(c->r[3]+c->r[26]); // 800FED7C
  c->r[8]=R8(c->r[3]+c->r[24]); // 800FED80
  c->r[0]=R8(c->r[3]+c->r[25]); // 800FED84
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FED88
  c->r[0]=c->r[10]+c->r[8]; // 800FED8C
  c->r[7]=c->r[7]+c->r[0]; // 800FED90
  c->r[0]=c->r[7]+0x00000002u; // 800FED94
  c->r[0]=sraw(c,c->r[0],2); // 800FED98
  W8(c->r[5]+0x00000006u,c->r[0]); // 800FED9C
  W8(c->r[6]+0x00000007u,c->r[0]); // 800FEDA0
  c->r[6]=R8(c->r[3]+c->r[25]); // 800FEDA4
  c->r[0]=R8(c->r[3]+c->r[24]); // 800FEDA8
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FEDAC
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 800FEDB0
  c->r[4]=R8(c->r[3]+c->r[0]); // 800FEDB4
  c->r[0]=c->r[6]+c->r[5]; // 800FEDB8
  c->r[4]=c->r[0]+c->r[4]; // 800FEDBC
  c->r[0]=c->r[4]+0x00000002u; // 800FEDC0
  c->r[4]=sraw(c,c->r[0],2); // 800FEDC4
  c->r[0]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FEDC8
  c->r[0]=c->r[0]-c->r[9]; // 800FEDCC
  W8(c->r[3]+c->r[0],c->r[4]); // 800FEDD0
  c->r[11]=c->r[1]+0x00000030u; // 800FEDD4
  c->lr=0x800FEDDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FEDD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FEDDC
  c->lr=c->r[0]; // 800FEDE0
  c->r[1]=c->r[1]+0x00000030u; // 800FEDE4
  return; // 800FEDE8
}

// fn_800FEDEC
void f_800FEDEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEDEC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800FEDF0
  c->r[8]=addc(c,~c->r[4],0x0000000Fu,1); // 800FEDF4
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800FEDF8
  c->r[6]=c->r[0]-c->r[4]; // 800FEDFC
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FEE00
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FEE04
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FEE08
  c->r[6]=c->r[7]+c->r[0]; // 800FEE0C
  c->r[0]=c->r[6]+0x00000001u; // 800FEE10
  c->r[6]=sraw(c,c->r[0],1); // 800FEE14
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FEE18
  c->r[0]=c->r[6]+c->r[0]; // 800FEE1C
  c->r[5]=c->r[0]-c->r[7]; // 800FEE20
  c->r[5]=c->r[5]+0x00000001u; // 800FEE24
  c->r[8]=sraw(c,c->r[5],1); // 800FEE28
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800FEE2C
  c->r[5]=0u-c->r[4]; // 800FEE30
  c->r[9]=c->r[3]+c->r[5]; // 800FEE34
  c->r[5]=c->r[1]+0x00000048u; // 800FEE38
  c->r[6]=c->r[1]+0x00000008u; // 800FEE3C
  c->r[10]=0u+0x00000002u; // 800FEE40
  c->ctr=c->r[10]; // 800FEE44
L_800FEE48:;
  c->r[10]=R8(c->r[9]+0x00000000u); // 800FEE48
  W32(c->r[5]+0x00000000u,c->r[10]); // 800FEE4C
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEE50
  c->r[7]=c->r[7]+c->r[8]; // 800FEE54
  c->r[10]=c->r[7]-c->r[10]; // 800FEE58
  c->r[10]=c->r[10]+0x00000001u; // 800FEE5C
  c->r[10]=sraw(c,c->r[10],1); // 800FEE60
  W32(c->r[6]+0x00000000u,c->r[10]); // 800FEE64
  c->r[10]=R32(c->r[5]+0x00000000u); // 800FEE68
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEE6C
  W32(c->r[5]+0x00000000u,c->r[10]); // 800FEE70
  c->r[10]=R8(c->r[9]+0x00000001u); // 800FEE74
  W32(c->r[5]+0x00000004u,c->r[10]); // 800FEE78
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEE7C
  c->r[7]=c->r[7]+c->r[8]; // 800FEE80
  c->r[10]=c->r[7]-c->r[10]; // 800FEE84
  c->r[10]=c->r[10]+0x00000001u; // 800FEE88
  c->r[10]=sraw(c,c->r[10],1); // 800FEE8C
  W32(c->r[6]+0x00000004u,c->r[10]); // 800FEE90
  c->r[10]=R32(c->r[5]+0x00000004u); // 800FEE94
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEE98
  W32(c->r[5]+0x00000004u,c->r[10]); // 800FEE9C
  c->r[10]=R8(c->r[9]+0x00000002u); // 800FEEA0
  W32(c->r[5]+0x00000008u,c->r[10]); // 800FEEA4
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEEA8
  c->r[7]=c->r[7]+c->r[8]; // 800FEEAC
  c->r[10]=c->r[7]-c->r[10]; // 800FEEB0
  c->r[10]=c->r[10]+0x00000001u; // 800FEEB4
  c->r[10]=sraw(c,c->r[10],1); // 800FEEB8
  W32(c->r[6]+0x00000008u,c->r[10]); // 800FEEBC
  c->r[10]=R32(c->r[5]+0x00000008u); // 800FEEC0
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEEC4
  W32(c->r[5]+0x00000008u,c->r[10]); // 800FEEC8
  c->r[10]=R8(c->r[9]+0x00000003u); // 800FEECC
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 800FEED0
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEED4
  c->r[7]=c->r[7]+c->r[8]; // 800FEED8
  c->r[10]=c->r[7]-c->r[10]; // 800FEEDC
  c->r[10]=c->r[10]+0x00000001u; // 800FEEE0
  c->r[10]=sraw(c,c->r[10],1); // 800FEEE4
  W32(c->r[6]+0x0000000Cu,c->r[10]); // 800FEEE8
  c->r[10]=R32(c->r[5]+0x0000000Cu); // 800FEEEC
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEEF0
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 800FEEF4
  c->r[10]=R8(c->r[9]+0x00000004u); // 800FEEF8
  W32(c->r[5]+0x00000010u,c->r[10]); // 800FEEFC
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEF00
  c->r[7]=c->r[7]+c->r[8]; // 800FEF04
  c->r[10]=c->r[7]-c->r[10]; // 800FEF08
  c->r[10]=c->r[10]+0x00000001u; // 800FEF0C
  c->r[10]=sraw(c,c->r[10],1); // 800FEF10
  W32(c->r[6]+0x00000010u,c->r[10]); // 800FEF14
  c->r[10]=R32(c->r[5]+0x00000010u); // 800FEF18
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEF1C
  W32(c->r[5]+0x00000010u,c->r[10]); // 800FEF20
  c->r[10]=R8(c->r[9]+0x00000005u); // 800FEF24
  W32(c->r[5]+0x00000014u,c->r[10]); // 800FEF28
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEF2C
  c->r[7]=c->r[7]+c->r[8]; // 800FEF30
  c->r[10]=c->r[7]-c->r[10]; // 800FEF34
  c->r[10]=c->r[10]+0x00000001u; // 800FEF38
  c->r[10]=sraw(c,c->r[10],1); // 800FEF3C
  W32(c->r[6]+0x00000014u,c->r[10]); // 800FEF40
  c->r[10]=R32(c->r[5]+0x00000014u); // 800FEF44
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEF48
  W32(c->r[5]+0x00000014u,c->r[10]); // 800FEF4C
  c->r[10]=R8(c->r[9]+0x00000006u); // 800FEF50
  W32(c->r[5]+0x00000018u,c->r[10]); // 800FEF54
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEF58
  c->r[7]=c->r[7]+c->r[8]; // 800FEF5C
  c->r[10]=c->r[7]-c->r[10]; // 800FEF60
  c->r[10]=c->r[10]+0x00000001u; // 800FEF64
  c->r[10]=sraw(c,c->r[10],1); // 800FEF68
  W32(c->r[6]+0x00000018u,c->r[10]); // 800FEF6C
  c->r[10]=R32(c->r[5]+0x00000018u); // 800FEF70
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEF74
  W32(c->r[5]+0x00000018u,c->r[10]); // 800FEF78
  c->r[10]=R8(c->r[9]+0x00000007u); // 800FEF7C
  W32(c->r[5]+0x0000001Cu,c->r[10]); // 800FEF80
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800FEF84
  c->r[7]=c->r[7]+c->r[8]; // 800FEF88
  c->r[10]=c->r[7]-c->r[10]; // 800FEF8C
  c->r[10]=c->r[10]+0x00000001u; // 800FEF90
  c->r[10]=sraw(c,c->r[10],1); // 800FEF94
  W32(c->r[6]+0x0000001Cu,c->r[10]); // 800FEF98
  c->r[10]=R32(c->r[5]+0x0000001Cu); // 800FEF9C
  c->r[10]=rotl(c->r[10],6)&0xFFFFFFC0u; // 800FEFA0
  W32(c->r[5]+0x0000001Cu,c->r[10]); // 800FEFA4
  c->r[5]=c->r[5]+0x00000020u; // 800FEFA8
  c->r[6]=c->r[6]+0x00000020u; // 800FEFAC
  c->r[9]=c->r[9]+0x00000008u; // 800FEFB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FEE48; } // 800FEFB4
  c->r[5]=addc(c,~c->r[4],0x0000000Fu,1); // 800FEFB8
  c->r[6]=R8(c->r[3]+c->r[5]); // 800FEFBC
  c->r[5]=c->r[0]-c->r[6]; // 800FEFC0
  c->r[0]=c->r[5]+0x00000001u; // 800FEFC4
  c->r[5]=sraw(c,c->r[0],1); // 800FEFC8
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800FEFCC
  c->r[6]=0u+0x00000000u; // 800FEFD0
L_800FEFD4:;
  c->r[9]=R8(c->r[3]+0xFFFFFFFFu); // 800FEFD4
  c->r[7]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FEFD8
  c->r[0]=c->r[0]+c->r[5]; // 800FEFDC
  c->r[7]=c->r[0]-c->r[7]; // 800FEFE0
  c->r[7]=c->r[7]+0x00000001u; // 800FEFE4
  c->r[8]=sraw(c,c->r[7],1); // 800FEFE8
  c->r[7]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FEFEC
  c->r[9]=c->r[1]+0x00000048u; // 800FEFF0
  c->r[10]=c->r[1]+0x00000008u; // 800FEFF4
  c->r[11]=c->r[3]|c->r[3]; // 800FEFF8
  c->r[12]=0u+0x00000002u; // 800FEFFC
  c->ctr=c->r[12]; // 800FF000
L_800FF004:;
  c->r[7]=c->r[7]+c->r[8]; // 800FF004
  c->r[31]=R32(c->r[9]+0x00000000u); // 800FF008
  c->r[12]=R32(c->r[10]+0x00000000u); // 800FF00C
  c->r[12]=c->r[31]+c->r[12]; // 800FF010
  W32(c->r[9]+0x00000000u,c->r[12]); // 800FF014
  c->r[12]=c->r[7]+c->r[12]; // 800FF018
  c->r[12]=c->r[12]+0x00000040u; // 800FF01C
  c->r[12]=sraw(c,c->r[12],7); // 800FF020
  W8(c->r[11]+0x00000000u,c->r[12]); // 800FF024
  c->r[7]=c->r[7]+c->r[8]; // 800FF028
  c->r[31]=R32(c->r[9]+0x00000004u); // 800FF02C
  c->r[12]=R32(c->r[10]+0x00000004u); // 800FF030
  c->r[12]=c->r[31]+c->r[12]; // 800FF034
  W32(c->r[9]+0x00000004u,c->r[12]); // 800FF038
  c->r[12]=c->r[7]+c->r[12]; // 800FF03C
  c->r[12]=c->r[12]+0x00000040u; // 800FF040
  c->r[12]=sraw(c,c->r[12],7); // 800FF044
  W8(c->r[11]+0x00000001u,c->r[12]); // 800FF048
  c->r[7]=c->r[7]+c->r[8]; // 800FF04C
  c->r[31]=R32(c->r[9]+0x00000008u); // 800FF050
  c->r[12]=R32(c->r[10]+0x00000008u); // 800FF054
  c->r[12]=c->r[31]+c->r[12]; // 800FF058
  W32(c->r[9]+0x00000008u,c->r[12]); // 800FF05C
  c->r[12]=c->r[7]+c->r[12]; // 800FF060
  c->r[12]=c->r[12]+0x00000040u; // 800FF064
  c->r[12]=sraw(c,c->r[12],7); // 800FF068
  W8(c->r[11]+0x00000002u,c->r[12]); // 800FF06C
  c->r[7]=c->r[7]+c->r[8]; // 800FF070
  c->r[31]=R32(c->r[9]+0x0000000Cu); // 800FF074
  c->r[12]=R32(c->r[10]+0x0000000Cu); // 800FF078
  c->r[12]=c->r[31]+c->r[12]; // 800FF07C
  W32(c->r[9]+0x0000000Cu,c->r[12]); // 800FF080
  c->r[12]=c->r[7]+c->r[12]; // 800FF084
  c->r[12]=c->r[12]+0x00000040u; // 800FF088
  c->r[12]=sraw(c,c->r[12],7); // 800FF08C
  W8(c->r[11]+0x00000003u,c->r[12]); // 800FF090
  c->r[7]=c->r[7]+c->r[8]; // 800FF094
  c->r[31]=R32(c->r[9]+0x00000010u); // 800FF098
  c->r[12]=R32(c->r[10]+0x00000010u); // 800FF09C
  c->r[12]=c->r[31]+c->r[12]; // 800FF0A0
  W32(c->r[9]+0x00000010u,c->r[12]); // 800FF0A4
  c->r[12]=c->r[7]+c->r[12]; // 800FF0A8
  c->r[12]=c->r[12]+0x00000040u; // 800FF0AC
  c->r[12]=sraw(c,c->r[12],7); // 800FF0B0
  W8(c->r[11]+0x00000004u,c->r[12]); // 800FF0B4
  c->r[7]=c->r[7]+c->r[8]; // 800FF0B8
  c->r[31]=R32(c->r[9]+0x00000014u); // 800FF0BC
  c->r[12]=R32(c->r[10]+0x00000014u); // 800FF0C0
  c->r[12]=c->r[31]+c->r[12]; // 800FF0C4
  W32(c->r[9]+0x00000014u,c->r[12]); // 800FF0C8
  c->r[12]=c->r[7]+c->r[12]; // 800FF0CC
  c->r[12]=c->r[12]+0x00000040u; // 800FF0D0
  c->r[12]=sraw(c,c->r[12],7); // 800FF0D4
  W8(c->r[11]+0x00000005u,c->r[12]); // 800FF0D8
  c->r[7]=c->r[7]+c->r[8]; // 800FF0DC
  c->r[31]=R32(c->r[9]+0x00000018u); // 800FF0E0
  c->r[12]=R32(c->r[10]+0x00000018u); // 800FF0E4
  c->r[12]=c->r[31]+c->r[12]; // 800FF0E8
  W32(c->r[9]+0x00000018u,c->r[12]); // 800FF0EC
  c->r[12]=c->r[7]+c->r[12]; // 800FF0F0
  c->r[12]=c->r[12]+0x00000040u; // 800FF0F4
  c->r[12]=sraw(c,c->r[12],7); // 800FF0F8
  W8(c->r[11]+0x00000006u,c->r[12]); // 800FF0FC
  c->r[7]=c->r[7]+c->r[8]; // 800FF100
  c->r[31]=R32(c->r[9]+0x0000001Cu); // 800FF104
  c->r[12]=R32(c->r[10]+0x0000001Cu); // 800FF108
  c->r[12]=c->r[31]+c->r[12]; // 800FF10C
  W32(c->r[9]+0x0000001Cu,c->r[12]); // 800FF110
  c->r[12]=c->r[7]+c->r[12]; // 800FF114
  c->r[12]=c->r[12]+0x00000040u; // 800FF118
  c->r[12]=sraw(c,c->r[12],7); // 800FF11C
  W8(c->r[11]+0x00000007u,c->r[12]); // 800FF120
  c->r[11]=c->r[11]+0x00000008u; // 800FF124
  c->r[9]=c->r[9]+0x00000020u; // 800FF128
  c->r[10]=c->r[10]+0x00000020u; // 800FF12C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF004; } // 800FF130
  c->r[3]=c->r[3]+c->r[4]; // 800FF134
  c->r[6]=c->r[6]+0x00000001u; // 800FF138
  cmps(c,0,(int32_t)c->r[6],16); // 800FF13C
  if (crb(c,0)) { IRQCHK(c); goto L_800FEFD4; } // 800FF140
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800FF144
  c->r[1]=c->r[1]+0x00000090u; // 800FF148
  return; // 800FF14C
}

// fn_800FF150
void f_800FF150(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FF150
  c->r[5]=R32(c->r[3]+c->r[0]); // 800FF154
  c->r[0]=addc(c,~c->r[4],0x00000004u,1); // 800FF158
  c->r[0]=R32(c->r[3]+c->r[0]); // 800FF15C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF160
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF164
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF168
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF16C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF170
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF174
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF178
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF17C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF180
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF184
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF188
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF18C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF190
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF194
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF198
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF19C
  return; // 800FF1A0
}

// fn_800FF1A4
void f_800FF1A4(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FF1A4
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 800FF1A8
  c->r[5]=c->r[5]|c->r[0]; // 800FF1AC
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF1B0
  c->r[5]=c->r[5]|c->r[0]; // 800FF1B4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF1B8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF1BC
  c->r[5]=c->r[3]+c->r[4]; // 800FF1C0
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF1C4
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF1C8
  c->r[3]=c->r[3]|c->r[0]; // 800FF1CC
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF1D0
  c->r[3]=c->r[3]|c->r[0]; // 800FF1D4
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF1D8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF1DC
  c->r[5]=c->r[5]+c->r[4]; // 800FF1E0
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF1E4
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF1E8
  c->r[3]=c->r[3]|c->r[0]; // 800FF1EC
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF1F0
  c->r[3]=c->r[3]|c->r[0]; // 800FF1F4
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF1F8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF1FC
  c->r[5]=c->r[5]+c->r[4]; // 800FF200
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF204
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF208
  c->r[3]=c->r[3]|c->r[0]; // 800FF20C
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF210
  c->r[3]=c->r[3]|c->r[0]; // 800FF214
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF218
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF21C
  c->r[5]=c->r[5]+c->r[4]; // 800FF220
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF224
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF228
  c->r[3]=c->r[3]|c->r[0]; // 800FF22C
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF230
  c->r[3]=c->r[3]|c->r[0]; // 800FF234
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF238
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF23C
  c->r[5]=c->r[5]+c->r[4]; // 800FF240
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF244
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF248
  c->r[3]=c->r[3]|c->r[0]; // 800FF24C
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF250
  c->r[3]=c->r[3]|c->r[0]; // 800FF254
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF258
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF25C
  c->r[5]=c->r[5]+c->r[4]; // 800FF260
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF264
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF268
  c->r[3]=c->r[3]|c->r[0]; // 800FF26C
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF270
  c->r[3]=c->r[3]|c->r[0]; // 800FF274
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF278
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF27C
  c->r[5]=c->r[5]+c->r[4]; // 800FF280
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF284
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF288
  c->r[3]=c->r[3]|c->r[0]; // 800FF28C
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF290
  c->r[3]=c->r[3]|c->r[0]; // 800FF294
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF298
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF29C
  return; // 800FF2A0
}

// fn_800FF2A4
void f_800FF2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF2A4
  c->r[8]=addc(c,~c->r[4],0x00000007u,1); // 800FF2A8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FF2AC
  c->r[6]=c->r[0]-c->r[4]; // 800FF2B0
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FF2B4
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FF2B8
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FF2BC
  c->r[6]=c->r[7]+c->r[0]; // 800FF2C0
  c->r[0]=c->r[6]+0x00000001u; // 800FF2C4
  c->r[6]=sraw(c,c->r[0],1); // 800FF2C8
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FF2CC
  c->r[0]=c->r[6]+c->r[0]; // 800FF2D0
  c->r[6]=c->r[0]-c->r[7]; // 800FF2D4
  c->r[5]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800FF2D8
  c->r[7]=0u-c->r[4]; // 800FF2DC
  {uint32_t ea=c->r[7]+c->r[3]; c->r[9]=R8(ea); c->r[7]=ea;} // 800FF2E0
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF2E4
  c->r[5]=c->r[5]+c->r[6]; // 800FF2E8
  c->r[8]=c->r[5]-c->r[8]; // 800FF2EC
  W32(c->r[1]+0x00000008u,c->r[8]); // 800FF2F0
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF2F4
  W32(c->r[1]+0x00000028u,c->r[8]); // 800FF2F8
  c->r[9]=R8(c->r[7]+0x00000001u); // 800FF2FC
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF300
  c->r[5]=c->r[5]+c->r[6]; // 800FF304
  c->r[8]=c->r[5]-c->r[8]; // 800FF308
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 800FF30C
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF310
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 800FF314
  c->r[9]=R8(c->r[7]+0x00000002u); // 800FF318
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF31C
  c->r[5]=c->r[5]+c->r[6]; // 800FF320
  c->r[8]=c->r[5]-c->r[8]; // 800FF324
  W32(c->r[1]+0x00000010u,c->r[8]); // 800FF328
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF32C
  W32(c->r[1]+0x00000030u,c->r[8]); // 800FF330
  c->r[9]=R8(c->r[7]+0x00000003u); // 800FF334
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF338
  c->r[5]=c->r[5]+c->r[6]; // 800FF33C
  c->r[8]=c->r[5]-c->r[8]; // 800FF340
  W32(c->r[1]+0x00000014u,c->r[8]); // 800FF344
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF348
  W32(c->r[1]+0x00000034u,c->r[8]); // 800FF34C
  c->r[9]=R8(c->r[7]+0x00000004u); // 800FF350
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF354
  c->r[5]=c->r[5]+c->r[6]; // 800FF358
  c->r[8]=c->r[5]-c->r[8]; // 800FF35C
  W32(c->r[1]+0x00000018u,c->r[8]); // 800FF360
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF364
  W32(c->r[1]+0x00000038u,c->r[8]); // 800FF368
  c->r[9]=R8(c->r[7]+0x00000005u); // 800FF36C
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF370
  c->r[5]=c->r[5]+c->r[6]; // 800FF374
  c->r[8]=c->r[5]-c->r[8]; // 800FF378
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800FF37C
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF380
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800FF384
  c->r[9]=R8(c->r[7]+0x00000006u); // 800FF388
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 800FF38C
  c->r[5]=c->r[5]+c->r[6]; // 800FF390
  c->r[8]=c->r[5]-c->r[8]; // 800FF394
  W32(c->r[1]+0x00000020u,c->r[8]); // 800FF398
  c->r[8]=rotl(c->r[9],6)&0xFFFFFFC0u; // 800FF39C
  W32(c->r[1]+0x00000040u,c->r[8]); // 800FF3A0
  c->r[8]=R8(c->r[7]+0x00000007u); // 800FF3A4
  c->r[7]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800FF3A8
  c->r[5]=c->r[5]+c->r[6]; // 800FF3AC
  c->r[5]=c->r[5]-c->r[7]; // 800FF3B0
  W32(c->r[1]+0x00000024u,c->r[5]); // 800FF3B4
  c->r[5]=rotl(c->r[8],6)&0xFFFFFFC0u; // 800FF3B8
  W32(c->r[1]+0x00000044u,c->r[5]); // 800FF3BC
  c->r[5]=addc(c,~c->r[4],0x00000007u,1); // 800FF3C0
  c->r[6]=R8(c->r[3]+c->r[5]); // 800FF3C4
  c->r[5]=c->r[0]-c->r[6]; // 800FF3C8
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800FF3CC
  c->r[6]=0u+0x00000008u; // 800FF3D0
  c->ctr=c->r[6]; // 800FF3D4
L_800FF3D8:;
  c->r[8]=R8(c->r[3]+0xFFFFFFFFu); // 800FF3D8
  c->r[6]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800FF3DC
  c->r[0]=c->r[0]+c->r[5]; // 800FF3E0
  c->r[7]=c->r[0]-c->r[6]; // 800FF3E4
  c->r[6]=rotl(c->r[8],6)&0xFFFFFFC0u; // 800FF3E8
  c->r[6]=c->r[6]+c->r[7]; // 800FF3EC
  c->r[9]=R32(c->r[1]+0x00000028u); // 800FF3F0
  c->r[8]=R32(c->r[1]+0x00000008u); // 800FF3F4
  c->r[8]=c->r[9]+c->r[8]; // 800FF3F8
  W32(c->r[1]+0x00000028u,c->r[8]); // 800FF3FC
  c->r[8]=c->r[6]+c->r[8]; // 800FF400
  c->r[8]=c->r[8]+0x00000040u; // 800FF404
  c->r[8]=sraw(c,c->r[8],7); // 800FF408
  W8(c->r[3]+0x00000000u,c->r[8]); // 800FF40C
  c->r[6]=c->r[6]+c->r[7]; // 800FF410
  c->r[9]=R32(c->r[1]+0x0000002Cu); // 800FF414
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 800FF418
  c->r[8]=c->r[9]+c->r[8]; // 800FF41C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 800FF420
  c->r[8]=c->r[6]+c->r[8]; // 800FF424
  c->r[8]=c->r[8]+0x00000040u; // 800FF428
  c->r[8]=sraw(c,c->r[8],7); // 800FF42C
  W8(c->r[3]+0x00000001u,c->r[8]); // 800FF430
  c->r[6]=c->r[6]+c->r[7]; // 800FF434
  c->r[9]=R32(c->r[1]+0x00000030u); // 800FF438
  c->r[8]=R32(c->r[1]+0x00000010u); // 800FF43C
  c->r[8]=c->r[9]+c->r[8]; // 800FF440
  W32(c->r[1]+0x00000030u,c->r[8]); // 800FF444
  c->r[8]=c->r[6]+c->r[8]; // 800FF448
  c->r[8]=c->r[8]+0x00000040u; // 800FF44C
  c->r[8]=sraw(c,c->r[8],7); // 800FF450
  W8(c->r[3]+0x00000002u,c->r[8]); // 800FF454
  c->r[6]=c->r[6]+c->r[7]; // 800FF458
  c->r[9]=R32(c->r[1]+0x00000034u); // 800FF45C
  c->r[8]=R32(c->r[1]+0x00000014u); // 800FF460
  c->r[8]=c->r[9]+c->r[8]; // 800FF464
  W32(c->r[1]+0x00000034u,c->r[8]); // 800FF468
  c->r[8]=c->r[6]+c->r[8]; // 800FF46C
  c->r[8]=c->r[8]+0x00000040u; // 800FF470
  c->r[8]=sraw(c,c->r[8],7); // 800FF474
  W8(c->r[3]+0x00000003u,c->r[8]); // 800FF478
  c->r[6]=c->r[6]+c->r[7]; // 800FF47C
  c->r[9]=R32(c->r[1]+0x00000038u); // 800FF480
  c->r[8]=R32(c->r[1]+0x00000018u); // 800FF484
  c->r[8]=c->r[9]+c->r[8]; // 800FF488
  W32(c->r[1]+0x00000038u,c->r[8]); // 800FF48C
  c->r[8]=c->r[6]+c->r[8]; // 800FF490
  c->r[8]=c->r[8]+0x00000040u; // 800FF494
  c->r[8]=sraw(c,c->r[8],7); // 800FF498
  W8(c->r[3]+0x00000004u,c->r[8]); // 800FF49C
  c->r[6]=c->r[6]+c->r[7]; // 800FF4A0
  c->r[9]=R32(c->r[1]+0x0000003Cu); // 800FF4A4
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 800FF4A8
  c->r[8]=c->r[9]+c->r[8]; // 800FF4AC
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 800FF4B0
  c->r[8]=c->r[6]+c->r[8]; // 800FF4B4
  c->r[8]=c->r[8]+0x00000040u; // 800FF4B8
  c->r[8]=sraw(c,c->r[8],7); // 800FF4BC
  W8(c->r[3]+0x00000005u,c->r[8]); // 800FF4C0
  c->r[6]=c->r[6]+c->r[7]; // 800FF4C4
  c->r[9]=R32(c->r[1]+0x00000040u); // 800FF4C8
  c->r[8]=R32(c->r[1]+0x00000020u); // 800FF4CC
  c->r[8]=c->r[9]+c->r[8]; // 800FF4D0
  W32(c->r[1]+0x00000040u,c->r[8]); // 800FF4D4
  c->r[8]=c->r[6]+c->r[8]; // 800FF4D8
  c->r[8]=c->r[8]+0x00000040u; // 800FF4DC
  c->r[8]=sraw(c,c->r[8],7); // 800FF4E0
  W8(c->r[3]+0x00000006u,c->r[8]); // 800FF4E4
  c->r[9]=R32(c->r[1]+0x00000044u); // 800FF4E8
  c->r[8]=R32(c->r[1]+0x00000024u); // 800FF4EC
  c->r[8]=c->r[9]+c->r[8]; // 800FF4F0
  W32(c->r[1]+0x00000044u,c->r[8]); // 800FF4F4
  c->r[6]=c->r[6]+c->r[7]; // 800FF4F8
  c->r[6]=c->r[8]+c->r[6]; // 800FF4FC
  c->r[6]=c->r[6]+0x00000040u; // 800FF500
  c->r[6]=sraw(c,c->r[6],7); // 800FF504
  W8(c->r[3]+0x00000007u,c->r[6]); // 800FF508
  c->r[3]=c->r[3]+c->r[4]; // 800FF50C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF3D8; } // 800FF510
  c->r[1]=c->r[1]+0x00000050u; // 800FF514
  return; // 800FF518
}

// fn_800FF51C
void f_800FF51C(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FF51C
  c->r[6]=c->r[3]+c->r[0]; // 800FF520
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FF524
  c->r[0]=R8(c->r[6]+0x00000001u); // 800FF528
  c->r[5]=c->r[5]+c->r[0]; // 800FF52C
  c->r[0]=R8(c->r[6]+0x00000002u); // 800FF530
  c->r[5]=c->r[5]+c->r[0]; // 800FF534
  c->r[0]=R8(c->r[6]+0x00000003u); // 800FF538
  c->r[5]=c->r[5]+c->r[0]; // 800FF53C
  c->r[0]=R8(c->r[6]+0x00000004u); // 800FF540
  c->r[5]=c->r[5]+c->r[0]; // 800FF544
  c->r[0]=R8(c->r[6]+0x00000005u); // 800FF548
  c->r[5]=c->r[5]+c->r[0]; // 800FF54C
  c->r[0]=R8(c->r[6]+0x00000006u); // 800FF550
  c->r[5]=c->r[5]+c->r[0]; // 800FF554
  c->r[0]=R8(c->r[6]+0x00000007u); // 800FF558
  c->r[5]=c->r[5]+c->r[0]; // 800FF55C
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800FF560
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800FF564
  c->r[5]=c->r[5]+c->r[0]; // 800FF568
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF56C
  c->r[5]=c->r[5]+c->r[0]; // 800FF570
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF574
  c->r[5]=c->r[5]+c->r[0]; // 800FF578
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF57C
  c->r[5]=c->r[5]+c->r[0]; // 800FF580
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF584
  c->r[5]=c->r[5]+c->r[0]; // 800FF588
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF58C
  c->r[5]=c->r[5]+c->r[0]; // 800FF590
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF594
  c->r[5]=c->r[5]+c->r[0]; // 800FF598
  c->r[0]=R8(c->r[6]+c->r[4]); // 800FF59C
  c->r[5]=c->r[5]+c->r[0]; // 800FF5A0
  c->r[0]=c->r[5]+0x00000008u; // 800FF5A4
  c->r[5]=rotl(c->r[0],28)&0x0FFFFFFFu; // 800FF5A8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFF00u; // 800FF5AC
  c->r[5]=c->r[5]|c->r[0]; // 800FF5B0
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF5B4
  c->r[5]=c->r[5]|c->r[0]; // 800FF5B8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF5BC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5C0
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5C4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5C8
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5CC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5D0
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5D4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5D8
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5DC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5E0
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5E4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5E8
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5EC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5F0
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF5F4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF5F8
  return; // 800FF5FC
}

// fn_800FF600
void f_800FF600(Ctx* __restrict c) {
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800FF600
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FF604
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF608
  c->r[5]=c->r[5]+c->r[0]; // 800FF60C
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF610
  c->r[5]=c->r[5]+c->r[0]; // 800FF614
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF618
  c->r[5]=c->r[5]+c->r[0]; // 800FF61C
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF620
  c->r[5]=c->r[5]+c->r[0]; // 800FF624
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF628
  c->r[5]=c->r[5]+c->r[0]; // 800FF62C
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF630
  c->r[5]=c->r[5]+c->r[0]; // 800FF634
  c->r[0]=R8(c->r[6]+c->r[4]); // 800FF638
  c->r[5]=c->r[5]+c->r[0]; // 800FF63C
  c->r[0]=c->r[5]+0x00000004u; // 800FF640
  c->r[5]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800FF644
  c->r[0]=rotl(c->r[0],5)&0xFFFFFF00u; // 800FF648
  c->r[5]=c->r[5]|c->r[0]; // 800FF64C
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF650
  c->r[5]=c->r[5]|c->r[0]; // 800FF654
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF658
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF65C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF660
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF664
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF668
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF66C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF670
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF674
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF678
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF67C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF680
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF684
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF688
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF68C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF690
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF694
  return; // 800FF698
}

// fn_800FF69C
void f_800FF69C(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FF69C
  c->r[6]=c->r[3]+c->r[0]; // 800FF6A0
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FF6A4
  c->r[0]=R8(c->r[6]+0x00000001u); // 800FF6A8
  c->r[5]=c->r[5]+c->r[0]; // 800FF6AC
  c->r[0]=R8(c->r[6]+0x00000002u); // 800FF6B0
  c->r[5]=c->r[5]+c->r[0]; // 800FF6B4
  c->r[0]=R8(c->r[6]+0x00000003u); // 800FF6B8
  c->r[5]=c->r[5]+c->r[0]; // 800FF6BC
  c->r[0]=R8(c->r[6]+0x00000004u); // 800FF6C0
  c->r[5]=c->r[5]+c->r[0]; // 800FF6C4
  c->r[0]=R8(c->r[6]+0x00000005u); // 800FF6C8
  c->r[5]=c->r[5]+c->r[0]; // 800FF6CC
  c->r[0]=R8(c->r[6]+0x00000006u); // 800FF6D0
  c->r[5]=c->r[5]+c->r[0]; // 800FF6D4
  c->r[0]=R8(c->r[6]+0x00000007u); // 800FF6D8
  c->r[5]=c->r[5]+c->r[0]; // 800FF6DC
  c->r[0]=c->r[5]+0x00000004u; // 800FF6E0
  c->r[5]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800FF6E4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFF00u; // 800FF6E8
  c->r[5]=c->r[5]|c->r[0]; // 800FF6EC
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF6F0
  c->r[5]=c->r[5]|c->r[0]; // 800FF6F4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF6F8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF6FC
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF700
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF704
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF708
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF70C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF710
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF714
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF718
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF71C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF720
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF724
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF728
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF72C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF730
  W32(c->r[3]+0x00000004u,c->r[5]); // 800FF734
  return; // 800FF738
}

// fn_800FF73C
void f_800FF73C(Ctx* __restrict c) {
  c->r[5]=0u+0x80810000u; // 800FF73C
  c->r[0]=c->r[5]+0xFFFF8080u; // 800FF740
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FF744
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF748
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF74C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF750
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF754
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF758
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF75C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF760
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF764
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF768
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF76C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF770
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF774
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF778
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF77C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF780
  return; // 800FF784
}

// fn_800FF788
void f_800FF788(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FF788
  c->r[0]=R32(c->r[3]+c->r[0]); // 800FF78C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FF790
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF794
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FF798
  W32(c->r[3]+c->r[4],c->r[0]); // 800FF79C
  return; // 800FF7A0
}

// fn_800FF7A4
void f_800FF7A4(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FF7A4
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 800FF7A8
  c->r[5]=c->r[5]|c->r[0]; // 800FF7AC
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF7B0
  c->r[5]=c->r[5]|c->r[0]; // 800FF7B4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF7B8
  c->r[5]=c->r[3]+c->r[4]; // 800FF7BC
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF7C0
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF7C4
  c->r[3]=c->r[3]|c->r[0]; // 800FF7C8
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF7CC
  c->r[3]=c->r[3]|c->r[0]; // 800FF7D0
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF7D4
  c->r[5]=c->r[5]+c->r[4]; // 800FF7D8
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF7DC
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF7E0
  c->r[3]=c->r[3]|c->r[0]; // 800FF7E4
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF7E8
  c->r[3]=c->r[3]|c->r[0]; // 800FF7EC
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF7F0
  c->r[5]=c->r[5]+c->r[4]; // 800FF7F4
  c->r[3]=R8(c->r[5]+0xFFFFFFFFu); // 800FF7F8
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF7FC
  c->r[3]=c->r[3]|c->r[0]; // 800FF800
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 800FF804
  c->r[3]=c->r[3]|c->r[0]; // 800FF808
  W32(c->r[5]+0x00000000u,c->r[3]); // 800FF80C
  return; // 800FF810
}

// fn_800FF814
void f_800FF814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF814
  c->r[8]=addc(c,~c->r[4],0x00000003u,1); // 800FF818
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FF81C
  c->r[6]=c->r[0]-c->r[4]; // 800FF820
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FF824
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FF828
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FF82C
  c->r[6]=c->r[7]+c->r[0]; // 800FF830
  c->r[0]=c->r[6]+0x00000001u; // 800FF834
  c->r[6]=sraw(c,c->r[0],1); // 800FF838
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FF83C
  c->r[8]=c->r[6]+c->r[0]; // 800FF840
  c->r[9]=c->r[8]-c->r[7]; // 800FF844
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800FF848
  c->r[0]=0u-c->r[4]; // 800FF84C
  c->r[6]=c->r[3]+c->r[0]; // 800FF850
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FF854
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FF858
  c->r[7]=c->r[7]+c->r[9]; // 800FF85C
  c->r[0]=c->r[7]-c->r[0]; // 800FF860
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FF864
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800FF868
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FF86C
  c->r[5]=R8(c->r[6]+0x00000001u); // 800FF870
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FF874
  c->r[7]=c->r[7]+c->r[9]; // 800FF878
  c->r[0]=c->r[7]-c->r[0]; // 800FF87C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FF880
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800FF884
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FF888
  c->r[5]=R8(c->r[6]+0x00000002u); // 800FF88C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800FF890
  c->r[7]=c->r[7]+c->r[9]; // 800FF894
  c->r[0]=c->r[7]-c->r[0]; // 800FF898
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF89C
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800FF8A0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800FF8A4
  c->r[6]=R8(c->r[6]+0x00000003u); // 800FF8A8
  c->r[5]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800FF8AC
  c->r[0]=c->r[7]+c->r[9]; // 800FF8B0
  c->r[0]=c->r[0]-c->r[5]; // 800FF8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF8B8
  c->r[0]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800FF8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF8C0
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 800FF8C4
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FF8C8
  c->r[5]=c->r[8]-c->r[0]; // 800FF8CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FF8D0
  c->r[6]=0u+0x00000004u; // 800FF8D4
  c->ctr=c->r[6]; // 800FF8D8
L_800FF8DC:;
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FF8DC
  c->r[6]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800FF8E0
  c->r[0]=c->r[0]+c->r[5]; // 800FF8E4
  c->r[9]=c->r[0]-c->r[6]; // 800FF8E8
  c->r[8]=rotl(c->r[7],4)&0xFFFFFFF0u; // 800FF8EC
  c->r[8]=c->r[8]+c->r[9]; // 800FF8F0
  c->r[7]=R32(c->r[1]+0x00000018u); // 800FF8F4
  c->r[6]=R32(c->r[1]+0x00000008u); // 800FF8F8
  c->r[6]=c->r[7]+c->r[6]; // 800FF8FC
  W32(c->r[1]+0x00000018u,c->r[6]); // 800FF900
  c->r[6]=c->r[8]+c->r[6]; // 800FF904
  c->r[6]=c->r[6]+0x00000010u; // 800FF908
  c->r[6]=sraw(c,c->r[6],5); // 800FF90C
  W8(c->r[3]+0x00000000u,c->r[6]); // 800FF910
  c->r[8]=c->r[8]+c->r[9]; // 800FF914
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 800FF918
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800FF91C
  c->r[6]=c->r[7]+c->r[6]; // 800FF920
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800FF924
  c->r[6]=c->r[8]+c->r[6]; // 800FF928
  c->r[6]=c->r[6]+0x00000010u; // 800FF92C
  c->r[6]=sraw(c,c->r[6],5); // 800FF930
  W8(c->r[3]+0x00000001u,c->r[6]); // 800FF934
  c->r[8]=c->r[8]+c->r[9]; // 800FF938
  c->r[7]=R32(c->r[1]+0x00000020u); // 800FF93C
  c->r[6]=R32(c->r[1]+0x00000010u); // 800FF940
  c->r[6]=c->r[7]+c->r[6]; // 800FF944
  W32(c->r[1]+0x00000020u,c->r[6]); // 800FF948
  c->r[6]=c->r[8]+c->r[6]; // 800FF94C
  c->r[6]=c->r[6]+0x00000010u; // 800FF950
  c->r[6]=sraw(c,c->r[6],5); // 800FF954
  W8(c->r[3]+0x00000002u,c->r[6]); // 800FF958
  c->r[7]=R32(c->r[1]+0x00000024u); // 800FF95C
  c->r[6]=R32(c->r[1]+0x00000014u); // 800FF960
  c->r[7]=c->r[7]+c->r[6]; // 800FF964
  W32(c->r[1]+0x00000024u,c->r[7]); // 800FF968
  c->r[6]=c->r[8]+c->r[9]; // 800FF96C
  c->r[6]=c->r[7]+c->r[6]; // 800FF970
  c->r[6]=c->r[6]+0x00000010u; // 800FF974
  c->r[6]=sraw(c,c->r[6],5); // 800FF978
  W8(c->r[3]+0x00000003u,c->r[6]); // 800FF97C
  c->r[3]=c->r[3]+c->r[4]; // 800FF980
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF8DC; } // 800FF984
  c->r[1]=c->r[1]+0x00000030u; // 800FF988
  return; // 800FF98C
}

// fn_800FF990
void f_800FF990(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FF990
  c->r[6]=c->r[3]+c->r[0]; // 800FF994
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FF998
  c->r[0]=R8(c->r[6]+0x00000001u); // 800FF99C
  c->r[5]=c->r[5]+c->r[0]; // 800FF9A0
  c->r[0]=R8(c->r[6]+0x00000002u); // 800FF9A4
  c->r[5]=c->r[5]+c->r[0]; // 800FF9A8
  c->r[0]=R8(c->r[6]+0x00000003u); // 800FF9AC
  c->r[5]=c->r[5]+c->r[0]; // 800FF9B0
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800FF9B4
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800FF9B8
  c->r[5]=c->r[5]+c->r[0]; // 800FF9BC
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF9C0
  c->r[5]=c->r[5]+c->r[0]; // 800FF9C4
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FF9C8
  c->r[5]=c->r[5]+c->r[0]; // 800FF9CC
  c->r[0]=R8(c->r[6]+c->r[4]); // 800FF9D0
  c->r[5]=c->r[5]+c->r[0]; // 800FF9D4
  c->r[0]=c->r[5]+0x00000004u; // 800FF9D8
  c->r[5]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800FF9DC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFF00u; // 800FF9E0
  c->r[5]=c->r[5]|c->r[0]; // 800FF9E4
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FF9E8
  c->r[5]=c->r[5]|c->r[0]; // 800FF9EC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF9F0
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF9F4
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FF9F8
  W32(c->r[3]+c->r[4],c->r[5]); // 800FF9FC
  return; // 800FFA00
}

// fn_800FFA04
void f_800FFA04(Ctx* __restrict c) {
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800FFA04
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FFA08
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FFA0C
  c->r[5]=c->r[5]+c->r[0]; // 800FFA10
  {uint32_t ea=c->r[6]+c->r[4]; c->r[0]=R8(ea); c->r[6]=ea;} // 800FFA14
  c->r[5]=c->r[5]+c->r[0]; // 800FFA18
  c->r[0]=R8(c->r[6]+c->r[4]); // 800FFA1C
  c->r[5]=c->r[5]+c->r[0]; // 800FFA20
  c->r[0]=c->r[5]+0x00000002u; // 800FFA24
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800FFA28
  c->r[0]=rotl(c->r[0],6)&0xFFFFFF00u; // 800FFA2C
  c->r[5]=c->r[5]|c->r[0]; // 800FFA30
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FFA34
  c->r[5]=c->r[5]|c->r[0]; // 800FFA38
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FFA3C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FFA40
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FFA44
  W32(c->r[3]+c->r[4],c->r[5]); // 800FFA48
  return; // 800FFA4C
}

// fn_800FFA50
void f_800FFA50(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 800FFA50
  c->r[6]=c->r[3]+c->r[0]; // 800FFA54
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFA58
  c->r[0]=R8(c->r[6]+0x00000001u); // 800FFA5C
  c->r[5]=c->r[5]+c->r[0]; // 800FFA60
  c->r[0]=R8(c->r[6]+0x00000002u); // 800FFA64
  c->r[5]=c->r[5]+c->r[0]; // 800FFA68
  c->r[0]=R8(c->r[6]+0x00000003u); // 800FFA6C
  c->r[5]=c->r[5]+c->r[0]; // 800FFA70
  c->r[0]=c->r[5]+0x00000002u; // 800FFA74
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800FFA78
  c->r[0]=rotl(c->r[0],6)&0xFFFFFF00u; // 800FFA7C
  c->r[5]=c->r[5]|c->r[0]; // 800FFA80
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 800FFA84
  c->r[5]=c->r[5]|c->r[0]; // 800FFA88
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FFA8C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FFA90
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[5]); c->r[3]=ea;} // 800FFA94
  W32(c->r[3]+c->r[4],c->r[5]); // 800FFA98
  return; // 800FFA9C
}

// fn_800FFAA0
void f_800FFAA0(Ctx* __restrict c) {
  c->r[5]=0u+0x80810000u; // 800FFAA0
  c->r[0]=c->r[5]+0xFFFF8080u; // 800FFAA4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FFAA8
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FFAAC
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800FFAB0
  W32(c->r[3]+c->r[4],c->r[0]); // 800FFAB4
  return; // 800FFAB8
}

// fn_800FFABC
void f_800FFABC(Ctx* __restrict c) {
  c->r[5]=c->r[4]+c->r[3]; // 800FFABC
  c->r[9]=R8(c->r[3]+0xFFFFFFFFu); // 800FFAC0
  c->r[0]=R8(c->r[5]+0xFFFFFFFFu); // 800FFAC4
  c->r[6]=c->r[0]+c->r[9]; // 800FFAC8
  c->r[0]=c->r[6]+0x00000001u; // 800FFACC
  c->r[0]=sraw(c,c->r[0],1); // 800FFAD0
  W8(c->r[3]+0x00000000u,c->r[0]); // 800FFAD4
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FFAD8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800FFADC
  c->r[7]=R8(c->r[5]+0xFFFFFFFFu); // 800FFAE0
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800FFAE4
  c->r[8]=R8(c->r[3]+c->r[0]); // 800FFAE8
  c->r[7]=c->r[9]+c->r[7]; // 800FFAEC
  c->r[7]=c->r[7]+c->r[8]; // 800FFAF0
  c->r[7]=c->r[7]+0x00000002u; // 800FFAF4
  c->r[7]=sraw(c,c->r[7],2); // 800FFAF8
  W8(c->r[3]+0x00000001u,c->r[7]); // 800FFAFC
  c->r[8]=R8(c->r[5]+0xFFFFFFFFu); // 800FFB00
  c->r[7]=R8(c->r[3]+c->r[0]); // 800FFB04
  c->r[7]=c->r[8]+c->r[7]; // 800FFB08
  c->r[7]=c->r[7]+0x00000001u; // 800FFB0C
  c->r[7]=sraw(c,c->r[7],1); // 800FFB10
  W8(c->r[3]+c->r[4],c->r[7]); // 800FFB14
  W8(c->r[3]+0x00000002u,c->r[7]); // 800FFB18
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFB1C
  c->r[7]=c->r[7]-c->r[4]; // 800FFB20
  c->r[12]=c->r[7]+0xFFFFFFFFu; // 800FFB24
  c->r[11]=R8(c->r[3]+c->r[12]); // 800FFB28
  c->r[10]=R8(c->r[5]+0xFFFFFFFFu); // 800FFB2C
  c->r[8]=R8(c->r[3]+c->r[0]); // 800FFB30
  c->r[9]=rotl(c->r[8],1)&0xFFFFFFFEu; // 800FFB34
  c->r[8]=c->r[11]+c->r[10]; // 800FFB38
  c->r[8]=c->r[9]+c->r[8]; // 800FFB3C
  c->r[8]=c->r[8]+0x00000002u; // 800FFB40
  c->r[8]=sraw(c,c->r[8],2); // 800FFB44
  W8(c->r[5]+0x00000001u,c->r[8]); // 800FFB48
  W8(c->r[3]+0x00000003u,c->r[8]); // 800FFB4C
  c->r[9]=R8(c->r[3]+c->r[0]); // 800FFB50
  c->r[8]=R8(c->r[3]+c->r[12]); // 800FFB54
  c->r[8]=c->r[9]+c->r[8]; // 800FFB58
  c->r[8]=c->r[8]+0x00000001u; // 800FFB5C
  c->r[8]=sraw(c,c->r[8],1); // 800FFB60
  W8(c->r[3]+c->r[6],c->r[8]); // 800FFB64
  W8(c->r[5]+0x00000002u,c->r[8]); // 800FFB68
  c->r[9]=R8(c->r[3]+c->r[12]); // 800FFB6C
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FFB70
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800FFB74
  c->r[0]=c->r[9]+c->r[0]; // 800FFB78
  c->r[8]=c->r[8]+c->r[0]; // 800FFB7C
  c->r[0]=c->r[8]+0x00000002u; // 800FFB80
  c->r[0]=sraw(c,c->r[0],2); // 800FFB84
  c->r[6]=c->r[6]+c->r[3]; // 800FFB88
  W8(c->r[6]+0x00000001u,c->r[0]); // 800FFB8C
  W8(c->r[5]+0x00000003u,c->r[0]); // 800FFB90
  c->r[5]=R8(c->r[3]+c->r[12]); // 800FFB94
  c->r[4]=c->r[4]+0x00000001u; // 800FFB98
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFB9C
  c->r[0]=c->r[0]-c->r[4]; // 800FFBA0
  W8(c->r[3]+c->r[0],c->r[5]); // 800FFBA4
  c->r[4]=c->r[7]+c->r[3]; // 800FFBA8
  W8(c->r[4]+0x00000002u,c->r[5]); // 800FFBAC
  W8(c->r[4]+0x00000001u,c->r[5]); // 800FFBB0
  W8(c->r[6]+0x00000003u,c->r[5]); // 800FFBB4
  W8(c->r[6]+0x00000002u,c->r[5]); // 800FFBB8
  W8(c->r[3]+c->r[7],c->r[5]); // 800FFBBC
  return; // 800FFBC0
}

// fn_800FFBC4
void f_800FFBC4(Ctx* __restrict c) {
  c->r[0]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FFBC4
  c->r[6]=R8(c->r[3]+0xFFFFFFFFu); // 800FFBC8
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFBCC
  c->r[5]=c->r[5]+c->r[6]; // 800FFBD0
  c->r[5]=c->r[5]+0x00000001u; // 800FFBD4
  c->r[5]=sraw(c,c->r[5],1); // 800FFBD8
  c->r[7]=c->r[4]+c->r[3]; // 800FFBDC
  W8(c->r[7]+0x00000002u,c->r[5]); // 800FFBE0
  W8(c->r[3]+0x00000000u,c->r[5]); // 800FFBE4
  c->r[10]=0u-c->r[4]; // 800FFBE8
  c->r[8]=R8(c->r[3]+0xFFFFFFFFu); // 800FFBEC
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFBF0
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFBF4
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FFBF8
  c->r[5]=c->r[8]+c->r[5]; // 800FFBFC
  c->r[5]=c->r[5]+c->r[6]; // 800FFC00
  c->r[5]=c->r[5]+0x00000002u; // 800FFC04
  c->r[5]=sraw(c,c->r[5],2); // 800FFC08
  W8(c->r[7]+0x00000003u,c->r[5]); // 800FFC0C
  W8(c->r[3]+0x00000001u,c->r[5]); // 800FFC10
  c->r[11]=addc(c,~c->r[4],0x00000001u,1); // 800FFC14
  c->r[9]=R8(c->r[3]+c->r[11]); // 800FFC18
  c->r[8]=R8(c->r[3]+c->r[0]); // 800FFC1C
  c->r[5]=R8(c->r[3]+c->r[10]); // 800FFC20
  c->r[6]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFC24
  c->r[5]=c->r[9]+c->r[8]; // 800FFC28
  c->r[5]=c->r[6]+c->r[5]; // 800FFC2C
  c->r[5]=c->r[5]+0x00000002u; // 800FFC30
  c->r[5]=sraw(c,c->r[5],2); // 800FFC34
  W8(c->r[3]+0x00000002u,c->r[5]); // 800FFC38
  c->r[9]=R8(c->r[3]+c->r[10]); // 800FFC3C
  c->r[5]=R8(c->r[3]+c->r[11]); // 800FFC40
  c->r[8]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFC44
  c->r[5]=addc(c,~c->r[4],0x00000002u,1); // 800FFC48
  c->r[6]=R8(c->r[3]+c->r[5]); // 800FFC4C
  c->r[5]=c->r[9]+c->r[8]; // 800FFC50
  c->r[5]=c->r[5]+c->r[6]; // 800FFC54
  c->r[5]=c->r[5]+0x00000002u; // 800FFC58
  c->r[5]=sraw(c,c->r[5],2); // 800FFC5C
  W8(c->r[3]+0x00000003u,c->r[5]); // 800FFC60
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FFC64
  c->r[6]=R8(c->r[3]+0xFFFFFFFFu); // 800FFC68
  c->r[5]=R8(c->r[7]+0xFFFFFFFFu); // 800FFC6C
  c->r[5]=c->r[5]+c->r[6]; // 800FFC70
  c->r[5]=c->r[5]+0x00000001u; // 800FFC74
  c->r[5]=sraw(c,c->r[5],1); // 800FFC78
  c->r[6]=c->r[8]+c->r[3]; // 800FFC7C
  W8(c->r[6]+0x00000002u,c->r[5]); // 800FFC80
  W8(c->r[3]+c->r[4],c->r[5]); // 800FFC84
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800FFC88
  c->r[9]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFC8C
  c->r[5]=R8(c->r[7]+0xFFFFFFFFu); // 800FFC90
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FFC94
  c->r[0]=c->r[5]+c->r[0]; // 800FFC98
  c->r[5]=c->r[0]+c->r[9]; // 800FFC9C
  c->r[0]=c->r[5]+0x00000002u; // 800FFCA0
  c->r[0]=sraw(c,c->r[0],2); // 800FFCA4
  W8(c->r[6]+0x00000003u,c->r[0]); // 800FFCA8
  W8(c->r[7]+0x00000001u,c->r[0]); // 800FFCAC
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 800FFCB0
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFCB4
  c->r[9]=c->r[5]-c->r[4]; // 800FFCB8
  c->r[10]=R8(c->r[7]+0xFFFFFFFFu); // 800FFCBC
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFCC0
  c->r[5]=c->r[10]+c->r[5]; // 800FFCC4
  c->r[5]=c->r[5]+0x00000001u; // 800FFCC8
  c->r[10]=sraw(c,c->r[5],1); // 800FFCCC
  c->r[5]=c->r[9]+c->r[3]; // 800FFCD0
  W8(c->r[5]+0x00000002u,c->r[10]); // 800FFCD4
  W8(c->r[3]+c->r[8],c->r[10]); // 800FFCD8
  c->r[11]=R8(c->r[3]+0xFFFFFFFFu); // 800FFCDC
  c->r[8]=R8(c->r[7]+0xFFFFFFFFu); // 800FFCE0
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 800FFCE4
  c->r[10]=R8(c->r[3]+c->r[0]); // 800FFCE8
  c->r[8]=c->r[11]+c->r[8]; // 800FFCEC
  c->r[8]=c->r[8]+c->r[10]; // 800FFCF0
  c->r[8]=c->r[8]+0x00000002u; // 800FFCF4
  c->r[10]=sraw(c,c->r[8],2); // 800FFCF8
  c->r[8]=c->r[4]+0x00000001u; // 800FFCFC
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800FFD00
  c->r[4]=c->r[4]-c->r[8]; // 800FFD04
  W8(c->r[3]+c->r[4],c->r[10]); // 800FFD08
  W8(c->r[6]+0x00000001u,c->r[10]); // 800FFD0C
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 800FFD10
  c->r[6]=R8(c->r[3]+c->r[0]); // 800FFD14
  c->r[4]=R8(c->r[3]+c->r[8]); // 800FFD18
  c->r[4]=c->r[6]+c->r[4]; // 800FFD1C
  c->r[4]=c->r[4]+0x00000001u; // 800FFD20
  c->r[4]=sraw(c,c->r[4],1); // 800FFD24
  W8(c->r[3]+c->r[9],c->r[4]); // 800FFD28
  c->r[6]=R8(c->r[3]+c->r[8]); // 800FFD2C
  c->r[4]=R8(c->r[7]+0xFFFFFFFFu); // 800FFD30
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FFD34
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFD38
  c->r[0]=c->r[6]+c->r[4]; // 800FFD3C
  c->r[3]=c->r[3]+c->r[0]; // 800FFD40
  c->r[0]=c->r[3]+0x00000002u; // 800FFD44
  c->r[0]=sraw(c,c->r[0],2); // 800FFD48
  W8(c->r[5]+0x00000001u,c->r[0]); // 800FFD4C
  return; // 800FFD50
}

// fn_800FFD54
void f_800FFD54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFD58
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFD5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FFD60
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FFD64
  c->r[0]=0u-c->r[4]; // 800FFD68
  c->r[10]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FFD6C
  c->r[7]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FFD70
  c->r[6]=R8(c->r[3]+c->r[10]); // 800FFD74
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFD78
  c->r[5]=c->r[6]+c->r[5]; // 800FFD7C
  c->r[5]=c->r[5]+0x00000001u; // 800FFD80
  c->r[5]=sraw(c,c->r[5],1); // 800FFD84
  c->r[6]=c->r[7]+c->r[3]; // 800FFD88
  W8(c->r[6]+0x00000001u,c->r[5]); // 800FFD8C
  W8(c->r[3]+0x00000000u,c->r[5]); // 800FFD90
  c->r[8]=addc(c,~c->r[4],0x00000001u,1); // 800FFD94
  c->r[9]=R8(c->r[3]+c->r[0]); // 800FFD98
  c->r[5]=R8(c->r[3]+c->r[8]); // 800FFD9C
  c->r[5]=c->r[9]+c->r[5]; // 800FFDA0
  c->r[5]=c->r[5]+0x00000001u; // 800FFDA4
  c->r[5]=sraw(c,c->r[5],1); // 800FFDA8
  W8(c->r[6]+0x00000002u,c->r[5]); // 800FFDAC
  W8(c->r[3]+0x00000001u,c->r[5]); // 800FFDB0
  c->r[9]=addc(c,~c->r[4],0x00000002u,1); // 800FFDB4
  c->r[11]=R8(c->r[3]+c->r[8]); // 800FFDB8
  c->r[5]=R8(c->r[3]+c->r[9]); // 800FFDBC
  c->r[5]=c->r[11]+c->r[5]; // 800FFDC0
  c->r[5]=c->r[5]+0x00000001u; // 800FFDC4
  c->r[5]=sraw(c,c->r[5],1); // 800FFDC8
  W8(c->r[6]+0x00000003u,c->r[5]); // 800FFDCC
  W8(c->r[3]+0x00000002u,c->r[5]); // 800FFDD0
  c->r[12]=addc(c,~c->r[4],0x00000003u,1); // 800FFDD4
  c->r[11]=R8(c->r[3]+c->r[9]); // 800FFDD8
  c->r[5]=R8(c->r[3]+c->r[12]); // 800FFDDC
  c->r[5]=c->r[11]+c->r[5]; // 800FFDE0
  c->r[5]=c->r[5]+0x00000001u; // 800FFDE4
  c->r[5]=sraw(c,c->r[5],1); // 800FFDE8
  W8(c->r[3]+0x00000003u,c->r[5]); // 800FFDEC
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFDF0
  c->r[11]=c->r[5]-c->r[4]; // 800FFDF4
  c->r[29]=R8(c->r[3]+0xFFFFFFFFu); // 800FFDF8
  c->r[5]=R8(c->r[3]+c->r[10]); // 800FFDFC
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFE00
  c->r[28]=R8(c->r[3]+c->r[0]); // 800FFE04
  c->r[5]=c->r[29]+c->r[5]; // 800FFE08
  c->r[5]=c->r[5]+c->r[28]; // 800FFE0C
  c->r[5]=c->r[5]+0x00000002u; // 800FFE10
  c->r[5]=sraw(c,c->r[5],2); // 800FFE14
  c->r[28]=c->r[11]+c->r[3]; // 800FFE18
  W8(c->r[28]+0x00000001u,c->r[5]); // 800FFE1C
  W8(c->r[3]+c->r[4],c->r[5]); // 800FFE20
  c->r[31]=R8(c->r[3]+c->r[8]); // 800FFE24
  c->r[30]=R8(c->r[3]+c->r[10]); // 800FFE28
  c->r[5]=R8(c->r[3]+c->r[0]); // 800FFE2C
  c->r[29]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800FFE30
  c->r[5]=c->r[31]+c->r[30]; // 800FFE34
  c->r[5]=c->r[29]+c->r[5]; // 800FFE38
  c->r[5]=c->r[5]+0x00000002u; // 800FFE3C
  c->r[29]=sraw(c,c->r[5],2); // 800FFE40
  W8(c->r[28]+0x00000002u,c->r[29]); // 800FFE44
  c->r[5]=c->r[4]+c->r[3]; // 800FFE48
  W8(c->r[5]+0x00000001u,c->r[29]); // 800FFE4C
  c->r[29]=R8(c->r[3]+c->r[9]); // 800FFE50
  c->r[30]=R8(c->r[3]+c->r[0]); // 800FFE54
  c->r[0]=R8(c->r[3]+c->r[8]); // 800FFE58
  c->r[31]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFE5C
  c->r[0]=c->r[29]+c->r[30]; // 800FFE60
  c->r[31]=c->r[31]+c->r[0]; // 800FFE64
  c->r[0]=c->r[31]+0x00000002u; // 800FFE68
  c->r[31]=sraw(c,c->r[0],2); // 800FFE6C
  c->r[4]=c->r[4]+0x00000001u; // 800FFE70
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFE74
  c->r[0]=c->r[0]-c->r[4]; // 800FFE78
  W8(c->r[3]+c->r[0],c->r[31]); // 800FFE7C
  W8(c->r[5]+0x00000002u,c->r[31]); // 800FFE80
  c->r[12]=R8(c->r[3]+c->r[12]); // 800FFE84
  c->r[8]=R8(c->r[3]+c->r[8]); // 800FFE88
  c->r[0]=R8(c->r[3]+c->r[9]); // 800FFE8C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFE90
  c->r[0]=c->r[12]+c->r[8]; // 800FFE94
  c->r[4]=c->r[4]+c->r[0]; // 800FFE98
  c->r[0]=c->r[4]+0x00000002u; // 800FFE9C
  c->r[0]=sraw(c,c->r[0],2); // 800FFEA0
  W8(c->r[5]+0x00000003u,c->r[0]); // 800FFEA4
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800FFEA8
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFEAC
  c->r[4]=R8(c->r[5]+0xFFFFFFFFu); // 800FFEB0
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FFEB4
  c->r[0]=c->r[4]+c->r[0]; // 800FFEB8
  c->r[4]=c->r[0]+c->r[8]; // 800FFEBC
  c->r[0]=c->r[4]+0x00000002u; // 800FFEC0
  c->r[0]=sraw(c,c->r[0],2); // 800FFEC4
  W8(c->r[3]+c->r[7],c->r[0]); // 800FFEC8
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FFECC
  c->r[0]=R8(c->r[5]+0xFFFFFFFFu); // 800FFED0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFED4
  c->r[4]=R8(c->r[6]+0xFFFFFFFFu); // 800FFED8
  c->r[0]=c->r[7]+c->r[0]; // 800FFEDC
  c->r[4]=c->r[0]+c->r[4]; // 800FFEE0
  c->r[0]=c->r[4]+0x00000002u; // 800FFEE4
  c->r[0]=sraw(c,c->r[0],2); // 800FFEE8
  W8(c->r[3]+c->r[11],c->r[0]); // 800FFEEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFEF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFEF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FFEF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FFEFC
  c->r[1]=c->r[1]+0x00000020u; // 800FFF00
  return; // 800FFF04
}

// fn_800FFF08
void f_800FFF08(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800FFF08
  c->r[11]=c->r[6]+0xFFFFFFFFu; // 800FFF0C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FFF10
  c->r[10]=c->r[0]-c->r[4]; // 800FFF14
  c->r[5]=c->r[4]+c->r[3]; // 800FFF18
  c->r[8]=R8(c->r[5]+0xFFFFFFFFu); // 800FFF1C
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FFF20
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFF24
  c->r[9]=c->r[10]+c->r[3]; // 800FFF28
  c->r[7]=R8(c->r[9]+0xFFFFFFFFu); // 800FFF2C
  c->r[0]=c->r[8]+c->r[0]; // 800FFF30
  c->r[7]=c->r[0]+c->r[7]; // 800FFF34
  c->r[0]=c->r[7]+0x00000002u; // 800FFF38
  c->r[0]=sraw(c,c->r[0],2); // 800FFF3C
  W8(c->r[3]+c->r[10],c->r[0]); // 800FFF40
  c->r[8]=R8(c->r[3]+c->r[11]); // 800FFF44
  c->r[0]=R8(c->r[5]+0xFFFFFFFFu); // 800FFF48
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFF4C
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FFF50
  c->r[0]=c->r[8]+c->r[0]; // 800FFF54
  c->r[7]=c->r[0]+c->r[7]; // 800FFF58
  c->r[0]=c->r[7]+0x00000002u; // 800FFF5C
  c->r[0]=sraw(c,c->r[0],2); // 800FFF60
  W8(c->r[9]+0x00000001u,c->r[0]); // 800FFF64
  W8(c->r[3]+c->r[6],c->r[0]); // 800FFF68
  c->r[10]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800FFF6C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800FFF70
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFF74
  c->r[7]=R8(c->r[3]+c->r[10]); // 800FFF78
  c->r[0]=R8(c->r[5]+0xFFFFFFFFu); // 800FFF7C
  c->r[0]=c->r[7]+c->r[0]; // 800FFF80
  c->r[7]=c->r[0]+c->r[8]; // 800FFF84
  c->r[0]=c->r[7]+0x00000002u; // 800FFF88
  c->r[0]=sraw(c,c->r[0],2); // 800FFF8C
  W8(c->r[9]+0x00000002u,c->r[0]); // 800FFF90
  c->r[9]=c->r[6]+c->r[3]; // 800FFF94
  W8(c->r[9]+0x00000001u,c->r[0]); // 800FFF98
  W8(c->r[3]+c->r[4],c->r[0]); // 800FFF9C
  c->r[11]=0u-c->r[4]; // 800FFFA0
  c->r[7]=R8(c->r[3]+0xFFFFFFFFu); // 800FFFA4
  c->r[0]=R8(c->r[3]+c->r[10]); // 800FFFA8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFFAC
  c->r[6]=R8(c->r[3]+c->r[11]); // 800FFFB0
  c->r[0]=c->r[7]+c->r[0]; // 800FFFB4
  c->r[6]=c->r[0]+c->r[6]; // 800FFFB8
  c->r[0]=c->r[6]+0x00000002u; // 800FFFBC
  c->r[7]=sraw(c,c->r[0],2); // 800FFFC0
  c->r[6]=c->r[4]+0x00000001u; // 800FFFC4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800FFFC8
  c->r[0]=c->r[0]-c->r[6]; // 800FFFCC
  W8(c->r[3]+c->r[0],c->r[7]); // 800FFFD0
  W8(c->r[9]+0x00000002u,c->r[7]); // 800FFFD4
  W8(c->r[5]+0x00000001u,c->r[7]); // 800FFFD8
  W8(c->r[3]+0x00000000u,c->r[7]); // 800FFFDC
  c->r[12]=addc(c,~c->r[4],0x00000001u,1); // 800FFFE0
  c->r[8]=R8(c->r[3]+c->r[12]); // 800FFFE4
  c->r[7]=R8(c->r[3]+c->r[10]); // 800FFFE8
  c->r[0]=R8(c->r[3]+c->r[11]); // 800FFFEC
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FFFF0
  c->r[0]=c->r[8]+c->r[7]; // 800FFFF4
  c->r[6]=c->r[6]+c->r[0]; // 800FFFF8
  c->r[0]=c->r[6]+0x00000002u; // 800FFFFC
  c->r[0]=sraw(c,c->r[0],2); // 80100000
  W8(c->r[9]+0x00000003u,c->r[0]); // 80100004
  W8(c->r[5]+0x00000002u,c->r[0]); // 80100008
  W8(c->r[3]+0x00000001u,c->r[0]); // 8010000C
  c->r[9]=addc(c,~c->r[4],0x00000002u,1); // 80100010
  c->r[8]=R8(c->r[3]+c->r[9]); // 80100014
  c->r[7]=R8(c->r[3]+c->r[11]); // 80100018
  c->r[0]=R8(c->r[3]+c->r[12]); // 8010001C
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80100020
  c->r[0]=c->r[8]+c->r[7]; // 80100024
  c->r[6]=c->r[6]+c->r[0]; // 80100028
  c->r[0]=c->r[6]+0x00000002u; // 8010002C
  c->r[0]=sraw(c,c->r[0],2); // 80100030
  W8(c->r[5]+0x00000003u,c->r[0]); // 80100034
  W8(c->r[3]+0x00000002u,c->r[0]); // 80100038
  c->r[6]=R8(c->r[3]+c->r[12]); // 8010003C
  c->r[0]=R8(c->r[3]+c->r[9]); // 80100040
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80100044
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 80100048
  c->r[4]=R8(c->r[3]+c->r[0]); // 8010004C
  c->r[0]=c->r[6]+c->r[5]; // 80100050
  c->r[4]=c->r[0]+c->r[4]; // 80100054
  c->r[0]=c->r[4]+0x00000002u; // 80100058
  c->r[0]=sraw(c,c->r[0],2); // 8010005C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80100060
  return; // 80100064
}

// fn_80100068
void f_80100068(Ctx* __restrict c) {
  c->r[0]=addc(c,~c->r[4],0x00000001u,1); // 80100068
  c->r[8]=0u-c->r[4]; // 8010006C
  c->r[6]=R8(c->r[3]+c->r[8]); // 80100070
  c->r[5]=R8(c->r[3]+c->r[0]); // 80100074
  c->r[5]=c->r[6]+c->r[5]; // 80100078
  c->r[5]=c->r[5]+0x00000001u; // 8010007C
  c->r[5]=sraw(c,c->r[5],1); // 80100080
  W8(c->r[3]+0x00000000u,c->r[5]); // 80100084
  c->r[5]=addc(c,~c->r[4],0x00000002u,1); // 80100088
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8010008C
  c->r[7]=R8(c->r[3]+c->r[0]); // 80100090
  c->r[6]=R8(c->r[3]+c->r[5]); // 80100094
  c->r[6]=c->r[7]+c->r[6]; // 80100098
  c->r[6]=c->r[6]+0x00000001u; // 8010009C
  c->r[6]=sraw(c,c->r[6],1); // 801000A0
  W8(c->r[3]+c->r[10],c->r[6]); // 801000A4
  W8(c->r[3]+0x00000001u,c->r[6]); // 801000A8
  c->r[6]=addc(c,~c->r[4],0x00000003u,1); // 801000AC
  c->r[9]=R8(c->r[3]+c->r[5]); // 801000B0
  c->r[7]=R8(c->r[3]+c->r[6]); // 801000B4
  c->r[7]=c->r[9]+c->r[7]; // 801000B8
  c->r[7]=c->r[7]+0x00000001u; // 801000BC
  c->r[7]=sraw(c,c->r[7],1); // 801000C0
  c->r[12]=c->r[10]+c->r[3]; // 801000C4
  W8(c->r[12]+0x00000001u,c->r[7]); // 801000C8
  W8(c->r[3]+0x00000002u,c->r[7]); // 801000CC
  c->r[7]=addc(c,~c->r[4],0x00000004u,1); // 801000D0
  c->r[10]=R8(c->r[3]+c->r[6]); // 801000D4
  c->r[9]=R8(c->r[3]+c->r[7]); // 801000D8
  c->r[9]=c->r[10]+c->r[9]; // 801000DC
  c->r[9]=c->r[9]+0x00000001u; // 801000E0
  c->r[9]=sraw(c,c->r[9],1); // 801000E4
  W8(c->r[12]+0x00000002u,c->r[9]); // 801000E8
  W8(c->r[3]+0x00000003u,c->r[9]); // 801000EC
  c->r[9]=addc(c,~c->r[4],0x00000005u,1); // 801000F0
  c->r[11]=R8(c->r[3]+c->r[7]); // 801000F4
  c->r[10]=R8(c->r[3]+c->r[9]); // 801000F8
  c->r[10]=c->r[11]+c->r[10]; // 801000FC
  c->r[10]=c->r[10]+0x00000001u; // 80100100
  c->r[10]=sraw(c,c->r[10],1); // 80100104
  W8(c->r[12]+0x00000003u,c->r[10]); // 80100108
  c->r[12]=R8(c->r[3]+c->r[5]); // 8010010C
  c->r[11]=R8(c->r[3]+c->r[8]); // 80100110
  c->r[8]=R8(c->r[3]+c->r[0]); // 80100114
  c->r[10]=rotl(c->r[8],1)&0xFFFFFFFEu; // 80100118
  c->r[8]=c->r[12]+c->r[11]; // 8010011C
  c->r[8]=c->r[10]+c->r[8]; // 80100120
  c->r[8]=c->r[8]+0x00000002u; // 80100124
  c->r[8]=sraw(c,c->r[8],2); // 80100128
  W8(c->r[3]+c->r[4],c->r[8]); // 8010012C
  c->r[8]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80100130
  c->r[12]=c->r[8]-c->r[4]; // 80100134
  c->r[11]=R8(c->r[3]+c->r[6]); // 80100138
  c->r[10]=R8(c->r[3]+c->r[0]); // 8010013C
  c->r[0]=R8(c->r[3]+c->r[5]); // 80100140
  c->r[8]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80100144
  c->r[0]=c->r[11]+c->r[10]; // 80100148
  c->r[8]=c->r[8]+c->r[0]; // 8010014C
  c->r[0]=c->r[8]+0x00000002u; // 80100150
  c->r[0]=sraw(c,c->r[0],2); // 80100154
  W8(c->r[3]+c->r[12],c->r[0]); // 80100158
  c->r[11]=c->r[4]+c->r[3]; // 8010015C
  W8(c->r[11]+0x00000001u,c->r[0]); // 80100160
  c->r[10]=R8(c->r[3]+c->r[7]); // 80100164
  c->r[8]=R8(c->r[3]+c->r[5]); // 80100168
  c->r[0]=R8(c->r[3]+c->r[6]); // 8010016C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80100170
  c->r[0]=c->r[10]+c->r[8]; // 80100174
  c->r[5]=c->r[5]+c->r[0]; // 80100178
  c->r[0]=c->r[5]+0x00000002u; // 8010017C
  c->r[0]=sraw(c,c->r[0],2); // 80100180
  c->r[10]=c->r[12]+c->r[3]; // 80100184
  W8(c->r[10]+0x00000001u,c->r[0]); // 80100188
  W8(c->r[11]+0x00000002u,c->r[0]); // 8010018C
  c->r[8]=R8(c->r[3]+c->r[9]); // 80100190
  c->r[6]=R8(c->r[3]+c->r[6]); // 80100194
  c->r[0]=R8(c->r[3]+c->r[7]); // 80100198
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8010019C
  c->r[0]=c->r[8]+c->r[6]; // 801001A0
  c->r[5]=c->r[5]+c->r[0]; // 801001A4
  c->r[0]=c->r[5]+0x00000002u; // 801001A8
  c->r[0]=sraw(c,c->r[0],2); // 801001AC
  W8(c->r[10]+0x00000002u,c->r[0]); // 801001B0
  W8(c->r[11]+0x00000003u,c->r[0]); // 801001B4
  c->r[7]=R8(c->r[3]+c->r[7]); // 801001B8
  c->r[0]=R8(c->r[3]+c->r[9]); // 801001BC
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801001C0
  c->r[0]=addc(c,~c->r[4],0x00000006u,1); // 801001C4
  c->r[5]=R8(c->r[3]+c->r[0]); // 801001C8
  c->r[0]=c->r[7]+c->r[6]; // 801001CC
  c->r[5]=c->r[0]+c->r[5]; // 801001D0
  c->r[0]=c->r[5]+0x00000002u; // 801001D4
  c->r[5]=sraw(c,c->r[0],2); // 801001D8
  c->r[4]=c->r[4]+0x00000001u; // 801001DC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801001E0
  c->r[0]=c->r[0]-c->r[4]; // 801001E4
  W8(c->r[3]+c->r[0],c->r[5]); // 801001E8
  return; // 801001EC
}

// fn_801001F0
void f_801001F0(Ctx* __restrict c) {
  return; // 801001F0
}

// fn_801001F4
void f_801001F4(Ctx* __restrict c) {
  c->r[4]=0u+0x80100000u; // 801001F4
  c->r[4]=c->r[4]+0xFFFFEDECu; // 801001F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801001FC
  c->r[4]=0u+0x80100000u; // 80100200
  c->r[4]=c->r[4]+0xFFFFF150u; // 80100204
  W32(c->r[3]+0x00000004u,c->r[4]); // 80100208
  c->r[4]=0u+0x80100000u; // 8010020C
  c->r[4]=c->r[4]+0xFFFFF1A4u; // 80100210
  W32(c->r[3]+0x00000008u,c->r[4]); // 80100214
  c->r[4]=0u+0x80100000u; // 80100218
  c->r[4]=c->r[4]+0xFFFFF2A4u; // 8010021C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80100220
  c->r[4]=0u+0x80100000u; // 80100224
  c->r[4]=c->r[4]+0xFFFFF51Cu; // 80100228
  W32(c->r[3]+0x00000010u,c->r[4]); // 8010022C
  c->r[4]=0u+0x80100000u; // 80100230
  c->r[4]=c->r[4]+0xFFFFDB3Cu; // 80100234
  W32(c->r[3]+0x00000014u,c->r[4]); // 80100238
  c->r[4]=0u+0x80100000u; // 8010023C
  c->r[4]=c->r[4]+0xFFFFDE40u; // 80100240
  W32(c->r[3]+0x00000018u,c->r[4]); // 80100244
  c->r[4]=0u+0x80100000u; // 80100248
  c->r[4]=c->r[4]+0xFFFFE258u; // 8010024C
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80100250
  c->r[4]=0u+0x80100000u; // 80100254
  c->r[4]=c->r[4]+0xFFFFE66Cu; // 80100258
  W32(c->r[3]+0x00000020u,c->r[4]); // 8010025C
  c->r[4]=0u+0x80100000u; // 80100260
  c->r[4]=c->r[4]+0xFFFFE9FCu; // 80100264
  W32(c->r[3]+0x00000024u,c->r[4]); // 80100268
  c->r[4]=0u+0x80100000u; // 8010026C
  c->r[4]=c->r[4]+0xFFFFF600u; // 80100270
  W32(c->r[3]+0x00000028u,c->r[4]); // 80100274
  c->r[4]=0u+0x80100000u; // 80100278
  c->r[4]=c->r[4]+0xFFFFF69Cu; // 8010027C
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80100280
  c->r[4]=0u+0x80100000u; // 80100284
  c->r[4]=c->r[4]+0xFFFFF73Cu; // 80100288
  W32(c->r[3]+0x00000030u,c->r[4]); // 8010028C
  c->r[5]=0u+0x80100000u; // 80100290
  c->r[5]=c->r[5]+0x000001F0u; // 80100294
  W32(c->r[3]+0x00000034u,c->r[5]); // 80100298
  c->r[4]=0u+0x80100000u; // 8010029C
  c->r[4]=c->r[4]+0xFFFFF788u; // 801002A0
  W32(c->r[3]+0x00000038u,c->r[4]); // 801002A4
  c->r[4]=0u+0x80100000u; // 801002A8
  c->r[4]=c->r[4]+0xFFFFF7A4u; // 801002AC
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801002B0
  c->r[4]=0u+0x80100000u; // 801002B4
  c->r[4]=c->r[4]+0xFFFFF814u; // 801002B8
  W32(c->r[3]+0x00000040u,c->r[4]); // 801002BC
  c->r[4]=0u+0x80100000u; // 801002C0
  c->r[4]=c->r[4]+0xFFFFF990u; // 801002C4
  W32(c->r[3]+0x00000044u,c->r[4]); // 801002C8
  c->r[4]=0u+0x80100000u; // 801002CC
  c->r[4]=c->r[4]+0xFFFFFABCu; // 801002D0
  W32(c->r[3]+0x00000048u,c->r[4]); // 801002D4
  c->r[4]=0u+0x80100000u; // 801002D8
  c->r[4]=c->r[4]+0xFFFFFBC4u; // 801002DC
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 801002E0
  c->r[4]=0u+0x80100000u; // 801002E4
  c->r[4]=c->r[4]+0xFFFFFD54u; // 801002E8
  W32(c->r[3]+0x00000050u,c->r[4]); // 801002EC
  c->r[4]=0u+0x80100000u; // 801002F0
  c->r[4]=c->r[4]+0xFFFFFF08u; // 801002F4
  W32(c->r[3]+0x00000054u,c->r[4]); // 801002F8
  c->r[4]=0u+0x80100000u; // 801002FC
  c->r[4]=c->r[4]+0x00000068u; // 80100300
  W32(c->r[3]+0x00000058u,c->r[4]); // 80100304
  c->r[4]=0u+0x80100000u; // 80100308
  c->r[4]=c->r[4]+0xFFFFFA04u; // 8010030C
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 80100310
  c->r[4]=0u+0x80100000u; // 80100314
  c->r[4]=c->r[4]+0xFFFFFA50u; // 80100318
  W32(c->r[3]+0x00000060u,c->r[4]); // 8010031C
  c->r[4]=0u+0x80100000u; // 80100320
  c->r[4]=c->r[4]+0xFFFFFAA0u; // 80100324
  W32(c->r[3]+0x00000064u,c->r[4]); // 80100328
  W32(c->r[3]+0x00000068u,c->r[5]); // 8010032C
  return; // 80100330
}

// fn_80100340
void f_80100340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100340
  c->r[0]=c->lr; // 80100344
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010034C
  c->r[31]=c->r[6]|c->r[6]; // 80100350
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100354
  c->r[30]=c->r[5]|c->r[5]; // 80100358
  W32(c->r[13]+0xFFFF9350u,c->r[3]); // 8010035C
  W32(c->r[13]+0xFFFF934Cu,c->r[4]); // 80100360
  c->lr=0x80100368u; f_8005F310(c); // 80100364
  c->lr=0x8010036Cu; f_8005F580(c); // 80100368
  W32(c->r[13]+0xFFFF9348u,c->r[3]); // 8010036C
  c->lr=0x80100374u; f_80100770(c); // 80100370
  c->r[3]=addc(c,~c->r[30],0x00000280u,1); // 80100374
  c->r[4]=R32(c->r[13]+0xFFFF9350u); // 80100378
  c->r[0]=R32(c->r[13]+0xFFFF934Cu); // 8010037C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80100380
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 80100384
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 80100388
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8010038C
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100390
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80100394
  c->r[4]=0u+0x00000000u; // 80100398
  c->lr=0x801003A0u; f_80100C70(c); // 8010039C
  c->lr=0x801003A4u; f_80100650(c); // 801003A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801003A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801003A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801003AC
  c->lr=c->r[0]; // 801003B0
  c->r[1]=c->r[1]+0x00000010u; // 801003B4
  return; // 801003B8
}

// fn_801003C0
void f_801003C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801003C0
  c->r[0]=c->lr; // 801003C4
  c->r[3]=0u+0x00000001u; // 801003C8
  c->r[4]=0u+0x00000003u; // 801003CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801003D0
  c->r[5]=0u+0x00000001u; // 801003D4
  c->lr=0x801003DCu; f_8006CDA0(c); // 801003D8
  c->r[3]=0u+0x00000001u; // 801003DC
  c->lr=0x801003E4u; f_8006CD40(c); // 801003E0
  c->r[3]=R32(c->r[13]+0xFFFF8DD8u); // 801003E4
  c->r[4]=0u+0x00000001u; // 801003E8
  c->lr=0x801003F0u; f_8006ACD0(c); // 801003EC
  c->lr=0x801003F4u; f_80069BD0(c); // 801003F0
  c->r[3]=R32(c->r[13]+0xFFFF8DD8u); // 801003F4
  c->lr=0x801003FCu; f_8005C6D0(c); // 801003F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801003FC
  c->lr=c->r[0]; // 80100400
  c->r[1]=c->r[1]+0x00000010u; // 80100404
  return; // 80100408
}

// fn_80100410
void f_80100410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100410
  c->r[0]=c->lr; // 80100414
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100418
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010041C
  c->r[31]=c->r[8]|c->r[8]; // 80100420
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100424
  c->r[30]=c->r[7]|c->r[7]; // 80100428
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010042C
  c->r[29]=c->r[6]|c->r[6]; // 80100430
  c->lr=0x80100438u; f_80100C30(c); // 80100434
  c->r[0]=R32(c->r[13]+0xFFFF9350u); // 80100438
  W32(c->r[29]+0x00000000u,c->r[0]); // 8010043C
  c->r[0]=R32(c->r[13]+0xFFFF9350u); // 80100440
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80100444
  W32(c->r[30]+0x00000000u,c->r[0]); // 80100448
  c->r[0]=R32(c->r[13]+0xFFFF9350u); // 8010044C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80100450
  W32(c->r[31]+0x00000000u,c->r[0]); // 80100454
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100458
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010045C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100460
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100464
  c->lr=c->r[0]; // 80100468
  c->r[1]=c->r[1]+0x00000020u; // 8010046C
  return; // 80100470
}

// fn_80100480
void f_80100480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100480
  c->r[0]=c->lr; // 80100484
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100488
  c->r[11]=c->r[1]+0x00000030u; // 8010048C
  c->lr=0x80100494u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100490
  c->r[0]=c->r[4]+0x00000004u; // 80100494
  c->r[4]=0u+0x80810000u; // 80100498
  c->r[27]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8010049C
  c->r[24]=c->r[5]|c->r[5]; // 801004A0
  c->r[23]=c->r[4]+0xFFFF8080u; // 801004A4
  c->r[25]=0u+0x00000000u; // 801004A8
  c->r[30]=c->r[13]+0xFFFF9358u; // 801004AC
  c->r[29]=c->r[13]+0xFFFF9360u; // 801004B0
  c->r[26]=rotl(c->r[27],30)&0x3FFFFFFFu; // 801004B4
  c->r[31]=rotl(c->r[27],28)&0x0FFFFFFFu; // 801004B8
  c->r[28]=c->r[13]+0xFFFF9368u; // 801004BC
  c->r[22]=0u+0x00000000u; // 801004C0
L_801004C4:;
  c->r[3]=c->r[24]|c->r[24]; // 801004C4
  c->r[4]=c->r[27]|c->r[27]; // 801004C8
  c->lr=0x801004D0u; f_80082C40(c); // 801004CC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801004D0
  c->r[3]=c->r[24]|c->r[24]; // 801004D4
  c->r[4]=c->r[26]|c->r[26]; // 801004D8
  c->lr=0x801004E0u; f_80082C40(c); // 801004DC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801004E0
  c->r[3]=c->r[24]|c->r[24]; // 801004E4
  c->r[4]=c->r[26]|c->r[26]; // 801004E8
  c->lr=0x801004F0u; f_80082C40(c); // 801004EC
  W32(c->r[28]+0x00000000u,c->r[3]); // 801004F0
  cmps(c,0,(int32_t)c->r[26],0); // 801004F4
  c->r[3]=c->r[26]|c->r[26]; // 801004F8
  c->r[4]=R32(c->r[30]+0x00000000u); // 801004FC
  if (crb(c,2)) { goto L_80100554; } // 80100500
  c->r[0]=rotl(c->r[26],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80100504
  c->ctr=c->r[0]; // 80100508
  if (crb(c,2)) { goto L_80100540; } // 8010050C
L_80100510:;
  W32(c->r[4]+0x00000000u,c->r[22]); // 80100510
  W32(c->r[4]+0x00000004u,c->r[22]); // 80100514
  W32(c->r[4]+0x00000008u,c->r[22]); // 80100518
  W32(c->r[4]+0x0000000Cu,c->r[22]); // 8010051C
  W32(c->r[4]+0x00000010u,c->r[22]); // 80100520
  W32(c->r[4]+0x00000014u,c->r[22]); // 80100524
  W32(c->r[4]+0x00000018u,c->r[22]); // 80100528
  W32(c->r[4]+0x0000001Cu,c->r[22]); // 8010052C
  c->r[4]=c->r[4]+0x00000020u; // 80100530
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100510; } // 80100534
  c->r[3]=c->r[26]&0x00000007u; cr0(c,c->r[3]); // 80100538
  if (crb(c,2)) { goto L_80100554; } // 8010053C
L_80100540:;
  c->ctr=c->r[3]; // 80100540
  c->r[0]=c->r[0]|0x00000000u; // 80100544
L_80100548:;
  W32(c->r[4]+0x00000000u,c->r[22]); // 80100548
  c->r[4]=c->r[4]+0x00000004u; // 8010054C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100548; } // 80100550
L_80100554:;
  cmps(c,0,(int32_t)c->r[31],0); // 80100554
  c->r[4]=R32(c->r[29]+0x00000000u); // 80100558
  c->r[3]=c->r[31]|c->r[31]; // 8010055C
  if (crb(c,2)) { goto L_801005B4; } // 80100560
  c->r[0]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80100564
  c->ctr=c->r[0]; // 80100568
  if (crb(c,2)) { goto L_801005A0; } // 8010056C
L_80100570:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 80100570
  W32(c->r[4]+0x00000004u,c->r[23]); // 80100574
  W32(c->r[4]+0x00000008u,c->r[23]); // 80100578
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 8010057C
  W32(c->r[4]+0x00000010u,c->r[23]); // 80100580
  W32(c->r[4]+0x00000014u,c->r[23]); // 80100584
  W32(c->r[4]+0x00000018u,c->r[23]); // 80100588
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 8010058C
  c->r[4]=c->r[4]+0x00000020u; // 80100590
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100570; } // 80100594
  c->r[3]=c->r[31]&0x00000007u; cr0(c,c->r[3]); // 80100598
  if (crb(c,2)) { goto L_801005B4; } // 8010059C
L_801005A0:;
  c->ctr=c->r[3]; // 801005A0
  c->r[0]=c->r[0]|0x00000000u; // 801005A4
L_801005A8:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 801005A8
  c->r[4]=c->r[4]+0x00000004u; // 801005AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801005A8; } // 801005B0
L_801005B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801005B4
  c->r[4]=R32(c->r[28]+0x00000000u); // 801005B8
  c->r[3]=c->r[31]|c->r[31]; // 801005BC
  if (crb(c,2)) { goto L_80100614; } // 801005C0
  c->r[0]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801005C4
  c->ctr=c->r[0]; // 801005C8
  if (crb(c,2)) { goto L_80100600; } // 801005CC
L_801005D0:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 801005D0
  W32(c->r[4]+0x00000004u,c->r[23]); // 801005D4
  W32(c->r[4]+0x00000008u,c->r[23]); // 801005D8
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 801005DC
  W32(c->r[4]+0x00000010u,c->r[23]); // 801005E0
  W32(c->r[4]+0x00000014u,c->r[23]); // 801005E4
  W32(c->r[4]+0x00000018u,c->r[23]); // 801005E8
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 801005EC
  c->r[4]=c->r[4]+0x00000020u; // 801005F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801005D0; } // 801005F4
  c->r[3]=c->r[31]&0x00000007u; cr0(c,c->r[3]); // 801005F8
  if (crb(c,2)) { goto L_80100614; } // 801005FC
L_80100600:;
  c->ctr=c->r[3]; // 80100600
  c->r[0]=c->r[0]|0x00000000u; // 80100604
L_80100608:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 80100608
  c->r[4]=c->r[4]+0x00000004u; // 8010060C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100608; } // 80100610
L_80100614:;
  c->r[25]=c->r[25]+0x00000001u; // 80100614
  c->r[29]=c->r[29]+0x00000004u; // 80100618
  cmps(c,0,(int32_t)c->r[25],2); // 8010061C
  c->r[28]=c->r[28]+0x00000004u; // 80100620
  c->r[30]=c->r[30]+0x00000004u; // 80100624
  if (crb(c,0)) { IRQCHK(c); goto L_801004C4; } // 80100628
  c->r[0]=0u+0x00000000u; // 8010062C
  W32(c->r[13]+0xFFFF9374u,c->r[0]); // 80100630
  c->r[11]=c->r[1]+0x00000030u; // 80100634
  c->lr=0x8010063Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100638
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010063C
  c->lr=c->r[0]; // 80100640
  c->r[1]=c->r[1]+0x00000030u; // 80100644
  return; // 80100648
}

// fn_80100650
void f_80100650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100650
  c->r[0]=c->lr; // 80100654
  c->r[3]=0u+0x00000001u; // 80100658
  c->r[4]=0u+0x00000007u; // 8010065C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100660
  c->r[5]=0u+0x00000000u; // 80100664
  c->lr=0x8010066Cu; f_8006CDA0(c); // 80100668
  c->r[3]=0u+0x00000000u; // 8010066C
  c->r[4]=0u+0x00000001u; // 80100670
  c->r[5]=0u+0x00000000u; // 80100674
  c->r[6]=0u+0x0000000Fu; // 80100678
  c->lr=0x80100680u; f_8006CCF0(c); // 8010067C
  c->r[3]=0u+0x00000001u; // 80100680
  c->lr=0x80100688u; f_800697F0(c); // 80100684
  c->r[3]=0u+0x00000000u; // 80100688
  c->lr=0x80100690u; f_8006B010(c); // 8010068C
  c->r[3]=0u+0x00000001u; // 80100690
  c->lr=0x80100698u; f_8006C980(c); // 80100694
  c->r[3]=0u+0x00000000u; // 80100698
  c->r[4]=0u+0x00000000u; // 8010069C
  c->r[5]=0u+0x00000000u; // 801006A0
  c->r[6]=0u+0x000000FFu; // 801006A4
  c->lr=0x801006ACu; f_8006C820(c); // 801006A8
  c->r[3]=0u+0x00000000u; // 801006AC
  c->r[4]=0u+0x00000003u; // 801006B0
  c->lr=0x801006B8u; f_8006C2E0(c); // 801006B4
  c->r[3]=0u+0x00000000u; // 801006B8
  c->r[4]=0u+0x00000000u; // 801006BC
  c->r[5]=0u+0x00000000u; // 801006C0
  c->lr=0x801006C8u; f_8006C690(c); // 801006C4
  c->r[3]=0u+0x00000001u; // 801006C8
  c->r[4]=0u+0x00000000u; // 801006CC
  c->r[5]=0u+0x00000000u; // 801006D0
  c->lr=0x801006D8u; f_8006C690(c); // 801006D4
  c->r[3]=0u+0x00000002u; // 801006D8
  c->r[4]=0u+0x00000000u; // 801006DC
  c->r[5]=0u+0x00000000u; // 801006E0
  c->lr=0x801006E8u; f_8006C690(c); // 801006E4
  c->r[3]=0u+0x00000003u; // 801006E8
  c->r[4]=0u+0x00000000u; // 801006EC
  c->r[5]=0u+0x00000000u; // 801006F0
  c->lr=0x801006F8u; f_8006C690(c); // 801006F4
  c->r[3]=0u+0x00000000u; // 801006F8
  c->r[4]=0u+0x00000000u; // 801006FC
  c->r[5]=0u+0x00000001u; // 80100700
  c->r[6]=0u+0x00000002u; // 80100704
  c->r[7]=0u+0x00000003u; // 80100708
  c->lr=0x80100710u; f_8006C6D0(c); // 8010070C
  c->r[3]=0u+0x00000001u; // 80100710
  c->r[4]=0u+0x00000000u; // 80100714
  c->r[5]=0u+0x00000000u; // 80100718
  c->r[6]=0u+0x00000000u; // 8010071C
  c->r[7]=0u+0x00000003u; // 80100720
  c->lr=0x80100728u; f_8006C6D0(c); // 80100724
  c->r[3]=0u+0x00000002u; // 80100728
  c->r[4]=0u+0x00000001u; // 8010072C
  c->r[5]=0u+0x00000001u; // 80100730
  c->r[6]=0u+0x00000001u; // 80100734
  c->r[7]=0u+0x00000003u; // 80100738
  c->lr=0x80100740u; f_8006C6D0(c); // 8010073C
  c->r[3]=0u+0x00000003u; // 80100740
  c->r[4]=0u+0x00000002u; // 80100744
  c->r[5]=0u+0x00000002u; // 80100748
  c->r[6]=0u+0x00000002u; // 8010074C
  c->r[7]=0u+0x00000003u; // 80100750
  c->lr=0x80100758u; f_8006C6D0(c); // 80100754
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100758
  c->lr=c->r[0]; // 8010075C
  c->r[1]=c->r[1]+0x00000010u; // 80100760
  return; // 80100764
}

// fn_80100770
void f_80100770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100770
  c->r[0]=c->lr; // 80100774
  c->r[4]=0u+0x00000000u; // 80100778
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8010077C
  c->r[0]=0u+0x43300000u; // 80100780
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80100784
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80100788
  W32(c->r[1]+0x00000090u,c->r[0]); // 8010078C
  c->r[31]=R16(c->r[3]+0x00000004u); // 80100790
  c->r[30]=R16(c->r[3]+0x00000006u); // 80100794
  c->r[3]=0u+0x00000000u; // 80100798
  W32(c->r[1]+0x00000098u,c->r[0]); // 8010079C
  c->lr=0x801007A4u; f_8006CE10(c); // 801007A0
  c->r[0]=c->r[30]^0x80000000u; // 801007A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801007A8
  c->r[0]=c->r[31]^0x80000000u; // 801007AC
  {uint32_t ea=c->r[2]+0xFFFF89CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801007B0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 801007B4
  c->r[3]=c->r[1]+0x00000050u; // 801007B8
  {uint32_t ea=c->r[2]+0xFFFF89D8u; c->f[4]=RF64(ea);} // 801007BC
  c->f[3]=c->f[1]; // 801007C0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 801007C4
  c->f[5]=c->f[1]; // 801007C8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 801007CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 801007D0
  {uint32_t ea=c->r[2]+0xFFFF89D0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801007D4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 801007D8
  c->lr=0x801007E0u; f_800515F0(c); // 801007DC
  c->r[3]=c->r[1]+0x00000050u; // 801007E0
  c->r[4]=0u+0x00000001u; // 801007E4
  c->lr=0x801007ECu; f_8006D020(c); // 801007E8
  c->r[0]=c->r[31]^0x80000000u; // 801007EC
  W32(c->r[1]+0x00000094u,c->r[0]); // 801007F0
  c->r[0]=c->r[30]^0x80000000u; // 801007F4
  {uint32_t ea=c->r[2]+0xFFFF89CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801007F8
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 801007FC
  {uint32_t ea=c->r[2]+0xFFFF89D8u; c->f[4]=RF64(ea);} // 80100800
  c->f[2]=c->f[1]; // 80100804
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=RF64(ea);} // 80100808
  c->f[5]=c->f[1]; // 8010080C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80100810
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80100814
  {uint32_t ea=c->r[2]+0xFFFF89D4u; c->f[6]=c->ps1[6]=RF32(ea);} // 80100818
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8010081C
  c->lr=0x80100824u; f_8006D340(c); // 80100820
  c->r[5]=c->r[31]|c->r[31]; // 80100824
  c->r[6]=c->r[30]|c->r[30]; // 80100828
  c->r[3]=0u+0x00000000u; // 8010082C
  c->r[4]=0u+0x00000000u; // 80100830
  c->lr=0x80100838u; f_8006D370(c); // 80100834
  c->r[3]=c->r[1]+0x00000020u; // 80100838
  c->lr=0x80100840u; f_80051160(c); // 8010083C
  c->r[3]=c->r[1]+0x00000020u; // 80100840
  c->r[4]=0u+0x00000000u; // 80100844
  c->lr=0x8010084Cu; f_8006D0E0(c); // 80100848
  c->r[3]=0u+0x00000000u; // 8010084C
  c->lr=0x80100854u; f_8006D190(c); // 80100850
  c->r[3]=0u+0x00000001u; // 80100854
  c->r[4]=0u+0x00000007u; // 80100858
  c->r[5]=0u+0x00000000u; // 8010085C
  c->lr=0x80100864u; f_8006CDA0(c); // 80100860
  c->r[3]=0u+0x00000000u; // 80100864
  c->r[4]=0u+0x00000001u; // 80100868
  c->r[5]=0u+0x00000000u; // 8010086C
  c->r[6]=0u+0x00000000u; // 80100870
  c->lr=0x80100878u; f_8006CCF0(c); // 80100874
  c->r[3]=0u+0x00000001u; // 80100878
  c->lr=0x80100880u; f_8006CD40(c); // 8010087C
  c->r[3]=0u+0x00000000u; // 80100880
  c->lr=0x80100888u; f_8006CD70(c); // 80100884
  c->r[3]=0u+0x00000000u; // 80100888
  c->lr=0x80100890u; f_8006ACB0(c); // 8010088C
  c->r[3]=0u+0x00000000u; // 80100890
  c->lr=0x80100898u; f_8006B010(c); // 80100894
  c->r[3]=0u+0x00000002u; // 80100898
  c->lr=0x801008A0u; f_800697F0(c); // 8010089C
  c->r[3]=0u+0x00000000u; // 801008A0
  c->r[4]=0u+0x00000001u; // 801008A4
  c->r[5]=0u+0x00000004u; // 801008A8
  c->r[6]=0u+0x0000003Cu; // 801008AC
  c->r[7]=0u+0x00000000u; // 801008B0
  c->r[8]=0u+0x0000007Du; // 801008B4
  c->lr=0x801008BCu; f_800695A0(c); // 801008B8
  c->r[3]=0u+0x00000001u; // 801008BC
  c->r[4]=0u+0x00000001u; // 801008C0
  c->r[5]=0u+0x00000004u; // 801008C4
  c->r[6]=0u+0x0000003Cu; // 801008C8
  c->r[7]=0u+0x00000000u; // 801008CC
  c->r[8]=0u+0x0000007Du; // 801008D0
  c->lr=0x801008D8u; f_800695A0(c); // 801008D4
  c->lr=0x801008DCu; f_8006B8A0(c); // 801008D8
  c->lr=0x801008E0u; f_80069120(c); // 801008DC
  c->r[3]=0u+0x00000009u; // 801008E0
  c->r[4]=0u+0x00000001u; // 801008E4
  c->lr=0x801008ECu; f_80068CD0(c); // 801008E8
  c->r[3]=0u+0x0000000Du; // 801008EC
  c->r[4]=0u+0x00000001u; // 801008F0
  c->lr=0x801008F8u; f_80068CD0(c); // 801008F4
  c->r[3]=0u+0x00000007u; // 801008F8
  c->r[4]=0u+0x00000009u; // 801008FC
  c->r[5]=0u+0x00000001u; // 80100900
  c->r[6]=0u+0x00000003u; // 80100904
  c->r[7]=0u+0x00000000u; // 80100908
  c->lr=0x80100910u; f_80069160(c); // 8010090C
  c->r[3]=0u+0x00000007u; // 80100910
  c->r[4]=0u+0x0000000Du; // 80100914
  c->r[5]=0u+0x00000001u; // 80100918
  c->r[6]=0u+0x00000002u; // 8010091C
  c->r[7]=0u+0x00000000u; // 80100920
  c->lr=0x80100928u; f_80069160(c); // 80100924
  c->r[3]=0u+0x00000004u; // 80100928
  c->lr=0x80100930u; f_8006C980(c); // 8010092C
  c->r[3]=0u+0x00000000u; // 80100930
  c->r[4]=0u+0x00000001u; // 80100934
  c->r[5]=0u+0x00000001u; // 80100938
  c->r[6]=0u+0x000000FFu; // 8010093C
  c->lr=0x80100944u; f_8006C820(c); // 80100940
  c->r[3]=0u+0x00000000u; // 80100944
  c->r[4]=0u+0x0000000Fu; // 80100948
  c->r[5]=0u+0x00000008u; // 8010094C
  c->r[6]=0u+0x0000000Eu; // 80100950
  c->r[7]=0u+0x00000002u; // 80100954
  c->lr=0x8010095Cu; f_8006C380(c); // 80100958
  c->r[3]=0u+0x00000000u; // 8010095C
  c->r[4]=0u+0x00000000u; // 80100960
  c->r[5]=0u+0x00000000u; // 80100964
  c->r[6]=0u+0x00000000u; // 80100968
  c->r[7]=0u+0x00000000u; // 8010096C
  c->r[8]=0u+0x00000000u; // 80100970
  c->lr=0x80100978u; f_8006C400(c); // 80100974
  c->r[3]=0u+0x00000000u; // 80100978
  c->r[4]=0u+0x00000007u; // 8010097C
  c->r[5]=0u+0x00000004u; // 80100980
  c->r[6]=0u+0x00000006u; // 80100984
  c->r[7]=0u+0x00000001u; // 80100988
  c->lr=0x80100990u; f_8006C3C0(c); // 8010098C
  c->r[3]=0u+0x00000000u; // 80100990
  c->r[4]=0u+0x00000001u; // 80100994
  c->r[5]=0u+0x00000000u; // 80100998
  c->r[6]=0u+0x00000000u; // 8010099C
  c->r[7]=0u+0x00000000u; // 801009A0
  c->r[8]=0u+0x00000000u; // 801009A4
  c->lr=0x801009ACu; f_8006C460(c); // 801009A8
  c->r[3]=0u+0x00000000u; // 801009AC
  c->r[4]=0u+0x0000000Cu; // 801009B0
  c->lr=0x801009B8u; f_8006C5F0(c); // 801009B4
  c->r[3]=0u+0x00000000u; // 801009B8
  c->r[4]=0u+0x0000001Cu; // 801009BC
  c->lr=0x801009C4u; f_8006C640(c); // 801009C0
  c->r[3]=0u+0x00000000u; // 801009C4
  c->r[4]=0u+0x00000000u; // 801009C8
  c->r[5]=0u+0x00000000u; // 801009CC
  c->lr=0x801009D4u; f_8006C690(c); // 801009D0
  c->r[3]=0u+0x00000001u; // 801009D4
  c->r[4]=0u+0x00000001u; // 801009D8
  c->r[5]=0u+0x00000002u; // 801009DC
  c->r[6]=0u+0x000000FFu; // 801009E0
  c->lr=0x801009E8u; f_8006C820(c); // 801009E4
  c->r[3]=0u+0x00000001u; // 801009E8
  c->r[4]=0u+0x0000000Fu; // 801009EC
  c->r[5]=0u+0x00000008u; // 801009F0
  c->r[6]=0u+0x0000000Eu; // 801009F4
  c->r[7]=0u+0x00000000u; // 801009F8
  c->lr=0x80100A00u; f_8006C380(c); // 801009FC
  c->r[3]=0u+0x00000001u; // 80100A00
  c->r[4]=0u+0x00000000u; // 80100A04
  c->r[5]=0u+0x00000000u; // 80100A08
  c->r[6]=0u+0x00000001u; // 80100A0C
  c->r[7]=0u+0x00000000u; // 80100A10
  c->r[8]=0u+0x00000000u; // 80100A14
  c->lr=0x80100A1Cu; f_8006C400(c); // 80100A18
  c->r[3]=0u+0x00000001u; // 80100A1C
  c->r[4]=0u+0x00000007u; // 80100A20
  c->r[5]=0u+0x00000004u; // 80100A24
  c->r[6]=0u+0x00000006u; // 80100A28
  c->r[7]=0u+0x00000000u; // 80100A2C
  c->lr=0x80100A34u; f_8006C3C0(c); // 80100A30
  c->r[3]=0u+0x00000001u; // 80100A34
  c->r[4]=0u+0x00000001u; // 80100A38
  c->r[5]=0u+0x00000000u; // 80100A3C
  c->r[6]=0u+0x00000000u; // 80100A40
  c->r[7]=0u+0x00000000u; // 80100A44
  c->r[8]=0u+0x00000000u; // 80100A48
  c->lr=0x80100A50u; f_8006C460(c); // 80100A4C
  c->r[3]=0u+0x00000001u; // 80100A50
  c->r[4]=0u+0x0000000Du; // 80100A54
  c->lr=0x80100A5Cu; f_8006C5F0(c); // 80100A58
  c->r[3]=0u+0x00000001u; // 80100A5C
  c->r[4]=0u+0x0000001Du; // 80100A60
  c->lr=0x80100A68u; f_8006C640(c); // 80100A64
  c->r[3]=0u+0x00000001u; // 80100A68
  c->r[4]=0u+0x00000000u; // 80100A6C
  c->r[5]=0u+0x00000000u; // 80100A70
  c->lr=0x80100A78u; f_8006C690(c); // 80100A74
  c->r[3]=0u+0x00000002u; // 80100A78
  c->r[4]=0u+0x00000000u; // 80100A7C
  c->r[5]=0u+0x00000000u; // 80100A80
  c->r[6]=0u+0x000000FFu; // 80100A84
  c->lr=0x80100A8Cu; f_8006C820(c); // 80100A88
  c->r[3]=0u+0x00000002u; // 80100A8C
  c->r[4]=0u+0x0000000Fu; // 80100A90
  c->r[5]=0u+0x00000008u; // 80100A94
  c->r[6]=0u+0x0000000Cu; // 80100A98
  c->r[7]=0u+0x00000000u; // 80100A9C
  c->lr=0x80100AA4u; f_8006C380(c); // 80100AA0
  c->r[3]=0u+0x00000002u; // 80100AA4
  c->r[4]=0u+0x00000000u; // 80100AA8
  c->r[5]=0u+0x00000000u; // 80100AAC
  c->r[6]=0u+0x00000000u; // 80100AB0
  c->r[7]=0u+0x00000001u; // 80100AB4
  c->r[8]=0u+0x00000000u; // 80100AB8
  c->lr=0x80100AC0u; f_8006C400(c); // 80100ABC
  c->r[3]=0u+0x00000002u; // 80100AC0
  c->r[4]=0u+0x00000004u; // 80100AC4
  c->r[5]=0u+0x00000007u; // 80100AC8
  c->r[6]=0u+0x00000007u; // 80100ACC
  c->r[7]=0u+0x00000000u; // 80100AD0
  c->lr=0x80100AD8u; f_8006C3C0(c); // 80100AD4
  c->r[3]=0u+0x00000002u; // 80100AD8
  c->r[4]=0u+0x00000000u; // 80100ADC
  c->r[5]=0u+0x00000000u; // 80100AE0
  c->r[6]=0u+0x00000000u; // 80100AE4
  c->r[7]=0u+0x00000001u; // 80100AE8
  c->r[8]=0u+0x00000000u; // 80100AEC
  c->lr=0x80100AF4u; f_8006C460(c); // 80100AF0
  c->r[3]=0u+0x00000002u; // 80100AF4
  c->r[4]=0u+0x00000000u; // 80100AF8
  c->r[5]=0u+0x00000000u; // 80100AFC
  c->lr=0x80100B04u; f_8006C690(c); // 80100B00
  c->r[3]=0u+0x00000003u; // 80100B04
  c->r[4]=0u+0x000000FFu; // 80100B08
  c->r[5]=0u+0x000000FFu; // 80100B0C
  c->r[6]=0u+0x000000FFu; // 80100B10
  c->lr=0x80100B18u; f_8006C820(c); // 80100B14
  c->r[3]=0u+0x00000003u; // 80100B18
  c->r[4]=0u+0x00000001u; // 80100B1C
  c->r[5]=0u+0x00000000u; // 80100B20
  c->r[6]=0u+0x0000000Eu; // 80100B24
  c->r[7]=0u+0x0000000Fu; // 80100B28
  c->lr=0x80100B30u; f_8006C380(c); // 80100B2C
  c->r[3]=0u+0x00000003u; // 80100B30
  c->r[4]=0u+0x00000000u; // 80100B34
  c->r[5]=0u+0x00000000u; // 80100B38
  c->r[6]=0u+0x00000000u; // 80100B3C
  c->r[7]=0u+0x00000001u; // 80100B40
  c->r[8]=0u+0x00000000u; // 80100B44
  c->lr=0x80100B4Cu; f_8006C400(c); // 80100B48
  c->r[3]=0u+0x00000003u; // 80100B4C
  c->r[4]=0u+0x00000007u; // 80100B50
  c->r[5]=0u+0x00000007u; // 80100B54
  c->r[6]=0u+0x00000007u; // 80100B58
  c->r[7]=0u+0x00000007u; // 80100B5C
  c->lr=0x80100B64u; f_8006C3C0(c); // 80100B60
  c->r[3]=0u+0x00000003u; // 80100B64
  c->r[4]=0u+0x00000000u; // 80100B68
  c->r[5]=0u+0x00000000u; // 80100B6C
  c->r[6]=0u+0x00000000u; // 80100B70
  c->r[7]=0u+0x00000001u; // 80100B74
  c->r[8]=0u+0x00000000u; // 80100B78
  c->lr=0x80100B80u; f_8006C460(c); // 80100B7C
  c->r[3]=0u+0x00000003u; // 80100B80
  c->r[4]=0u+0x00000000u; // 80100B84
  c->r[5]=0u+0x00000000u; // 80100B88
  c->lr=0x80100B90u; f_8006C690(c); // 80100B8C
  c->r[3]=0u+0x00000003u; // 80100B90
  c->r[4]=0u+0x0000000Eu; // 80100B94
  c->lr=0x80100B9Cu; f_8006C5F0(c); // 80100B98
  c->r[5]=R32(c->r[2]+0xFFFF89B8u); // 80100B9C
  c->r[4]=c->r[1]+0x00000018u; // 80100BA0
  c->r[0]=R32(c->r[2]+0xFFFF89BCu); // 80100BA4
  c->r[3]=0u+0x00000001u; // 80100BA8
  W32(c->r[1]+0x00000018u,c->r[5]); // 80100BAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80100BB0
  c->lr=0x80100BB8u; f_8006C520(c); // 80100BB4
  c->r[0]=R32(c->r[2]+0xFFFF89C0u); // 80100BB8
  c->r[4]=c->r[1]+0x00000010u; // 80100BBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100BC0
  c->r[3]=0u+0x00000000u; // 80100BC4
  c->lr=0x80100BCCu; f_8006C590(c); // 80100BC8
  c->r[0]=R32(c->r[2]+0xFFFF89C4u); // 80100BCC
  c->r[4]=c->r[1]+0x0000000Cu; // 80100BD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80100BD4
  c->r[3]=0u+0x00000001u; // 80100BD8
  c->lr=0x80100BE0u; f_8006C590(c); // 80100BDC
  c->r[0]=R32(c->r[2]+0xFFFF89C8u); // 80100BE0
  c->r[4]=c->r[1]+0x00000008u; // 80100BE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80100BE8
  c->r[3]=0u+0x00000002u; // 80100BEC
  c->lr=0x80100BF4u; f_8006C590(c); // 80100BF0
  c->r[3]=0u+0x00000000u; // 80100BF4
  c->r[4]=0u+0x00000000u; // 80100BF8
  c->r[5]=0u+0x00000001u; // 80100BFC
  c->r[6]=0u+0x00000002u; // 80100C00
  c->r[7]=0u+0x00000003u; // 80100C04
  c->lr=0x80100C0Cu; f_8006C6D0(c); // 80100C08
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80100C0C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80100C10
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80100C14
  c->lr=c->r[0]; // 80100C18
  c->r[1]=c->r[1]+0x000000B0u; // 80100C1C
  return; // 80100C20
}

// fn_80100C30
void f_80100C30(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF9374u); // 80100C30
  c->r[8]=c->r[13]+0xFFFF9358u; // 80100C34
  c->r[7]=c->r[13]+0xFFFF9360u; // 80100C38
  c->r[6]=c->r[13]+0xFFFF9368u; // 80100C3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100C40
  c->r[0]=R32(c->r[8]+c->r[0]); // 80100C44
  W32(c->r[3]+0x00000000u,c->r[0]); // 80100C48
  c->r[0]=R32(c->r[13]+0xFFFF9374u); // 80100C4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100C50
  c->r[0]=R32(c->r[7]+c->r[0]); // 80100C54
  W32(c->r[4]+0x00000000u,c->r[0]); // 80100C58
  c->r[0]=R32(c->r[13]+0xFFFF9374u); // 80100C5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100C60
  c->r[0]=R32(c->r[6]+c->r[0]); // 80100C64
  W32(c->r[5]+0x00000000u,c->r[0]); // 80100C68
  return; // 80100C6C
}

// fn_80100C70
void f_80100C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100C70
  c->r[0]=c->lr; // 80100C74
  W32(c->r[1]+0x00000094u,c->r[0]); // 80100C78
  c->r[11]=c->r[1]+0x00000090u; // 80100C7C
  c->lr=0x80100C84u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100C80
  c->r[9]=R32(c->r[13]+0xFFFF9374u); // 80100C84
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[6]); // 80100C88
  c->r[11]=c->r[13]+0xFFFF9358u; // 80100C8C
  c->r[10]=c->r[13]+0xFFFF9360u; // 80100C90
  c->r[12]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80100C94
  c->r[0]=c->r[9]+0x00000001u; // 80100C98
  c->r[9]=c->r[13]+0xFFFF9368u; // 80100C9C
  c->r[11]=R32(c->r[11]+c->r[12]); // 80100CA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80100CA4
  W32(c->r[13]+0xFFFF9374u,c->r[0]); // 80100CA8
  c->r[27]=R32(c->r[10]+c->r[12]); // 80100CAC
  c->r[29]=c->r[3]|c->r[3]; // 80100CB0
  c->r[26]=R32(c->r[9]+c->r[12]); // 80100CB4
  c->r[30]=c->r[4]|c->r[4]; // 80100CB8
  c->r[22]=c->r[5]|c->r[5]; // 80100CBC
  c->r[23]=c->r[6]|c->r[6]; // 80100CC0
  c->r[24]=c->r[7]|c->r[7]; // 80100CC4
  c->r[31]=c->r[8]|c->r[8]; // 80100CC8
  c->r[25]=0u+0x00000000u; // 80100CCC
  if (crb(c,1)) { goto L_80100CDC; } // 80100CD0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[5]); // 80100CD4
  if (!crb(c,1)) { goto L_80100CE0; } // 80100CD8
L_80100CDC:;
  c->r[25]=0u+0x00000001u; // 80100CDC
L_80100CE0:;
  c->r[4]=c->r[11]|c->r[11]; // 80100CE0
  c->r[3]=c->r[1]+0x00000048u; // 80100CE4
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80100CE8
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 80100CEC
  c->r[7]=0u+0x00000001u; // 80100CF0
  c->r[8]=0u+0x00000000u; // 80100CF4
  c->r[9]=0u+0x00000000u; // 80100CF8
  c->r[10]=0u+0x00000000u; // 80100CFC
  c->lr=0x80100D04u; f_8006B0F0(c); // 80100D00
  {uint32_t ea=c->r[2]+0xFFFF89CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80100D04
  c->r[4]=c->r[25]|c->r[25]; // 80100D08
  c->r[5]=c->r[25]|c->r[25]; // 80100D0C
  c->r[3]=c->r[1]+0x00000048u; // 80100D10
  c->f[2]=c->f[1]; // 80100D14
  c->r[6]=0u+0x00000000u; // 80100D18
  c->f[3]=c->f[1]; // 80100D1C
  c->r[7]=0u+0x00000000u; // 80100D20
  c->r[8]=0u+0x00000000u; // 80100D24
  c->lr=0x80100D2Cu; f_8006B350(c); // 80100D28
  c->r[3]=c->r[1]+0x00000048u; // 80100D2C
  c->r[4]=0u+0x00000000u; // 80100D30
  c->lr=0x80100D38u; f_8006B6A0(c); // 80100D34
  c->r[28]=sraw(c,c->r[23],1); // 80100D38
  c->r[4]=c->r[27]|c->r[27]; // 80100D3C
  c->r[27]=sraw(c,c->r[22],1); // 80100D40
  c->r[3]=c->r[1]+0x00000028u; // 80100D44
  c->r[5]=rotl(c->r[22],31)&0x0000FFFFu; // 80100D48
  c->r[6]=rotl(c->r[23],31)&0x0000FFFFu; // 80100D4C
  c->r[7]=0u+0x00000001u; // 80100D50
  c->r[8]=0u+0x00000000u; // 80100D54
  c->r[9]=0u+0x00000000u; // 80100D58
  c->r[10]=0u+0x00000000u; // 80100D5C
  c->lr=0x80100D64u; f_8006B0F0(c); // 80100D60
  {uint32_t ea=c->r[2]+0xFFFF89CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80100D64
  c->r[4]=c->r[25]|c->r[25]; // 80100D68
  c->r[5]=c->r[25]|c->r[25]; // 80100D6C
  c->r[3]=c->r[1]+0x00000028u; // 80100D70
  c->f[2]=c->f[1]; // 80100D74
  c->r[6]=0u+0x00000000u; // 80100D78
  c->f[3]=c->f[1]; // 80100D7C
  c->r[7]=0u+0x00000000u; // 80100D80
  c->r[8]=0u+0x00000000u; // 80100D84
  c->lr=0x80100D8Cu; f_8006B350(c); // 80100D88
  c->r[3]=c->r[1]+0x00000028u; // 80100D8C
  c->r[4]=0u+0x00000001u; // 80100D90
  c->lr=0x80100D98u; f_8006B6A0(c); // 80100D94
  c->r[4]=c->r[26]|c->r[26]; // 80100D98
  c->r[3]=c->r[1]+0x00000008u; // 80100D9C
  c->r[5]=rotl(c->r[27],0)&0x0000FFFFu; // 80100DA0
  c->r[6]=rotl(c->r[28],0)&0x0000FFFFu; // 80100DA4
  c->r[7]=0u+0x00000001u; // 80100DA8
  c->r[8]=0u+0x00000000u; // 80100DAC
  c->r[9]=0u+0x00000000u; // 80100DB0
  c->r[10]=0u+0x00000000u; // 80100DB4
  c->lr=0x80100DBCu; f_8006B0F0(c); // 80100DB8
  {uint32_t ea=c->r[2]+0xFFFF89CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80100DBC
  c->r[4]=c->r[25]|c->r[25]; // 80100DC0
  c->r[5]=c->r[25]|c->r[25]; // 80100DC4
  c->r[3]=c->r[1]+0x00000008u; // 80100DC8
  c->f[2]=c->f[1]; // 80100DCC
  c->r[6]=0u+0x00000000u; // 80100DD0
  c->f[3]=c->f[1]; // 80100DD4
  c->r[7]=0u+0x00000000u; // 80100DD8
  c->r[8]=0u+0x00000000u; // 80100DDC
  c->lr=0x80100DE4u; f_8006B350(c); // 80100DE0
  c->r[3]=c->r[1]+0x00000008u; // 80100DE4
  c->r[4]=0u+0x00000002u; // 80100DE8
  c->lr=0x80100DF0u; f_8006B6A0(c); // 80100DEC
  c->r[3]=0u+0x00000080u; // 80100DF0
  c->r[4]=0u+0x00000007u; // 80100DF4
  c->r[5]=0u+0x00000004u; // 80100DF8
  c->lr=0x80100E00u; f_8006A270(c); // 80100DFC
  c->r[0]=R32(c->r[13]+0xFFFF9370u); // 80100E00
  cmps(c,0,(int32_t)c->r[0],0); // 80100E04
  if (crb(c,2)) { goto L_80100E74; } // 80100E08
  c->r[4]=0u+0xCC010000u; // 80100E0C
  c->r[3]=0u+0x00000000u; // 80100E10
  W16(c->r[4]+0xFFFF8000u,c->r[29]); // 80100E14
  c->r[0]=0u+0x00000001u; // 80100E18
  c->r[5]=c->r[29]+c->r[24]; // 80100E1C
  c->r[6]=c->r[30]+c->r[31]; // 80100E20
  W16(c->r[4]+0xFFFF8000u,c->r[30]); // 80100E24
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E28
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100E2C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E30
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 80100E34
  W16(c->r[4]+0xFFFF8000u,c->r[30]); // 80100E38
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E3C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E40
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E44
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 80100E48
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 80100E4C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E50
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E54
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100E58
  W16(c->r[4]+0xFFFF8000u,c->r[29]); // 80100E5C
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 80100E60
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E64
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100E68
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100E6C
  goto L_80100ED8; // 80100E70
L_80100E74:;
  c->r[4]=0u+0xCC010000u; // 80100E74
  c->r[3]=0u+0x00000000u; // 80100E78
  W16(c->r[4]+0xFFFF8000u,c->r[29]); // 80100E7C
  c->r[5]=c->r[29]+c->r[24]; // 80100E80
  c->r[0]=0u+0x00000001u; // 80100E84
  c->r[6]=c->r[30]+c->r[31]; // 80100E88
  W16(c->r[4]+0xFFFF8000u,c->r[30]); // 80100E8C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E90
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E94
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100E98
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 80100E9C
  W16(c->r[4]+0xFFFF8000u,c->r[30]); // 80100EA0
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100EA4
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100EA8
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100EAC
  W16(c->r[4]+0xFFFF8000u,c->r[5]); // 80100EB0
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 80100EB4
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100EB8
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100EBC
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100EC0
  W16(c->r[4]+0xFFFF8000u,c->r[29]); // 80100EC4
  W16(c->r[4]+0xFFFF8000u,c->r[6]); // 80100EC8
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100ECC
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80100ED0
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80100ED4
L_80100ED8:;
  c->r[11]=c->r[1]+0x00000090u; // 80100ED8
  c->lr=0x80100EE0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100EDC
  c->r[0]=R32(c->r[1]+0x00000094u); // 80100EE0
  c->lr=c->r[0]; // 80100EE4
  c->r[1]=c->r[1]+0x00000090u; // 80100EE8
  return; // 80100EEC
}

// fn_80100EF0
void f_80100EF0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF937Cu); // 80100EF0
  cmps(c,0,(int32_t)c->r[12],0); // 80100EF4
  if (crb(c,2)) return; // 80100EF8
  c->ctr=c->r[12]; // 80100EFC
  if (true) { dispatch(c,c->ctr); return; } // 80100F00
}

// fn_80100F04
void f_80100F04(Ctx* __restrict c) {
  return; // 80100F04
}

// fn_80100F10
void f_80100F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100F10
  c->r[0]=c->lr; // 80100F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100F18
  c->r[11]=c->r[1]+0x00000020u; // 80100F1C
  c->lr=0x80100F24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100F20
  cmpu(c,0,c->r[3],0x0000BB80u); // 80100F24
  c->r[31]=0u+0x80160000u; // 80100F28
  c->r[27]=c->r[3]|c->r[3]; // 80100F2C
  c->r[28]=c->r[4]|c->r[4]; // 80100F30
  c->r[29]=c->r[5]|c->r[5]; // 80100F34
  c->r[30]=c->r[6]|c->r[6]; // 80100F38
  c->r[31]=c->r[31]+0x00003130u; // 80100F3C
  if (crb(c,2)) { goto L_80100F60; } // 80100F40
  cmpu(c,0,c->r[3],0x00007D00u); // 80100F44
  if (crb(c,2)) { goto L_80100F60; } // 80100F48
  c->r[3]=c->r[31]+0x00000000u; // 80100F4C
  c->r[5]=c->r[31]+0x00000010u; // 80100F50
  c->r[4]=0u+0x00000031u; // 80100F54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80100F58
  c->lr=0x80100F60u; f_80045D00(c); // 80100F5C
L_80100F60:;
  cmpu(c,0,c->r[28],0x00000002u); // 80100F60
  if (crb(c,2)) { goto L_80100F7C; } // 80100F64
  c->r[3]=c->r[31]+0x00000000u; // 80100F68
  c->r[5]=c->r[31]+0x0000002Cu; // 80100F6C
  c->r[4]=0u+0x00000034u; // 80100F70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80100F74
  c->lr=0x80100F7Cu; f_80045D00(c); // 80100F78
L_80100F7C:;
  c->r[4]=0u+0x00010000u; // 80100F7C
  c->r[3]=c->r[30]|c->r[30]; // 80100F80
  c->r[4]=c->r[4]+0xFFFF8000u; // 80100F84
  c->lr=0x80100F8Cu; f_80082C40(c); // 80100F88
  cmps(c,0,(int32_t)c->r[3],0); // 80100F8C
  W32(c->r[13]+0xFFFF9378u,c->r[3]); // 80100F90
  if (!crb(c,2)) { goto L_80100FAC; } // 80100F94
  c->r[3]=c->r[31]+0x00000000u; // 80100F98
  c->r[5]=c->r[31]+0x00000044u; // 80100F9C
  c->r[4]=0u+0x00000038u; // 80100FA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80100FA4
  c->lr=0x80100FACu; f_80045D00(c); // 80100FA8
L_80100FAC:;
  c->r[3]=R32(c->r[13]+0xFFFF9378u); // 80100FAC
  c->r[3]=c->r[3]+0x00007FE0u; // 80100FB0
  c->lr=0x80100FB8u; f_80061250(c); // 80100FB4
  cmpu(c,0,c->r[27],0x0000BB80u); // 80100FB8
  W32(c->r[13]+0xFFFF937Cu,c->r[29]); // 80100FBC
  if (!crb(c,2)) { goto L_80100FD0; } // 80100FC0
  c->r[3]=0u+0x00000001u; // 80100FC4
  c->lr=0x80100FCCu; f_800611D0(c); // 80100FC8
  goto L_80100FD8; // 80100FCC
L_80100FD0:;
  c->r[3]=0u+0x00000000u; // 80100FD0
  c->lr=0x80100FD8u; f_800611D0(c); // 80100FD4
L_80100FD8:;
  c->r[3]=0u+0x80100000u; // 80100FD8
  c->r[3]=c->r[3]+0x00000EF0u; // 80100FDC
  c->lr=0x80100FE4u; f_80061070(c); // 80100FE0
  c->r[3]=0u+0x80130000u; // 80100FE4
  c->r[4]=0u+0x00000020u; // 80100FE8
  c->r[3]=c->r[3]+0x000056E8u; // 80100FEC
  c->lr=0x80100FF4u; f_800610C0(c); // 80100FF0
  c->lr=0x80100FF8u; f_80061140(c); // 80100FF4
  c->r[11]=c->r[1]+0x00000020u; // 80100FF8
  c->lr=0x80101000u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101000
  c->lr=c->r[0]; // 80101004
  c->r[1]=c->r[1]+0x00000020u; // 80101008
  return; // 8010100C
}

// fn_80101010
void f_80101010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101010
  c->r[0]=c->lr; // 80101014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010101C
  c->r[31]=0u+0x00000000u; // 80101020
  W32(c->r[1]+0x00000008u,c->r[30]); // 80101024
  c->r[30]=c->r[3]|c->r[3]; // 80101028
  c->r[3]=0u+0x00000000u; // 8010102C
  W32(c->r[13]+0xFFFF937Cu,c->r[31]); // 80101030
  c->lr=0x80101038u; f_80061070(c); // 80101034
  c->lr=0x8010103Cu; f_80061160(c); // 80101038
  c->r[4]=R32(c->r[13]+0xFFFF9378u); // 8010103C
  cmps(c,0,(int32_t)c->r[4],0); // 80101040
  if (crb(c,2)) { goto L_80101054; } // 80101044
  c->r[3]=c->r[30]|c->r[30]; // 80101048
  c->lr=0x80101050u; f_80082C50(c); // 8010104C
  W32(c->r[13]+0xFFFF9378u,c->r[31]); // 80101050
L_80101054:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101058
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010105C
  c->lr=c->r[0]; // 80101060
  c->r[1]=c->r[1]+0x00000010u; // 80101064
  return; // 80101068
}

// fn_80101070
void f_80101070(Ctx* __restrict c) {
  f_800610C0(c); return; // 80101070
}

// fn_80101080
void f_80101080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101080
  c->r[0]=c->lr; // 80101084
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101088
  c->r[11]=c->r[1]+0x00000020u; // 8010108C
  c->lr=0x80101094u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80101090
  c->r[30]=0u+0x00000000u; // 80101094
  c->r[26]=c->r[3]|c->r[3]; // 80101098
  W32(c->r[3]+0x00000100u,c->r[30]); // 8010109C
  c->r[27]=c->r[4]|c->r[4]; // 801010A0
  c->r[29]=c->r[26]|c->r[26]; // 801010A4
  c->r[28]=0u+0x00000000u; // 801010A8
  W32(c->r[3]+0x00000104u,c->r[30]); // 801010AC
  c->r[31]=0u+0x00001770u; // 801010B0
L_801010B4:;
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801010B4
  c->r[3]=c->r[27]|c->r[27]; // 801010B8
  c->r[4]=0u+0x00002F00u; // 801010BC
  c->lr=0x801010C4u; f_80082C40(c); // 801010C0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801010C4
  c->r[0]=c->r[3]+0x0000001Fu; // 801010C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801010CC
  c->r[28]=c->r[28]+0x00000001u; // 801010D0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801010D4
  cmps(c,0,(int32_t)c->r[28],16); // 801010D8
  W32(c->r[29]+0x00000008u,c->r[30]); // 801010DC
  c->r[29]=c->r[29]+0x00000010u; // 801010E0
  if (crb(c,0)) { IRQCHK(c); goto L_801010B4; } // 801010E4
  c->r[0]=0u+0x00000240u; // 801010E8
  W32(c->r[26]+0x00000110u,c->r[0]); // 801010EC
  c->r[3]=c->r[27]|c->r[27]; // 801010F0
  c->r[4]=0u+0x000004A0u; // 801010F4
  c->lr=0x801010FCu; f_80082C40(c); // 801010F8
  c->r[4]=c->r[3]+0x0000001Fu; // 801010FC
  c->r[0]=0u+0x00000080u; // 80101100
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80101104
  W32(c->r[26]+0x0000010Cu,c->r[3]); // 80101108
  c->r[3]=0u+0x00000000u; // 8010110C
  W32(c->r[26]+0x00000108u,c->r[4]); // 80101110
  c->ctr=c->r[0]; // 80101114
L_80101118:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 80101118
  W8(c->r[4]+0x00000001u,c->r[3]); // 8010111C
  W8(c->r[4]+0x00000002u,c->r[3]); // 80101120
  W8(c->r[4]+0x00000003u,c->r[3]); // 80101124
  W8(c->r[4]+0x00000004u,c->r[3]); // 80101128
  W8(c->r[4]+0x00000005u,c->r[3]); // 8010112C
  W8(c->r[4]+0x00000006u,c->r[3]); // 80101130
  W8(c->r[4]+0x00000007u,c->r[3]); // 80101134
  W8(c->r[4]+0x00000008u,c->r[3]); // 80101138
  c->r[4]=c->r[4]+0x00000009u; // 8010113C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101118; } // 80101140
  c->r[3]=R32(c->r[26]+0x00000108u); // 80101144
  c->r[4]=0u+0x00000480u; // 80101148
  c->lr=0x80101150u; f_80045010(c); // 8010114C
  c->r[11]=c->r[1]+0x00000020u; // 80101150
  c->lr=0x80101158u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80101154
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101158
  c->lr=c->r[0]; // 8010115C
  c->r[1]=c->r[1]+0x00000020u; // 80101160
  return; // 80101164
}

// fn_80101170
void f_80101170(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF9384u,c->r[3]); // 80101170
  return; // 80101174
}

