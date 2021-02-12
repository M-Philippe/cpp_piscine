#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(const std::string& name) : Victim(name)
{
	_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &org){
	*this = org; std::cout << "constructor copy called" << std::endl;
}

Peon&	Peon::operator=(const Peon& org){
	_name = org._name;
	return (*this);
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const{
	std::cout << _name << " was just polymorphed in a pink poney!" << std::endl;
}