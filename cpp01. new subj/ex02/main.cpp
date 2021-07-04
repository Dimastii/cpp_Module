//
// Created by Cloyster Veeta on 5/29/21.
//

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\nPOINTER adr --> |" << stringPTR << "\nLINK ard -->\t|" << &stringREF << std::endl;

	std::cout << "STRING --> \t|" << str << "\nPOINTER --> \t|" << *stringPTR << "\nLINK --> \t|" << stringREF << std::endl;
}