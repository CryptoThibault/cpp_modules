#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook();
	string	line;

	while (getline(cin, line))
	{
		if (line == "ADD")
		{
			string firstname;
			string lastname;
			string nickname;
			string	number;
			getline(cin, firstname);
			getline(cin, lastname);
			getline(cin, nickname);
			getline(cin, number);
			phonebook.add(Contact(firstname, lastname, nickname, stoi(number)));
		}
		else if (line == "SEARCH")
		{
			phonebook.print();
			string	i;
			getline(cin, i); 
			phonebook.search(stoi(i));
		}
		else if (line == "EXIT")
			break ;
	}
	return (0);
}
