#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &org);
	NinjaTrap&	operator=(const NinjaTrap& org);
	~NinjaTrap();
	void	ninjaShoeBox(ClapTrap& target);
	void	ninjaShoeBox(FragTrap& target);
	void	ninjaShoeBox(ScavTrap& target);
	void	ninjaShoeBox(NinjaTrap& target);
};
