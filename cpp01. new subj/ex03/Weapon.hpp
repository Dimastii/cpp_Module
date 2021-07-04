//
// Created by 111 on 06.06.2021.
//

#ifndef CPP0_WEAPON_HPP
#define CPP0_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string	type;
public:
						Weapon();
						Weapon(std::string type);
	const std::string	&getType();
	void				setType(std::string	type);
};


#endif //CPP0_WEAPON_HPP
