#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	//Form*	f1 = new PresidentialPardonForm("Jean");
	//Form*	f1 = new RobotomyRequestForm("Jean");
	Intern random;
	Form* rff = NULL;
	Bureaucrat bob("bob", 1);
	rff = random.makeForm("PresidentialPardonForm", "Jean");
	if (rff)
	{
		rff->beSigned(bob);
		bob.executeForm(*rff);
	}
	delete rff;
	rff = random.makeForm("ShrubberyCreationForm", "Jean");
	if (rff)
	{
		rff->beSigned(bob);
		bob.executeForm(*rff);
	}
	delete rff;
	rff = random.makeForm("RobotomyRequestForm", "Jean");
	if (rff)
	{
		rff->beSigned(bob);
		bob.executeForm(*rff);
	}
	delete rff;
	rff = random.makeForm("RaNdOm", "Jean");
	if (rff)
	{
		rff->beSigned(bob);
		bob.executeForm(*rff);
	}
	delete rff;
	/*Bureaucrat nul("nul", 150);
	bob.executeForm(*f1);
	f1->beSigned(bob);
	try {
		f1->execute(nul);
	}
	catch (std::exception& e) {
		std::cout << "Nul ne peux pas" << std::endl;
	}
	try {
		f1->execute(bob);
	}
	catch (std::exception& e) {
		std::cout << "Bob ne peux pas" << std::endl;
	}
	nul.executeForm(*f1);
	delete f1;*/
}