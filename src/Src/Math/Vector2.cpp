#include "Math/Math.h"

#include <cmath>

namespace CreaLib
{
namespace Math
{
    const Vector2 Vector2::Zero = Vector2();
    const Vector2 Vector2::One = Vector2(1.0f, 1.0f);

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

    float Vector2::Dot(const Vector2 & _vec)
    {
        return (x * _vec.x + y * _vec.y);
    }

    float Vector2::Dot(const float & _x, const float & _y)
    {
        return (x * _x + y * _y);
    }

    float Vector2::Cross(const Vector2 & _vec)
    {
        return (x * _vec.y - _vec.x * y);
    }

    float Vector2::Cross(const float & _x, const float & _y)
    {
        return (x * _y - _x * y);
    }

    /* -- operator -- */

    const Vector2 Vector2::operator-() const
    {
        return Vector2(-x, -y);
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

        return (*this * vec);
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

    Vector2 & Vector2::operator+=(const Vector2 & _vec)
    {
        x += _vec.x;
        y += _vec.y;

        return *this;
    }

    Vector2 & Vector2::operator-=(const Vector2 & _vec)
    {
        x -= _vec.x;
        y -= _vec.y;

        return *this;
    }

    Vector2 & Vector2::operator*=(const Vector2 & _vec)
    {
        x *= _vec.x;
        y *= _vec.y;

        return *this;
    }

    Vector2 & Vector2::operator/=(const Vector2 & _vec)
    {
        x /= _vec.x;
        y /= _vec.y;

        return *this;
    }

    Vector2 & Vector2::operator+=(const float & _value)
    {
        x += _value;
        y += _value;

        return *this;
    }

    Vector2 & Vector2::operator-=(const float & _value)
    {
        x -= _value;
        y -= _value;

        return *this;
    }

    Vector2 & Vector2::operator*=(const float & _value)
    {
        x *= _value;
        y *= _value;

        return *this;
    }

    Vector2 & Vector2::operator/=(const float & _value)
    {
        float value = 1.0f / _value;

        x *= value;
        y *= value;

        return *this;
    }

    Vector2::operator Vector3() const
    {
        return Vector3(x, y, 0.0f);
    }
} // Math
} // CreaLib