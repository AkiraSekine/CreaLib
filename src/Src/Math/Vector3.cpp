#include "Math/Vector3.h"

#include <cmath>

#include "Math/Math.h"
#include "Math/Vector2.h"

namespace CreaLib
{
namespace Math
{
    const Vector3 Vector3::Zero = Vector3();
    const Vector3 Vector3::One = Vector3(1.0f, 1.0f, 1.0f);

    Vector3::Vector3() :
        x(0.0f),
        y(0.0f),
        z(0.0f)
    {
    }

    Vector3::Vector3(const float & _x) :
        x(_x),
        y(0.0f),
        z(0.0f)
    {
    }

    Vector3::Vector3(const float & _x, const float & _y) :
        x(_x),
        y(_y),
        z(0.0f)
    {
    }

    Vector3::Vector3(const float & _x, const float & _y, const float & _z) :
        x(_x),
        y(_y),
        z(_z)
    {
    }

    Vector3::Vector3(const Vector2 & _vec2) :
        x(_vec2.x),
        y(_vec2.y),
        z(0.0f)
    {
    }

    float Vector3::Magnitude()
    {
        return sqrtf(x * x + y * y + z * z);
    }

    float Vector3::SqrMagnitude()
    {
        return (x * x + y * y + z * z);
    }

    Vector3 Vector3::Normalize()
    {
        float magnitude = 1.0f / Magnitude();

        return (*this * magnitude);
    }

    float Vector3::Dot(const Vector3& _vec)
    {
        Vector3 vec = *this * _vec;

        return (vec.x + vec.y + vec.z);
    }

    float Vector3::Dot(const float & _x, const float & _y, const float & _z)
    {
        Vector3 vec = *this * Vector3(_x, _y, _z);

        return (vec.x + vec.y + vec.z);
    }

    Vector3 Vector3::Cross(const Vector3 & _vec)
    {
        return Vector3(
            y * _vec.z - _vec.y * z,
            -(x * _vec.z - _vec.x * z),
            x * _vec.y - _vec.y * x);
    }

    Vector3 Vector3::Cross(const float & _x, const float & _y, const float & _z)
    {
        return Vector3(y * _z - _y * z, -(x * _z - _x * z), x * _y - _y * x);
    }

    /* -- operator -- */

    const Vector3 Vector3::operator-() const
    {
        return Vector3(-x, -y, -z);
    }

    const Vector3 Vector3::operator+(const Vector3 & _vec) const
    {
        return Vector3(x + _vec.x, y + _vec.y, z + _vec.z);
    }

    const Vector3 Vector3::operator-(const Vector3 & _vec) const
    {
        return Vector3(x - _vec.x, y - _vec.y, z - _vec.z);
    }

    const Vector3 Vector3::operator*(const Vector3 & _vec) const
    {
        return Vector3(x * _vec.x, y * _vec.y, z * _vec.z);
    }

    const Vector3 Vector3::operator/(const Vector3 & _vec) const
    {
        return Vector3(x / _vec.x, y / _vec.y, z / _vec.z);
    }

    const Vector3 Vector3::operator+(const Vector2 & _vec) const
    {
        return Vector3(x + _vec.x, y + _vec.y, z);
    }

    const Vector3 Vector3::operator-(const Vector2 & _vec) const
    {
        return Vector3(x - _vec.x, y - _vec.y, z);
    }

    const Vector3 Vector3::operator+(const float & _value) const
    {
        return Vector3(x + _value, y + _value, z + _value);
    }

    const Vector3 Vector3::operator-(const float & _value) const
    {
        return Vector3(x - _value, y - _value, z - _value);
    }

    const Vector3 Vector3::operator*(const float & _value) const
    {
        return Vector3(x * _value, y * _value, z * _value);
    }

    const Vector3 Vector3::operator/(const float & _value) const
    {
        float value = 1.0f / _value;

        return Vector3(x * value, y * value, z * value);
    }

    Vector3::operator Vector2() const
    {
        return Vector2(x, y);
    }
} // Math
} // CreaLib