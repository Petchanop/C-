/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:19:26 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 23:56:51 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <cstring>

class ShrubberyCreationForm: public AForm {
	private:
		std::string 	_target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		void execute(Bureaucrat const & executor) const;
};

#endif
