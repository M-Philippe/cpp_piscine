/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:25:21 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 15:58:51 by pminne           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include <iostream>

# define NB_CONTACTS 8

# define NB_ENTRY 11
# define FIRST_NAME 0
# define LAST_NAME 1
# define NICKNAME 2
# define LOGIN 3
# define POSTAL 4
# define EMAIL 5
# define PHONE_NUMBER 6
# define BIRTHDAY_DATE 7
# define FAVORITE_MEAL 8
# define UNDERWEAR_COLOR 9
# define DARKEST_SECRET 10

class phonebook
{
	private:
		std::string		book_entry[NB_ENTRY];
		bool			b_filled;

	public:
		phonebook(void);
		~phonebook(void);
		bool			is_filled(void);
		void			new_contact(int *i);
		void			display_contact(void);
		std::string		get_entry(int i);
};

#endif