#include "input.h"
#include <iostream>
#include <cstdlib>

/*
 * The user is asked to enter 2 floating point numbers (use doubles). 
 * The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
 * The program computes the answer on the two numbers the user entered and prints the results. 
 * If the user enters an invalid symbol, the program should print nothing.
 */

int main() {
	double x{ getDoubleNumber() };
	double y{ getDoubleNumber() };
	char symbol{ getMathSymbol() };

	if (symbol == '+')
		std::cout << x << " + " << y << " is: " << x + y << '\n';
	if (symbol == '-')
		std::cout << x << " - " << y << " is: " << x - y << '\n';
	if (symbol == '*')
		std::cout << x << " * " << y << " is: " << x * y << '\n';
	if (symbol == '/')
		std::cout << x << " / " << y << " is: " << x / y << '\n';
	
	return EXIT_SUCCESS;
}