//
// Created by Cloyster Veeta on 5/28/21.
//

#ifndef CPP01_ZOMBIEHORDE_H
#define CPP01_ZOMBIEHORDE_H
#include "Zombie.h"
#include "ZombieEvent.h"

class ZombieHorde {
private:
	Zombie		**z;
	ZombieEvent	ze;
	int			strength;
public:
	ZombieHorde(int n);
	void announce();
	~ZombieHorde();
};


#endif //CPP01_ZOMBIEHORDE_H
