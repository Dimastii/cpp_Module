#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>

class Form;

#include "Form.hpp"

class Bureaucrat
{
private:
    std::string     name;
    int             grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();

    void            decrement();
    void            increment();

    int             getGrade();
    std::string     getName();

    void 			signForm(Form &form);
    void 			executeForm(Form &form);

    class GradeToLowException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade too low!"); }
    };

    class GradeToHightException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade too high!"); }
    };
};

std::ostream& operator<< (std::ostream& out,  Bureaucrat b);

#endif