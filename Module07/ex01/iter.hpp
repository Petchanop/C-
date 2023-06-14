/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/14 17:37:48 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>void iter(T *ptr, size_t ptrLen, void (*func)(T&)){
	for (size_t i = 0; i < ptrLen; i++)
		func(ptr[i]);
}

#endif
