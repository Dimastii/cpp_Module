//
// Created by 111 on 06.06.2021.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club):name(name), club(club) {}

void HumanA::attack() {
	std::cout << name << " attacks with his " << club.getType() << std::endl;
}
