#include "Human.hpp"
#include <sstream>
Human::Human()
{
}

Human::~Human()
{}

std::string	Human::identify()
{
	return (own_brain.identify());
}

const Brain&		Human::getBrain()
{
	return (own_brain);
}