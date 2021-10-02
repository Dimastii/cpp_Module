//
// Created by Cloyster Veeta on 10/2/21.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string	target;
public:
	explicit PresidentialPardonForm(const std::string &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual void execute(Bureaucrat &executor);
};


#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
