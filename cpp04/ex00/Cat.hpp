//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	~Cat();

	void makeSound()const;
};

class WrongCat : public WrongAnimal{
};

#endif //CPP04_CAT_HPP
