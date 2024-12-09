#include "Span.hpp"

Span::Span(): _vacant(0) {}

Span::Span(unsigned int N): _vacant(N) {}

Span::Span(const Span& other): _vacant(other.getVacant()), _vector(other.getVector()) {}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		_vacant = other.getVacant();
		_vector = other.getVector();
	}
	return *this;
}

Span::~Span() {}

unsigned int	Span::getVacant() const {
	return _vacant;
}

std::vector<int>	Span::getVector() const {
	return _vector;
}

void	Span::addNumber(int value) {
	if (!_vacant)
		throw SpanIsFull();
	_vacant--;
	_vector.push_back(value);
}

void	Span::addNumbers(int start, int end) {
	if (start > end) {
		int tmp = start;
		start = end;
		end = tmp;
	}
	if ((unsigned int)(end - start) > _vacant)
		throw SpanIsFull();
	while (start <= end) {
		_vacant--;
		_vector.push_back(start++);	
	}
}

unsigned int	Span::shortestSpan() {
	if (_vector.size() < 2)
		throw NotEnoughNumbers();
	std::sort(_vector.begin(), _vector.end());
	unsigned int	min = std::abs(_vector[1] - _vector[0]);
	for (size_t i = 1; i < _vector.size() - 1; ++i) {
		unsigned int	diff = std::abs(_vector[i + 1] - _vector[i]);
		if (diff < min)
			min = diff;
	}
	return min;
}

unsigned int	Span::longestSpan() {
	if (_vector.size() < 2)
		throw NotEnoughNumbers();
	std::sort(_vector.begin(), _vector.end());
	return _vector[_vector.size() - 1] - _vector[0];
}
