#include "Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	std::cout << "A dog is born!" << std::endl;
}

Dog::~Dog() {
	std::cout << "A dog died!" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
