#include "Contact.hpp"
/*
class Contact {
private:
	string	firstname;
	string	lastname;
	string	nickname;
	int	number;

public:
*/
	Contact()
		: firstname(""), lastname(""), nickname(""), number(0) {}
	
	Contact(string fn, string ln, string nn, int n)
		: firstname(fn), lastname(ln), nickname(nn), number(n) {}
	
	void	show()
	{
		cout << "First name: " << firstname << endl;
		cout << "Last name: " << lastname << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Number: " << number << endl;
	}
//};
