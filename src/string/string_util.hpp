#ifndef STRING_UTIL_HPP
#define STRING_UTIL_HPP

#include <string>
#include <string_view>
#include <initializer_list>

namespace io {

std::string
join_string(std::string_view separator, std::initializer_list<std::string_view> strs);

}

#endif  // STRING_UTIL_HPP
