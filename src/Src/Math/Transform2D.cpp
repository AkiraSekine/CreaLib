#include "Math/Transform2D.h"

namespace CreaLib
{
namespace Math
{
    Transform2D::Transform2D() :
        m_position(Vector2::Zero),
        m_rotation(0.0f),
        m_scale(Vector2::One)
    {
    }

    Transform2D::Transform2D(const Vector2 & _pos) :
        m_position(_pos),
        m_rotation(0.0f),
        m_scale(Vector2::One)
    {
    }

    Transform2D::Transform2D(const Vector2 & _pos, const float & _rot) :
        m_position(_pos),
        m_rotation(_rot),
        m_scale(Vector2::One)
    {
    }

    Transform2D::Transform2D(const Vector2 & _pos, const float & _rot, const Vector2 & _scale) :
        m_position(_pos),
        m_rotation(_rot),
        m_scale(_scale)
    {
    }
} // Math
} // CreaLib