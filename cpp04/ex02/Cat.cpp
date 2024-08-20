#include "Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A cat is born!" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "A cat died!" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
