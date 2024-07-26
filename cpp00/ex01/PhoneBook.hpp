#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <sstream>
# include <cctype>

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	print(void);
	void	search(void);
private:
	Contact	_contacts[8];
};

#endif
