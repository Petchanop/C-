/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:02:33 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):AForm(copy){
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
	if (executor.checkValidGrade() == 1 && this->getSignStatus() && executor.getGrade() <= this->getRequiredExecuteGrade()){
		if (executor.getGrade() % 2 == 0) {
			std::cout << "Bzzzz Bzzzz Bzzzz ....." << std::endl;
			std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
		}
		else
			std::cerr << this->_target << " robotomy failed." << std::endl;
	}
	else if (executor.getGrade() > this->getRequiredExecuteGrade()){
		throw GradeToLow;
	} else {
		throw GradeNotValid;
	}
}
