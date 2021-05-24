/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:26:27 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 09:11:22 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde
{
	private:
		Zombie			*_horde;
		int				_n;
		std::string		randomName();

	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void announce();
};
