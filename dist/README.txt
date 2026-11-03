Dragon's Lair Trilogy (Wii) - native Windows build (static recompilation)  @VERSION@
https://github.com/darkuni/dragons-lair-trilogy-recomp

Dragon's Lair, Dragon's Lair II: Time Warp and Space Ace, running as native code - with Space Ace's
ENERGIZE scenes restored to the arcade's red (the Wii release re-graded them blue), and the
white gaps in the title screen's Dirk standee filled in.

No game data is included. You need your own Dragon's Lair Trilogy disc image (Wii, NTSC-U, SL3ENR)
as .iso or .ciso.

Setup
  Put your disc image (.iso or .ciso) in this folder and run dltrilogy.exe. On the first start it
  builds the "game" folder from it (a few minutes - the disc is 4.4 GB), then rebuilds the 32 Space Ace
  ENERGIZE scenes in red (a minute or two, shown in the console window). After that the disc image
  isn't needed any more. A disc already patched with dltfix works too (nothing to rebuild).

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Controls (the Wii Remote is held sideways)
  Gamepad:  d-pad or left stick = move, A / RB / RT = 2 (sword, confirm), B / LT = 1 (back),
            X = A, Y = B, Start = +, Back = -, Guide = HOME
  Keyboard: arrows = move, Space / X / 2 = 2 (sword, confirm), Z / 1 = 1 (back),
            A = A, S = B, Enter = +, Backspace = -, H = HOME
  Mouse:    left button = 2, right button = 1

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  dltrilogy.ini        settings (created on first run)
  dltrilogy.log        log of the last run - include it with bug reports
  dltrilogy_hang.txt   written if no frame is shown for 8 seconds - include it too
  game\red_energize.ok written once the red scenes are in place (delete it to check them again)
  game\title_standee.ok written once the title-screen standee is fixed
  nand\                saves and high scores

Unofficial fan project, not affiliated with Digital Leisure, Destineer, Don Bluth or Nintendo.
The exe contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
