#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <sstream>
# include <cctype>

class PhoneBook {
private:
	Contact	_contacts[8];
public:
	PhoneBook();
	void	add();
	void	print();
	void	search();
};

#endif
