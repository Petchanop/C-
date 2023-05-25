/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/25 22:10:37 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat earth("earth");
	Bureaucrat Nnew("N'new");
	earth.setGrade(-1);
	Nnew.setGrade(25);
	std::cout << "Test" << std::endl;
	std::cout << earth;
	std::cout << Nnew;

	Form physics("physics", 100, 80);
	Form socialSci("socialSci", 100, 70);

	std::cout << "Test beSigned" << std::endl;

	physics.beSigned(earth);
	socialSci.beSigned(Nnew);

	std::cout << "Test signForm" << std::endl;
	earth.signForm(socialSci);
	Nnew.signForm(socialSci);
	std::cout << "Test = operator" << std::endl;
	Bureaucrat earth2 = earth;
	std::cout << "Bureaucrat operator = test : " << earth2;
	Form test = physics;
	std::cout << "Form operator = test : " << test;



}