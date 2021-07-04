//
// Created by Cloyster Veeta on 7/3/21.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump( std::string name );

int main()
{
	Zombie* z;
	z = newZombie("Doge");
	z->annonce();

	delete z;

	randomChump("Fear");
}