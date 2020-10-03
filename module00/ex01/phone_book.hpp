#ifndef		PHONE_BOOK_HPP
# define	PHONE_BOOK_HPP

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

// SEARCH
// INDEX
// FIRST NAME
// LAST NAME
// LOGIN

class phone_book
{
	private:
		std::string		book_entry[12];
		bool			b_filled;
		int				id;
		void			print_htl_line(void);

	public:
		phone_book(void);
		~phone_book(void);
		bool	is_filled(void);
		void	new_contact(int *i);
		void	display_contact(void);
		std::string		return_entry(int i);
};

#endif