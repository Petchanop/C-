/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:46:51 by npiya-is          #+#    #+#             */
/*   Updated: 2023/05/30 00:55:03 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string type){
	if (std::stoi(type)){
		if (isprint(std::stoi(type))){
			std::cout << "char: " << char(std::stoi(type) + '0') << std::endl;
		} else if (!isprint(std::stoi(type))){
			std::cout << "char: Non displayable" <<  std::endl;
		}
		if (std::stoi(type)){
			std::cout << "int: " << std::stoi(type) << std::endl;
		}
		if (std::stof(type)){
			std::cout << "float: " << std::stof(type) << "f" << std::endl;
		}
		if (std::stod(type)){
			std::cout << "double: " << std::stod(type) << std::endl;
		}
	}
}