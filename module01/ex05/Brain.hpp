#pragma once
#include <cstring>
#include <iostream>

class Brain
{
private:
	int		memory;
public:
	Brain();
	~Brain();
	std::string	identify() const;
};
