/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:18:43 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/29 15:12:55 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool 		_signed;
		const int		_gradetosign;
		const int		_gradetoexc;
	public:
		Form( void );
		Form(std::string name, int sign, int exe);
		Form(Form const &copy);
		Form & operator = (Form const & rhs);
		~Form( void );
		std::string getName() const;
		int getRequiredGrade() const;
		int getRequiredExecuteGrade() const;
		void hasSigned();
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
};

std::ostream & operator << (std::ostream &out, Form const &f);

#endif