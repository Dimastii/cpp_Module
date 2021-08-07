#include "ClapTrap.h"


ClapTrap::ClapTrap(std::string name):name(name)
{
	hp = 10;
	ep = 10;
	dmg = 0;
	std::cout << "ClapTrap Create " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Delete " << std::endl;
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " + this->name + " attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "ClapTrap " + this->name + " take " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	std::cout << "ClapTrap " + this->name + " Repaired on " << amount << std::endl;
}
