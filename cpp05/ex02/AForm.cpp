#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	_isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other): _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	_isSigned = other._isSigned;
}
AForm&	AForm::operator=(const AForm& other) {
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

AForm::~AForm() {}

std::string	AForm::getName(void) const {
	return _name;
}

bool	AForm::getIsSigned(void) const {
	return _isSigned;
}
int	AForm::getGradeToSign(void) const {
	return _gradeToSign;
}
int	AForm::getGradeToExecute(void) const {
	return _gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const AForm& form) {
	os << form.getName() << " is " << (form.getIsSigned() ? "" : "not ")
		<< "signed, grade to sign: " << form.getGradeToSign()
		<< ", grade to execute: "<< form.getGradeToExecute() << std::endl;
	return os;
}
