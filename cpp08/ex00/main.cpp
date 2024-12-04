#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void) {
	std::vector<int>	vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	easyfind(vec, 20);
	easyfind(vec, 40);

	std::list<int>		lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	easyfind(lst, 20);
	easyfind(lst, 40);

	return 0;
}
