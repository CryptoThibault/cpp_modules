#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

using namespace std;

class PhoneBook {
private:
	Contact	array[8];
	int	index;

public:
	Phonebook();
	void	add(Contact& elem);
	void	search(int i);
	void	print();
};

#endif
