#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	line;

	while (getline(std::cin, line)) {
		if (line == "ADD")
			book.add();
	else if (line == "SEARCH") {
			book.print();
			book.search();
		}
		else if (line == "EXIT")
			break ;
	}
	return (0);
}
