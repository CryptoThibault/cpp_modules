#include "Base.hpp"

Base::Base() {}

Base::~Base() {}

Base*	Base::generate(void) {
	srand(static_cast<unsigned>(std::time(0)));
	int	n = rand() % 3;

	if (!n)
		return new A;
	else if (n == 1)
		return new B;
	else
		return new C;
}

void	Base::identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "undefined" << std::endl;
}

void	Base::identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception&) {
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::exception&) {
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception&) {
		std::cout << "undefined" << std::endl;
	}}}
}
