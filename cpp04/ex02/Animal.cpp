#include "Animal.hpp"

Animal::Animal() {
	std::cout << "An animal is born!" << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "An animal is born!" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "An animal is born!" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "An animal died!" << std::endl;
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "An animal makes a sound!" << std::endl;
}
