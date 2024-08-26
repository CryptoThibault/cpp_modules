#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::_getlineFilled(std::string str) {
	std::string input;

	while (true) {
		std::cout << str;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "End of file detected, exiting" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (!input.empty())
			break;
		std::cout << "Input can't be empty" << std::endl;
	}
	return input;
}

std::string	Contact::_truncateTen(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::create() {
	std::cout << "[Enter contact informations]" << std::endl;
	_firstName = _getlineFilled("First name: ");
	_lastName = _getlineFilled("Last name: ");
	_nickname = _getlineFilled("Nickname: ");
	_phoneNumber = _getlineFilled("Phone number: ");
	_darkestSecret = _getlineFilled("Darkest secret: ");
}

void	Contact::view(int index) {
	if (_firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << _truncateTen(_firstName);
	std::cout << "|" << std::setw(10) << _truncateTen(_lastName);
	std::cout << "|" << std::setw(10) << _truncateTen(_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::show(int index) {
	if (_firstName.empty()) {
		std::cout << "Contact at this index is not set, retry" << std::endl;
		return ;
	}
	std::cout << "[Contact " <<index << "]" << std::endl;
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}
