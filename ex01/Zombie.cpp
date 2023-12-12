#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string zombieName) {
	this->name = zombieName;
}

Zombie::Zombie() {
	this->name = "";
}

Zombie::~Zombie() {
	std::cout << this->name << " deleted" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}