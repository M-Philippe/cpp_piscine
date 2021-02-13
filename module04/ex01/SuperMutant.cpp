#include "SuperMutant.hpp"


SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& org) {
	*this = org;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& org) {
	this->Enemy::operator=(org);
	return (*this);
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void			SuperMutant::takeDamage(int atkDmg) {
	Enemy::takeDamage(atkDmg - 3);
}