#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&) {
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string& input) {
	ScalarConverter	obj;

	try {
		std::cout << "char: ";
		char	c = obj.toChar(input);
		std::cout << "'" << c << "'" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "int: " << obj.toInt(input) << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "float: ";
		float	f = obj.toFloat(input);	
		std::cout << f << "f" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double: ";
		double	d = obj.toDouble(input);
		std::cout << d << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

char	ScalarConverter::toChar(const std::string& input) const {
	int	n = toInt(input);

	if (n < 32 || n > 126)
		throw NonDisplayable();
	return n;
}

int	ScalarConverter::toInt(const std::string& input) const {
	std::stringstream	ss(input);
	int			n;

	ss >> n;
	return n;
}

float	ScalarConverter::toFloat(const std::string& input) const {
	std::stringstream	ss(input);
	float			f;

	ss >> f;
	return f;
}

double	ScalarConverter::toDouble(const std::string& input) const {
	std::stringstream	ss(input);
	double			d;

	ss >> d;
	return d;
}
