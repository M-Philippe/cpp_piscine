#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string		_target;
	public:
		/*		CF		*/	
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& org);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& org);
		virtual ~PresidentialPardonForm();
		std::string		getTarget() const;
		void			action() const;
};