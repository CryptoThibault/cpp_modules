#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other) {
	_target = other._target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= getGradeToExecute())
		std::cout << executor.getName() << " executed " << getName() << std::endl;
	else
		throw AForm::GradeTooLowException();

	const std::string tree =
		"   oxoxoo    ooxoo\n"
		" ooxoxo oo  oxoxooo\n"
		"oooo xxoxoo ooo ooox\n"
		"oxo o oxoxo  xoxxoxo\n"
		" oxo xooxoooo o ooo\n"
		"   ooo\\oo\\  /o/o\n"
		"       \\  \\/ /\n"
		"        |   /\n"
		"        |  |\n"
		"        | D|\n"
		"        |  |\n"
		"        |  |\n"
		" ______/____\\____";

	std::string fileName = _target + "_shrubbery";
	std::ofstream	outFile(fileName.c_str());
	if (!outFile) {
		std::cerr << "Error: " << fileName << " can't be opened" << std::endl;
		return;
	}
	outFile << tree << std::endl;
	outFile.close();
	std::cout << "A tree was drawn on " << fileName << "!" << std::endl;
}
