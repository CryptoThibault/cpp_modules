#include "FragTrap.hpp"

int	main(void) {
	FragTrap bob("Bob");
	FragTrap alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(30);
	alice.beRepaired(30);
	bob.highFivesGuys();

	bob.takeDamage(100);
	bob.attack("Alice");
	bob.beRepaired(100);

	return 0;
}
