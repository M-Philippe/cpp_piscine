#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		unsigned int	_xp;
		std::string		_type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& org);
		AMateria&	operator=(const AMateria& org);
		virtual ~AMateria();

		std::string const&	getType() const;
		void				setType(const std::string& type);
		unsigned int		getXP() const;
		// tmp
		void				setXP(unsigned int n);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
