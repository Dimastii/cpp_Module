//
// Created by Cloyster Veeta on 5/27/21.
//

#include "ZombieEvent.h"

#include "Zombie.h"

#include "ZombieHorde.h"
int main()
{
	std::srand(time(0));
	ZombieHorde horde(4);
	horde.announce();
	return 0;
};