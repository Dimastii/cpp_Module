//
// Created by Cloyster Veeta on 8/7/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	hp = 100;
	ep = 50;
	dmg = 20;
	std::cout << "ScavTrap Create " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Delete " << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " + this->name + " attack " << target << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "ScavTrap " + this->name + " take " << amount << " damage" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	std::cout << "ScavTrap " + this->name + " Repaired on " << amount << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
