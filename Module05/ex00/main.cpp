/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/27 23:43:06 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat earth("earth");
	Bureaucrat Nnew("N'new");
	try
	{
		earth.setGrade(-1);
	}
	catch (std::exception &e)
	{
		std::cout << "Grade for " << earth.getName() << " not valid." << e.what() << std::endl;
	}
	Nnew.setGrade(25);
	earth.DecreaseGrade(10);
	std::cout << "Test" << std::endl;
	std::cout << earth;
	std::cout << Nnew;
	try
	{
		Nnew.IncreaseGrade(25);
	}
	catch (std::exception &e)
	{
		std::cout << "Grade not valid." << e.what() << std::endl;
	}

}
