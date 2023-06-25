/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/26 01:35:21 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

void RPN::addStack(std::string num){
	if (!num.empty()){
		this->stack.push(std::stoi(num));
	}
}

void RPN::InvertedPolishCalculation(char token){
	int num1;
	int num2;
	num1 = this->stack.top();
	this->stack.pop();
	num2 = this->stack.top();
	this->stack.pop();
	switch (token) {
		case '+':
			this->stack.push(num1 + num2);
			break ;
		case '-':
			this->stack.push(num1 - num2);
			break ;
		case '/':
			this->stack.push(num1 / num2);
			break ;
		case '*':
			this->stack.push(num1 * num2);
			break ;
	}
}

int RPN::getResult(){
	return this->stack.top();
}

size_t RPN::getSize(){
	return this->stack.size();
}
