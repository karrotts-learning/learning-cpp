#include <iostream>
#include <cstdlib>
#include <cstdint> //fixed width ints

int main() {

    // floating point data types
    float afloat;
    double adouble;
    long double alongdouble;

    // intergal boolean
    bool abool;

    // intergal char
    char c;
    wchar_t widechar; // wide char, stores 2-byte character
    char8_t a8char;   // 8-bit char C++20 - Supports UTF-8
    char16_t a16char; // 16-bit char C++11 - Supports UTF-16
    char32_t a32char; // 32-bit char C++11 - Supports UTF-32

    // intergal int
    short ashort;
    int aint;
    long along
    long long everyone_get_along; //(C++11)

    //null pointer
    std::nullptr_t pt;

    // fixed width ints
    std::int8_t int8type;   // 8 bit int -- unsigned vari: uint8_t
    std::int16_t int16type; // 16 bit int -- unsigned vari: uint16_t
    std::int32_t int32type; // 32 bit int -- unsigned vari: uint32_t
    std::int64_t int64type; // 64 bit int -- unsigned vari: uint64_t

    // least and fast ints
    // least uses the least amount of memory per variable
    // fast use what is fastest for the system
    std::int_fast8_t fast8;
    std::int_least8_t least8;

    std::size_t size; // unsigned long long used for storing sizes of objects

    std::cout << std::boolalpha; // print bools as true or false
    std::cout << true << '\n'; // prints true instead of 1
    std::cout << false << '\n'; // prints false instead of 0

    return EXIT_SUCCESS;
}