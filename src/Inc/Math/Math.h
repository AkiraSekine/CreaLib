#pragma once

namespace CreaLib
{
namespace Math
{
    /// <summary>
    /// �l���͈͓��ɓ����Ă��邩
    /// </summary>
    /// <param name="_value">�`�F�b�N����l</param>
    /// <param name="_min">�ŏ��l</param>
    /// <param name="_max">�ő�l</param>
    template<typename T>
    extern inline bool Within(T _value, T _min, T _max);

    /// <summary>
    /// �l��͈͓��Ɏ��߂�
    /// </summary>
    /// <param name="_value">�`�F�b�N����l</param>
    /// <param name="_min">�ŏ��l</param>
    /// <param name="_max">�ő�l</param>
    /// <returns>�͈͓��̒l</returns>
    template<typename T>
    extern inline T WithinRange(T _value, T _min, T _max);

    /// <summary>
    /// �l�����[�v������
    /// </summary>
    /// <param name="_value">�`�F�b�N����l</param>
    /// <param name="_min">�ŏ��l</param>
    /// <param name="_max">�ő�l</param>
    /// <returns>���[�v�����l</returns>
    template<typename T>
    extern inline T Circulate(T _value, T _min, T _max);
} // Math
} // CreaLib

#include "Math.inl"