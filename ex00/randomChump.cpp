#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie Buffer(name);
	Buffer.announce();
}