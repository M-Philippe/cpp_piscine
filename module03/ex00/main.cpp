#include "FragTrap.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime>

int	main(void)
{
	srand(time(0));
	FragTrap	a("Georges");
	FragTrap	b;

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
	return (0);
}
