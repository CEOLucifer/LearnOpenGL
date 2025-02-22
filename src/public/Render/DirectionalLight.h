#pragma once

#include "Node/Node.h"
#include <glm/glm.hpp>

/// @brief 定向光
/// 
class DirectionalLight : public Node
{
public:
    glm::vec3 direction = {0, 0, -1};
    glm::vec3 color = {1, 1, 1};
    float intensity = 0.5;

public:
    void OnInit() override;
};