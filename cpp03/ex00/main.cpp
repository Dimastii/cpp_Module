#include <iostream>
#include "ClapTrap.h"

int main(void) {
	ClapTrap trap("Igor");

	trap.attack("Lol");
	trap.beRepaired(10);
	trap.takeDamage(10);
}