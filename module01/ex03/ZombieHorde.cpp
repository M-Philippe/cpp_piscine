/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:26:24 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 12:13:32 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n):_n(n)
{
	if (n < 0)
		_n = 0;
	_horde = new Zombie [_n];
	for (int i = 0; i < _n; i++)
		_horde[i] = Zombie(randomName(), "random");
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < _n; i++)
		_horde[i].advert();
}

std::string	ZombieHorde::randomName()
{
	std::string lst_name[] =
		{"Paul", "Georges", "Alice", "Melissa", "Harrisson", "Jimmy", "Jawal", "Russel", "Camille"};
	int r = rand() % 10;
	r != 0 ? r-- : 0;
	return (lst_name[r]);
}

ZombieHorde::~ZombieHorde()
{
	delete[] _horde;
}
