#include "Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat	bob("Bob", 2);

		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	alice("Alice", 149);

		std::cout << alice;
		alice.decrementGrade();
		std::cout << alice;
		alice.decrementGrade();
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	Eve("Eve", 0);
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
