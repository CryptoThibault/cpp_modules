#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	try {
		Bureaucrat	bob("Bob", 1);
		ShrubberyCreationForm	 shrubberyCreation("home");

		std::cout << bob;
		std::cout <<  shrubberyCreation;
		shrubberyCreation.execute(bob);
	} catch (AForm::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat	alice("Alice", 1);
		RobotomyRequestForm	robotomyRequest("home");

		std::cout << alice;
		std::cout << robotomyRequest;
		robotomyRequest.execute(alice);
	} catch (AForm::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	eve("Eve", 1);
		PresidentialPardonForm	presidentialPardon("home");

		std::cout << eve;
		std::cout << presidentialPardon;
		presidentialPardon.execute(eve);
	} catch (AForm::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
