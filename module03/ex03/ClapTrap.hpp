#pragma once
#include <iostream>
#include <sys/types.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& org);
	ClapTrap& operator=(const ClapTrap& org);
	~ClapTrap();
	void	setStats(std::string nm, int a, int b, int c, int d, int e, int f, int g, int h);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	takeDamage(u_int amount);
	void	beRepaired(u_int amount);
	std::string	getName();
};
