/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:04:07 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat earth("earth");
	Bureaucrat Nnew("N'new");
	std::cout << "--------------------------------------------------------\n";
	try
	{
		earth.setGrade(-1);
	}
	catch (std::exception &e)
	{
		std::cout << "Grade for " << earth.getName() << " not valid." << e.what() << std::endl;
	}
	Nnew.setGrade(4);
	std::cout << "Test" << std::endl;
	std::cout << earth;
	std::cout << Nnew;

	ShrubberyCreationForm form1("fah");
	RobotomyRequestForm form2("Niinoi");
	PresidentialPardonForm form3("Sound");


	std::cout << "--------------------------------------------------------\n";
	std::cout << "Test beSigned" << std::endl;

	try
	{
		form1.beSigned(earth);
	}
	catch(std::exception& e)
	{
		std::cout << earth.getName() << " can't sign " << form1.getName() << " Form." << std::endl;
	}
	form1.beSigned(Nnew);
	form2.beSigned(Nnew);
	form3.beSigned(Nnew);

	std::cout << "--------------------------------------------------------\n";
	std::cout << "Test execute" << std::endl;
	try
	{
		form1.execute(earth);
	}
	catch (std::exception &e)
	{
		std::cerr << earth.getName() << " Can't execute " << form1.getName() << " form because " << e.what() << ".";
	}
	try
	{
		form1.execute(Nnew);
	}
	catch (std::exception &e)
	{
		std::cerr << Nnew.getName() << " Can't execute " << form1.getName() << " form because " << e.what() << ".\n";
	}
	form2.execute(Nnew);
	form3.execute(Nnew);

	std::cout << "--------------------------------------------------------\n";
	std::cout << "Test executeForm" << std::endl;
	try
	{
		earth.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << earth.getName() << " Can't execute " << form1.getName() << " form because " << e.what() << ".\n";
	}
	Nnew.executeForm(form1);
	try
	{
		earth.executeForm(form2);
	}
	catch (std::exception &e)
	{
		std::cerr << earth.getName() << " Can't execute " << form2.getName() << " form because " << e.what() << ".\n";
	}
	Nnew.executeForm(form2);

	std::cout << "--------------------------------------------------------\n";
	std::cout << "Test signForm" << std::endl;
	try
	{
		earth.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << earth.getName() << " couldn't sign " << form1.getName() << " form because " << e.what() << std::endl;
	}
	Nnew.signForm(form2);
}
