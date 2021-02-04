#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{memory = 0;}

Brain::~Brain()
{}

std::string	Brain::identify() const
{
	std::string ret = "0x";
	std::stringstream s;
	s << this;
	s >> ret;
	return (ret);
}