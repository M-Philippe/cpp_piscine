#pragma once

#include <iostream>

class ScavTrap
{
private:
	u_int		_hitPts;
	u_int		_mxHitPts;
	u_int		_engyPts;
	u_int		_mxEngyPts;
	u_int		_lvl;
	std::string	_name;
	u_int		_mlAttckDmg;
	u_int		_rgdAttckDmg;
	u_int		_armrDmgReduction;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& org);
	ScavTrap	&operator=(const ScavTrap& org);
	~ScavTrap();
	void	setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	takeDamage(u_int amount);
	void	beRepaired(u_int amount);
	void	challengeNewcomer(std::string const& target);
};
