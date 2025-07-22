#include "engine.hpp"

int main()
{
    Engine engine;
    Scene scene_1 = Scene("Scene_1");

    engine.AddScene(scene_1);
    engine.SetActiveScene(scene_1);
    engine.Start();
}