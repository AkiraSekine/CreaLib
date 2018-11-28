#pragma once

namespace CreaLib
{
namespace Math
{
    class Vector2;
    class Vector3;

    const Vector2 operator+(const float& _value, const Vector2& _vec);
    const Vector2 operator-(const float& _value, const Vector2& _vec);
    const Vector2 operator*(const float& _value, const Vector2& _vec);
    const Vector2 operator/(const float& _value, const Vector2& _vec);

    const Vector3 operator+(const float& _value, const Vector3& _vec);
    const Vector3 operator-(const float& _value, const Vector3& _vec);
    const Vector3 operator*(const float& _value, const Vector3& _vec);
    const Vector3 operator/(const float& _value, const Vector3& _vec);
    const Vector3 operator+(const Vector2& _vec2, const Vector3& _vec3);
    const Vector3 operator-(const Vector2& _vec2, const Vector3& _vec3);
} // Math
} // CreaLib