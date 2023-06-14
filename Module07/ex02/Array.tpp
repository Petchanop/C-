/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:10:02 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/14 21:24:25 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){}

Array::Array(unsigned int n):_len(n){
	new Array[n];
}

Array::Array(Array &copy){
	for (int i = 0; i < copy.size; i++){
		this->element[i] = copy[i];
	}
}

Array & operator=(Array const &rhs){
	for (int i = 0; i < rhs.size; i++){
		this->element[i] = rhs[i];
	}
	return *this;
}

T & operator[](int index){
	try
	{
		if (index < _len && index >= 0)
			return element[index];
		else
			throw(IndexOutofBound);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

size_t	Array::size(){
	return _len;
}
