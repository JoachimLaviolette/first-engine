#include "engine.hpp"
#include <iostream>

Engine::Engine()
    : m_Scenes(),
      m_ActiveScene(nullptr),
      m_Renderer(30.0f)
{
    std::cout << "Engine created." << std::endl;
}

Engine::~Engine()
{
    std::cout << "Engine destroyed." << std::endl;
}

void Engine::AddScene(const Scene &scene)
{
    m_Scenes.emplace_back(scene);
}

void Engine::AddScene(Scene &&scene)
{
    m_Scenes.emplace_back(std::move(scene));
}

void Engine::SetActiveScene(Scene &scene)
{
    m_ActiveScene = &scene;
}

void Engine::Start()
{
    while (true)
    {
        m_Renderer.Render(*m_ActiveScene);
    }
}