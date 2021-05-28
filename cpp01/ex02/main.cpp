//
// Created by Cloyster Veeta on 5/27/21.
//

#include "ZombieEvent.h"

#include "Zombie.h"

int main()
{
    ZombieEvent ze;
    Zombie *z;

    std::cout << "Castom ZoMbiE : ";
    ze.setZombieType("Drain ju-ju");
    z = ze.newZombie("Brain");
    z->announce();
    delete z;

    std::cout << "Random ZoMbiE : ";
    ze.setZombieType(ze.randomType());
    z = ze.newZombie(ze.randomChump());
    z->randAnnounce();
};