#include "AssetTools/SceneTools.h"
#include <iostream>

int main(int argc, char** argv)
{
    int result = 1;
    if (argc == 2)
    {
        const zen::asset::SceneLoadResult loaded = zen::asset::LoadSourceScene(argv[1]);
        if (loaded.status == zen::asset::SceneImportStatus::Success && loaded.scene)
        {
            std::cout << "Format: " << loaded.format << '\n'
                      << "Vertices: " << loaded.scene->vertices.size() << '\n'
                      << "Indices: " << loaded.scene->indices.size() << '\n'
                      << "Cache hit: " << (loaded.cacheHit ? "yes" : "no") << '\n';
            result = 0;
        }
        else
        {
            std::cerr << "Scene loading failed: " << loaded.error << '\n';
        }
    }
    else
    {
        std::cerr << "Usage: scene_asset_info <source model or .zenasset package>\n";
    }
    return result;
}
