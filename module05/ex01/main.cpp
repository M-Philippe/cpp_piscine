#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Form	*f1 = NULL;
	try {
		f1 = new Form("f1", 0, 5);
		std::cout << f1;
	}
	catch (std::exception& e) {
		std::cout << "Can't create Form with a sign grad below 1" << std::endl;
	}
	try { f1 = new Form("f1", 151, 5); }
	catch (std::exception& e) {
		std::cout << "Can't create Form with a sign grad above 150" << std::endl;
	}
	try { f1 = new Form("f1", 5, 0); }
	catch (std::exception& e) {
		std::cout << "Can't create a form with execution grade below 150" << std::endl;
	}
	try { f1 = new Form("f1", 5, 155); }
	catch (std::exception& e) {
		std::cout << "Can't create a form with execution grade above 150" << std::endl;
	}
	try {
		f1 = new Form("f1", 50, 5);
		std::cout << *f1;
	}
	catch (std::exception& e) {
		std::cout << "Error" << std::endl;
	}
	/*
	**			Test
	**				-> beSigned()
	*/
	Bureaucrat*	bob = new Bureaucrat("bob", 150);
	std::cout << *bob;
	try { f1->beSigned(*bob); }
	catch (std::exception& e) {}
	for (int i = 0; i < 200; i++) { bob->promote(); }
	std::cout << *bob;
	try { f1->beSigned(*bob); }
	catch (std::exception& e) {}
	std::cout << *f1;
	delete f1;
	delete bob;
	return (0);
}