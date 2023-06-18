/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:25:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/18 23:05:04 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N){
	_shortest = INT_MAX;
	_size = N;
}

Span::~Span(){}

void Span::addNumber(int num){
	int i = 0;
	if (_num.size() < _size){
		_num.push_back(num);
		for(std::vector<int>::iterator it = _num.begin(); it != _num.end(); it++){
			if (num > *it){
				i++;
			}
		}
		_num.pop_back();
		_num.insert(_num.begin() + i, num);
		for (std::vector<int>::iterator it = _num.begin(); it != _num.end(); it++){
			if (num != *it && abs(num - *it) < _shortest)
				_shortest = abs(num - *it);
		}
	} else {
		std::cerr << "Span has " << _size << " limit capacity.\n";
	}
}

int Span::shortestSpan(){
	return _shortest;
}

int Span::longestSpan(){
	std::vector<int>::iterator num1 = _num.begin();
	std::vector<int>::iterator num2 = _num.end();
	return *(num2 - 1) - *num1;
}
