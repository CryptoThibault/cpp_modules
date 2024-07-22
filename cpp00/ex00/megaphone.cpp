#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; av[i]; i++) {
		for (int j = 1; av[i][j]; j++)
			av[i][j] = toupper(av[i][j]);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
