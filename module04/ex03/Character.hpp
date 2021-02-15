#pragma once

#define MaxMateria 4

#include "ICharacter.hpp"
//#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria**	_inventory;
		std::string	_name;
		int			_nbMateria;
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& org);
		Character&	operator=(const Character& org);
		virtual ~Character();

		void 	deleteInventory();
		std::string const&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};
