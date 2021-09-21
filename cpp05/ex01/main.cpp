#pragma once
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat	bureaucrat_2("Loh", 150);
        Form* a = new Form("NDFL", 100);
        a->beSigned(bureaucrat_2);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}