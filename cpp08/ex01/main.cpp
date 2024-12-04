#include "Span.hpp"

int main(void) {
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	Span	span = Span(5);

	try {
		std::cout << span.shortestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try {
		span.addNumber(6);
		std::cout << span.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try {
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		span.addNumber(0);
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;	
	}

	std::cout << std::endl;
	Span	big = Span(20000);

	try {
		big.addNumbers(1, 19000);
		std::cout << big.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;	
	}
	try {
		big.addNumbers(20001, 22000);
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;	
	}
	std::cout << big.longestSpan() << std::endl;

	return 0;
}
