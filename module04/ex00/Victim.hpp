#pragma once

#include <iostream>

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
