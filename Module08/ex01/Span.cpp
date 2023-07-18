/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:25:48 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/16 01:44:24 by npiya-is         ###   ########.fr       */
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

void Span::addNumber(int size, int num){
	int i = 0;
	if (_num.size() < _size){
		_num.push_back(num);
		for(std::vector<int>::iterator it = _num.begin(); it != _num.end(); it++){
			if (num > *it){
				i++;
			}
		}
		_num.pop_back();
		for (int j = 0; j < size; j++){
			if (_num.size() < _size)
				_num.insert(_num.begin() + i + j, num);
			else {
				std::cout << "Span has " << _size << " limit capacity.\n";
				break ;
			}
		}
		for (std::vector<int>::iterator it = _num.begin(); it != _num.end(); it++){
			if (num != *it && abs(num - *it) < _shortest)
				_shortest = abs(num - *it);
		}
	} else {
		std::cout << "Span has " << _size << " limit capacity.\n";
	}

}

int Span::shortestSpan(){
	if (_num.size() < 2){
		throw NoSpanFound;
		return 0;
	}
	return _shortest;
}

int Span::longestSpan(){
	if (_num.size() < 2){
		throw NoSpanFound;
		return 0;
	}
	std::vector<int>::iterator num1 = _num.begin();
	std::vector<int>::iterator num2 = _num.end();
	return *(num2 - 1) - *num1;
}

void Span::showMember(){
	if (_num.size()){
		for(std::vector<int>::iterator it = _num.begin(); it != _num.end(); it++){
			if (it != _num.end() - 1)
				std::cout << *it << " ";
			else
				std::cout << *it;
		}
		std::cout << std::endl;
	}
}
