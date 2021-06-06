//
// Created by 111 on 06.06.2021.
//

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &club) {
	this->club = &club;
}

HumanB::HumanB(std::string name):name(name){}

void HumanB::attack() {
	std::cout << name << " attacks with his " << club->getType() << std::endl;
}
