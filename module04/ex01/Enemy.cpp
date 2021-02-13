#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const& type) {
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy& org) {
	*this = org;
}

Enemy&	Enemy::operator=(const Enemy& org) {
	_hp = org._hp;
	_type = org._type;
	return (*this);
}

Enemy::~Enemy() {}

int			Enemy::getHp() const {
	return (_hp);
}

std::string	Enemy::getType() const {
	return (_type);
}

void		Enemy::takeDamage(int atkDmg) {
	std::cout << "takeDamage in enemy" << std::endl;
	if (atkDmg > getHp())
		return ;
	_hp -= atkDmg;
}

void		Enemy::testClass() {
	std::cout << getType() << " " << getHp() << std::endl;
}