#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	std::string	_getlineFilled(std::string str);
	std::string	_truncateTen(std::string str);
public:
	Contact();
	void	create();
	void	view(int index);
	void	show(int index);
};

#endif
