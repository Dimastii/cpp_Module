//
// Created by Cloyster Veeta on 7/3/21.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name );

int main()
{
	const int n = 3;

	Zombie *z;

	z = zombieHorde(n, "Hello");

	for (int i = 0; i < n; ++i) {
		z[i].annonce();
	}

	delete[] z;
}