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

        const Vector2 operator+(const Vector2& _vec) const;
        const Vector2 operator-(const Vector2& _vec) const;
        const Vector2 operator*(const Vector2& _vec) const;
        const Vector2 operator/(const Vector2& _vec) const;
        const Vector2 operator+(const float& _value) const;
        const Vector2 operator-(const float& _value) const;
        const Vector2 operator*(const float& _value) const;
        const Vector2 operator/(const float& _value) const;

    private:

    };
} // Math
} // CreaLib