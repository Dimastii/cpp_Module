	//
// Created by 111 on 06.06.2021.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() {
	return type;
}

void Weapon::setType(std::string type){
	this->type = type;
}

Weapon::Weapon(std::string type):type(type) {}

Weapon::Weapon() {}
