#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap bob("Bob");
	ClapTrap alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(0);
	alice.beRepaired(0);

	bob.takeDamage(10);
	bob.attack("Alice");
	bob.beRepaired(10);

	return 0;
}
