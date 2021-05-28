//
// Created by Cloyster Veeta on 5/27/21.
//

#include "ZombieEvent.h"
#include "ctime"
void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie(name, type);
    return zombie;
}

std::string ZombieEvent::randomChump() {
    std::string pool[10] = {"Jordan",
                            "Goga",
                            "Piter",
                            "Paider",
                            "Hil",
                            "Tomogoki",
                            "Tanjiro",
                            "Yomotoshi",
                            "Nisan",
                            "Dayjobu",
                            };
    return std::string(pool[std::rand() % 10]);
}

std::string ZombieEvent::randomType() {
    std::string pool[10] = {"Drain ju-ju",
                            "Hippocampus",
                            "Baby Girl",
                            "ABOBA",
                            "Sino4ek",
                            "Asassin",
                            "Dead InSiDe",
                            "ZXC",
                            "SOLO MID",
                            "afk",
    };
    return std::string(pool[std::rand() % 10]);
}