#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const &name, int apCost, int damage){
	_name = name;
	_apCost = apCost;
	_damage = damage;
}

AWeapon::AWeapon(const AWeapon& org){
	*this = org;
}

AWeapon&	AWeapon::operator=(const AWeapon& org){
	_name = org._name;
	_apCost = org._apCost;
	_damage = org._damage;
	return (*this);
}

std::string	AWeapon::getName() const {
	return (_name);
}

int			AWeapon::getAPCost() const {
	return (_apCost);
}

int			AWeapon::getDamage() const {
	return (_damage);
}

void		AWeapon::incDamage() {
	_damage++;
}

AWeapon::~AWeapon(){}
