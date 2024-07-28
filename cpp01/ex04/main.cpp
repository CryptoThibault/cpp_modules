#include "replace.hpp"

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::string text = readFile(filename);
	if (text.empty())
		return 1;
	std::string newText = replaceStrings(text, s1, s2);
	writeFile(filename + ".replace", newText);
	return 0;
}
