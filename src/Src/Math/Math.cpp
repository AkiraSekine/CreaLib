#include "Math/Math.h"

namespace CreaLib
{
namespace Math
{
    /* -- Vector2 -- */

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

    /* -- Vector3 -- */

    const Vector3 operator+(const float & _value, const Vector3 & _vec)
    {
        return (_vec + _value);
    }

    const Vector3 operator-(const float & _value, const Vector3 & _vec)
    {
        return Vector3(_value - _vec.x, _value - _vec.y, _value - _vec.z);
    }

    const Vector3 operator*(const float & _value, const Vector3 & _vec)
    {
        return (_vec * _value);
    }

    const Vector3 operator/(const float & _value, const Vector3 & _vec)
    {
        return Vector3(_value / _vec.x, _value / _vec.y, _value / _vec.z);
    }

    const Vector3 operator+(const Vector2 & _vec2, const Vector3 & _vec3)
    {
        return Vector3(_vec2.x + _vec3.x, _vec2.y + _vec3.y, _vec3.z);
    }

    const Vector3 operator-(const Vector2 & _vec2, const Vector3 & _vec3)
    {
        return Vector3(_vec2.x - _vec3.x, _vec2.y - _vec3.y, -_vec3.z);
    }
} // Math
} // CreaLib