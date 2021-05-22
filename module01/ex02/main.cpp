/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:51:08 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 23:18:15 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

int		main()
{
	Zombie zmb("Georges", "Basic");
	ZombieEvent evt;

	srand(time(NULL));
	zmb.advert();
	evt.setZombieType("EVENT");
	Zombie *ret = evt.newZombie("Jean");
	ret->advert();
	delete ret;
	evt.randomChump();
	evt.randomChump();
}
