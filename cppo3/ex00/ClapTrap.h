#pragma once
#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hp = 10;
	int ep = 10;
	int dmg = 0;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};