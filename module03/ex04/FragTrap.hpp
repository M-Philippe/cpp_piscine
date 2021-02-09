#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& org);
	FragTrap	&operator=(const FragTrap& org);
	~FragTrap();
	void	vaulthunter_dot_exe(std::string const& target);
};
