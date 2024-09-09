#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&) {
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string& input) {
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
		std::cout << f << ((f == std::floor(f)) ? ".0" : "") << "f" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double: ";
		double	d = obj.toDouble(input);
		std::cout << d << ((d == std::floor(d)) ? ".0" : "") << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

char	ScalarConverter::toChar(const std::string& input) const {
	if (!std::isdigit(input[0]))
		throw Impossible();
	int	n = toInt(input);

	if (n < 32 || n > 126)
		throw NonDisplayable();
	return n;
}

int	ScalarConverter::toInt(const std::string& input) const {
	if (!std::isdigit(input[0]))
		throw Impossible();
	std::stringstream	ss(input);
	int			n;

	ss >> n;
	return n;
}

float	ScalarConverter::toFloat(const std::string& input) const {
	if (input == "-inf" || input == "-inff")
		throw Inf(1, 1);
	if (input == "+inf" || input == "+inff")
		throw Inf(0, 1);
	if (input == "nan" || input == "nanf")
		throw Nan(1);
	if (!std::isdigit(input[0]))
		throw Impossible();

	std::stringstream	ss(input);
	float			f;

	ss >> f;
	return f;
}

double	ScalarConverter::toDouble(const std::string& input) const {
	if (input == "-inf" || input == "-inff")
		throw Inf(1, 0);
	if (input == "+inf" || input == "+inff")
		throw Inf(0, 0);
	if (input == "nan" || input == "nanf")
		throw Nan(0);
	if (!std::isdigit(input[0]))
		throw Impossible();

	std::stringstream	ss(input);
	double			d;

	ss >> d;
	return d;
}
