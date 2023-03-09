/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:10:28 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/08 17:12:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed( int const value ){
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = value << _fractbit;
}

Fixed::Fixed( float const value){
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(value * (1 << _fractbit));
}

Fixed::Fixed( Fixed const & copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = fixed._fixedPoint;
	return (*this);
}

int	Fixed::getRawBits( void ){
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw ){
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const {
	float tofloat = static_cast<float>(this->_fixedPoint) / (1 << _fractbit); 
	return (tofloat);
}

int	Fixed::toInt( void ) const {
	int	toInt = (this->_fixedPoint >> _fractbit);
	return	(toInt);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << i.toFloat();
	return o;
}