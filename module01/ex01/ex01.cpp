/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:44:54 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 08:34:02 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main()
{
	memoryLeak();
}