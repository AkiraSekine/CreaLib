#pragma once

namespace CreaLib
{
namespace Math
{
    /// <summary>
    /// 二次元ベクトル
    /// </summary>
    class Vector2
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
        /// (0, 0)
        /// </summary>
        static const Vector2 Zero;
        /// <summary>
        /// (1, 1)
        /// </summary>
        static const Vector2 One;

        Vector2();
        /// <param name="_x">x要素</param>
        Vector2(const float& _x);
        /// <param name="_x">x要素</param>
        /// <param name="_y">y要素</param>
        Vector2(const float& _x, const float& _y);

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
        Vector2 Normalize();

        /// <summary>
        /// 内積を取得
        /// </summary>
        /// <param name="_vec">ベクトル</param>
        /// <returns>内積値</returns>
        float Dot(const Vector2& _vec);
        /// <summary>
        /// 内積を取得
        /// </summary>
        /// <param name="_x">ベクトルのx要素</param>
        /// <param name="_y">ベクトルのy要素</param>
        /// <returns>内積値</returns>
        float Dot(const float& _x, const float& _y);

        /// <summary>
        /// 外積を取得
        /// </summary>
        /// <param name="_vec">ベクトル</param>
        /// <returns>外積値</returns>
        float Cross(const Vector2& _vec);
        /// <summary>
        /// 外積を取得
        /// </summary>
        /// <param name="_x">ベクトルのx要素</param>
        /// <param name="_y">ベクトルのy要素</param>
        /// <returns>外積値</returns>
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