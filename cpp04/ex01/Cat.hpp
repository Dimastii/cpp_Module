//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
protected:
	std::string type;
private:
	Brain *brain;
public:
	Cat();
	~Cat();

	void makeSound()const;
};

class WrongCat : public WrongAnimal{
};

#endif //CPP04_CAT_HPP
