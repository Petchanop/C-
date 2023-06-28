/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:52:44 by npiya-is         ###   ########.fr       */
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
	earth.setGrade(5);
	Nnew.setGrade(25);

	Intern Niinoi;
	AForm *form1;
	AForm *form2;
	AForm *form3;

	std::cout << "--------------------------------------------------------\n";
	std::cout << "Test Intern" << std::endl;


	form1 = Niinoi.makeForm("robotomy request", "Earth");
	form2 = Niinoi.makeForm("presidential pardon", "Pound");
	try
	{
		form3 = Niinoi.makeForm("not found", "Muay");
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "--------------------------------------------------------\n";

	std::cout << "Test form which creates by intern Niinoi\n";
	if (form1 != NULL && form2 != NULL){
		form1->beSigned(earth);
		form1->execute(Nnew);
		try
		{
			form2->beSigned(Nnew);
		}
		catch(std::exception& e)
		{
			std::cout <<Nnew.getName() << " can't sign " << form2->getName() << " Form." << std::endl;
		}
		try
		{
			form2->execute(Nnew);
		}
		catch (std::exception &e)
		{
			std::cerr << Nnew.getName() << " Can't execute " << form2->getName() << " form because " << e.what() << std::endl;
		}
		delete form1;
		delete form2;
	}
	// std::cout << "Test signForm" << std::endl;
	// earth.signForm(form1);
	// Nnew.signForm(form2);
	// std::cout << "Test = operator" << std::endl;
	// Bureaucrat earth2 = earth;
	// std::cout << "Bureaucrat operator = test : " << earth2;
	// Form test = physics;
	// std::cout << "Form operator = test : " << test;



}
