#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string		_target;
	public:
		/*		CF		*/	
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& org);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& org);
		virtual ~RobotomyRequestForm();
		std::string		getTarget();
		void			action();
};