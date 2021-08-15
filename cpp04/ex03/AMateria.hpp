//
// Created by Cloyster Veeta on 8/15/21.
//

#ifndef CPP04_AMATERIA_HPP
#define CPP04_AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
protected:
	[...]
public:
	AMateria(std::string const & type);
	[...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP04_AMATERIA_HPP
