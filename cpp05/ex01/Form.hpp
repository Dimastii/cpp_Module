#pragma once

#include "Bureaucrat.hpp"

class Form
{
private:
    std::string     name;
    int             grade;
    bool            is_signed = false;
public:
    Form(std::string name, int grade);
    ~Form();

    int             getGrade();
    std::string     getName();
    void            beSigned(Bureaucrat b);

    class GradeToLowException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade too low!"); }
    };

    class GradeToHightException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade too high!"); }
    };
};

std::ostream& operator<< (std::ostream& out, Bureaucrat b);