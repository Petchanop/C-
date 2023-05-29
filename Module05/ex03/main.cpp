/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/29 15:15:47 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat earth("earth");
	Bureaucrat Nnew("N'new");
	earth.setGrade(-1);
	Nnew.setGrade(25);
	std::cout << "Test" << std::endl;
	std::cout << earth;
	std::cout << Nnew;

	// ShrubberyCreationForm form1("fah");
	// RobotomyRequestForm form2("Niinoi");
	// PresidentialPardonForm form3("Sound");
	Intern Niinoi;
	Form *form1;
	Form *form2;

	std::cout << "Test beSigned" << std::endl;

	// std::cout << Niinoi.SearchForm("robotomy request") << std::endl;

	form1 = Niinoi.makeForm("robotoy request", "Earth");
	form2 = Niinoi.makeForm("shrubbery creation", "Pound");	

	form1->execute(Nnew);
	form2->beSigned(Nnew);
	form2->execute(Nnew);
	// std::cout << "Test signForm" << std::endl;
	// earth.signForm(form1);
	// Nnew.signForm(form2);
	// std::cout << "Test = operator" << std::endl;
	// Bureaucrat earth2 = earth;
	// std::cout << "Bureaucrat operator = test : " << earth2;
	// Form test = physics;
	// std::cout << "Form operator = test : " << test;



}