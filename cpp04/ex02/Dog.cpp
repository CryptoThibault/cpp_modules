#include "Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A dog is born!" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other) {
	std::cout << "A dog is born!" << std::endl;
}
	
Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
		*this = other;
	std::cout << "A dog is born!" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "A dog died!" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
