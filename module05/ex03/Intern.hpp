#pragma once

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define createForm(NAME) new NAME(target)
#define tstForm(NAME) new NAME::NAME(target)

class Intern
{
	public:
		/*		CF	*/
		Intern();
		Intern(const Intern& org);
		Intern&	operator=(const Intern& org);
		~Intern();
		Form*		createPPF(const std::string& target);
		Form*		createSCF(const std::string& target);
		Form*		createRRF(const std::string& target);
		Form*	makeForm(const std::string& form, const std::string& target);
};	