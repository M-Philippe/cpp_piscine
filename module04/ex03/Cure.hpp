#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& org);
		Cure&	operator=(const Cure& org);
		virtual ~Cure();

		void	use(ICharacter& target);
		AMateria*	clone() const;
};
