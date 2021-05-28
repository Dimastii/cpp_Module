//
// Created by Cloyster Veeta on 5/27/21.
//

#ifndef CPP01_ZOMBIEEVENT_H
#define CPP01_ZOMBIEEVENT_H
#include "Zombie.h"

class ZombieEvent {
private:
    std::string	type;
public:
    void    	setZombieType(std::string type);
    Zombie 		*newZombie(std::string name);
    std::string	randomChump();
    std::string	randomType();
};


#endif //CPP01_ZOMBIEEVENT_H
