#ifndef CPP_F_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
    std::string     name;
    int             grade;
    bool            is_signed;
    int				grade_to_execute;
public:
	Form(std::string name, int grade, int grade_to_execute);
	~Form();

    int             getGrade();
    bool 			getSigned();
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

std::ostream& operator<< (std::ostream& out, Form &b);

#endif