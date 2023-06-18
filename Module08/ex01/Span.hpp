/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:18:41 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/18 23:00:59 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int>	_num;
		size_t	_size;
		int		_shortest;
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
};

#endif
