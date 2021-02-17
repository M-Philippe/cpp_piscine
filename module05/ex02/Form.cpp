#include "Form.hpp"

/*
**				Canonical Form
*/

Form::Form(int signGrad, int executionGrad)
	: _signGrad(signGrad), _executionGrad(executionGrad) {}

Form::Form(const std::string& name, int signGrad, int executionGrad)
: _name(name), _signGrad(signGrad), _executionGrad(executionGrad), _isSigned(false) {
	if (signGrad <= 0 || executionGrad <= 0)
		throw Form::GradeTooLowException();
	if (signGrad > 150 || executionGrad > 150)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& org)
:_name(org._name), _signGrad(org._signGrad), _executionGrad(org._executionGrad), _isSigned(org._isSigned) {}

Form&	Form::operator=(const Form& org) {
	_isSigned = org._isSigned;
	return (*this);
}

Form::~Form() {}

/*				***		*/

std::string		Form::getName() const { return (_name); }

bool			Form::getIsSigned() const { return (_isSigned); }

int				Form::getSignGrad() const { return (_signGrad); }

int				Form::getExecutionGrad() const { return (_executionGrad); }

void			Form::beSigned(const Bureaucrat& br) {
	if (_signGrad < br.getGrade()) {
		br.signForm(getName(), "grade is too low", false);
		throw Form::GradeTooLowException();
	}
	_isSigned = true;
	br.signForm(getName(), "", true);
}

void			Form::setIsSigned(bool ipt) {
	_isSigned = ipt;
}

void			Form::execute(Bureaucrat const& executor) const {
	if (!getIsSigned())
		throw FormNotSigned();
	else if (executor.getGrade() > getExecutionGrad())
		throw GradeTooLowException();
	action();
}

std::ostream&	operator<<(std::ostream& os, const Form& f) {
	os << f.getName() << " is a ";
	(f.getIsSigned()) ? os << "signed" : os << "non-signed";
	os << " form. [signGrad : " << f.getSignGrad() << "]";
	os << ", [executionGrad : " << f.getExecutionGrad() << "]" << std::endl;
	return (os);
}