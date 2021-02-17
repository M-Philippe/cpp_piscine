#pragma once

#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
		char*			generateFileName();
	public:
		/*		CF		*/	
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& org);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& org);
		virtual ~ShrubberyCreationForm();
		std::string		getTarget();
		void			action();
};