#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce(void);
	Zombie*	zombieHorde(int N, std::string name);
private:
	std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
