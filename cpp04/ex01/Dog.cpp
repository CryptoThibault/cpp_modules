#include "Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A dog is born!" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "A dog died!" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
