//
// Created by Cloyster Veeta on 7/4/21.
//

#ifndef CPP01_KAREN_HPP
#define CPP01_KAREN_HPP
#include <iostream>

struct mess
{
	std::string 		type;
	void 				(*func)();
};

class Karen {
private:
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);
public:
	Karen();
	void complain(std::string level);
};


#endif //CPP01_KAREN_HPP
