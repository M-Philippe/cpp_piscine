/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:23:38 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 12:11:42 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	srand(time(NULL));
	ZombieHorde horde(5);
	horde.announce();
	ZombieHorde hd(-5);
	ZombieHorde hd1(1);
	hd1.announce();
}
