#include "Fixed.hpp"

Fixed::Fixed(const int input)
{
	value = (input * (1 << n_bits));
}

Fixed::Fixed(const float input)
{
	value = roundf(input * (1 << n_bits));
}

Fixed::Fixed() {value = 0;}

Fixed::Fixed(const Fixed &src) {value = src.value;}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=(const Fixed& src)
{
	value = src.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &b)
{
	Fixed	ret;

	ret.value = this->value + b.value;
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &b)
{
	Fixed	ret;

	ret.value = this->value - b.value;
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &b)
{
	Fixed	ret;

	ret.value = (this->value * b.value) >> n_bits;
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &b)
{
	Fixed	ret;
	
	if (b.value == 0)
		return (ret);
	ret.value = (this->value / b.value) << n_bits;
	return (ret);
}

bool	Fixed::operator==(const Fixed &b) {return (this->value == b.value);}
bool	Fixed::operator>(const Fixed &b) {return (this->value > b.value);}
bool	Fixed::operator>=(const Fixed &b) {return (this->value >= b.value);}
bool	Fixed::operator<(const Fixed &b) {return (this->value < b.value);}
bool	Fixed::operator<=(const Fixed &b) {return (this->value <= b.value);}
bool	Fixed::operator!=(const Fixed &b) {return (this->value != b.value);}

Fixed&	Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}

int		Fixed::getRawBits(void) const {return (value);}

void	Fixed::setRawBits(int const raw) {value = raw;}

int		Fixed::toInt(void) const {return (value / (1 << n_bits));}

float	Fixed::toFloat(void) const {return ((float)value / (1 << n_bits));}

std::ostream&	operator<<(std::ostream& os, const Fixed& fx)
{
	os << fx.toFloat();
	return (os);
}