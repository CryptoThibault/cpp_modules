#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template<typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
public:
	MutantStack() {}
	MutantStack(const MutantStack& other) {
		*this = other;
	}
	MutantStack&	operator=(const MutantStack& other) {
		std::stack<T, Container>::operator=(other);
		return *this;
	}
	~MutantStack() {}

	typedef typename Container::iterator	iterator;
	iterator	begin(void) {
		return this->c.begin();
	}
	iterator	end(void) {
		return this->c.end();
	}
};

#endif

