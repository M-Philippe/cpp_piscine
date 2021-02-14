#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const& name) {
	_name = name;
	_ap = 40;
	_wpn = NULL;
}

Character::Character(const Character& org) {
	*this = org;
}

Character&	Character::operator=(Character org) {
	_name = org._name;
	_ap = org._ap;
	_wpn = org._wpn;
	return (*this);
}

Character::~Character() {}

void			Character::recoverAP() {
	if (_ap + 10 <= 40)
		_ap += 10;
	else
		_ap = 40;
}

void			Character::equip(AWeapon* wpn) {
	//std::cout << "wpn(c) |" << &(_wpn) << "| ; wpn(o) |" << &wpn << "|" << std::endl;
	_wpn = wpn;
	//std::cout << "wpn(c) |" << &_wpn << "| ; wpn(o) |" << &wpn << "|" << std::endl;
}

void			Character::attack(Enemy* enm) {
	std::cout << getName() << " attack " << enm->getType() << " with a " << _wpn->getName() << std::endl;
	_wpn->attack();
	if (_ap < _wpn->getAPCost())
	{
		std::cout << "Not enough ap" << std::endl;
	}
	_ap -= _wpn->getAPCost();
	if (enm->getHp() <= _wpn->getDamage())
		enm->~Enemy();
	else
		enm->takeDamage(_wpn->getDamage());
}

std::string		Character::getName() const {
	return (_name);
}

int				Character::getAP() const {
	return (_ap);
}

std::string		Character::getWpnName() const {
	return (_wpn->getName());
}

bool			Character::isArmed() const {
	if (_wpn)
		return (true);
	return (false);
}

std::ostream&	operator<<(std::ostream& os, const Character& fx) {
	if (fx.isArmed())
		os << fx.getName() << " has " << fx.getAP() << " AP and carries a " << fx.getWpnName() << std::endl;
	else
		os << fx.getName() << " has " << fx.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}