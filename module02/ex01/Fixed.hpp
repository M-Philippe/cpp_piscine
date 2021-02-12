#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					value;
	static const int	n_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const int input);
	Fixed(const float input);
	~Fixed();
	Fixed	&operator=(const Fixed &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};
