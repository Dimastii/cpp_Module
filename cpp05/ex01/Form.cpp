#pragma once

#include "Form.hpp"


std::ostream& operator<<(std::ostream& out, Form b)
{
    out << b.getName() << ", grade : " << b.getGrade() << std::endl;
    return out;
}

Form::Form(std::string name, int grade)
{
    if (grade > 150) {
        throw Form::GradeToLowException();
    }
    else if (grade < 1) {
        throw Form::GradeToHightException();
    }
    this->grade = grade;
    this->name = name;
}

Form::~Form()
{
}

int Form::getGrade()
{
    if (grade)
    {
        return grade;
    }
}

std::string Form::getName()
{
    return name;
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() >= grade)
    {
        is_signed = true;
    }
    else
    {
        throw Form::GradeToLowException();
    }
}
