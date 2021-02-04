#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "inc " << a++ << std::endl;
	std::cout << "after inc " << a << std::endl;
	std::cout << a << std::endl;
	a--;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	
	Fixed c = 10;
	std::cout << c.toInt() << std::endl;
	c = c + Fixed(2);
	std::cout << c.toInt() << std::endl;
	c = c - Fixed(2);
	std::cout << c.toInt() << std::endl;
	c = c * Fixed(2);
	std::cout << c.toInt() << std::endl;
	c = c / Fixed(2);
	std::cout << c.toInt() << std::endl;
	std::cout << (c == a) << std::endl;
	std::cout << (a < c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a > c) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a != c) << std::endl;
	return 0;
}
