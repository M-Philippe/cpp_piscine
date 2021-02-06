#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "<ClapTrap> Default constructor called" << std::endl;
	setStats("random", 10, 10, 10, 10, 10, 10, 10, 10);
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "<ClapTrap> Constructor with parametor called" << std::endl;
	setStats(name, 10, 10, 10, 10, 10, 10, 10, 10);
}

ClapTrap::ClapTrap(const ClapTrap& org)
{
	std::cout << "<FragTrap> Constructor by copy called" << std::endl;
	*this = org;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& org)
{
	std::cout << "<FragTrap> Overload assignation called" << std::endl;
	setStats(org._name, org._hitPts, org._mxHitPts, org._engyPts, org._mxEngyPts,
		org._lvl, org._mlAttckDmg, org._rgdAttckDmg, org._armrDmgReduction);
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "<ClapTrap> Default destructor called" << std::endl;
}

void	ClapTrap::setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h)
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

void	ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "<ClapTrap> " << _name << " attack " << target << " with a gun (ranged) for " << _rgdAttckDmg << " HP" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "<ClapTrap> " << _name << " attack " << target << " with a knife (melee) for " << _mlAttckDmg << " HP" << std::endl;
}

void	ClapTrap::beRepaired(u_int amount)
{
	if (amount + _hitPts > _mxHitPts)
	{
		_hitPts = _mxHitPts;
		std::cout << "<ClapTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP (Can't be superior to " << _mxHitPts << ")" << std::endl;
	}
	else
	{
		_hitPts += amount;
		std::cout << "<ClapTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP" << std::endl;
	}
}

void	ClapTrap::takeDamage(u_int amount)
{
	if (amount <= _armrDmgReduction)
	{
		std::cout << "<ClapTrap> " << _name << "'s Armor is too strong for this weak attack" << std::endl;
		return ;
	}
	if (_hitPts < (amount - _armrDmgReduction))
	{
		_hitPts = 0;
		std::cout << "<ClapTrap> " << "HP can't be below 0, so " << _name << " have " << _hitPts << "HP now" << std::endl;
	}
	else
	{
		_hitPts -= (amount - _armrDmgReduction);
		std::cout << "<ClapTrap> " << _name << " suffer " << (amount - _armrDmgReduction) << " HP and have " << _hitPts << "HP now" << std::endl;
	}
}

std::string	ClapTrap::getName() {return (_name);}