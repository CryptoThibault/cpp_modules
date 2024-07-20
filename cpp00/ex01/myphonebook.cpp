#include "myphonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook();
	string	line;

	while (getline(cin, line))
	{
		if (line == "ADD")
		{
			// get contact data
			getline();
			
			phonebook.add(Contact());
		}
		else if (line == "SEARCH")
		{
			phonebook.print();
			// get index
			getline();

			phonebook.search(i);
		}
		else if (line == "EXIT")
			break ;
	}
	return (0);
}
