#pragma once

// fixed<w,b>

class Fixed
{
private:
	int					value;
	static const int	wdt = 8;
public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();
	Fixed	&operator=(const Fixed &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
