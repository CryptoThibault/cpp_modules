#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	delete dog;
	delete cat;

	const Animal*	animals[6];
	for (int i = 0; i < 6;) {
		animals[i++] = new Dog();
		animals[i++] = new Cat();
	}
	for (int i = 0; i < 6; i++) {
		delete animals[i];
	}

	return 0;
}
