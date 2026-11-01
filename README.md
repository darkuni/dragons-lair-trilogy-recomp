# Dragon's Lair Trilogy (Wii, NTSC-U) - native recompilation

A static recompilation of **Dragon's Lair Trilogy** for Wii (disc, NTSC-U, `SL3ENR`) to native code:
Dragon's Lair, Dragon's Lair II: Time Warp and Space Ace. The game's PowerPC executable is translated to
C++ and runs on Windows (and Linux) with a small runtime that replaces the Wii hardware, IOS and the DSP.

**Space Ace plays with its red ENERGIZE scenes.** The Wii release re-graded 32 Space Ace scenes blue; on
the first start the native build rebuilds them in the arcade's red from your own disc, with the same code
as the [dltfix](https://github.com/darkuni/dragons-lair-trilogy-wii-fix) disc patcher (bit-identical output).

**No game data is included.** You need your own copy of the game as a disc image (`.iso` or `.ciso`).

## Download

Get the latest `DLTrilogy-<version>-win64.zip` from
[Releases](https://github.com/darkuni/dragons-lair-trilogy-recomp/releases), unzip it, put your disc
image in the same folder and run `dltrilogy.exe`. The first start builds the `game` folder from the image
and restores the red scenes (a few minutes, progress in the console window). Nothing else to install.
The zip's `README.txt` has the controls and keys.

## Status

- Boots through the strap screen, legal and logo screens, title, game/cabinet selection and game menus;
  Dragon's Lair plays (scenes, deaths, lives counter, game over) in headless Linux tests.
- Movies are Actimagine Mobiclip (`.mo`) decoded by the game's own code; audio through AX.
- `dltrilogy.log` is written next to the exe; `dltrilogy_hang.txt` if no frame is shown for 8 s.

Shares its recompiler and runtime with the ReBirth ports, Geometry Wars: Galaxies and TARGET: Terror.
Per-game addresses are in `src/runtime/game.h`, the idle loop in `src/recomp.py`. See [NOTES.md](NOTES.md)
for the technical write-up.

## Controls

The Wii Remote is held sideways. Gamepad: d-pad or left stick = move, A = 2 (sword / confirm), B = 1 (back),
Start = +. Keyboard: arrows = move, Space / X / 2 = sword, Z / 1 = back, Enter = +.
F1 / Esc (or Start+Back) opens the settings menu, F11 / Alt+Enter toggles fullscreen, hold Tab to fast-forward.

## Layout

| Path | What it is |
| --- | --- |
| `tools/discover.py` | Function boundaries and switch tables from `main.dol` (no dtk needed) |
| `tools/genmatch.py` | Names SDK functions by matching generated code against the other recomps |
| `tools/manual_names.txt` | Names found by hand (applied by `tools/apply_refs.py`) |
| `tools/regen.sh` | Rename + regenerate `src/gen` |
| `src/recomp.py` | Recompiler: `main.dol` + symbols -> `src/gen/*.cpp` |
| `src/runtime/` | Runtime: CPU context and memory, threads, IOS, DVD, GX -> OpenGL 3.3, AX audio, input |
| `src/redfix/` | Space Ace red ENERGIZE restoration (Mobiclip decoder/encoder, colour model; from dltfix) |
| `src/hle.txt` | Guest functions replaced by host code or stubbed |

## Building

The generated C++ is in `src/gen`, so regenerating is optional. GitHub Actions builds every push
(`.github/workflows/build-windows.yml`); publishing a release attaches the zip. Tested on Ubuntu 24.04
(on Windows use WSL); the build cross-compiles a Windows exe.

```sh
sudo apt install -y git cmake ninja-build mingw-w64 g++-mingw-w64-x86-64-posix
wget https://github.com/libsdl-org/SDL/releases/download/release-2.30.9/SDL2-devel-2.30.9-mingw.tar.gz
tar xf SDL2-devel-2.30.9-mingw.tar.gz                      # -> ~/SDL2-2.30.9
git clone https://github.com/darkuni/dragons-lair-trilogy-recomp.git
cd dragons-lair-trilogy-recomp/src
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=$HOME/SDL2-2.30.9/x86_64-w64-mingw32
ninja -C build-win -j2
```

Regenerating `src/gen` needs the game's `main.dol` (sha1 `1fe053383f887604f9a7162bb58e4b122cde834d`):
`python3 tools/discover.py main.dol config/symbols_raw.txt && tools/regen.sh main.dol`.

Linux test build (headless, EGL; writes screenshots): `cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build`,
then `SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/dltrilogy ../game`.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Digital Leisure,
Destineer, Don Bluth or Nintendo. *Dragon's Lair*, *Space Ace* and all related names and marks belong to
their respective owners. This repository and its releases contain no game data (video, sound, graphics):
those come from your own legally obtained disc image. `src/gen` and the release exe contain code
machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). `src/redfix` (including a port of
FFmpeg's Mobiclip decoder) is LGPL-2.1; bundled fonts and headers keep their own licenses. See
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
