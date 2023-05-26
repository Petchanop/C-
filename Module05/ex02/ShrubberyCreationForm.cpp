/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:24:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/26 15:54:09 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 37){
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ofstream file;
	try
	{
		if (this->getSignStatus() && executor.getGrade() < this->getRequiredExecuteGrade()){
			file.open(this->_target + "_shrubbery");
			file << "		# #### ####" << std::endl;
			file << " 	 ### \/#|### |/####" << std::endl;
			file << "    ##\/#/ \||/##/_/##/_#" << std::endl;
			file << "   ###  \/###|/ \/ # ###" << std::endl;
			file << " ##_\_#\_\## | #/###_/_####" << std::endl;
			file << "## #### # \ #| /  #### ##/##" << std::endl;
			file << "__#_--###`  |{,###---###-~" << std::endl;
			file << "			\ }{" << std::endl;
			file << "			 }}{" << std::endl;
			file << "			 }}{" << std::endl;
			file << "			 {{}" << std::endl;
			file.close();
		} else if (executor.getGrade() > this->getRequiredExecuteGrade()){
			throw GradeToLow;
		} else {
			throw GradeNotValid;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't execute " << this->getName() << " form because " << e.what() << ".";
	}
}