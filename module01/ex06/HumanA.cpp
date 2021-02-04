#include "HumanA.hpp"

HumanA::HumanA(std::string in_name, Weapon& wpn) : weapon(wpn)
{
	name = in_name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}