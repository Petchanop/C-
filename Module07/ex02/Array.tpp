/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:10:02 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/16 14:23:43 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.h"

template<class T>
Array<T>::Array():element(0),_len(0){}

template<class T>
Array<T>::Array(unsigned int n):_len(n){
	element = new T[n];
	for (unsigned int i = 0; i < n; i++){
		element[i] = T();
	}
}

template<class T>
Array<T>::~Array(){
	delete[] element;
}

template<class T>
Array<T>::Array(Array &copy){
	_len = copy.size();
	element = new T[_len];
	for (unsigned int i = 0; i < copy.size(); i++){
		this->element[i] = copy[i];
	}
}

template<class T>
T & Array<T>::operator[](int index) const{
	try
	{
		if ((size_t)index < _len && index >= 0)
			return element[index];
		else
			throw(IndexOutofBound);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	exit(EXIT_FAILURE);
}

template<class T>
size_t Array<T>::size(){
	return (_len);
}

#endif
