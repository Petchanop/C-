/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:42:32 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 21:24:45 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & copy);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & rhs);
		static void convert(std::string type);
		static void handleLiterals(std::string type);
};

#endif
