#include "AMateria.hpp"

AMateria::AMateria() {_xp = 0;}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& org) {
	*this = org;
}

AMateria&	AMateria::operator=(const AMateria& org) {
	_xp = org._xp;
	return (*this);
}

std::string const&	AMateria::getType() const {
	return (_type);
}

void				AMateria::setType(const std::string& type) {
	_type = type;
}

unsigned int		AMateria::getXP() const {
	return (_xp);
}

void				AMateria::setXP(unsigned int n) {
	_xp = n;
}

void				AMateria::use(ICharacter& target) {
	(void)target;
	_xp += 10;
}