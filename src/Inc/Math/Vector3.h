#pragma once

namespace CreaLib
{
namespace Math
{
    class Vector2;

    /// <summary>
    /// 三次元ベクトル
    /// </summary>
    class Vector3
    {
    public:

        /// <summary>
        /// x要素
        /// </summary>
        float x;
        /// <summary>
        /// y要素
        /// </summary>
        float y;
        /// <summary>
        /// z要素
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
        /// <param name="_x">x要素</param>
        Vector3(const float& _x);
        /// <param name="_x">x要素</param>
        /// <param name="_y">y要素</param>
        Vector3(const float& _x, const float& _y);
        /// <param name="_x">x要素</param>
        /// <param name="_y">y要素</param>
        /// <param name="_z">z要素</param>
        Vector3(const float& _x, const float& _y, const float& _z);
        /// <param name="_vec2">二次元ベクトル</param>
        Vector3(const Vector2& _vec2);

        /// <summary>
        /// ベクトルの大きさを取得
        /// </summary>
        /// <returns>ベクトルの大きさ</returns>
        float Magnitude();
        /// <summary>
        /// ベクトルの大きさの2乗を取得
        /// </summary>
        /// <returns>ベクトルの大きさの2乗</returns>
        float SqrMagnitude();

        /// <summary>
        /// 単位ベクトルを取得
        /// </summary>
        /// <returns>単位ベクトル</returns>
        Vector3 Normalize();

        /// <summary>
        /// 内積を取得
        /// </summary>
        /// <param name="_vec">ベクトル</param>
        /// <returns>内積値</returns>
        float Dot(const Vector3& _vec);
        /// <summary>
        /// 内積を取得
        /// </summary>
        /// <param name="_x">ベクトルのx要素</param>
        /// <param name="_y">ベクトルのy要素</param>
        /// <param name="_z">ベクトルのz要素</param>
        /// <returns>内積値</returns>
        float Dot(const float& _x, const float& _y, const float& _z);

        /// <summary>
        /// 外積を取得
        /// </summary>
        /// <param name="_vec">ベクトル</param>
        /// <returns>外積値</returns>
        Vector3 Cross(const Vector3& _vec);
        /// <summary>
        /// 外積を取得
        /// </summary>
        /// <param name="_x">ベクトルのx要素</param>
        /// <param name="_y">ベクトルのy要素</param>
        /// <param name="_z">ベクトルのz要素</param>
        /// <returns>外積値</returns>
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