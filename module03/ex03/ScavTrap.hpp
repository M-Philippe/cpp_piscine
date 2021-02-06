#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& org);
	ScavTrap	&operator=(const ScavTrap& org);
	~ScavTrap();
	void	challengeNewcomer(std::string const& target);
};
