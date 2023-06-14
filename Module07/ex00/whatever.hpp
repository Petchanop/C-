/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:39:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/14 15:53:51 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T &x, T &y){
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T> T min(T x, T y){
	if (x > y)
		return (y);
	else
		return (x);
}

template<typename T> T max(T x, T y){
	if (x > y)
		return (x);
	else
		return (y);
}

#endif
