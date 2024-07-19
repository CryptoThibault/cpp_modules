#include <iostream>
#include <cctype>
using namespace std;

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			av[i][j] = toupper(av[i][j]);
		cout << av[i];
	}
	cout << endl;
	return (0);
}
