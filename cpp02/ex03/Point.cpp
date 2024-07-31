#include "Point.hpp"

Point::Point() {
	_x = Fixed(0);
	_y = Fixed(0);
}

Point::Point(const float x, const float y) {
	_x = Fixed(x);
	_y = Fixed(y);
}

Point::Point(const Point& other) {
	*this = other;
}

Point&	Point::operator=(const Point& other) {
	if (this != &other) {
		_x = other.getX();
		_y = other.getY();
	}
	return *this;
}

Point::~Point() {}

Fixed	Point::getX(void) const {
	return _x;
}

Fixed	Point::getY(void) const {
	return _y;
}

void	Point::setX(const Fixed x) {
	_x = x;
}
void	Point::setY(const Fixed y) {
	_y = y;
}
