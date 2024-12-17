#include "RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: invalid input." << std::endl;
		return 1;
	}

	RPN	rpn;

	try {
		std::cout << rpn.run(av[1]) << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
