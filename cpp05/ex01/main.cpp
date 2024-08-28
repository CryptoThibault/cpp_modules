#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	try {
		Bureaucrat	bob("Bob", 1);
		Form		registration("Registration", 1, 1);

		std::cout << bob;
		std::cout << registration;
		bob.signForm(registration);
		std::cout << registration;
	} catch (Form::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	alice("Alice", 2);
		Form		registration("Registration", 1, 1);

		std::cout << alice;
		std::cout << registration;
		alice.signForm(registration);
		std::cout << registration;
	} catch (Form::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		Form	registration("Registration", 0, 1);
	} catch (Form::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
