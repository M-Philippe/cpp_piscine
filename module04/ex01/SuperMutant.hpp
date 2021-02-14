#pragma once

#include "Enemy.hpp"

/*
**	Default constructor
**	Copy constructor
**	operator =
**	destructor
*/

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& org);
		SuperMutant&	operator=(const SuperMutant& org);
		virtual ~SuperMutant();
		void	takeDamage(int atkDmg);
};