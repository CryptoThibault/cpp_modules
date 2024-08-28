#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) {
	_name = name;
	_isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	_gradeToSign = gradeToSign;
	_gradeToExecute = gradeToExecute;
}

Form::Form(const Form& other) {
	*this = other;
}
Form&	Form::operator=(const Form& other) {
	if (this != &other) {
		_name = other._name;
		_isSigned = other._isSigned;
		_gradeToSign = other._gradeToSign;
		_gradeToExecute = other._gradeToExecute;
	}
	return *this;
}

Form::~Form() {}

std::string	Form::getName(void) const {
	return _name;
}

bool	Form::getIsSigned(void) const {
	return _isSigned;
}
int	Form::getGradeToSign(void) const {
	return _gradeToSign;
}
int	Form::getGradeToExecute(void) const {
	return _gradeToExecute;
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Form& form) {
	os << form.getName() << " is " << (form.getIsSigned() ? "" : "not ")
		<< "signed, grade to sign: " << form.getGradeToSign()
		<< ", grade to execute: "<< form.getGradeToExecute() << std::endl;
	return os;
}
