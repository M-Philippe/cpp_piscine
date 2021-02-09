#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap& org);
	SuperTrap &operator=(const SuperTrap &org);
	~SuperTrap();
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
};
