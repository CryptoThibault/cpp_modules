#include "Brain.hpp"

Brain::Brain() {
	std::cout << "A brain is created!" << std::endl;
}

Brain::Brain(const Brain& other) {
	*this = other;
	std::cout << "A brain is created!" << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other)
		*this = other;
	std::cout << "A brain is created!" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "A brain is deleted!" << std::endl;
}