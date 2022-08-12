#include "input.h"
#include <iostream>

double getDoubleNumber() {
	double value{};
	std::cout << "Please enter a double: ";
	std::cin >> value;
	return value;
}

char getMathSymbol() {
	char symbol{};
	std::cout << "Enter one of the following: +, -, *, or / ";
	std::cin >> symbol;
	return symbol;
}