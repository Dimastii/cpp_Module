//
// Created by Cloyster Veeta on 8/15/21.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog here" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog go away" << std::endl;
}

void Dog::makeSound()const {
	std::cout << "Gaf Gaf Gaf...May?.. Rrrrrrrrraf!" << std::endl;
}