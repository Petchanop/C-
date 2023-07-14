/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/14 20:57:32 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

void RPN::addStack(std::string num){
	if (!num.empty()){
		this->stack.push(atoi(num.c_str()));
	}
}

void RPN::InvertedPolishCalculation(char token){
	int num1;
	int num2;
	if (this->stack.size() > 1){
		num1 = this->stack.top();
		this->stack.pop();
		num2 = this->stack.top();
		this->stack.pop();
		std::cout << num1 << " " << token << " " << num2 << std::endl;
		switch (token) {
			case '+':
				this->stack.push(num2 + num1);
				break ;
			case '-':
				this->stack.push(num2 - num1);
				break ;
			case '/':
				if (num1 == 0) {
					std::runtime_error("divide by 0");
				}
				this->stack.push(num2 / num1);
				break ;
			case '*':
				this->stack.push(num2 * num1);
				break ;
		}
	}
}

int RPN::getResult(){
	return this->stack.top();
}

size_t RPN::getSize(){
	return this->stack.size();
}
