#pragma once

#include "AWeapon.hpp"

/*
**	Default constructor
**	Copy constructor
**	operator =
**	destructor
*/

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist& org);
	PowerFist&	operator=(const PowerFist& org);
	~PowerFist();
	void		attack() const;
};