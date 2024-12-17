#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <cstring>
#include <sstream>

class RPN {
public:
	RPN();
	RPN(const RPN& other);
	RPN&	operator=(const RPN& other);
	~RPN();
	std::stack<int>	getStack() const;
	int		run(char *input);

	class InvalidOperation: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "invalid operation.";
			}
	};

	class InvalidChar: public std::exception {
		public:
			InvalidChar(const char c) {
				std::ostringstream oss;
				oss << "invalid char => " << c;
				_msg = oss.str();
			}
			virtual const char* what() const throw() {
				return _msg.c_str();
			}
			virtual ~InvalidChar() throw() {}
		private:
			std::string	_msg;
	};

	class InvalidRPN: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "invalid RPN notation.";
			}
	};

	class DivisionByZero: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "division by zero.";
			}
	};
private:
	std::stack<int>	_stack;
};

#endif

