//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal(std::string type): 	type(type){};
	Animal(){ type = "Animal"; std::cout << "default Animal here" << std::endl;};
	std::string getType() const {return type;};
	void makeSound() const{std::cout <<type +  " make sound. Ok?" << std::endl;};
};


class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal(std::string type): 	type(type){};
	WrongAnimal(){ type = "WrongAnimal"; std::cout << "default WrongAnimal here" << std::endl;};
	std::string getType() const {return type;};
	void makeSound() const{std::cout <<type +  " make sound. Ok?" << std::endl;};
};



#endif //CPP04_ANIMAL_HPP
