#include "./../include/exception.h"

namespace xmath
{
    xmath_exception::xmath_exception(const std::string& s): message(s)
    {}

    const char* xmath_exception::what()
    {
        std::exception::what();
        //
    }

    overflow_exception::overflow_exception(const std::string& s): xmath_exception(s)
    {}

    const char* overflow_exception::what()
    {
        xmath_exception::what();
    }

    underflow_exception::underflow_exception(const std::string& s): xmath_exception(s)
    {}

    const char* underflow_exception::what()
    {
        xmath_exception::what();
    }
}