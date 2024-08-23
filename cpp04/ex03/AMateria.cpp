#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) {
	_type = type;
}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}
AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}
AMateria::~AMateria() {}

std::string const&	AMateria::getType(void) const {
	return _type;
}

AMateria*	AMateria::clone() const {
	return (AMateria*)this;
}

void	AMateria::use(ICharacter& target) {
	std::cout << target.getName() << " use Materia of type " << _type << std::endl;
}
