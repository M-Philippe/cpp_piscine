#include "Bureaucrat.hpp"

/*			
**			Canonical Form
*/

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& org): _name(org._name), _grade(org._grade) {
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& org) {
	_grade = org._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

/*
**			***
*/

void			Bureaucrat::promote() {
	if (_grade - 1 > 0)
		_grade--;
}

void			Bureaucrat::downgrade() {
	if (_grade + 1 <= 150)
		_grade++;
}

std::string		Bureaucrat::getName() const {
	return (_name);
}

int				Bureaucrat::getGrade() const {
	return (_grade);
}

void			Bureaucrat::signForm(const std::string &formName, const std::string& reason, bool success) const {
	if (success) {
		std::cout << _name << " signs " << formName << std::endl;
	}
	else
		std::cout << _name << " can't sign " << formName << " because " << reason << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ipt) {
	os << ipt.getName() << ", bureaucrat grade " << ipt.getGrade() << "." << std::endl;
	return (os);
}