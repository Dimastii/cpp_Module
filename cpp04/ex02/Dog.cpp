//
// Created by Cloyster Veeta on 8/15/21.
//

#include "Dog.hpp"

Dog::Dog() {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog here" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog go away" << std::endl;
	delete brain;
}

void Dog::makeSound()const {
	std::cout << "Gaf Gaf Gaf...May?.. Rrrrrrrrraf!" << std::endl;
}