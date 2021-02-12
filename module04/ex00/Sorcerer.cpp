#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _rank << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& rank){
	_name = name;
	_rank = rank;
	std::cout << _name << ", " << _rank << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &org){
	*this = org;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& org){
	_name = org._name;
	_rank = org._rank;
	return (*this);
}

const std::string& Sorcerer::getName() const {
	return (_name);
}

const std::string& Sorcerer::getRank() const {
	return (_rank);
}

void 				Sorcerer::polymorph(Victim const &vct) const{
	std::cout << _name << " just polymorphed " << vct.getName() << " into something else" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Sorcerer& fx){
	os << "I am " << fx.getName() << ", " << fx.getRank() << " and i like ponies!" << std::endl; 
	return (os);
}
