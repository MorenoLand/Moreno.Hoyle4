# Static recompilation of a 1999 Windows casino game to native C and WebAssembly

Hoyle Casino 4 (Sierra, 1999) lifted instruction-by-instruction into C, rebuilt as a native
Windows x86-32 executable and as a wasm32 browser build. The original machine code is not used at
run time: the lifted C is the program, the host maps the original image's data at its own
addresses, and Win32 imports are dispatched through a bridge.

No game data, original executable, analysis exports or build output are included in this repository.

## Requirements

- Windows x86-32 host (MinGW-w64 32-bit, Python 3.11+).
- The original Hoyle Casino 4 installation (data files and `Casino4.exe`) for building and running.
- Optional: Emscripten for the browser build.

## Desktop build

1. Place the original executable at `orig/Casino4.exe` and keep the game data in a folder of your
   choice.
2. Build:

   ```sh
   python build.py
   ```

   Output: `bin/HoyleCasino4.exe`.

3. Run it from the folder that holds the game data. The host looks in its own folder first, then in
   `<exe folder>/data`.

## Browser build

1. Set the Emscripten compiler in `project.toml` (`[wasm].emcc`) or through `SS_EMCC`.
2. Build with the game data preloaded:

   ```sh
   python build_wasm.py --preload-data
   ```

   Output: `bin/wasm/` (`host.js`, `host.wasm`, `host.data.part*`).

3. Serve and open the page:

   ```sh
   python web/serve.py bin/wasm 8080
   ```

## Layout

| Path | Purpose |
|---|---|
| `project.toml` | Target definition: executable, image ranges, linker layout, imports, analyzer, icon. |
| `src/` | Lifted C, one file per original code block, plus the function dispatch table. |
| `runtime/` | Guest registers, memory, import dispatch, threads, boot and the Win32 bridge. |
| `runtime/wasm/` | wasm32 host: linear memory, sentinel dispatch, audio, presentation and the per-target imports. |
| `pipeline/` | Analysis export, function table, lifter, RTTI, API table, manifest and readiness checks. |
| `web/` | Browser shell: canvas, input mapping, chunked data preload, development server. |
| `docs/` | Pipeline and porting documentation. |
| `tools/analysis/` | One-off analysis and debugging scripts used while lifting the target. |
| `assets/` | Desktop icon and the original version resource. |
| `tests/`, `schemas/` | Tests and evidence record schemas. |

## Status

Working: startup without the CD, rendering and window scaling, mouse mapping across resize and
maximize, sign-in and casino floor, room entry, blackjack play, SOS sound effects, streamed music
and voice in the browser and on the desktop.

Known open items:

- Blackjack deal animation timing on the desktop build is still being verified; the presentation
  path is capped to 60 Hz because the GDI host has no vertical sync.
- The first entry into a room in the browser build spends a long time on the "One Moment Please"
  screen while the room assets are prepared.
- Readiness records under `recomp/data/` list the remaining unknowns per function.

## Legal

This repository contains no game data, no original executables and no extracted copyrighted
assets. Use it only with a copy of the game you legally own and are permitted to reverse engineer
for interoperability or preservation. See [LEGAL.md](LEGAL.md).

## License

MIT. See [LICENSE](LICENSE).
