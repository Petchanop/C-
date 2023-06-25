/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:50 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/26 00:15:54 by npiya-is         ###   ########.fr       */
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
			else if (!(mathToken.find(input[i]) == std::string::npos)){
				stack.InvertedPolishCalculation(input[i]);
			}
		}
		std::cout << stack.getResult() << std::endl;
	}
}
