#pragma once

#include "Brain.hpp"

class Human
{
private:
	const Brain	own_brain;
public:
	Human();
	~Human();
	std::string	identify();
	const Brain&		getBrain();
};
