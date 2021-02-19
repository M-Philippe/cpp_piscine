#include "Array.hpp"
#include <iostream>

#define t_array Array<int>

int main() {
	t_array*	arr = new Array<int>(10);
	
	for (u_int i = 0; i < 18; i++) {
		try {
			std::cout << static_cast<int>((*arr)[i]) << std::endl;
		}
		catch (Array<int>::outOfLimits& e) {
			std::cout << "Out of Limits" << std::endl;
		}
	}
	delete arr;
	return (0);
}