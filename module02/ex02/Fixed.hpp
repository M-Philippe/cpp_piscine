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
	Fixed	operator+(const Fixed &b);
	Fixed	operator-(const Fixed &b);
	Fixed	operator*(const Fixed &b);
	Fixed	operator/(const Fixed &b);
	bool	operator==(const Fixed &b) const;
	bool	operator>(const Fixed &b) const;
	bool	operator>=(const Fixed &b) const;
	bool	operator<(const Fixed &b) const;
	bool	operator<=(const Fixed &b) const;
	bool	operator!=(const Fixed &b) const;
	Fixed&	operator++();		// Prefix incrementation
	Fixed	operator++(int);	// Postfix incrementation
	Fixed&	operator--();		// Prefix decrementation
	Fixed	operator--(int);	// Postfix decrementation
	static const Fixed&	min(const Fixed& a, const Fixed &b);
	static const Fixed&	max(const Fixed& a, const Fixed &b);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fx);
const Fixed&		min(const Fixed& a, const Fixed& b);
const Fixed&		max(const Fixed& a, const Fixed& b);
