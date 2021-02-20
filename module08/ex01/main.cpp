#include "span.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
	span a(20);

	srand(time(NULL));
	for (int i = 0; i < 15; i++) {
		try {
			a.addNumber(rand() % 100);
		}
		catch (span::fullArray& e) {
			std::cout << "can't" << std::endl;
		}
	}
	std::cout << "first" << std::endl;
	a.display();
	std::cout <<"\n\n" << std::endl;
	std::vector<int> b(20);
	for (int i = 0; i < 20; i++) {
		b[i] = i + 10;
		//std::cout << b[i] << std::endl;
	}

	//std::vector<int>::iterator it = b.begin();
	//it += 4;
	//std::cout <<  - b.size() << std::endl;
	/*try {
	a.addNumberRange(b.begin(), b.end());
	}
	catch (span::fullArray& e) {
		std::cout << "full array" << std::endl;
	}*/
	//std::cout << "\n\nHERE\n\n";

 	//int myarray [] = { 501,542,500 };
	
	/*try {
		a.addNumberRange(myarray, myarray+3);
	}
	catch (span::fullArray& e) {
		std::cout << "full array" << std::endl;
	}*/
	std::cout << "\n\nFinal\n";
	std::cout << a.longestSpan() << "\n\n" << std::endl;
	a.display();
	return (0);
}