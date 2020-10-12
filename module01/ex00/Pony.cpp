/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:58:31 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 23:31:53 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age)
{
	this->name = name;
	this->age = age;
	std::cout << this->name << " created\n";
}

Pony::~Pony()
{
	std::cout << this->name << " destroyed\n";
}

void	Pony::speak()
{
	std::cout << "I'm " << this->name << " and i'm " << this->age << " years old\n";
}

void	Pony::run()
{
	std::cout << this->name << " is running\n";
}