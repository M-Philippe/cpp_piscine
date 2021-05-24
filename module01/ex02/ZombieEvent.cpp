/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:55:18 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 23:16:16 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(){}

ZombieEvent::~ZombieEvent(){std::cout << "Event dead\n";}

void	ZombieEvent::setZombieType(std::string type){
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	return (new Zombie(name, this->_type));
}

void	ZombieEvent::randomChump()
{
	std::string lst_name[] =
		{"Paul", "Georges", "Alice", "Melissa", "Harrisson", "Jimmy", "Jawal", "Russel", "Camille"};
	int r = rand() % 10;
	r != 0 ? r-- : 0;
	Zombie chump(lst_name[r], "Random");
	chump.announce();
}
