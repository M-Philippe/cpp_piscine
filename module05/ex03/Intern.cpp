#include "Intern.hpp"

/*					Canonical Form			*/

Intern::Intern() {}

Intern::Intern(const Intern& org) {*this = org;}

Intern& Intern::operator=(const Intern& org) {
	(void)org;
	return (*this);
}

Intern::~Intern() {}

/*						***					*/

Form*		Intern::createPPF(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

Form*		Intern::createSCF(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

Form*		Intern::createRRF(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makeForm(const std::string& form, const std::string& target) {
	typedef Form* (Intern::*fct_ptr) (const std::string& type);
	std::string	arrName[] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	fct_ptr arrFct[] = {&Intern::createPPF, &Intern::createSCF, &Intern::createRRF};
	for (int i = 0; i <= 2; i++) {
		if (form == arrName[i])
			return ((this->*arrFct[i])(target));
	}
	return (NULL);
}

/*	if (form == "PresidentialPardonForm")
		ret = new PresidentialPardonForm(target);
	else if (form == "ShrubberyCreationForm")
		ret = new ShrubberyCreationForm(target);
	else if (form == "RobotomyRequestForm")
		ret = new RobotomyRequestForm(target);*/