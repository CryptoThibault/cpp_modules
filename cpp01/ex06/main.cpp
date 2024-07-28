#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <LEVEL>" << std::endl;
		return 1;
	}
	std::string	level = av[1];
	Harl		harl;

	harl.complain(level);
	return 0;
}
