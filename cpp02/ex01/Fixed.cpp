#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	_value = val << _nbBits;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(val * (1 << _nbBits));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return _value;
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _nbBits);
}

int	Fixed::toInt(void) const {
	return _value >> _nbBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
