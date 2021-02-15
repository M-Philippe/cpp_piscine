#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		std::string		getName() const;
		int				getGrade() const;

		class GradeTooHighException : public std::exception {};
		class GradeTooLowException : public std::exception {};
};
