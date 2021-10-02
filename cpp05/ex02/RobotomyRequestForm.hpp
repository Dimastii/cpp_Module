

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string	target;
public:
	explicit RobotomyRequestForm(const std::string &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	virtual void execute(Bureaucrat &executor);
};

#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
