#include "Fixed.hpp"

Fixed::Fixed() {
	_value = 0;
}

Fixed::Fixed(const int val) {
	_value = val << _nbBits;
}

Fixed::Fixed(const float val) {
	_value = roundf(val * (1 << _nbBits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
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

bool	Fixed::operator>(const Fixed& other) const {
	return getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(const Fixed& other) const {
	return getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed& other) const {
	return getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(const Fixed& other) const {
	return getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(const Fixed& other) const {
	return getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed& other) const {
	return getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& other) const {
	return toFloat() + other.toFloat();
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return toFloat() - other.toFloat();
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return toFloat() * other.toFloat();
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return toFloat() / other.toFloat();
}

Fixed&	Fixed::operator++(void) {
	++_value;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	last(*this);
	_value++;
	return last;
}

Fixed&	Fixed::operator--(void) {
	--_value;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	last(*this);
	_value--;
	return last;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;

}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;

}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;

}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
