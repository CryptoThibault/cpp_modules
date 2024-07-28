#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
private:
	int			_value;
	static int const	_nbBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
