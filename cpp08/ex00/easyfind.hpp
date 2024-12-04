#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename Container>
typename Container::iterator	easyfind(Container& numbers, int n) {
	return std::find(numbers.begin(), numbers.end(), n);
}

#endif
