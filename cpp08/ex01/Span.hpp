#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span&	operator=(const Span& other);
	~Span();
	unsigned int		getVacant() const;
	std::vector<int>	getVector() const;
	void		addNumber(int value);
	void		addNumbers(int start, int end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class SpanIsFull: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Span is full";
			}
	};

	class NotEnoughNumbers: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Not enough numbers in span";
			}
	};
private:
	unsigned int		_vacant;
	std::vector<int>	_vector;
};

#endif

