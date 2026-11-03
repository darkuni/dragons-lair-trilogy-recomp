Dragon's Lair Trilogy (Wii) - native Linux / SteamOS build (static recompilation)  @VERSION@
https://github.com/darkuni/dragons-lair-trilogy-recomp

Dragon's Lair, Dragon's Lair II: Time Warp and Space Ace, running as native code - with Space Ace's
ENERGIZE scenes restored to the arcade's red (the Wii release re-graded them blue), and the
white gaps in the title screen's Dirk standee filled in.

No game data is included. You need your own Dragon's Lair Trilogy disc image (Wii, NTSC-U, SL3ENR)
as .iso or .ciso.

Setup (Steam Deck: do this in Desktop Mode)
  1. Extract this folder somewhere you can write to (e.g. ~/Games/DLTrilogy).
  2. Put your disc image (.iso or .ciso) in the same folder.
  3. Run ./dltrilogy once from a terminal (Konsole on the Deck): the first start builds the "game"
     folder from the image (a few minutes) and rebuilds the 32 Space Ace ENERGIZE scenes in red
     (a few minutes on the Deck), with progress in the terminal. After that the image isn't needed.
  4. For Game Mode: Steam > Add a Non-Steam Game > browse to dltrilogy. The Deck's controls work as a
     gamepad (see below).

Requirements: x86_64 Linux with glibc 2.38 or newer (SteamOS 3.6+, Ubuntu 24.04+, Fedora 39+),
SDL2 and OpenGL 3.3 (both included on SteamOS).

Controls (the Wii Remote is held sideways)
  Gamepad:  d-pad or left stick = move, A / RB / RT = 2 (sword, confirm), B / LT = 1 (back),
            X = A, Y = B, Start = +, Back = -, Guide = HOME
  Keyboard: arrows = move, Space / X / 2 = 2 (sword, confirm), Z / 1 = 1 (back),
            A = A, S = B, Enter = +, Backspace = -, H = HOME

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  dltrilogy.ini         settings (created on first run)
  game/red_energize.ok  written once the red scenes are in place (delete it to check them again)
  game/title_standee.ok written once the title-screen standee is fixed
  nand/                 saves and high scores
  The log goes to the terminal (run ./dltrilogy 2> dltrilogy.log to keep it for bug reports).

Unofficial fan project, not affiliated with Digital Leisure, Destineer, Don Bluth or Nintendo.
The program contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
