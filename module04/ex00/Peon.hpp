#pragma once

#include "Victim.hpp"

/*
constructeur défaut
constructeur argument
constructeur par copie
destructeur
operateur d'affectation
*/

class Peon : public Victim
{
private:
 //default constructor on private to forbid his use
	Peon();
public:
	Peon(const std::string& name);
	Peon(const Peon &org);
	Peon&	operator=(const Peon& org);
	~Peon();
	void	getPolymorphed() const;
};