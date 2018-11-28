#pragma once

namespace CreaLib
{
namespace Math
{
    /// <summary>
    /// 値が範囲内に入っているか
    /// </summary>
    /// <param name="_value">チェックする値</param>
    /// <param name="_min">最小値</param>
    /// <param name="_max">最大値</param>
    template<typename T>
    extern inline bool Within(T _value, T _min, T _max);

    /// <summary>
    /// 値を範囲内に収める
    /// </summary>
    /// <param name="_value">チェックする値</param>
    /// <param name="_min">最小値</param>
    /// <param name="_max">最大値</param>
    /// <returns>範囲内の値</returns>
    template<typename T>
    extern inline T WithinRange(T _value, T _min, T _max);

    /// <summary>
    /// 値をループさせる
    /// </summary>
    /// <param name="_value">チェックする値</param>
    /// <param name="_min">最小値</param>
    /// <param name="_max">最大値</param>
    /// <returns>ループした値</returns>
    template<typename T>
    extern inline T Circulate(T _value, T _min, T _max);
} // Math
} // CreaLib

#include "Math.inl"