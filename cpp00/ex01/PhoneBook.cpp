#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

void	PhoneBook::add(void) {
	static int	i;
	if (i == 8)
		i = 0;
	_contacts[i].create();
	std::cout << "Contact created successfully at index " << i++ << std::endl;
}

void	PhoneBook::print() {
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|            MY AWESOME PHONEBOOK           |" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	for (int i = 0; i < 8; i++)
		_contacts[i].view(i);
	std::cout << "+-------------------------------------------+" << std::endl;
}

void	PhoneBook::search() {
	std::string	strIndex;
	std::cout << "Enter contact index: ";
	getline(std::cin, strIndex);
	std::istringstream iss(strIndex);
	int i;
	iss >> i;
	if (strIndex.length() == 1 && std::isdigit(static_cast<unsigned char>(strIndex[0]))
		&& i >= 0 && i < 8)
		_contacts[i].show(i);
	else
		std::cout << "Index is not valid" << std::endl;
}
