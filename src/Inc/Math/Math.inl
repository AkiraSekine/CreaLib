#pragma once

#include "Math.h"

namespace CreaLib
{
namespace Math
{
    template<typename T>
    bool Within(T _value, T _min, T _max)
    {
        return (_min >= _value && _value <= _max);
    }

    template<typename T>
    T WithinRange(T _value, T _min, T _max)
    {
        if (_value > _max)
        {
            return _max;
        }

        if (_value < _min)
        {
            return _min;
        }

        return _value;
    }

    template<typename T>
    T Circulate(T _value, T _min, T _max)
    {
        while (_value > _max)
        {
            _value -= _max - _min;
        }

        while (_value < _min)
        {
            _value += _max - _min;
        }

        return _value;
    }
} // Math
} // CreaLib