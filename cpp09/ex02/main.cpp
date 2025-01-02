#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	PmergeMe			merge;
	std::vector<unsigned int>	vec;
	std::list<unsigned int>		lst;
	double				timerVec;
	double				timerLst;
	
	if (ac < 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	for (int i = 1; i < ac; i++) {
		int	n = std::atoi(av[i]);
		if (n < 0) {
			std::cerr << "Error" << std::endl;
			return 1;
		}
		vec.push_back(static_cast<unsigned int>(n));
		lst.push_back(static_cast<unsigned int>(n));
	}

	std::cout << "[VECTOR]" << std::endl;
	std::cout << "Before: "; merge.printVector(vec);
	clock_t start = clock();
	merge.sortVector(vec);
	timerVec = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << "After: "; merge.printVector(vec);
	std::cout << "Time to process a range of 5 elements with std::vector : "
		<< timerVec << " us" << std::endl << std::endl;

	std::cout << "[LIST]" << std::endl;
	std::cout << "Before: "; merge.printList(lst);
	start = clock();
	merge.sortList(lst);
	timerLst = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << "After: "; merge.printList(lst);
	std::cout << "Time to process a range of 5 elements with std::list : "
		<< timerLst << " us" << std::endl;

	return 0;
}
