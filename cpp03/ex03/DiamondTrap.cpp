//
// Created by Cloyster Veeta on 8/7/21.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name) ,FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	dmg = FragTrap::dmg;

	std::cout << "hp " << hp << std::endl;
	std::cout << "ep " << ep << std::endl;
	std::cout << "DiamondTrap Create " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Delete " << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "DiamondTrap " + this->name + " take " << " damage | TOTAL: "<< FragTrap::hp << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	std::cout << "DiamondTrap " + this->name + " Repaired " << amount << " hp | TOTAL: "<< FragTrap::hp << std::endl;
}

void DiamondTrap::highFivesGuys()
{
	std::cout << "DiamondTrap say <GG DUDE>" << std::endl;
}

void DiamondTrap::guardGate()
{
	std::cout << "DiamondTrap have enterred in Gate keeper mode" << std::endl;
}

void DiamondTrap::whoAmI ()
{
	std::cout << "AmI " + name << ", aKa " + ClapTrap::name << std::endl;
}