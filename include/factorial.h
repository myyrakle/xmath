namespace xmath
{
    template <class IntegerType>
    std::int64_t factorial(IntegerType n)
    {
      if(n<0)
        return -1;
  
      std::int64_t sum = 1;
  
      while(n!=0)
      {
        sum *= n;
        n--;
      }
  
      return sum;
    }
}
