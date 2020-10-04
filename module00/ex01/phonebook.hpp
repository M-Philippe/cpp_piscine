/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:25:21 by user42            #+#    #+#             */
/*   Updated: 2020/10/03 22:19:01 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include <iostream>

# define NB_ENTRY 8

# define FIRST_NAME 0
# define LAST_NAME 1
# define NICKNAME 2
# define LOGIN 3
# define POSTAL 4
# define ADDRESS 5
# define EMAIL 6
# define PHONE_NUMBER 7
# define BIRTHDAY_DATE 8
# define FAVORITE_MEAL 9
# define UNDERWEAR_COLOR 10
# define DARKEST_SECRET 11

class phonebook
{
	private:
	
		std::string		book_entry[12];
		bool			b_filled;

	public:

		phonebook(void);
		~phonebook(void);
		bool			is_filled(void);
		void			new_contact(int *i);
		void			display_contact(void);
		std::string		return_entry(int i);
};

#endif