#pragma once

#include "Victim.hpp"

class Peon : public Victim
{
private:
 //default constructor on private to forbid his use
public:
	Peon();
	Peon(const std::string& name);
	Peon(const Peon &org);
	~Peon();
	void	getPolymorphed() const;
};