#include "iter.hpp"

int	main(void) {
	std::string	array[] = {"one", "two", "tree"};

	iter(array, 3, print);

	const char* array2[] = {"one", "two", "tree"};
	
	iter(array2, 3, print);

	return 0;
}
