//
// Created by Cloyster Veeta on 7/3/21.
//

#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>
class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name_);
	Zombie();
	~Zombie();
	void annonce();
	void setName(std::string name_);
};


#endif //CPP01_ZOMBIE_HPP
