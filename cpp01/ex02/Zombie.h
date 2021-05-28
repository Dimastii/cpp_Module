//
// Created by Cloyster Veeta on 5/27/21.
//

#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie {
private:
    std::string		type;
    std::string		name;
public:
    Zombie(std::string name, std::string type);
    void			announce();
	void		randAnnounce();
};


#endif //CPP01_ZOMBIE_H
