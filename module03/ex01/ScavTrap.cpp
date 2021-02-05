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

void	ScavTrap::setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h)
{
	_hitPts = a;
	_mxHitPts = b;
	_engyPts = c;
	_mxEngyPts = d;
	_lvl = e;
	_name = nm;
	_mlAttckDmg = f;
	_rgdAttckDmg = g;
	_armrDmgReduction = h;
}

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "<ScavTrap> " << _name << " attack " << target << " with a gun (ranged) for " << _rgdAttckDmg << " HP" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "<ScavTrap> " << _name << " attack " << target << " with a knife (melee) for " << _mlAttckDmg << " HP" << std::endl;
}

void	ScavTrap::beRepaired(u_int amount)
{
	if (amount + _hitPts > _mxHitPts)
	{
		_hitPts = _mxHitPts;
		std::cout << "<ScavTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP (Can't be sup to 100HP)" << std::endl;
	}
	else
	{
		_hitPts += amount;
		std::cout << "<ScavTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP" << std::endl;
	}
}

void	ScavTrap::takeDamage(u_int amount)
{
	if (amount <= _armrDmgReduction)
	{
		std::cout << "<ScavTrap> " << _name << "'s Armor is too strong for this weak attack" << std::endl;
		return ;
	}
	if (_hitPts < (amount - _armrDmgReduction))
	{
		_hitPts = 0;
		std::cout << "<ScavTrap> " << "HP can't be below 0, so " << _name << " have " << _hitPts << "HP now" << std::endl;
	}
	else
	{
		_hitPts -= (amount - _armrDmgReduction);
		std::cout << "<ScavTrap> " << _name << " suffer " << (amount - _armrDmgReduction) << " HP and have " << _hitPts << "HP now" << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(std::string const& target)
{
	std::string	challenges[] = {"Uno", "Monopoly", "Trivial Pursuit"};

	std::cout << "<ScavTrap>" << _name << " challenges " << target << " to a game of " << challenges[rand()%3] << "." << std::endl;
}
