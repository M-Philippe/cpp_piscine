/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:29:23 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 18:40:15 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>

class Zombie
{
	private:
		std::string	_name;
		std::string _type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void	announce();
};
