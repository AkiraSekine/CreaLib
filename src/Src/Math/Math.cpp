#include "Math/Math.h"

namespace CreaLib
{
namespace Math
{
    const Vector2 operator+(const float & _value, const Vector2 & _vec)
    {
        return (_vec + _value);
    }

    const Vector2 operator-(const float & _value, const Vector2 & _vec)
    {
        return Vector2(_value - _vec.x, _value - _vec.y);
    }

    const Vector2 operator*(const float & _value, const Vector2 & _vec)
    {
        return (_vec * _value);
    }

    const Vector2 operator/(const float & _value, const Vector2 & _vec)
    {
        return Vector2(_value / _vec.x, _value / _vec.y);
    }
} // Math
} // CreaLib