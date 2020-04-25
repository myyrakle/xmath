#include <exception>

namespace xmath
{
    class overflow_exception: public std::exception
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


}