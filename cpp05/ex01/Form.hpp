#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form& other);
	Form&	operator=(const Form& other);
	~Form();
	std::string	getName(void) const;
	bool		getIsSigned(void) const;
	int		getGradeToSign(void) const;
	int		getGradeToExecute(void) const;
	void		beSigned(const Bureaucrat& bureaucrat);

	class	GradeTooHighException: public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too high";
		}
	};

	class		GradeTooLowException: public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too low";
		}
	};

private:
	std::string	_name;
	bool		_isSigned;
	int		_gradeToSign;
	int		_gradeToExecute;
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
