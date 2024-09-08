#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter&	operator=(const ScalarConverter& other);
	~ScalarConverter();
	static void	convert(std::string& input);
	char	toChar(const std::string& input) const;
	int	toInt(const std::string& input) const;
	float	toFloat(const std::string& input) const;
	double	toDouble(const std::string& input) const;

	class NonDisplayable: public std::exception {
		const char* what() const throw() {
			return "Non displayable";
		}
	};
};

#endif
