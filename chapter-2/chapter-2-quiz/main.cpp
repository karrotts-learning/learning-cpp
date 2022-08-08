#include "io.h"
#include <iostream>
#include <cstdlib>

int main() {
	int a{ readAnswer() }, b{ readAnswer() };
	writeAnswer(a + b);

	return EXIT_SUCCESS;
}