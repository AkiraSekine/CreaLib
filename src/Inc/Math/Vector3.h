#pragma once

namespace CreaLib
{
namespace Math
{
    class Vector2;

    /// <summary>
    /// �O�����x�N�g��
    /// </summary>
    class Vector3
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
        /// z�v�f
        /// </summary>
        float z;

        /// <summary>
        /// (0, 0, 0)
        /// </summary>
        static const Vector3 Zero;
        /// <summary>
        /// (1, 1, 1)
        /// </summary>
        static const Vector3 One;

        Vector3();
        /// <param name="_x">x�v�f</param>
        Vector3(const float& _x);
        /// <param name="_x">x�v�f</param>
        /// <param name="_y">y�v�f</param>
        Vector3(const float& _x, const float& _y);
        /// <param name="_x">x�v�f</param>
        /// <param name="_y">y�v�f</param>
        /// <param name="_z">z�v�f</param>
        Vector3(const float& _x, const float& _y, const float& _z);
        /// <param name="_vec2">�񎟌��x�N�g��</param>
        Vector3(const Vector2& _vec2);

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
        Vector3 Normalize();

        /// <summary>
        /// ���ς��擾
        /// </summary>
        /// <param name="_vec">�x�N�g��</param>
        /// <returns>���ϒl</returns>
        float Dot(const Vector3& _vec);
        /// <summary>
        /// ���ς��擾
        /// </summary>
        /// <param name="_x">�x�N�g����x�v�f</param>
        /// <param name="_y">�x�N�g����y�v�f</param>
        /// <param name="_z">�x�N�g����z�v�f</param>
        /// <returns>���ϒl</returns>
        float Dot(const float& _x, const float& _y, const float& _z);

        /// <summary>
        /// �O�ς��擾
        /// </summary>
        /// <param name="_vec">�x�N�g��</param>
        /// <returns>�O�ϒl</returns>
        Vector3 Cross(const Vector3& _vec);
        /// <summary>
        /// �O�ς��擾
        /// </summary>
        /// <param name="_x">�x�N�g����x�v�f</param>
        /// <param name="_y">�x�N�g����y�v�f</param>
        /// <param name="_z">�x�N�g����z�v�f</param>
        /// <returns>�O�ϒl</returns>
        Vector3 Cross(const float& _x, const float& _y, const float& _z);

        const Vector3 operator-() const;

        const Vector3 operator+(const Vector3& _vec) const;
        const Vector3 operator-(const Vector3& _vec) const;
        const Vector3 operator*(const Vector3& _vec) const;
        const Vector3 operator/(const Vector3& _vec) const;
        const Vector3 operator+(const Vector2& _vec) const;
        const Vector3 operator-(const Vector2& _vec) const;
        const Vector3 operator+(const float& _value) const;
        const Vector3 operator-(const float& _value) const;
        const Vector3 operator*(const float& _value) const;
        const Vector3 operator/(const float& _value) const;

        operator Vector2() const;
    };

    const Vector3 operator+(const float& _value, const Vector3& _vec);
    const Vector3 operator-(const float& _value, const Vector3& _vec);
    const Vector3 operator*(const float& _value, const Vector3& _vec);
    const Vector3 operator/(const float& _value, const Vector3& _vec);
    const Vector3 operator+(const Vector2& _vec2, const Vector3& _vec3);
    const Vector3 operator-(const Vector2& _vec2, const Vector3& _vec3);
} // Math
} // CreaLib