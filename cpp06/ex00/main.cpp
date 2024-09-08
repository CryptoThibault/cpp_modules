#include "ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <input>" << std::endl;
		return 1;
	}

	ScalarConverter	converter;
	std::string	str(av[1]);

	converter.convert(str);

	return 0;
}
