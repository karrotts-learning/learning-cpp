#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello World!\n";

    /**
    * This will cause your program to wait for the user to press enter before continuing (you may have to press enter twice), which will give 
    * you time to examine your program’s output before your IDE closes the console window.
    */
    std::cin.clear(); // resets any error flags
    // ignores any characters in the input buffer until we find a new line
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); // wait for user to input something
}
