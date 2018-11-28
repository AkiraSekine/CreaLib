#include "Math/Vector2.h"

#include <cmath>

namespace CreaLib
{
namespace Math
{
    Vector2::Vector2() :
        x(0.0f),
        y(0.0f)
    {
    }

    Vector2::Vector2(const float & _x) :
        x(_x),
        y(0.0f)
    {
    }

    Vector2::Vector2(const float & _x, const float & _y) :
        x(_x),
        y(_y)
    {
    }

    float Vector2::Magnitude()
    {
        return sqrtf(x * x + y * y);
    }

    float Vector2::SqrMagnitude()
    {
        return (x * x + y * y);
    }

    Vector2 Vector2::Normalize()
    {
        float magnitude = 1.0f / Magnitude();

        return (*this * magnitude);
    }

    const Vector2 Vector2::operator+(const Vector2 & _vec) const
    {
        return Vector2(x + _vec.x, y + _vec.y);
    }

    const Vector2 Vector2::operator-(const Vector2 & _vec) const
    {
        return Vector2(x - _vec.x, y - _vec.y);
    }

    const Vector2 Vector2::operator*(const Vector2 & _vec) const
    {
        return Vector2(x * _vec.x, y * _vec.y);
    }

    const Vector2 Vector2::operator/(const Vector2 & _vec) const
    {
        Vector2 vec = 1.0f / _vec;

        return Vector2();
    }

    const Vector2 Vector2::operator+(const float & _value) const
    {
        return Vector2(x + _value, y + _value);
    }

    const Vector2 Vector2::operator-(const float & _value) const
    {
        return Vector2(x - _value, y - _value);
    }

    const Vector2 Vector2::operator*(const float & _value) const
    {
        return Vector2(x * _value, y * _value);
    }

    const Vector2 Vector2::operator/(const float & _value) const
    {
        float value = 1.0f / _value;

        return (*this * value);
    }
} // Math
} // CreaLib