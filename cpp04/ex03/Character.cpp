#include "Character.hpp"

Character::Character(std::string const& name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other) {
	*this = other;
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < 4; i++)
			_inventory[i] = other._inventory[i];
	}
	return *this;
}
Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const&	Character::getName(void) const {
	return _name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}
}

void	Character::unequip(int idx) {
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
