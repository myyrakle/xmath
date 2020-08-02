#ifndef XMATH_POWER
#define XMATH_POWER

#include <cmath>
#include <type_traits>

namespace xmath
{
  template <class Integer>
  Integer power_int(const Integer &x, const Integer &y)
  {
    Integer sum = x;
    for (Integer count = y; count > 1; count -= 1)
    {
      sum *= x;
    }

    return sum;
  }

  template <class Float>
  Float power_float(const Float &x, const Float &y)
  {
    return pow(x, y);
  }

  template <class Number>
  Number square(const Number *n)
  {
    return n * n;
  }
} // namespace xmath

#endif
