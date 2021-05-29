//
// Created by Cloyster Veeta on 5/29/21.
//

#include "Human.h"

Brain &Human::getBrain() {
	return brain;
}

Brain * Human::identify() {
	return brain.identify();
}

Human::Human() {}
