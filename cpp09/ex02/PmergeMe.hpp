#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <iterator>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe&	operator=(const PmergeMe& other);
	~PmergeMe();
	void	printVector(std::vector<unsigned int> vec) const;
	void	printList(std::list<unsigned int> lst) const;
	void	sortVector(std::vector<unsigned int>& vec) const;
	void	sortList(std::list<unsigned int>& lst) const;
	std::vector<unsigned int>	mergeVector(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right) const;
	std::list<unsigned int>		mergeList(const std::list<unsigned int>& left, const std::list<unsigned int>& right) const;
};

#endif

