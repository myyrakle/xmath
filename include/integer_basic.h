#pragma once

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
