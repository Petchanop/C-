/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:18:41 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/16 01:31:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span {
	private:
		std::vector<int>	_num;
		size_t	_size;
		int		_shortest;
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int num);
		void addNumber(int size, int num);
		int shortestSpan();
		int longestSpan();
		void showMember();
		class NoSpandCanbeFound : public std::exception {
			public:
				virtual const char * what() const throw(){
					return "No span can be found.\n";
				}
		}NoSpanFound;
};

#endif
