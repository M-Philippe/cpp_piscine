#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& org);
		Ice&	operator=(const Ice& org);
		virtual ~Ice();

		AMateria*	clone() const;
		void	use(ICharacter& target);
};
