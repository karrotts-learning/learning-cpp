#include <iostream>
#include <cstdlib>
#include <string>

/**
Write a program that asks the user to enter their full name and their age. 
As output, tell the user the sum of their age and the number of letters in their name 
(use the std::string::length() member function to get the length of the string). 
For simplicity, count any spaces in the name as a letter.
*/

std::string getName();
int getAge();

int main() {
	std::string name{ getName() };
	int age{ getAge() };

	std::cout << "The sum of your name and your age is: " << name.length() + age;

	return EXIT_SUCCESS;
}

std::string getName() {
	std::string name{};
	std::cout << "Please enter your name: ";
	std::getline(std::cin >> std::ws, name);
	return name;
}

int getAge() {
	int age{};
	std::cout << "Please enter your age: ";
	std::cin >> age;
	return age;
}