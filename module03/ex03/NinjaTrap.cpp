#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "<NinjaTrap> Default constructor called" << std::endl;
	setStats("Random", 60, 60, 120, 120, 1, 60, 5, 0);
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "<NinjaTrap> Constructor with parametor called" << std::endl;
	setStats(name, 60, 60, 120, 120, 1, 60, 5, 0);
}

NinjaTrap::NinjaTrap(const NinjaTrap &org)
{
	*this = org;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& org)
{
	std::cout << "<NinjaTrap> Overload assignation called" << std::endl;
	setStats(org._name, org._hitPts, org._mxHitPts, org._engyPts, org._mxEngyPts,
		org._lvl, org._mlAttckDmg, org._rgdAttckDmg, org._armrDmgReduction);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
}

void	NinjaTrap::ninjaShoeBox(ClapTrap& target)
{
	std::cout << "<NinjaTrap> " << _name << " melee attack <ClapTrap> " << target.getName() << std::endl;
	target.takeDamage(_mlAttckDmg);
}

void	NinjaTrap::ninjaShoeBox(FragTrap& target)
{
	std::cout << "<NinjaTrap> " << _name << " ranged attack <FragTrap> " << target.getName() << std::endl;
	target.takeDamage(_rgdAttckDmg);
}

void	NinjaTrap::ninjaShoeBox(ScavTrap& target)
{
	std::cout << "<NinjaTrap> " << _name << " melee attack <ScavTrap> " << target.getName() << std::endl;
	target.takeDamage(_mlAttckDmg);
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap& target)
{
	std::cout << "<NinjaTrap> " << _name << " ranged attack <NinjaTrap> " << target.getName() << std::endl;
	target.takeDamage(_rgdAttckDmg);
}
