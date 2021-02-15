#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& org);
		Bureaucrat&	operator=(const Bureaucrat& org);
		~Bureaucrat();
		Bureaucrat	operator++(int);
		Bureaucrat	operator--(int);
		std::string		getName() const;
		int				getGrade() const;

		class GradeTooHighException : public std::exception {};
		class GradeTooLowException : public std::exception {};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ipt);