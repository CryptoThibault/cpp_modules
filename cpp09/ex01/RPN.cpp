#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other): _stack(other.getStack()){
	*this = other;
}

RPN&	RPN::operator=(const RPN& other) {
	if (this != &other)
		_stack	= other.getStack();
	return *this;
}

RPN::~RPN() {}

std::stack<int>	RPN::getStack() const {
	return _stack;
}

int	RPN::run(char *input) {
	char	c;
	size_t	len = strlen(input);

	for (size_t i = 0; i < len; i++) {
		while (i < len && isspace(input[i]))
			i++;
		if (i >= len)
			break;
		c = input[i]; 
		if (isdigit(c))
			_stack.push(c - '0');
		else if (c == '+' || c == '-' || c == '*' || c == '/') {
			if (_stack.size() < 2)
				throw	InvalidOperation();
			int	a = _stack.top();
			_stack.pop();
			int	b = _stack.top();
			_stack.pop();

			if (c == '+')
				_stack.push(b + a);
			else if (c == '-')
				_stack.push(b - a);
			else if (c == '*')
				_stack.push(b * a);
			else if (c == '/') {
				if (a == 0)
					throw DivisionByZero();
				_stack.push(b / a);
			}
		} else
			throw InvalidChar(c);
	}

	if (_stack.size() != 1)
	throw	InvalidRPN();

	return _stack.top();
}
