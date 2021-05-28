//
// Created by 111 on 23.05.2021.
//
#include <iostream>     // std::cin, std::cout
#include <iomanip>      // std::get_time
#include <string>
#include "Contact.h"
#include "Book.h"


int main ()
{
	Book            bk;
	std::string     command;

	while (!std::cin.eof())
	{
		std::cout << "Enter command" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			bk.addContact();
		if (command == "SEARCH")
			bk.searchContact();
		if (command == "EXIT")
			return 0;
	}

	return 0;
}
