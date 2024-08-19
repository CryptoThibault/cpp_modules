#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap " << _name << " was constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " was destructed!" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap " << _name << " is also ClapTrap "
		<< ClapTrap::_name << "!" << std::endl;
}
