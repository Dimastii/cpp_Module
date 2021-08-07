#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap trap("Igor");

	trap.attack("PUDGE");
	trap.beRepaired(10);
	trap.takeDamage(10);
	trap.guardGate();
}