#ifndef XMATH_FACTORIAL
#define XMATH_FACTORIAL

#include <exception>

namespace xmath
{
    template <class Integer>
    Integer factorial(const Integer& n)
    {
      if(n<0)
      {  
        return -1;
      }
  
      Integer sum = 1;
  
      while(n!=0)
      {
        sum *= n;
        n--;
      }
  
      return sum;
    }
}

#endif
