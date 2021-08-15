#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	const int count = 5;

	Animal *animal[count];

	for (int i = 0; i < count; ++i) {
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < count; ++i) {
		delete animal[i];
		std::cout << std::endl;
	}

	Animal animal1;
}
