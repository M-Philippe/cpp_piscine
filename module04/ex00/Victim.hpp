#pragma once

#include <iostream>

/*
constructeur défaut
constructeur argument
constructeur par copie
destructeur
operateur d'affectation
*/

class Victim
{
protected:
	Victim(); // default constructor on private to forbid his use
	std::string	_name;
public:
	Victim(const std::string& name);
	Victim(const Victim &org);
	Victim&	operator=(const Victim& org);
	const std::string&	getName() const;
	void	getPolymorphed() const;
	~Victim();
};

std::ostream&	operator<<(std::ostream& os, const Victim& fx);
