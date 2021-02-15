#pragma once

#define learnMax 4

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria**		_lst;
		int				_nMateria;
	public:
		MateriaSource();
		virtual ~MateriaSource();
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};

