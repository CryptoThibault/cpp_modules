#include "Zombie.hpp"

int	main(void) {
	std::string name;

	name = "Bob";
	Zombie zombieA(name);
	std::cout << "Zombie " << name << " has been created on the stack." << std::endl;
	zombieA.announce();

	name = "Alice";
	Zombie *zombieB = newZombie(name);
	std::cout << "Zombie " << name << " has been created on the heap." << std::endl;
	zombieB->announce();
	delete zombieB;
	name = "Charlie";
	std::cout << "Zombie" << name << " will be created with randomChump." << std::endl;
	randomChump(name);
	return 0;
}
