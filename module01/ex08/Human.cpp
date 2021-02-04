#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

void	Human::meleeAttack(std::string	const& target)
{
	std::cout << "meleeAttack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const& target)
{
	std::cout << "rangedAttack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const& target)
{
	std::cout << "intimidatingShout on " << target << std::endl;
}

void	Human::action(std::string const& action_name, std::string const& target)
{
	std::string		act[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef		void(Human::*Attacks)(std::string const& target);
	Attacks fct[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for (int i = 0; i < 3; i++)
	{
		if (act[i] == action_name)
		{
			(this->*(fct[i]))(target);
		}
	}
}