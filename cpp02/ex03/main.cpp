#include "Point.hpp"

void	bspTest(Point const a, Point const b, Point const c, Point const point) {
	std::cout << "a: (x:" << a.getX() << ", y:" << a.getY() << ")" << std::endl;
	std::cout << "b: (x:" << b.getX() << ", y:" << b.getY() << ")" << std::endl;
	std::cout << "c: (x:" << c.getX() << ", y:" << c.getY() << ")" << std::endl;
	std::cout << "point: (x:" << point.getX() << ", y:" << point.getY() << ")" << std::endl;
	
	std::cout << "The point is ";
	if (bsp(a, b, c, point))
		std::cout << "INSIDE";
	else
		std::cout << "OUTSIDE";
	std::cout <<" the triangle" << std::endl << std::endl;
}

int	main(void) {
	Point const	a;
	Point const	b(2, 0);
	Point const	c(1, 2);
	Point const	p1(1, 1);
	Point const	p2(0, 1);

	std::cout << "[TEST 1: INSIDE]" << std::endl;
	bspTest(a, b, c, p1);
	std::cout << "[TEST 2: OUTSIDE]" << std::endl;
	bspTest(a, b, c, p2);
	
	return 0;
}
