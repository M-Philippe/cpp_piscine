#include "Cure.hpp"


Cure::Cure() {
	setType("cure");
}

Cure::Cure(const Cure& org) {
	*this = org;
}

Cure&	Cure::operator=(const Cure& org) {
	setXP(org.getXP());
	return (*this);
}

Cure::~Cure() {}

AMateria*	Cure::clone() const {
	AMateria*	ret = new Cure(*this);
	return (ret);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}