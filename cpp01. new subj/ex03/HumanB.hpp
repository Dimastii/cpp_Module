//
// Created by 111 on 06.06.2021.
//

#ifndef CPP0_HUMANB_HPP
#define CPP0_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon *club;
	std::string name;
public:
	void	setWeapon(Weapon &club);
	void	attack();
			HumanB(std::string name);
};


#endif //CPP0_HUMANB_HPP
