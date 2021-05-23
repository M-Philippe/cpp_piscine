/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:25:12 by user42            #+#    #+#             */
/*   Updated: 2021/05/23 23:38:59 by philippe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string name_entry[11] = { "First name", "Last name", "Nickname",
	"Login", "Postal address", "Email address",
	"Phone number", "Birthday date", "Favorite meal",
	"Underwear color", "Darkest secret" };

phonebook::phonebook(void)
{
	this->b_filled = false;
}

phonebook::~phonebook(void)
{}

void	phonebook::display_contact()
{
	for (int i = 0; i < NB_ENTRY; i++)
		std::cout << name_entry[i] << " : " << this->book_entry[i] << std::endl;
}

bool	phonebook::is_filled(void)
{
	return (this->b_filled);
}

void	phonebook::new_contact(int *i)
{
	this->b_filled = true;
	for (int a = 0; a < NB_ENTRY; a++)
	{
		std::cout << name_entry[a] << " : ";
		std::getline(std::cin, this->book_entry[a]);
	}
	*i += 1;
}

std::string phonebook::get_entry(int i)
{
	return (this->book_entry[i]);
}