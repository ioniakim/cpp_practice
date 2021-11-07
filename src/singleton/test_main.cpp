#include "singleton_call_once.hpp"

#include <stdexcept>
#include <iostream>

#include "catch2/catch_all.hpp"



TEST_CASE("call_once", "singleton")
{
    try {
        auto& singleton = SingletonCallOnce::get_instance();

        singleton.add(100);

        CHECK(100 == singleton.get_value());

        singleton.add(100);

        CHECK(200 == singleton.get_value());
    } catch(std::exception const& e){
        std::cout << e.what() << std::endl;
    }
}
