#include <iostream>

#include <catch2/catch_all.hpp>


using namespace std;


TEST_CASE("iostream performance", "[iostream]")
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "Hello World!\n";
}

