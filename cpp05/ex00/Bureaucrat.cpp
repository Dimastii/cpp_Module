#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade > 150){
        throw GradeToLowException();
    } else if (grade < 1){
        throw GradeToHightException();
    }
    this->grade = grade;
    this->name = name;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::increment()
{
    grade--;
    if (grade < 1)
    {
        throw GradeToHightException();
    }
}

void Bureaucrat::decrement()
{
    grade++;
    if (grade > 150)
    {
        throw GradeToLowException();
    }
}

int Bureaucrat::getGrade()
{
    if (grade)
    {
        return grade;
    }
	return 0;
}

std::string Bureaucrat::getName()
{
    return name;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat b)
{
    out << b.getName() << ", grade : " << b.getGrade() << std::endl;
    return out;
}
