#include "PlasmaRifle.hpp"

void	PlasmaRifle::testClass(){
	std::cout << getName() << " " << getAPCost() << " " << getDamage() << std::endl;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& org){
	*this = org;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& org){
	this->AWeapon::operator=(org);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu*" << std::endl;
}