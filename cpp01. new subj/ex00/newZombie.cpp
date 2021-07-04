//
// Created by Cloyster Veeta on 7/3/21.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name_)
{
	return (new Zombie(name_));
}