#include <iostream>
#include <cstdlib>

int main() {
    //Comma	,	x, y	Evaluate x then y, returns value of y

    int a{5};
    int b{6};
    int c{(a, b)}; // evaluates a, and returns y

    std::cout << (++a, ++b) << '\n'; // increment a and b, evaluates to the right operand

    return EXIT_SUCCESS;
}