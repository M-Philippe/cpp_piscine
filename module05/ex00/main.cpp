#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bob("Bob", 1);
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
	Bureaucrat jim("Jim", 150);
}