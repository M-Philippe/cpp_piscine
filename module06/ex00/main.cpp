#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <climits>

void	convertToChar(double t, bool error) {
	std::cout << "char: ";
	if (error || (static_cast<char>(t) < CHAR_MIN || static_cast<char>(t) > CHAR_MAX))
		std::cout << "impossible" << std::endl;
	if (!isprint(static_cast<char>(t)))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<char>(t) << std::endl;
}

void	convertToInt(double t, bool error) {
	std::cout << "int: ";
	if (error || (static_cast<int>(t) > INT_MAX && static_cast<int>(t) < INT_MIN)
		|| isnan(t) || std::isinf(t))
	{
		std::cout << "impossible"; return; }
	std::cout << static_cast<int>(t) << std::endl;
}

void	convertToDouble(double t, bool error) {
	std::cout << "double: ";
	if (error || static_cast<double>(t) == HUGE_VAL)
		std::cout << "impossible" << std::endl;
	else
		std::cout << t << std::endl;
}

void	convertToFloat(double t, bool error) {
	std::cout << "float: ";
	if (error || static_cast<float>(t) == HUGE_VAL)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(t) << "f" << std::endl;
}

int	main(int ac, char **av) {
	if (ac != 2)
		return (1);
	double t = strtod(av[1], NULL);
	bool error = false;
	if (t == 0)
	{
		if (strlen(av[1]) > 1) {
			error = true;
		}
		else
			t = av[1][0];
	}
	convertToChar(t, error);
	convertToDouble(t, error);
	convertToFloat(t, error);
	convertToInt(t, error);
}