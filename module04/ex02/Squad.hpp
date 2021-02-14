#pragma once

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine**	_squad;
		int				_nbUnits;
	public:
						Squad();
		virtual 		~Squad();
		
		int				getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		bool			isAlreadyInSquad(ISpaceMarine* src) const;
		int				push(ISpaceMarine* src);
};