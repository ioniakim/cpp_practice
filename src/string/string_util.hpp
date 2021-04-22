#ifndef STRING_UTIL_HPP
#define STRING_UTIL_HPP

#include <string>
#include <string_view>
#include <initializer_list>

namespace io {

    template <typename Char,
              typename ForwardIt,
              typename String = std::basic_string<Char>,
              typename StringView = std::basic_string_view<Char>>
    String
    join_string(StringView sep, ForwardIt first, ForwardIt last)
    {
        if (first == last)
            return String();

        auto ret = String(*first);
        ++first;
        while (first != last)
        {
            ret += sep;
            ret += *first;
            ++first;
        }
        return ret;
    }
}

#endif  // STRING_UTIL_HPP
