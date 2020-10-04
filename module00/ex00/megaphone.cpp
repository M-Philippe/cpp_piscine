/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:14:51 by user42            #+#    #+#             */
/*   Updated: 2020/10/03 21:14:53 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string	convert_str_toupper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
	{
		str = "* loud and unbearable feedback noise *";
		std::cout << convert_str_toupper(str);
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			std::cout << convert_str_toupper(str);
		}
	}
	std::cout << std::endl;
	return 0;
}
