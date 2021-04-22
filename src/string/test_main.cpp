#include <string_view>
#include <string>
#include <iterator>


#include "string_util.hpp"
#include "catch2/catch_all.hpp"

using namespace std::string_literals;
using namespace std::string_view_literals;



TEST_CASE("join string", "[string]")
{
    auto strs = {"kim", "sung", "woo"};

    // auto deduction failed. Char type must be specified.
    auto joined_str = io::join_string<char>(",", std::begin(strs), std::end(strs));

    CHECK("kim,sung,woo"s == joined_str);

    // joined_str = io::join_string(","sv, {"kim", "sung", "woo"});
}
