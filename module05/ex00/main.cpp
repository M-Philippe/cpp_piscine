#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bob("Bob", 1);
	std::cout << bob;
	try {
		Bureaucrat a("Jim", -1);
	}
	catch (std::exception& e) {
		std::cout << "Error creating a Bureaucrat with -1 grade" << std::endl;
	}
	try {
		Bureaucrat b("Jim", 151);
	}
	catch (std::exception& e) {
		std::cout << "Error creating a Bureaucrat with 151 grade" << std::endl;
	}
	try {
		Bureaucrat b("Jim", 0);
	}
	catch (std::exception& e) {
		std::cout << "Error creating a Bureaucrat with 0 grade" << std::endl;
	}
	Bureaucrat jim("Jim", 120);
	std::cout << jim;
	jim--;
	std::cout << jim;
	jim++;
	std::cout << jim;
	for (int i = 0; i < 200; i++) {
		jim--;
	}
	std::cout << jim;
	for (int i = 0; i <  200; i++) {
		jim++;
	}
	std::cout << jim;
}