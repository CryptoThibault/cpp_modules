#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria {
public:
	AMateria(std::string const& type);
	AMateria(const AMateria& other);
	AMateria& operator=(const Amateria& other);
	~AMateria();
	std::string const &	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
protected:
	std::string	_type;
};

#endif
