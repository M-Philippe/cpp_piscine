#include "PresidentialPardonForm.hpp"

			/*			Canonical Form		*/

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: Form("PresidentialPardonForm", 25, 5) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& org)
: Form("PresidentialPardonForm", 25, 5) {
	_target = org._target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& org) {
	_target = org._target;
	setIsSigned(org.getIsSigned());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

			/*				***				*/

std::string	PresidentialPardonForm::getTarget() {
	return (_target);
}

void		PresidentialPardonForm::action() {
	std::cout << getTarget() << " has been forgived by Zafod Beeblebrox" << std::endl;
}
