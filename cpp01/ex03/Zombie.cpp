//
// Created by Cloyster Veeta on 5/27/21.
//

#include "Zombie.h"

Zombie::Zombie(std::string name, std::string type):type(type),name(name){}

void Zombie::announce() {
    std::cout << "<" + name + ">" << "(" + type + ")" << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::randAnnounce() {
    std::string pool[10] = {"Braiiiiiiinnnssss...",
						   	"Tomete kudasai!",
						   	"Vstan` mid and stoi ... freshman!",
						   	"My stomach rumbles",
							"Death marches!",
							"Mmmmuuuuooh ...",
							"Heh heh heh heh ha ha ha ha ha ha ha ha ha!",
							"My tomb is sundered",
							"The dead hunger",
							"Bring out the dead",

    };
	std::cout << "<" + name + ">" << "(" + type + ") " << pool[std::rand() % 10] << std::endl;
}


