/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:05:18 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/27 13:39:43 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy) {
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
	try
	{
		if (this->getSignStatus() && executor.getGrade() < this->getRequiredExecuteGrade()){
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else if (executor.getGrade() > this->getRequiredExecuteGrade()){
			throw GradeToLow;
		} else {
			throw GradeNotValid;
		}
	}
	catch (std::exception e)
	{
		std::cerr << "Can't execute " << this->getName() << " form because " << e.what() << ".";
	}
}
