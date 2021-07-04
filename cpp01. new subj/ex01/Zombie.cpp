//
// Created by Cloyster Veeta on 7/3/21.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name_):name(name_) {}

Zombie::Zombie() {}

void Zombie::annonce() {
	std::cout << "<" + this->name + ">" << "BraiiiiiiinnnzzzZ\n";
}

void Zombie::setName(std::string name_){
	this->name = name_;
}

Zombie::~Zombie() {
	std::cout << "<" + this->name + ">" << "Dead...\n";
}