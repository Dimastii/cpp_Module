//
// Created by Cloyster Veeta on 10/2/21.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	std::string	target;
public:
	explicit ShrubberyCreationForm(const std::string &target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	virtual void execute(Bureaucrat &executor);
};

#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
