#include "Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat	bob("Bob", 2);

		std::cout << bob;
		std::cout << "Increment " << bob.getName() << " grade" << std::endl;
		bob.incrementGrade();
		std::cout << bob;
		std::cout << "Increment " << bob.getName() << " grade" << std::endl;
		bob.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	alice("Alice", 149);

		std::cout << alice;
		std::cout << "Decrement " << alice.getName() << " grade" << std::endl;
		alice.decrementGrade();
		std::cout << alice;
		std::cout << "Decrement " << alice.getName() << " grade" << std::endl;
		alice.decrementGrade();
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat	Eve("Eve", 0);
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
