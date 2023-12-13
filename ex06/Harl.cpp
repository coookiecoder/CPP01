#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(std::string level) {
	this->level = level;
}

Harl::~Harl() {

}

void Harl::complain(void) {
	std::string reference[4] = {"DEBUG\0","INFO\0","WARNING\0","ERROR\0"};

	for (int cursor = 0; cursor < 4; cursor++)
		if (this->level == reference[cursor])
		{
			switch (cursor) {
				case 0:
					debug();
				case 1:
					info();
				case 2:
					warning();
				case 3:
					error();
			}
			return ;
		}
	dontCare();
}

void Harl::dontCare(void) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;	
}

void Harl::info(void) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}