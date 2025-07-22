#pragma once

#include <chrono>
#include "scene.hpp"

class Renderer
{
private:
    float m_Fps;
    int m_FrameCount;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_LastFrameTime;

public:
    Renderer() = default;
    Renderer(float fps);
    ~Renderer();
    Renderer(const Renderer &renderer) = default;
    void Render(const Scene &scene);
};