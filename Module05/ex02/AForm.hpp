/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:18:03 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/25 23:50:50 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class AForm {
	private:
		const std::string _name;
		bool 		_signed;
		const int		_gradetosign;
		const int		_gradetoexc;
	public:
		AForm & operator = (Form const & rhs);
		std::string getName() const;
		int getRequiredGrade() const;
		int getRequiredExecuteGrade() const;
		void beSigned(const Bureaucrat &b);

};

#endif