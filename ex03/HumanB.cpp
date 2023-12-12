#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(NULL) {
	this->name = name;
}

HumanB::~HumanB() {

}

void HumanB::attack() {
	if (this->weapon && this->weapon->exist())
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}