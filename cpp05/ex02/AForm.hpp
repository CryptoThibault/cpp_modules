#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
public:
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& other);
	AForm&	operator=(const AForm& other);
	virtual ~AForm();
	std::string	getName(void) const;
	bool		getIsSigned(void) const;
	int		getGradeToSign(void) const;
	int		getGradeToExecute(void) const;
	void		beSigned(const Bureaucrat& bureaucrat);
	virtual void	execute(const Bureaucrat& executor) const = 0;

	class	GradeTooHighException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Grade too high";
		}
	};

	class	GradeTooLowException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Grade too low";
		}
	};

private:
	const std::string	_name;
	bool			_isSigned;
	const int		_gradeToSign;
	const int		_gradeToExecute;
};

std::ostream&	operator<<(std::ostream& os, const AForm& form);

#endif
