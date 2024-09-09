#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cmath>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter&	operator=(const ScalarConverter& other);
	~ScalarConverter();
	static void	convert(const std::string& input);
	char	toChar(const std::string& input) const;
	int	toInt(const std::string& input) const;
	float	toFloat(const std::string& input) const;
	double	toDouble(const std::string& input) const;

	class NonDisplayable: public std::exception {
		virtual const char* what() const throw() {
			return "Non displayable";
		}
	};

	class Impossible: public std::exception {
		virtual const char* what() const throw() {
			return "impossible";
		}
	};

	class Nan: public std::exception {
	public:
		Nan(int isFloat) : _isFloat(isFloat) {}
		virtual const char* what() const throw() {
			return (_isFloat ? "nanf" : "nan");
		}
	private:
		int	_isFloat;
	};

	class Inf: public std::exception {
	public:
		Inf(int isNegative, int isFloat) : _isNegative(isNegative), _isFloat(isFloat) {}
		virtual const char* what() const throw() {
			return (_isNegative ?
				(_isFloat ? "-inff" : "-inf") :
				(_isFloat ? "+inff" : "+inf"));
		}
	private:
		int	_isNegative;
		int	_isFloat;
	};
};

#endif
