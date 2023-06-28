/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:14:42 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 14:28:48 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "Form.hpp"

class Form;
class AForm;

class Bureaucrat {
	public:
		Bureaucrat( void );
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat( void );
		Bureaucrat & operator=(const Bureaucrat &rhs) ;
		void setGrade(int grade);
		std::string getName( void ) const;
		int getGrade( void ) const;
		void IncreaseGrade(int num);
		void DecreaseGrade(int num);
		int checkValidGrade( void ) const;
		void signForm( AForm &f );
		void executeForm(AForm const &form);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw(){
					return "Grade too high.";
				}
		} GradeTooHigh;
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw(){
					return "Grade too low.";
				}
		} GradeTooLow;
		class GradeNotValidException: public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Grade not valid.";
				}
		} GradeNotValid;
	private:
		const std::string _name;
		int		_grade;
		static const int highest = 1;
		static const int lowest = 150;
};

std::ostream & operator <<(std::ostream &out, const Bureaucrat &c);

#endif
