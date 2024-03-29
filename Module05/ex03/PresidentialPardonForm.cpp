/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:05:18 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:02:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): AForm(copy) {
	*this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return *this;
	this->_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.checkValidGrade() == 1 && this->getSignStatus() && executor.getGrade() <= this->getRequiredExecuteGrade()){
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else if (executor.getGrade() > this->getRequiredExecuteGrade()){
		throw GradeToLow;
	} else {
		throw GradeNotValid;
	}
}
