#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " was constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other)
		*this = other;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " was destructed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints < 1 || _energyPoints < 1)
		return ;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " take " << amount
		<< " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints < 1 || _energyPoints < 1)
		return ;
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " be repaired for " << amount
		<< " hit points!" << std::endl;
}
