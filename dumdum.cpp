#include <iostream>
#include "stdlib.h"

int main(int argc, char *argv[]) {
	if(argc != 3) {
		std::cerr << "Usage: dumdum arg1 arg2" << std::endl;
		exit(-1);
	}
	std::cout << "dumdum " << argv[1] << " " << argv[2] << std::endl;
	return 0;
}
