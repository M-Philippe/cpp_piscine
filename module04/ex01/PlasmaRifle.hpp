#pragma once

#include "AWeapon.hpp"

/*
**	Default constructor
**	Copy constructor
**	destructor
**	operator =
*/

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle&	org);
	PlasmaRifle&	operator=(const PlasmaRifle& org);
	void	testClass();	// For Testing
	~PlasmaRifle();
	void	attack() const;
};