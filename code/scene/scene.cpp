#include "scene.hpp"
#include <iostream>
#include <string>

Scene::Scene(const std::string_view name)
    : m_Name(name)
{
    std::cout << "Scene '" << m_Name << "' created." << std::endl;
}

Scene::Scene(const Scene &scene)
    : m_Name(scene.m_Name + " - copy")
{
    std::cout << "Copy '" << m_Name + "' of scene '" << scene.m_Name << "' created." << std::endl;
}

Scene::Scene(Scene &&scene) noexcept
    : m_Name(std::move(scene.m_Name))
{
    std::cout << "Scene '" << m_Name << "' moved." << std::endl;
    scene.m_Name += " - old";
}

Scene::~Scene()
{
    std::cout << "Scene '" << m_Name + "' destroyed." << std::endl;
}

std::string_view Scene::GetName() const
{
    return m_Name;
}
