# ZenSample

Small, focused examples for [ZenEngine](https://github.com/proton991/ZenEngine).
This repository replaces the old sample application collection.

## Scene asset inspection

`scene_asset_info <path>` loads a source model or `.zenasset` package and prints
its format, vertex/index counts and cache-hit state. It demonstrates synchronous
loading and explicit error handling without a GPU window. Requires asset tools.

From a ZenEngine checkout with submodules initialized:

```sh
cmake --preset x64-windows-msvc-debug
cmake --build --preset x64-windows-msvc-debug --target scene_asset_info
build/x64-windows-msvc-debug/bin/scene_asset_info ZenTest/ZenEditor/Fixtures/inspection.gltf
```

Alternatively configure this repository directly in a compiler developer shell:

```sh
cmake -S . -B build -G Ninja -DZEN_ENGINE_SOURCE_DIR=/path/to/ZenEngine -DCMAKE_BUILD_TYPE=Debug
cmake --build build --target scene_asset_info
```

Use the engine's Vulkan SDK and compiler prerequisites. Future rendering showcases
should be small examples of package playback, render-graph passes and lighting
comparisons. These are planned topics, not implemented demos. The old scene viewer
is retained only in ZenTest as regression/capture infrastructure.

Commit and push changes here separately, then update the ZenEngine submodule pin.
