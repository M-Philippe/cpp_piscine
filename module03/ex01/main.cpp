#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime>

int	main(void)
{
	srand(time(0));

	/*		FragTrap	*/
	FragTrap	a("Georges");
	FragTrap	b;
	std::cout << "<FragTrap> Test" << std::endl;
	b.rangedAttack("Georges");
	a.takeDamage(50);
	a.beRepaired(10);
	a.beRepaired(80);
	a.takeDamage(10);
	a.takeDamage(200);
	a.takeDamage(4);
	a.takeDamage(5);
	a.beRepaired(15);
	a.takeDamage(6);
	b.vaulthunter_dot_exe("Bob");
	b.vaulthunter_dot_exe("Bob");
	b.vaulthunter_dot_exe("Bob");
	b.vaulthunter_dot_exe("Bob");
	b.vaulthunter_dot_exe("Bob");
	b.vaulthunter_dot_exe("Bob");
	std::cout << "\n\n" << std::endl;

	/*		ScavTrap	*/
	ScavTrap	c("Albert");
	ScavTrap	d;
	std::cout << "<ScavTrap> Test" << std::endl;
	c.rangedAttack("Georges");
	c.takeDamage(50);
	c.beRepaired(10);
	c.beRepaired(80);
	c.takeDamage(10);
	c.takeDamage(200);
	c.takeDamage(4);
	c.takeDamage(5);
	c.beRepaired(15);
	c.takeDamage(6);
	d.challengeNewcomer("Bob");
	d.challengeNewcomer("Bob");
	d.challengeNewcomer("Bob");
	std::cout << "\n\n" << std::endl;
	return (0);
}
