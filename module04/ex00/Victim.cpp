#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(const std::string& name){
	_name = name;
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &org){
	*this = org;
}

void		Victim::getPolymorphed() const {
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim&		Victim::operator=(const Victim& org){
	_name = org._name;
	return (*this);
}

const std::string&	Victim::getName() const{
	return (_name);
}

Victim::~Victim(){
	std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Victim& fx){
	os << "I'm " << fx.getName() << " and I like otters!" << std::endl;
	return (os);
}