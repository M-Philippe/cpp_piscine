#include "RobotomyRequestForm.hpp"

			/*			Canonical Form		*/

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("RobotomyRequestForm", 72, 45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& org)
: Form("RobotomyRequestForm", 72, 45) {
	_target = org._target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& org) {
	_target = org._target;
	setIsSigned(org.getIsSigned());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

			/*				***				*/

std::string	RobotomyRequestForm::getTarget() {
	return (_target);
}

void		RobotomyRequestForm::action() {
	std::cout << "* DRILL SOUND * ";
	std::cout << getTarget() << " has been robotomized" << std::endl;
}
