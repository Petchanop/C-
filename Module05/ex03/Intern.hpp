/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:23:04 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 15:49:23 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &copy);
		~Intern();
		Intern & operator=(Intern const &rhs);
		unsigned int SearchForm(std::string const & name) const;
		AForm *makeForm(std::string name, std::string target);
		class FormNotExistexceptopm: public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Form not exist.\n";
				}
		} FormNotExist;
};

#endif
