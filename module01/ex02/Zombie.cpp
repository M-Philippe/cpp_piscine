/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:26:34 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 14:35:39 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):
_name(name),_type(type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::advert()
{
	std::cout << this->_name + " " + this->_type << " Braiiiiiiinnnnnsssssss...\n";
}