#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {
public:
	BitcoinExchange();
	BitcoinExchange(std::string input);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange&	operator=(const BitcoinExchange& other);
	~BitcoinExchange();
	std::map<std::string, float>	getData() const;
	std::map<std::string, float>	parseData(std::string file) const;
	float	convert(std::string date, float value) const;

	class InvalidDataFile: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "data file invalid.";
			}
	};

	class BadInput: public std::exception {
		public:
			BadInput(const std::string& input) {
				_input = "bad input => " + input; 
			}
			virtual const char* what() const throw() {
				return _input.c_str();
			}
			virtual ~BadInput() throw() {}	
		private:
			std::string	_input;
	};

	class NotPositiveNumber: public std::exception {
		public:	
			virtual const char* what() const throw() {
				return "not a positive number.";
			}
	};

	class TooLargeNumber: public std::exception {
		public:	
			virtual const char* what() const throw() {
				return "too large a number.";
			}
	};
private:
	std::map<std::string, float>	_data;
};

#endif

