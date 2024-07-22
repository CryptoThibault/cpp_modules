#include "Contact.hpp"

Contact::Contact() {}

void	Contact::create() {
	std::cout << "[Enter contact informations]" << std::endl;
	std::cout << "First name: ";
	getline(std::cin, _firstName);
	std::cout << "Last name: ";
	getline(std::cin, _lastName);
	std::cout << "Nickname: ";
	getline(std::cin, _nickname);
	std::cout << "Phone number: ";
	getline(std::cin, _phoneNumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, _darkestSecret);
}

void	Contact::view(int index) {
	if (_firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << _firstName;
	std::cout << "|" << std::setw(10) << _lastName;
	std::cout << "|" << std::setw(10) << _nickname;
	std::cout << "|" << std::endl;
}

void	Contact::show(int index) {
	if (_firstName.empty())
		return ;
	std::cout << "[Contact " <<index << "]" << std::endl;
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}
