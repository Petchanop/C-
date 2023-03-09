/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:28 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/07 23:02:03 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->fixVal = 0;
}

Fixed::Fixed( Fixed& copy){
	this->fixVal = copy.fixVal;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed& fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	fixVal = fixed.fixVal;
	return (*this);
}

int	Fixed::getRawBits( void ){
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixVal);
}

void Fixed::setRawBits( int const raw ){
	this->fixVal = raw;
}