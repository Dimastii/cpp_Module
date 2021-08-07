//
// Created by Cloyster Veeta on 8/7/21.
//

#ifndef CPP_MODULE_SCAVTRAP_HPP
#define CPP_MODULE_SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};


#endif //CPP_MODULE_SCAVTRAP_HPP
