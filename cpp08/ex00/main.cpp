#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main(void) {
	std::vector<int>	vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	int	n = 20;
	std::vector<int>::iterator it_vec = easyfind(vec, n);
	if (it_vec != vec.end())
		std::cout << "Found: " << *it_vec << std::endl;
	else
		std::cout << "Not found" << std::endl;
	n = 40;
	it_vec = easyfind(vec, n);
	if (it_vec != vec.end())
		std::cout << "Found: " << *it_vec << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::list<int>	lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	n = 20;
	std::list<int>::iterator it_lst = easyfind(lst, n);
	if (it_lst != lst.end())
		std::cout << "Found: " << *it_lst << std::endl;
	else
		std::cout << "Not found" << std::endl;
	n = 40;
	it_lst = easyfind(lst, n);
	if (it_lst != lst.end())
		std::cout << "Found: " << *it_lst << std::endl;
	else
		std::cout << "Not found" << std::endl;

	return 0;
}
