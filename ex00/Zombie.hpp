#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string zombieName);
		~Zombie();
		void announce();
};

void randomChump(std::string name);

Zombie* newZombie(std::string name);

#endif