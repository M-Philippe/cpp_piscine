#pragma once

#include <iostream>

class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& org);
	FragTrap	&operator=(const FragTrap& org);
	~FragTrap();
	void	setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	takeDamage(u_int amount);
	void	beRepaired(u_int amount);
	void	vaulthunter_dot_exe(std::string const& target);
};
