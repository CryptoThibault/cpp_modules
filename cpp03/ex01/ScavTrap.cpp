#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was constructed!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " was destructed!" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (_hitPoints < 1 || _energyPoints < 1)
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
