#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal*	meta = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	meta->makeSound();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();

	delete meta;
	delete dog;
	delete cat;

	const WrongAnimal*	wmeta = new WrongAnimal();
	const WrongAnimal*	wcat = new WrongCat();

	wmeta->makeSound();
	std::cout << wcat->getType() << ": ";
	wcat->makeSound();

	delete wmeta;
	delete wcat;

	return 0;
}
