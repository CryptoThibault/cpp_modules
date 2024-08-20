#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	_type = "Cat";
	std::cout << "A cat is born!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "A cat died!" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
