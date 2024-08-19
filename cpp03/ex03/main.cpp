#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap bob("Bob");
	DiamondTrap alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(30);
	alice.beRepaired(30);
	bob.guardGate();
	bob.highFivesGuys();
	bob.whoAmI();

	bob.takeDamage(100);
	bob.attack("Alice");
	bob.beRepaired(100);

	return 0;
}
