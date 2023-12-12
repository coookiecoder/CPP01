#include "Zombie.hpp"

int	main(void)
{
	Zombie *Buffer0 = newZombie("Zombie 0");
	Zombie *Buffer1 = newZombie("Zombie 1");
	Zombie *Buffer2 = newZombie("Zombie 2");
	Zombie *Buffer3 = newZombie("Zombie 3");
	Buffer0->announce();
	Buffer1->announce();
	Buffer2->announce();
	Buffer3->announce();
	delete Buffer0;
	delete Buffer1;
	delete Buffer2;
	delete Buffer3;

	randomChump("Zombie 4");
	randomChump("Zombie 5");
	randomChump("Zombie 6");
	randomChump("Zombie 7");

	Zombie *Buffer4 = newZombie("");
	Buffer4->announce();
	delete Buffer4;

	randomChump("");
}