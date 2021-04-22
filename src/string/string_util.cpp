#include "string_util.hpp"

using namespace std::string_literals;

namespace io {

std::string
join_string(std::string_view sep, std::initializer_list<std::string_view> strs)
{
    if (std::size(strs) == 0) return ""s;

    auto it = std::begin(strs);
    auto ret = std::string(*it);
    ++it;
    while(it != std::end(strs)){
        ret += std::string(sep);
        ret += std::string(*it);
        ++it;
    }
    return ret;
}


}
