#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5),target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {}

void PresidentialPardonForm::execute(Bureaucrat &executor){
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}