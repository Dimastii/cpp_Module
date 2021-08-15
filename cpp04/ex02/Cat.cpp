//
// Created by Cloyster Veeta on 8/15/21.
//

#include "Cat.hpp"


Cat::Cat() {
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat here" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat go away" << std::endl;
	delete brain;
}

void Cat::makeSound() const{
	std::cout << "May May Gaf...May?" << std::endl;
}
