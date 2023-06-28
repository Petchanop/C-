/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:29:46 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:07:17 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ):_signed(false),_gradetosign(150),_gradetoexc(150){
	std::cout << "Form constructor Called." << std::endl;
}

Form::Form( std::string name , int sign, int exe):_name(name),_signed(false),_gradetosign(sign),_gradetoexc(exe){}

Form::Form( const Form &copy):_gradetosign(copy.getRequiredGrade()), _gradetoexc(copy.getRequiredExecuteGrade()){
	const_cast<std::string&>(this->_name) = copy.getName();
	this->_signed = copy._signed;
}

Form & Form::operator =(const Form &rhs){
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_signed = rhs._signed;
	}
	return *this;
}

Form::~Form( void ){}

void Form::beSigned(const Bureaucrat &b){
	if (b.checkValidGrade() > 0 && b.getGrade() < this->_gradetosign){
		this->_signed = true;
		std::cout << b.getName() << " can sign " << this->getName() << " Form." << std::endl;
	}
	else if (b.checkValidGrade() == 0)
		throw GradeToHigh;
	else
		throw GradeToLow;
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getRequiredGrade() const {
	return this->_gradetosign;
}

int Form::getRequiredExecuteGrade() const {
	return this->_gradetoexc;
}

std::ostream & operator << (std::ostream &out, Form const &f){
	out << f.getName() << " Form has required " << f.getRequiredGrade() << " to sign and " << f.getRequiredExecuteGrade();
	out << " grade to execute." << std::endl;
	return out;
}

void	Form::hasSigned(void){
	if (this->_signed)
		std::cout << this->_name << " has been signed." << std::endl;
	else
		std::cout << this->_name << " has not been signed." << std::endl;
}
