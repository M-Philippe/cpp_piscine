/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:26:34 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 10:31:59 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):
_name(name),_type(type)
{
}

Zombie::Zombie()
{}

Zombie::~Zombie()
{}

void	Zombie::advert()
{
	std::cout << this->_name + " " + this->_type << " Braiiiiiiinnnnnsssssss...\n";
}