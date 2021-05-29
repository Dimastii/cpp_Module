//
// Created by Cloyster Veeta on 5/29/21.
//

#include "Human.h"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
};