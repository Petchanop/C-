/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:17:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 14:26:39 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ):_signed(false),_gradetosign(150),_gradetoexc(150){
	std::cout << "AForm constructor Called." << std::endl;
}

AForm::AForm( std::string name , int sign, int exe):_name(name),_signed(false),_gradetosign(sign),_gradetoexc(exe){}

AForm::~AForm( void ){}

AForm::AForm( const AForm &copy):_gradetosign(copy.getRequiredGrade()), _gradetoexc(copy.getRequiredExecuteGrade()){
	const_cast<std::string&>(this->_name) = copy.getName();
	this->_signed = copy._signed;
}

AForm & AForm::operator =(const AForm &rhs){
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_signed = rhs._signed;
	}
	return *this;
}

void AForm::beSigned(const Bureaucrat &b){
	if (b.checkValidGrade() > 0 && b.getGrade() < this->_gradetosign){
		this->_signed = true;
		std::cout << b.getName() << " can sign " << this->getName() << " Form." << std::endl;
	}
	else if (b.checkValidGrade() == 0)
		throw GradeToHigh;
	else
		throw GradeToLow;
}

std::string AForm::getName() const {
	return this->_name;
}

int AForm::getRequiredGrade() const {
	return this->_gradetosign;
}

int AForm::getRequiredExecuteGrade() const {
	return this->_gradetoexc;
}

int AForm::getSignStatus() const {
	if (this->_signed)
		return (1);
	return 0;
}
