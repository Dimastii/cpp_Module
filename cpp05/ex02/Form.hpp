#ifndef CPP_F_HPP
#define CPP_F_HPP

class Bureaucrat;

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
    int             getGradeToExec();
    bool 			getSigned();
    std::string     getName();
    void            beSigned(Bureaucrat b);

    virtual void execute(Bureaucrat &executor) = 0;

    class GradeTooHighException : public std::exception {
    public:
    	virtual const char *what() const throw() {return ("Grade too high!");}
    };
    class NotSignedException : public std::exception {
    public:
    	virtual const char *what() const throw() {return ("Form not signed");}
    };
    class GradeTooLowException : public std::exception {
    public:
    	virtual const char *what() const throw() {return ("Grade too low!");}
    };
    class ExecuteException : public std::exception {
    public:
    	virtual const char *what() const throw() {return ("Not Enough grade to execute!");}
    };
};

std::ostream& operator<< (std::ostream& out, Form &b);

#endif