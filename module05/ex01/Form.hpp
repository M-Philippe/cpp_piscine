#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string		_name;
		const int				_signGrad;
		const int				_executionGrad;
		bool					_isSigned;
		Form(int signGrad, int executionGrad);
	public:
		/*	CF	*/
		Form(const std::string& name, int signGrad, int executionGrad);
		Form(const Form& org);
		Form& operator=(const Form& org);
		~Form();

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getSignGrad() const;
		int				getExecutionGrad() const;
		void			beSigned(const Bureaucrat& br);

		class	GradeTooLowException : public std::exception {};
		class	GradeTooHighException : public std::exception {};
};

std::ostream&	operator<<(std::ostream& os, const Form& f);