#include "replace.hpp"

void	writeFile(std::string filename, std::string text) {
	std::ofstream	file(filename.c_str());
	if (!file) {
		std::cerr << "Erreur : the file " << filename << " cannot be opened" << std::endl;
		return;
	}
	file << text;
}
