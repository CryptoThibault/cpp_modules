#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;

typedef AForm* (Intern::*CreateForm)(std::string&) const;

class Intern {
public:
	Intern();
	Intern(const Intern& other);
	Intern&	operator=(const Intern& other);
	~Intern();
	AForm*	makeForm(std::string name, std::string target) const;
private:
	static const std::string	_names[3];
	static const CreateForm		_forms[3];
	AForm*	ShrubberyCreation(std::string& target) const;
	AForm*	RobotomyRequest(std::string& target) const;
	AForm*	PresidentialPardon(std::string& target) const;
};

#endif
