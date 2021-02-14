#pragma once

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

/*
**	Default constructor
**	Copy constructor
**	Operator =
**	Destructor
*/

class Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon*	_wpn;
	public:
		Character();
		Character(std::string const& name);
		Character(const Character& org);
		Character& operator=(Character org);
		virtual ~Character();
		void				recoverAP();
		void				equip(AWeapon* wpn);
		void				attack(Enemy* enm);
		std::string	virtual	getName() const;
		int					getAP() const;
		std::string			getWpnName() const;
		bool				isArmed() const;
};

std::ostream&	operator<<(std::ostream& os, const Character& fx);
