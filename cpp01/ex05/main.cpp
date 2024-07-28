#include "Harl.hpp"

int	main(void) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "INVALID"};
	Harl harl;
	
	for (int i = 0; i < 5; ++i) {
		std::cout << levels[i] << ": ";
		harl.complain(levels[i]);
	}
	return 0;
}
