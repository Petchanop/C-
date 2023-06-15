/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:44:47 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/15 23:47:07 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <class T>
class Array {
	private:
		T	*element;
		size_t	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &copy);
		~Array();
		T & operator[](int index) const;
		size_t size();
		class IndexOutofBound : public std::exception{
			public:
				virtual const char * what() const throw(){
					return "Index out of bounds.";
				}
		} IndexOutofBound;
};

#include "Array.tpp"

#endif
