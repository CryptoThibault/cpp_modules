#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Default constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints < 1 || _energyPoints < 1)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount
		<< " points of damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints < 1 || _energyPoints < 1)
		return ;
	std::cout << "ClapTrap " << _name << " be repaired for " << amount
		<< " hit points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}
