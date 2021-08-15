//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string called_ideas[100];
public:
	Brain(){std::cout << "Brain create"<<std::endl;};
	~Brain(){std::cout << "The brain went after the animal"<<std::endl;};
};


#endif //CPP04_BRAIN_HPP
