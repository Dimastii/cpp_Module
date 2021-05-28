//
// Created by Cloyster Veeta on 5/27/21.
//

#include "Pony.h"


void Pony::ponyInit() {
    std::cout << "Pony was done\n";
}

void Pony::ponyRun(std::string where) {
    std::cout << "The pony " << type_run << "  and pierces the " << type_obj <<" with his " << type_horn << " horn in " << where << std::endl;
}

Pony::Pony(std::string horn, std::string run, std::string obj):type_horn(horn),type_run(run),type_obj(obj){}

