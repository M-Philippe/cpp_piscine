#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

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
		virtual ~Form();

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getSignGrad() const;
		int				getExecutionGrad() const;
		void			beSigned(const Bureaucrat& br);
		void			setIsSigned(bool ipt);
		void			execute(Bureaucrat const& executor) const;
		virtual void	action() = 0;

		class	GradeTooLowException : public std::exception {};
		class	GradeTooHighException : public std::exception {};
		class	FormNotSigned : public std::exception {};
};

std::ostream&	operator<<(std::ostream& os, const Form& f);