#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal &other);
	~WrongAnimal();
	std::string	getType(void) const;
	void	makeSound(void) const;
protected:
	std::string	_type;
};

#endif
