#include "BitcoinExchange.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}

	std::ifstream	input(av[1]);

	if (!input) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}

	BitcoinExchange	btc;
	std::string	line;

	std::getline(input, line);
	while (std::getline(input, line)) {
		size_t	comma = line.find(" | ");
		std::string		date = line.substr(0, comma);
		std::istringstream	valueStream(line.substr(comma + 3));
		float	value;
		valueStream >> value;
		try {
			std::ostringstream	oss;
			oss << date << " => " << value << " = "
				<< btc.convert(date, value);
			std::cout << oss.str() << std::endl;
		} catch (std::exception& e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	return 0;	
}
