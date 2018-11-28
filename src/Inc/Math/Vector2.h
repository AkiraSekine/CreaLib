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