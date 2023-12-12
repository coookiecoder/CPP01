#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::Weapon(void) {
	this->type = "";
}

Weapon::~Weapon(void) {
	
}

const std::string &Weapon::getType(void) {
	const std::string &ref = this->type;
	return (ref);
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}

bool Weapon::exist(void) {
	if (this->type.empty())
		return (false);
	return (true);
}