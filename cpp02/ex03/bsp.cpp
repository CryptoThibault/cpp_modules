#include "Point.hpp"

float	getArea(Point const a, Point const b, Point const c) {
	return	std::abs(((a.getX() * (b.getY() - c.getY()) +
		b.getX() * (c.getY() - a.getY()) +
		c.getX() * (a.getY() - b.getY())) / 2).toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float	ABC = getArea(a, b, c);
	float	PAB = getArea(point, a, b);
	float	PBC = getArea(point, b, c);
	float	PAC = getArea(point, a, c);
	
	return (ABC == PAB + PBC + PAC);
}
