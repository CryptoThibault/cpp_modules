#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was constructed!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " was destructed!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " asks for high fives!" << std::endl;
}
