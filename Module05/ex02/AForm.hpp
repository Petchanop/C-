/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:18:03 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/26 15:54:38 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool 		_signed;
		const int		_gradetosign;
		const int		_gradetoexc;
	public:
		AForm( void );
		AForm(std::string name, int sign, int exe);
		virtual ~AForm( void ) = 0;
		AForm & operator = (AForm const & rhs);
		std::string getName() const;
		int getRequiredGrade() const;
		int getRequiredExecuteGrade() const;
		int getSignStatus() const ;
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const = 0;
		class GradeTooLowException: public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Grade Too low.";
				}
		} GradeToLow;
		class GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Grade Too high.";
				}
		} GradeToHigh;
		class GradeNotValidException: public std::exception {
			public: 
				virtual const char * what() const throw() {
					return "Grade not valid.";
				}
		} GradeNotValid;
		class FormNotSignException: public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Form not signe.";
				}
		} FormNotSign;
};

#endif