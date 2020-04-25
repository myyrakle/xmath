#include <cstdint>
#include <exception>

namespace xmath
{
    

    template <class IntegerType>
    std::uint64_t factorial(IntegerType n)
    {
      if(n<0)
        return -1;
  
      std::uint64_t sum = 1;
  
      while(n!=0)
      {
        sum *= n;
        n--;
      }
  
      return sum;
    }
}
