#pragma once

#define MAX_STACK 100

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine	*head;
		ISpaceMarine	*_arr[MAX_STACK];
		size_t			_top;
	public:
						Squad();
		virtual 		~Squad();
		int				getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		bool			isAlreadyInSquad(ISpaceMarine* src) const;
		int				push(ISpaceMarine* src);
};