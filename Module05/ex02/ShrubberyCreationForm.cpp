/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:24:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 23:59:07 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 37){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): AForm(copy) {
	*this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this == &rhs)
		return *this;
	this->_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ofstream file;
	std::string copy = this->_target;
	char newStr[copy.length() + 11];
	std::strcpy(newStr, copy.c_str());
	std::strcat(newStr, "_shrubbery");
	if (executor.checkValidGrade() == 1 && this->getSignStatus() && executor.getGrade() <= this->getRequiredExecuteGrade()){
		file.open(newStr);
		file << "        ###### ######" << std::endl;
		file << "     ### \\/#|### |/####" << std::endl;
		file << "   ##\\/#/ \\||/##/_/##/_#" << std::endl;
		file << "  ###  \\/###|/ \\/ # ###" << std::endl;
		file << " ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		file << "## #### # \\ #| /  #### ##/##" << std::endl;
		file << "__#_--###` # #|{,###---###-~" << std::endl;
		file << "            \\}{" << std::endl;
		file << "            }}{" << std::endl;
		file << "            }}{" << std::endl;
		file << "            {{}" << std::endl;
		file.close();
	} else if (executor.getGrade() > this->getRequiredExecuteGrade()){
		throw GradeToLow;
	} else {
		throw GradeNotValid;
	}
}
