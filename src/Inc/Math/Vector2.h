#pragma once

namespace CreaLib
{
namespace Math
{
    /// <summary>
    /// �񎟌��x�N�g��
    /// </summary>
    class Vector2
    {
    public:

        /// <summary>
        /// x�v�f
        /// </summary>
        float x;
        /// <summary>
        /// y�v�f
        /// </summary>
        float y;

        /// <summary>
        /// (0, 0)
        /// </summary>
        static const Vector2 Zero;
        /// <summary>
        /// (1, 1)
        /// </summary>
        static const Vector2 One;

        Vector2();
        /// <param name="_x">x�v�f</param>
        Vector2(const float& _x);
        /// <param name="_x">x�v�f</param>
        /// <param name="_y">y�v�f</param>
        Vector2(const float& _x, const float& _y);

        /// <summary>
        /// �x�N�g���̑傫�����擾
        /// </summary>
        /// <returns>�x�N�g���̑傫��</returns>
        float Magnitude();
        /// <summary>
        /// �x�N�g���̑傫����2����擾
        /// </summary>
        /// <returns>�x�N�g���̑傫����2��</returns>
        float SqrMagnitude();

        /// <summary>
        /// �P�ʃx�N�g�����擾
        /// </summary>
        /// <returns>�P�ʃx�N�g��</returns>
        Vector2 Normalize();

        /// <summary>
        /// ���ς��擾
        /// </summary>
        /// <param name="_vec">�x�N�g��</param>
        /// <returns>���ϒl</returns>
        float Dot(const Vector2& _vec);
        /// <summary>
        /// ���ς��擾
        /// </summary>
        /// <param name="_x">�x�N�g����x�v�f</param>
        /// <param name="_y">�x�N�g����y�v�f</param>
        /// <returns>���ϒl</returns>
        float Dot(const float& _x, const float& _y);

        /// <summary>
        /// �O�ς��擾
        /// </summary>
        /// <param name="_vec">�x�N�g��</param>
        /// <returns>�O�ϒl</returns>
        float Cross(const Vector2& _vec);
        /// <summary>
        /// �O�ς��擾
        /// </summary>
        /// <param name="_x">�x�N�g����x�v�f</param>
        /// <param name="_y">�x�N�g����y�v�f</param>
        /// <returns>�O�ϒl</returns>
        float Cross(const float& _x, const float& _y);

        const Vector2 operator-() const;

        const Vector2 operator+(const Vector2& _vec) const;
        const Vector2 operator-(const Vector2& _vec) const;
        const Vector2 operator*(const Vector2& _vec) const;
        const Vector2 operator/(const Vector2& _vec) const;
        const Vector2 operator+(const float& _value) const;
        const Vector2 operator-(const float& _value) const;
        const Vector2 operator*(const float& _value) const;
        const Vector2 operator/(const float& _value) const;

        Vector2& operator+=(const Vector2& _vec);
        Vector2& operator-=(const Vector2& _vec);
        Vector2& operator*=(const Vector2& _vec);
        Vector2& operator/=(const Vector2& _vec);
        Vector2& operator+=(const float& _value);
        Vector2& operator-=(const float& _value);
        Vector2& operator*=(const float& _value);
        Vector2& operator/=(const float& _value);
    };
} // Math
} // CreaLib