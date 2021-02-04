#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	std::string		name;
	Weapon*			weapon;
public:
	HumanB(std::string in_name);
	HumanB();
	~HumanB();
	void	setWeapon(Weapon& in_weapon);
	void	attack();
};
