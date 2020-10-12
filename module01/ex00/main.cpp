/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:58:00 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 23:31:34 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	pony_on_stack()
{
	Pony pony("STACK", 2);
	pony.speak();
	pony.run();
}

void	pony_on_heap()
{
	Pony *pony = new Pony("HEAP", 5);
	pony->speak();
	pony->run();
	delete pony;
}

int		main()
{
	pony_on_stack();
	pony_on_heap();
	return (0);
}