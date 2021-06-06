//
// Created by Cloyster Veeta on 5/29/21.
//

#include "Human.h"

int main()
{
	Human bob;
	std::cout << "0x" << bob.identify() << std::endl;
	std::cout << "0x" << bob.getBrain().identify() << std::endl;
};