/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:50 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/26 01:33:02 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]){
	if (argc == 2){
		std::string input = argv[1];
		std::string mathToken = "+-/*";
		RPN stack;
		for (std::string::reverse_iterator rit=input.rbegin(); rit != input.rend(); rit++){
			if (isdigit(*rit))
				stack.addStack(&(*rit));
		}
		for (size_t i = 0; i < input.size(); i++){
			if (!(mathToken.find(input[i]) == std::string::npos)){
				stack.InvertedPolishCalculation(input[i]);
			} else if (input[i] != ' ' && !isdigit(input[i])){
				std::cout << "Error\n";
				return EXIT_FAILURE;
			}
		}
		std::cout << stack.getResult() << std::endl;
	}
	return (0);
}
