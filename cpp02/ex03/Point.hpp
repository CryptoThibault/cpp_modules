#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other);
	Point&	operator=(const Point& other);
	~Point();
	Fixed	getX(void) const;
	Fixed	getY(void) const;
	void	setX(const Fixed x);
	void	setY(const Fixed y);
private:
	Fixed _x;
	Fixed _y;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
