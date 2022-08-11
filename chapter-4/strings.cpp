#include <iostream>

int main() {
    std::string name {};
    std::cin >> name; // only reads to the first white space

    //The std::ws input manipulator tells std::cin to ignore any leading whitespace before extraction. 
    std::getline(std::cin >> std::ws, name);

}
