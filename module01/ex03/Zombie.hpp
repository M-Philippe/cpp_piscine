/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:29:23 by user42            #+#    #+#             */
/*   Updated: 2021/01/25 10:31:36 by pminne           ###   ########lyon.fr   */
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
		Zombie();
		~Zombie();
		void	advert();
};