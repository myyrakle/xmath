#ifndef XMATH_INTEGER_BASIC
#define XMATH_INTEGER_BASIC

namespace xmath
{
    template <class Integer>
    bool is_odd_number(const Integer& n)
    {
        return n%2==1;
    }
    
    template <class Integer>
    bool is_even_number(const Integer& n)
    {
        return n%2==0;
    }
}

#endif
