#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void) {
	Bureaucrat	bob("Bob", 1);

	Intern	someRandomIntern1;
	AForm*	scf;
	scf = someRandomIntern1.makeForm("shrubbery creation", "Home");
	scf->execute(bob);
	delete scf;

	std::cout << std::endl;

	Intern	someRandomIntern2;
	AForm*	rrf;
	rrf = someRandomIntern2.makeForm("robotomy request", "Bender");
	rrf->execute(bob);
	delete rrf;

	std::cout << std::endl;

	Intern	someRandomIntern3;
	AForm*	ppf;
	ppf = someRandomIntern3.makeForm("presidential pardon", "Alice");
	ppf->execute(bob);
	delete ppf;

	std::cout << std::endl;

	Intern	someRandomIntern4;
	someRandomIntern4.makeForm("undefined", "unknown");

	return 0;
}
