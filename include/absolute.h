#ifndef XMATH_ABSOLUTE
#define XMATH_ABSOLUTE

namespace xmath
{
    template <class Number>
    Number absolute(const Number &n)
    {
        return n < 0 ? n * -1 : n;
    }
} // namespace xmath

#endif
