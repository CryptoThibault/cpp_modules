#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using namespace std;

class Contact {
private:
	string  firstname;
	string  lastname;
	string  nickname;
	int     number;
public:
	Contact();
	Contact(string fn, string ln, string nn, int n);
	void	show();
};

#endif
