#include "HumanB.hpp"

HumanB::HumanB(std::string in_name)
{
	name = in_name;
}

HumanB::HumanB()
{}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& in_weapon)
{
	weapon = &in_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}