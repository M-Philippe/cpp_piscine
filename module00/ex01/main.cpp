#include "phone_book.hpp"
#include <iomanip>

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
	std::cout << "Login";
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

void		search(phone_book *ph_book)
{
	int		choice;
	int		i;

	choice = 0;
	i = 0;
	print_header();
	while (i < NB_ENTRY && ph_book[i].is_filled())
	{
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << i + 1;
			std::cout << "|";
			std::cout << std::setw(10);
			//std::cout << ph_book[i].return_entry(FIRST_NAME);
			print_entry(ph_book[i].return_entry(FIRST_NAME));
			std::cout << "|";
			std::cout << std::setw(10);
			//std::cout << ph_book[i].return_entry(LAST_NAME);
			print_entry(ph_book[i].return_entry(LAST_NAME));
			std::cout << "|";
			std::cout << std::setw(10);
			//std::cout << ph_book[i].return_entry(LOGIN);
			print_entry(ph_book[i].return_entry(LOGIN));
			std::cout << "|";
			std::cout << std::endl;
			print_htl_line();
		i++;
	}
	std::cout << "Which profile do you want to see ? ";
	std::cin >> choice;
	choice--;
	i--;
	std::cout << choice;
	std::cout << "  i ";
	std::cout << i << std::endl;
	if (choice >= 0 && choice <= i)
		ph_book[choice].display_contact();
	else
		std::cout << "Wrong Index" << std::endl;
}

int			main(void)
{
    std::string     command;
	phone_book		ph_book[NB_ENTRY];
	int				i;

	i = 0;
	/*std::string output;
	output = "HAaaaqsqsdsfqsdf";
	if (output.length() > 10)
	{
		output = output.substr(0, 10);
		output[9] = '.';
	}
	std::cout << "|";
	std::cout << std::setw(10);
	int a = 1;
	std::cout << a;
	std::cout << "|"  << std::endl;
	return 0;*/
	std::cout << true << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Enter a command [ADD | SEARCH | EXIT]" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			ph_book[i].new_contact(&i);
		else if (command == "SEARCH")
				search(ph_book);
		(i == 7) ? (i = 0) : 0;
	}
	return (0);
}