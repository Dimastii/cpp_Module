//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog();
	void makeSound()const;
};


#endif //CPP04_DOG_HPP
