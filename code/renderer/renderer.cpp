#include "renderer.hpp"
#include <iostream>
#include <thread>

Renderer::Renderer(float fps)
    : m_Fps(fps),
      m_FrameCount(0),
      m_LastFrameTime(std::chrono::high_resolution_clock::now())
{
    std::cout << "Renderer created." << std::endl;
}

Renderer::~Renderer()
{
    std::cout << "Renderer destroyed." << std::endl;
}

void Renderer::Render(const Scene &scene)
{
    std::cout << "Rendering scene '" << scene.GetName() << "'" << std::endl;

    m_FrameCount++;

    // Simulate a rendering taking 5s
    std::this_thread::sleep_for(std::chrono::seconds(5));

    auto now = std::chrono::high_resolution_clock::now();
    float elapsedDuration = std::chrono::duration<float>(now - m_LastFrameTime).count();

    if (elapsedDuration >= 1.0f)
    {
        float fps = m_FrameCount / elapsedDuration;
        m_FrameCount = 0;
        m_LastFrameTime = now;

        std::cout << "Rendering at " << fps << " FPS..." << std::endl;
    }
}