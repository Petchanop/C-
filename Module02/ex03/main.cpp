/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:52:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/02 17:03:06 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a( 0, 0);
	Point b( 10, 30 );
	Point c( 20, 0 );
	Point P( 10, 5);

	std::cout << bsp(a, b, c, P) << std::endl;
	
	return 0;
}