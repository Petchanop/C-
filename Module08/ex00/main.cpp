/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:04:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/03 15:07:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main(){
	try
	{
		int values[] = {5, 3, 1, 2, 4};
		const unsigned int size = sizeof(values) / sizeof(values[0]);

		std::list<int>listNumbers;
		for (unsigned int i = 0; i < size; i++){
			listNumbers.push_back(values[i]);
		}
		int result2 = easyfind(listNumbers, 1);
		std::cout <<  result2 << std::endl;

		std::vector<int>vectorNumbers;
		for (unsigned int i = 0; i < size; i++){
			vectorNumbers.push_back(values[i]);
		}
		int result5 = easyfind(vectorNumbers, 5);
		std::cout << result5 << std::endl;
		
		int result6 = easyfind(vectorNumbers, 7);
		std::cout << result6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}
