#pragma once

#include "Vector2.h"

namespace CreaLib
{
namespace Math
{
    class Transform2D
    {
    public:

        Transform2D();
        Transform2D(const Vector2& _pos);
        Transform2D(const Vector2& _pos, const float& _rot);
        Transform2D(const Vector2& _pos, const float& _rot, const Vector2& _scale);
        
    private:

        Vector2 m_position;
        float m_rotation;
        Vector2 m_scale;
    };
} // Math
} // CreaLib