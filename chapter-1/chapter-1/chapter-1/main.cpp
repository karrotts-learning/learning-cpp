#include <iostream>

int main() {
	// multi variable
	int x, y;
	// int x, int y; -> wrong
	// int x; int yl -> works but not recommended

	// not used in modern c++
	int c = 5; //copy initializer (copys the value to the right of the =)
	int b(5); //direct initializer (passes the value to the constructor)

	// Modern C++ Brace Initialization
	int a{ 2 }; // also called List/Uniform
	int n{ 4 }, m{ 7 };

	int num{ 0 };
	std::cout << "Please enter a number: ";
	std::cin >> num;
	std::cout << "You entered: " << num << '\n';

	std::cout << "Please enter two numbers sep by a space: ";
	std::cin >> n >> m;
	std::cout << "You entered: " << n << ", " << m;

	return 0;
}