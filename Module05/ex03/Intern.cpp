/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:28:04 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/29 00:08:06 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

enum FormValid{RobotomyRequest, PresidentialPardon, ShrubberyCreation};

Intern::Intern(){}

Intern::Intern(Intern const & copy){
	*this = copy;
}

Intern & Intern::operator=(Intern const &rhs){
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

Intern::~Intern(){}

unsigned int Intern::SearchForm(std::string const & name) const {
	unsigned int index = -1;
	std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (unsigned int i = 0; i < sizeof(form) / sizeof(std::string); i++){
		if (form[i].compare(name) == 0){
			index = i;
			std::cout << "Intern creates " << name << std::endl;
			return (index);
		}
	}
	std::cout << "Intern can't create " << name << " form." << std::endl;
	return (index);
}

AForm *Intern::makeForm(std::string name, std::string target) {
	switch (SearchForm(name)) {
		case (RobotomyRequest):
			return (new RobotomyRequestForm(target));
		case (PresidentialPardon):
			return (new PresidentialPardonForm(target));
		case (ShrubberyCreation):
			return (new ShrubberyCreationForm(target));
		default:
			break;
	}
	return (NULL);
}
