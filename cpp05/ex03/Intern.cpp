#include "Intern.hpp"

const std::string	Intern::_names[] = { "shrubbery creation",
	"robotomy request", "presidential pardon" };
const CreateForm	Intern::_forms[] = { &Intern::ShrubberyCreation,
	&Intern::RobotomyRequest, &Intern::PresidentialPardon };

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern&	Intern::operator=(const Intern&) {
	return *this;
}

Intern::~Intern() {}

AForm*	Intern::ShrubberyCreation(std::string& target) const {
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::RobotomyRequest(std::string& target) const {
	return new RobotomyRequestForm(target);
}

AForm*	Intern::PresidentialPardon(std::string& target) const {
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string name, std::string target) const {
	for (int i = 0; i < 3; i++)
		if (name == _names[i]) {
			std::cout << name << " with target " << target
				<< " is created by an intern" << std::endl;
			return (this->*_forms[i])(target);
		}
	std::cout << name << " does not exist, can't be created" << std::endl;
	return NULL;
}
