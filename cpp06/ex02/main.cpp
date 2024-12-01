#include "Base.hpp"

int	main(void) {
	Base	base;
	Base*	a = new A();
	Base* 	random = base.generate();
	
	std::cout << "a ptr: "; 
	base.identify(a);
	std::cout << "a ref: ";
	base.identify(*a);
	std::cout << std::endl;
	std::cout << "random ptr: "; 
	base.identify(random);
	std::cout << "random ref: ";
	base.identify(*random);

	delete a;
	delete random;

	return 0;
}
