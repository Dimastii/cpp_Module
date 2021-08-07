#pragma once
#include <iostream>

class ClapTrap {
protected:
	std::string name;
	int hp ;
	int ep ;
	int dmg;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};