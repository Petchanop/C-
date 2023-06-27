/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/27 13:41:54 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):Form(copy){
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this == &rhs)
		return *this;
	this->_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try
	{
		if (this->getSignStatus() && executor.getGrade() < this->getRequiredExecuteGrade()){
			std::cout << "Bzzzz Bzzzz Bzzzz ....." << std::endl;
			std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
		}
		else if (executor.getGrade() > this->getRequiredExecuteGrade()){
			throw GradeToLow;
		} else {
			throw GradeNotValid;
		}
	}
	catch (std::exception e)
	{
		std::cerr << "the robotomy failed." << std::endl;
		std::cerr << "Can't execute " << this->getName() << " form because " << e.what() << ".";
	}
}
