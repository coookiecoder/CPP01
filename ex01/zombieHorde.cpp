#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	for (int NbZombie = 0; NbZombie < N; NbZombie++)
	{
		Horde[NbZombie] = Zombie(name);
    }
	return Horde;
}