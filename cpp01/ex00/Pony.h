//
// Created by Cloyster Veeta on 5/27/21.
//

#ifndef CPP01_PONY_H
#define CPP01_PONY_H
#include <iostream>

class Pony {
private:
    std::string     type_horn;
    std::string     type_run;
    std::string     type_obj;
public:
    Pony(std::string horn, std::string run, std::string obj);
    void    ponyRun(std::string where);
    void    ponyInit();
};


#endif //CPP01_PONY_H
