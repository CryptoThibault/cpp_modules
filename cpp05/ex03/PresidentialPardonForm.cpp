#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), _target(other._target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExecute())
		std::cout << executor.getName() << " executed " << getName() << std::endl;
	else
		throw AForm::GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
