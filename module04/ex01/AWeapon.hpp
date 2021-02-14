#pragma once

#include <iostream>

//	PUT VIRTUAL IN FRONT OF DESTRUCTOR

class AWeapon
{
	private:
		std::string	_name;
		int			_apCost;
		int			_damage;
	public:
		AWeapon();
		AWeapon(std::string const &name, int apCost, int damage);
		/* Canonique */
		AWeapon(const AWeapon& org);
		AWeapon&	operator=(const AWeapon& org);
		std::string virtual	getName() const;
		int			getAPCost() const;
		int			getDamage() const;
		void		incDamage();
		virtual void	attack() const = 0;
		virtual ~AWeapon();
};