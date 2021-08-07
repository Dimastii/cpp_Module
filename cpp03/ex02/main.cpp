#include <iostream>
#include "FragTrap.hpp"

int main(void) {
	FragTrap trap("Igor");

	trap.attack("PUDGE");
	trap.beRepaired(10);
	trap.takeDamage(10);
	trap.highFivesGuys();
}