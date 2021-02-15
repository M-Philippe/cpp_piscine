#include "Ice.hpp"


Ice::Ice() {
	setType("ice");
}

Ice::Ice(const Ice& org) {
	*this = org;
}

Ice&	Ice::operator=(const Ice& org) {
	setXP(org.getXP());
	return (*this);
}

Ice::~Ice() {}

AMateria*	Ice::clone() const {
	AMateria*	ret = new Ice(*this);
	return (ret);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}