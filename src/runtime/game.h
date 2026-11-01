// Per-game constants for Dragon's Lair Trilogy (Wii disc, NTSC-U, SL3ENR).
// Function boundaries come from tools/discover.py; names from tools/genmatch.py (generated-code matches against
// the other recomps) plus tools/manual_names.txt. r13 offsets were read from the instruction that loads the
// variable in the named SDK function.
#pragma once
#define GAME_NAME        "Dragon's Lair Trilogy"
#define GAME_EXE         "dltrilogy"
#define GAME_INI         "dltrilogy.ini"
#define GAME_SETUP_WHAT  "Dragon's Lair Trilogy disc image (.iso or .ciso)"
#define GAME_RED_ENERGIZE 1   // restore Space Ace's red ENERGIZE scenes in the game folder (runtime/dlt_red.cpp)

#define G_AX_RESUME_CB          0x80063280u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x800442F0u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x80086690u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x8004CF30u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x74C8u       // __OSGetInterruptHandler: lwz r4,-0x74C8(r13)
#define G_SDA_IOS_HEAP          0x7D1Cu       // __ios_Ipc2: lwz r3,-0x7D1C(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_8004CF30
#define G_FN_IOS_FREE           f_80086690

// WPAD control block pointers (__wpdcb[4]): WPADInit is replaced (no Bluetooth stack), so the runtime
// gives each channel a zeroed block marked "no controller" (status -1 at +0x900). The WPAD calls the
// game makes directly (WPADGetInfoAsync, speaker, memory, ...) then fail cleanly; presence and input
// come from the replaced WPADProbe / KPADRead.
#define G_WPAD_CB               0x801C5AD0u
#define G_WPAD_CB_STATUS        0x900u

// __AXOutQuit replacement (AXQuit runs at the end of every movie; the next movie calls AXInit again).
#define G_AXOUT_TASK            0x801A4DC0u   // __AXOutDSPTask (DSPTaskInfo)
#define G_SDA_AXOUT_A           0x70DCu       // r13-0x70DC cleared on entry
#define G_SDA_AXOUT_B           0x7108u       // r13-0x7108 cleared after AIStopDMA
#define G_FN_DSP_CANCEL_TASK    0x800665C0u
#define G_FN_DSP_REMOVE_TASK    0x80066F20u   // __DSP_remove_task
#define G_FN_AI_REGISTER_DMA_CB 0x80061070u
#define G_FN_AI_STOP_DMA        0x80061160u
