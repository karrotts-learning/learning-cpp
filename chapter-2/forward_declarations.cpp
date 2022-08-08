#include <iostream>
#include <cstdlib>

int add(int a, int b); // function prototype

int main() {

    // this would fail if we do not have a function prototype
    int num { add(5, 4) };

    return EXIT_SUCCESS;
}

int add(int a, int b) {
    return a + b;
}