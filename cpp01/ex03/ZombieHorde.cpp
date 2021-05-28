//
// Created by Cloyster Veeta on 5/28/21.
//

#include "ZombieHorde.h"

ZombieHorde::ZombieHorde(int n):strength(n){
	z = new Zombie*[n];
	for (int i = 0; i < n; ++i) {
		ze.setZombieType(ze.randomType());
		z[i] = ze.newZombie(ze.randomChump());
	}
}

void ZombieHorde::announce() {
	for (int i = 0; i < strength; ++i)
		z[i]->randAnnounce();
}

ZombieHorde::~ZombieHorde() {
	delete[] z;
	std::cout << "Zombies dead...... again........" << std::endl;
}

