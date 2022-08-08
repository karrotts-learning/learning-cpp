#include <iostream>
#include <cstdlib>

int main() {
    
    //cout is buffered meaning the program can crash before cerr is called
    std::cout << "Dont do this when testings";

    //cerr is unbuffered so it calls immediatly
    std::cerr << "Do this instead";
    
    return EXIT_SUCCESS;
}