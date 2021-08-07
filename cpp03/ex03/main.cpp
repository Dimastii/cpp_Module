#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap trap("Igor");



	trap.attack("PUDGE");
	trap.beRepaired(10);
	trap.takeDamage(10);
	trap.highFivesGuys();
	trap.guardGate();
	trap.whoAmI();
}