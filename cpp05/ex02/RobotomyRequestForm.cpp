#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", 72,  45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other) {
	_target = other._target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExecute())
		std::cout << executor.getName() << " executed " << getName() << std::endl;
	else
		throw AForm::GradeTooLowException();

	std::srand(static_cast<unsigned int>(std::time(0)));
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized!" << std::endl;
	else
		std::cout << "The robotomy failed!" << std::endl;
}
