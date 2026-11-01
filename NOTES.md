# Dragon's Lair Trilogy (SL3ENR, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as TARGET: Terror (and Geometry Wars: Galaxies, the ReBirth ports, Chocobo's
Dungeon). First game on the Dec 2009 RVL SDK, and the first without dtk.

## Source
- Disc image `dragonslairwii.iso` (4.4 GB). Game ID SL3ENR, title 00010000-534C3345, IOS56.
- main.dol sha1 1fe053383f887604f9a7162bb58e4b122cde834d, entry 0x80004050, .text 0x800068C0-0x801235C0,
  r13 = 0x8020B2A0, r2 = 0x8020C640.
- RVL SDK Dec 11 2009 (0x4302_145) for OS/DVD/VI/PAD/AI/AX/DSP/GX/EXI/SI/NAND/SC/WPAD/KPAD, HBM Feb 2009,
  Actimagine Mobiclip player ("RVL_MWM - ACTIMAGINE_MO", Apr 29 2009). Everything is a Mobiclip movie
  (`files/Content16/*.mo`, plus `...W.mo` widescreen versions).

## Functions without dtk
- `tools/discover.py`: seeds = entry, all bl targets, code pointers built with lis+addi/ori and code
  pointers in data, prologues after an exit; each function is swept linearly to its last exit past every
  forward branch / switch-table target. Data words and lis/addi pairs are only taken as function pointers
  when the target follows an exit or padding (or opens with stwu r1): a data constant equal to
  0x8000A000 had split the per-frame state function and ended every movie after one frame.
- CodeWarrior `_savegpr_N/_restgpr_N` runs are labels, not functions (the recompiler inlines them).
- Shared tails: 15 functions end with `b 0x80021574`, the middle of another function right after a bl
  (cross-jumping). Such b targets are entry points, and the recompiler now lets a function whose last
  instruction is not an exit fall through into the next one (as the CPU does).
- 3,832 functions, 98.6 % of .text. Names: `tools/genmatch.py` hashes normalised generated C++ of this
  game against the other recomps' `src/gen` (strict, then loose, then call-graph propagation) -> 1,670;
  the rest of what the runtime needs is in `tools/manual_names.txt`.

## game.h constants
- __AXDSPResumeCallback 0x80063280, DecrementerExceptionCallback 0x800442F0, iosFree 0x80086690,
  OSExitThread 0x8004CF30, SelectThread idle loop branch 0x8004CBC8, interrupt table r13-0x74C8,
  IOS heap r13-0x7D1C, WPAD control blocks 0x801C5AD0.

## What was new for this game
- **2009 SDK replacements.** EXIInit probes the EXI bus for a debugger (EXIGetID -> 0); main waits for
  WPADGetStatus() == 3; KPADRead/KPADInit are wrappers around KPADiRead/KPADInitEx.
- **WPAD control blocks.** The game calls WPADGetInfoAsync, speaker and memory functions directly. WPADInit
  now gives each channel a zeroed block marked "no controller" (status -1 at +0x900), so they fail cleanly.
- **Movie threads.** Each movie starts a loader thread and a one-frame decode thread on fixed OSThread
  structs, recreated for every movie / frame. A context re-created by OSCreateThread (SRR0 no longer what
  the owning host thread last saved) now restarts its host thread at the new entry point via a C++
  exception (ThreadRestart), whatever guest code it was blocked in; interrupts are held off meanwhile.
- **Interrupt stack.** Handlers ran 1 KB below the interrupted r1. The boot thread runs deep (r1 within
  0x300 of its stack base 0x80205060), so handler frames landed in .sdata2 and overwrote the MEM allocator
  function table. Now 0x20 below, like the console.
- **AXQuit per movie.** __AXOutQuit cancels the AX DSP task and sleeps until the DSP confirms; replaced by
  a host version that cancels, unlinks the task if it is listed, drops the AI callback and stops DMA.
- **Red ENERGIZE.** `src/redfix` is dltfix's stage 1 on the game folder (see runtime/dlt_red.cpp): files are
  identified by SHA-1, retail blue ones rebuilt, already-red ones kept, output checked against the dltfix
  reference SHA-1s. Built as C with -ffp-contract=off -fno-fast-math (bit-exact).
- **Input.** Sideways Wii Remote mapping (screen up = remote RIGHT); no pointer.

## Testing notes
- Headless (llvmpipe) runs at ~12 fps. `REPORT_VI=1` stamps OSReport lines with the VI count;
  `AUTOPRESS_FRAMES=1 AUTOPRESS=2@2400-2410,...` presses buttons (remote names: LEFT = screen down).
- Debug builds: `RECOMP_TRACE_ALL=1 python3 recomp.py ... gen_trace` + `-DGEN_DIR=gen_trace` traces every
  function; `TRACE=1 TRACE_VI=from,to` logs every call in a VI window. `-DMEMWATCH` + `MEMWATCH=lo,hi`
  reports writers of a guest range. A bad indirect call logs registers and the guest stack.
