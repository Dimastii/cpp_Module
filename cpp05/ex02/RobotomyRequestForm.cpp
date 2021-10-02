#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &tar) : Form("RobotomyRequestForm", 72, 45),target(tar)  {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy){}

void RobotomyRequestForm::execute(Bureaucrat &executor){
	Form::execute(executor);
	if (rand() % 2)
		std::cout << target << " has failed to be robotomized" << std::endl;
	else
		std::cout << target << " has been successfully robotomized" << std::endl;
}
