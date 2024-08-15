#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap bob("Bob");
	ScavTrap alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(20);
	alice.beRepaired(20);
	bob.guardGate();

	bob.takeDamage(100);
	bob.attack("Alice");
	bob.beRepaired(100);

	return 0;
}
