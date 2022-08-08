#include <iostream>
#include <cstdlib>
#include <plog/log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int main() {

	// plog logger init
	plog::init(plog::debug, "Logfile.txt");

	// log to logger
	PLOGD << "main() called";

	return EXIT_SUCCESS;
}