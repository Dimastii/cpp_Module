//
// Created by Cloyster Veeta on 8/7/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	hp = 100;
	ep = 100;
	dmg = 30;
	std::cout << "FragTrap Create " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Delete " << std::endl;
}

void FragTrap::attack(std::string const& target)
{
	std::cout << "FragTrap " + this->name + " attack " << target << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "FragTrap " + this->name + " take " << amount << " damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	std::cout << "FragTrap " + this->name + " Repaired on " << amount << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap say <GG DUDE>" << std::endl;
}