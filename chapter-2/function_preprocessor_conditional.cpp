#include <iostream>

// define the functional macro
#define PRINT_JOE

#define MY_NAME "Wes";

int main() {
    // we do this one since it has been defined
    #ifdef PRINT_JOE
        std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
    #endif

    // this one would not be called since we did nto define PRINT_BOB
    #ifdef PRINT_BOB
        std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
    #endif

    #if 0 // Don't compile anything starting here
        std::cout << "Bob\n";
        std::cout << "Steve\n";
    #endif // until this point

    return 0;
}