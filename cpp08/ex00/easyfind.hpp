#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename Container>
void	easyfind(Container& numbers, int n) {
	typename Container::iterator 	it = std::find(numbers.begin(), numbers.end(), n);
	
	if (it != numbers.end())
		std::cout << "Found: " << *it << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

#endif
