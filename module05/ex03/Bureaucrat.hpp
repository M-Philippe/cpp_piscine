#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat();
	public:
		/*		Canonical Form		*/
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& org);
		Bureaucrat&	operator=(const Bureaucrat& org);
		~Bureaucrat();

		void			promote();
		void			downgrade();
		std::string		getName() const;
		int				getGrade() const;
		void			signForm(const std::string &formName, const std::string& reason, bool success) const;
		void			executeForm(Form const& form);

		class GradeTooHighException : public std::exception {};
		class GradeTooLowException : public std::exception {};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ipt);