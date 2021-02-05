#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "<FragTrap> Default constructor called" << std::endl;
	setStats("Ramdom", 100, 100, 100, 100, 1, 30, 20, 5);
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

void	FragTrap::setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h)
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

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "<FragTrap> " << _name << " attack " << target << " with a gun (ranged) for " << _rgdAttckDmg << " HP" << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "<FragTrap> " << _name << " attack " << target << " with a knife (melee) for " << _mlAttckDmg << " HP" << std::endl;
}

void	FragTrap::beRepaired(u_int amount)
{
	if (amount + _hitPts > _mxHitPts)
	{
		_hitPts = _mxHitPts;
		std::cout << "<FragTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP (Can't be sup to 100HP)" << std::endl;
	}
	else
	{
		_hitPts += amount;
		std::cout << "<FragTrap> " << _name << " Has gained " << amount << "HP. Now he have " << _hitPts << "HP" << std::endl;
	}
}

void	FragTrap::takeDamage(u_int amount)
{
	if (amount <= _armrDmgReduction)
	{
		std::cout << "<FragTrap> " << _name << "'s Armor is too strong for this weak attack" << std::endl;
		return ;
	}
	if (_hitPts < (amount - _armrDmgReduction))
	{
		_hitPts = 0;
		std::cout << "<FragTrap> " << "HP can't be below 0, so " << _name << " have " << _hitPts << "HP now" << std::endl;
	}
	else
	{
		_hitPts -= (amount - _armrDmgReduction);
		std::cout << "<FragTrap> " << _name << " suffer " << (amount - _armrDmgReduction) << " HP and have " << _hitPts << "HP now" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	std::string		attackName[5] = {"first", "second", "third", "four", "five"};

	if (_engyPts < 25)
	{
		std::cout << "<FragTrap> " << _name << " Doesn't have enough Energy to launch the attack (has " << _engyPts << "EP)" << std::endl;
		return ;
	}
	_engyPts -= 25;
	std::cout << "<FragTrap> " << _name << " launch " << attackName[rand()%5] << " on "
		<< target << ". Has now " << _engyPts << "EP" << std::endl;
}
