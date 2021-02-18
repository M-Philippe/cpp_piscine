#include <iostream>
#include <exception>
#include <stdio.h>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void	identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Type A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "Type B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "Type C" << std::endl;
	}
}


void	identify_from_reference(Base& p) {	
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
	}
	catch (std::exception& e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type B" << std::endl;
	}
	catch (std::exception& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type C" << std::endl;
	}
	catch (std::exception& e) {}
}

int main() {
	Base*	ptrA = new A;
	Base*	ptrB = new B;
	Base*	ptrC = new C;
	Base	base;
	identify_from_pointer(ptrA);
	identify_from_pointer(ptrB);
	identify_from_pointer(ptrC);
	identify_from_pointer(NULL);
	identify_from_pointer(&base);
	delete ptrA;
	delete ptrB;
	delete ptrC;

	std::cout << "\n\n" << std::endl;
	A refA;
	B refB;
	C refC;
	identify_from_reference(refA);
	identify_from_reference(refB);
	identify_from_reference(refC);
	identify_from_reference(base);
	return (0);
}