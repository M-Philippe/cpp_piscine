#include "phone_book.hpp"
#include <iomanip>

phone_book::phone_book(void)
{
	static int		i = 0;

	this->b_filled = false;
	id = i;
	i++;
}

phone_book::~phone_book(void)
{
}

void	phone_book::display_contact()
{
	for (int i = 0; !this->book_entry[i].empty(); i++)
		std::cout << this->book_entry[i] << std::endl;
}

bool	phone_book::is_filled(void)
{
	return (this->b_filled);
}

void	phone_book::new_contact(int *i)
{
	this->b_filled = true;
	std::cout << "First name : ";
	std::cin >> this->book_entry[FIRST_NAME];
	std::cout << "Last name : ";
	std::cin >> this->book_entry[LAST_NAME];
	std::cout << "Nickname : ";
	std::cin >> this->book_entry[NICKNAME];
	std::cout << "LOGIN : ";
	std::cin >> this->book_entry[LOGIN];
	std::cout << "Postal : ";
	std::cin >> this->book_entry[POSTAL];
	std::cout << "Email : ";
	std::cin >> this->book_entry[EMAIL];
	std::cout << "Phone number : ";
	std::cin >> this->book_entry[PHONE_NUMBER];
	std::cout << "Birthday date : ";
	std::cin >> this->book_entry[BIRTHDAY_DATE];
	std::cout << "Favorite meal : ";
	std::cin >> this->book_entry[FAVORITE_MEAL];
	std::cout << "Underwear color : ";
	std::cin >> this->book_entry[UNDERWEAR_COLOR];
	std::cout << "Darkest secret : ";
	std::cin >> this->book_entry[DARKEST_SECRET];
	*i += 1;
}

std::string phone_book::return_entry(int i)
{
	return (this->book_entry[i]);
}