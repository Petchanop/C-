/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:46:51 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 21:56:14 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const & copy){
	*this = copy;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string trimSpace(std::string str)
{
	int	i = 0;
	int	j = 0;
	for (i = 0; i < int(str.length()); i++) {
		if (str[i] >= 33)
			break;
	}
	j = i;
	while (i < int(str.length())){
		if (str[i] < 33 || str[i] == 'f')
		{
			if (!(str[i] == 'f' && i == int(str.length()) - 1))
				return (str);
			else
				break;
		}
		i++;
	}
	return (str.substr(j, i));
}

unsigned int findDecimalPoint(std::string value){
	unsigned int dot = 0;
	unsigned int isZero = 0;
	for (unsigned int i = 0; i < value.length(); i++){
		if (value[i] == '.')
			dot = i;
	}
	for (unsigned int i = dot + 1; i < value.length(); i++){
		if (value[i] == '0')
			isZero = i;
		else
			break;
	}
	if (isZero == value.length() - 2 || isZero == value.length() - 1)
	{
		if (isZero == value.length() - 2 && value[value.length() - 1] == 'f')
			return 0;
		if (isZero == value.length() - 1)
			return 0;
	}
	return (dot);
}

bool stringContains(std::string value, std::string word){
	for (unsigned int i = 0; i < value.length(); i++){
		if (i + word.length() <= value.length () && value.compare(i, i + word.length(), word))
			return true;
	}
	return false;
}

void ScalarConverter::convert(std::string type){
	std::string trimString = trimSpace(type);
	std::istringstream str(trimString);
	double numDouble;
	str >> numDouble;
	std::cout << numDouble << " this value shoulde equal " << type << std::endl;
	if (!trimString.empty() && (isdigit(trimString[0]) || (trimString[0] == '-' && isdigit(trimString[1])))){
		if (isprint(numDouble)){
			std::cout << "char: " << "'" << static_cast<char>(numDouble) << "'" << std::endl;
		} else if (!isprint(numDouble)){
			std::cout << "char: Non displayable" <<  std::endl;
		}
		if (numDouble < std::numeric_limits<int>::min() || numDouble > std::numeric_limits<int>::max()) {
			std::cout << "int: " << "impossible" << std::endl;
		}
		else {
			std::cout << "int: " << static_cast<int>(numDouble) << std::endl;
		}
		if (findDecimalPoint(trimString)){
			if (numDouble > std::numeric_limits<float>::min() && numDouble < std::numeric_limits<float>::max())
				std::cout << "float: " << static_cast<float>(numDouble) << "f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(numDouble) << std::endl;
			std::cout << "double: " << numDouble << std::endl;
		}
		else {
			if (numDouble > std::numeric_limits<float>::min() && numDouble < std::numeric_limits<float>::max())
				std::cout << "float: " << static_cast<float>(numDouble) << ".0f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(numDouble) << std::endl;
			std::cout << "double: " << numDouble << ".0" << std::endl;
		}
	}
}

void ScalarConverter::handleLiterals(std::string type){
	std::string trimString = trimSpace(type);
	if (!trimString.empty()){
		if (!trimString.compare("nan")){
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "nanf" << std::endl;
			std::cout << "double: " << "nan" << std::endl;
		} else if (!trimString.compare("inf")){
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "inf" << std::endl;
			std::cout << "double: " << "inf" << std::endl;
		} else if (!trimString.compare("inff")){
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "inff" << std::endl;
			std::cout << "double: " << "inff" << std::endl;
		}else if (!trimString.compare("-inf")){
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "-inf" << std::endl;
			std::cout << "double: " << "-inf" << std::endl;
		} else if (!trimString.compare("-inff")){
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "-inff" << std::endl;
			std::cout << "double: " << "-inff" << std::endl;
		}
	}
}
