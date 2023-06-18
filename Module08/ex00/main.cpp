/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:04:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/17 01:16:36 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>
#include <set>
#include <unordered_set>

int main(){
	int values[] = {5, 3, 1, 2, 4};
	 const unsigned int size = sizeof(values) / sizeof(values[0]);

	std::list<int>listNumbers;
	for (unsigned int i = 0; i < size; i++){
		listNumbers.push_back(values[i]);
	}
	int result2 = easyfind(listNumbers, 10);
	std::cout <<  result2 << std::endl;

	std::vector<int>vectorNumbers;
	for (unsigned int i = 0; i < size; i++){
		vectorNumbers.push_back(values[i]);
	}
	int result5 = easyfind(vectorNumbers, 5);
	std::cout << result5 << std::endl;

	// std::unordered_set<int> UnorderedNumbers(values, values + size);
	// int result3 =easyfind(UnorderedNumbers, 4);
	// std::cout <<  result3 << std::endl;

	// std::array<int, 5>arrayNumbers;
	// for (unsigned int i = 0; i < size; i++){
	// 	arrayNumbers[i] = values[i];
	// }
	// int result4 = easyfind(arrayNumbers, 4);
	// std::cout <<  result4 << std::endl;
	// std::set<int>setNumbers(values, values + size);
	// int result1 = easyfind(setNumbers, 4);
	// std::cout <<  result1 << std::endl;

}
