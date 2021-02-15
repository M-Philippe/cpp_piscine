#include "Bureaucrat.hpp"

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

Bureaucrat		Bureaucrat::operator++(int) {
	Bureaucrat	tmp(*this);

	if (_grade - 1 > 0)
		_grade--;
	return (tmp);
}

Bureaucrat		Bureaucrat::operator--(int) {
	Bureaucrat	tmp(*this);

	if (_grade + 1 <= 150)
		_grade++;
	return (tmp);
}

std::string		Bureaucrat::getName() const {
	return (_name);
}

int				Bureaucrat::getGrade() const {
	return (_grade);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ipt) {
	os << ipt.getName() << ", bureaucrat grade " << ipt.getGrade() << "." << std::endl;
	return (os);
}