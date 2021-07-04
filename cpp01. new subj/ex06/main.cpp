//
// Created by Cloyster Veeta on 5/29/21.
//

#include "Karen.hpp"


int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2) {
		std::cout << "argv error" << std::endl;
		return 1;
	}
	karen.complain(argv[1]);
	return 0;
};