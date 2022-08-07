#include <iostream>

int main() {
	// initialize the number variable using union init
	int num{ 0 };

	// output the message to the console and get the number to double
	std::cout << "Enter an integer: ";
	std::cin >> num;
	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';
}