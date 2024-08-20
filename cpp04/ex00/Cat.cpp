#include "Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	std::cout << "A cat is born!" << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat died!" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
