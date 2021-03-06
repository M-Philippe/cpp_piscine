#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <exception>
#include "easyfind.hpp"

int main() {
	srand(time(NULL));
	int	n = 5;
	std::vector<int> vct(10);
	for (std::vector<int>::iterator it = vct.begin(); it != vct.end(); it++) {
		*it = rand() % 10;
		std::cout << *it << " ";
	}
	std::cout << "\n";
	if (easyfind<std::vector<int> >(vct, n)) {
		std::cout << n << " is in the vector" << std::endl;
	}
	else
		std::cout << n << " is not in the vector" << std::endl;
	return (0);
}