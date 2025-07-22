#pragma once

#include <iostream>
#include <vector>
#include "scene.hpp"
#include "renderer.hpp"

class Engine
{
private:
    std::vector<Scene> m_Scenes;
    Scene *m_ActiveScene;
    Renderer m_Renderer;

public:
    Engine();
    ~Engine();
    Engine(const Engine &engine) = default;
    void AddScene(const Scene &scene);
    void AddScene(Scene &&scene);
    void SetActiveScene(Scene &scene);
    void Start();
};
