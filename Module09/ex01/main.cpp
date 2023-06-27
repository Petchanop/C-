/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:50 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/26 02:06:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]){
	if (argc == 2){
		std::string input = argv[1];
		std::string mathToken = "+-/*";
		RPN stack;
		for (size_t i = 0; i < input.size(); i++){
			if (isdigit(input[i]))
				stack.addStack(&input[i]);
			if (!(mathToken.find(input[i]) == std::string::npos)){
				stack.InvertedPolishCalculation(input[i]);
			} else if (input[i] != ' ' && !isdigit(input[i])){
				std::cout << "Error\n";
				return EXIT_FAILURE;
			}
		}
		if (stack.getSize() == 1)
			std::cout << stack.getResult() << std::endl;
		else
			std::cout << "Error\n";
	}
	return (0);
}
