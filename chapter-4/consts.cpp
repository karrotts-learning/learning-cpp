#include <iostream>
#include <cstdlib>

int main() {
    const int myConst { 5 }; // compile time const
    const int myRunConst { doSomething() }; // runtime const

    constexpr int { 3 }; // works since its a compile time const
    constexpr int { doSomething() } // error: constexpr does not work on runtime consts

    return EXIT_SUCCESS;
}