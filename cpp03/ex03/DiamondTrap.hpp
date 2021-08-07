//
// Created by Cloyster Veeta on 8/7/21.
//

#ifndef CPP_MODULE_DIAMONDTRAP_HPP
#define CPP_MODULE_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap,  public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	void highFivesGuys(void);
	void whoAmI ();
};


#endif //CPP_MODULE_DIAMONDTRAP_HPP
