#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "An animal is born!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "An animal is born!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		*this = other;
	std::cout << "An animal is born!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An animal died!" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "An animal makes a sound!" << std::endl;
}
