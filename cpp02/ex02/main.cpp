#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(42.40f);

	bool q = a >= c;

	//std::cout << q << "|";

	return 0;
}