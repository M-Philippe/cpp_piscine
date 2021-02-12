#include "SuperTrap.hpp"

/*
**			CODE CONSTRUCTOR COPY !!!!!!
*/

SuperTrap::SuperTrap()
{
	std::cout << "<SuperTrap> default constructor called" << std::endl;
	setStats("Random", 100, 100, 120, 120, 1, 60, 20, 5);
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "<SuperTrap> constructor with parametor called" << std::endl;
	//setStats(name, FragTrap::_hitPts, FragTrap::_mxHitPts, NinjaTrap::_engyPts, NinjaTrap::_mxEngyPts, 1,
	//	NinjaTrap::_mlAttckDmg, FragTrap::_rgdAttckDmg, FragTrap::_armrDmgReduction);
	setStats(name, 100, 100, 120, 120, 1, 60, 20, 5);
	//std::cout << "Hit points : " << _hitPts << std::endl;
	//std::cout << "Energy points : " << _engyPts << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "<SuperTrap> default destructor called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}