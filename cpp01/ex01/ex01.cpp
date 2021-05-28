//
// Created by Cloyster Veeta on 5/27/21.
//
#include <iostream>

void memoryLeak()
{
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    std::free(panther);
}