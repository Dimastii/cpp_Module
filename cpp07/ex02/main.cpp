#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5
int main()
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	for (int i = 0; i < MAX_VAL; ++i){
		std::cout << numbers[i] << " ";
	}
	std::cout << "numbers ";
	std::cout << std::endl;
//	SCOPE
	{
		Array<int> tmp = numbers;
		for (int i = 0; i < MAX_VAL; ++i){
			std::cout << tmp[i] << " ";
			tmp[i] = 1;
		}
		std::cout << "tmp ";
		std::cout << std::endl;
		Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; ++i){
			std::cout << test[i] << " ";
		}
		std::cout << "test ";
		std::cout << std::endl;
		for (int i = 0; i < MAX_VAL; ++i){
			std::cout << numbers[i] << " ";
		}
		std::cout << "numbers ";
		std::cout << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete [] mirror;//
	return 0;
}