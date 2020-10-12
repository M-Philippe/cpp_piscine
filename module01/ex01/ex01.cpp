/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:44:54 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 23:46:13 by user42           ###   ########lyon.fr   */
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