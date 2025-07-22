#pragma once

#include <string>
#include <string_view>

class Scene
{
private:
    std::string m_Name;

public:
    Scene() = default;
    Scene(const std::string_view name);
    Scene(const Scene &scene);
    Scene(Scene &&scene) noexcept;
    ~Scene();
    std::string_view GetName() const;
};