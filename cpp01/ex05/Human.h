	//
// Created by Cloyster Veeta on 5/29/21.
//

#ifndef CPP01_HUMAN_H
#define CPP01_HUMAN_H
#include "Brain.h"

class Human {
private:
	Brain brain;
public:
	Human();
	Brain & getBrain();
	Brain * identify();
};


#endif //CPP01_HUMAN_H
