#include <exception>
#include <string>

namespace xmath
{
    class xmath_exception: public std::exception
    {
        virtual const char* what() = 0;
    };

    class overflow_exception: public xmath_exception
    {
    public:
        using Self = overflow_exception;
        overflow_exception() = delete;
        overflow_exception(const Self&) = default;
        overflow_exception(Self&&) = default;
        Self& operator=(const Self&) = default;
        Self& operator=(Self&&) = default;
    public:
        overflow_exception(const std::string&);
        virtual ~overflow_exception() = default;
        virtual const char* what();
    };

    class underflow_exception: public xmath_exception
    {
    public:
        using Self = underflow_exception;
        underflow_exception() = delete;
        underflow_exception(const Self&) = default;
        underflow_exception(Self&&) = default;
        Self& operator=(const Self&) = default;
        Self& operator=(Self&&) = default;
    public:
        underflow_exception(const std::string&);
        virtual ~underflow_exception() = default;
        virtual const char* what();
    };
}