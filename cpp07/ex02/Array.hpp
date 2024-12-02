#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
public:
	Array(): _array(new T()), _size(0) {};
	Array(unsigned int s): _array(new T[s]), _size(s) {};
	Array(const Array& other): _array(new T[other.size()], _size(other.size())) {
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	Array&	operator=(const Array& other) {
		if (this != &other) {
			delete[] _array;
			_array = new T[other.size()];
			_size = other.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
		return *this;
	}
	T&	operator[](unsigned int i) const {
		if (i >= _size)
			throw OutOfBounds();
		return _array[i];
	}
	unsigned int	size(void) const {
		return _size;
	}
	~Array() {
		delete[] _array;
	}

	class OutOfBounds: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Index is out of bounds";
			}
	};
private:
	T*	_array;
	unsigned int	_size;
};

#endif
