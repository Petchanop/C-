/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:52:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/07 14:45:45 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a( 0, 0);
	Point b( 10, 30 );
	Point c( 20, 0 );
	Point P1( 10, 15);//inside;
	Point P2( 30, 15);//not inside

	bsp(a, b, c, P1);
	bsp(a, b, c, P2);
	return 0;
}