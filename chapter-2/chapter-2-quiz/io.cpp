#include "io.h"
#include <iostream>

int readAnswer() {
	int num{ 0 };
	std::cout << "Please enter a number: ";
	std::cin >> num;
	return num;
}

void writeAnswer(int num) {
	std::cout << "Answer: " << num;
}