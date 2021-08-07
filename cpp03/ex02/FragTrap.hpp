//
// Created by Cloyster Veeta on 8/7/21.
//

#ifndef CPP_MODULE_FRAGTRAP_HPP
#define CPP_MODULE_FRAGTRAP_HPP
#include "ClapTrap.h"

class FragTrap : ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};


#endif //CPP_MODULE_FRAGTRAP_HPP
