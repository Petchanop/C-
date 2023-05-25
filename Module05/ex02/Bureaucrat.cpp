/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:14:31 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/25 22:11:45 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name):_name(name){
	std::cout << "Bureaucrat " << _name << " has been created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
}

Bureaucrat & Bureaucrat::operator =(const Bureaucrat &rhs) { 
	if (this != &rhs){
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream & operator <<(std::ostream &out, const Bureaucrat &c){
	if (c.checkValidGrade() > 0)
		out << c.getName() << ", bureaucrat grade " << c.getGrade() << "." << std::endl;
	else
		out << c.getName() << " grade not valid." << std::endl;
	return out;
}

Bureaucrat::~Bureaucrat(void){}

void	Bureaucrat::setGrade(int grade){
	try
	{
		this->_grade = grade;
		if (this->checkValidGrade() > 0)
			std::cout << *this;
		else if (this->checkValidGrade() == 0)
			throw GradeTooHigh;
		else
			throw GradeTooLow;
	}
	catch (std::exception &e)
	{
		this->_grade = 0;
		std::cout << "Grade for " << this->_name << " not valid." << e.what() << std::endl;
		std::cout << "Please set grade between " << highest << " - " << lowest << "." << std::endl;
	}
}

std::string Bureaucrat::getName( void ) const {
	return (this->_name);
}

int		Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::IncreaseGrade(int num){
	try
	{
		this->_grade -= num;
		if (this->checkValidGrade() > 0)
			std::cout << *this;
		else if (this->checkValidGrade() == 0)
			throw GradeTooHigh;
		else
			throw GradeTooLow;
	}
	catch (std::exception &e)
	{
		std::cout << "Grade not valid." << e.what() << std::endl;
		this->_grade += num;
	}
}

void Bureaucrat::DecreaseGrade(int num){
	try
	{
		this->_grade += num;
		if (this->checkValidGrade() > 0)
			std::cout << *this;
		else if (this->checkValidGrade() == 0)
			throw GradeTooHigh;
		else
			throw GradeTooLow;
	}
	catch (std::exception &e)
	{
		std::cout << "Grade not valid." << e.what() << std::endl;
		this->_grade -= num;
	}
}

int Bureaucrat::checkValidGrade( void ) const {
	if (this->_grade >= this->highest && this->_grade <= this->lowest)
		return 1;
	else if (this->_grade < this->highest) 
		return 0;
	else
		return -1;
}

void Bureaucrat::signForm(Form &f){
	try
	{
		if (this->checkValidGrade() > 0 && this->getGrade() <= f.getRequiredGrade())
		{
			f.beSigned(*this);
			std::cout << this->getName() << " signed " << f.getName() << std::endl;
		}
		else if (this->getGrade() > f.getRequiredGrade())
			throw GradeTooLow;
		else if (this->checkValidGrade() == 0)
			throw GradeTooHigh;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " form because " << e.what() << std::endl;
	}
	
	
	
}