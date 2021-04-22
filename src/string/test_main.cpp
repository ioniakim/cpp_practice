#include <string_view>
#include <string>

#include "string_util.hpp"
#include "catch2/catch_all.hpp"

using namespace std::string_literals;




TEST_CASE("join string", "[string]")
{
    auto joined_str = io::join_string(",", {"kim", "sung", "woo"});

    CHECK("kim,sung,woo"s == joined_str);
}
