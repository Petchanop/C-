/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:14:31 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/28 13:48:35 by npiya-is         ###   ########.fr       */
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

Bureaucrat & Bureaucrat::operator =(const Bureaucrat &rhs){
	if (this != &rhs){
		*this = rhs;
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

int Bureaucrat::checkValidGrade( void ){
	if (this->_grade >= this->highest && this->_grade <= this->lowest)
		return 1;
	else if (this->_grade < this->highest)  
		return 0;
	else
		return -1;
}