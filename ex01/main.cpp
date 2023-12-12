#include "Zombie.hpp"

#define ZOMBIE_NUMBER 10

int	main(void)
{
	Zombie *Horde = zombieHorde(ZOMBIE_NUMBER, "Zombie from zombie horde");
	for (int zombie = 0; zombie < ZOMBIE_NUMBER; zombie++)
	{
		Horde[zombie].announce();
    }
	delete[] Horde;

	Zombie *Horde2 = zombieHorde(0, "Zombie from zombie horde 2");
	delete[] Horde2;
}