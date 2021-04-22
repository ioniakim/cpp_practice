#include <iostream>

#include <catch2/catch_all.hpp>


using namespace std;

/**
 * @brief iostream peferormance settings
 * iostream is relatively slower than C I/O functions (scanf, printf, gets, puts)
 * The settings introduced here improve iostream performance.
 * But gets, getchar, puts, putchar are fastest
 */
TEST_CASE("iostream performance", "[iostream]")
{
    // C++ streams are allowed to have their own independent buffers
    // by avoiding synchronization with C streams stdin, stdout.
    // Desynchronization makes cin/cout not thread-safe. And C I/O functions
    // must not be used.
    ios::sync_with_stdio(false);

    // cin and cout are tied by default, which means that output is flushed
    // by every cin operations.
    // unties cin from cout which means output is flushed / displayed on
    // the console only on demand or when the buffer is full
    // tie is usefull when the program works interactive to a user
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "Hello World!\n";
}

