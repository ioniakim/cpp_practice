#include "string_util.hpp"

using namespace std::string_literals;

namespace io {

// template <typename Char,
//     typename ForwardIt,
//     typename String,
//     typename StringView>
// String
// join_string(StringView sep, ForwardIt first, ForwardIt last)
// {
//     if (first == last) return String();

//     auto ret = String(*first);
//     ++first;
//     while(first != last){
//         ret += sep;
//         ret += *first;
//         ++first;
//     }
//     return ret;
// }

}
