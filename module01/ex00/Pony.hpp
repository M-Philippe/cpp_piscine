/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:58:34 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 23:30:24 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
private:
	std::string		name;
	int				age;
public:
	Pony(std::string name, int age);
	~Pony();
	void	speak();
	void	run();
};
