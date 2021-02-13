#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist& org) {
	*this = org;
}

PowerFist&	PowerFist::operator=(const PowerFist& org){
	this->AWeapon::operator=(org);
	return (*this);
}

PowerFist::~PowerFist() {}

void		PowerFist::attack() const {
	std::cout << "* pschhh... SBAM!*" << std::endl;
}