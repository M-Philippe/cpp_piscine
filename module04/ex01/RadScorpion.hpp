#pragma once

#include "Enemy.hpp"

/*
**	Default constructor
**	Copy constructor
**	Operator =
**	Destructor
*/

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& org);
		RadScorpion&	operator=(const RadScorpion& org);
		virtual ~RadScorpion();
};