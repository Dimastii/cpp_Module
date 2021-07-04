//
// Created by Cloyster Veeta on 7/4/21.
//

#include "Karen.hpp"

void Karen::debug() {
	std::cout << "debug" << std::endl;
	warning();
}
void Karen::error() {
	std::cout << "error" << std::endl;
}
void Karen::info() {
	std::cout << "info" << std::endl;
	debug();
}
void Karen::warning() {
	std::cout << "warning" << std::endl;
	error();
}
Karen::Karen() {

}
void Karen::complain(std::string level) {
	mess ms[4];

	ms[0].type = "debug";
	ms[0].func = debug;
	ms[1].type = "error";
	ms[1].func = error;
	ms[2].type = "info";
	ms[2].func = info;
	ms[3].type = "warning";
	ms[3].func = warning;

	for (int i = 0; i < 4; ++i) {
		if (!ms[i].type.compare(level))
		{
			ms[i].func();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
