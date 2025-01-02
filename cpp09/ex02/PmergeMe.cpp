#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::printVector(std::vector<unsigned int> vec) const {
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::printList(std::list<unsigned int> lst) const {
	for (std::list<unsigned int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::sortVector(std::vector<unsigned int>& vec) const {
	int	n = vec.size();

	std::vector<std::vector<unsigned int> >	pairs;
	for (int i = 0; i < n; i += 2) {
		if (i + 1 < n) {
			std::vector<unsigned int>	pair(2);
			if (vec[i] < vec[i + 1]) {
				pair[0] = vec[i];
				pair[1] = vec[i + 1];
			} else {
				pair[0] = vec[i + 1];
				pair[1] = vec[i];
			}
			pairs.push_back(pair);
		} else {
			std::vector<unsigned int>	pair(1);
			pair[0] = vec[i];
			pairs.push_back(pair);
		}
	}

	while (pairs.size() > 1) {
		std::vector<std::vector<unsigned int> > new_pairs;
		for (size_t i = 0; i < pairs.size(); i += 2) {
			if (i + 1 < pairs.size()) {
				new_pairs.push_back(mergeVector(pairs[i], pairs[i + 1]));
			} else {
				new_pairs.push_back(pairs[i]);
			}
		}
		pairs = new_pairs;
	}

	vec.clear();
	for (size_t i = 0; i < pairs[0].size(); ++i) {
		vec.push_back(pairs[0][i]);
	}
}

void	PmergeMe::sortList(std::list<unsigned int>& lst) const {
	int n = lst.size();

	std::list<std::list<unsigned int> > pairs;
	std::list<unsigned int>::iterator it = lst.begin();
	for (int i = 0; i < n; i += 2) {
        	std::list<unsigned int>::iterator next_it = it;
		next_it++;
		if (next_it != lst.end()) {
			std::list<unsigned int> pair;
			if (*it < *next_it) {
				pair.push_back(*it);
				pair.push_back(*next_it);
			} else {
				pair.push_back(*next_it);
				pair.push_back(*it);
			}
			pairs.push_back(pair);
			it++;
		} else {
			std::list<unsigned int> pair;
			pair.push_back(*it);
			pairs.push_back(pair);
			break;
		}
        	it++;
	}

	while (pairs.size() > 1) {
		std::list<std::list<unsigned int> > new_pairs;
		std::list<std::list<unsigned int> >::iterator it = pairs.begin();
		for (; it != pairs.end(); ++it) {
			std::list<std::list<unsigned int> >::iterator next_it = it;
			next_it++;
			if (next_it != pairs.end()) {
				new_pairs.push_back(mergeList(*it, *next_it));
				it++;
			} else {
				new_pairs.push_back(*it);
			}
		}
		pairs = new_pairs;
	}

	lst.clear();
	std::list<unsigned int>::iterator it_result = pairs.front().begin();
	for (; it_result != pairs.front().end(); ++it_result)
		lst.push_back(*it_result);
}

std::vector<unsigned int>       PmergeMe::mergeVector(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right) const {
	std::vector<unsigned int>	result;
	size_t i = 0, j = 0;

	while (i < left.size() && j < right.size()) {
		if (left[i] < right[j]) {
			result.push_back(left[i]);
			i++;
		} else {
			result.push_back(right[j]);
			j++;
		}
	}

	while (i < left.size()) {
		result.push_back(left[i]);
		i++;
	}
	while (j < right.size()) {
		result.push_back(right[j]);
		j++;
	}
	return result;
}

std::list<unsigned int>		PmergeMe::mergeList(const std::list<unsigned int>& left, const std::list<unsigned int>& right) const {
	std::list<unsigned int>			result;
	std::list<unsigned int>::const_iterator	it1 = left.begin();
	std::list<unsigned int>::const_iterator	it2 = right.begin();

	while (it1 != left.end() && it2 != right.end()) {
		if (*it1 < *it2) {
			result.push_back(*it1);
			it1++;
		} else {
			result.push_back(*it2);
			it2++;
        	}
	}

	while (it1 != left.end()) {
		result.push_back(*it1);
		it1++;
	}

	while (it2 != right.end()) {
		result.push_back(*it2);
		it2++;
	}
	return result;	
}
