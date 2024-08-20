#include "Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A cat is born!" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {
	std::cout << "A cat is born!" << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		Animal::operator=(other);
	std::cout << "A cat is born!" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "A cat died!" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
