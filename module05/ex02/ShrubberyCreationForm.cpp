#include "ShrubberyCreationForm.hpp"

			/*			Canonical Form		*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCreationForm", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& org)
: Form("ShrubberyCreationForm", 145, 137) {
	_target = org._target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& org) {
	_target = org._target;
	setIsSigned(org.getIsSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

			/*				***				*/

std::string		ShrubberyCreationForm::getTarget() const {
	return (_target);
}

char*			ShrubberyCreationForm::generateFileName() const {
	std::string		tmp;
	char			*str;

	tmp = getTarget() + "_shrubbery";
	str = new char[tmp.length() + 1];
	str = strcpy(str, tmp.c_str());
	return (str);
}

void			ShrubberyCreationForm::action() const {
	char*			fileName;
	std::ofstream	file;
	char	treeASCII[] = "      /\\\n     /oo\\\n    /oooo\\\n   /oooooo\\\n  /oooooooo\\\n      ||\n      ||\n";

	fileName = generateFileName();
	file.open(fileName);
	file << treeASCII;
	file << "\n";
	file << treeASCII;
	file.close();
	delete[] fileName;
}
