#pragma once

#include <iostream>
#include "Victim.hpp"

/*
constructeur défaut
constructeur argument
constructeur par copie
destructeur
operateur d'affectation
*/

class Sorcerer
{
private:
	Sorcerer(); // default constructor on private to forbid his use
	std::string	_name;
	std::string	_rank;
public:
	Sorcerer(const std::string& name, const std::string& rank);
	Sorcerer(const Sorcerer &org);
	Sorcerer	&operator=(const Sorcerer& org);
	const std::string&	getName() const;
	const std::string&	getRank() const;
	void polymorph(Victim const &vct) const;
	~Sorcerer();
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& fx);