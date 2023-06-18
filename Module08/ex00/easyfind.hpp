/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:05:09 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/17 01:17:54 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFINE_HPP
# define EASYFINE_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

class OccurrenceNotFoundException : public std::exception {
	public:
		virtual const char * what() const throw(){
			return "Occurrence not found ";
	}
};

template<typename T>int easyfind(T first, int second) {
	try
	{
		OccurrenceNotFoundException OccurrenceNotFound;
		typename T::iterator it = std::find(first.begin(), first.end(), second);
		if (it != first.end())
			return int(*it);
		throw OccurrenceNotFound;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		return second;
	}
}

#endif
