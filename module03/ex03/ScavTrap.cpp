#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "<ScavTrap> Default constructor called" << std::endl;
	setStats("Random", 100, 100, 50, 50, 1, 20, 15, 3);
}

ScavTrap::ScavTrap(std::string nm)
{
	std::cout << "<ScavTrap> Constructor with parametor called" << std::endl;
	setStats(nm, 100, 100, 50, 50, 1, 20, 15, 3);
}

ScavTrap::ScavTrap(const ScavTrap& org)
{
	std::cout << "<ScavTrap> Constructor by copy called" << std::endl;
	*this = org;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &org)
{
	std::cout << "<ScavTrap> Overload assignation called" << std::endl;
	setStats(org._name, org._hitPts, org._mxHitPts, org._engyPts, org._mxEngyPts,
		org._lvl, org._mlAttckDmg, org._rgdAttckDmg, org._armrDmgReduction);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "<ScavTrap> Default destructor called" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const& target)
{
	std::string	challenges[] = {"Uno", "Monopoly", "Trivial Pursuit"};

	std::cout << "<ScavTrap>" << _name << " challenges " << target << " to a game of " << challenges[rand()%3] << "." << std::endl;
}
