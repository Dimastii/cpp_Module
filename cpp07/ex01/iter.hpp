#include <iostream>
#include <ctime>

template<typename T>
void	iter(T **array, uint array_length, void (*some_func)(T &))
{
	for (uint i = 0; i < array_length; ++i)
		some_func((*array)[i]);
}

template<typename T>
void	plus(T &number) {number = 64;}

template<typename T>
void	print_int_array(T &num)
{
	std::cout << num << std::endl;
}

void	print_string_array(std::string &str)
{
	std::cout << str << std::endl;
}