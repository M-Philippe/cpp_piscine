#pragma once
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string name);
	Weapon();
	~Weapon();
	const 	std::string&	getType();
	void	setType(std::string newType);
};