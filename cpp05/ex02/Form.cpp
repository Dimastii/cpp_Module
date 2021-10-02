#include "Form.hpp"

Form::Form(std::string name, int grade, int grade_to_execute): is_signed(false)
{
    if (grade > 150) {
        throw Form::GradeTooLowException();
    }
    else if (grade < 1) {
    	throw Form::GradeTooHighException();
    }
    this->grade = grade;
    this->name = name;
    this->grade_to_execute = grade_to_execute;
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
	return 0;
}

std::string Form::getName()
{
    return name;
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= grade)
    {
        is_signed = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

bool Form::getSigned()
{
	return is_signed;
}

int Form::getGradeToExec()
{
	return grade_to_execute;
}

std::ostream& operator<<(std::ostream& out, Form &b)
{
	std::string sign;
	if (b.getSigned())
		sign = "Signed";
	else
		sign = "NOT Signed";

	out << b.getName() << ", grade : " << b.getGrade() << " " + sign << std::endl;
	return out;
}

void Form::execute(Bureaucrat &executor){
	if (!getSigned())
		throw (NotSignedException());
	if (executor.getGrade() > grade_to_execute)
		throw (ExecuteException());
}