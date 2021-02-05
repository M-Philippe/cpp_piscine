#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "<FragTrap> Default constructor called" << std::endl;
	setStats("Random", 100, 100, 100, 100, 1, 30, 20, 5);
}

FragTrap::FragTrap(std::string nm)
{
	std::cout << "<FragTrap> Constructor with parametor called" << std::endl;
	setStats(nm, 100, 100, 100, 100, 1, 30, 20, 5);
}

FragTrap::FragTrap(const FragTrap& org)
{
	std::cout << "<FragTrap> Constructor by copy called" << std::endl;
	*this = org;
}

FragTrap&	FragTrap::operator=(const FragTrap &org)
{
	std::cout << "<FragTrap> Overload assignation called" << std::endl;
	setStats(org._name, org._hitPts, org._mxHitPts, org._engyPts, org._mxEngyPts,
		org._lvl, org._mlAttckDmg, org._rgdAttckDmg, org._armrDmgReduction);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "<FragTrap> Default destructor called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	std::string		attackName[] = {"first", "second", "third", "four", "five"};

	if (_engyPts < 25)
	{
		std::cout << "<FragTrap> " << _name << " Doesn't have enough Energy to launch the attack (has " << _engyPts << "EP)" << std::endl;
		return ;
	}
	_engyPts -= 25;
	std::cout << "<FragTrap> " << _name << " launch " << attackName[rand()%5] << " on "
		<< target << ". Has now " << _engyPts << "EP" << std::endl;
}
