//
// Created by 111 on 06.06.2021.
//

#ifndef CPP0_HUMANA_HPP
#define CPP0_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon			&club;
	std::string		name;
public:
	void 	attack();
			HumanA(std::string name, Weapon &club);
};


#endif //CPP0_HUMANA_HPP
