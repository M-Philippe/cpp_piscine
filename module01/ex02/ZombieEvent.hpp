/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:55:22 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 23:15:31 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	_type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump();
};