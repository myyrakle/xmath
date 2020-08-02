#ifndef XMATH_ROOT
#define XMATH_ROOT

#include <cmath>

namespace xmath
{
    template <class Number>
    decltype(auto) square_root(const Number &n)
    {
        return sqrt(n);
    }
} // namespace xmath

#endif
