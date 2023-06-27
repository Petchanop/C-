/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:46:51 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/27 14:32:01 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
		if (str[i] < 33)
			break;
		i++;
	}
	return (str.substr(j, i));
}

unsigned int findDecimalPoint(std::string value){
	for (unsigned int i = 0; i < value.length(); i++){
		if (value[i] == '.')
			return (i);
	}
	return (0);
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
	std::stringstream strInt(trimString);
	std::istringstream strFloat(trimString);
	std::istringstream str(trimString);
	int numInt;
	float numFloat;
	double numDouble;
	strFloat >> numFloat;
	strInt >> numInt;
	str >> numDouble;
	if (!trimString.empty() && (isdigit(trimString[0]) || (trimString[0] == '-' && isdigit(trimString[1])))){
		if (isprint(numInt)){
			std::cout << "char: " << "'" << char(numInt) << "'" << std::endl;
		} else if (!isprint(numInt)){
			std::cout << "char: Non displayable" <<  std::endl;
		}
		std::cout << "int: " << numInt << std::endl;
		if (findDecimalPoint(trimString)){
			std::cout << "float: " << numFloat << "f" << std::endl;
			std::cout << "double: " << numDouble << std::endl;
		} else {
			std::cout << "float: " << numFloat << ".0f" << std::endl;
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
