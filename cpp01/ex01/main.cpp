#include "Zombie.hpp"

int	main(void) {
	int	N = 6;
	std::string name = "Bob";
	Zombie *zombies = zombieHorde(N, name);
	std::cout << N << " zombies " << name << " were created." << std::endl;
	for (int i = 0; i < N; ++i)
		zombies[i].announce();	
	delete [] zombies;
	return 0;
}
