#include "replace.hpp"

std::string	readFile(std::string filename) {
	std::ifstream	file(filename.c_str());
	if (!file) {
		std::cerr << "Error: the file " << filename << " cannot be opened" << std::endl;
		return "";
	}
	std::string	content((std::istreambuf_iterator<char>(file)),
		std::istreambuf_iterator<char>());
	return content;
}
