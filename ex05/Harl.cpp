#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {
	this->Function[0] = &Harl::debug;
	this->Function[1] = &Harl::info;
	this->Function[2] = &Harl::warning;
	this->Function[3] = &Harl::error;
}

Harl::~Harl() {

}

void Harl::complain(std::string level) {
	std::string reference[4] = {"DEBUG\0","INFO\0","WARNING\0","ERROR\0"};

	for (int cursor = 0; cursor < 4; cursor++)
		if (level == reference[cursor])
			(this->*Function[cursor])();
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;	
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}