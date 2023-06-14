/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:44:47 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/14 21:21:35 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T>
class Array {
	private:
		T *element;
		size_t _len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &copy);
		Array & operator=(Array const &rhs);
		T & operator[](int index);
		class IndexOutofBound : public std::exception{
			public:
				virtual const char * what() const throw(){
					return "Index out of bounds.";
				}
		} IndexOutofBound;
		size_t size();
};

#endif
