/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:25:08 by user42            #+#    #+#             */
/*   Updated: 2021/05/24 01:47:25 by philippe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
#include <limits>

void		print_htl_line(void)
{
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << std::endl;
}

void		print_header()
{
	print_htl_line();
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "First Name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Nickname";
	std::cout << "|";
	std::cout << std::endl;
	print_htl_line();
}

void		print_entry(const std::string print)
{
	std::string		output;

	if (print.length() < 10)
		std::cout << print;
	else
	{
		output = print.substr(0, 9);
		output.push_back('.');
		std::cout << output;
	}
}

void		search(phonebook *ph_book)
{
	int		choice;
	int		i;

	choice = 0;
	i = 0;
	print_header();
	while (i < NB_CONTACTS && ph_book[i].is_filled())
	{
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << i;
			std::cout << "|";
			std::cout << std::setw(10);
			print_entry(ph_book[i].get_entry(FIRST_NAME));
			std::cout << "|";
			std::cout << std::setw(10);
			print_entry(ph_book[i].get_entry(LAST_NAME));
			std::cout << "|";
			std::cout << std::setw(10);
			print_entry(ph_book[i].get_entry(NICKNAME));
			std::cout << "|";
			std::cout << std::endl;
			print_htl_line();
		i++;
	}
	std::cout << "Which profile do you want to see ? " << std::endl;
	std::cin >> choice;
	if (std::cin.fail())
	{
		std::cout << "Saisie incorrecte" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (choice < 8 && ph_book[choice].is_filled())
		ph_book[choice].display_contact();
	else
		std::cout << "Wrong index" << std::endl;
}

int			main(void)
{
    std::string     command;
	phonebook		ph_book[NB_CONTACTS];
	int				i;

	i = 0;
	while (command != "EXIT")
	{
		std::cout << "Enter a command [ADD | SEARCH | EXIT]" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			ph_book[i].new_contact(&i);
		else if (command == "SEARCH")
				search(ph_book);
		(i == NB_CONTACTS) ? (i = 0) : 0;
	}
	return (0);
}