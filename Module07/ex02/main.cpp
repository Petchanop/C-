/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:44:42 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/15 23:55:12 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"
#include <iostream>
#include <iterator>
#include <array>

int main(void){
	std::cout << "Test create int array instance size 5.\n";
	Array<int>intArray(5);
	std::cout << "Array size : " << intArray.size() << std::endl;

	std::cout << "Show array is initialize by default value.\n";
	std::cout << intArray[0] << std::endl;
	std::cout << intArray[1] << std::endl;
	std::cout << intArray[2] << std::endl;
	std::cout << intArray[3] << std::endl;
	std::cout << intArray[4] << std::endl;

	std::cout << "initialize index 0 equal 1.\n";
	intArray[0] = 1;
	std::cout << intArray[0] << std::endl;

	std::cout << "Create string array size 10.\n";
	Array<std::string>stringArray(10);

	std::string test = "test";
	for (size_t i = 0; i < stringArray.size(); i++){
		char ch = i + 49;
		stringArray[i] = test + ch;
	}

	for (size_t i = 0; i < stringArray.size(); i++){
		std::cout << "string array index " << i << " is " << stringArray[i] << std::endl;
	}

	std::cout << "Create empty array.\n";
	Array<std::string>Outofbound;
	std::cout << "show size of array equal " << Outofbound.size() << std::endl;
	std::cout << Outofbound[0] << std::endl;
}
