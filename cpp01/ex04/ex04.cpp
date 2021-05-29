//
// Created by Cloyster Veeta on 5/29/21.
//

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ref = &str;
	std::string &str_r = str;

	std::cout << "STRING --> |" << str << "\nPOINTER --> |" << *str_ref << "\nLINK -->|" << str_r << std::endl;
}